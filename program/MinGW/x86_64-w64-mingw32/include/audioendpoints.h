/*** Autogenerated by WIDL 6.12 from include/audioendpoints.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __audioendpoints_h__
#define __audioendpoints_h__

/* Forward declarations */

#ifndef __IAudioEndpointFormatControl_FWD_DEFINED__
#define __IAudioEndpointFormatControl_FWD_DEFINED__
typedef interface IAudioEndpointFormatControl IAudioEndpointFormatControl;
#ifdef __cplusplus
interface IAudioEndpointFormatControl;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
/*****************************************************************************
 * IAudioEndpointFormatControl interface
 */
#ifndef __IAudioEndpointFormatControl_INTERFACE_DEFINED__
#define __IAudioEndpointFormatControl_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAudioEndpointFormatControl, 0x784cfd40, 0x9f89, 0x456e, 0xa1,0xa6, 0x87,0x3b,0x00,0x6a,0x66,0x4e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("784cfd40-9f89-456e-a1a6-873b006a664e")
IAudioEndpointFormatControl : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ResetToDefault(
        DWORD ResetFlags) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAudioEndpointFormatControl, 0x784cfd40, 0x9f89, 0x456e, 0xa1,0xa6, 0x87,0x3b,0x00,0x6a,0x66,0x4e)
#endif
#else
typedef struct IAudioEndpointFormatControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAudioEndpointFormatControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAudioEndpointFormatControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAudioEndpointFormatControl *This);

    /*** IAudioEndpointFormatControl methods ***/
    HRESULT (STDMETHODCALLTYPE *ResetToDefault)(
        IAudioEndpointFormatControl *This,
        DWORD ResetFlags);

    END_INTERFACE
} IAudioEndpointFormatControlVtbl;

interface IAudioEndpointFormatControl {
    CONST_VTBL IAudioEndpointFormatControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAudioEndpointFormatControl_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAudioEndpointFormatControl_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAudioEndpointFormatControl_Release(This) (This)->lpVtbl->Release(This)
/*** IAudioEndpointFormatControl methods ***/
#define IAudioEndpointFormatControl_ResetToDefault(This,ResetFlags) (This)->lpVtbl->ResetToDefault(This,ResetFlags)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAudioEndpointFormatControl_QueryInterface(IAudioEndpointFormatControl* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAudioEndpointFormatControl_AddRef(IAudioEndpointFormatControl* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAudioEndpointFormatControl_Release(IAudioEndpointFormatControl* This) {
    return This->lpVtbl->Release(This);
}
/*** IAudioEndpointFormatControl methods ***/
static FORCEINLINE HRESULT IAudioEndpointFormatControl_ResetToDefault(IAudioEndpointFormatControl* This,DWORD ResetFlags) {
    return This->lpVtbl->ResetToDefault(This,ResetFlags);
}
#endif
#endif

#endif


#endif  /* __IAudioEndpointFormatControl_INTERFACE_DEFINED__ */


#define ENDPOINT_FORMAT_RESET_MIX_ONLY 0x1
#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __audioendpoints_h__ */
