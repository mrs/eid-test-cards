///// Automatically generated by makeproxy, don't modify! /////

#ifndef __DJQWDTTMDJMQPPJUHZRFANSSWHRDVRNJ__
#define __DJQWDTTMDJMQPPJUHZRFANSSWHRDVRNJ__

#include <pcsclite.h>
#include <wintypes.h>
#include <winscard.h>

#ifdef MAC_OS_X
typedef SCARD_READERSTATE_A *LPSCARD_READERSTATE;
#endif

// Typedefs of the exported symbols

typedef LONG (*tSCardEstablishContext) (DWORD dwScope,
		 LPCVOID pvReserved1,  LPCVOID pvReserved2,
		 LPSCARDCONTEXT phContext);
typedef LONG (*tSCardReleaseContext) (SCARDCONTEXT hContext);
typedef LONG (*tSCardIsValidContext) (SCARDCONTEXT hContext);
typedef LONG (*tSCardConnect) (SCARDCONTEXT hContext,
		LPCSTR szReader,
		DWORD dwShareMode,
		DWORD dwPreferredProtocols,
		 LPSCARDHANDLE phCard,  LPDWORD pdwActiveProtocol);
typedef LONG (*tSCardReconnect) (SCARDHANDLE hCard,
		DWORD dwShareMode,
		DWORD dwPreferredProtocols,
		DWORD dwInitialization,  LPDWORD pdwActiveProtocol);
typedef LONG (*tSCardDisconnect) (SCARDHANDLE hCard, DWORD dwDisposition);
typedef LONG (*tSCardBeginTransaction) (SCARDHANDLE hCard);
typedef LONG (*tSCardEndTransaction) (SCARDHANDLE hCard, DWORD dwDisposition);
typedef LONG (*tSCardStatus) (SCARDHANDLE hCard,
		  LPSTR mszReaderName,
		  LPDWORD pcchReaderLen,
		  LPDWORD pdwState,
		  LPDWORD pdwProtocol,
		  LPBYTE pbAtr,
		  LPDWORD pcbAtrLen);
typedef LONG (*tSCardGetStatusChange) (SCARDCONTEXT hContext,
		DWORD dwTimeout,
		LPSCARD_READERSTATE rgReaderStates, DWORD cReaders);
typedef LONG (*tSCardControl) (SCARDHANDLE hCard, DWORD dwControlCode,
		LPCVOID pbSendBuffer, DWORD cbSendLength,
		 LPVOID pbRecvBuffer, DWORD cbRecvLength,
		LPDWORD lpBytesReturned);
typedef LONG (*tSCardTransmit) (SCARDHANDLE hCard,
		const SCARD_IO_REQUEST * pioSendPci,
		LPCBYTE pbSendBuffer, DWORD cbSendLength,
		 SCARD_IO_REQUEST * pioRecvPci,
		 LPBYTE pbRecvBuffer, LPDWORD pcbRecvLength);
typedef LONG (*tSCardListReaderGroups) (SCARDCONTEXT hContext,
		 LPSTR mszGroups, LPDWORD pcchGroups);
typedef LONG (*tSCardListReaders) (SCARDCONTEXT hContext,
		  LPCSTR mszGroups,
		  LPSTR mszReaders,
		 LPDWORD pcchReaders);
typedef LONG (*tSCardFreeMemory) (SCARDCONTEXT hContext, LPCVOID pvMem);
typedef LONG (*tSCardCancel) (SCARDCONTEXT hContext);
typedef LONG (*tSCardGetAttrib) (SCARDHANDLE hCard, DWORD dwAttrId,
		 LPBYTE pbAttr, LPDWORD pcbAttrLen);
typedef LONG (*tSCardSetAttrib) (SCARDHANDLE hCard, DWORD dwAttrId,
		LPCBYTE pbAttr, DWORD cbAttrLen);

// Pointers to the functions in the lib to be proxy-ed

