///// Automatically generated by makeproxy, don't modify! /////

#include "proxy_WinSCard_imp.h"
#include "data_WinSCard.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

HINSTANCE hMod = 0;

BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		int i;
		char csPath[_MAX_PATH];
		if (0 == GetSystemDirectoryA(csPath, (UINT) sizeof(csPath)))
			csPath[0] = 0;
		for (i = 0; REAL_LIBS[i] && !hMod; i++)
		{
			const char *s = strstr(REAL_LIBS[i], "%SYSTEM32%");
			if (s == NULL)
				hMod = LoadLibraryA(REAL_LIBS[i]);
			else
			{
				strcat_s(csPath, sizeof(csPath), REAL_LIBS[i] + strlen("%SYSTEM32%"));
				hMod = LoadLibraryA(csPath);
			}
		}
		if (!hMod)
		{
			printf("ERR DllMain(DLL_PROCESS_ATTACH): unable to load any of the %d REAL_LIBS", i);
			return false;
		}

		void *pg_rgSCardT0Pci = (void *)
			GetProcAddress(hMod, "g_rgSCardT0Pci");
		Init_g_rgSCardT0Pci(pg_rgSCardT0Pci);
		void *pg_rgSCardT1Pci = (void *)
			GetProcAddress(hMod, "g_rgSCardT1Pci");
		Init_g_rgSCardT1Pci(pg_rgSCardT1Pci);
		void *pg_rgSCardRawPci = (void *)
			GetProcAddress(hMod, "g_rgSCardRawPci");
		Init_g_rgSCardRawPci(pg_rgSCardRawPci);
		pSCardEstablishContext = (tSCardEstablishContext)
			GetProcAddress(hMod, "SCardEstablishContext");
		pSCardReleaseContext = (tSCardReleaseContext)
			GetProcAddress(hMod, "SCardReleaseContext");
		pSCardIsValidContext = (tSCardIsValidContext)
			GetProcAddress(hMod, "SCardIsValidContext");
		pSCardListReaderGroupsA = (tSCardListReaderGroupsA)
			GetProcAddress(hMod, "SCardListReaderGroupsA");
		pSCardListReaderGroupsW = (tSCardListReaderGroupsW)
			GetProcAddress(hMod, "SCardListReaderGroupsW");
		pSCardListReadersA = (tSCardListReadersA)
			GetProcAddress(hMod, "SCardListReadersA");
		pSCardListReadersW = (tSCardListReadersW)
			GetProcAddress(hMod, "SCardListReadersW");
		pSCardListCardsA = (tSCardListCardsA)
			GetProcAddress(hMod, "SCardListCardsA");
		pSCardListCardsW = (tSCardListCardsW)
			GetProcAddress(hMod, "SCardListCardsW");
		pSCardListInterfacesA = (tSCardListInterfacesA)
			GetProcAddress(hMod, "SCardListInterfacesA");
		pSCardListInterfacesW = (tSCardListInterfacesW)
			GetProcAddress(hMod, "SCardListInterfacesW");
		pSCardGetProviderIdA = (tSCardGetProviderIdA)
			GetProcAddress(hMod, "SCardGetProviderIdA");
		pSCardGetProviderIdW = (tSCardGetProviderIdW)
			GetProcAddress(hMod, "SCardGetProviderIdW");
		pSCardGetCardTypeProviderNameA = (tSCardGetCardTypeProviderNameA)
			GetProcAddress(hMod, "SCardGetCardTypeProviderNameA");
		pSCardGetCardTypeProviderNameW = (tSCardGetCardTypeProviderNameW)
			GetProcAddress(hMod, "SCardGetCardTypeProviderNameW");
		pSCardIntroduceReaderGroupA = (tSCardIntroduceReaderGroupA)
			GetProcAddress(hMod, "SCardIntroduceReaderGroupA");
		pSCardIntroduceReaderGroupW = (tSCardIntroduceReaderGroupW)
			GetProcAddress(hMod, "SCardIntroduceReaderGroupW");
		pSCardForgetReaderGroupA = (tSCardForgetReaderGroupA)
			GetProcAddress(hMod, "SCardForgetReaderGroupA");
		pSCardForgetReaderGroupW = (tSCardForgetReaderGroupW)
			GetProcAddress(hMod, "SCardForgetReaderGroupW");
		pSCardIntroduceReaderA = (tSCardIntroduceReaderA)
			GetProcAddress(hMod, "SCardIntroduceReaderA");
		pSCardIntroduceReaderW = (tSCardIntroduceReaderW)
			GetProcAddress(hMod, "SCardIntroduceReaderW");
		pSCardForgetReaderA = (tSCardForgetReaderA)
			GetProcAddress(hMod, "SCardForgetReaderA");
		pSCardForgetReaderW = (tSCardForgetReaderW)
			GetProcAddress(hMod, "SCardForgetReaderW");
		pSCardAddReaderToGroupA = (tSCardAddReaderToGroupA)
			GetProcAddress(hMod, "SCardAddReaderToGroupA");
		pSCardAddReaderToGroupW = (tSCardAddReaderToGroupW)
			GetProcAddress(hMod, "SCardAddReaderToGroupW");
		pSCardRemoveReaderFromGroupA = (tSCardRemoveReaderFromGroupA)
			GetProcAddress(hMod, "SCardRemoveReaderFromGroupA");
		pSCardRemoveReaderFromGroupW = (tSCardRemoveReaderFromGroupW)
			GetProcAddress(hMod, "SCardRemoveReaderFromGroupW");
		pSCardIntroduceCardTypeA = (tSCardIntroduceCardTypeA)
			GetProcAddress(hMod, "SCardIntroduceCardTypeA");
		pSCardIntroduceCardTypeW = (tSCardIntroduceCardTypeW)
			GetProcAddress(hMod, "SCardIntroduceCardTypeW");
		pSCardSetCardTypeProviderNameA = (tSCardSetCardTypeProviderNameA)
			GetProcAddress(hMod, "SCardSetCardTypeProviderNameA");
		pSCardSetCardTypeProviderNameW = (tSCardSetCardTypeProviderNameW)
			GetProcAddress(hMod, "SCardSetCardTypeProviderNameW");
		pSCardForgetCardTypeA = (tSCardForgetCardTypeA)
			GetProcAddress(hMod, "SCardForgetCardTypeA");
		pSCardForgetCardTypeW = (tSCardForgetCardTypeW)
			GetProcAddress(hMod, "SCardForgetCardTypeW");
		pSCardFreeMemory = (tSCardFreeMemory)
			GetProcAddress(hMod, "SCardFreeMemory");
		pSCardAccessStartedEvent = (tSCardAccessStartedEvent)
			GetProcAddress(hMod, "SCardAccessStartedEvent");
		pSCardReleaseStartedEvent = (tSCardReleaseStartedEvent)
			GetProcAddress(hMod, "SCardReleaseStartedEvent");
		pSCardLocateCardsA = (tSCardLocateCardsA)
			GetProcAddress(hMod, "SCardLocateCardsA");
		pSCardLocateCardsW = (tSCardLocateCardsW)
			GetProcAddress(hMod, "SCardLocateCardsW");
		pSCardLocateCardsByATRA = (tSCardLocateCardsByATRA)
			GetProcAddress(hMod, "SCardLocateCardsByATRA");
		pSCardLocateCardsByATRW = (tSCardLocateCardsByATRW)
			GetProcAddress(hMod, "SCardLocateCardsByATRW");
		pSCardGetStatusChangeA = (tSCardGetStatusChangeA)
			GetProcAddress(hMod, "SCardGetStatusChangeA");
		pSCardGetStatusChangeW = (tSCardGetStatusChangeW)
			GetProcAddress(hMod, "SCardGetStatusChangeW");
		pSCardCancel = (tSCardCancel)
			GetProcAddress(hMod, "SCardCancel");
		pSCardConnectA = (tSCardConnectA)
			GetProcAddress(hMod, "SCardConnectA");
		pSCardConnectW = (tSCardConnectW)
			GetProcAddress(hMod, "SCardConnectW");
		pSCardReconnect = (tSCardReconnect)
			GetProcAddress(hMod, "SCardReconnect");
		pSCardDisconnect = (tSCardDisconnect)
			GetProcAddress(hMod, "SCardDisconnect");
		pSCardBeginTransaction = (tSCardBeginTransaction)
			GetProcAddress(hMod, "SCardBeginTransaction");
		pSCardEndTransaction = (tSCardEndTransaction)
			GetProcAddress(hMod, "SCardEndTransaction");
		pSCardCancelTransaction = (tSCardCancelTransaction)
			GetProcAddress(hMod, "SCardCancelTransaction");
		pSCardState = (tSCardState)
			GetProcAddress(hMod, "SCardState");
		pSCardStatusA = (tSCardStatusA)
			GetProcAddress(hMod, "SCardStatusA");
		pSCardStatusW = (tSCardStatusW)
			GetProcAddress(hMod, "SCardStatusW");
		pSCardTransmit = (tSCardTransmit)
			GetProcAddress(hMod, "SCardTransmit");
		pSCardGetTransmitCount = (tSCardGetTransmitCount)
			GetProcAddress(hMod, "SCardGetTransmitCount");
		pSCardControl = (tSCardControl)
			GetProcAddress(hMod, "SCardControl");
		pSCardGetAttrib = (tSCardGetAttrib)
			GetProcAddress(hMod, "SCardGetAttrib");
		pSCardSetAttrib = (tSCardSetAttrib)
			GetProcAddress(hMod, "SCardSetAttrib");
		pSCardUIDlgSelectCardA = (tSCardUIDlgSelectCardA)
			GetProcAddress(hMod, "SCardUIDlgSelectCardA");
		pSCardUIDlgSelectCardW = (tSCardUIDlgSelectCardW)
			GetProcAddress(hMod, "SCardUIDlgSelectCardW");
		pGetOpenCardNameA = (tGetOpenCardNameA)
			GetProcAddress(hMod, "GetOpenCardNameA");
		pGetOpenCardNameW = (tGetOpenCardNameW)
			GetProcAddress(hMod, "GetOpenCardNameW");
		pSCardDlgExtendedError = (tSCardDlgExtendedError)
			GetProcAddress(hMod, "SCardDlgExtendedError");
		pSCardReadCacheA = (tSCardReadCacheA)
			GetProcAddress(hMod, "SCardReadCacheA");
		pSCardReadCacheW = (tSCardReadCacheW)
			GetProcAddress(hMod, "SCardReadCacheW");
		pSCardWriteCacheA = (tSCardWriteCacheA)
			GetProcAddress(hMod, "SCardWriteCacheA");
		pSCardWriteCacheW = (tSCardWriteCacheW)
			GetProcAddress(hMod, "SCardWriteCacheW");

		proxy_init();
	}


	if (reason == DLL_PROCESS_DETACH)
	{
		if(hMod != 0)
			FreeLibrary(hMod);

		proxy_exit();
	}

	return true;
}

tSCardEstablishContext pSCardEstablishContext;
tSCardReleaseContext pSCardReleaseContext;
tSCardIsValidContext pSCardIsValidContext;
tSCardListReaderGroupsA pSCardListReaderGroupsA;
tSCardListReaderGroupsW pSCardListReaderGroupsW;
tSCardListReadersA pSCardListReadersA;
tSCardListReadersW pSCardListReadersW;
tSCardListCardsA pSCardListCardsA;
tSCardListCardsW pSCardListCardsW;
tSCardListInterfacesA pSCardListInterfacesA;
tSCardListInterfacesW pSCardListInterfacesW;
tSCardGetProviderIdA pSCardGetProviderIdA;
tSCardGetProviderIdW pSCardGetProviderIdW;
tSCardGetCardTypeProviderNameA pSCardGetCardTypeProviderNameA;
tSCardGetCardTypeProviderNameW pSCardGetCardTypeProviderNameW;
tSCardIntroduceReaderGroupA pSCardIntroduceReaderGroupA;
tSCardIntroduceReaderGroupW pSCardIntroduceReaderGroupW;
tSCardForgetReaderGroupA pSCardForgetReaderGroupA;
tSCardForgetReaderGroupW pSCardForgetReaderGroupW;
tSCardIntroduceReaderA pSCardIntroduceReaderA;
tSCardIntroduceReaderW pSCardIntroduceReaderW;
tSCardForgetReaderA pSCardForgetReaderA;
tSCardForgetReaderW pSCardForgetReaderW;
tSCardAddReaderToGroupA pSCardAddReaderToGroupA;
tSCardAddReaderToGroupW pSCardAddReaderToGroupW;
tSCardRemoveReaderFromGroupA pSCardRemoveReaderFromGroupA;
tSCardRemoveReaderFromGroupW pSCardRemoveReaderFromGroupW;
tSCardIntroduceCardTypeA pSCardIntroduceCardTypeA;
tSCardIntroduceCardTypeW pSCardIntroduceCardTypeW;
tSCardSetCardTypeProviderNameA pSCardSetCardTypeProviderNameA;
tSCardSetCardTypeProviderNameW pSCardSetCardTypeProviderNameW;
tSCardForgetCardTypeA pSCardForgetCardTypeA;
tSCardForgetCardTypeW pSCardForgetCardTypeW;
tSCardFreeMemory pSCardFreeMemory;
tSCardAccessStartedEvent pSCardAccessStartedEvent;
tSCardReleaseStartedEvent pSCardReleaseStartedEvent;
tSCardLocateCardsA pSCardLocateCardsA;
tSCardLocateCardsW pSCardLocateCardsW;
tSCardLocateCardsByATRA pSCardLocateCardsByATRA;
tSCardLocateCardsByATRW pSCardLocateCardsByATRW;
tSCardGetStatusChangeA pSCardGetStatusChangeA;
tSCardGetStatusChangeW pSCardGetStatusChangeW;
tSCardCancel pSCardCancel;
tSCardConnectA pSCardConnectA;
tSCardConnectW pSCardConnectW;
tSCardReconnect pSCardReconnect;
tSCardDisconnect pSCardDisconnect;
tSCardBeginTransaction pSCardBeginTransaction;
tSCardEndTransaction pSCardEndTransaction;
tSCardCancelTransaction pSCardCancelTransaction;
tSCardState pSCardState;
tSCardStatusA pSCardStatusA;
tSCardStatusW pSCardStatusW;
tSCardTransmit pSCardTransmit;
tSCardGetTransmitCount pSCardGetTransmitCount;
tSCardControl pSCardControl;
tSCardGetAttrib pSCardGetAttrib;
tSCardSetAttrib pSCardSetAttrib;
tSCardUIDlgSelectCardA pSCardUIDlgSelectCardA;
tSCardUIDlgSelectCardW pSCardUIDlgSelectCardW;
tGetOpenCardNameA pGetOpenCardNameA;
tGetOpenCardNameW pGetOpenCardNameW;
tSCardDlgExtendedError pSCardDlgExtendedError;
tSCardReadCacheA pSCardReadCacheA;
tSCardReadCacheW pSCardReadCacheW;
tSCardWriteCacheA pSCardWriteCacheA;
tSCardWriteCacheW pSCardWriteCacheW;