extern tSCardEstablishContext pSCardEstablishContext;
extern tSCardReleaseContext pSCardReleaseContext;
extern tSCardIsValidContext pSCardIsValidContext;
extern tSCardConnect pSCardConnect;
extern tSCardReconnect pSCardReconnect;
extern tSCardDisconnect pSCardDisconnect;
extern tSCardBeginTransaction pSCardBeginTransaction;
extern tSCardEndTransaction pSCardEndTransaction;
extern tSCardStatus pSCardStatus;
extern tSCardGetStatusChange pSCardGetStatusChange;
extern tSCardControl pSCardControl;
extern tSCardTransmit pSCardTransmit;
extern tSCardListReaderGroups pSCardListReaderGroups;
extern tSCardListReaders pSCardListReaders;
extern tSCardFreeMemory pSCardFreeMemory;
extern tSCardCancel pSCardCancel;
extern tSCardGetAttrib pSCardGetAttrib;
extern tSCardSetAttrib pSCardSetAttrib;

// Declarations of the proxy functions

PCSC_API LONG imp_SCardEstablishContext(DWORD dwScope,
		 LPCVOID pvReserved1,  LPCVOID pvReserved2,
		 LPSCARDCONTEXT phContext);
PCSC_API LONG imp_SCardReleaseContext(SCARDCONTEXT hContext);
PCSC_API LONG imp_SCardIsValidContext(SCARDCONTEXT hContext);
PCSC_API LONG imp_SCardConnect(SCARDCONTEXT hContext,
		LPCSTR szReader,
		DWORD dwShareMode,
		DWORD dwPreferredProtocols,
		 LPSCARDHANDLE phCard,  LPDWORD pdwActiveProtocol);
PCSC_API LONG imp_SCardReconnect(SCARDHANDLE hCard,
		DWORD dwShareMode,
		DWORD dwPreferredProtocols,
		DWORD dwInitialization,  LPDWORD pdwActiveProtocol);
PCSC_API LONG imp_SCardDisconnect(SCARDHANDLE hCard, DWORD dwDisposition);
PCSC_API LONG imp_SCardBeginTransaction(SCARDHANDLE hCard);
PCSC_API LONG imp_SCardEndTransaction(SCARDHANDLE hCard, DWORD dwDisposition);
PCSC_API LONG imp_SCardStatus(SCARDHANDLE hCard,
		  LPSTR mszReaderName,
		  LPDWORD pcchReaderLen,
		  LPDWORD pdwState,
		  LPDWORD pdwProtocol,
		  LPBYTE pbAtr,
		  LPDWORD pcbAtrLen);
PCSC_API LONG imp_SCardGetStatusChange(SCARDCONTEXT hContext,
		DWORD dwTimeout,
		LPSCARD_READERSTATE rgReaderStates, DWORD cReaders);
PCSC_API LONG imp_SCardControl(SCARDHANDLE hCard, DWORD dwControlCode,
		LPCVOID pbSendBuffer, DWORD cbSendLength,
		 LPVOID pbRecvBuffer, DWORD cbRecvLength,
		LPDWORD lpBytesReturned);
PCSC_API LONG imp_SCardTransmit(SCARDHANDLE hCard,
		const SCARD_IO_REQUEST * pioSendPci,
		LPCBYTE pbSendBuffer, DWORD cbSendLength,
		 SCARD_IO_REQUEST * pioRecvPci,
		 LPBYTE pbRecvBuffer, LPDWORD pcbRecvLength);
PCSC_API LONG imp_SCardListReaderGroups(SCARDCONTEXT hContext,
		 LPSTR mszGroups, LPDWORD pcchGroups);
PCSC_API LONG imp_SCardListReaders(SCARDCONTEXT hContext,
		  LPCSTR mszGroups,
		  LPSTR mszReaders,
		 LPDWORD pcchReaders);
PCSC_API LONG imp_SCardFreeMemory(SCARDCONTEXT hContext, LPCVOID pvMem);
PCSC_API LONG imp_SCardCancel(SCARDCONTEXT hContext);
PCSC_API LONG imp_SCardGetAttrib(SCARDHANDLE hCard, DWORD dwAttrId,
		 LPBYTE pbAttr, LPDWORD pcbAttrLen);
PCSC_API LONG imp_SCardSetAttrib(SCARDHANDLE hCard, DWORD dwAttrId,
		LPCBYTE pbAttr, DWORD cbAttrLen);

#endif  // __DJQWDTTMDJMQPPJUHZRFANSSWHRDVRNJ__