extern WINSCARDAPI LONG WINAPI SCardEstablishContext( DWORD dwScope,  LPCVOID pvReserved1,  LPCVOID pvReserved2, LPSCARDCONTEXT phContext)
{
#ifdef USE_PROXY_LIB_FOR_SCardEstablishContext
	return imp_SCardEstablishContext(dwScope, pvReserved1, pvReserved2, phContext);
#else
	return pSCardEstablishContext(dwScope, pvReserved1, pvReserved2, phContext);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardReleaseContext(     SCARDCONTEXT hContext)
{
#ifdef USE_PROXY_LIB_FOR_SCardReleaseContext
	return imp_SCardReleaseContext(hContext);
#else
	return pSCardReleaseContext(hContext);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardIsValidContext(     SCARDCONTEXT hContext)
{
#ifdef USE_PROXY_LIB_FOR_SCardIsValidContext
	return imp_SCardIsValidContext(hContext);
#else
	return pSCardIsValidContext(hContext);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardListReaderGroupsA(     SCARDCONTEXT hContext,     LPSTR mszGroups,  LPDWORD pcchGroups)
{
#ifdef USE_PROXY_LIB_FOR_SCardListReaderGroupsA
	return imp_SCardListReaderGroupsA(hContext, mszGroups, pcchGroups);
#else
	return pSCardListReaderGroupsA(hContext, mszGroups, pcchGroups);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardListReaderGroupsW(     SCARDCONTEXT hContext,     LPWSTR mszGroups,  LPDWORD pcchGroups)
{
#ifdef USE_PROXY_LIB_FOR_SCardListReaderGroupsW
	return imp_SCardListReaderGroupsW(hContext, mszGroups, pcchGroups);
#else
	return pSCardListReaderGroupsW(hContext, mszGroups, pcchGroups);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardListReadersA(     SCARDCONTEXT hContext,      LPCSTR mszGroups,     LPSTR mszReaders,  LPDWORD pcchReaders)
{
#ifdef USE_PROXY_LIB_FOR_SCardListReadersA
	return imp_SCardListReadersA(hContext, mszGroups, mszReaders, pcchReaders);
#else
	return pSCardListReadersA(hContext, mszGroups, mszReaders, pcchReaders);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardListReadersW(     SCARDCONTEXT hContext,      LPCWSTR mszGroups,     LPWSTR mszReaders,  LPDWORD pcchReaders)
{
#ifdef USE_PROXY_LIB_FOR_SCardListReadersW
	return imp_SCardListReadersW(hContext, mszGroups, mszReaders, pcchReaders);
#else
	return pSCardListReadersW(hContext, mszGroups, mszReaders, pcchReaders);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardListCardsA(     SCARDCONTEXT hContext,      LPCBYTE pbAtr,      LPCGUID rgquidInterfaces,      DWORD cguidInterfaceCount,     LPSTR mszCards,  LPDWORD pcchCards)
{
#ifdef USE_PROXY_LIB_FOR_SCardListCardsA
	return imp_SCardListCardsA(hContext, pbAtr, rgquidInterfaces, cguidInterfaceCount, mszCards, pcchCards);
#else
	return pSCardListCardsA(hContext, pbAtr, rgquidInterfaces, cguidInterfaceCount, mszCards, pcchCards);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardListCardsW(     SCARDCONTEXT hContext,      LPCBYTE pbAtr,      LPCGUID rgquidInterfaces,      DWORD cguidInterfaceCount,     LPWSTR mszCards,  LPDWORD pcchCards)
{
#ifdef USE_PROXY_LIB_FOR_SCardListCardsW
	return imp_SCardListCardsW(hContext, pbAtr, rgquidInterfaces, cguidInterfaceCount, mszCards, pcchCards);
#else
	return pSCardListCardsW(hContext, pbAtr, rgquidInterfaces, cguidInterfaceCount, mszCards, pcchCards);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardListInterfacesA(     SCARDCONTEXT hContext,      LPCSTR szCard,     LPGUID pguidInterfaces,  LPDWORD pcguidInterfaces)
{
#ifdef USE_PROXY_LIB_FOR_SCardListInterfacesA
	return imp_SCardListInterfacesA(hContext, szCard, pguidInterfaces, pcguidInterfaces);
#else
	return pSCardListInterfacesA(hContext, szCard, pguidInterfaces, pcguidInterfaces);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardListInterfacesW(     SCARDCONTEXT hContext,      LPCWSTR szCard,     LPGUID pguidInterfaces,  LPDWORD pcguidInterfaces)
{
#ifdef USE_PROXY_LIB_FOR_SCardListInterfacesW
	return imp_SCardListInterfacesW(hContext, szCard, pguidInterfaces, pcguidInterfaces);
#else
	return pSCardListInterfacesW(hContext, szCard, pguidInterfaces, pcguidInterfaces);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardGetProviderIdA(     SCARDCONTEXT hContext,      LPCSTR szCard,     LPGUID pguidProviderId)
{
#ifdef USE_PROXY_LIB_FOR_SCardGetProviderIdA
	return imp_SCardGetProviderIdA(hContext, szCard, pguidProviderId);
#else
	return pSCardGetProviderIdA(hContext, szCard, pguidProviderId);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardGetProviderIdW(     SCARDCONTEXT hContext,      LPCWSTR szCard,     LPGUID pguidProviderId)
{
#ifdef USE_PROXY_LIB_FOR_SCardGetProviderIdW
	return imp_SCardGetProviderIdW(hContext, szCard, pguidProviderId);
#else
	return pSCardGetProviderIdW(hContext, szCard, pguidProviderId);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardGetCardTypeProviderNameA(SCARDCONTEXT hContext, LPCSTR szCardName, DWORD dwProviderId, LPSTR szProvider, LPDWORD pcchProvider)
{
#ifdef USE_PROXY_LIB_FOR_SCardGetCardTypeProviderNameA
	return imp_SCardGetCardTypeProviderNameA(hContext, szCardName, dwProviderId, szProvider, pcchProvider);
#else
	return pSCardGetCardTypeProviderNameA(hContext, szCardName, dwProviderId, szProvider, pcchProvider);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardGetCardTypeProviderNameW(SCARDCONTEXT hContext, LPCWSTR szCardName, DWORD dwProviderId, LPWSTR szProvider, LPDWORD pcchProvider)
{
#ifdef USE_PROXY_LIB_FOR_SCardGetCardTypeProviderNameW
	return imp_SCardGetCardTypeProviderNameW(hContext, szCardName, dwProviderId, szProvider, pcchProvider);
#else
	return pSCardGetCardTypeProviderNameW(hContext, szCardName, dwProviderId, szProvider, pcchProvider);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardIntroduceReaderGroupA(SCARDCONTEXT hContext, LPCSTR szGroupName)
{
#ifdef USE_PROXY_LIB_FOR_SCardIntroduceReaderGroupA
	return imp_SCardIntroduceReaderGroupA(hContext, szGroupName);
#else
	return pSCardIntroduceReaderGroupA(hContext, szGroupName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardIntroduceReaderGroupW(SCARDCONTEXT hContext, LPCWSTR szGroupName)
{
#ifdef USE_PROXY_LIB_FOR_SCardIntroduceReaderGroupW
	return imp_SCardIntroduceReaderGroupW(hContext, szGroupName);
#else
	return pSCardIntroduceReaderGroupW(hContext, szGroupName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardForgetReaderGroupA(SCARDCONTEXT hContext, LPCSTR szGroupName)
{
#ifdef USE_PROXY_LIB_FOR_SCardForgetReaderGroupA
	return imp_SCardForgetReaderGroupA(hContext, szGroupName);
#else
	return pSCardForgetReaderGroupA(hContext, szGroupName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardForgetReaderGroupW(SCARDCONTEXT hContext, LPCWSTR szGroupName)
{
#ifdef USE_PROXY_LIB_FOR_SCardForgetReaderGroupW
	return imp_SCardForgetReaderGroupW(hContext, szGroupName);
#else
	return pSCardForgetReaderGroupW(hContext, szGroupName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardIntroduceReaderA(SCARDCONTEXT hContext, LPCSTR szReaderName, LPCSTR szDeviceName)
{
#ifdef USE_PROXY_LIB_FOR_SCardIntroduceReaderA
	return imp_SCardIntroduceReaderA(hContext, szReaderName, szDeviceName);
#else
	return pSCardIntroduceReaderA(hContext, szReaderName, szDeviceName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardIntroduceReaderW(SCARDCONTEXT hContext, LPCWSTR szReaderName, LPCWSTR szDeviceName)
{
#ifdef USE_PROXY_LIB_FOR_SCardIntroduceReaderW
	return imp_SCardIntroduceReaderW(hContext, szReaderName, szDeviceName);
#else
	return pSCardIntroduceReaderW(hContext, szReaderName, szDeviceName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardForgetReaderA(SCARDCONTEXT hContext, LPCSTR szReaderName)
{
#ifdef USE_PROXY_LIB_FOR_SCardForgetReaderA
	return imp_SCardForgetReaderA(hContext, szReaderName);
#else
	return pSCardForgetReaderA(hContext, szReaderName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardForgetReaderW(SCARDCONTEXT hContext, LPCWSTR szReaderName)
{
#ifdef USE_PROXY_LIB_FOR_SCardForgetReaderW
	return imp_SCardForgetReaderW(hContext, szReaderName);
#else
	return pSCardForgetReaderW(hContext, szReaderName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardAddReaderToGroupA(SCARDCONTEXT hContext, LPCSTR szReaderName, LPCSTR szGroupName)
{
#ifdef USE_PROXY_LIB_FOR_SCardAddReaderToGroupA
	return imp_SCardAddReaderToGroupA(hContext, szReaderName, szGroupName);
#else
	return pSCardAddReaderToGroupA(hContext, szReaderName, szGroupName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardAddReaderToGroupW(SCARDCONTEXT hContext, LPCWSTR szReaderName, LPCWSTR szGroupName)
{
#ifdef USE_PROXY_LIB_FOR_SCardAddReaderToGroupW
	return imp_SCardAddReaderToGroupW(hContext, szReaderName, szGroupName);
#else
	return pSCardAddReaderToGroupW(hContext, szReaderName, szGroupName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardRemoveReaderFromGroupA(SCARDCONTEXT hContext, LPCSTR szReaderName, LPCSTR szGroupName)
{
#ifdef USE_PROXY_LIB_FOR_SCardRemoveReaderFromGroupA
	return imp_SCardRemoveReaderFromGroupA(hContext, szReaderName, szGroupName);
#else
	return pSCardRemoveReaderFromGroupA(hContext, szReaderName, szGroupName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardRemoveReaderFromGroupW(SCARDCONTEXT hContext, LPCWSTR szReaderName, LPCWSTR szGroupName)
{
#ifdef USE_PROXY_LIB_FOR_SCardRemoveReaderFromGroupW
	return imp_SCardRemoveReaderFromGroupW(hContext, szReaderName, szGroupName);
#else
	return pSCardRemoveReaderFromGroupW(hContext, szReaderName, szGroupName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardIntroduceCardTypeA(SCARDCONTEXT hContext, LPCSTR szCardName, LPCGUID pguidPrimaryProvider, LPCGUID rgguidInterfaces, DWORD dwInterfaceCount, LPCBYTE pbAtr, LPCBYTE pbAtrMask, DWORD cbAtrLen)
{
#ifdef USE_PROXY_LIB_FOR_SCardIntroduceCardTypeA
	return imp_SCardIntroduceCardTypeA(hContext, szCardName, pguidPrimaryProvider, rgguidInterfaces, dwInterfaceCount, pbAtr, pbAtrMask, cbAtrLen);
#else
	return pSCardIntroduceCardTypeA(hContext, szCardName, pguidPrimaryProvider, rgguidInterfaces, dwInterfaceCount, pbAtr, pbAtrMask, cbAtrLen);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardIntroduceCardTypeW(SCARDCONTEXT hContext, LPCWSTR szCardName, LPCGUID pguidPrimaryProvider, LPCGUID rgguidInterfaces, DWORD dwInterfaceCount, LPCBYTE pbAtr, LPCBYTE pbAtrMask, DWORD cbAtrLen)
{
#ifdef USE_PROXY_LIB_FOR_SCardIntroduceCardTypeW
	return imp_SCardIntroduceCardTypeW(hContext, szCardName, pguidPrimaryProvider, rgguidInterfaces, dwInterfaceCount, pbAtr, pbAtrMask, cbAtrLen);
#else
	return pSCardIntroduceCardTypeW(hContext, szCardName, pguidPrimaryProvider, rgguidInterfaces, dwInterfaceCount, pbAtr, pbAtrMask, cbAtrLen);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardSetCardTypeProviderNameA(SCARDCONTEXT hContext, LPCSTR szCardName, DWORD dwProviderId, LPCSTR szProvider)
{
#ifdef USE_PROXY_LIB_FOR_SCardSetCardTypeProviderNameA
	return imp_SCardSetCardTypeProviderNameA(hContext, szCardName, dwProviderId, szProvider);
#else
	return pSCardSetCardTypeProviderNameA(hContext, szCardName, dwProviderId, szProvider);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardSetCardTypeProviderNameW(SCARDCONTEXT hContext, LPCWSTR szCardName, DWORD dwProviderId, LPCWSTR szProvider)
{
#ifdef USE_PROXY_LIB_FOR_SCardSetCardTypeProviderNameW
	return imp_SCardSetCardTypeProviderNameW(hContext, szCardName, dwProviderId, szProvider);
#else
	return pSCardSetCardTypeProviderNameW(hContext, szCardName, dwProviderId, szProvider);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardForgetCardTypeA(SCARDCONTEXT hContext, LPCSTR szCardName)
{
#ifdef USE_PROXY_LIB_FOR_SCardForgetCardTypeA
	return imp_SCardForgetCardTypeA(hContext, szCardName);
#else
	return pSCardForgetCardTypeA(hContext, szCardName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardForgetCardTypeW(SCARDCONTEXT hContext, LPCWSTR szCardName)
{
#ifdef USE_PROXY_LIB_FOR_SCardForgetCardTypeW
	return imp_SCardForgetCardTypeW(hContext, szCardName);
#else
	return pSCardForgetCardTypeW(hContext, szCardName);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardFreeMemory(SCARDCONTEXT hContext, LPCVOID pvMem)
{
#ifdef USE_PROXY_LIB_FOR_SCardFreeMemory
	return imp_SCardFreeMemory(hContext, pvMem);
#else
	return pSCardFreeMemory(hContext, pvMem);
#endif
}

extern WINSCARDAPI HANDLE WINAPI SCardAccessStartedEvent(void )
{
#ifdef USE_PROXY_LIB_FOR_SCardAccessStartedEvent
	return imp_SCardAccessStartedEvent();
#else
	return pSCardAccessStartedEvent();
#endif
}

extern WINSCARDAPI void WINAPI SCardReleaseStartedEvent(void )
{
#ifdef USE_PROXY_LIB_FOR_SCardReleaseStartedEvent
	imp_SCardReleaseStartedEvent();
#else
	pSCardReleaseStartedEvent();
#endif
}

extern WINSCARDAPI LONG WINAPI SCardLocateCardsA(     SCARDCONTEXT hContext,      LPCSTR mszCards,  LPSCARD_READERSTATEA rgReaderStates,      DWORD cReaders)
{
#ifdef USE_PROXY_LIB_FOR_SCardLocateCardsA
	return imp_SCardLocateCardsA(hContext, mszCards, rgReaderStates, cReaders);
#else
	return pSCardLocateCardsA(hContext, mszCards, rgReaderStates, cReaders);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardLocateCardsW(     SCARDCONTEXT hContext,      LPCWSTR mszCards,  LPSCARD_READERSTATEW rgReaderStates,      DWORD cReaders)
{
#ifdef USE_PROXY_LIB_FOR_SCardLocateCardsW
	return imp_SCardLocateCardsW(hContext, mszCards, rgReaderStates, cReaders);
#else
	return pSCardLocateCardsW(hContext, mszCards, rgReaderStates, cReaders);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardLocateCardsByATRA(     SCARDCONTEXT hContext,      LPSCARD_ATRMASK rgAtrMasks,      DWORD cAtrs,  LPSCARD_READERSTATEA rgReaderStates,      DWORD cReaders)
{
#ifdef USE_PROXY_LIB_FOR_SCardLocateCardsByATRA
	return imp_SCardLocateCardsByATRA(hContext, rgAtrMasks, cAtrs, rgReaderStates, cReaders);
#else
	return pSCardLocateCardsByATRA(hContext, rgAtrMasks, cAtrs, rgReaderStates, cReaders);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardLocateCardsByATRW(     SCARDCONTEXT hContext,      LPSCARD_ATRMASK rgAtrMasks,      DWORD cAtrs,  LPSCARD_READERSTATEW rgReaderStates,      DWORD cReaders)
{
#ifdef USE_PROXY_LIB_FOR_SCardLocateCardsByATRW
	return imp_SCardLocateCardsByATRW(hContext, rgAtrMasks, cAtrs, rgReaderStates, cReaders);
#else
	return pSCardLocateCardsByATRW(hContext, rgAtrMasks, cAtrs, rgReaderStates, cReaders);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardGetStatusChangeA(     SCARDCONTEXT hContext,      DWORD dwTimeout,  LPSCARD_READERSTATEA rgReaderStates,      DWORD cReaders)
{
#ifdef USE_PROXY_LIB_FOR_SCardGetStatusChangeA
	return imp_SCardGetStatusChangeA(hContext, dwTimeout, rgReaderStates, cReaders);
#else
	return pSCardGetStatusChangeA(hContext, dwTimeout, rgReaderStates, cReaders);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardGetStatusChangeW(     SCARDCONTEXT hContext,      DWORD dwTimeout,  LPSCARD_READERSTATEW rgReaderStates,      DWORD cReaders)
{
#ifdef USE_PROXY_LIB_FOR_SCardGetStatusChangeW
	return imp_SCardGetStatusChangeW(hContext, dwTimeout, rgReaderStates, cReaders);
#else
	return pSCardGetStatusChangeW(hContext, dwTimeout, rgReaderStates, cReaders);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardCancel(     SCARDCONTEXT hContext)
{
#ifdef USE_PROXY_LIB_FOR_SCardCancel
	return imp_SCardCancel(hContext);
#else
	return pSCardCancel(hContext);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardConnectA(     SCARDCONTEXT hContext,      LPCSTR szReader,      DWORD dwShareMode,      DWORD dwPreferredProtocols,     LPSCARDHANDLE phCard,     LPDWORD pdwActiveProtocol)
{
#ifdef USE_PROXY_LIB_FOR_SCardConnectA
	return imp_SCardConnectA(hContext, szReader, dwShareMode, dwPreferredProtocols, phCard, pdwActiveProtocol);
#else
	return pSCardConnectA(hContext, szReader, dwShareMode, dwPreferredProtocols, phCard, pdwActiveProtocol);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardConnectW(     SCARDCONTEXT hContext,      LPCWSTR szReader,      DWORD dwShareMode,      DWORD dwPreferredProtocols,     LPSCARDHANDLE phCard,     LPDWORD pdwActiveProtocol)
{
#ifdef USE_PROXY_LIB_FOR_SCardConnectW
	return imp_SCardConnectW(hContext, szReader, dwShareMode, dwPreferredProtocols, phCard, pdwActiveProtocol);
#else
	return pSCardConnectW(hContext, szReader, dwShareMode, dwPreferredProtocols, phCard, pdwActiveProtocol);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardReconnect(     SCARDHANDLE hCard,      DWORD dwShareMode,      DWORD dwPreferredProtocols,      DWORD dwInitialization,     LPDWORD pdwActiveProtocol)
{
#ifdef USE_PROXY_LIB_FOR_SCardReconnect
	return imp_SCardReconnect(hCard, dwShareMode, dwPreferredProtocols, dwInitialization, pdwActiveProtocol);
#else
	return pSCardReconnect(hCard, dwShareMode, dwPreferredProtocols, dwInitialization, pdwActiveProtocol);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardDisconnect(     SCARDHANDLE hCard,      DWORD dwDisposition)
{
#ifdef USE_PROXY_LIB_FOR_SCardDisconnect
	return imp_SCardDisconnect(hCard, dwDisposition);
#else
	return pSCardDisconnect(hCard, dwDisposition);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardBeginTransaction(     SCARDHANDLE hCard)
{
#ifdef USE_PROXY_LIB_FOR_SCardBeginTransaction
	return imp_SCardBeginTransaction(hCard);
#else
	return pSCardBeginTransaction(hCard);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardEndTransaction(     SCARDHANDLE hCard,      DWORD dwDisposition)
{
#ifdef USE_PROXY_LIB_FOR_SCardEndTransaction
	return imp_SCardEndTransaction(hCard, dwDisposition);
#else
	return pSCardEndTransaction(hCard, dwDisposition);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardCancelTransaction(     SCARDHANDLE hCard)
{
#ifdef USE_PROXY_LIB_FOR_SCardCancelTransaction
	return imp_SCardCancelTransaction(hCard);
#else
	return pSCardCancelTransaction(hCard);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardState(SCARDHANDLE hCard, LPDWORD pdwState, LPDWORD pdwProtocol, LPBYTE pbAtr, LPDWORD pcbAtrLen)
{
#ifdef USE_PROXY_LIB_FOR_SCardState
	return imp_SCardState(hCard, pdwState, pdwProtocol, pbAtr, pcbAtrLen);
#else
	return pSCardState(hCard, pdwState, pdwProtocol, pbAtr, pcbAtrLen);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardStatusA(SCARDHANDLE hCard, LPSTR szReaderName, LPDWORD pcchReaderLen, LPDWORD pdwState, LPDWORD pdwProtocol, LPBYTE pbAtr, LPDWORD pcbAtrLen)
{
#ifdef USE_PROXY_LIB_FOR_SCardStatusA
	return imp_SCardStatusA(hCard, szReaderName, pcchReaderLen, pdwState, pdwProtocol, pbAtr, pcbAtrLen);
#else
	return pSCardStatusA(hCard, szReaderName, pcchReaderLen, pdwState, pdwProtocol, pbAtr, pcbAtrLen);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardStatusW(SCARDHANDLE hCard, LPWSTR szReaderName, LPDWORD pcchReaderLen, LPDWORD pdwState, LPDWORD pdwProtocol, LPBYTE pbAtr, LPDWORD pcbAtrLen)
{
#ifdef USE_PROXY_LIB_FOR_SCardStatusW
	return imp_SCardStatusW(hCard, szReaderName, pcchReaderLen, pdwState, pdwProtocol, pbAtr, pcbAtrLen);
#else
	return pSCardStatusW(hCard, szReaderName, pcchReaderLen, pdwState, pdwProtocol, pbAtr, pcbAtrLen);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardTransmit(SCARDHANDLE hCard, LPCSCARD_IO_REQUEST pioSendPci, LPCBYTE pbSendBuffer, DWORD cbSendLength, LPSCARD_IO_REQUEST pioRecvPci, LPBYTE pbRecvBuffer, LPDWORD pcbRecvLength)
{
#ifdef USE_PROXY_LIB_FOR_SCardTransmit
	return imp_SCardTransmit(hCard, pioSendPci, pbSendBuffer, cbSendLength, pioRecvPci, pbRecvBuffer, pcbRecvLength);
#else
	return pSCardTransmit(hCard, pioSendPci, pbSendBuffer, cbSendLength, pioRecvPci, pbRecvBuffer, pcbRecvLength);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardGetTransmitCount(SCARDHANDLE hCard, LPDWORD pcTransmitCount)
{
#ifdef USE_PROXY_LIB_FOR_SCardGetTransmitCount
	return imp_SCardGetTransmitCount(hCard, pcTransmitCount);
#else
	return pSCardGetTransmitCount(hCard, pcTransmitCount);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardControl(     SCARDHANDLE hCard,      DWORD dwControlCode,      LPCVOID lpInBuffer,      DWORD nInBufferSize,     LPVOID lpOutBuffer,      DWORD nOutBufferSize,     LPDWORD lpBytesReturned)
{
#ifdef USE_PROXY_LIB_FOR_SCardControl
	return imp_SCardControl(hCard, dwControlCode, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesReturned);
#else
	return pSCardControl(hCard, dwControlCode, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesReturned);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardGetAttrib(SCARDHANDLE hCard, DWORD dwAttrId, LPBYTE pbAttr, LPDWORD pcbAttrLen)
{
#ifdef USE_PROXY_LIB_FOR_SCardGetAttrib
	return imp_SCardGetAttrib(hCard, dwAttrId, pbAttr, pcbAttrLen);
#else
	return pSCardGetAttrib(hCard, dwAttrId, pbAttr, pcbAttrLen);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardSetAttrib(SCARDHANDLE hCard, DWORD dwAttrId, LPCBYTE pbAttr, DWORD cbAttrLen)
{
#ifdef USE_PROXY_LIB_FOR_SCardSetAttrib
	return imp_SCardSetAttrib(hCard, dwAttrId, pbAttr, cbAttrLen);
#else
	return pSCardSetAttrib(hCard, dwAttrId, pbAttr, cbAttrLen);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardUIDlgSelectCardA(LPOPENCARDNAMEA_EX p1)
{
#ifdef USE_PROXY_LIB_FOR_SCardUIDlgSelectCardA
	return imp_SCardUIDlgSelectCardA(p1);
#else
	return pSCardUIDlgSelectCardA(p1);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardUIDlgSelectCardW(LPOPENCARDNAMEW_EX p1)
{
#ifdef USE_PROXY_LIB_FOR_SCardUIDlgSelectCardW
	return imp_SCardUIDlgSelectCardW(p1);
#else
	return pSCardUIDlgSelectCardW(p1);
#endif
}

extern WINSCARDAPI LONG WINAPI GetOpenCardNameA(LPOPENCARDNAMEA p1)
{
#ifdef USE_PROXY_LIB_FOR_GetOpenCardNameA
	return imp_GetOpenCardNameA(p1);
#else
	return pGetOpenCardNameA(p1);
#endif
}

extern WINSCARDAPI LONG WINAPI GetOpenCardNameW(LPOPENCARDNAMEW p1)
{
#ifdef USE_PROXY_LIB_FOR_GetOpenCardNameW
	return imp_GetOpenCardNameW(p1);
#else
	return pGetOpenCardNameW(p1);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardDlgExtendedError(void )
{
#ifdef USE_PROXY_LIB_FOR_SCardDlgExtendedError
	return imp_SCardDlgExtendedError();
#else
	return pSCardDlgExtendedError();
#endif
}

extern WINSCARDAPI LONG WINAPI SCardReadCacheA(SCARDCONTEXT hContext, UUID * CardIdentifier, DWORD FreshnessCounter, LPSTR LookupName, PBYTE Data, DWORD * DataLen)
{
#ifdef USE_PROXY_LIB_FOR_SCardReadCacheA
	return imp_SCardReadCacheA(hContext, CardIdentifier, FreshnessCounter, LookupName, Data, DataLen);
#else
	return pSCardReadCacheA(hContext, CardIdentifier, FreshnessCounter, LookupName, Data, DataLen);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardReadCacheW(SCARDCONTEXT hContext, UUID * CardIdentifier, DWORD FreshnessCounter, LPWSTR LookupName, PBYTE Data, DWORD * DataLen)
{
#ifdef USE_PROXY_LIB_FOR_SCardReadCacheW
	return imp_SCardReadCacheW(hContext, CardIdentifier, FreshnessCounter, LookupName, Data, DataLen);
#else
	return pSCardReadCacheW(hContext, CardIdentifier, FreshnessCounter, LookupName, Data, DataLen);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardWriteCacheA(SCARDCONTEXT hContext, UUID * CardIdentifier, DWORD FreshnessCounter, LPSTR LookupName, PBYTE Data, DWORD DataLen)
{
#ifdef USE_PROXY_LIB_FOR_SCardWriteCacheA
	return imp_SCardWriteCacheA(hContext, CardIdentifier, FreshnessCounter, LookupName, Data, DataLen);
#else
	return pSCardWriteCacheA(hContext, CardIdentifier, FreshnessCounter, LookupName, Data, DataLen);
#endif
}

extern WINSCARDAPI LONG WINAPI SCardWriteCacheW(SCARDCONTEXT hContext, UUID * CardIdentifier, DWORD FreshnessCounter, LPWSTR LookupName, PBYTE Data, DWORD DataLen)
{
#ifdef USE_PROXY_LIB_FOR_SCardWriteCacheW
	return imp_SCardWriteCacheW(hContext, CardIdentifier, FreshnessCounter, LookupName, Data, DataLen);
#else
	return pSCardWriteCacheW(hContext, CardIdentifier, FreshnessCounter, LookupName, Data, DataLen);
#endif
}
