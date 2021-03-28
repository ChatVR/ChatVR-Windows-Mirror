﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Security.Cryptography.Aes
struct Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C;
// System.Security.Cryptography.AesCryptoServiceProvider
struct AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF;
// System.Security.Cryptography.AesManaged
struct AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4;
// System.Security.Cryptography.AesTransform
struct AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D;
// System.Collections.Generic.BitHelper
struct BitHelper_t2B67F0FEDA1C18626AA201BEA9490E52B87CB2F7;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t001D97000AA0178942D19FC52942472140472E5E;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Threading.LockRecursionException
struct LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Threading.ReaderWriterCount
struct ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.String
struct String_t;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754;
// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76;
// System.Threading.SynchronizationLockException
struct SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____0AA802CD6847EB893FE786B5EA5168B2FDCD7B93_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____0C4110BC17D746F018F47B49E0EB0D6590F69939_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____20733E1283D873EBE47133A95C233E11B76F5F11_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____21F4CBF8283FF1CAEB4A39316A97FC1D6DF1D35E_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____23DFDCA6F045D4257BF5AC8CB1CF2EFADAFE9B94_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____30A0358B25B1372DD598BB4B1AC56AD6B8F08A47_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____5B5DF5A459E902D96F7DB0FB235A25346CA85C5D_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____5BE411F1438EAEF33726D855E99011D5FECDDD4E_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____A02DD1D8604EA8EC2D2BDA717A93A4EE85F13E53_9_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____AE2F76ECEF8B08F0BC7EA95DCFE945E1727927C9_10_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05D9407DB2D05625AF86D4150AF53FC9966C7633;
IL2CPP_EXTERN_C String_t* _stringLiteral10C4AECF4C2A9921D7FDB1EEA6237F828B265648;
IL2CPP_EXTERN_C String_t* _stringLiteral17BA770D472146F14CBDE2CFF7752F076430BCBE;
IL2CPP_EXTERN_C String_t* _stringLiteral28BCDD3CA5E41255B6A2EBE02C50B3F4CE3093AA;
IL2CPP_EXTERN_C String_t* _stringLiteral485C8998D53F77608ABEDAF04A4DBE853A80D357;
IL2CPP_EXTERN_C String_t* _stringLiteral4D7A17FBB4AEF7D9DB034889EBF3537D477B9336;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral6DC62F421ABC9EEBA3ED23A09F410EA41A1F72C6;
IL2CPP_EXTERN_C String_t* _stringLiteral82B03C89EBDF21F2AC40796C070B4770C4DC82D9;
IL2CPP_EXTERN_C String_t* _stringLiteral84A266738245DD942C30B2FC8963EC80C662B538;
IL2CPP_EXTERN_C String_t* _stringLiteral8822CE4A43FFFD3B2CC49B9D5FC1B66F0CCBF3B1;
IL2CPP_EXTERN_C String_t* _stringLiteral98EE0647F9BA017E0436FC5F851A25DCBC9B810A;
IL2CPP_EXTERN_C String_t* _stringLiteral9D0E978C2541B8A36DFB07E397656689CE9E713F;
IL2CPP_EXTERN_C String_t* _stringLiteralA1E10561E358BF2699823096E8ABA5826AB9E732;
IL2CPP_EXTERN_C String_t* _stringLiteralAC5E7797F30965FD4F725C4ABC4334B3AA868AB2;
IL2CPP_EXTERN_C String_t* _stringLiteralB7E78BE66617B9AE36B6A6E170E3545EE25C1D11;
IL2CPP_EXTERN_C String_t* _stringLiteralCBCF5ABE35600EAFD21FA4DC1F78EBBBCAD041EB;
IL2CPP_EXTERN_C String_t* _stringLiteralCF088CD7CED04705BD5E7559DBB7DD9A14559182;
IL2CPP_EXTERN_C String_t* _stringLiteralDCB7866DEDA66D0DAAD8C519AF9693DB97A9BF28;
IL2CPP_EXTERN_C String_t* _stringLiteralE68F97D6FE7BDE1580C3707638EA581299D01EDE;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralEC5FCBC48B93DF02EB8C67CDC7FE9AC103D0C83C;
IL2CPP_EXTERN_C String_t* _stringLiteralEFFE2CA9E53825F0268901130D843E969BE20A0B;
IL2CPP_EXTERN_C String_t* _stringLiteralF82365E63B4829E3BB5F054E86FEF03FBB9807C3;
IL2CPP_EXTERN_C const RuntimeMethod* AesCryptoServiceProvider_CreateDecryptor_mAB5FB857F549A86D986461C8665BE6B2393305D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AesCryptoServiceProvider_CreateEncryptor_m6BF20D5D8424DB627CD3010D9E4C8555C6BD0465_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AesCryptoServiceProvider_set_Mode_mFE7044929761BABE312D1146B0ED51B331E35D63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AesManaged_CreateDecryptor_m7240F8C38B99CE73159DE7455046E951C4900268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AesManaged_CreateEncryptor_m1E4EB80DE75FCF9E940228E1D7664C0EA1378153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AesManaged__ctor_m79644F6BCD0E8C2D8BAF1B1E22E90D3C364F5C57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AesManaged_set_Mode_mA5CF4C1F3B41503C6E09373ADB0B8983A6F61460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AesTransform__ctor_m3903A599E8B2C3F7AB3B70E1258980151D639598_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReaderWriterLockSlim_Dispose_mDA9910A42284308F6EA8F8A294FF52AC4E05699E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReaderWriterLockSlim_ExitUpgradeableReadLock_m870A35845A911065A8897A68EB1F9C28C08E38DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReaderWriterLockSlim_ExitWriteLock_m2A49859BD012D6C7FCC58A7C37C3702B8C761BE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore_mC3C1C2217C8FA13B0FA3C6C29C12052859A1B49B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReaderWriterLockSlim_TryEnterWriteLockCore_m92031DB0DAF78611332535E47CCC146C90B9706F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tD7A92A53AC93772205DA609EE6D57CD672A8EBE1 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.BitHelper
struct  BitHelper_t2B67F0FEDA1C18626AA201BEA9490E52B87CB2F7  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Generic.BitHelper::_length
	int32_t ____length_0;
	// System.Int32* System.Collections.Generic.BitHelper::_arrayPtr
	int32_t* ____arrayPtr_1;
	// System.Int32[] System.Collections.Generic.BitHelper::_array
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____array_2;
	// System.Boolean System.Collections.Generic.BitHelper::_useStackAlloc
	bool ____useStackAlloc_3;

public:
	inline static int32_t get_offset_of__length_0() { return static_cast<int32_t>(offsetof(BitHelper_t2B67F0FEDA1C18626AA201BEA9490E52B87CB2F7, ____length_0)); }
	inline int32_t get__length_0() const { return ____length_0; }
	inline int32_t* get_address_of__length_0() { return &____length_0; }
	inline void set__length_0(int32_t value)
	{
		____length_0 = value;
	}

	inline static int32_t get_offset_of__arrayPtr_1() { return static_cast<int32_t>(offsetof(BitHelper_t2B67F0FEDA1C18626AA201BEA9490E52B87CB2F7, ____arrayPtr_1)); }
	inline int32_t* get__arrayPtr_1() const { return ____arrayPtr_1; }
	inline int32_t** get_address_of__arrayPtr_1() { return &____arrayPtr_1; }
	inline void set__arrayPtr_1(int32_t* value)
	{
		____arrayPtr_1 = value;
	}

	inline static int32_t get_offset_of__array_2() { return static_cast<int32_t>(offsetof(BitHelper_t2B67F0FEDA1C18626AA201BEA9490E52B87CB2F7, ____array_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__array_2() const { return ____array_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__array_2() { return &____array_2; }
	inline void set__array_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____array_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_2), (void*)value);
	}

	inline static int32_t get_offset_of__useStackAlloc_3() { return static_cast<int32_t>(offsetof(BitHelper_t2B67F0FEDA1C18626AA201BEA9490E52B87CB2F7, ____useStackAlloc_3)); }
	inline bool get__useStackAlloc_3() const { return ____useStackAlloc_3; }
	inline bool* get_address_of__useStackAlloc_3() { return &____useStackAlloc_3; }
	inline void set__useStackAlloc_3(bool value)
	{
		____useStackAlloc_3 = value;
	}
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Linq.Enumerable
struct  Enumerable_t928C505614FDD67F6D61FB58BED73235DF569B0E  : public RuntimeObject
{
public:

public:
};


// System.Linq.Error
struct  Error_t2D04CC8BAE165E534F2E8EDD93065E47E2C3405D  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Threading.ReaderWriterCount
struct  ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D  : public RuntimeObject
{
public:
	// System.Int64 System.Threading.ReaderWriterCount::lockID
	int64_t ___lockID_0;
	// System.Int32 System.Threading.ReaderWriterCount::readercount
	int32_t ___readercount_1;
	// System.Int32 System.Threading.ReaderWriterCount::writercount
	int32_t ___writercount_2;
	// System.Int32 System.Threading.ReaderWriterCount::upgradecount
	int32_t ___upgradecount_3;
	// System.Threading.ReaderWriterCount System.Threading.ReaderWriterCount::next
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * ___next_4;

public:
	inline static int32_t get_offset_of_lockID_0() { return static_cast<int32_t>(offsetof(ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D, ___lockID_0)); }
	inline int64_t get_lockID_0() const { return ___lockID_0; }
	inline int64_t* get_address_of_lockID_0() { return &___lockID_0; }
	inline void set_lockID_0(int64_t value)
	{
		___lockID_0 = value;
	}

	inline static int32_t get_offset_of_readercount_1() { return static_cast<int32_t>(offsetof(ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D, ___readercount_1)); }
	inline int32_t get_readercount_1() const { return ___readercount_1; }
	inline int32_t* get_address_of_readercount_1() { return &___readercount_1; }
	inline void set_readercount_1(int32_t value)
	{
		___readercount_1 = value;
	}

	inline static int32_t get_offset_of_writercount_2() { return static_cast<int32_t>(offsetof(ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D, ___writercount_2)); }
	inline int32_t get_writercount_2() const { return ___writercount_2; }
	inline int32_t* get_address_of_writercount_2() { return &___writercount_2; }
	inline void set_writercount_2(int32_t value)
	{
		___writercount_2 = value;
	}

	inline static int32_t get_offset_of_upgradecount_3() { return static_cast<int32_t>(offsetof(ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D, ___upgradecount_3)); }
	inline int32_t get_upgradecount_3() const { return ___upgradecount_3; }
	inline int32_t* get_address_of_upgradecount_3() { return &___upgradecount_3; }
	inline void set_upgradecount_3(int32_t value)
	{
		___upgradecount_3 = value;
	}

	inline static int32_t get_offset_of_next_4() { return static_cast<int32_t>(offsetof(ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D, ___next_4)); }
	inline ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * get_next_4() const { return ___next_4; }
	inline ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D ** get_address_of_next_4() { return &___next_4; }
	inline void set_next_4(ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * value)
	{
		___next_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_4), (void*)value);
	}
};


// System.Threading.ReaderWriterLockSlim
struct  ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F  : public RuntimeObject
{
public:
	// System.Boolean System.Threading.ReaderWriterLockSlim::fIsReentrant
	bool ___fIsReentrant_0;
	// System.Int32 System.Threading.ReaderWriterLockSlim::myLock
	int32_t ___myLock_1;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numWriteWaiters
	uint32_t ___numWriteWaiters_5;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numReadWaiters
	uint32_t ___numReadWaiters_6;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numWriteUpgradeWaiters
	uint32_t ___numWriteUpgradeWaiters_7;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numUpgradeWaiters
	uint32_t ___numUpgradeWaiters_8;
	// System.Boolean System.Threading.ReaderWriterLockSlim::fNoWaiters
	bool ___fNoWaiters_9;
	// System.Int32 System.Threading.ReaderWriterLockSlim::upgradeLockOwnerId
	int32_t ___upgradeLockOwnerId_10;
	// System.Int32 System.Threading.ReaderWriterLockSlim::writeLockOwnerId
	int32_t ___writeLockOwnerId_11;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::writeEvent
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___writeEvent_12;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::readEvent
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___readEvent_13;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::upgradeEvent
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___upgradeEvent_14;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::waitUpgradeEvent
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___waitUpgradeEvent_15;
	// System.Int64 System.Threading.ReaderWriterLockSlim::lockID
	int64_t ___lockID_17;
	// System.Boolean System.Threading.ReaderWriterLockSlim::fUpgradeThreadHoldingRead
	bool ___fUpgradeThreadHoldingRead_19;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::owners
	uint32_t ___owners_21;
	// System.Boolean System.Threading.ReaderWriterLockSlim::fDisposed
	bool ___fDisposed_27;

public:
	inline static int32_t get_offset_of_fIsReentrant_0() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___fIsReentrant_0)); }
	inline bool get_fIsReentrant_0() const { return ___fIsReentrant_0; }
	inline bool* get_address_of_fIsReentrant_0() { return &___fIsReentrant_0; }
	inline void set_fIsReentrant_0(bool value)
	{
		___fIsReentrant_0 = value;
	}

	inline static int32_t get_offset_of_myLock_1() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___myLock_1)); }
	inline int32_t get_myLock_1() const { return ___myLock_1; }
	inline int32_t* get_address_of_myLock_1() { return &___myLock_1; }
	inline void set_myLock_1(int32_t value)
	{
		___myLock_1 = value;
	}

	inline static int32_t get_offset_of_numWriteWaiters_5() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___numWriteWaiters_5)); }
	inline uint32_t get_numWriteWaiters_5() const { return ___numWriteWaiters_5; }
	inline uint32_t* get_address_of_numWriteWaiters_5() { return &___numWriteWaiters_5; }
	inline void set_numWriteWaiters_5(uint32_t value)
	{
		___numWriteWaiters_5 = value;
	}

	inline static int32_t get_offset_of_numReadWaiters_6() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___numReadWaiters_6)); }
	inline uint32_t get_numReadWaiters_6() const { return ___numReadWaiters_6; }
	inline uint32_t* get_address_of_numReadWaiters_6() { return &___numReadWaiters_6; }
	inline void set_numReadWaiters_6(uint32_t value)
	{
		___numReadWaiters_6 = value;
	}

	inline static int32_t get_offset_of_numWriteUpgradeWaiters_7() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___numWriteUpgradeWaiters_7)); }
	inline uint32_t get_numWriteUpgradeWaiters_7() const { return ___numWriteUpgradeWaiters_7; }
	inline uint32_t* get_address_of_numWriteUpgradeWaiters_7() { return &___numWriteUpgradeWaiters_7; }
	inline void set_numWriteUpgradeWaiters_7(uint32_t value)
	{
		___numWriteUpgradeWaiters_7 = value;
	}

	inline static int32_t get_offset_of_numUpgradeWaiters_8() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___numUpgradeWaiters_8)); }
	inline uint32_t get_numUpgradeWaiters_8() const { return ___numUpgradeWaiters_8; }
	inline uint32_t* get_address_of_numUpgradeWaiters_8() { return &___numUpgradeWaiters_8; }
	inline void set_numUpgradeWaiters_8(uint32_t value)
	{
		___numUpgradeWaiters_8 = value;
	}

	inline static int32_t get_offset_of_fNoWaiters_9() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___fNoWaiters_9)); }
	inline bool get_fNoWaiters_9() const { return ___fNoWaiters_9; }
	inline bool* get_address_of_fNoWaiters_9() { return &___fNoWaiters_9; }
	inline void set_fNoWaiters_9(bool value)
	{
		___fNoWaiters_9 = value;
	}

	inline static int32_t get_offset_of_upgradeLockOwnerId_10() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___upgradeLockOwnerId_10)); }
	inline int32_t get_upgradeLockOwnerId_10() const { return ___upgradeLockOwnerId_10; }
	inline int32_t* get_address_of_upgradeLockOwnerId_10() { return &___upgradeLockOwnerId_10; }
	inline void set_upgradeLockOwnerId_10(int32_t value)
	{
		___upgradeLockOwnerId_10 = value;
	}

	inline static int32_t get_offset_of_writeLockOwnerId_11() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___writeLockOwnerId_11)); }
	inline int32_t get_writeLockOwnerId_11() const { return ___writeLockOwnerId_11; }
	inline int32_t* get_address_of_writeLockOwnerId_11() { return &___writeLockOwnerId_11; }
	inline void set_writeLockOwnerId_11(int32_t value)
	{
		___writeLockOwnerId_11 = value;
	}

	inline static int32_t get_offset_of_writeEvent_12() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___writeEvent_12)); }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * get_writeEvent_12() const { return ___writeEvent_12; }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** get_address_of_writeEvent_12() { return &___writeEvent_12; }
	inline void set_writeEvent_12(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * value)
	{
		___writeEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeEvent_12), (void*)value);
	}

	inline static int32_t get_offset_of_readEvent_13() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___readEvent_13)); }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * get_readEvent_13() const { return ___readEvent_13; }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** get_address_of_readEvent_13() { return &___readEvent_13; }
	inline void set_readEvent_13(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * value)
	{
		___readEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_upgradeEvent_14() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___upgradeEvent_14)); }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * get_upgradeEvent_14() const { return ___upgradeEvent_14; }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** get_address_of_upgradeEvent_14() { return &___upgradeEvent_14; }
	inline void set_upgradeEvent_14(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * value)
	{
		___upgradeEvent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___upgradeEvent_14), (void*)value);
	}

	inline static int32_t get_offset_of_waitUpgradeEvent_15() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___waitUpgradeEvent_15)); }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * get_waitUpgradeEvent_15() const { return ___waitUpgradeEvent_15; }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** get_address_of_waitUpgradeEvent_15() { return &___waitUpgradeEvent_15; }
	inline void set_waitUpgradeEvent_15(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * value)
	{
		___waitUpgradeEvent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUpgradeEvent_15), (void*)value);
	}

	inline static int32_t get_offset_of_lockID_17() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___lockID_17)); }
	inline int64_t get_lockID_17() const { return ___lockID_17; }
	inline int64_t* get_address_of_lockID_17() { return &___lockID_17; }
	inline void set_lockID_17(int64_t value)
	{
		___lockID_17 = value;
	}

	inline static int32_t get_offset_of_fUpgradeThreadHoldingRead_19() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___fUpgradeThreadHoldingRead_19)); }
	inline bool get_fUpgradeThreadHoldingRead_19() const { return ___fUpgradeThreadHoldingRead_19; }
	inline bool* get_address_of_fUpgradeThreadHoldingRead_19() { return &___fUpgradeThreadHoldingRead_19; }
	inline void set_fUpgradeThreadHoldingRead_19(bool value)
	{
		___fUpgradeThreadHoldingRead_19 = value;
	}

	inline static int32_t get_offset_of_owners_21() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___owners_21)); }
	inline uint32_t get_owners_21() const { return ___owners_21; }
	inline uint32_t* get_address_of_owners_21() { return &___owners_21; }
	inline void set_owners_21(uint32_t value)
	{
		___owners_21 = value;
	}

	inline static int32_t get_offset_of_fDisposed_27() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F, ___fDisposed_27)); }
	inline bool get_fDisposed_27() const { return ___fDisposed_27; }
	inline bool* get_address_of_fDisposed_27() { return &___fDisposed_27; }
	inline void set_fDisposed_27(bool value)
	{
		___fDisposed_27 = value;
	}
};

struct ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_StaticFields
{
public:
	// System.Int64 System.Threading.ReaderWriterLockSlim::s_nextLockID
	int64_t ___s_nextLockID_16;

public:
	inline static int32_t get_offset_of_s_nextLockID_16() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_StaticFields, ___s_nextLockID_16)); }
	inline int64_t get_s_nextLockID_16() const { return ___s_nextLockID_16; }
	inline int64_t* get_address_of_s_nextLockID_16() { return &___s_nextLockID_16; }
	inline void set_s_nextLockID_16(int64_t value)
	{
		___s_nextLockID_16 = value;
	}
};

struct ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_ThreadStaticFields
{
public:
	// System.Threading.ReaderWriterCount System.Threading.ReaderWriterLockSlim::t_rwc
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * ___t_rwc_18;

public:
	inline static int32_t get_offset_of_t_rwc_18() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_ThreadStaticFields, ___t_rwc_18)); }
	inline ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * get_t_rwc_18() const { return ___t_rwc_18; }
	inline ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D ** get_address_of_t_rwc_18() { return &___t_rwc_18; }
	inline void set_t_rwc_18(ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * value)
	{
		___t_rwc_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_rwc_18), (void*)value);
	}
};


// SR
struct  SR_t20332BC36C60F50CC953F79ADA0CA8C844A21231  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Threading.Thread
struct  Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct  __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106__padding[1024];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct  __StaticArrayInitTypeSizeU3D120_tA9F11D2506ED5E19BC8FF035C1306EC7ECAB936E 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tA9F11D2506ED5E19BC8FF035C1306EC7ECAB936E__padding[120];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct  __StaticArrayInitTypeSizeU3D256_t26A2D4D21AB256AEDA78F696334DD823935B9017 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t26A2D4D21AB256AEDA78F696334DD823935B9017__padding[256];
	};

public:
};


// System.Threading.ReaderWriterLockSlim/TimeoutTracker
struct  TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B 
{
public:
	// System.Int32 System.Threading.ReaderWriterLockSlim/TimeoutTracker::m_total
	int32_t ___m_total_0;
	// System.Int32 System.Threading.ReaderWriterLockSlim/TimeoutTracker::m_start
	int32_t ___m_start_1;

public:
	inline static int32_t get_offset_of_m_total_0() { return static_cast<int32_t>(offsetof(TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B, ___m_total_0)); }
	inline int32_t get_m_total_0() const { return ___m_total_0; }
	inline int32_t* get_address_of_m_total_0() { return &___m_total_0; }
	inline void set_m_total_0(int32_t value)
	{
		___m_total_0 = value;
	}

	inline static int32_t get_offset_of_m_start_1() { return static_cast<int32_t>(offsetof(TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B, ___m_start_1)); }
	inline int32_t get_m_start_1() const { return ___m_start_1; }
	inline int32_t* get_address_of_m_start_1() { return &___m_start_1; }
	inline void set_m_start_1(int32_t value)
	{
		___m_start_1 = value;
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::0AA802CD6847EB893FE786B5EA5168B2FDCD7B93
	__StaticArrayInitTypeSizeU3D120_tA9F11D2506ED5E19BC8FF035C1306EC7ECAB936E  ___0AA802CD6847EB893FE786B5EA5168B2FDCD7B93_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::0C4110BC17D746F018F47B49E0EB0D6590F69939
	__StaticArrayInitTypeSizeU3D256_t26A2D4D21AB256AEDA78F696334DD823935B9017  ___0C4110BC17D746F018F47B49E0EB0D6590F69939_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::20733E1283D873EBE47133A95C233E11B76F5F11
	__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  ___20733E1283D873EBE47133A95C233E11B76F5F11_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::21F4CBF8283FF1CAEB4A39316A97FC1D6DF1D35E
	__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  ___21F4CBF8283FF1CAEB4A39316A97FC1D6DF1D35E_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::23DFDCA6F045D4257BF5AC8CB1CF2EFADAFE9B94
	__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  ___23DFDCA6F045D4257BF5AC8CB1CF2EFADAFE9B94_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::30A0358B25B1372DD598BB4B1AC56AD6B8F08A47
	__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  ___30A0358B25B1372DD598BB4B1AC56AD6B8F08A47_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::5B5DF5A459E902D96F7DB0FB235A25346CA85C5D
	__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  ___5B5DF5A459E902D96F7DB0FB235A25346CA85C5D_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::5BE411F1438EAEF33726D855E99011D5FECDDD4E
	__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  ___5BE411F1438EAEF33726D855E99011D5FECDDD4E_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::8F22C9ECE1331718CBD268A9BBFD2F5E451441E3
	__StaticArrayInitTypeSizeU3D256_t26A2D4D21AB256AEDA78F696334DD823935B9017  ___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::A02DD1D8604EA8EC2D2BDA717A93A4EE85F13E53
	__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  ___A02DD1D8604EA8EC2D2BDA717A93A4EE85F13E53_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::AE2F76ECEF8B08F0BC7EA95DCFE945E1727927C9
	__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  ___AE2F76ECEF8B08F0BC7EA95DCFE945E1727927C9_10;

public:
	inline static int32_t get_offset_of_U30AA802CD6847EB893FE786B5EA5168B2FDCD7B93_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A_StaticFields, ___0AA802CD6847EB893FE786B5EA5168B2FDCD7B93_0)); }
	inline __StaticArrayInitTypeSizeU3D120_tA9F11D2506ED5E19BC8FF035C1306EC7ECAB936E  get_U30AA802CD6847EB893FE786B5EA5168B2FDCD7B93_0() const { return ___0AA802CD6847EB893FE786B5EA5168B2FDCD7B93_0; }
	inline __StaticArrayInitTypeSizeU3D120_tA9F11D2506ED5E19BC8FF035C1306EC7ECAB936E * get_address_of_U30AA802CD6847EB893FE786B5EA5168B2FDCD7B93_0() { return &___0AA802CD6847EB893FE786B5EA5168B2FDCD7B93_0; }
	inline void set_U30AA802CD6847EB893FE786B5EA5168B2FDCD7B93_0(__StaticArrayInitTypeSizeU3D120_tA9F11D2506ED5E19BC8FF035C1306EC7ECAB936E  value)
	{
		___0AA802CD6847EB893FE786B5EA5168B2FDCD7B93_0 = value;
	}

	inline static int32_t get_offset_of_U30C4110BC17D746F018F47B49E0EB0D6590F69939_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A_StaticFields, ___0C4110BC17D746F018F47B49E0EB0D6590F69939_1)); }
	inline __StaticArrayInitTypeSizeU3D256_t26A2D4D21AB256AEDA78F696334DD823935B9017  get_U30C4110BC17D746F018F47B49E0EB0D6590F69939_1() const { return ___0C4110BC17D746F018F47B49E0EB0D6590F69939_1; }
	inline __StaticArrayInitTypeSizeU3D256_t26A2D4D21AB256AEDA78F696334DD823935B9017 * get_address_of_U30C4110BC17D746F018F47B49E0EB0D6590F69939_1() { return &___0C4110BC17D746F018F47B49E0EB0D6590F69939_1; }
	inline void set_U30C4110BC17D746F018F47B49E0EB0D6590F69939_1(__StaticArrayInitTypeSizeU3D256_t26A2D4D21AB256AEDA78F696334DD823935B9017  value)
	{
		___0C4110BC17D746F018F47B49E0EB0D6590F69939_1 = value;
	}

	inline static int32_t get_offset_of_U320733E1283D873EBE47133A95C233E11B76F5F11_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A_StaticFields, ___20733E1283D873EBE47133A95C233E11B76F5F11_2)); }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  get_U320733E1283D873EBE47133A95C233E11B76F5F11_2() const { return ___20733E1283D873EBE47133A95C233E11B76F5F11_2; }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106 * get_address_of_U320733E1283D873EBE47133A95C233E11B76F5F11_2() { return &___20733E1283D873EBE47133A95C233E11B76F5F11_2; }
	inline void set_U320733E1283D873EBE47133A95C233E11B76F5F11_2(__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  value)
	{
		___20733E1283D873EBE47133A95C233E11B76F5F11_2 = value;
	}

	inline static int32_t get_offset_of_U321F4CBF8283FF1CAEB4A39316A97FC1D6DF1D35E_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A_StaticFields, ___21F4CBF8283FF1CAEB4A39316A97FC1D6DF1D35E_3)); }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  get_U321F4CBF8283FF1CAEB4A39316A97FC1D6DF1D35E_3() const { return ___21F4CBF8283FF1CAEB4A39316A97FC1D6DF1D35E_3; }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106 * get_address_of_U321F4CBF8283FF1CAEB4A39316A97FC1D6DF1D35E_3() { return &___21F4CBF8283FF1CAEB4A39316A97FC1D6DF1D35E_3; }
	inline void set_U321F4CBF8283FF1CAEB4A39316A97FC1D6DF1D35E_3(__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  value)
	{
		___21F4CBF8283FF1CAEB4A39316A97FC1D6DF1D35E_3 = value;
	}

	inline static int32_t get_offset_of_U323DFDCA6F045D4257BF5AC8CB1CF2EFADAFE9B94_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A_StaticFields, ___23DFDCA6F045D4257BF5AC8CB1CF2EFADAFE9B94_4)); }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  get_U323DFDCA6F045D4257BF5AC8CB1CF2EFADAFE9B94_4() const { return ___23DFDCA6F045D4257BF5AC8CB1CF2EFADAFE9B94_4; }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106 * get_address_of_U323DFDCA6F045D4257BF5AC8CB1CF2EFADAFE9B94_4() { return &___23DFDCA6F045D4257BF5AC8CB1CF2EFADAFE9B94_4; }
	inline void set_U323DFDCA6F045D4257BF5AC8CB1CF2EFADAFE9B94_4(__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  value)
	{
		___23DFDCA6F045D4257BF5AC8CB1CF2EFADAFE9B94_4 = value;
	}

	inline static int32_t get_offset_of_U330A0358B25B1372DD598BB4B1AC56AD6B8F08A47_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A_StaticFields, ___30A0358B25B1372DD598BB4B1AC56AD6B8F08A47_5)); }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  get_U330A0358B25B1372DD598BB4B1AC56AD6B8F08A47_5() const { return ___30A0358B25B1372DD598BB4B1AC56AD6B8F08A47_5; }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106 * get_address_of_U330A0358B25B1372DD598BB4B1AC56AD6B8F08A47_5() { return &___30A0358B25B1372DD598BB4B1AC56AD6B8F08A47_5; }
	inline void set_U330A0358B25B1372DD598BB4B1AC56AD6B8F08A47_5(__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  value)
	{
		___30A0358B25B1372DD598BB4B1AC56AD6B8F08A47_5 = value;
	}

	inline static int32_t get_offset_of_U35B5DF5A459E902D96F7DB0FB235A25346CA85C5D_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A_StaticFields, ___5B5DF5A459E902D96F7DB0FB235A25346CA85C5D_6)); }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  get_U35B5DF5A459E902D96F7DB0FB235A25346CA85C5D_6() const { return ___5B5DF5A459E902D96F7DB0FB235A25346CA85C5D_6; }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106 * get_address_of_U35B5DF5A459E902D96F7DB0FB235A25346CA85C5D_6() { return &___5B5DF5A459E902D96F7DB0FB235A25346CA85C5D_6; }
	inline void set_U35B5DF5A459E902D96F7DB0FB235A25346CA85C5D_6(__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  value)
	{
		___5B5DF5A459E902D96F7DB0FB235A25346CA85C5D_6 = value;
	}

	inline static int32_t get_offset_of_U35BE411F1438EAEF33726D855E99011D5FECDDD4E_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A_StaticFields, ___5BE411F1438EAEF33726D855E99011D5FECDDD4E_7)); }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  get_U35BE411F1438EAEF33726D855E99011D5FECDDD4E_7() const { return ___5BE411F1438EAEF33726D855E99011D5FECDDD4E_7; }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106 * get_address_of_U35BE411F1438EAEF33726D855E99011D5FECDDD4E_7() { return &___5BE411F1438EAEF33726D855E99011D5FECDDD4E_7; }
	inline void set_U35BE411F1438EAEF33726D855E99011D5FECDDD4E_7(__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  value)
	{
		___5BE411F1438EAEF33726D855E99011D5FECDDD4E_7 = value;
	}

	inline static int32_t get_offset_of_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A_StaticFields, ___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_8)); }
	inline __StaticArrayInitTypeSizeU3D256_t26A2D4D21AB256AEDA78F696334DD823935B9017  get_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_8() const { return ___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_8; }
	inline __StaticArrayInitTypeSizeU3D256_t26A2D4D21AB256AEDA78F696334DD823935B9017 * get_address_of_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_8() { return &___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_8; }
	inline void set_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_8(__StaticArrayInitTypeSizeU3D256_t26A2D4D21AB256AEDA78F696334DD823935B9017  value)
	{
		___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_8 = value;
	}

	inline static int32_t get_offset_of_A02DD1D8604EA8EC2D2BDA717A93A4EE85F13E53_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A_StaticFields, ___A02DD1D8604EA8EC2D2BDA717A93A4EE85F13E53_9)); }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  get_A02DD1D8604EA8EC2D2BDA717A93A4EE85F13E53_9() const { return ___A02DD1D8604EA8EC2D2BDA717A93A4EE85F13E53_9; }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106 * get_address_of_A02DD1D8604EA8EC2D2BDA717A93A4EE85F13E53_9() { return &___A02DD1D8604EA8EC2D2BDA717A93A4EE85F13E53_9; }
	inline void set_A02DD1D8604EA8EC2D2BDA717A93A4EE85F13E53_9(__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  value)
	{
		___A02DD1D8604EA8EC2D2BDA717A93A4EE85F13E53_9 = value;
	}

	inline static int32_t get_offset_of_AE2F76ECEF8B08F0BC7EA95DCFE945E1727927C9_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A_StaticFields, ___AE2F76ECEF8B08F0BC7EA95DCFE945E1727927C9_10)); }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  get_AE2F76ECEF8B08F0BC7EA95DCFE945E1727927C9_10() const { return ___AE2F76ECEF8B08F0BC7EA95DCFE945E1727927C9_10; }
	inline __StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106 * get_address_of_AE2F76ECEF8B08F0BC7EA95DCFE945E1727927C9_10() { return &___AE2F76ECEF8B08F0BC7EA95DCFE945E1727927C9_10; }
	inline void set_AE2F76ECEF8B08F0BC7EA95DCFE945E1727927C9_10(__StaticArrayInitTypeSizeU3D1024_tF2C607C4230B8D85B26B8A9266E0014DCAC33106  value)
	{
		___AE2F76ECEF8B08F0BC7EA95DCFE945E1727927C9_10 = value;
	}
};


// System.Security.Cryptography.CipherMode
struct  CipherMode_t4B09770C743AD8BCCA4B44539D0F4725DFCBCE50 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t4B09770C743AD8BCCA4B44539D0F4725DFCBCE50, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Threading.LockRecursionPolicy
struct  LockRecursionPolicy_t233E3FE457724B4E66E7C1E912EBA9916A39C501 
{
public:
	// System.Int32 System.Threading.LockRecursionPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LockRecursionPolicy_t233E3FE457724B4E66E7C1E912EBA9916A39C501, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t290E663334E2B7C9D97E4E1985CB3CAAB7B432D3 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t290E663334E2B7C9D97E4E1985CB3CAAB7B432D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.WaitHandle
struct  WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.Threading.LockRecursionException
struct  LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014  : public Exception_t
{
public:

public:
};


// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___IVValue_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IVValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___KeyValue_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyValue_3), (void*)value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalBlockSizesValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};


// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___algo_0)); }
	inline SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___algo_0), (void*)value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___temp_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp_3), (void*)value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___temp2_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp2_4), (void*)value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___workBuff_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workBuff_5), (void*)value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___workout_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workout_6), (void*)value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ____rng_11)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_11), (void*)value);
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Security.Cryptography.Aes
struct  Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C  : public SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754
{
public:

public:
};

struct Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalBlockSizes_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalKeySizes_10), (void*)value);
	}
};


// System.Security.Cryptography.AesTransform
struct  AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B  : public SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B, ___expandedKey_12)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expandedKey_12), (void*)value);
	}

	inline static int32_t get_offset_of_Nk_13() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B, ___Nk_13)); }
	inline int32_t get_Nk_13() const { return ___Nk_13; }
	inline int32_t* get_address_of_Nk_13() { return &___Nk_13; }
	inline void set_Nk_13(int32_t value)
	{
		___Nk_13 = value;
	}

	inline static int32_t get_offset_of_Nr_14() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B, ___Nr_14)); }
	inline int32_t get_Nr_14() const { return ___Nr_14; }
	inline int32_t* get_address_of_Nr_14() { return &___Nr_14; }
	inline void set_Nr_14(int32_t value)
	{
		___Nr_14 = value;
	}
};

struct AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___iT3_25;

public:
	inline static int32_t get_offset_of_Rcon_15() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields, ___Rcon_15)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Rcon_15() const { return ___Rcon_15; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Rcon_15() { return &___Rcon_15; }
	inline void set_Rcon_15(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Rcon_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Rcon_15), (void*)value);
	}

	inline static int32_t get_offset_of_SBox_16() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields, ___SBox_16)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_SBox_16() const { return ___SBox_16; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_SBox_16() { return &___SBox_16; }
	inline void set_SBox_16(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___SBox_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SBox_16), (void*)value);
	}

	inline static int32_t get_offset_of_iSBox_17() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields, ___iSBox_17)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_iSBox_17() const { return ___iSBox_17; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_iSBox_17() { return &___iSBox_17; }
	inline void set_iSBox_17(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___iSBox_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iSBox_17), (void*)value);
	}

	inline static int32_t get_offset_of_T0_18() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields, ___T0_18)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_T0_18() const { return ___T0_18; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_T0_18() { return &___T0_18; }
	inline void set_T0_18(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___T0_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___T0_18), (void*)value);
	}

	inline static int32_t get_offset_of_T1_19() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields, ___T1_19)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_T1_19() const { return ___T1_19; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_T1_19() { return &___T1_19; }
	inline void set_T1_19(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___T1_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___T1_19), (void*)value);
	}

	inline static int32_t get_offset_of_T2_20() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields, ___T2_20)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_T2_20() const { return ___T2_20; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_T2_20() { return &___T2_20; }
	inline void set_T2_20(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___T2_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___T2_20), (void*)value);
	}

	inline static int32_t get_offset_of_T3_21() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields, ___T3_21)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_T3_21() const { return ___T3_21; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_T3_21() { return &___T3_21; }
	inline void set_T3_21(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___T3_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___T3_21), (void*)value);
	}

	inline static int32_t get_offset_of_iT0_22() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields, ___iT0_22)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_iT0_22() const { return ___iT0_22; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_iT0_22() { return &___iT0_22; }
	inline void set_iT0_22(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___iT0_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iT0_22), (void*)value);
	}

	inline static int32_t get_offset_of_iT1_23() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields, ___iT1_23)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_iT1_23() const { return ___iT1_23; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_iT1_23() { return &___iT1_23; }
	inline void set_iT1_23(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___iT1_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iT1_23), (void*)value);
	}

	inline static int32_t get_offset_of_iT2_24() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields, ___iT2_24)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_iT2_24() const { return ___iT2_24; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_iT2_24() { return &___iT2_24; }
	inline void set_iT2_24(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___iT2_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iT2_24), (void*)value);
	}

	inline static int32_t get_offset_of_iT3_25() { return static_cast<int32_t>(offsetof(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields, ___iT3_25)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_iT3_25() const { return ___iT3_25; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_iT3_25() { return &___iT3_25; }
	inline void set_iT3_25(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___iT3_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iT3_25), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Threading.AutoResetEvent
struct  AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.Security.Cryptography.CryptographicException
struct  CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ManualResetEvent
struct  ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.Security.Cryptography.Rijndael
struct  Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2  : public SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754
{
public:

public:
};

struct Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalBlockSizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalKeySizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalBlockSizes_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalKeySizes_10), (void*)value);
	}
};


// System.Threading.SynchronizationLockException
struct  SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Security.Cryptography.AesCryptoServiceProvider
struct  AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF  : public Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C
{
public:

public:
};


// System.Security.Cryptography.AesManaged
struct  AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4  : public Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C
{
public:
	// System.Security.Cryptography.RijndaelManaged System.Security.Cryptography.AesManaged::m_rijndael
	RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * ___m_rijndael_11;

public:
	inline static int32_t get_offset_of_m_rijndael_11() { return static_cast<int32_t>(offsetof(AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4, ___m_rijndael_11)); }
	inline RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * get_m_rijndael_11() const { return ___m_rijndael_11; }
	inline RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E ** get_address_of_m_rijndael_11() { return &___m_rijndael_11; }
	inline void set_m_rijndael_11(RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * value)
	{
		___m_rijndael_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rijndael_11), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.ObjectDisposedException
struct  ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E  : public Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Security.Cryptography.Aes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Aes__ctor_m8BE534212149E466C49141CAC9A78B72C2A1D8FA (Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* KeyBuilder_IV_mEE5E62517E2B6CCF31A31CF995A7E423767AE3C0 (int32_t ___size0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* KeyBuilder_Key_m3ABEBE6D1D42B469EF3626FF15E473FF0CEC7CA0 (int32_t ___size0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31 (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.AesTransform::.ctor(System.Security.Cryptography.Aes,System.Boolean,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesTransform__ctor_m3903A599E8B2C3F7AB3B70E1258980151D639598 (AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B * __this, Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C * ___algo0, bool ___encryption1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___iv3, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SymmetricAlgorithm_get_IV_m221EB23F12FF2FF2AA5851DEEA4DBA954C3DF9CA (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymmetricAlgorithm_set_IV_m5C08F9246FD093A56F7CEFAA3DCC3D1A788FAA19 (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SymmetricAlgorithm_get_Key_mBC34A99AE033189081A0110393457578A0CA4031 (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymmetricAlgorithm_set_Key_m06B818761C6D0705328BE370E62B77897C4F6A95 (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SymmetricAlgorithm_get_KeySize_m4971214DFD683A30CF42574E399A49D46881EFE6_inline (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymmetricAlgorithm_set_KeySize_mE442D2BEE16679C2F20CF1CE680C2FB7EC1798A3 (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SymmetricAlgorithm_get_FeedbackSize_m5F7652D1BB0A4C6A9573281D5FDB92653E56097F_inline (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, const RuntimeMethod* method);
// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SymmetricAlgorithm_get_Mode_mC45173B64F0EF7E6FE8A282AB16AFE98024492D5_inline (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymmetricAlgorithm_set_Mode_m021BECC925EE517E9EBDCB0C4ADD730D721CC804 (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SymmetricAlgorithm_get_Padding_m0E3D81138F2FF12B498A92A096555BC9F22F6D28_inline (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymmetricAlgorithm_set_Padding_mC234D5C20E4C7EF00FDAFA28E457F04CDA775D21 (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymmetricAlgorithm_Dispose_mF5E8765FC3FCC4DFEA30200FAA1EDFAFA2BE893D (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Boolean System.Security.Cryptography.CryptoConfig::get_AllowOnlyFipsAlgorithms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CryptoConfig_get_AllowOnlyFipsAlgorithms_m5727A4E316AE115D2E891B3727745C100BB74CD5 (const RuntimeMethod* method);
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412 (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManaged__ctor_mB961FACC934247ED58EC21A6291E2018BD570650 (RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::ValidKeySize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SymmetricAlgorithm_ValidKeySize_mD9A55FE9CC3ADA203B6E1704F877A750A68A0514 (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, int32_t ___bitLength0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymmetricTransform__ctor_m9C5CF3DDF8C94E36D642CFA223A7D155A10D8827 (SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76 * __this, SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * ___symmAlgo0, bool ___encryption1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___rgbIV2, const RuntimeMethod* method);
// System.String Locale::GetText(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_m9472C71D4F5D9E384D5964D8A2281B9F895F386A (String_t* ___fmt0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.UInt32 System.Security.Cryptography.AesTransform::SubByte(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesTransform_SubByte_m2D77D545ABD3D84C04741B80ABB74BEFE8C55679 (AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B * __this, uint32_t ___a0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.AesTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesTransform_Encrypt128_m57DA74A7E05818DFD92F2614F8F65B0D1E696129 (AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___indata0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___outdata1, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___ekey2, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.AesTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesTransform_Decrypt128_m075F7BA40A4CFECA6F6A379065B731586EDDB23A (AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___indata0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___outdata1, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___ekey2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Exception System.Linq.Error::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (String_t* ___s0, const RuntimeMethod* method);
// System.Exception System.Linq.Error::NoElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::InitializeThreadCounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_InitializeThreadCounts_m256062BF3249D0A11A4A3F9BD625198B719C98AD (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Int64 System.Threading.Interlocked::Increment(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Increment_m23DCFD6F8418AC5C322DBE3AC1FB311AF3EDBF3B (int64_t* ___location0, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim::IsRWEntryEmpty(System.Threading.ReaderWriterCount)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_IsRWEntryEmpty_mC8DAC7CFE64A30203FF50C4823149F25FB15D116_inline (ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * ___rwc0, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterCount::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterCount__ctor_m0C083844BE7A2C4172B9684CF08A786C1E51874B (ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterWriteLock_mE8293BAF7A39EDB8E5C3C9F39BC6B404BC83C38F (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim/TimeoutTracker::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553 (TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Threading.ReaderWriterLockSlim/TimeoutTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterWriteLock_m8DC7B1653133775A79E6FDBE072DF63C8E6822C7 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  ___timeout0, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLockCore(System.Threading.ReaderWriterLockSlim/TimeoutTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterWriteLockCore_m92031DB0DAF78611332535E47CCC146C90B9706F (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  ___timeout0, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Threading.LockRecursionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockRecursionException__ctor_mB938776505F72CC1357C12AE449572415E5B2341 (LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Threading.ReaderWriterCount System.Threading.ReaderWriterLockSlim::GetThreadRWCount(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, bool ___dontAllocate0, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::ExitMyLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim::IsWriterAcquired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_IsWriterAcquired_m9F14403D5E6BA8D9840274FFA9CA59E03FE9ADD9 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::SetWriterAcquired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_SetWriterAcquired_m24C2FFF43CE66EAF4E5434B345B1858EE92E39E2 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.UInt32 System.Threading.ReaderWriterLockSlim::GetNumReaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ReaderWriterLockSlim_GetNumReaders_mC51603FD596E2B077422FA9331023A5D87DD3D2D (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim::IsRwHashEntryChanged(System.Threading.ReaderWriterCount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_IsRwHashEntryChanged_m3EDD34CB05C022D9A2852EA9BA753642D20A4617 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * ___lrwc0, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim/TimeoutTracker::get_IsExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeoutTracker_get_IsExpired_mE4ED4EDAA3A57C06198F451E21D347640DB1EA38 (TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * __this, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::SpinWait(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_SpinWait_m4B2AD68AFAF0D0D8C4FACC6EE090CAA5AE7A8B00 (int32_t ___SpinCount0, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_LazyCreateEvent_m02E55386C7E31D1CB3FC38C5D2E1EB89EB617644 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** ___waitEvent0, bool ___makeAutoResetEvent1, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Threading.ReaderWriterLockSlim/TimeoutTracker,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_WaitOnEvent_m6C6EB73C0C8D57FF14A6F1EBE8A6756407903FF1 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___waitEvent0, uint32_t* ___numWaiters1, TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  ___timeout2, bool ___isWriteWaiter3, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterUpgradeableReadLock_mF0F2532E93D3821AD35647FE1DA56C2FEF01FDAA (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLock(System.Threading.ReaderWriterLockSlim/TimeoutTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterUpgradeableReadLock_mE362E867B7E04114EF8BECDC6FF15D65C7D01C13 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  ___timeout0, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLockCore(System.Threading.ReaderWriterLockSlim/TimeoutTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore_mC3C1C2217C8FA13B0FA3C6C29C12052859A1B49B (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  ___timeout0, const RuntimeMethod* method);
// System.Void System.Threading.SynchronizationLockException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationLockException__ctor_m29B6831D6D5BC3D9B35521AFC400358467A4CA2E (SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::ClearWriterAcquired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ClearWriterAcquired_m81A620F80C7AFCF5E4AC1DAB2F2A5B262E42AFD8 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaiters_m203B2A315D7812546CE39C84789145491C7729C5 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoResetEvent__ctor_m72D2A390415B58E10CA21E260881C88E50D9F35C (AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::SetWritersWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_SetWritersWaiting_m0E15480965179DBE2CF352BD140188DB5359DF5C (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::SetUpgraderWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_SetUpgraderWaiting_mF6E393FE0C46184DF6A1B1B8F2EFBD40A307827F (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.ReaderWriterLockSlim/TimeoutTracker::get_RemainingMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeoutTracker_get_RemainingMilliseconds_m2DF873714961B9BED784F45364703221E4259F04 (TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * __this, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::ClearWritersWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ClearWritersWaiting_m97456CAD2756BAD28B6C0EF9B42E60BE7A35D669 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::ClearUpgraderWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ClearUpgraderWaiting_m85BBABDCA1A01D201683926A892CD4F75EAAA44A (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateReadWaiters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ExitAndWakeUpAppropriateReadWaiters_mA0AA94088046F5DFAA395A193C3C45D3D2086389 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaitersPreferringWriters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaitersPreferringWriters_mDE8BD2C760A17C2045AE43994C0D7E85AB316D5D (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLockSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_EnterMyLockSpin_mC63264D1309E935E22E6E2BFCAD04EAB8A19AE3C (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_ProcessorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_ProcessorCount_m32354B9724A21AE041AC75C0E470687E33B93D33 (const RuntimeMethod* method);
// System.Void System.Threading.Thread::SpinWait(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_SpinWait_m6276C02E66DD83A83D5F39E2B20411B8CBA33673 (int32_t ___iterations0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_Dispose_mDA9910A42284308F6EA8F8A294FF52AC4E05699E (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Int32 System.Threading.ReaderWriterLockSlim::get_WaitingReadCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_WaitingReadCount_m7ABA9E4099E3A845BA69B2DE31F1620468A96168_inline (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.ReaderWriterLockSlim::get_WaitingUpgradeCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_WaitingUpgradeCount_m6427A931CE9CD0A0A759ECE9FB89A2953D53F679_inline (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.ReaderWriterLockSlim::get_WaitingWriteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_WaitingWriteCount_m4C34DCD34734878CF89D94EFAED6772AC5C803EE_inline (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsReadLockHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_get_IsReadLockHeld_m7DCD5FD5F491F1F19B202A8CE4C9609E6FD54B78 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_get_IsUpgradeableReadLockHeld_mCD549D784C4E29D93D7D1DC7F87D07BBD2B054E4 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsWriteLockHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_get_IsWriteLockHeld_m76BAF63331AE3EA08A46001A77C3B8ED95E6FE25 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveReadCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_RecursiveReadCount_m4F403802E0535224A75B6ACB914795E3255EBE6C (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveUpgradeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_RecursiveUpgradeCount_m57C446384AA3302B1D8551FDF094E0614B43D507 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveWriteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_RecursiveWriteCount_mB157295491E285DF2269906A16A90F972474367A (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesCryptoServiceProvider__ctor_mA9857852BC34D8AB0F463C1AF1837CBBD9102265 (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C_il2cpp_TypeInfo_var);
		Aes__ctor_m8BE534212149E466C49141CAC9A78B72C2A1D8FA(__this, /*hidden argument*/NULL);
		((SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 *)__this)->set_FeedbackSizeValue_1(8);
		return;
	}
}
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::GenerateIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesCryptoServiceProvider_GenerateIV_m18539D5136BA9A2FC71F439150D16E35AD3BF5C4 (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ((SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 *)__this)->get_BlockSizeValue_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = KeyBuilder_IV_mEE5E62517E2B6CCF31A31CF995A7E423767AE3C0(((int32_t)((int32_t)L_0>>(int32_t)3)), /*hidden argument*/NULL);
		((SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 *)__this)->set_IVValue_2(L_1);
		return;
	}
}
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::GenerateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesCryptoServiceProvider_GenerateKey_m574F877FD23D1F07033FC035E89BE232303F3502 (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ((SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 *)__this)->get_KeySizeValue_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = KeyBuilder_Key_m3ABEBE6D1D42B469EF3626FF15E473FF0CEC7CA0(((int32_t)((int32_t)L_0>>(int32_t)3)), /*hidden argument*/NULL);
		((SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 *)__this)->set_KeyValue_3(L_1);
		return;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AesCryptoServiceProvider_CreateDecryptor_mAB5FB857F549A86D986461C8665BE6B2393305D1 (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___iv1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode() */, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize() */, __this);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)64))))
		{
			goto IL_001e;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_2 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D7A17FBB4AEF7D9DB034889EBF3537D477B9336)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesCryptoServiceProvider_CreateDecryptor_mAB5FB857F549A86D986461C8665BE6B2393305D1_RuntimeMethod_var)));
	}

IL_001e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___key0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___iv1;
		AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B * L_5 = (AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B *)il2cpp_codegen_object_new(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		AesTransform__ctor_m3903A599E8B2C3F7AB3B70E1258980151D639598(L_5, __this, (bool)0, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AesCryptoServiceProvider_CreateEncryptor_m6BF20D5D8424DB627CD3010D9E4C8555C6BD0465 (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___iv1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode() */, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize() */, __this);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)64))))
		{
			goto IL_001e;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_2 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D7A17FBB4AEF7D9DB034889EBF3537D477B9336)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesCryptoServiceProvider_CreateEncryptor_m6BF20D5D8424DB627CD3010D9E4C8555C6BD0465_RuntimeMethod_var)));
	}

IL_001e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___key0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___iv1;
		AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B * L_5 = (AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B *)il2cpp_codegen_object_new(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		AesTransform__ctor_m3903A599E8B2C3F7AB3B70E1258980151D639598(L_5, __this, (bool)1, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Byte[] System.Security.Cryptography.AesCryptoServiceProvider::get_IV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AesCryptoServiceProvider_get_IV_m6A46F1C255ABE41F98BEE8C0C37D6AFBB9F29D34 (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = SymmetricAlgorithm_get_IV_m221EB23F12FF2FF2AA5851DEEA4DBA954C3DF9CA(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::set_IV(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesCryptoServiceProvider_set_IV_mCB88C0F651B17F3EC7575F16E14C9E3BD2DB24DB (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		SymmetricAlgorithm_set_IV_m5C08F9246FD093A56F7CEFAA3DCC3D1A788FAA19(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] System.Security.Cryptography.AesCryptoServiceProvider::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AesCryptoServiceProvider_get_Key_mAC979BC922E8F1F15B36220E77972AC9CE5D5252 (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = SymmetricAlgorithm_get_Key_mBC34A99AE033189081A0110393457578A0CA4031(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::set_Key(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesCryptoServiceProvider_set_Key_m65785032C270005BC120157A0C9D019F6F6BC96F (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		SymmetricAlgorithm_set_Key_m06B818761C6D0705328BE370E62B77897C4F6A95(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Security.Cryptography.AesCryptoServiceProvider::get_KeySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AesCryptoServiceProvider_get_KeySize_m3081171DF6C11CA55ECEBA29B9559D18E78D8058 (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = SymmetricAlgorithm_get_KeySize_m4971214DFD683A30CF42574E399A49D46881EFE6_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::set_KeySize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesCryptoServiceProvider_set_KeySize_mA994D2D3098216C0B8C4F02C0F0A0F63D4256218 (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		SymmetricAlgorithm_set_KeySize_mE442D2BEE16679C2F20CF1CE680C2FB7EC1798A3(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Security.Cryptography.AesCryptoServiceProvider::get_FeedbackSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AesCryptoServiceProvider_get_FeedbackSize_m9DC2E1C3E84CC674ADB2D7E6B06066F333BEC89D (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = SymmetricAlgorithm_get_FeedbackSize_m5F7652D1BB0A4C6A9573281D5FDB92653E56097F_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Security.Cryptography.CipherMode System.Security.Cryptography.AesCryptoServiceProvider::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AesCryptoServiceProvider_get_Mode_m3E1CBFD4D7CE748F3AB615EB88DE1A5D7238285D (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = SymmetricAlgorithm_get_Mode_mC45173B64F0EF7E6FE8A282AB16AFE98024492D5_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::set_Mode(System.Security.Cryptography.CipherMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesCryptoServiceProvider_set_Mode_mFE7044929761BABE312D1146B0ED51B331E35D63 (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_000f;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_1 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05D9407DB2D05625AF86D4150AF53FC9966C7633)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesCryptoServiceProvider_set_Mode_mFE7044929761BABE312D1146B0ED51B331E35D63_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___value0;
		SymmetricAlgorithm_set_Mode_m021BECC925EE517E9EBDCB0C4ADD730D721CC804(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.AesCryptoServiceProvider::get_Padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AesCryptoServiceProvider_get_Padding_m89D49B05949BA2C6C557EFA5211B4934D279C7AD (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = SymmetricAlgorithm_get_Padding_m0E3D81138F2FF12B498A92A096555BC9F22F6D28_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::set_Padding(System.Security.Cryptography.PaddingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesCryptoServiceProvider_set_Padding_mD3353CD8F4B931AA00203000140520775643F96E (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		SymmetricAlgorithm_set_Padding_mC234D5C20E4C7EF00FDAFA28E457F04CDA775D21(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesCryptoServiceProvider::CreateDecryptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AesCryptoServiceProvider_CreateDecryptor_mB1F90A7339DA65542795E17DF9C37810BD088DDF (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(11 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, __this);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, __this);
		RuntimeObject* L_2;
		L_2 = VirtFuncInvoker2< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(23 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[]) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesCryptoServiceProvider::CreateEncryptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AesCryptoServiceProvider_CreateEncryptor_m9555DFFCA344DF06C8B88DDE2EB987B3958EC6BB (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(11 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, __this);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, __this);
		RuntimeObject* L_2;
		L_2 = VirtFuncInvoker2< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(21 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[]) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesCryptoServiceProvider_Dispose_m7123198904819E2BF2B1398E20047B316C3D7D1E (AesCryptoServiceProvider_t080AAB2CD65488A93A584E1F2125C24A653DD1EF * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		SymmetricAlgorithm_Dispose_mF5E8765FC3FCC4DFEA30200FAA1EDFAFA2BE893D(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.AesManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesManaged__ctor_m79644F6BCD0E8C2D8BAF1B1E22E90D3C364F5C57 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C_il2cpp_TypeInfo_var);
		Aes__ctor_m8BE534212149E466C49141CAC9A78B72C2A1D8FA(__this, /*hidden argument*/NULL);
		bool L_0;
		L_0 = CryptoConfig_get_AllowOnlyFipsAlgorithms_m5727A4E316AE115D2E891B3727745C100BB74CD5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17BA770D472146F14CBDE2CFF7752F076430BCBE)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesManaged__ctor_m79644F6BCD0E8C2D8BAF1B1E22E90D3C364F5C57_RuntimeMethod_var)));
	}

IL_001d:
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_3 = (RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E *)il2cpp_codegen_object_new(RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E_il2cpp_TypeInfo_var);
		RijndaelManaged__ctor_mB961FACC934247ED58EC21A6291E2018BD570650(L_3, /*hidden argument*/NULL);
		__this->set_m_rijndael_11(L_3);
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_4 = __this->get_m_rijndael_11();
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, __this);
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(7 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_BlockSize(System.Int32) */, L_4, L_5);
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_6 = __this->get_m_rijndael_11();
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize() */, __this);
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(15 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32) */, L_6, L_7);
		return;
	}
}
// System.Int32 System.Security.Cryptography.AesManaged::get_FeedbackSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AesManaged_get_FeedbackSize_mCFE4C56DFF81F5E616CE535AB7D9E37DC1B7A937 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize() */, L_0);
		return L_1;
	}
}
// System.Byte[] System.Security.Cryptography.AesManaged::get_IV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AesManaged_get_IV_mB1D7896A5F5E71B8B7938A5DF3A743FC2E444018 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_IV(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesManaged_set_IV_m1DBDC4FDAE66A5F2FA99AA4A4E76769BB8897D1E (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(10 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_0, L_1);
		return;
	}
}
// System.Byte[] System.Security.Cryptography.AesManaged::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AesManaged_get_Key_m4CC3B2D28A918B935AD42F3F8D54E93A6CB2FA31 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(11 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_Key(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesManaged_set_Key_m35D61E5FD8942054840B1F24E685E91E3E6CA6E1 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(12 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_0, L_1);
		return;
	}
}
// System.Int32 System.Security.Cryptography.AesManaged::get_KeySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AesManaged_get_KeySize_mBE6EA533BD5978099974A74FF3DE3ECB8B173CD6 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize() */, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_KeySize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesManaged_set_KeySize_m2003A2B9200003C23B544F56E949A0630AA87F93 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(15 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.Security.Cryptography.CipherMode System.Security.Cryptography.AesManaged::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AesManaged_get_Mode_mF9D7222B2AB685AC46F4564B6F2247114244AEF6 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode() */, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_Mode(System.Security.Cryptography.CipherMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesManaged_set_Mode_mA5CF4C1F3B41503C6E09373ADB0B8983A6F61460 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___value0;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		String_t* L_2;
		L_2 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC5FCBC48B93DF02EB8C67CDC7FE9AC103D0C83C)), /*hidden argument*/NULL);
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_3 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesManaged_set_Mode_mA5CF4C1F3B41503C6E09373ADB0B8983A6F61460_RuntimeMethod_var)));
	}

IL_0018:
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_4 = __this->get_m_rijndael_11();
		int32_t L_5 = ___value0;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_4, L_5);
		return;
	}
}
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.AesManaged::get_Padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AesManaged_get_Padding_mD81B3F96D3421F6CD2189A01D65736A9098ACD45 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_Padding(System.Security.Cryptography.PaddingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesManaged_set_Padding_m6B07EC4A0F1F451417DC0AC64E9D637D7916866B (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_0, L_1);
		return;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AesManaged_CreateDecryptor_m41AE4428FE60C9FD485640F3A09F1BF345452A3C (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_0);
		return L_1;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AesManaged_CreateDecryptor_m7240F8C38B99CE73159DE7455046E951C4900268 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___iv1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesManaged_CreateDecryptor_m7240F8C38B99CE73159DE7455046E951C4900268_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___key0;
		NullCheck(L_2);
		bool L_3;
		L_3 = SymmetricAlgorithm_ValidKeySize_mD9A55FE9CC3ADA203B6E1704F877A750A68A0514(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)8)), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4;
		L_4 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98EE0647F9BA017E0436FC5F851A25DCBC9B810A)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesManaged_CreateDecryptor_m7240F8C38B99CE73159DE7455046E951C4900268_RuntimeMethod_var)));
	}

IL_0030:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___iv1;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___iv1;
		NullCheck(L_7);
		int32_t L_8 = ((SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 *)__this)->get_BlockSizeValue_0();
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), (int32_t)8))) == ((int32_t)L_8)))
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_9;
		L_9 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEFFE2CA9E53825F0268901130D843E969BE20A0B)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_10, L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBCF5ABE35600EAFD21FA4DC1F78EBBBCAD041EB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesManaged_CreateDecryptor_m7240F8C38B99CE73159DE7455046E951C4900268_RuntimeMethod_var)));
	}

IL_0055:
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_11 = __this->get_m_rijndael_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___key0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___iv1;
		NullCheck(L_11);
		RuntimeObject* L_14;
		L_14 = VirtFuncInvoker2< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(23 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[]) */, L_11, L_12, L_13);
		return L_14;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AesManaged_CreateEncryptor_mB2BBCAB8753A59FFB572091D2EF80F287CD951BF (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(20 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_0);
		return L_1;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AesManaged_CreateEncryptor_m1E4EB80DE75FCF9E940228E1D7664C0EA1378153 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___iv1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesManaged_CreateEncryptor_m1E4EB80DE75FCF9E940228E1D7664C0EA1378153_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___key0;
		NullCheck(L_2);
		bool L_3;
		L_3 = SymmetricAlgorithm_ValidKeySize_mD9A55FE9CC3ADA203B6E1704F877A750A68A0514(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)8)), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4;
		L_4 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98EE0647F9BA017E0436FC5F851A25DCBC9B810A)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesManaged_CreateEncryptor_m1E4EB80DE75FCF9E940228E1D7664C0EA1378153_RuntimeMethod_var)));
	}

IL_0030:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___iv1;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___iv1;
		NullCheck(L_7);
		int32_t L_8 = ((SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 *)__this)->get_BlockSizeValue_0();
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), (int32_t)8))) == ((int32_t)L_8)))
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_9;
		L_9 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEFFE2CA9E53825F0268901130D843E969BE20A0B)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_10, L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBCF5ABE35600EAFD21FA4DC1F78EBBBCAD041EB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesManaged_CreateEncryptor_m1E4EB80DE75FCF9E940228E1D7664C0EA1378153_RuntimeMethod_var)));
	}

IL_0055:
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_11 = __this->get_m_rijndael_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___key0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___iv1;
		NullCheck(L_11);
		RuntimeObject* L_14;
		L_14 = VirtFuncInvoker2< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(21 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[]) */, L_11, L_12, L_13);
		return L_14;
	}
}
// System.Void System.Security.Cryptography.AesManaged::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesManaged_Dispose_mB0D969841D51825F37095A93E73A50C15C1A1477 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = ___disposing0;
			if (!L_0)
			{
				goto IL_000e;
			}
		}

IL_0003:
		{
			RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_1 = __this->get_m_rijndael_11();
			NullCheck(L_1);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
		}

IL_000e:
		{
			IL2CPP_LEAVE(0x18, FINALLY_0010);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		bool L_2 = ___disposing0;
		SymmetricAlgorithm_Dispose_mF5E8765FC3FCC4DFEA30200FAA1EDFAFA2BE893D(__this, L_2, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x18, IL_0018)
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Security.Cryptography.AesManaged::GenerateIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesManaged_GenerateIV_mBB19651CC37782273A882055D4E63370268F2D91 (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(25 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV() */, L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.AesManaged::GenerateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesManaged_GenerateKey_mF6673B955AE82377595277C6B78C7DA8A16F480E (AesManaged_tEA4C1DCB8D73BD33AA7397B0B448B7D5C0ACD9C4 * __this, const RuntimeMethod* method)
{
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = __this->get_m_rijndael_11();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(24 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateKey() */, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.AesTransform::.ctor(System.Security.Cryptography.Aes,System.Boolean,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesTransform__ctor_m3903A599E8B2C3F7AB3B70E1258980151D639598 (AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B * __this, Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C * ___algo0, bool ___encryption1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___iv3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C * L_0 = ___algo0;
		bool L_1 = ___encryption1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___iv3;
		SymmetricTransform__ctor_m9C5CF3DDF8C94E36D642CFA223A7D155A10D8827(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___key2;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_4 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC5E7797F30965FD4F725C4ABC4334B3AA868AB2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesTransform__ctor_m3903A599E8B2C3F7AB3B70E1258980151D639598_RuntimeMethod_var)));
	}

IL_0018:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___iv3;
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___iv3;
		NullCheck(L_6);
		Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C * L_7 = ___algo0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_7);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) == ((int32_t)((int32_t)((int32_t)L_8>>(int32_t)3)))))
		{
			goto IL_005c;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___iv3;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)));
		RuntimeObject * L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_10;
		Aes_tFD34360BE594E79220F75AA9DF67CABB00116D7C * L_15 = ___algo0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_15);
		int32_t L_17 = ((int32_t)((int32_t)L_16>>(int32_t)3));
		RuntimeObject * L_18 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		String_t* L_19;
		L_19 = Locale_GetText_m9472C71D4F5D9E384D5964D8A2281B9F895F386A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82B03C89EBDF21F2AC40796C070B4770C4DC82D9)), L_14, /*hidden argument*/NULL);
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_20 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesTransform__ctor_m3903A599E8B2C3F7AB3B70E1258980151D639598_RuntimeMethod_var)));
	}

IL_005c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = ___key2;
		NullCheck(L_21);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)));
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)16))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)24))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)32))))
		{
			goto IL_00ac;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_25;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_29);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_26;
		int32_t L_31 = ((int32_t)16);
		RuntimeObject * L_32 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_31);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_32);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = L_30;
		int32_t L_34 = ((int32_t)24);
		RuntimeObject * L_35 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_34);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_35);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = L_33;
		int32_t L_37 = ((int32_t)32);
		RuntimeObject * L_38 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_37);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_38);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_38);
		String_t* L_39;
		L_39 = Locale_GetText_m9472C71D4F5D9E384D5964D8A2281B9F895F386A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF82365E63B4829E3BB5F054E86FEF03FBB9807C3)), L_36, /*hidden argument*/NULL);
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_40 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_40, L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesTransform__ctor_m3903A599E8B2C3F7AB3B70E1258980151D639598_RuntimeMethod_var)));
	}

IL_00ac:
	{
		int32_t L_41 = V_0;
		V_0 = ((int32_t)((int32_t)L_41<<(int32_t)3));
		int32_t L_42 = V_0;
		__this->set_Nk_13(((int32_t)((int32_t)L_42>>(int32_t)5)));
		int32_t L_43 = __this->get_Nk_13();
		if ((!(((uint32_t)L_43) == ((uint32_t)8))))
		{
			goto IL_00cc;
		}
	}
	{
		__this->set_Nr_14(((int32_t)14));
		goto IL_00e7;
	}

IL_00cc:
	{
		int32_t L_44 = __this->get_Nk_13();
		if ((!(((uint32_t)L_44) == ((uint32_t)6))))
		{
			goto IL_00df;
		}
	}
	{
		__this->set_Nr_14(((int32_t)12));
		goto IL_00e7;
	}

IL_00df:
	{
		__this->set_Nr_14(((int32_t)10));
	}

IL_00e7:
	{
		int32_t L_45 = __this->get_Nr_14();
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1))));
		int32_t L_46 = V_1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_47 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)L_46);
		V_2 = L_47;
		V_3 = 0;
		V_4 = 0;
		goto IL_0141;
	}

IL_0100:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = ___key2;
		int32_t L_49 = V_3;
		int32_t L_50 = L_49;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		NullCheck(L_48);
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_5 = ((int32_t)((int32_t)L_52<<(int32_t)((int32_t)24)));
		uint32_t L_53 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = ___key2;
		int32_t L_55 = V_3;
		int32_t L_56 = L_55;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		NullCheck(L_54);
		int32_t L_57 = L_56;
		uint8_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_5 = ((int32_t)((int32_t)L_53|(int32_t)((int32_t)((int32_t)L_58<<(int32_t)((int32_t)16)))));
		uint32_t L_59 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_60 = ___key2;
		int32_t L_61 = V_3;
		int32_t L_62 = L_61;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		NullCheck(L_60);
		int32_t L_63 = L_62;
		uint8_t L_64 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_5 = ((int32_t)((int32_t)L_59|(int32_t)((int32_t)((int32_t)L_64<<(int32_t)8))));
		uint32_t L_65 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_66 = ___key2;
		int32_t L_67 = V_3;
		int32_t L_68 = L_67;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
		NullCheck(L_66);
		int32_t L_69 = L_68;
		uint8_t L_70 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_5 = ((int32_t)((int32_t)L_65|(int32_t)L_70));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_71 = V_2;
		int32_t L_72 = V_4;
		uint32_t L_73 = V_5;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (uint32_t)L_73);
		int32_t L_74 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_0141:
	{
		int32_t L_75 = V_4;
		int32_t L_76 = __this->get_Nk_13();
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_77 = __this->get_Nk_13();
		V_6 = L_77;
		goto IL_01cd;
	}

IL_0155:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_78 = V_2;
		int32_t L_79 = V_6;
		NullCheck(L_78);
		int32_t L_80 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)1));
		uint32_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_7 = L_81;
		int32_t L_82 = V_6;
		int32_t L_83 = __this->get_Nk_13();
		if (((int32_t)((int32_t)L_82%(int32_t)L_83)))
		{
			goto IL_0196;
		}
	}
	{
		uint32_t L_84 = V_7;
		uint32_t L_85 = V_7;
		V_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_84<<(int32_t)8))|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_85>>((int32_t)24)))&(int32_t)((int32_t)255)))));
		uint32_t L_86 = V_8;
		uint32_t L_87;
		L_87 = AesTransform_SubByte_m2D77D545ABD3D84C04741B80ABB74BEFE8C55679(__this, L_86, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_88 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_Rcon_15();
		int32_t L_89 = V_6;
		int32_t L_90 = __this->get_Nk_13();
		NullCheck(L_88);
		int32_t L_91 = ((int32_t)((int32_t)L_89/(int32_t)L_90));
		uint32_t L_92 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		V_7 = ((int32_t)((int32_t)L_87^(int32_t)L_92));
		goto IL_01b5;
	}

IL_0196:
	{
		int32_t L_93 = __this->get_Nk_13();
		if ((((int32_t)L_93) <= ((int32_t)6)))
		{
			goto IL_01b5;
		}
	}
	{
		int32_t L_94 = V_6;
		int32_t L_95 = __this->get_Nk_13();
		if ((!(((uint32_t)((int32_t)((int32_t)L_94%(int32_t)L_95))) == ((uint32_t)4))))
		{
			goto IL_01b5;
		}
	}
	{
		uint32_t L_96 = V_7;
		uint32_t L_97;
		L_97 = AesTransform_SubByte_m2D77D545ABD3D84C04741B80ABB74BEFE8C55679(__this, L_96, /*hidden argument*/NULL);
		V_7 = L_97;
	}

IL_01b5:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_98 = V_2;
		int32_t L_99 = V_6;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_100 = V_2;
		int32_t L_101 = V_6;
		int32_t L_102 = __this->get_Nk_13();
		NullCheck(L_100);
		int32_t L_103 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_101, (int32_t)L_102));
		uint32_t L_104 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		uint32_t L_105 = V_7;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (uint32_t)((int32_t)((int32_t)L_104^(int32_t)L_105)));
		int32_t L_106 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
	}

IL_01cd:
	{
		int32_t L_107 = V_6;
		int32_t L_108 = V_1;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_0155;
		}
	}
	{
		bool L_109 = ___encryption1;
		if (L_109)
		{
			goto IL_028a;
		}
	}
	{
		V_9 = 0;
		int32_t L_110 = V_1;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_110, (int32_t)4));
		goto IL_021e;
	}

IL_01e2:
	{
		V_11 = 0;
		goto IL_020d;
	}

IL_01e7:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_111 = V_2;
		int32_t L_112 = V_9;
		int32_t L_113 = V_11;
		NullCheck(L_111);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)L_113));
		uint32_t L_115 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		V_12 = L_115;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_116 = V_2;
		int32_t L_117 = V_9;
		int32_t L_118 = V_11;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_119 = V_2;
		int32_t L_120 = V_10;
		int32_t L_121 = V_11;
		NullCheck(L_119);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)L_121));
		uint32_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)L_118))), (uint32_t)L_123);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_124 = V_2;
		int32_t L_125 = V_10;
		int32_t L_126 = V_11;
		uint32_t L_127 = V_12;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)L_126))), (uint32_t)L_127);
		int32_t L_128 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1));
	}

IL_020d:
	{
		int32_t L_129 = V_11;
		if ((((int32_t)L_129) < ((int32_t)4)))
		{
			goto IL_01e7;
		}
	}
	{
		int32_t L_130 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)4));
		int32_t L_131 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_131, (int32_t)4));
	}

IL_021e:
	{
		int32_t L_132 = V_9;
		int32_t L_133 = V_10;
		if ((((int32_t)L_132) < ((int32_t)L_133)))
		{
			goto IL_01e2;
		}
	}
	{
		V_13 = 4;
		goto IL_0281;
	}

IL_0229:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_134 = V_2;
		int32_t L_135 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_136 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_137 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_138 = V_2;
		int32_t L_139 = V_13;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		uint32_t L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		NullCheck(L_137);
		int32_t L_142 = ((int32_t)((uint32_t)L_141>>((int32_t)24)));
		uint8_t L_143 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_136);
		uint8_t L_144 = L_143;
		uint32_t L_145 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_146 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_147 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_148 = V_2;
		int32_t L_149 = V_13;
		NullCheck(L_148);
		int32_t L_150 = L_149;
		uint32_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		NullCheck(L_147);
		int32_t L_152 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_151>>((int32_t)16)))));
		uint8_t L_153 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		NullCheck(L_146);
		uint8_t L_154 = L_153;
		uint32_t L_155 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_156 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_157 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_158 = V_2;
		int32_t L_159 = V_13;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		uint32_t L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		NullCheck(L_157);
		int32_t L_162 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_161>>8))));
		uint8_t L_163 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_156);
		uint8_t L_164 = L_163;
		uint32_t L_165 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_166 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_167 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_168 = V_2;
		int32_t L_169 = V_13;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		uint32_t L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		NullCheck(L_167);
		int32_t L_172 = ((int32_t)((uint8_t)L_171));
		uint8_t L_173 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		NullCheck(L_166);
		uint8_t L_174 = L_173;
		uint32_t L_175 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(L_135), (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_145^(int32_t)L_155))^(int32_t)L_165))^(int32_t)L_175)));
		int32_t L_176 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)1));
	}

IL_0281:
	{
		int32_t L_177 = V_13;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_178 = V_2;
		NullCheck(L_178);
		if ((((int32_t)L_177) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_178)->max_length))), (int32_t)4)))))
		{
			goto IL_0229;
		}
	}

IL_028a:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_179 = V_2;
		__this->set_expandedKey_12(L_179);
		return;
	}
}
// System.Void System.Security.Cryptography.AesTransform::ECB(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesTransform_ECB_m2E2F4E2B307B0D34FEADF38684007E622FCEDFD1 (AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___output1, const RuntimeMethod* method)
{
	{
		bool L_0 = ((SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76 *)__this)->get_encrypt_1();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___input0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___output1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = __this->get_expandedKey_12();
		AesTransform_Encrypt128_m57DA74A7E05818DFD92F2614F8F65B0D1E696129(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___input0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___output1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_6 = __this->get_expandedKey_12();
		AesTransform_Decrypt128_m075F7BA40A4CFECA6F6A379065B731586EDDB23A(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt32 System.Security.Cryptography.AesTransform::SubByte(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesTransform_SubByte_m2D77D545ABD3D84C04741B80ABB74BEFE8C55679 (AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B * __this, uint32_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___a0;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)L_0));
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_2 = V_0;
		NullCheck(L_1);
		uint32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = ___a0;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)((int32_t)((uint32_t)L_5>>8))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		uint32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		uint32_t L_10 = ___a0;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_12 = V_0;
		NullCheck(L_11);
		uint32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		uint32_t L_15 = ___a0;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)((int32_t)((uint32_t)L_15>>((int32_t)24)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_17 = V_0;
		NullCheck(L_16);
		uint32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)((int32_t)L_9<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_14<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_19<<(int32_t)((int32_t)24)))));
	}
}
// System.Void System.Security.Cryptography.AesTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesTransform_Encrypt128_m57DA74A7E05818DFD92F2614F8F65B0D1E696129 (AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___indata0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___outdata1, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___ekey2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		V_8 = ((int32_t)40);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___indata0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___indata0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___indata0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___indata0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_12 = ___ekey2;
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)8))))|(int32_t)L_11))^(int32_t)L_14));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___indata0;
		NullCheck(L_15);
		int32_t L_16 = 4;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___indata0;
		NullCheck(L_18);
		int32_t L_19 = 5;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = ___indata0;
		NullCheck(L_21);
		int32_t L_22 = 6;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ___indata0;
		NullCheck(L_24);
		int32_t L_25 = 7;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_27 = ___ekey2;
		NullCheck(L_27);
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_23<<(int32_t)8))))|(int32_t)L_26))^(int32_t)L_29));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = ___indata0;
		NullCheck(L_30);
		int32_t L_31 = 8;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = ___indata0;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)9);
		uint8_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = ___indata0;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)10);
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = ___indata0;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)11);
		uint8_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_42 = ___ekey2;
		NullCheck(L_42);
		int32_t L_43 = 2;
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_35<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_38<<(int32_t)8))))|(int32_t)L_41))^(int32_t)L_44));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = ___indata0;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)12);
		uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = ___indata0;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)13);
		uint8_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_51 = ___indata0;
		NullCheck(L_51);
		int32_t L_52 = ((int32_t)14);
		uint8_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = ___indata0;
		NullCheck(L_54);
		int32_t L_55 = ((int32_t)15);
		uint8_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_57 = ___ekey2;
		NullCheck(L_57);
		int32_t L_58 = 3;
		uint32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_47<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_50<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_53<<(int32_t)8))))|(int32_t)L_56))^(int32_t)L_59));
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_60 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)((uint32_t)L_61>>((int32_t)24)));
		uint32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_64 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_65 = V_1;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_65>>((int32_t)16)))));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_68 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_69 = V_2;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_69>>8))));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_72 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_73 = V_3;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)((uint8_t)L_73));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_76 = ___ekey2;
		NullCheck(L_76);
		int32_t L_77 = 4;
		uint32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_63^(int32_t)L_67))^(int32_t)L_71))^(int32_t)L_75))^(int32_t)L_78));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_79 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_80 = V_1;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)((uint32_t)L_80>>((int32_t)24)));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_83 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_84 = V_2;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_84>>((int32_t)16)))));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_87 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_88 = V_3;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_88>>8))));
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_91 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_92 = V_0;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)((uint8_t)L_92));
		uint32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_95 = ___ekey2;
		NullCheck(L_95);
		int32_t L_96 = 5;
		uint32_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_82^(int32_t)L_86))^(int32_t)L_90))^(int32_t)L_94))^(int32_t)L_97));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_98 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_99 = V_2;
		NullCheck(L_98);
		int32_t L_100 = ((int32_t)((uint32_t)L_99>>((int32_t)24)));
		uint32_t L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_102 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_103 = V_3;
		NullCheck(L_102);
		int32_t L_104 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_103>>((int32_t)16)))));
		uint32_t L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_106 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_107 = V_0;
		NullCheck(L_106);
		int32_t L_108 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_107>>8))));
		uint32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_110 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_111 = V_1;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)((uint8_t)L_111));
		uint32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_114 = ___ekey2;
		NullCheck(L_114);
		int32_t L_115 = 6;
		uint32_t L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_101^(int32_t)L_105))^(int32_t)L_109))^(int32_t)L_113))^(int32_t)L_116));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_117 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_118 = V_3;
		NullCheck(L_117);
		int32_t L_119 = ((int32_t)((uint32_t)L_118>>((int32_t)24)));
		uint32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_121 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_122 = V_0;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_122>>((int32_t)16)))));
		uint32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_125 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_126 = V_1;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_126>>8))));
		uint32_t L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_129 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_130 = V_2;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)((uint8_t)L_130));
		uint32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_133 = ___ekey2;
		NullCheck(L_133);
		int32_t L_134 = 7;
		uint32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_120^(int32_t)L_124))^(int32_t)L_128))^(int32_t)L_132))^(int32_t)L_135));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_136 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_137 = V_4;
		NullCheck(L_136);
		int32_t L_138 = ((int32_t)((uint32_t)L_137>>((int32_t)24)));
		uint32_t L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_140 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_141 = V_5;
		NullCheck(L_140);
		int32_t L_142 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_141>>((int32_t)16)))));
		uint32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_144 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_145 = V_6;
		NullCheck(L_144);
		int32_t L_146 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_145>>8))));
		uint32_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_148 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_149 = V_7;
		NullCheck(L_148);
		int32_t L_150 = ((int32_t)((uint8_t)L_149));
		uint32_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_152 = ___ekey2;
		NullCheck(L_152);
		int32_t L_153 = 8;
		uint32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_139^(int32_t)L_143))^(int32_t)L_147))^(int32_t)L_151))^(int32_t)L_154));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_155 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_156 = V_5;
		NullCheck(L_155);
		int32_t L_157 = ((int32_t)((uint32_t)L_156>>((int32_t)24)));
		uint32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_159 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_160 = V_6;
		NullCheck(L_159);
		int32_t L_161 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_160>>((int32_t)16)))));
		uint32_t L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_163 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_164 = V_7;
		NullCheck(L_163);
		int32_t L_165 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_164>>8))));
		uint32_t L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_167 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_168 = V_4;
		NullCheck(L_167);
		int32_t L_169 = ((int32_t)((uint8_t)L_168));
		uint32_t L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_171 = ___ekey2;
		NullCheck(L_171);
		int32_t L_172 = ((int32_t)9);
		uint32_t L_173 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_158^(int32_t)L_162))^(int32_t)L_166))^(int32_t)L_170))^(int32_t)L_173));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_174 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_175 = V_6;
		NullCheck(L_174);
		int32_t L_176 = ((int32_t)((uint32_t)L_175>>((int32_t)24)));
		uint32_t L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_178 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_179 = V_7;
		NullCheck(L_178);
		int32_t L_180 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_179>>((int32_t)16)))));
		uint32_t L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_182 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_183 = V_4;
		NullCheck(L_182);
		int32_t L_184 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_183>>8))));
		uint32_t L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_186 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_187 = V_5;
		NullCheck(L_186);
		int32_t L_188 = ((int32_t)((uint8_t)L_187));
		uint32_t L_189 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_190 = ___ekey2;
		NullCheck(L_190);
		int32_t L_191 = ((int32_t)10);
		uint32_t L_192 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_177^(int32_t)L_181))^(int32_t)L_185))^(int32_t)L_189))^(int32_t)L_192));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_193 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_194 = V_7;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)((uint32_t)L_194>>((int32_t)24)));
		uint32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_197 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_198 = V_4;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_198>>((int32_t)16)))));
		uint32_t L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_201 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_202 = V_5;
		NullCheck(L_201);
		int32_t L_203 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_202>>8))));
		uint32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_205 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_206 = V_6;
		NullCheck(L_205);
		int32_t L_207 = ((int32_t)((uint8_t)L_206));
		uint32_t L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_209 = ___ekey2;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)11);
		uint32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_196^(int32_t)L_200))^(int32_t)L_204))^(int32_t)L_208))^(int32_t)L_211));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_212 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_213 = V_0;
		NullCheck(L_212);
		int32_t L_214 = ((int32_t)((uint32_t)L_213>>((int32_t)24)));
		uint32_t L_215 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_216 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_217 = V_1;
		NullCheck(L_216);
		int32_t L_218 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_217>>((int32_t)16)))));
		uint32_t L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_220 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_221 = V_2;
		NullCheck(L_220);
		int32_t L_222 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_221>>8))));
		uint32_t L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_224 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_225 = V_3;
		NullCheck(L_224);
		int32_t L_226 = ((int32_t)((uint8_t)L_225));
		uint32_t L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_228 = ___ekey2;
		NullCheck(L_228);
		int32_t L_229 = ((int32_t)12);
		uint32_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_215^(int32_t)L_219))^(int32_t)L_223))^(int32_t)L_227))^(int32_t)L_230));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_231 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_232 = V_1;
		NullCheck(L_231);
		int32_t L_233 = ((int32_t)((uint32_t)L_232>>((int32_t)24)));
		uint32_t L_234 = (L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_235 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_236 = V_2;
		NullCheck(L_235);
		int32_t L_237 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_236>>((int32_t)16)))));
		uint32_t L_238 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_239 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_240 = V_3;
		NullCheck(L_239);
		int32_t L_241 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_240>>8))));
		uint32_t L_242 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_243 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_244 = V_0;
		NullCheck(L_243);
		int32_t L_245 = ((int32_t)((uint8_t)L_244));
		uint32_t L_246 = (L_243)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_247 = ___ekey2;
		NullCheck(L_247);
		int32_t L_248 = ((int32_t)13);
		uint32_t L_249 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_234^(int32_t)L_238))^(int32_t)L_242))^(int32_t)L_246))^(int32_t)L_249));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_250 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_251 = V_2;
		NullCheck(L_250);
		int32_t L_252 = ((int32_t)((uint32_t)L_251>>((int32_t)24)));
		uint32_t L_253 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_254 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_255 = V_3;
		NullCheck(L_254);
		int32_t L_256 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_255>>((int32_t)16)))));
		uint32_t L_257 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_258 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_259 = V_0;
		NullCheck(L_258);
		int32_t L_260 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_259>>8))));
		uint32_t L_261 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_260));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_262 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_263 = V_1;
		NullCheck(L_262);
		int32_t L_264 = ((int32_t)((uint8_t)L_263));
		uint32_t L_265 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_266 = ___ekey2;
		NullCheck(L_266);
		int32_t L_267 = ((int32_t)14);
		uint32_t L_268 = (L_266)->GetAt(static_cast<il2cpp_array_size_t>(L_267));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_253^(int32_t)L_257))^(int32_t)L_261))^(int32_t)L_265))^(int32_t)L_268));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_269 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_270 = V_3;
		NullCheck(L_269);
		int32_t L_271 = ((int32_t)((uint32_t)L_270>>((int32_t)24)));
		uint32_t L_272 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_273 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_274 = V_0;
		NullCheck(L_273);
		int32_t L_275 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_274>>((int32_t)16)))));
		uint32_t L_276 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_275));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_277 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_278 = V_1;
		NullCheck(L_277);
		int32_t L_279 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_278>>8))));
		uint32_t L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_281 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_282 = V_2;
		NullCheck(L_281);
		int32_t L_283 = ((int32_t)((uint8_t)L_282));
		uint32_t L_284 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_283));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_285 = ___ekey2;
		NullCheck(L_285);
		int32_t L_286 = ((int32_t)15);
		uint32_t L_287 = (L_285)->GetAt(static_cast<il2cpp_array_size_t>(L_286));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_272^(int32_t)L_276))^(int32_t)L_280))^(int32_t)L_284))^(int32_t)L_287));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_288 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_289 = V_4;
		NullCheck(L_288);
		int32_t L_290 = ((int32_t)((uint32_t)L_289>>((int32_t)24)));
		uint32_t L_291 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_292 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_293 = V_5;
		NullCheck(L_292);
		int32_t L_294 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_293>>((int32_t)16)))));
		uint32_t L_295 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_296 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_297 = V_6;
		NullCheck(L_296);
		int32_t L_298 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_297>>8))));
		uint32_t L_299 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_300 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_301 = V_7;
		NullCheck(L_300);
		int32_t L_302 = ((int32_t)((uint8_t)L_301));
		uint32_t L_303 = (L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_304 = ___ekey2;
		NullCheck(L_304);
		int32_t L_305 = ((int32_t)16);
		uint32_t L_306 = (L_304)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_291^(int32_t)L_295))^(int32_t)L_299))^(int32_t)L_303))^(int32_t)L_306));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_307 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_308 = V_5;
		NullCheck(L_307);
		int32_t L_309 = ((int32_t)((uint32_t)L_308>>((int32_t)24)));
		uint32_t L_310 = (L_307)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_311 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_312 = V_6;
		NullCheck(L_311);
		int32_t L_313 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_312>>((int32_t)16)))));
		uint32_t L_314 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_315 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_316 = V_7;
		NullCheck(L_315);
		int32_t L_317 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_316>>8))));
		uint32_t L_318 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_319 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_320 = V_4;
		NullCheck(L_319);
		int32_t L_321 = ((int32_t)((uint8_t)L_320));
		uint32_t L_322 = (L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_323 = ___ekey2;
		NullCheck(L_323);
		int32_t L_324 = ((int32_t)17);
		uint32_t L_325 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_310^(int32_t)L_314))^(int32_t)L_318))^(int32_t)L_322))^(int32_t)L_325));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_326 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_327 = V_6;
		NullCheck(L_326);
		int32_t L_328 = ((int32_t)((uint32_t)L_327>>((int32_t)24)));
		uint32_t L_329 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_330 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_331 = V_7;
		NullCheck(L_330);
		int32_t L_332 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_331>>((int32_t)16)))));
		uint32_t L_333 = (L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_334 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_335 = V_4;
		NullCheck(L_334);
		int32_t L_336 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_335>>8))));
		uint32_t L_337 = (L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_338 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_339 = V_5;
		NullCheck(L_338);
		int32_t L_340 = ((int32_t)((uint8_t)L_339));
		uint32_t L_341 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_342 = ___ekey2;
		NullCheck(L_342);
		int32_t L_343 = ((int32_t)18);
		uint32_t L_344 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_329^(int32_t)L_333))^(int32_t)L_337))^(int32_t)L_341))^(int32_t)L_344));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_345 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_346 = V_7;
		NullCheck(L_345);
		int32_t L_347 = ((int32_t)((uint32_t)L_346>>((int32_t)24)));
		uint32_t L_348 = (L_345)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_349 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_350 = V_4;
		NullCheck(L_349);
		int32_t L_351 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_350>>((int32_t)16)))));
		uint32_t L_352 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_351));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_353 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_354 = V_5;
		NullCheck(L_353);
		int32_t L_355 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_354>>8))));
		uint32_t L_356 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_355));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_357 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_358 = V_6;
		NullCheck(L_357);
		int32_t L_359 = ((int32_t)((uint8_t)L_358));
		uint32_t L_360 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_359));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_361 = ___ekey2;
		NullCheck(L_361);
		int32_t L_362 = ((int32_t)19);
		uint32_t L_363 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_348^(int32_t)L_352))^(int32_t)L_356))^(int32_t)L_360))^(int32_t)L_363));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_364 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_365 = V_0;
		NullCheck(L_364);
		int32_t L_366 = ((int32_t)((uint32_t)L_365>>((int32_t)24)));
		uint32_t L_367 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_368 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_369 = V_1;
		NullCheck(L_368);
		int32_t L_370 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_369>>((int32_t)16)))));
		uint32_t L_371 = (L_368)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_372 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_373 = V_2;
		NullCheck(L_372);
		int32_t L_374 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_373>>8))));
		uint32_t L_375 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_376 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_377 = V_3;
		NullCheck(L_376);
		int32_t L_378 = ((int32_t)((uint8_t)L_377));
		uint32_t L_379 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_380 = ___ekey2;
		NullCheck(L_380);
		int32_t L_381 = ((int32_t)20);
		uint32_t L_382 = (L_380)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_367^(int32_t)L_371))^(int32_t)L_375))^(int32_t)L_379))^(int32_t)L_382));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_383 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_384 = V_1;
		NullCheck(L_383);
		int32_t L_385 = ((int32_t)((uint32_t)L_384>>((int32_t)24)));
		uint32_t L_386 = (L_383)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_387 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_388 = V_2;
		NullCheck(L_387);
		int32_t L_389 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_388>>((int32_t)16)))));
		uint32_t L_390 = (L_387)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_391 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_392 = V_3;
		NullCheck(L_391);
		int32_t L_393 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_392>>8))));
		uint32_t L_394 = (L_391)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_395 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_396 = V_0;
		NullCheck(L_395);
		int32_t L_397 = ((int32_t)((uint8_t)L_396));
		uint32_t L_398 = (L_395)->GetAt(static_cast<il2cpp_array_size_t>(L_397));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_399 = ___ekey2;
		NullCheck(L_399);
		int32_t L_400 = ((int32_t)21);
		uint32_t L_401 = (L_399)->GetAt(static_cast<il2cpp_array_size_t>(L_400));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_386^(int32_t)L_390))^(int32_t)L_394))^(int32_t)L_398))^(int32_t)L_401));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_402 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_403 = V_2;
		NullCheck(L_402);
		int32_t L_404 = ((int32_t)((uint32_t)L_403>>((int32_t)24)));
		uint32_t L_405 = (L_402)->GetAt(static_cast<il2cpp_array_size_t>(L_404));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_406 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_407 = V_3;
		NullCheck(L_406);
		int32_t L_408 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_407>>((int32_t)16)))));
		uint32_t L_409 = (L_406)->GetAt(static_cast<il2cpp_array_size_t>(L_408));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_410 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_411 = V_0;
		NullCheck(L_410);
		int32_t L_412 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_411>>8))));
		uint32_t L_413 = (L_410)->GetAt(static_cast<il2cpp_array_size_t>(L_412));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_414 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_415 = V_1;
		NullCheck(L_414);
		int32_t L_416 = ((int32_t)((uint8_t)L_415));
		uint32_t L_417 = (L_414)->GetAt(static_cast<il2cpp_array_size_t>(L_416));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_418 = ___ekey2;
		NullCheck(L_418);
		int32_t L_419 = ((int32_t)22);
		uint32_t L_420 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_405^(int32_t)L_409))^(int32_t)L_413))^(int32_t)L_417))^(int32_t)L_420));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_421 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_422 = V_3;
		NullCheck(L_421);
		int32_t L_423 = ((int32_t)((uint32_t)L_422>>((int32_t)24)));
		uint32_t L_424 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_423));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_425 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_426 = V_0;
		NullCheck(L_425);
		int32_t L_427 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_426>>((int32_t)16)))));
		uint32_t L_428 = (L_425)->GetAt(static_cast<il2cpp_array_size_t>(L_427));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_429 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_430 = V_1;
		NullCheck(L_429);
		int32_t L_431 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_430>>8))));
		uint32_t L_432 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_431));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_433 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_434 = V_2;
		NullCheck(L_433);
		int32_t L_435 = ((int32_t)((uint8_t)L_434));
		uint32_t L_436 = (L_433)->GetAt(static_cast<il2cpp_array_size_t>(L_435));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_437 = ___ekey2;
		NullCheck(L_437);
		int32_t L_438 = ((int32_t)23);
		uint32_t L_439 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_424^(int32_t)L_428))^(int32_t)L_432))^(int32_t)L_436))^(int32_t)L_439));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_440 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_441 = V_4;
		NullCheck(L_440);
		int32_t L_442 = ((int32_t)((uint32_t)L_441>>((int32_t)24)));
		uint32_t L_443 = (L_440)->GetAt(static_cast<il2cpp_array_size_t>(L_442));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_444 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_445 = V_5;
		NullCheck(L_444);
		int32_t L_446 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_445>>((int32_t)16)))));
		uint32_t L_447 = (L_444)->GetAt(static_cast<il2cpp_array_size_t>(L_446));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_448 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_449 = V_6;
		NullCheck(L_448);
		int32_t L_450 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_449>>8))));
		uint32_t L_451 = (L_448)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_452 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_453 = V_7;
		NullCheck(L_452);
		int32_t L_454 = ((int32_t)((uint8_t)L_453));
		uint32_t L_455 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_454));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_456 = ___ekey2;
		NullCheck(L_456);
		int32_t L_457 = ((int32_t)24);
		uint32_t L_458 = (L_456)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_443^(int32_t)L_447))^(int32_t)L_451))^(int32_t)L_455))^(int32_t)L_458));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_459 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_460 = V_5;
		NullCheck(L_459);
		int32_t L_461 = ((int32_t)((uint32_t)L_460>>((int32_t)24)));
		uint32_t L_462 = (L_459)->GetAt(static_cast<il2cpp_array_size_t>(L_461));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_463 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_464 = V_6;
		NullCheck(L_463);
		int32_t L_465 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_464>>((int32_t)16)))));
		uint32_t L_466 = (L_463)->GetAt(static_cast<il2cpp_array_size_t>(L_465));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_467 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_468 = V_7;
		NullCheck(L_467);
		int32_t L_469 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_468>>8))));
		uint32_t L_470 = (L_467)->GetAt(static_cast<il2cpp_array_size_t>(L_469));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_471 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_472 = V_4;
		NullCheck(L_471);
		int32_t L_473 = ((int32_t)((uint8_t)L_472));
		uint32_t L_474 = (L_471)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_475 = ___ekey2;
		NullCheck(L_475);
		int32_t L_476 = ((int32_t)25);
		uint32_t L_477 = (L_475)->GetAt(static_cast<il2cpp_array_size_t>(L_476));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_462^(int32_t)L_466))^(int32_t)L_470))^(int32_t)L_474))^(int32_t)L_477));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_478 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_479 = V_6;
		NullCheck(L_478);
		int32_t L_480 = ((int32_t)((uint32_t)L_479>>((int32_t)24)));
		uint32_t L_481 = (L_478)->GetAt(static_cast<il2cpp_array_size_t>(L_480));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_482 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_483 = V_7;
		NullCheck(L_482);
		int32_t L_484 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_483>>((int32_t)16)))));
		uint32_t L_485 = (L_482)->GetAt(static_cast<il2cpp_array_size_t>(L_484));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_486 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_487 = V_4;
		NullCheck(L_486);
		int32_t L_488 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_487>>8))));
		uint32_t L_489 = (L_486)->GetAt(static_cast<il2cpp_array_size_t>(L_488));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_490 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_491 = V_5;
		NullCheck(L_490);
		int32_t L_492 = ((int32_t)((uint8_t)L_491));
		uint32_t L_493 = (L_490)->GetAt(static_cast<il2cpp_array_size_t>(L_492));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_494 = ___ekey2;
		NullCheck(L_494);
		int32_t L_495 = ((int32_t)26);
		uint32_t L_496 = (L_494)->GetAt(static_cast<il2cpp_array_size_t>(L_495));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_481^(int32_t)L_485))^(int32_t)L_489))^(int32_t)L_493))^(int32_t)L_496));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_497 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_498 = V_7;
		NullCheck(L_497);
		int32_t L_499 = ((int32_t)((uint32_t)L_498>>((int32_t)24)));
		uint32_t L_500 = (L_497)->GetAt(static_cast<il2cpp_array_size_t>(L_499));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_501 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_502 = V_4;
		NullCheck(L_501);
		int32_t L_503 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_502>>((int32_t)16)))));
		uint32_t L_504 = (L_501)->GetAt(static_cast<il2cpp_array_size_t>(L_503));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_505 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_506 = V_5;
		NullCheck(L_505);
		int32_t L_507 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_506>>8))));
		uint32_t L_508 = (L_505)->GetAt(static_cast<il2cpp_array_size_t>(L_507));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_509 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_510 = V_6;
		NullCheck(L_509);
		int32_t L_511 = ((int32_t)((uint8_t)L_510));
		uint32_t L_512 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_511));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_513 = ___ekey2;
		NullCheck(L_513);
		int32_t L_514 = ((int32_t)27);
		uint32_t L_515 = (L_513)->GetAt(static_cast<il2cpp_array_size_t>(L_514));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_500^(int32_t)L_504))^(int32_t)L_508))^(int32_t)L_512))^(int32_t)L_515));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_516 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_517 = V_0;
		NullCheck(L_516);
		int32_t L_518 = ((int32_t)((uint32_t)L_517>>((int32_t)24)));
		uint32_t L_519 = (L_516)->GetAt(static_cast<il2cpp_array_size_t>(L_518));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_520 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_521 = V_1;
		NullCheck(L_520);
		int32_t L_522 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_521>>((int32_t)16)))));
		uint32_t L_523 = (L_520)->GetAt(static_cast<il2cpp_array_size_t>(L_522));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_524 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_525 = V_2;
		NullCheck(L_524);
		int32_t L_526 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_525>>8))));
		uint32_t L_527 = (L_524)->GetAt(static_cast<il2cpp_array_size_t>(L_526));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_528 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_529 = V_3;
		NullCheck(L_528);
		int32_t L_530 = ((int32_t)((uint8_t)L_529));
		uint32_t L_531 = (L_528)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_532 = ___ekey2;
		NullCheck(L_532);
		int32_t L_533 = ((int32_t)28);
		uint32_t L_534 = (L_532)->GetAt(static_cast<il2cpp_array_size_t>(L_533));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_519^(int32_t)L_523))^(int32_t)L_527))^(int32_t)L_531))^(int32_t)L_534));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_535 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_536 = V_1;
		NullCheck(L_535);
		int32_t L_537 = ((int32_t)((uint32_t)L_536>>((int32_t)24)));
		uint32_t L_538 = (L_535)->GetAt(static_cast<il2cpp_array_size_t>(L_537));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_539 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_540 = V_2;
		NullCheck(L_539);
		int32_t L_541 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_540>>((int32_t)16)))));
		uint32_t L_542 = (L_539)->GetAt(static_cast<il2cpp_array_size_t>(L_541));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_543 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_544 = V_3;
		NullCheck(L_543);
		int32_t L_545 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_544>>8))));
		uint32_t L_546 = (L_543)->GetAt(static_cast<il2cpp_array_size_t>(L_545));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_547 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_548 = V_0;
		NullCheck(L_547);
		int32_t L_549 = ((int32_t)((uint8_t)L_548));
		uint32_t L_550 = (L_547)->GetAt(static_cast<il2cpp_array_size_t>(L_549));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_551 = ___ekey2;
		NullCheck(L_551);
		int32_t L_552 = ((int32_t)29);
		uint32_t L_553 = (L_551)->GetAt(static_cast<il2cpp_array_size_t>(L_552));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_538^(int32_t)L_542))^(int32_t)L_546))^(int32_t)L_550))^(int32_t)L_553));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_554 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_555 = V_2;
		NullCheck(L_554);
		int32_t L_556 = ((int32_t)((uint32_t)L_555>>((int32_t)24)));
		uint32_t L_557 = (L_554)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_558 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_559 = V_3;
		NullCheck(L_558);
		int32_t L_560 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_559>>((int32_t)16)))));
		uint32_t L_561 = (L_558)->GetAt(static_cast<il2cpp_array_size_t>(L_560));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_562 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_563 = V_0;
		NullCheck(L_562);
		int32_t L_564 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_563>>8))));
		uint32_t L_565 = (L_562)->GetAt(static_cast<il2cpp_array_size_t>(L_564));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_566 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_567 = V_1;
		NullCheck(L_566);
		int32_t L_568 = ((int32_t)((uint8_t)L_567));
		uint32_t L_569 = (L_566)->GetAt(static_cast<il2cpp_array_size_t>(L_568));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_570 = ___ekey2;
		NullCheck(L_570);
		int32_t L_571 = ((int32_t)30);
		uint32_t L_572 = (L_570)->GetAt(static_cast<il2cpp_array_size_t>(L_571));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_557^(int32_t)L_561))^(int32_t)L_565))^(int32_t)L_569))^(int32_t)L_572));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_573 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_574 = V_3;
		NullCheck(L_573);
		int32_t L_575 = ((int32_t)((uint32_t)L_574>>((int32_t)24)));
		uint32_t L_576 = (L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_575));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_577 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_578 = V_0;
		NullCheck(L_577);
		int32_t L_579 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_578>>((int32_t)16)))));
		uint32_t L_580 = (L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_579));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_581 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_582 = V_1;
		NullCheck(L_581);
		int32_t L_583 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_582>>8))));
		uint32_t L_584 = (L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_583));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_585 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_586 = V_2;
		NullCheck(L_585);
		int32_t L_587 = ((int32_t)((uint8_t)L_586));
		uint32_t L_588 = (L_585)->GetAt(static_cast<il2cpp_array_size_t>(L_587));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_589 = ___ekey2;
		NullCheck(L_589);
		int32_t L_590 = ((int32_t)31);
		uint32_t L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_576^(int32_t)L_580))^(int32_t)L_584))^(int32_t)L_588))^(int32_t)L_591));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_592 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_593 = V_4;
		NullCheck(L_592);
		int32_t L_594 = ((int32_t)((uint32_t)L_593>>((int32_t)24)));
		uint32_t L_595 = (L_592)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_596 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_597 = V_5;
		NullCheck(L_596);
		int32_t L_598 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_597>>((int32_t)16)))));
		uint32_t L_599 = (L_596)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_600 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_601 = V_6;
		NullCheck(L_600);
		int32_t L_602 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_601>>8))));
		uint32_t L_603 = (L_600)->GetAt(static_cast<il2cpp_array_size_t>(L_602));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_604 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_605 = V_7;
		NullCheck(L_604);
		int32_t L_606 = ((int32_t)((uint8_t)L_605));
		uint32_t L_607 = (L_604)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_608 = ___ekey2;
		NullCheck(L_608);
		int32_t L_609 = ((int32_t)32);
		uint32_t L_610 = (L_608)->GetAt(static_cast<il2cpp_array_size_t>(L_609));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_595^(int32_t)L_599))^(int32_t)L_603))^(int32_t)L_607))^(int32_t)L_610));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_611 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_612 = V_5;
		NullCheck(L_611);
		int32_t L_613 = ((int32_t)((uint32_t)L_612>>((int32_t)24)));
		uint32_t L_614 = (L_611)->GetAt(static_cast<il2cpp_array_size_t>(L_613));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_615 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_616 = V_6;
		NullCheck(L_615);
		int32_t L_617 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_616>>((int32_t)16)))));
		uint32_t L_618 = (L_615)->GetAt(static_cast<il2cpp_array_size_t>(L_617));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_619 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_620 = V_7;
		NullCheck(L_619);
		int32_t L_621 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_620>>8))));
		uint32_t L_622 = (L_619)->GetAt(static_cast<il2cpp_array_size_t>(L_621));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_623 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_624 = V_4;
		NullCheck(L_623);
		int32_t L_625 = ((int32_t)((uint8_t)L_624));
		uint32_t L_626 = (L_623)->GetAt(static_cast<il2cpp_array_size_t>(L_625));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_627 = ___ekey2;
		NullCheck(L_627);
		int32_t L_628 = ((int32_t)33);
		uint32_t L_629 = (L_627)->GetAt(static_cast<il2cpp_array_size_t>(L_628));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_614^(int32_t)L_618))^(int32_t)L_622))^(int32_t)L_626))^(int32_t)L_629));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_630 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_631 = V_6;
		NullCheck(L_630);
		int32_t L_632 = ((int32_t)((uint32_t)L_631>>((int32_t)24)));
		uint32_t L_633 = (L_630)->GetAt(static_cast<il2cpp_array_size_t>(L_632));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_634 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_635 = V_7;
		NullCheck(L_634);
		int32_t L_636 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_635>>((int32_t)16)))));
		uint32_t L_637 = (L_634)->GetAt(static_cast<il2cpp_array_size_t>(L_636));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_638 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_639 = V_4;
		NullCheck(L_638);
		int32_t L_640 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_639>>8))));
		uint32_t L_641 = (L_638)->GetAt(static_cast<il2cpp_array_size_t>(L_640));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_642 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_643 = V_5;
		NullCheck(L_642);
		int32_t L_644 = ((int32_t)((uint8_t)L_643));
		uint32_t L_645 = (L_642)->GetAt(static_cast<il2cpp_array_size_t>(L_644));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_646 = ___ekey2;
		NullCheck(L_646);
		int32_t L_647 = ((int32_t)34);
		uint32_t L_648 = (L_646)->GetAt(static_cast<il2cpp_array_size_t>(L_647));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_633^(int32_t)L_637))^(int32_t)L_641))^(int32_t)L_645))^(int32_t)L_648));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_649 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_650 = V_7;
		NullCheck(L_649);
		int32_t L_651 = ((int32_t)((uint32_t)L_650>>((int32_t)24)));
		uint32_t L_652 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_651));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_653 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_654 = V_4;
		NullCheck(L_653);
		int32_t L_655 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_654>>((int32_t)16)))));
		uint32_t L_656 = (L_653)->GetAt(static_cast<il2cpp_array_size_t>(L_655));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_657 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_658 = V_5;
		NullCheck(L_657);
		int32_t L_659 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_658>>8))));
		uint32_t L_660 = (L_657)->GetAt(static_cast<il2cpp_array_size_t>(L_659));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_661 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_662 = V_6;
		NullCheck(L_661);
		int32_t L_663 = ((int32_t)((uint8_t)L_662));
		uint32_t L_664 = (L_661)->GetAt(static_cast<il2cpp_array_size_t>(L_663));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_665 = ___ekey2;
		NullCheck(L_665);
		int32_t L_666 = ((int32_t)35);
		uint32_t L_667 = (L_665)->GetAt(static_cast<il2cpp_array_size_t>(L_666));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_652^(int32_t)L_656))^(int32_t)L_660))^(int32_t)L_664))^(int32_t)L_667));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_668 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_669 = V_0;
		NullCheck(L_668);
		int32_t L_670 = ((int32_t)((uint32_t)L_669>>((int32_t)24)));
		uint32_t L_671 = (L_668)->GetAt(static_cast<il2cpp_array_size_t>(L_670));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_672 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_673 = V_1;
		NullCheck(L_672);
		int32_t L_674 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_673>>((int32_t)16)))));
		uint32_t L_675 = (L_672)->GetAt(static_cast<il2cpp_array_size_t>(L_674));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_676 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_677 = V_2;
		NullCheck(L_676);
		int32_t L_678 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_677>>8))));
		uint32_t L_679 = (L_676)->GetAt(static_cast<il2cpp_array_size_t>(L_678));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_680 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_681 = V_3;
		NullCheck(L_680);
		int32_t L_682 = ((int32_t)((uint8_t)L_681));
		uint32_t L_683 = (L_680)->GetAt(static_cast<il2cpp_array_size_t>(L_682));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_684 = ___ekey2;
		NullCheck(L_684);
		int32_t L_685 = ((int32_t)36);
		uint32_t L_686 = (L_684)->GetAt(static_cast<il2cpp_array_size_t>(L_685));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_671^(int32_t)L_675))^(int32_t)L_679))^(int32_t)L_683))^(int32_t)L_686));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_687 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_688 = V_1;
		NullCheck(L_687);
		int32_t L_689 = ((int32_t)((uint32_t)L_688>>((int32_t)24)));
		uint32_t L_690 = (L_687)->GetAt(static_cast<il2cpp_array_size_t>(L_689));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_691 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_692 = V_2;
		NullCheck(L_691);
		int32_t L_693 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_692>>((int32_t)16)))));
		uint32_t L_694 = (L_691)->GetAt(static_cast<il2cpp_array_size_t>(L_693));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_695 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_696 = V_3;
		NullCheck(L_695);
		int32_t L_697 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_696>>8))));
		uint32_t L_698 = (L_695)->GetAt(static_cast<il2cpp_array_size_t>(L_697));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_699 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_700 = V_0;
		NullCheck(L_699);
		int32_t L_701 = ((int32_t)((uint8_t)L_700));
		uint32_t L_702 = (L_699)->GetAt(static_cast<il2cpp_array_size_t>(L_701));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_703 = ___ekey2;
		NullCheck(L_703);
		int32_t L_704 = ((int32_t)37);
		uint32_t L_705 = (L_703)->GetAt(static_cast<il2cpp_array_size_t>(L_704));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_690^(int32_t)L_694))^(int32_t)L_698))^(int32_t)L_702))^(int32_t)L_705));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_706 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_707 = V_2;
		NullCheck(L_706);
		int32_t L_708 = ((int32_t)((uint32_t)L_707>>((int32_t)24)));
		uint32_t L_709 = (L_706)->GetAt(static_cast<il2cpp_array_size_t>(L_708));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_710 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_711 = V_3;
		NullCheck(L_710);
		int32_t L_712 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_711>>((int32_t)16)))));
		uint32_t L_713 = (L_710)->GetAt(static_cast<il2cpp_array_size_t>(L_712));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_714 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_715 = V_0;
		NullCheck(L_714);
		int32_t L_716 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_715>>8))));
		uint32_t L_717 = (L_714)->GetAt(static_cast<il2cpp_array_size_t>(L_716));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_718 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_719 = V_1;
		NullCheck(L_718);
		int32_t L_720 = ((int32_t)((uint8_t)L_719));
		uint32_t L_721 = (L_718)->GetAt(static_cast<il2cpp_array_size_t>(L_720));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_722 = ___ekey2;
		NullCheck(L_722);
		int32_t L_723 = ((int32_t)38);
		uint32_t L_724 = (L_722)->GetAt(static_cast<il2cpp_array_size_t>(L_723));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_709^(int32_t)L_713))^(int32_t)L_717))^(int32_t)L_721))^(int32_t)L_724));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_725 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_726 = V_3;
		NullCheck(L_725);
		int32_t L_727 = ((int32_t)((uint32_t)L_726>>((int32_t)24)));
		uint32_t L_728 = (L_725)->GetAt(static_cast<il2cpp_array_size_t>(L_727));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_729 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_730 = V_0;
		NullCheck(L_729);
		int32_t L_731 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_730>>((int32_t)16)))));
		uint32_t L_732 = (L_729)->GetAt(static_cast<il2cpp_array_size_t>(L_731));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_733 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_734 = V_1;
		NullCheck(L_733);
		int32_t L_735 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_734>>8))));
		uint32_t L_736 = (L_733)->GetAt(static_cast<il2cpp_array_size_t>(L_735));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_737 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_738 = V_2;
		NullCheck(L_737);
		int32_t L_739 = ((int32_t)((uint8_t)L_738));
		uint32_t L_740 = (L_737)->GetAt(static_cast<il2cpp_array_size_t>(L_739));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_741 = ___ekey2;
		NullCheck(L_741);
		int32_t L_742 = ((int32_t)39);
		uint32_t L_743 = (L_741)->GetAt(static_cast<il2cpp_array_size_t>(L_742));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_728^(int32_t)L_732))^(int32_t)L_736))^(int32_t)L_740))^(int32_t)L_743));
		int32_t L_744 = __this->get_Nr_14();
		if ((((int32_t)L_744) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0ad4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_745 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_746 = V_4;
		NullCheck(L_745);
		int32_t L_747 = ((int32_t)((uint32_t)L_746>>((int32_t)24)));
		uint32_t L_748 = (L_745)->GetAt(static_cast<il2cpp_array_size_t>(L_747));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_749 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_750 = V_5;
		NullCheck(L_749);
		int32_t L_751 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_750>>((int32_t)16)))));
		uint32_t L_752 = (L_749)->GetAt(static_cast<il2cpp_array_size_t>(L_751));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_753 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_754 = V_6;
		NullCheck(L_753);
		int32_t L_755 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_754>>8))));
		uint32_t L_756 = (L_753)->GetAt(static_cast<il2cpp_array_size_t>(L_755));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_757 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_758 = V_7;
		NullCheck(L_757);
		int32_t L_759 = ((int32_t)((uint8_t)L_758));
		uint32_t L_760 = (L_757)->GetAt(static_cast<il2cpp_array_size_t>(L_759));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_761 = ___ekey2;
		NullCheck(L_761);
		int32_t L_762 = ((int32_t)40);
		uint32_t L_763 = (L_761)->GetAt(static_cast<il2cpp_array_size_t>(L_762));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_748^(int32_t)L_752))^(int32_t)L_756))^(int32_t)L_760))^(int32_t)L_763));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_764 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_765 = V_5;
		NullCheck(L_764);
		int32_t L_766 = ((int32_t)((uint32_t)L_765>>((int32_t)24)));
		uint32_t L_767 = (L_764)->GetAt(static_cast<il2cpp_array_size_t>(L_766));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_768 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_769 = V_6;
		NullCheck(L_768);
		int32_t L_770 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_769>>((int32_t)16)))));
		uint32_t L_771 = (L_768)->GetAt(static_cast<il2cpp_array_size_t>(L_770));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_772 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_773 = V_7;
		NullCheck(L_772);
		int32_t L_774 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_773>>8))));
		uint32_t L_775 = (L_772)->GetAt(static_cast<il2cpp_array_size_t>(L_774));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_776 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_777 = V_4;
		NullCheck(L_776);
		int32_t L_778 = ((int32_t)((uint8_t)L_777));
		uint32_t L_779 = (L_776)->GetAt(static_cast<il2cpp_array_size_t>(L_778));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_780 = ___ekey2;
		NullCheck(L_780);
		int32_t L_781 = ((int32_t)41);
		uint32_t L_782 = (L_780)->GetAt(static_cast<il2cpp_array_size_t>(L_781));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_767^(int32_t)L_771))^(int32_t)L_775))^(int32_t)L_779))^(int32_t)L_782));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_783 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_784 = V_6;
		NullCheck(L_783);
		int32_t L_785 = ((int32_t)((uint32_t)L_784>>((int32_t)24)));
		uint32_t L_786 = (L_783)->GetAt(static_cast<il2cpp_array_size_t>(L_785));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_787 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_788 = V_7;
		NullCheck(L_787);
		int32_t L_789 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_788>>((int32_t)16)))));
		uint32_t L_790 = (L_787)->GetAt(static_cast<il2cpp_array_size_t>(L_789));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_791 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_792 = V_4;
		NullCheck(L_791);
		int32_t L_793 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_792>>8))));
		uint32_t L_794 = (L_791)->GetAt(static_cast<il2cpp_array_size_t>(L_793));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_795 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_796 = V_5;
		NullCheck(L_795);
		int32_t L_797 = ((int32_t)((uint8_t)L_796));
		uint32_t L_798 = (L_795)->GetAt(static_cast<il2cpp_array_size_t>(L_797));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_799 = ___ekey2;
		NullCheck(L_799);
		int32_t L_800 = ((int32_t)42);
		uint32_t L_801 = (L_799)->GetAt(static_cast<il2cpp_array_size_t>(L_800));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_786^(int32_t)L_790))^(int32_t)L_794))^(int32_t)L_798))^(int32_t)L_801));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_802 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_803 = V_7;
		NullCheck(L_802);
		int32_t L_804 = ((int32_t)((uint32_t)L_803>>((int32_t)24)));
		uint32_t L_805 = (L_802)->GetAt(static_cast<il2cpp_array_size_t>(L_804));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_806 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_807 = V_4;
		NullCheck(L_806);
		int32_t L_808 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_807>>((int32_t)16)))));
		uint32_t L_809 = (L_806)->GetAt(static_cast<il2cpp_array_size_t>(L_808));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_810 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_811 = V_5;
		NullCheck(L_810);
		int32_t L_812 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_811>>8))));
		uint32_t L_813 = (L_810)->GetAt(static_cast<il2cpp_array_size_t>(L_812));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_814 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_815 = V_6;
		NullCheck(L_814);
		int32_t L_816 = ((int32_t)((uint8_t)L_815));
		uint32_t L_817 = (L_814)->GetAt(static_cast<il2cpp_array_size_t>(L_816));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_818 = ___ekey2;
		NullCheck(L_818);
		int32_t L_819 = ((int32_t)43);
		uint32_t L_820 = (L_818)->GetAt(static_cast<il2cpp_array_size_t>(L_819));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_805^(int32_t)L_809))^(int32_t)L_813))^(int32_t)L_817))^(int32_t)L_820));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_821 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_822 = V_0;
		NullCheck(L_821);
		int32_t L_823 = ((int32_t)((uint32_t)L_822>>((int32_t)24)));
		uint32_t L_824 = (L_821)->GetAt(static_cast<il2cpp_array_size_t>(L_823));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_825 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_826 = V_1;
		NullCheck(L_825);
		int32_t L_827 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_826>>((int32_t)16)))));
		uint32_t L_828 = (L_825)->GetAt(static_cast<il2cpp_array_size_t>(L_827));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_829 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_830 = V_2;
		NullCheck(L_829);
		int32_t L_831 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_830>>8))));
		uint32_t L_832 = (L_829)->GetAt(static_cast<il2cpp_array_size_t>(L_831));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_833 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_834 = V_3;
		NullCheck(L_833);
		int32_t L_835 = ((int32_t)((uint8_t)L_834));
		uint32_t L_836 = (L_833)->GetAt(static_cast<il2cpp_array_size_t>(L_835));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_837 = ___ekey2;
		NullCheck(L_837);
		int32_t L_838 = ((int32_t)44);
		uint32_t L_839 = (L_837)->GetAt(static_cast<il2cpp_array_size_t>(L_838));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_824^(int32_t)L_828))^(int32_t)L_832))^(int32_t)L_836))^(int32_t)L_839));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_840 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_841 = V_1;
		NullCheck(L_840);
		int32_t L_842 = ((int32_t)((uint32_t)L_841>>((int32_t)24)));
		uint32_t L_843 = (L_840)->GetAt(static_cast<il2cpp_array_size_t>(L_842));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_844 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_845 = V_2;
		NullCheck(L_844);
		int32_t L_846 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_845>>((int32_t)16)))));
		uint32_t L_847 = (L_844)->GetAt(static_cast<il2cpp_array_size_t>(L_846));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_848 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_849 = V_3;
		NullCheck(L_848);
		int32_t L_850 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_849>>8))));
		uint32_t L_851 = (L_848)->GetAt(static_cast<il2cpp_array_size_t>(L_850));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_852 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_853 = V_0;
		NullCheck(L_852);
		int32_t L_854 = ((int32_t)((uint8_t)L_853));
		uint32_t L_855 = (L_852)->GetAt(static_cast<il2cpp_array_size_t>(L_854));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_856 = ___ekey2;
		NullCheck(L_856);
		int32_t L_857 = ((int32_t)45);
		uint32_t L_858 = (L_856)->GetAt(static_cast<il2cpp_array_size_t>(L_857));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_843^(int32_t)L_847))^(int32_t)L_851))^(int32_t)L_855))^(int32_t)L_858));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_859 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_860 = V_2;
		NullCheck(L_859);
		int32_t L_861 = ((int32_t)((uint32_t)L_860>>((int32_t)24)));
		uint32_t L_862 = (L_859)->GetAt(static_cast<il2cpp_array_size_t>(L_861));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_863 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_864 = V_3;
		NullCheck(L_863);
		int32_t L_865 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_864>>((int32_t)16)))));
		uint32_t L_866 = (L_863)->GetAt(static_cast<il2cpp_array_size_t>(L_865));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_867 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_868 = V_0;
		NullCheck(L_867);
		int32_t L_869 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_868>>8))));
		uint32_t L_870 = (L_867)->GetAt(static_cast<il2cpp_array_size_t>(L_869));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_871 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_872 = V_1;
		NullCheck(L_871);
		int32_t L_873 = ((int32_t)((uint8_t)L_872));
		uint32_t L_874 = (L_871)->GetAt(static_cast<il2cpp_array_size_t>(L_873));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_875 = ___ekey2;
		NullCheck(L_875);
		int32_t L_876 = ((int32_t)46);
		uint32_t L_877 = (L_875)->GetAt(static_cast<il2cpp_array_size_t>(L_876));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_862^(int32_t)L_866))^(int32_t)L_870))^(int32_t)L_874))^(int32_t)L_877));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_878 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_879 = V_3;
		NullCheck(L_878);
		int32_t L_880 = ((int32_t)((uint32_t)L_879>>((int32_t)24)));
		uint32_t L_881 = (L_878)->GetAt(static_cast<il2cpp_array_size_t>(L_880));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_882 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_883 = V_0;
		NullCheck(L_882);
		int32_t L_884 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_883>>((int32_t)16)))));
		uint32_t L_885 = (L_882)->GetAt(static_cast<il2cpp_array_size_t>(L_884));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_886 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_887 = V_1;
		NullCheck(L_886);
		int32_t L_888 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_887>>8))));
		uint32_t L_889 = (L_886)->GetAt(static_cast<il2cpp_array_size_t>(L_888));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_890 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_891 = V_2;
		NullCheck(L_890);
		int32_t L_892 = ((int32_t)((uint8_t)L_891));
		uint32_t L_893 = (L_890)->GetAt(static_cast<il2cpp_array_size_t>(L_892));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_894 = ___ekey2;
		NullCheck(L_894);
		int32_t L_895 = ((int32_t)47);
		uint32_t L_896 = (L_894)->GetAt(static_cast<il2cpp_array_size_t>(L_895));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_881^(int32_t)L_885))^(int32_t)L_889))^(int32_t)L_893))^(int32_t)L_896));
		V_8 = ((int32_t)48);
		int32_t L_897 = __this->get_Nr_14();
		if ((((int32_t)L_897) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0ad4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_898 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_899 = V_4;
		NullCheck(L_898);
		int32_t L_900 = ((int32_t)((uint32_t)L_899>>((int32_t)24)));
		uint32_t L_901 = (L_898)->GetAt(static_cast<il2cpp_array_size_t>(L_900));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_902 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_903 = V_5;
		NullCheck(L_902);
		int32_t L_904 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_903>>((int32_t)16)))));
		uint32_t L_905 = (L_902)->GetAt(static_cast<il2cpp_array_size_t>(L_904));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_906 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_907 = V_6;
		NullCheck(L_906);
		int32_t L_908 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_907>>8))));
		uint32_t L_909 = (L_906)->GetAt(static_cast<il2cpp_array_size_t>(L_908));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_910 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_911 = V_7;
		NullCheck(L_910);
		int32_t L_912 = ((int32_t)((uint8_t)L_911));
		uint32_t L_913 = (L_910)->GetAt(static_cast<il2cpp_array_size_t>(L_912));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_914 = ___ekey2;
		NullCheck(L_914);
		int32_t L_915 = ((int32_t)48);
		uint32_t L_916 = (L_914)->GetAt(static_cast<il2cpp_array_size_t>(L_915));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_901^(int32_t)L_905))^(int32_t)L_909))^(int32_t)L_913))^(int32_t)L_916));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_917 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_918 = V_5;
		NullCheck(L_917);
		int32_t L_919 = ((int32_t)((uint32_t)L_918>>((int32_t)24)));
		uint32_t L_920 = (L_917)->GetAt(static_cast<il2cpp_array_size_t>(L_919));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_921 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_922 = V_6;
		NullCheck(L_921);
		int32_t L_923 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_922>>((int32_t)16)))));
		uint32_t L_924 = (L_921)->GetAt(static_cast<il2cpp_array_size_t>(L_923));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_925 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_926 = V_7;
		NullCheck(L_925);
		int32_t L_927 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_926>>8))));
		uint32_t L_928 = (L_925)->GetAt(static_cast<il2cpp_array_size_t>(L_927));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_929 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_930 = V_4;
		NullCheck(L_929);
		int32_t L_931 = ((int32_t)((uint8_t)L_930));
		uint32_t L_932 = (L_929)->GetAt(static_cast<il2cpp_array_size_t>(L_931));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_933 = ___ekey2;
		NullCheck(L_933);
		int32_t L_934 = ((int32_t)49);
		uint32_t L_935 = (L_933)->GetAt(static_cast<il2cpp_array_size_t>(L_934));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_920^(int32_t)L_924))^(int32_t)L_928))^(int32_t)L_932))^(int32_t)L_935));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_936 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_937 = V_6;
		NullCheck(L_936);
		int32_t L_938 = ((int32_t)((uint32_t)L_937>>((int32_t)24)));
		uint32_t L_939 = (L_936)->GetAt(static_cast<il2cpp_array_size_t>(L_938));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_940 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_941 = V_7;
		NullCheck(L_940);
		int32_t L_942 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_941>>((int32_t)16)))));
		uint32_t L_943 = (L_940)->GetAt(static_cast<il2cpp_array_size_t>(L_942));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_944 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_945 = V_4;
		NullCheck(L_944);
		int32_t L_946 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_945>>8))));
		uint32_t L_947 = (L_944)->GetAt(static_cast<il2cpp_array_size_t>(L_946));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_948 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_949 = V_5;
		NullCheck(L_948);
		int32_t L_950 = ((int32_t)((uint8_t)L_949));
		uint32_t L_951 = (L_948)->GetAt(static_cast<il2cpp_array_size_t>(L_950));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_952 = ___ekey2;
		NullCheck(L_952);
		int32_t L_953 = ((int32_t)50);
		uint32_t L_954 = (L_952)->GetAt(static_cast<il2cpp_array_size_t>(L_953));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_939^(int32_t)L_943))^(int32_t)L_947))^(int32_t)L_951))^(int32_t)L_954));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_955 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_956 = V_7;
		NullCheck(L_955);
		int32_t L_957 = ((int32_t)((uint32_t)L_956>>((int32_t)24)));
		uint32_t L_958 = (L_955)->GetAt(static_cast<il2cpp_array_size_t>(L_957));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_959 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_960 = V_4;
		NullCheck(L_959);
		int32_t L_961 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_960>>((int32_t)16)))));
		uint32_t L_962 = (L_959)->GetAt(static_cast<il2cpp_array_size_t>(L_961));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_963 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_964 = V_5;
		NullCheck(L_963);
		int32_t L_965 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_964>>8))));
		uint32_t L_966 = (L_963)->GetAt(static_cast<il2cpp_array_size_t>(L_965));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_967 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_968 = V_6;
		NullCheck(L_967);
		int32_t L_969 = ((int32_t)((uint8_t)L_968));
		uint32_t L_970 = (L_967)->GetAt(static_cast<il2cpp_array_size_t>(L_969));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_971 = ___ekey2;
		NullCheck(L_971);
		int32_t L_972 = ((int32_t)51);
		uint32_t L_973 = (L_971)->GetAt(static_cast<il2cpp_array_size_t>(L_972));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_958^(int32_t)L_962))^(int32_t)L_966))^(int32_t)L_970))^(int32_t)L_973));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_974 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_975 = V_0;
		NullCheck(L_974);
		int32_t L_976 = ((int32_t)((uint32_t)L_975>>((int32_t)24)));
		uint32_t L_977 = (L_974)->GetAt(static_cast<il2cpp_array_size_t>(L_976));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_978 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_979 = V_1;
		NullCheck(L_978);
		int32_t L_980 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_979>>((int32_t)16)))));
		uint32_t L_981 = (L_978)->GetAt(static_cast<il2cpp_array_size_t>(L_980));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_982 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_983 = V_2;
		NullCheck(L_982);
		int32_t L_984 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_983>>8))));
		uint32_t L_985 = (L_982)->GetAt(static_cast<il2cpp_array_size_t>(L_984));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_986 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_987 = V_3;
		NullCheck(L_986);
		int32_t L_988 = ((int32_t)((uint8_t)L_987));
		uint32_t L_989 = (L_986)->GetAt(static_cast<il2cpp_array_size_t>(L_988));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_990 = ___ekey2;
		NullCheck(L_990);
		int32_t L_991 = ((int32_t)52);
		uint32_t L_992 = (L_990)->GetAt(static_cast<il2cpp_array_size_t>(L_991));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_977^(int32_t)L_981))^(int32_t)L_985))^(int32_t)L_989))^(int32_t)L_992));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_993 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_994 = V_1;
		NullCheck(L_993);
		int32_t L_995 = ((int32_t)((uint32_t)L_994>>((int32_t)24)));
		uint32_t L_996 = (L_993)->GetAt(static_cast<il2cpp_array_size_t>(L_995));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_997 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_998 = V_2;
		NullCheck(L_997);
		int32_t L_999 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_998>>((int32_t)16)))));
		uint32_t L_1000 = (L_997)->GetAt(static_cast<il2cpp_array_size_t>(L_999));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1001 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_1002 = V_3;
		NullCheck(L_1001);
		int32_t L_1003 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1002>>8))));
		uint32_t L_1004 = (L_1001)->GetAt(static_cast<il2cpp_array_size_t>(L_1003));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1005 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_1006 = V_0;
		NullCheck(L_1005);
		int32_t L_1007 = ((int32_t)((uint8_t)L_1006));
		uint32_t L_1008 = (L_1005)->GetAt(static_cast<il2cpp_array_size_t>(L_1007));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1009 = ___ekey2;
		NullCheck(L_1009);
		int32_t L_1010 = ((int32_t)53);
		uint32_t L_1011 = (L_1009)->GetAt(static_cast<il2cpp_array_size_t>(L_1010));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_996^(int32_t)L_1000))^(int32_t)L_1004))^(int32_t)L_1008))^(int32_t)L_1011));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1012 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_1013 = V_2;
		NullCheck(L_1012);
		int32_t L_1014 = ((int32_t)((uint32_t)L_1013>>((int32_t)24)));
		uint32_t L_1015 = (L_1012)->GetAt(static_cast<il2cpp_array_size_t>(L_1014));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1016 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_1017 = V_3;
		NullCheck(L_1016);
		int32_t L_1018 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1017>>((int32_t)16)))));
		uint32_t L_1019 = (L_1016)->GetAt(static_cast<il2cpp_array_size_t>(L_1018));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1020 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_1021 = V_0;
		NullCheck(L_1020);
		int32_t L_1022 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1021>>8))));
		uint32_t L_1023 = (L_1020)->GetAt(static_cast<il2cpp_array_size_t>(L_1022));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1024 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_1025 = V_1;
		NullCheck(L_1024);
		int32_t L_1026 = ((int32_t)((uint8_t)L_1025));
		uint32_t L_1027 = (L_1024)->GetAt(static_cast<il2cpp_array_size_t>(L_1026));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1028 = ___ekey2;
		NullCheck(L_1028);
		int32_t L_1029 = ((int32_t)54);
		uint32_t L_1030 = (L_1028)->GetAt(static_cast<il2cpp_array_size_t>(L_1029));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1015^(int32_t)L_1019))^(int32_t)L_1023))^(int32_t)L_1027))^(int32_t)L_1030));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1031 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_1032 = V_3;
		NullCheck(L_1031);
		int32_t L_1033 = ((int32_t)((uint32_t)L_1032>>((int32_t)24)));
		uint32_t L_1034 = (L_1031)->GetAt(static_cast<il2cpp_array_size_t>(L_1033));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1035 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_1036 = V_0;
		NullCheck(L_1035);
		int32_t L_1037 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1036>>((int32_t)16)))));
		uint32_t L_1038 = (L_1035)->GetAt(static_cast<il2cpp_array_size_t>(L_1037));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1039 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_1040 = V_1;
		NullCheck(L_1039);
		int32_t L_1041 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1040>>8))));
		uint32_t L_1042 = (L_1039)->GetAt(static_cast<il2cpp_array_size_t>(L_1041));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1043 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_1044 = V_2;
		NullCheck(L_1043);
		int32_t L_1045 = ((int32_t)((uint8_t)L_1044));
		uint32_t L_1046 = (L_1043)->GetAt(static_cast<il2cpp_array_size_t>(L_1045));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1047 = ___ekey2;
		NullCheck(L_1047);
		int32_t L_1048 = ((int32_t)55);
		uint32_t L_1049 = (L_1047)->GetAt(static_cast<il2cpp_array_size_t>(L_1048));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1034^(int32_t)L_1038))^(int32_t)L_1042))^(int32_t)L_1046))^(int32_t)L_1049));
		V_8 = ((int32_t)56);
	}

IL_0ad4:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1050 = ___outdata1;
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1051 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1052 = V_4;
		NullCheck(L_1051);
		int32_t L_1053 = ((int32_t)((uint32_t)L_1052>>((int32_t)24)));
		uint8_t L_1054 = (L_1051)->GetAt(static_cast<il2cpp_array_size_t>(L_1053));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1055 = ___ekey2;
		int32_t L_1056 = V_8;
		NullCheck(L_1055);
		int32_t L_1057 = L_1056;
		uint32_t L_1058 = (L_1055)->GetAt(static_cast<il2cpp_array_size_t>(L_1057));
		NullCheck(L_1050);
		(L_1050)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1054^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1058>>((int32_t)24))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1059 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1060 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1061 = V_5;
		NullCheck(L_1060);
		int32_t L_1062 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1061>>((int32_t)16)))));
		uint8_t L_1063 = (L_1060)->GetAt(static_cast<il2cpp_array_size_t>(L_1062));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1064 = ___ekey2;
		int32_t L_1065 = V_8;
		NullCheck(L_1064);
		int32_t L_1066 = L_1065;
		uint32_t L_1067 = (L_1064)->GetAt(static_cast<il2cpp_array_size_t>(L_1066));
		NullCheck(L_1059);
		(L_1059)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1063^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1067>>((int32_t)16))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1068 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1069 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1070 = V_6;
		NullCheck(L_1069);
		int32_t L_1071 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1070>>8))));
		uint8_t L_1072 = (L_1069)->GetAt(static_cast<il2cpp_array_size_t>(L_1071));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1073 = ___ekey2;
		int32_t L_1074 = V_8;
		NullCheck(L_1073);
		int32_t L_1075 = L_1074;
		uint32_t L_1076 = (L_1073)->GetAt(static_cast<il2cpp_array_size_t>(L_1075));
		NullCheck(L_1068);
		(L_1068)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1072^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1076>>8)))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1077 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1078 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1079 = V_7;
		NullCheck(L_1078);
		int32_t L_1080 = ((int32_t)((uint8_t)L_1079));
		uint8_t L_1081 = (L_1078)->GetAt(static_cast<il2cpp_array_size_t>(L_1080));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1082 = ___ekey2;
		int32_t L_1083 = V_8;
		int32_t L_1084 = L_1083;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1084, (int32_t)1));
		NullCheck(L_1082);
		int32_t L_1085 = L_1084;
		uint32_t L_1086 = (L_1082)->GetAt(static_cast<il2cpp_array_size_t>(L_1085));
		NullCheck(L_1077);
		(L_1077)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1081^(int32_t)((int32_t)((uint8_t)L_1086)))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1087 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1088 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1089 = V_5;
		NullCheck(L_1088);
		int32_t L_1090 = ((int32_t)((uint32_t)L_1089>>((int32_t)24)));
		uint8_t L_1091 = (L_1088)->GetAt(static_cast<il2cpp_array_size_t>(L_1090));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1092 = ___ekey2;
		int32_t L_1093 = V_8;
		NullCheck(L_1092);
		int32_t L_1094 = L_1093;
		uint32_t L_1095 = (L_1092)->GetAt(static_cast<il2cpp_array_size_t>(L_1094));
		NullCheck(L_1087);
		(L_1087)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1091^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1095>>((int32_t)24))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1096 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1097 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1098 = V_6;
		NullCheck(L_1097);
		int32_t L_1099 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1098>>((int32_t)16)))));
		uint8_t L_1100 = (L_1097)->GetAt(static_cast<il2cpp_array_size_t>(L_1099));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1101 = ___ekey2;
		int32_t L_1102 = V_8;
		NullCheck(L_1101);
		int32_t L_1103 = L_1102;
		uint32_t L_1104 = (L_1101)->GetAt(static_cast<il2cpp_array_size_t>(L_1103));
		NullCheck(L_1096);
		(L_1096)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1100^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1104>>((int32_t)16))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1105 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1106 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1107 = V_7;
		NullCheck(L_1106);
		int32_t L_1108 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1107>>8))));
		uint8_t L_1109 = (L_1106)->GetAt(static_cast<il2cpp_array_size_t>(L_1108));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1110 = ___ekey2;
		int32_t L_1111 = V_8;
		NullCheck(L_1110);
		int32_t L_1112 = L_1111;
		uint32_t L_1113 = (L_1110)->GetAt(static_cast<il2cpp_array_size_t>(L_1112));
		NullCheck(L_1105);
		(L_1105)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1109^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1113>>8)))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1114 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1115 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1116 = V_4;
		NullCheck(L_1115);
		int32_t L_1117 = ((int32_t)((uint8_t)L_1116));
		uint8_t L_1118 = (L_1115)->GetAt(static_cast<il2cpp_array_size_t>(L_1117));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1119 = ___ekey2;
		int32_t L_1120 = V_8;
		int32_t L_1121 = L_1120;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1121, (int32_t)1));
		NullCheck(L_1119);
		int32_t L_1122 = L_1121;
		uint32_t L_1123 = (L_1119)->GetAt(static_cast<il2cpp_array_size_t>(L_1122));
		NullCheck(L_1114);
		(L_1114)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1118^(int32_t)((int32_t)((uint8_t)L_1123)))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1124 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1125 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1126 = V_6;
		NullCheck(L_1125);
		int32_t L_1127 = ((int32_t)((uint32_t)L_1126>>((int32_t)24)));
		uint8_t L_1128 = (L_1125)->GetAt(static_cast<il2cpp_array_size_t>(L_1127));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1129 = ___ekey2;
		int32_t L_1130 = V_8;
		NullCheck(L_1129);
		int32_t L_1131 = L_1130;
		uint32_t L_1132 = (L_1129)->GetAt(static_cast<il2cpp_array_size_t>(L_1131));
		NullCheck(L_1124);
		(L_1124)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1128^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1132>>((int32_t)24))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1133 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1134 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1135 = V_7;
		NullCheck(L_1134);
		int32_t L_1136 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1135>>((int32_t)16)))));
		uint8_t L_1137 = (L_1134)->GetAt(static_cast<il2cpp_array_size_t>(L_1136));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1138 = ___ekey2;
		int32_t L_1139 = V_8;
		NullCheck(L_1138);
		int32_t L_1140 = L_1139;
		uint32_t L_1141 = (L_1138)->GetAt(static_cast<il2cpp_array_size_t>(L_1140));
		NullCheck(L_1133);
		(L_1133)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1137^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1141>>((int32_t)16))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1142 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1143 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1144 = V_4;
		NullCheck(L_1143);
		int32_t L_1145 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1144>>8))));
		uint8_t L_1146 = (L_1143)->GetAt(static_cast<il2cpp_array_size_t>(L_1145));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1147 = ___ekey2;
		int32_t L_1148 = V_8;
		NullCheck(L_1147);
		int32_t L_1149 = L_1148;
		uint32_t L_1150 = (L_1147)->GetAt(static_cast<il2cpp_array_size_t>(L_1149));
		NullCheck(L_1142);
		(L_1142)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1146^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1150>>8)))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1151 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1152 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1153 = V_5;
		NullCheck(L_1152);
		int32_t L_1154 = ((int32_t)((uint8_t)L_1153));
		uint8_t L_1155 = (L_1152)->GetAt(static_cast<il2cpp_array_size_t>(L_1154));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1156 = ___ekey2;
		int32_t L_1157 = V_8;
		int32_t L_1158 = L_1157;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1158, (int32_t)1));
		NullCheck(L_1156);
		int32_t L_1159 = L_1158;
		uint32_t L_1160 = (L_1156)->GetAt(static_cast<il2cpp_array_size_t>(L_1159));
		NullCheck(L_1151);
		(L_1151)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1155^(int32_t)((int32_t)((uint8_t)L_1160)))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1161 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1162 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1163 = V_7;
		NullCheck(L_1162);
		int32_t L_1164 = ((int32_t)((uint32_t)L_1163>>((int32_t)24)));
		uint8_t L_1165 = (L_1162)->GetAt(static_cast<il2cpp_array_size_t>(L_1164));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1166 = ___ekey2;
		int32_t L_1167 = V_8;
		NullCheck(L_1166);
		int32_t L_1168 = L_1167;
		uint32_t L_1169 = (L_1166)->GetAt(static_cast<il2cpp_array_size_t>(L_1168));
		NullCheck(L_1161);
		(L_1161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1165^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1169>>((int32_t)24))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1170 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1171 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1172 = V_4;
		NullCheck(L_1171);
		int32_t L_1173 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1172>>((int32_t)16)))));
		uint8_t L_1174 = (L_1171)->GetAt(static_cast<il2cpp_array_size_t>(L_1173));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1175 = ___ekey2;
		int32_t L_1176 = V_8;
		NullCheck(L_1175);
		int32_t L_1177 = L_1176;
		uint32_t L_1178 = (L_1175)->GetAt(static_cast<il2cpp_array_size_t>(L_1177));
		NullCheck(L_1170);
		(L_1170)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1174^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1178>>((int32_t)16))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1179 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1180 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1181 = V_5;
		NullCheck(L_1180);
		int32_t L_1182 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1181>>8))));
		uint8_t L_1183 = (L_1180)->GetAt(static_cast<il2cpp_array_size_t>(L_1182));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1184 = ___ekey2;
		int32_t L_1185 = V_8;
		NullCheck(L_1184);
		int32_t L_1186 = L_1185;
		uint32_t L_1187 = (L_1184)->GetAt(static_cast<il2cpp_array_size_t>(L_1186));
		NullCheck(L_1179);
		(L_1179)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1183^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1187>>8)))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1188 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1189 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1190 = V_6;
		NullCheck(L_1189);
		int32_t L_1191 = ((int32_t)((uint8_t)L_1190));
		uint8_t L_1192 = (L_1189)->GetAt(static_cast<il2cpp_array_size_t>(L_1191));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1193 = ___ekey2;
		int32_t L_1194 = V_8;
		int32_t L_1195 = L_1194;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1195, (int32_t)1));
		NullCheck(L_1193);
		int32_t L_1196 = L_1195;
		uint32_t L_1197 = (L_1193)->GetAt(static_cast<il2cpp_array_size_t>(L_1196));
		NullCheck(L_1188);
		(L_1188)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1192^(int32_t)((int32_t)((uint8_t)L_1197)))))));
		return;
	}
}
// System.Void System.Security.Cryptography.AesTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesTransform_Decrypt128_m075F7BA40A4CFECA6F6A379065B731586EDDB23A (AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___indata0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___outdata1, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___ekey2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		V_8 = ((int32_t)40);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___indata0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___indata0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___indata0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___indata0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_12 = ___ekey2;
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)8))))|(int32_t)L_11))^(int32_t)L_14));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___indata0;
		NullCheck(L_15);
		int32_t L_16 = 4;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___indata0;
		NullCheck(L_18);
		int32_t L_19 = 5;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = ___indata0;
		NullCheck(L_21);
		int32_t L_22 = 6;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ___indata0;
		NullCheck(L_24);
		int32_t L_25 = 7;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_27 = ___ekey2;
		NullCheck(L_27);
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_23<<(int32_t)8))))|(int32_t)L_26))^(int32_t)L_29));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = ___indata0;
		NullCheck(L_30);
		int32_t L_31 = 8;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = ___indata0;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)9);
		uint8_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = ___indata0;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)10);
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = ___indata0;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)11);
		uint8_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_42 = ___ekey2;
		NullCheck(L_42);
		int32_t L_43 = 2;
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_35<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_38<<(int32_t)8))))|(int32_t)L_41))^(int32_t)L_44));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = ___indata0;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)12);
		uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = ___indata0;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)13);
		uint8_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_51 = ___indata0;
		NullCheck(L_51);
		int32_t L_52 = ((int32_t)14);
		uint8_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = ___indata0;
		NullCheck(L_54);
		int32_t L_55 = ((int32_t)15);
		uint8_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_57 = ___ekey2;
		NullCheck(L_57);
		int32_t L_58 = 3;
		uint32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_47<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_50<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_53<<(int32_t)8))))|(int32_t)L_56))^(int32_t)L_59));
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_60 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)((uint32_t)L_61>>((int32_t)24)));
		uint32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_64 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_65 = V_3;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_65>>((int32_t)16)))));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_68 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_69 = V_2;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_69>>8))));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_72 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_73 = V_1;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)((uint8_t)L_73));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_76 = ___ekey2;
		NullCheck(L_76);
		int32_t L_77 = 4;
		uint32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_63^(int32_t)L_67))^(int32_t)L_71))^(int32_t)L_75))^(int32_t)L_78));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_79 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_80 = V_1;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)((uint32_t)L_80>>((int32_t)24)));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_83 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_84 = V_0;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_84>>((int32_t)16)))));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_87 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_88 = V_3;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_88>>8))));
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_91 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_92 = V_2;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)((uint8_t)L_92));
		uint32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_95 = ___ekey2;
		NullCheck(L_95);
		int32_t L_96 = 5;
		uint32_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_82^(int32_t)L_86))^(int32_t)L_90))^(int32_t)L_94))^(int32_t)L_97));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_98 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_99 = V_2;
		NullCheck(L_98);
		int32_t L_100 = ((int32_t)((uint32_t)L_99>>((int32_t)24)));
		uint32_t L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_102 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_103 = V_1;
		NullCheck(L_102);
		int32_t L_104 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_103>>((int32_t)16)))));
		uint32_t L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_106 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_107 = V_0;
		NullCheck(L_106);
		int32_t L_108 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_107>>8))));
		uint32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_110 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_111 = V_3;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)((uint8_t)L_111));
		uint32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_114 = ___ekey2;
		NullCheck(L_114);
		int32_t L_115 = 6;
		uint32_t L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_101^(int32_t)L_105))^(int32_t)L_109))^(int32_t)L_113))^(int32_t)L_116));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_117 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_118 = V_3;
		NullCheck(L_117);
		int32_t L_119 = ((int32_t)((uint32_t)L_118>>((int32_t)24)));
		uint32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_121 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_122 = V_2;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_122>>((int32_t)16)))));
		uint32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_125 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_126 = V_1;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_126>>8))));
		uint32_t L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_129 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_130 = V_0;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)((uint8_t)L_130));
		uint32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_133 = ___ekey2;
		NullCheck(L_133);
		int32_t L_134 = 7;
		uint32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_120^(int32_t)L_124))^(int32_t)L_128))^(int32_t)L_132))^(int32_t)L_135));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_136 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_137 = V_4;
		NullCheck(L_136);
		int32_t L_138 = ((int32_t)((uint32_t)L_137>>((int32_t)24)));
		uint32_t L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_140 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_141 = V_7;
		NullCheck(L_140);
		int32_t L_142 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_141>>((int32_t)16)))));
		uint32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_144 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_145 = V_6;
		NullCheck(L_144);
		int32_t L_146 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_145>>8))));
		uint32_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_148 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_149 = V_5;
		NullCheck(L_148);
		int32_t L_150 = ((int32_t)((uint8_t)L_149));
		uint32_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_152 = ___ekey2;
		NullCheck(L_152);
		int32_t L_153 = 8;
		uint32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_139^(int32_t)L_143))^(int32_t)L_147))^(int32_t)L_151))^(int32_t)L_154));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_155 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_156 = V_5;
		NullCheck(L_155);
		int32_t L_157 = ((int32_t)((uint32_t)L_156>>((int32_t)24)));
		uint32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_159 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_160 = V_4;
		NullCheck(L_159);
		int32_t L_161 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_160>>((int32_t)16)))));
		uint32_t L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_163 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_164 = V_7;
		NullCheck(L_163);
		int32_t L_165 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_164>>8))));
		uint32_t L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_167 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_168 = V_6;
		NullCheck(L_167);
		int32_t L_169 = ((int32_t)((uint8_t)L_168));
		uint32_t L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_171 = ___ekey2;
		NullCheck(L_171);
		int32_t L_172 = ((int32_t)9);
		uint32_t L_173 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_158^(int32_t)L_162))^(int32_t)L_166))^(int32_t)L_170))^(int32_t)L_173));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_174 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_175 = V_6;
		NullCheck(L_174);
		int32_t L_176 = ((int32_t)((uint32_t)L_175>>((int32_t)24)));
		uint32_t L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_178 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_179 = V_5;
		NullCheck(L_178);
		int32_t L_180 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_179>>((int32_t)16)))));
		uint32_t L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_182 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_183 = V_4;
		NullCheck(L_182);
		int32_t L_184 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_183>>8))));
		uint32_t L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_186 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_187 = V_7;
		NullCheck(L_186);
		int32_t L_188 = ((int32_t)((uint8_t)L_187));
		uint32_t L_189 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_190 = ___ekey2;
		NullCheck(L_190);
		int32_t L_191 = ((int32_t)10);
		uint32_t L_192 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_177^(int32_t)L_181))^(int32_t)L_185))^(int32_t)L_189))^(int32_t)L_192));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_193 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_194 = V_7;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)((uint32_t)L_194>>((int32_t)24)));
		uint32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_197 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_198 = V_6;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_198>>((int32_t)16)))));
		uint32_t L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_201 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_202 = V_5;
		NullCheck(L_201);
		int32_t L_203 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_202>>8))));
		uint32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_205 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_206 = V_4;
		NullCheck(L_205);
		int32_t L_207 = ((int32_t)((uint8_t)L_206));
		uint32_t L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_209 = ___ekey2;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)11);
		uint32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_196^(int32_t)L_200))^(int32_t)L_204))^(int32_t)L_208))^(int32_t)L_211));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_212 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_213 = V_0;
		NullCheck(L_212);
		int32_t L_214 = ((int32_t)((uint32_t)L_213>>((int32_t)24)));
		uint32_t L_215 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_216 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_217 = V_3;
		NullCheck(L_216);
		int32_t L_218 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_217>>((int32_t)16)))));
		uint32_t L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_220 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_221 = V_2;
		NullCheck(L_220);
		int32_t L_222 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_221>>8))));
		uint32_t L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_224 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_225 = V_1;
		NullCheck(L_224);
		int32_t L_226 = ((int32_t)((uint8_t)L_225));
		uint32_t L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_228 = ___ekey2;
		NullCheck(L_228);
		int32_t L_229 = ((int32_t)12);
		uint32_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_215^(int32_t)L_219))^(int32_t)L_223))^(int32_t)L_227))^(int32_t)L_230));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_231 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_232 = V_1;
		NullCheck(L_231);
		int32_t L_233 = ((int32_t)((uint32_t)L_232>>((int32_t)24)));
		uint32_t L_234 = (L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_235 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_236 = V_0;
		NullCheck(L_235);
		int32_t L_237 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_236>>((int32_t)16)))));
		uint32_t L_238 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_239 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_240 = V_3;
		NullCheck(L_239);
		int32_t L_241 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_240>>8))));
		uint32_t L_242 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_243 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_244 = V_2;
		NullCheck(L_243);
		int32_t L_245 = ((int32_t)((uint8_t)L_244));
		uint32_t L_246 = (L_243)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_247 = ___ekey2;
		NullCheck(L_247);
		int32_t L_248 = ((int32_t)13);
		uint32_t L_249 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_234^(int32_t)L_238))^(int32_t)L_242))^(int32_t)L_246))^(int32_t)L_249));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_250 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_251 = V_2;
		NullCheck(L_250);
		int32_t L_252 = ((int32_t)((uint32_t)L_251>>((int32_t)24)));
		uint32_t L_253 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_254 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_255 = V_1;
		NullCheck(L_254);
		int32_t L_256 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_255>>((int32_t)16)))));
		uint32_t L_257 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_258 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_259 = V_0;
		NullCheck(L_258);
		int32_t L_260 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_259>>8))));
		uint32_t L_261 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_260));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_262 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_263 = V_3;
		NullCheck(L_262);
		int32_t L_264 = ((int32_t)((uint8_t)L_263));
		uint32_t L_265 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_266 = ___ekey2;
		NullCheck(L_266);
		int32_t L_267 = ((int32_t)14);
		uint32_t L_268 = (L_266)->GetAt(static_cast<il2cpp_array_size_t>(L_267));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_253^(int32_t)L_257))^(int32_t)L_261))^(int32_t)L_265))^(int32_t)L_268));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_269 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_270 = V_3;
		NullCheck(L_269);
		int32_t L_271 = ((int32_t)((uint32_t)L_270>>((int32_t)24)));
		uint32_t L_272 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_273 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_274 = V_2;
		NullCheck(L_273);
		int32_t L_275 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_274>>((int32_t)16)))));
		uint32_t L_276 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_275));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_277 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_278 = V_1;
		NullCheck(L_277);
		int32_t L_279 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_278>>8))));
		uint32_t L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_281 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_282 = V_0;
		NullCheck(L_281);
		int32_t L_283 = ((int32_t)((uint8_t)L_282));
		uint32_t L_284 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_283));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_285 = ___ekey2;
		NullCheck(L_285);
		int32_t L_286 = ((int32_t)15);
		uint32_t L_287 = (L_285)->GetAt(static_cast<il2cpp_array_size_t>(L_286));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_272^(int32_t)L_276))^(int32_t)L_280))^(int32_t)L_284))^(int32_t)L_287));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_288 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_289 = V_4;
		NullCheck(L_288);
		int32_t L_290 = ((int32_t)((uint32_t)L_289>>((int32_t)24)));
		uint32_t L_291 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_292 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_293 = V_7;
		NullCheck(L_292);
		int32_t L_294 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_293>>((int32_t)16)))));
		uint32_t L_295 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_296 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_297 = V_6;
		NullCheck(L_296);
		int32_t L_298 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_297>>8))));
		uint32_t L_299 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_300 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_301 = V_5;
		NullCheck(L_300);
		int32_t L_302 = ((int32_t)((uint8_t)L_301));
		uint32_t L_303 = (L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_304 = ___ekey2;
		NullCheck(L_304);
		int32_t L_305 = ((int32_t)16);
		uint32_t L_306 = (L_304)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_291^(int32_t)L_295))^(int32_t)L_299))^(int32_t)L_303))^(int32_t)L_306));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_307 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_308 = V_5;
		NullCheck(L_307);
		int32_t L_309 = ((int32_t)((uint32_t)L_308>>((int32_t)24)));
		uint32_t L_310 = (L_307)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_311 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_312 = V_4;
		NullCheck(L_311);
		int32_t L_313 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_312>>((int32_t)16)))));
		uint32_t L_314 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_315 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_316 = V_7;
		NullCheck(L_315);
		int32_t L_317 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_316>>8))));
		uint32_t L_318 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_319 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_320 = V_6;
		NullCheck(L_319);
		int32_t L_321 = ((int32_t)((uint8_t)L_320));
		uint32_t L_322 = (L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_323 = ___ekey2;
		NullCheck(L_323);
		int32_t L_324 = ((int32_t)17);
		uint32_t L_325 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_310^(int32_t)L_314))^(int32_t)L_318))^(int32_t)L_322))^(int32_t)L_325));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_326 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_327 = V_6;
		NullCheck(L_326);
		int32_t L_328 = ((int32_t)((uint32_t)L_327>>((int32_t)24)));
		uint32_t L_329 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_330 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_331 = V_5;
		NullCheck(L_330);
		int32_t L_332 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_331>>((int32_t)16)))));
		uint32_t L_333 = (L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_334 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_335 = V_4;
		NullCheck(L_334);
		int32_t L_336 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_335>>8))));
		uint32_t L_337 = (L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_338 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_339 = V_7;
		NullCheck(L_338);
		int32_t L_340 = ((int32_t)((uint8_t)L_339));
		uint32_t L_341 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_342 = ___ekey2;
		NullCheck(L_342);
		int32_t L_343 = ((int32_t)18);
		uint32_t L_344 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_329^(int32_t)L_333))^(int32_t)L_337))^(int32_t)L_341))^(int32_t)L_344));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_345 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_346 = V_7;
		NullCheck(L_345);
		int32_t L_347 = ((int32_t)((uint32_t)L_346>>((int32_t)24)));
		uint32_t L_348 = (L_345)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_349 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_350 = V_6;
		NullCheck(L_349);
		int32_t L_351 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_350>>((int32_t)16)))));
		uint32_t L_352 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_351));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_353 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_354 = V_5;
		NullCheck(L_353);
		int32_t L_355 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_354>>8))));
		uint32_t L_356 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_355));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_357 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_358 = V_4;
		NullCheck(L_357);
		int32_t L_359 = ((int32_t)((uint8_t)L_358));
		uint32_t L_360 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_359));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_361 = ___ekey2;
		NullCheck(L_361);
		int32_t L_362 = ((int32_t)19);
		uint32_t L_363 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_348^(int32_t)L_352))^(int32_t)L_356))^(int32_t)L_360))^(int32_t)L_363));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_364 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_365 = V_0;
		NullCheck(L_364);
		int32_t L_366 = ((int32_t)((uint32_t)L_365>>((int32_t)24)));
		uint32_t L_367 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_368 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_369 = V_3;
		NullCheck(L_368);
		int32_t L_370 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_369>>((int32_t)16)))));
		uint32_t L_371 = (L_368)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_372 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_373 = V_2;
		NullCheck(L_372);
		int32_t L_374 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_373>>8))));
		uint32_t L_375 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_376 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_377 = V_1;
		NullCheck(L_376);
		int32_t L_378 = ((int32_t)((uint8_t)L_377));
		uint32_t L_379 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_380 = ___ekey2;
		NullCheck(L_380);
		int32_t L_381 = ((int32_t)20);
		uint32_t L_382 = (L_380)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_367^(int32_t)L_371))^(int32_t)L_375))^(int32_t)L_379))^(int32_t)L_382));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_383 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_384 = V_1;
		NullCheck(L_383);
		int32_t L_385 = ((int32_t)((uint32_t)L_384>>((int32_t)24)));
		uint32_t L_386 = (L_383)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_387 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_388 = V_0;
		NullCheck(L_387);
		int32_t L_389 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_388>>((int32_t)16)))));
		uint32_t L_390 = (L_387)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_391 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_392 = V_3;
		NullCheck(L_391);
		int32_t L_393 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_392>>8))));
		uint32_t L_394 = (L_391)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_395 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_396 = V_2;
		NullCheck(L_395);
		int32_t L_397 = ((int32_t)((uint8_t)L_396));
		uint32_t L_398 = (L_395)->GetAt(static_cast<il2cpp_array_size_t>(L_397));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_399 = ___ekey2;
		NullCheck(L_399);
		int32_t L_400 = ((int32_t)21);
		uint32_t L_401 = (L_399)->GetAt(static_cast<il2cpp_array_size_t>(L_400));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_386^(int32_t)L_390))^(int32_t)L_394))^(int32_t)L_398))^(int32_t)L_401));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_402 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_403 = V_2;
		NullCheck(L_402);
		int32_t L_404 = ((int32_t)((uint32_t)L_403>>((int32_t)24)));
		uint32_t L_405 = (L_402)->GetAt(static_cast<il2cpp_array_size_t>(L_404));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_406 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_407 = V_1;
		NullCheck(L_406);
		int32_t L_408 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_407>>((int32_t)16)))));
		uint32_t L_409 = (L_406)->GetAt(static_cast<il2cpp_array_size_t>(L_408));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_410 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_411 = V_0;
		NullCheck(L_410);
		int32_t L_412 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_411>>8))));
		uint32_t L_413 = (L_410)->GetAt(static_cast<il2cpp_array_size_t>(L_412));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_414 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_415 = V_3;
		NullCheck(L_414);
		int32_t L_416 = ((int32_t)((uint8_t)L_415));
		uint32_t L_417 = (L_414)->GetAt(static_cast<il2cpp_array_size_t>(L_416));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_418 = ___ekey2;
		NullCheck(L_418);
		int32_t L_419 = ((int32_t)22);
		uint32_t L_420 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_405^(int32_t)L_409))^(int32_t)L_413))^(int32_t)L_417))^(int32_t)L_420));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_421 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_422 = V_3;
		NullCheck(L_421);
		int32_t L_423 = ((int32_t)((uint32_t)L_422>>((int32_t)24)));
		uint32_t L_424 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_423));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_425 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_426 = V_2;
		NullCheck(L_425);
		int32_t L_427 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_426>>((int32_t)16)))));
		uint32_t L_428 = (L_425)->GetAt(static_cast<il2cpp_array_size_t>(L_427));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_429 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_430 = V_1;
		NullCheck(L_429);
		int32_t L_431 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_430>>8))));
		uint32_t L_432 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_431));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_433 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_434 = V_0;
		NullCheck(L_433);
		int32_t L_435 = ((int32_t)((uint8_t)L_434));
		uint32_t L_436 = (L_433)->GetAt(static_cast<il2cpp_array_size_t>(L_435));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_437 = ___ekey2;
		NullCheck(L_437);
		int32_t L_438 = ((int32_t)23);
		uint32_t L_439 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_424^(int32_t)L_428))^(int32_t)L_432))^(int32_t)L_436))^(int32_t)L_439));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_440 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_441 = V_4;
		NullCheck(L_440);
		int32_t L_442 = ((int32_t)((uint32_t)L_441>>((int32_t)24)));
		uint32_t L_443 = (L_440)->GetAt(static_cast<il2cpp_array_size_t>(L_442));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_444 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_445 = V_7;
		NullCheck(L_444);
		int32_t L_446 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_445>>((int32_t)16)))));
		uint32_t L_447 = (L_444)->GetAt(static_cast<il2cpp_array_size_t>(L_446));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_448 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_449 = V_6;
		NullCheck(L_448);
		int32_t L_450 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_449>>8))));
		uint32_t L_451 = (L_448)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_452 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_453 = V_5;
		NullCheck(L_452);
		int32_t L_454 = ((int32_t)((uint8_t)L_453));
		uint32_t L_455 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_454));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_456 = ___ekey2;
		NullCheck(L_456);
		int32_t L_457 = ((int32_t)24);
		uint32_t L_458 = (L_456)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_443^(int32_t)L_447))^(int32_t)L_451))^(int32_t)L_455))^(int32_t)L_458));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_459 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_460 = V_5;
		NullCheck(L_459);
		int32_t L_461 = ((int32_t)((uint32_t)L_460>>((int32_t)24)));
		uint32_t L_462 = (L_459)->GetAt(static_cast<il2cpp_array_size_t>(L_461));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_463 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_464 = V_4;
		NullCheck(L_463);
		int32_t L_465 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_464>>((int32_t)16)))));
		uint32_t L_466 = (L_463)->GetAt(static_cast<il2cpp_array_size_t>(L_465));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_467 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_468 = V_7;
		NullCheck(L_467);
		int32_t L_469 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_468>>8))));
		uint32_t L_470 = (L_467)->GetAt(static_cast<il2cpp_array_size_t>(L_469));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_471 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_472 = V_6;
		NullCheck(L_471);
		int32_t L_473 = ((int32_t)((uint8_t)L_472));
		uint32_t L_474 = (L_471)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_475 = ___ekey2;
		NullCheck(L_475);
		int32_t L_476 = ((int32_t)25);
		uint32_t L_477 = (L_475)->GetAt(static_cast<il2cpp_array_size_t>(L_476));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_462^(int32_t)L_466))^(int32_t)L_470))^(int32_t)L_474))^(int32_t)L_477));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_478 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_479 = V_6;
		NullCheck(L_478);
		int32_t L_480 = ((int32_t)((uint32_t)L_479>>((int32_t)24)));
		uint32_t L_481 = (L_478)->GetAt(static_cast<il2cpp_array_size_t>(L_480));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_482 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_483 = V_5;
		NullCheck(L_482);
		int32_t L_484 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_483>>((int32_t)16)))));
		uint32_t L_485 = (L_482)->GetAt(static_cast<il2cpp_array_size_t>(L_484));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_486 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_487 = V_4;
		NullCheck(L_486);
		int32_t L_488 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_487>>8))));
		uint32_t L_489 = (L_486)->GetAt(static_cast<il2cpp_array_size_t>(L_488));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_490 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_491 = V_7;
		NullCheck(L_490);
		int32_t L_492 = ((int32_t)((uint8_t)L_491));
		uint32_t L_493 = (L_490)->GetAt(static_cast<il2cpp_array_size_t>(L_492));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_494 = ___ekey2;
		NullCheck(L_494);
		int32_t L_495 = ((int32_t)26);
		uint32_t L_496 = (L_494)->GetAt(static_cast<il2cpp_array_size_t>(L_495));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_481^(int32_t)L_485))^(int32_t)L_489))^(int32_t)L_493))^(int32_t)L_496));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_497 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_498 = V_7;
		NullCheck(L_497);
		int32_t L_499 = ((int32_t)((uint32_t)L_498>>((int32_t)24)));
		uint32_t L_500 = (L_497)->GetAt(static_cast<il2cpp_array_size_t>(L_499));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_501 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_502 = V_6;
		NullCheck(L_501);
		int32_t L_503 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_502>>((int32_t)16)))));
		uint32_t L_504 = (L_501)->GetAt(static_cast<il2cpp_array_size_t>(L_503));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_505 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_506 = V_5;
		NullCheck(L_505);
		int32_t L_507 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_506>>8))));
		uint32_t L_508 = (L_505)->GetAt(static_cast<il2cpp_array_size_t>(L_507));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_509 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_510 = V_4;
		NullCheck(L_509);
		int32_t L_511 = ((int32_t)((uint8_t)L_510));
		uint32_t L_512 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_511));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_513 = ___ekey2;
		NullCheck(L_513);
		int32_t L_514 = ((int32_t)27);
		uint32_t L_515 = (L_513)->GetAt(static_cast<il2cpp_array_size_t>(L_514));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_500^(int32_t)L_504))^(int32_t)L_508))^(int32_t)L_512))^(int32_t)L_515));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_516 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_517 = V_0;
		NullCheck(L_516);
		int32_t L_518 = ((int32_t)((uint32_t)L_517>>((int32_t)24)));
		uint32_t L_519 = (L_516)->GetAt(static_cast<il2cpp_array_size_t>(L_518));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_520 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_521 = V_3;
		NullCheck(L_520);
		int32_t L_522 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_521>>((int32_t)16)))));
		uint32_t L_523 = (L_520)->GetAt(static_cast<il2cpp_array_size_t>(L_522));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_524 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_525 = V_2;
		NullCheck(L_524);
		int32_t L_526 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_525>>8))));
		uint32_t L_527 = (L_524)->GetAt(static_cast<il2cpp_array_size_t>(L_526));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_528 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_529 = V_1;
		NullCheck(L_528);
		int32_t L_530 = ((int32_t)((uint8_t)L_529));
		uint32_t L_531 = (L_528)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_532 = ___ekey2;
		NullCheck(L_532);
		int32_t L_533 = ((int32_t)28);
		uint32_t L_534 = (L_532)->GetAt(static_cast<il2cpp_array_size_t>(L_533));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_519^(int32_t)L_523))^(int32_t)L_527))^(int32_t)L_531))^(int32_t)L_534));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_535 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_536 = V_1;
		NullCheck(L_535);
		int32_t L_537 = ((int32_t)((uint32_t)L_536>>((int32_t)24)));
		uint32_t L_538 = (L_535)->GetAt(static_cast<il2cpp_array_size_t>(L_537));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_539 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_540 = V_0;
		NullCheck(L_539);
		int32_t L_541 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_540>>((int32_t)16)))));
		uint32_t L_542 = (L_539)->GetAt(static_cast<il2cpp_array_size_t>(L_541));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_543 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_544 = V_3;
		NullCheck(L_543);
		int32_t L_545 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_544>>8))));
		uint32_t L_546 = (L_543)->GetAt(static_cast<il2cpp_array_size_t>(L_545));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_547 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_548 = V_2;
		NullCheck(L_547);
		int32_t L_549 = ((int32_t)((uint8_t)L_548));
		uint32_t L_550 = (L_547)->GetAt(static_cast<il2cpp_array_size_t>(L_549));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_551 = ___ekey2;
		NullCheck(L_551);
		int32_t L_552 = ((int32_t)29);
		uint32_t L_553 = (L_551)->GetAt(static_cast<il2cpp_array_size_t>(L_552));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_538^(int32_t)L_542))^(int32_t)L_546))^(int32_t)L_550))^(int32_t)L_553));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_554 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_555 = V_2;
		NullCheck(L_554);
		int32_t L_556 = ((int32_t)((uint32_t)L_555>>((int32_t)24)));
		uint32_t L_557 = (L_554)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_558 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_559 = V_1;
		NullCheck(L_558);
		int32_t L_560 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_559>>((int32_t)16)))));
		uint32_t L_561 = (L_558)->GetAt(static_cast<il2cpp_array_size_t>(L_560));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_562 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_563 = V_0;
		NullCheck(L_562);
		int32_t L_564 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_563>>8))));
		uint32_t L_565 = (L_562)->GetAt(static_cast<il2cpp_array_size_t>(L_564));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_566 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_567 = V_3;
		NullCheck(L_566);
		int32_t L_568 = ((int32_t)((uint8_t)L_567));
		uint32_t L_569 = (L_566)->GetAt(static_cast<il2cpp_array_size_t>(L_568));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_570 = ___ekey2;
		NullCheck(L_570);
		int32_t L_571 = ((int32_t)30);
		uint32_t L_572 = (L_570)->GetAt(static_cast<il2cpp_array_size_t>(L_571));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_557^(int32_t)L_561))^(int32_t)L_565))^(int32_t)L_569))^(int32_t)L_572));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_573 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_574 = V_3;
		NullCheck(L_573);
		int32_t L_575 = ((int32_t)((uint32_t)L_574>>((int32_t)24)));
		uint32_t L_576 = (L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_575));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_577 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_578 = V_2;
		NullCheck(L_577);
		int32_t L_579 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_578>>((int32_t)16)))));
		uint32_t L_580 = (L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_579));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_581 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_582 = V_1;
		NullCheck(L_581);
		int32_t L_583 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_582>>8))));
		uint32_t L_584 = (L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_583));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_585 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_586 = V_0;
		NullCheck(L_585);
		int32_t L_587 = ((int32_t)((uint8_t)L_586));
		uint32_t L_588 = (L_585)->GetAt(static_cast<il2cpp_array_size_t>(L_587));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_589 = ___ekey2;
		NullCheck(L_589);
		int32_t L_590 = ((int32_t)31);
		uint32_t L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_576^(int32_t)L_580))^(int32_t)L_584))^(int32_t)L_588))^(int32_t)L_591));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_592 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_593 = V_4;
		NullCheck(L_592);
		int32_t L_594 = ((int32_t)((uint32_t)L_593>>((int32_t)24)));
		uint32_t L_595 = (L_592)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_596 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_597 = V_7;
		NullCheck(L_596);
		int32_t L_598 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_597>>((int32_t)16)))));
		uint32_t L_599 = (L_596)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_600 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_601 = V_6;
		NullCheck(L_600);
		int32_t L_602 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_601>>8))));
		uint32_t L_603 = (L_600)->GetAt(static_cast<il2cpp_array_size_t>(L_602));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_604 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_605 = V_5;
		NullCheck(L_604);
		int32_t L_606 = ((int32_t)((uint8_t)L_605));
		uint32_t L_607 = (L_604)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_608 = ___ekey2;
		NullCheck(L_608);
		int32_t L_609 = ((int32_t)32);
		uint32_t L_610 = (L_608)->GetAt(static_cast<il2cpp_array_size_t>(L_609));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_595^(int32_t)L_599))^(int32_t)L_603))^(int32_t)L_607))^(int32_t)L_610));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_611 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_612 = V_5;
		NullCheck(L_611);
		int32_t L_613 = ((int32_t)((uint32_t)L_612>>((int32_t)24)));
		uint32_t L_614 = (L_611)->GetAt(static_cast<il2cpp_array_size_t>(L_613));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_615 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_616 = V_4;
		NullCheck(L_615);
		int32_t L_617 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_616>>((int32_t)16)))));
		uint32_t L_618 = (L_615)->GetAt(static_cast<il2cpp_array_size_t>(L_617));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_619 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_620 = V_7;
		NullCheck(L_619);
		int32_t L_621 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_620>>8))));
		uint32_t L_622 = (L_619)->GetAt(static_cast<il2cpp_array_size_t>(L_621));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_623 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_624 = V_6;
		NullCheck(L_623);
		int32_t L_625 = ((int32_t)((uint8_t)L_624));
		uint32_t L_626 = (L_623)->GetAt(static_cast<il2cpp_array_size_t>(L_625));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_627 = ___ekey2;
		NullCheck(L_627);
		int32_t L_628 = ((int32_t)33);
		uint32_t L_629 = (L_627)->GetAt(static_cast<il2cpp_array_size_t>(L_628));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_614^(int32_t)L_618))^(int32_t)L_622))^(int32_t)L_626))^(int32_t)L_629));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_630 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_631 = V_6;
		NullCheck(L_630);
		int32_t L_632 = ((int32_t)((uint32_t)L_631>>((int32_t)24)));
		uint32_t L_633 = (L_630)->GetAt(static_cast<il2cpp_array_size_t>(L_632));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_634 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_635 = V_5;
		NullCheck(L_634);
		int32_t L_636 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_635>>((int32_t)16)))));
		uint32_t L_637 = (L_634)->GetAt(static_cast<il2cpp_array_size_t>(L_636));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_638 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_639 = V_4;
		NullCheck(L_638);
		int32_t L_640 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_639>>8))));
		uint32_t L_641 = (L_638)->GetAt(static_cast<il2cpp_array_size_t>(L_640));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_642 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_643 = V_7;
		NullCheck(L_642);
		int32_t L_644 = ((int32_t)((uint8_t)L_643));
		uint32_t L_645 = (L_642)->GetAt(static_cast<il2cpp_array_size_t>(L_644));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_646 = ___ekey2;
		NullCheck(L_646);
		int32_t L_647 = ((int32_t)34);
		uint32_t L_648 = (L_646)->GetAt(static_cast<il2cpp_array_size_t>(L_647));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_633^(int32_t)L_637))^(int32_t)L_641))^(int32_t)L_645))^(int32_t)L_648));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_649 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_650 = V_7;
		NullCheck(L_649);
		int32_t L_651 = ((int32_t)((uint32_t)L_650>>((int32_t)24)));
		uint32_t L_652 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_651));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_653 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_654 = V_6;
		NullCheck(L_653);
		int32_t L_655 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_654>>((int32_t)16)))));
		uint32_t L_656 = (L_653)->GetAt(static_cast<il2cpp_array_size_t>(L_655));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_657 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_658 = V_5;
		NullCheck(L_657);
		int32_t L_659 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_658>>8))));
		uint32_t L_660 = (L_657)->GetAt(static_cast<il2cpp_array_size_t>(L_659));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_661 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_662 = V_4;
		NullCheck(L_661);
		int32_t L_663 = ((int32_t)((uint8_t)L_662));
		uint32_t L_664 = (L_661)->GetAt(static_cast<il2cpp_array_size_t>(L_663));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_665 = ___ekey2;
		NullCheck(L_665);
		int32_t L_666 = ((int32_t)35);
		uint32_t L_667 = (L_665)->GetAt(static_cast<il2cpp_array_size_t>(L_666));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_652^(int32_t)L_656))^(int32_t)L_660))^(int32_t)L_664))^(int32_t)L_667));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_668 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_669 = V_0;
		NullCheck(L_668);
		int32_t L_670 = ((int32_t)((uint32_t)L_669>>((int32_t)24)));
		uint32_t L_671 = (L_668)->GetAt(static_cast<il2cpp_array_size_t>(L_670));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_672 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_673 = V_3;
		NullCheck(L_672);
		int32_t L_674 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_673>>((int32_t)16)))));
		uint32_t L_675 = (L_672)->GetAt(static_cast<il2cpp_array_size_t>(L_674));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_676 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_677 = V_2;
		NullCheck(L_676);
		int32_t L_678 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_677>>8))));
		uint32_t L_679 = (L_676)->GetAt(static_cast<il2cpp_array_size_t>(L_678));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_680 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_681 = V_1;
		NullCheck(L_680);
		int32_t L_682 = ((int32_t)((uint8_t)L_681));
		uint32_t L_683 = (L_680)->GetAt(static_cast<il2cpp_array_size_t>(L_682));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_684 = ___ekey2;
		NullCheck(L_684);
		int32_t L_685 = ((int32_t)36);
		uint32_t L_686 = (L_684)->GetAt(static_cast<il2cpp_array_size_t>(L_685));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_671^(int32_t)L_675))^(int32_t)L_679))^(int32_t)L_683))^(int32_t)L_686));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_687 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_688 = V_1;
		NullCheck(L_687);
		int32_t L_689 = ((int32_t)((uint32_t)L_688>>((int32_t)24)));
		uint32_t L_690 = (L_687)->GetAt(static_cast<il2cpp_array_size_t>(L_689));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_691 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_692 = V_0;
		NullCheck(L_691);
		int32_t L_693 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_692>>((int32_t)16)))));
		uint32_t L_694 = (L_691)->GetAt(static_cast<il2cpp_array_size_t>(L_693));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_695 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_696 = V_3;
		NullCheck(L_695);
		int32_t L_697 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_696>>8))));
		uint32_t L_698 = (L_695)->GetAt(static_cast<il2cpp_array_size_t>(L_697));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_699 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_700 = V_2;
		NullCheck(L_699);
		int32_t L_701 = ((int32_t)((uint8_t)L_700));
		uint32_t L_702 = (L_699)->GetAt(static_cast<il2cpp_array_size_t>(L_701));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_703 = ___ekey2;
		NullCheck(L_703);
		int32_t L_704 = ((int32_t)37);
		uint32_t L_705 = (L_703)->GetAt(static_cast<il2cpp_array_size_t>(L_704));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_690^(int32_t)L_694))^(int32_t)L_698))^(int32_t)L_702))^(int32_t)L_705));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_706 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_707 = V_2;
		NullCheck(L_706);
		int32_t L_708 = ((int32_t)((uint32_t)L_707>>((int32_t)24)));
		uint32_t L_709 = (L_706)->GetAt(static_cast<il2cpp_array_size_t>(L_708));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_710 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_711 = V_1;
		NullCheck(L_710);
		int32_t L_712 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_711>>((int32_t)16)))));
		uint32_t L_713 = (L_710)->GetAt(static_cast<il2cpp_array_size_t>(L_712));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_714 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_715 = V_0;
		NullCheck(L_714);
		int32_t L_716 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_715>>8))));
		uint32_t L_717 = (L_714)->GetAt(static_cast<il2cpp_array_size_t>(L_716));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_718 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_719 = V_3;
		NullCheck(L_718);
		int32_t L_720 = ((int32_t)((uint8_t)L_719));
		uint32_t L_721 = (L_718)->GetAt(static_cast<il2cpp_array_size_t>(L_720));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_722 = ___ekey2;
		NullCheck(L_722);
		int32_t L_723 = ((int32_t)38);
		uint32_t L_724 = (L_722)->GetAt(static_cast<il2cpp_array_size_t>(L_723));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_709^(int32_t)L_713))^(int32_t)L_717))^(int32_t)L_721))^(int32_t)L_724));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_725 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_726 = V_3;
		NullCheck(L_725);
		int32_t L_727 = ((int32_t)((uint32_t)L_726>>((int32_t)24)));
		uint32_t L_728 = (L_725)->GetAt(static_cast<il2cpp_array_size_t>(L_727));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_729 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_730 = V_2;
		NullCheck(L_729);
		int32_t L_731 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_730>>((int32_t)16)))));
		uint32_t L_732 = (L_729)->GetAt(static_cast<il2cpp_array_size_t>(L_731));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_733 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_734 = V_1;
		NullCheck(L_733);
		int32_t L_735 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_734>>8))));
		uint32_t L_736 = (L_733)->GetAt(static_cast<il2cpp_array_size_t>(L_735));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_737 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_738 = V_0;
		NullCheck(L_737);
		int32_t L_739 = ((int32_t)((uint8_t)L_738));
		uint32_t L_740 = (L_737)->GetAt(static_cast<il2cpp_array_size_t>(L_739));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_741 = ___ekey2;
		NullCheck(L_741);
		int32_t L_742 = ((int32_t)39);
		uint32_t L_743 = (L_741)->GetAt(static_cast<il2cpp_array_size_t>(L_742));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_728^(int32_t)L_732))^(int32_t)L_736))^(int32_t)L_740))^(int32_t)L_743));
		int32_t L_744 = __this->get_Nr_14();
		if ((((int32_t)L_744) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0ad4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_745 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_746 = V_4;
		NullCheck(L_745);
		int32_t L_747 = ((int32_t)((uint32_t)L_746>>((int32_t)24)));
		uint32_t L_748 = (L_745)->GetAt(static_cast<il2cpp_array_size_t>(L_747));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_749 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_750 = V_7;
		NullCheck(L_749);
		int32_t L_751 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_750>>((int32_t)16)))));
		uint32_t L_752 = (L_749)->GetAt(static_cast<il2cpp_array_size_t>(L_751));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_753 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_754 = V_6;
		NullCheck(L_753);
		int32_t L_755 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_754>>8))));
		uint32_t L_756 = (L_753)->GetAt(static_cast<il2cpp_array_size_t>(L_755));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_757 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_758 = V_5;
		NullCheck(L_757);
		int32_t L_759 = ((int32_t)((uint8_t)L_758));
		uint32_t L_760 = (L_757)->GetAt(static_cast<il2cpp_array_size_t>(L_759));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_761 = ___ekey2;
		NullCheck(L_761);
		int32_t L_762 = ((int32_t)40);
		uint32_t L_763 = (L_761)->GetAt(static_cast<il2cpp_array_size_t>(L_762));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_748^(int32_t)L_752))^(int32_t)L_756))^(int32_t)L_760))^(int32_t)L_763));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_764 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_765 = V_5;
		NullCheck(L_764);
		int32_t L_766 = ((int32_t)((uint32_t)L_765>>((int32_t)24)));
		uint32_t L_767 = (L_764)->GetAt(static_cast<il2cpp_array_size_t>(L_766));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_768 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_769 = V_4;
		NullCheck(L_768);
		int32_t L_770 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_769>>((int32_t)16)))));
		uint32_t L_771 = (L_768)->GetAt(static_cast<il2cpp_array_size_t>(L_770));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_772 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_773 = V_7;
		NullCheck(L_772);
		int32_t L_774 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_773>>8))));
		uint32_t L_775 = (L_772)->GetAt(static_cast<il2cpp_array_size_t>(L_774));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_776 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_777 = V_6;
		NullCheck(L_776);
		int32_t L_778 = ((int32_t)((uint8_t)L_777));
		uint32_t L_779 = (L_776)->GetAt(static_cast<il2cpp_array_size_t>(L_778));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_780 = ___ekey2;
		NullCheck(L_780);
		int32_t L_781 = ((int32_t)41);
		uint32_t L_782 = (L_780)->GetAt(static_cast<il2cpp_array_size_t>(L_781));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_767^(int32_t)L_771))^(int32_t)L_775))^(int32_t)L_779))^(int32_t)L_782));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_783 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_784 = V_6;
		NullCheck(L_783);
		int32_t L_785 = ((int32_t)((uint32_t)L_784>>((int32_t)24)));
		uint32_t L_786 = (L_783)->GetAt(static_cast<il2cpp_array_size_t>(L_785));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_787 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_788 = V_5;
		NullCheck(L_787);
		int32_t L_789 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_788>>((int32_t)16)))));
		uint32_t L_790 = (L_787)->GetAt(static_cast<il2cpp_array_size_t>(L_789));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_791 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_792 = V_4;
		NullCheck(L_791);
		int32_t L_793 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_792>>8))));
		uint32_t L_794 = (L_791)->GetAt(static_cast<il2cpp_array_size_t>(L_793));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_795 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_796 = V_7;
		NullCheck(L_795);
		int32_t L_797 = ((int32_t)((uint8_t)L_796));
		uint32_t L_798 = (L_795)->GetAt(static_cast<il2cpp_array_size_t>(L_797));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_799 = ___ekey2;
		NullCheck(L_799);
		int32_t L_800 = ((int32_t)42);
		uint32_t L_801 = (L_799)->GetAt(static_cast<il2cpp_array_size_t>(L_800));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_786^(int32_t)L_790))^(int32_t)L_794))^(int32_t)L_798))^(int32_t)L_801));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_802 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_803 = V_7;
		NullCheck(L_802);
		int32_t L_804 = ((int32_t)((uint32_t)L_803>>((int32_t)24)));
		uint32_t L_805 = (L_802)->GetAt(static_cast<il2cpp_array_size_t>(L_804));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_806 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_807 = V_6;
		NullCheck(L_806);
		int32_t L_808 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_807>>((int32_t)16)))));
		uint32_t L_809 = (L_806)->GetAt(static_cast<il2cpp_array_size_t>(L_808));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_810 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_811 = V_5;
		NullCheck(L_810);
		int32_t L_812 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_811>>8))));
		uint32_t L_813 = (L_810)->GetAt(static_cast<il2cpp_array_size_t>(L_812));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_814 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_815 = V_4;
		NullCheck(L_814);
		int32_t L_816 = ((int32_t)((uint8_t)L_815));
		uint32_t L_817 = (L_814)->GetAt(static_cast<il2cpp_array_size_t>(L_816));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_818 = ___ekey2;
		NullCheck(L_818);
		int32_t L_819 = ((int32_t)43);
		uint32_t L_820 = (L_818)->GetAt(static_cast<il2cpp_array_size_t>(L_819));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_805^(int32_t)L_809))^(int32_t)L_813))^(int32_t)L_817))^(int32_t)L_820));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_821 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_822 = V_0;
		NullCheck(L_821);
		int32_t L_823 = ((int32_t)((uint32_t)L_822>>((int32_t)24)));
		uint32_t L_824 = (L_821)->GetAt(static_cast<il2cpp_array_size_t>(L_823));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_825 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_826 = V_3;
		NullCheck(L_825);
		int32_t L_827 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_826>>((int32_t)16)))));
		uint32_t L_828 = (L_825)->GetAt(static_cast<il2cpp_array_size_t>(L_827));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_829 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_830 = V_2;
		NullCheck(L_829);
		int32_t L_831 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_830>>8))));
		uint32_t L_832 = (L_829)->GetAt(static_cast<il2cpp_array_size_t>(L_831));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_833 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_834 = V_1;
		NullCheck(L_833);
		int32_t L_835 = ((int32_t)((uint8_t)L_834));
		uint32_t L_836 = (L_833)->GetAt(static_cast<il2cpp_array_size_t>(L_835));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_837 = ___ekey2;
		NullCheck(L_837);
		int32_t L_838 = ((int32_t)44);
		uint32_t L_839 = (L_837)->GetAt(static_cast<il2cpp_array_size_t>(L_838));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_824^(int32_t)L_828))^(int32_t)L_832))^(int32_t)L_836))^(int32_t)L_839));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_840 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_841 = V_1;
		NullCheck(L_840);
		int32_t L_842 = ((int32_t)((uint32_t)L_841>>((int32_t)24)));
		uint32_t L_843 = (L_840)->GetAt(static_cast<il2cpp_array_size_t>(L_842));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_844 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_845 = V_0;
		NullCheck(L_844);
		int32_t L_846 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_845>>((int32_t)16)))));
		uint32_t L_847 = (L_844)->GetAt(static_cast<il2cpp_array_size_t>(L_846));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_848 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_849 = V_3;
		NullCheck(L_848);
		int32_t L_850 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_849>>8))));
		uint32_t L_851 = (L_848)->GetAt(static_cast<il2cpp_array_size_t>(L_850));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_852 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_853 = V_2;
		NullCheck(L_852);
		int32_t L_854 = ((int32_t)((uint8_t)L_853));
		uint32_t L_855 = (L_852)->GetAt(static_cast<il2cpp_array_size_t>(L_854));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_856 = ___ekey2;
		NullCheck(L_856);
		int32_t L_857 = ((int32_t)45);
		uint32_t L_858 = (L_856)->GetAt(static_cast<il2cpp_array_size_t>(L_857));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_843^(int32_t)L_847))^(int32_t)L_851))^(int32_t)L_855))^(int32_t)L_858));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_859 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_860 = V_2;
		NullCheck(L_859);
		int32_t L_861 = ((int32_t)((uint32_t)L_860>>((int32_t)24)));
		uint32_t L_862 = (L_859)->GetAt(static_cast<il2cpp_array_size_t>(L_861));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_863 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_864 = V_1;
		NullCheck(L_863);
		int32_t L_865 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_864>>((int32_t)16)))));
		uint32_t L_866 = (L_863)->GetAt(static_cast<il2cpp_array_size_t>(L_865));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_867 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_868 = V_0;
		NullCheck(L_867);
		int32_t L_869 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_868>>8))));
		uint32_t L_870 = (L_867)->GetAt(static_cast<il2cpp_array_size_t>(L_869));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_871 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_872 = V_3;
		NullCheck(L_871);
		int32_t L_873 = ((int32_t)((uint8_t)L_872));
		uint32_t L_874 = (L_871)->GetAt(static_cast<il2cpp_array_size_t>(L_873));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_875 = ___ekey2;
		NullCheck(L_875);
		int32_t L_876 = ((int32_t)46);
		uint32_t L_877 = (L_875)->GetAt(static_cast<il2cpp_array_size_t>(L_876));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_862^(int32_t)L_866))^(int32_t)L_870))^(int32_t)L_874))^(int32_t)L_877));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_878 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_879 = V_3;
		NullCheck(L_878);
		int32_t L_880 = ((int32_t)((uint32_t)L_879>>((int32_t)24)));
		uint32_t L_881 = (L_878)->GetAt(static_cast<il2cpp_array_size_t>(L_880));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_882 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_883 = V_2;
		NullCheck(L_882);
		int32_t L_884 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_883>>((int32_t)16)))));
		uint32_t L_885 = (L_882)->GetAt(static_cast<il2cpp_array_size_t>(L_884));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_886 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_887 = V_1;
		NullCheck(L_886);
		int32_t L_888 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_887>>8))));
		uint32_t L_889 = (L_886)->GetAt(static_cast<il2cpp_array_size_t>(L_888));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_890 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_891 = V_0;
		NullCheck(L_890);
		int32_t L_892 = ((int32_t)((uint8_t)L_891));
		uint32_t L_893 = (L_890)->GetAt(static_cast<il2cpp_array_size_t>(L_892));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_894 = ___ekey2;
		NullCheck(L_894);
		int32_t L_895 = ((int32_t)47);
		uint32_t L_896 = (L_894)->GetAt(static_cast<il2cpp_array_size_t>(L_895));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_881^(int32_t)L_885))^(int32_t)L_889))^(int32_t)L_893))^(int32_t)L_896));
		V_8 = ((int32_t)48);
		int32_t L_897 = __this->get_Nr_14();
		if ((((int32_t)L_897) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0ad4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_898 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_899 = V_4;
		NullCheck(L_898);
		int32_t L_900 = ((int32_t)((uint32_t)L_899>>((int32_t)24)));
		uint32_t L_901 = (L_898)->GetAt(static_cast<il2cpp_array_size_t>(L_900));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_902 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_903 = V_7;
		NullCheck(L_902);
		int32_t L_904 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_903>>((int32_t)16)))));
		uint32_t L_905 = (L_902)->GetAt(static_cast<il2cpp_array_size_t>(L_904));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_906 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_907 = V_6;
		NullCheck(L_906);
		int32_t L_908 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_907>>8))));
		uint32_t L_909 = (L_906)->GetAt(static_cast<il2cpp_array_size_t>(L_908));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_910 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_911 = V_5;
		NullCheck(L_910);
		int32_t L_912 = ((int32_t)((uint8_t)L_911));
		uint32_t L_913 = (L_910)->GetAt(static_cast<il2cpp_array_size_t>(L_912));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_914 = ___ekey2;
		NullCheck(L_914);
		int32_t L_915 = ((int32_t)48);
		uint32_t L_916 = (L_914)->GetAt(static_cast<il2cpp_array_size_t>(L_915));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_901^(int32_t)L_905))^(int32_t)L_909))^(int32_t)L_913))^(int32_t)L_916));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_917 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_918 = V_5;
		NullCheck(L_917);
		int32_t L_919 = ((int32_t)((uint32_t)L_918>>((int32_t)24)));
		uint32_t L_920 = (L_917)->GetAt(static_cast<il2cpp_array_size_t>(L_919));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_921 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_922 = V_4;
		NullCheck(L_921);
		int32_t L_923 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_922>>((int32_t)16)))));
		uint32_t L_924 = (L_921)->GetAt(static_cast<il2cpp_array_size_t>(L_923));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_925 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_926 = V_7;
		NullCheck(L_925);
		int32_t L_927 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_926>>8))));
		uint32_t L_928 = (L_925)->GetAt(static_cast<il2cpp_array_size_t>(L_927));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_929 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_930 = V_6;
		NullCheck(L_929);
		int32_t L_931 = ((int32_t)((uint8_t)L_930));
		uint32_t L_932 = (L_929)->GetAt(static_cast<il2cpp_array_size_t>(L_931));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_933 = ___ekey2;
		NullCheck(L_933);
		int32_t L_934 = ((int32_t)49);
		uint32_t L_935 = (L_933)->GetAt(static_cast<il2cpp_array_size_t>(L_934));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_920^(int32_t)L_924))^(int32_t)L_928))^(int32_t)L_932))^(int32_t)L_935));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_936 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_937 = V_6;
		NullCheck(L_936);
		int32_t L_938 = ((int32_t)((uint32_t)L_937>>((int32_t)24)));
		uint32_t L_939 = (L_936)->GetAt(static_cast<il2cpp_array_size_t>(L_938));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_940 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_941 = V_5;
		NullCheck(L_940);
		int32_t L_942 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_941>>((int32_t)16)))));
		uint32_t L_943 = (L_940)->GetAt(static_cast<il2cpp_array_size_t>(L_942));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_944 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_945 = V_4;
		NullCheck(L_944);
		int32_t L_946 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_945>>8))));
		uint32_t L_947 = (L_944)->GetAt(static_cast<il2cpp_array_size_t>(L_946));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_948 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_949 = V_7;
		NullCheck(L_948);
		int32_t L_950 = ((int32_t)((uint8_t)L_949));
		uint32_t L_951 = (L_948)->GetAt(static_cast<il2cpp_array_size_t>(L_950));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_952 = ___ekey2;
		NullCheck(L_952);
		int32_t L_953 = ((int32_t)50);
		uint32_t L_954 = (L_952)->GetAt(static_cast<il2cpp_array_size_t>(L_953));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_939^(int32_t)L_943))^(int32_t)L_947))^(int32_t)L_951))^(int32_t)L_954));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_955 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_956 = V_7;
		NullCheck(L_955);
		int32_t L_957 = ((int32_t)((uint32_t)L_956>>((int32_t)24)));
		uint32_t L_958 = (L_955)->GetAt(static_cast<il2cpp_array_size_t>(L_957));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_959 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_960 = V_6;
		NullCheck(L_959);
		int32_t L_961 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_960>>((int32_t)16)))));
		uint32_t L_962 = (L_959)->GetAt(static_cast<il2cpp_array_size_t>(L_961));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_963 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_964 = V_5;
		NullCheck(L_963);
		int32_t L_965 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_964>>8))));
		uint32_t L_966 = (L_963)->GetAt(static_cast<il2cpp_array_size_t>(L_965));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_967 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_968 = V_4;
		NullCheck(L_967);
		int32_t L_969 = ((int32_t)((uint8_t)L_968));
		uint32_t L_970 = (L_967)->GetAt(static_cast<il2cpp_array_size_t>(L_969));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_971 = ___ekey2;
		NullCheck(L_971);
		int32_t L_972 = ((int32_t)51);
		uint32_t L_973 = (L_971)->GetAt(static_cast<il2cpp_array_size_t>(L_972));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_958^(int32_t)L_962))^(int32_t)L_966))^(int32_t)L_970))^(int32_t)L_973));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_974 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_975 = V_0;
		NullCheck(L_974);
		int32_t L_976 = ((int32_t)((uint32_t)L_975>>((int32_t)24)));
		uint32_t L_977 = (L_974)->GetAt(static_cast<il2cpp_array_size_t>(L_976));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_978 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_979 = V_3;
		NullCheck(L_978);
		int32_t L_980 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_979>>((int32_t)16)))));
		uint32_t L_981 = (L_978)->GetAt(static_cast<il2cpp_array_size_t>(L_980));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_982 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_983 = V_2;
		NullCheck(L_982);
		int32_t L_984 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_983>>8))));
		uint32_t L_985 = (L_982)->GetAt(static_cast<il2cpp_array_size_t>(L_984));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_986 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_987 = V_1;
		NullCheck(L_986);
		int32_t L_988 = ((int32_t)((uint8_t)L_987));
		uint32_t L_989 = (L_986)->GetAt(static_cast<il2cpp_array_size_t>(L_988));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_990 = ___ekey2;
		NullCheck(L_990);
		int32_t L_991 = ((int32_t)52);
		uint32_t L_992 = (L_990)->GetAt(static_cast<il2cpp_array_size_t>(L_991));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_977^(int32_t)L_981))^(int32_t)L_985))^(int32_t)L_989))^(int32_t)L_992));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_993 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_994 = V_1;
		NullCheck(L_993);
		int32_t L_995 = ((int32_t)((uint32_t)L_994>>((int32_t)24)));
		uint32_t L_996 = (L_993)->GetAt(static_cast<il2cpp_array_size_t>(L_995));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_997 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_998 = V_0;
		NullCheck(L_997);
		int32_t L_999 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_998>>((int32_t)16)))));
		uint32_t L_1000 = (L_997)->GetAt(static_cast<il2cpp_array_size_t>(L_999));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1001 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_1002 = V_3;
		NullCheck(L_1001);
		int32_t L_1003 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1002>>8))));
		uint32_t L_1004 = (L_1001)->GetAt(static_cast<il2cpp_array_size_t>(L_1003));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1005 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_1006 = V_2;
		NullCheck(L_1005);
		int32_t L_1007 = ((int32_t)((uint8_t)L_1006));
		uint32_t L_1008 = (L_1005)->GetAt(static_cast<il2cpp_array_size_t>(L_1007));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1009 = ___ekey2;
		NullCheck(L_1009);
		int32_t L_1010 = ((int32_t)53);
		uint32_t L_1011 = (L_1009)->GetAt(static_cast<il2cpp_array_size_t>(L_1010));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_996^(int32_t)L_1000))^(int32_t)L_1004))^(int32_t)L_1008))^(int32_t)L_1011));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1012 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_1013 = V_2;
		NullCheck(L_1012);
		int32_t L_1014 = ((int32_t)((uint32_t)L_1013>>((int32_t)24)));
		uint32_t L_1015 = (L_1012)->GetAt(static_cast<il2cpp_array_size_t>(L_1014));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1016 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_1017 = V_1;
		NullCheck(L_1016);
		int32_t L_1018 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1017>>((int32_t)16)))));
		uint32_t L_1019 = (L_1016)->GetAt(static_cast<il2cpp_array_size_t>(L_1018));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1020 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_1021 = V_0;
		NullCheck(L_1020);
		int32_t L_1022 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1021>>8))));
		uint32_t L_1023 = (L_1020)->GetAt(static_cast<il2cpp_array_size_t>(L_1022));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1024 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_1025 = V_3;
		NullCheck(L_1024);
		int32_t L_1026 = ((int32_t)((uint8_t)L_1025));
		uint32_t L_1027 = (L_1024)->GetAt(static_cast<il2cpp_array_size_t>(L_1026));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1028 = ___ekey2;
		NullCheck(L_1028);
		int32_t L_1029 = ((int32_t)54);
		uint32_t L_1030 = (L_1028)->GetAt(static_cast<il2cpp_array_size_t>(L_1029));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1015^(int32_t)L_1019))^(int32_t)L_1023))^(int32_t)L_1027))^(int32_t)L_1030));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1031 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_1032 = V_3;
		NullCheck(L_1031);
		int32_t L_1033 = ((int32_t)((uint32_t)L_1032>>((int32_t)24)));
		uint32_t L_1034 = (L_1031)->GetAt(static_cast<il2cpp_array_size_t>(L_1033));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1035 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_1036 = V_2;
		NullCheck(L_1035);
		int32_t L_1037 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1036>>((int32_t)16)))));
		uint32_t L_1038 = (L_1035)->GetAt(static_cast<il2cpp_array_size_t>(L_1037));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1039 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_1040 = V_1;
		NullCheck(L_1039);
		int32_t L_1041 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1040>>8))));
		uint32_t L_1042 = (L_1039)->GetAt(static_cast<il2cpp_array_size_t>(L_1041));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1043 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_1044 = V_0;
		NullCheck(L_1043);
		int32_t L_1045 = ((int32_t)((uint8_t)L_1044));
		uint32_t L_1046 = (L_1043)->GetAt(static_cast<il2cpp_array_size_t>(L_1045));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1047 = ___ekey2;
		NullCheck(L_1047);
		int32_t L_1048 = ((int32_t)55);
		uint32_t L_1049 = (L_1047)->GetAt(static_cast<il2cpp_array_size_t>(L_1048));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1034^(int32_t)L_1038))^(int32_t)L_1042))^(int32_t)L_1046))^(int32_t)L_1049));
		V_8 = ((int32_t)56);
	}

IL_0ad4:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1050 = ___outdata1;
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1051 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1052 = V_4;
		NullCheck(L_1051);
		int32_t L_1053 = ((int32_t)((uint32_t)L_1052>>((int32_t)24)));
		uint8_t L_1054 = (L_1051)->GetAt(static_cast<il2cpp_array_size_t>(L_1053));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1055 = ___ekey2;
		int32_t L_1056 = V_8;
		NullCheck(L_1055);
		int32_t L_1057 = L_1056;
		uint32_t L_1058 = (L_1055)->GetAt(static_cast<il2cpp_array_size_t>(L_1057));
		NullCheck(L_1050);
		(L_1050)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1054^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1058>>((int32_t)24))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1059 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1060 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1061 = V_7;
		NullCheck(L_1060);
		int32_t L_1062 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1061>>((int32_t)16)))));
		uint8_t L_1063 = (L_1060)->GetAt(static_cast<il2cpp_array_size_t>(L_1062));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1064 = ___ekey2;
		int32_t L_1065 = V_8;
		NullCheck(L_1064);
		int32_t L_1066 = L_1065;
		uint32_t L_1067 = (L_1064)->GetAt(static_cast<il2cpp_array_size_t>(L_1066));
		NullCheck(L_1059);
		(L_1059)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1063^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1067>>((int32_t)16))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1068 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1069 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1070 = V_6;
		NullCheck(L_1069);
		int32_t L_1071 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1070>>8))));
		uint8_t L_1072 = (L_1069)->GetAt(static_cast<il2cpp_array_size_t>(L_1071));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1073 = ___ekey2;
		int32_t L_1074 = V_8;
		NullCheck(L_1073);
		int32_t L_1075 = L_1074;
		uint32_t L_1076 = (L_1073)->GetAt(static_cast<il2cpp_array_size_t>(L_1075));
		NullCheck(L_1068);
		(L_1068)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1072^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1076>>8)))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1077 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1078 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1079 = V_5;
		NullCheck(L_1078);
		int32_t L_1080 = ((int32_t)((uint8_t)L_1079));
		uint8_t L_1081 = (L_1078)->GetAt(static_cast<il2cpp_array_size_t>(L_1080));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1082 = ___ekey2;
		int32_t L_1083 = V_8;
		int32_t L_1084 = L_1083;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1084, (int32_t)1));
		NullCheck(L_1082);
		int32_t L_1085 = L_1084;
		uint32_t L_1086 = (L_1082)->GetAt(static_cast<il2cpp_array_size_t>(L_1085));
		NullCheck(L_1077);
		(L_1077)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1081^(int32_t)((int32_t)((uint8_t)L_1086)))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1087 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1088 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1089 = V_5;
		NullCheck(L_1088);
		int32_t L_1090 = ((int32_t)((uint32_t)L_1089>>((int32_t)24)));
		uint8_t L_1091 = (L_1088)->GetAt(static_cast<il2cpp_array_size_t>(L_1090));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1092 = ___ekey2;
		int32_t L_1093 = V_8;
		NullCheck(L_1092);
		int32_t L_1094 = L_1093;
		uint32_t L_1095 = (L_1092)->GetAt(static_cast<il2cpp_array_size_t>(L_1094));
		NullCheck(L_1087);
		(L_1087)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1091^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1095>>((int32_t)24))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1096 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1097 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1098 = V_4;
		NullCheck(L_1097);
		int32_t L_1099 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1098>>((int32_t)16)))));
		uint8_t L_1100 = (L_1097)->GetAt(static_cast<il2cpp_array_size_t>(L_1099));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1101 = ___ekey2;
		int32_t L_1102 = V_8;
		NullCheck(L_1101);
		int32_t L_1103 = L_1102;
		uint32_t L_1104 = (L_1101)->GetAt(static_cast<il2cpp_array_size_t>(L_1103));
		NullCheck(L_1096);
		(L_1096)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1100^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1104>>((int32_t)16))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1105 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1106 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1107 = V_7;
		NullCheck(L_1106);
		int32_t L_1108 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1107>>8))));
		uint8_t L_1109 = (L_1106)->GetAt(static_cast<il2cpp_array_size_t>(L_1108));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1110 = ___ekey2;
		int32_t L_1111 = V_8;
		NullCheck(L_1110);
		int32_t L_1112 = L_1111;
		uint32_t L_1113 = (L_1110)->GetAt(static_cast<il2cpp_array_size_t>(L_1112));
		NullCheck(L_1105);
		(L_1105)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1109^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1113>>8)))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1114 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1115 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1116 = V_6;
		NullCheck(L_1115);
		int32_t L_1117 = ((int32_t)((uint8_t)L_1116));
		uint8_t L_1118 = (L_1115)->GetAt(static_cast<il2cpp_array_size_t>(L_1117));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1119 = ___ekey2;
		int32_t L_1120 = V_8;
		int32_t L_1121 = L_1120;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1121, (int32_t)1));
		NullCheck(L_1119);
		int32_t L_1122 = L_1121;
		uint32_t L_1123 = (L_1119)->GetAt(static_cast<il2cpp_array_size_t>(L_1122));
		NullCheck(L_1114);
		(L_1114)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1118^(int32_t)((int32_t)((uint8_t)L_1123)))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1124 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1125 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1126 = V_6;
		NullCheck(L_1125);
		int32_t L_1127 = ((int32_t)((uint32_t)L_1126>>((int32_t)24)));
		uint8_t L_1128 = (L_1125)->GetAt(static_cast<il2cpp_array_size_t>(L_1127));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1129 = ___ekey2;
		int32_t L_1130 = V_8;
		NullCheck(L_1129);
		int32_t L_1131 = L_1130;
		uint32_t L_1132 = (L_1129)->GetAt(static_cast<il2cpp_array_size_t>(L_1131));
		NullCheck(L_1124);
		(L_1124)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1128^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1132>>((int32_t)24))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1133 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1134 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1135 = V_5;
		NullCheck(L_1134);
		int32_t L_1136 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1135>>((int32_t)16)))));
		uint8_t L_1137 = (L_1134)->GetAt(static_cast<il2cpp_array_size_t>(L_1136));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1138 = ___ekey2;
		int32_t L_1139 = V_8;
		NullCheck(L_1138);
		int32_t L_1140 = L_1139;
		uint32_t L_1141 = (L_1138)->GetAt(static_cast<il2cpp_array_size_t>(L_1140));
		NullCheck(L_1133);
		(L_1133)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1137^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1141>>((int32_t)16))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1142 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1143 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1144 = V_4;
		NullCheck(L_1143);
		int32_t L_1145 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1144>>8))));
		uint8_t L_1146 = (L_1143)->GetAt(static_cast<il2cpp_array_size_t>(L_1145));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1147 = ___ekey2;
		int32_t L_1148 = V_8;
		NullCheck(L_1147);
		int32_t L_1149 = L_1148;
		uint32_t L_1150 = (L_1147)->GetAt(static_cast<il2cpp_array_size_t>(L_1149));
		NullCheck(L_1142);
		(L_1142)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1146^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1150>>8)))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1151 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1152 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1153 = V_7;
		NullCheck(L_1152);
		int32_t L_1154 = ((int32_t)((uint8_t)L_1153));
		uint8_t L_1155 = (L_1152)->GetAt(static_cast<il2cpp_array_size_t>(L_1154));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1156 = ___ekey2;
		int32_t L_1157 = V_8;
		int32_t L_1158 = L_1157;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1158, (int32_t)1));
		NullCheck(L_1156);
		int32_t L_1159 = L_1158;
		uint32_t L_1160 = (L_1156)->GetAt(static_cast<il2cpp_array_size_t>(L_1159));
		NullCheck(L_1151);
		(L_1151)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1155^(int32_t)((int32_t)((uint8_t)L_1160)))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1161 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1162 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1163 = V_7;
		NullCheck(L_1162);
		int32_t L_1164 = ((int32_t)((uint32_t)L_1163>>((int32_t)24)));
		uint8_t L_1165 = (L_1162)->GetAt(static_cast<il2cpp_array_size_t>(L_1164));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1166 = ___ekey2;
		int32_t L_1167 = V_8;
		NullCheck(L_1166);
		int32_t L_1168 = L_1167;
		uint32_t L_1169 = (L_1166)->GetAt(static_cast<il2cpp_array_size_t>(L_1168));
		NullCheck(L_1161);
		(L_1161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1165^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1169>>((int32_t)24))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1170 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1171 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1172 = V_6;
		NullCheck(L_1171);
		int32_t L_1173 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1172>>((int32_t)16)))));
		uint8_t L_1174 = (L_1171)->GetAt(static_cast<il2cpp_array_size_t>(L_1173));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1175 = ___ekey2;
		int32_t L_1176 = V_8;
		NullCheck(L_1175);
		int32_t L_1177 = L_1176;
		uint32_t L_1178 = (L_1175)->GetAt(static_cast<il2cpp_array_size_t>(L_1177));
		NullCheck(L_1170);
		(L_1170)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1174^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1178>>((int32_t)16))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1179 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1180 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1181 = V_5;
		NullCheck(L_1180);
		int32_t L_1182 = ((int32_t)((uint8_t)((int32_t)((uint32_t)L_1181>>8))));
		uint8_t L_1183 = (L_1180)->GetAt(static_cast<il2cpp_array_size_t>(L_1182));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1184 = ___ekey2;
		int32_t L_1185 = V_8;
		NullCheck(L_1184);
		int32_t L_1186 = L_1185;
		uint32_t L_1187 = (L_1184)->GetAt(static_cast<il2cpp_array_size_t>(L_1186));
		NullCheck(L_1179);
		(L_1179)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1183^(int32_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1187>>8)))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1188 = ___outdata1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1189 = ((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1190 = V_4;
		NullCheck(L_1189);
		int32_t L_1191 = ((int32_t)((uint8_t)L_1190));
		uint8_t L_1192 = (L_1189)->GetAt(static_cast<il2cpp_array_size_t>(L_1191));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1193 = ___ekey2;
		int32_t L_1194 = V_8;
		int32_t L_1195 = L_1194;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1195, (int32_t)1));
		NullCheck(L_1193);
		int32_t L_1196 = L_1195;
		uint32_t L_1197 = (L_1193)->GetAt(static_cast<il2cpp_array_size_t>(L_1196));
		NullCheck(L_1188);
		(L_1188)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1192^(int32_t)((int32_t)((uint8_t)L_1197)))))));
		return;
	}
}
// System.Void System.Security.Cryptography.AesTransform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesTransform__cctor_mAC6D46ED54345C2D23DFCA026C69029757222CFD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____0AA802CD6847EB893FE786B5EA5168B2FDCD7B93_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____0C4110BC17D746F018F47B49E0EB0D6590F69939_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____20733E1283D873EBE47133A95C233E11B76F5F11_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____21F4CBF8283FF1CAEB4A39316A97FC1D6DF1D35E_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____23DFDCA6F045D4257BF5AC8CB1CF2EFADAFE9B94_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____30A0358B25B1372DD598BB4B1AC56AD6B8F08A47_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____5B5DF5A459E902D96F7DB0FB235A25346CA85C5D_6_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____5BE411F1438EAEF33726D855E99011D5FECDDD4E_7_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_8_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____A02DD1D8604EA8EC2D2BDA717A93A4EE85F13E53_9_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____AE2F76ECEF8B08F0BC7EA95DCFE945E1727927C9_10_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____0AA802CD6847EB893FE786B5EA5168B2FDCD7B93_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->set_Rcon_15(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->set_SBox_16(L_4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____0C4110BC17D746F018F47B49E0EB0D6590F69939_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->set_iSBox_17(L_7);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_9 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_10 = L_9;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____30A0358B25B1372DD598BB4B1AC56AD6B8F08A47_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->set_T0_18(L_10);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_12 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_13 = L_12;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____AE2F76ECEF8B08F0BC7EA95DCFE945E1727927C9_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->set_T1_19(L_13);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_15 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_16 = L_15;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____23DFDCA6F045D4257BF5AC8CB1CF2EFADAFE9B94_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->set_T2_20(L_16);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_18 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_19 = L_18;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____5B5DF5A459E902D96F7DB0FB235A25346CA85C5D_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_19, L_20, /*hidden argument*/NULL);
		((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->set_T3_21(L_19);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_21 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_22 = L_21;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_23 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____A02DD1D8604EA8EC2D2BDA717A93A4EE85F13E53_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_22, L_23, /*hidden argument*/NULL);
		((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->set_iT0_22(L_22);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_24 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_25 = L_24;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_26 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____5BE411F1438EAEF33726D855E99011D5FECDDD4E_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_25, L_26, /*hidden argument*/NULL);
		((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->set_iT1_23(L_25);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_27 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_28 = L_27;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_29 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____20733E1283D873EBE47133A95C233E11B76F5F11_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_28, L_29, /*hidden argument*/NULL);
		((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->set_iT2_24(L_28);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_30 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_31 = L_30;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_32 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBA8E38B46CD663D2D6A08EF9F2CB1A18D264104A____21F4CBF8283FF1CAEB4A39316A97FC1D6DF1D35E_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_31, L_32, /*hidden argument*/NULL);
		((AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_tE2EE87C05E7D4E99575696F89584747C12DF727B_il2cpp_TypeInfo_var))->set_iT3_25(L_31);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper__ctor_m2770BB414919277B2CF522840B54819F5082CD80 (BitHelper_t2B67F0FEDA1C18626AA201BEA9490E52B87CB2F7 * __this, int32_t* ___bitArrayPtr0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t* L_0 = ___bitArrayPtr0;
		__this->set__arrayPtr_1((int32_t*)L_0);
		int32_t L_1 = ___length1;
		__this->set__length_0(L_1);
		__this->set__useStackAlloc_3((bool)1);
		return;
	}
}
// System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper__ctor_m7A8E43BE1D2A4ED086E708B6FFE693322FC9D2EB (BitHelper_t2B67F0FEDA1C18626AA201BEA9490E52B87CB2F7 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bitArray0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___bitArray0;
		__this->set__array_2(L_0);
		int32_t L_1 = ___length1;
		__this->set__length_0(L_1);
		return;
	}
}
// System.Void System.Collections.Generic.BitHelper::MarkBit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper_MarkBit_m1C6D787021BEA9D02DCA0762C09E5D443E04A86B (BitHelper_t2B67F0FEDA1C18626AA201BEA9490E52B87CB2F7 * __this, int32_t ___bitPosition0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___bitPosition0;
		V_0 = ((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)));
		int32_t L_1 = V_0;
		int32_t L_2 = __this->get__length_0();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_4 = ___bitPosition0;
		V_1 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4%(int32_t)((int32_t)32)))&(int32_t)((int32_t)31)))));
		bool L_5 = __this->get__useStackAlloc_3();
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		int32_t* L_6 = __this->get__arrayPtr_1();
		int32_t L_7 = V_0;
		int32_t* L_8 = (int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4))));
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = V_1;
		*((int32_t*)L_8) = (int32_t)((int32_t)((int32_t)L_9|(int32_t)L_10));
		return;
	}

IL_0035:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = __this->get__array_2();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)));
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_1;
		*((int32_t*)L_13) = (int32_t)((int32_t)((int32_t)L_14|(int32_t)L_15));
	}

IL_0046:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.BitHelper::IsMarked(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitHelper_IsMarked_m6036A81F50D820045D3F62E52D57098A332AB608 (BitHelper_t2B67F0FEDA1C18626AA201BEA9490E52B87CB2F7 * __this, int32_t ___bitPosition0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___bitPosition0;
		V_0 = ((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)));
		int32_t L_1 = V_0;
		int32_t L_2 = __this->get__length_0();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_4 = ___bitPosition0;
		V_1 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4%(int32_t)((int32_t)32)))&(int32_t)((int32_t)31)))));
		bool L_5 = __this->get__useStackAlloc_3();
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		int32_t* L_6 = __this->get__arrayPtr_1();
		int32_t L_7 = V_0;
		int32_t L_8 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4)))));
		int32_t L_9 = V_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)L_9))) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0036:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = __this->get__array_2();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = V_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_13&(int32_t)L_14))) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0044:
	{
		return (bool)0;
	}
}
// System.Int32 System.Collections.Generic.BitHelper::ToIntArrayLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitHelper_ToIntArrayLength_m32A0B1B014CB81891165AC325514784171C8E7B3 (int32_t ___n0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___n0;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		int32_t L_1 = ___n0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))/(int32_t)((int32_t)32))), (int32_t)1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = 0;
		RuntimeObject* L_2 = ___source0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0019:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			int32_t L_6 = V_0;
			int32_t L_7 = V_2;
			if (((int64_t)L_6 + (int64_t)L_7 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_6 + (int64_t)L_7 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5_RuntimeMethod_var);
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		}

IL_0024:
		{
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			bool L_9;
			L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0019;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x38, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			if (!L_10)
			{
				goto IL_0037;
			}
		}

IL_0031:
		{
			RuntimeObject* L_11 = V_1;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_0037:
		{
			IL2CPP_END_FINALLY(46)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = (bool)0;
		RuntimeObject* L_2 = ___source0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_001b:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_002d;
			}
		}

IL_0025:
		{
			int32_t L_7 = V_3;
			int32_t L_8 = V_0;
			if ((((int32_t)L_7) <= ((int32_t)L_8)))
			{
				goto IL_0031;
			}
		}

IL_0029:
		{
			int32_t L_9 = V_3;
			V_0 = L_9;
			goto IL_0031;
		}

IL_002d:
		{
			int32_t L_10 = V_3;
			V_0 = L_10;
			V_1 = (bool)1;
		}

IL_0031:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck(L_11);
			bool L_12;
			L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001b;
			}
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x45, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_2;
			if (!L_13)
			{
				goto IL_0044;
			}
		}

IL_003e:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_0044:
		{
			IL2CPP_END_FINALLY(59)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_004a:
	{
		Exception_t * L_17;
		L_17 = Error_NoElements_mB89E91246572F009281D79730950808F17C3F353(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Exception System.Linq.Error::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Linq.Error::MoreThanOneMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D0E978C2541B8A36DFB07E397656689CE9E713F);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, _stringLiteral9D0E978C2541B8A36DFB07E397656689CE9E713F, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Exception System.Linq.Error::NoElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7E78BE66617B9AE36B6A6E170E3545EE25C1D11);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, _stringLiteralB7E78BE66617B9AE36B6A6E170E3545EE25C1D11, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Exception System.Linq.Error::NoMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE68F97D6FE7BDE1580C3707638EA581299D01EDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, _stringLiteralE68F97D6FE7BDE1580C3707638EA581299D01EDE, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.ReaderWriterCount::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterCount__ctor_m0C083844BE7A2C4172B9684CF08A786C1E51874B (ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.ReaderWriterLockSlim::InitializeThreadCounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_InitializeThreadCounts_m256062BF3249D0A11A4A3F9BD625198B719C98AD (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		__this->set_upgradeLockOwnerId_10((-1));
		__this->set_writeLockOwnerId_11((-1));
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::.ctor(System.Threading.LockRecursionPolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim__ctor_m76201E97862C090097E879E3F10FAA8CD0ADF1A1 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, int32_t ___recursionPolicy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___recursionPolicy0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0011;
		}
	}
	{
		__this->set_fIsReentrant_0((bool)1);
	}

IL_0011:
	{
		ReaderWriterLockSlim_InitializeThreadCounts_m256062BF3249D0A11A4A3F9BD625198B719C98AD(__this, /*hidden argument*/NULL);
		__this->set_fNoWaiters_9((bool)1);
		int64_t L_1;
		L_1 = Interlocked_Increment_m23DCFD6F8418AC5C322DBE3AC1FB311AF3EDBF3B((int64_t*)(((ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_StaticFields*)il2cpp_codegen_static_fields_for(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_il2cpp_TypeInfo_var))->get_address_of_s_nextLockID_16()), /*hidden argument*/NULL);
		__this->set_lockID_17(L_1);
		return;
	}
}
// System.Boolean System.Threading.ReaderWriterLockSlim::IsRWEntryEmpty(System.Threading.ReaderWriterCount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_IsRWEntryEmpty_mC8DAC7CFE64A30203FF50C4823149F25FB15D116 (ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * ___rwc0, const RuntimeMethod* method)
{
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_0 = ___rwc0;
		NullCheck(L_0);
		int64_t L_1 = L_0->get_lockID_0();
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_2 = ___rwc0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_readercount_1();
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_4 = ___rwc0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_writercount_2();
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_6 = ___rwc0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_upgradecount_3();
		if (L_7)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean System.Threading.ReaderWriterLockSlim::IsRwHashEntryChanged(System.Threading.ReaderWriterCount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_IsRwHashEntryChanged_m3EDD34CB05C022D9A2852EA9BA753642D20A4617 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * ___lrwc0, const RuntimeMethod* method)
{
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_0 = ___lrwc0;
		NullCheck(L_0);
		int64_t L_1 = L_0->get_lockID_0();
		int64_t L_2 = __this->get_lockID_17();
		return (bool)((((int32_t)((((int64_t)L_1) == ((int64_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Threading.ReaderWriterCount System.Threading.ReaderWriterLockSlim::GetThreadRWCount(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, bool ___dontAllocate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * V_0 = NULL;
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * V_1 = NULL;
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_0 = ((ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_il2cpp_TypeInfo_var))->get_t_rwc_18();
		V_0 = L_0;
		V_1 = (ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D *)NULL;
		goto IL_0031;
	}

IL_000a:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_1 = V_0;
		NullCheck(L_1);
		int64_t L_2 = L_1->get_lockID_0();
		int64_t L_3 = __this->get_lockID_17();
		if ((!(((uint64_t)L_2) == ((uint64_t)L_3))))
		{
			goto IL_001a;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_4 = V_0;
		return L_4;
	}

IL_001a:
	{
		bool L_5 = ___dontAllocate0;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_6 = V_1;
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_7 = V_0;
		bool L_8;
		L_8 = ReaderWriterLockSlim_IsRWEntryEmpty_mC8DAC7CFE64A30203FF50C4823149F25FB15D116_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_9 = V_0;
		V_1 = L_9;
	}

IL_002a:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_10 = V_0;
		NullCheck(L_10);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_11 = L_10->get_next_4();
		V_0 = L_11;
	}

IL_0031:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_12 = V_0;
		if (L_12)
		{
			goto IL_000a;
		}
	}
	{
		bool L_13 = ___dontAllocate0;
		if (!L_13)
		{
			goto IL_0039;
		}
	}
	{
		return (ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D *)NULL;
	}

IL_0039:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_14 = V_1;
		if (L_14)
		{
			goto IL_0053;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_15 = (ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D *)il2cpp_codegen_object_new(ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D_il2cpp_TypeInfo_var);
		ReaderWriterCount__ctor_m0C083844BE7A2C4172B9684CF08A786C1E51874B(L_15, /*hidden argument*/NULL);
		V_1 = L_15;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_16 = V_1;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_17 = ((ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_il2cpp_TypeInfo_var))->get_t_rwc_18();
		NullCheck(L_16);
		L_16->set_next_4(L_17);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_18 = V_1;
		((ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_il2cpp_TypeInfo_var))->set_t_rwc_18(L_18);
	}

IL_0053:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_19 = V_1;
		int64_t L_20 = __this->get_lockID_17();
		NullCheck(L_19);
		L_19->set_lockID_0(L_20);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_21 = V_1;
		return L_21;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::EnterWriteLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_EnterWriteLock_m6906FE7058BCD5857E7036D763FA14A94D395386 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = ReaderWriterLockSlim_TryEnterWriteLock_mE8293BAF7A39EDB8E5C3C9F39BC6B404BC83C38F(__this, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterWriteLock_mE8293BAF7A39EDB8E5C3C9F39BC6B404BC83C38F (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___millisecondsTimeout0;
		TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  L_1;
		memset((&L_1), 0, sizeof(L_1));
		TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553((&L_1), L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = ReaderWriterLockSlim_TryEnterWriteLock_m8DC7B1653133775A79E6FDBE072DF63C8E6822C7(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Threading.ReaderWriterLockSlim/TimeoutTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterWriteLock_m8DC7B1653133775A79E6FDBE072DF63C8E6822C7 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  ___timeout0, const RuntimeMethod* method)
{
	{
		TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  L_0 = ___timeout0;
		bool L_1;
		L_1 = ReaderWriterLockSlim_TryEnterWriteLockCore_m92031DB0DAF78611332535E47CCC146C90B9706F(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLockCore(System.Threading.ReaderWriterLockSlim/TimeoutTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterWriteLockCore_m92031DB0DAF78611332535E47CCC146C90B9706F (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  ___timeout0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		bool L_0 = __this->get_fDisposed_27();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_TryEnterWriteLockCore_m92031DB0DAF78611332535E47CCC146C90B9706F_RuntimeMethod_var)));
	}

IL_000f:
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_2 = (bool)0;
		bool L_4 = __this->get_fIsReentrant_0();
		if (L_4)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_writeLockOwnerId_11();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_7;
		L_7 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral485C8998D53F77608ABEDAF04A4DBE853A80D357)), /*hidden argument*/NULL);
		LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 * L_8 = (LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014_il2cpp_TypeInfo_var)));
		LockRecursionException__ctor_mB938776505F72CC1357C12AE449572415E5B2341(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_TryEnterWriteLockCore_m92031DB0DAF78611332535E47CCC146C90B9706F_RuntimeMethod_var)));
	}

IL_003d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_upgradeLockOwnerId_10();
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0048;
		}
	}
	{
		V_2 = (bool)1;
	}

IL_0048:
	{
		ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline(__this, /*hidden argument*/NULL);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_11;
		L_11 = ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline(__this, (bool)1, /*hidden argument*/NULL);
		V_1 = L_11;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_12 = V_1;
		if (!L_12)
		{
			goto IL_00d1;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_readercount_1();
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_00d1;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral28BCDD3CA5E41255B6A2EBE02C50B3F4CE3093AA)), /*hidden argument*/NULL);
		LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 * L_16 = (LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014_il2cpp_TypeInfo_var)));
		LockRecursionException__ctor_mB938776505F72CC1357C12AE449572415E5B2341(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_TryEnterWriteLockCore_m92031DB0DAF78611332535E47CCC146C90B9706F_RuntimeMethod_var)));
	}

IL_0078:
	{
		ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline(__this, /*hidden argument*/NULL);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_17;
		L_17 = ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline(__this, (bool)0, /*hidden argument*/NULL);
		V_1 = L_17;
		int32_t L_18 = V_0;
		int32_t L_19 = __this->get_writeLockOwnerId_11();
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_00a5;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_20 = V_1;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_21 = L_20;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_writercount_2();
		NullCheck(L_21);
		L_21->set_writercount_2(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_00a5:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->get_upgradeLockOwnerId_10();
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_00b2;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_00d1;
	}

IL_00b2:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_readercount_1();
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00d1;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		String_t* L_27;
		L_27 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral28BCDD3CA5E41255B6A2EBE02C50B3F4CE3093AA)), /*hidden argument*/NULL);
		LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 * L_28 = (LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014_il2cpp_TypeInfo_var)));
		LockRecursionException__ctor_mB938776505F72CC1357C12AE449572415E5B2341(L_28, L_27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_TryEnterWriteLockCore_m92031DB0DAF78611332535E47CCC146C90B9706F_RuntimeMethod_var)));
	}

IL_00d1:
	{
		V_3 = 0;
	}

IL_00d3:
	{
		bool L_29;
		L_29 = ReaderWriterLockSlim_IsWriterAcquired_m9F14403D5E6BA8D9840274FFA9CA59E03FE9ADD9(__this, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00e6;
		}
	}
	{
		ReaderWriterLockSlim_SetWriterAcquired_m24C2FFF43CE66EAF4E5434B345B1858EE92E39E2(__this, /*hidden argument*/NULL);
		goto IL_01c6;
	}

IL_00e6:
	{
		bool L_30 = V_2;
		if (!L_30)
		{
			goto IL_012e;
		}
	}
	{
		uint32_t L_31;
		L_31 = ReaderWriterLockSlim_GetNumReaders_mC51603FD596E2B077422FA9331023A5D87DD3D2D(__this, /*hidden argument*/NULL);
		V_4 = L_31;
		uint32_t L_32 = V_4;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_0101;
		}
	}
	{
		ReaderWriterLockSlim_SetWriterAcquired_m24C2FFF43CE66EAF4E5434B345B1858EE92E39E2(__this, /*hidden argument*/NULL);
		goto IL_01c6;
	}

IL_0101:
	{
		uint32_t L_33 = V_4;
		if ((!(((uint32_t)L_33) == ((uint32_t)2))))
		{
			goto IL_012e;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_34 = V_1;
		if (!L_34)
		{
			goto IL_012e;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_35 = V_1;
		bool L_36;
		L_36 = ReaderWriterLockSlim_IsRwHashEntryChanged_m3EDD34CB05C022D9A2852EA9BA753642D20A4617(__this, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_011a;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_37;
		L_37 = ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline(__this, (bool)0, /*hidden argument*/NULL);
		V_1 = L_37;
	}

IL_011a:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_readercount_1();
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_012e;
		}
	}
	{
		ReaderWriterLockSlim_SetWriterAcquired_m24C2FFF43CE66EAF4E5434B345B1858EE92E39E2(__this, /*hidden argument*/NULL);
		goto IL_01c6;
	}

IL_012e:
	{
		int32_t L_40 = V_3;
		if ((((int32_t)L_40) >= ((int32_t)((int32_t)20))))
		{
			goto IL_0159;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		bool L_41;
		L_41 = TimeoutTracker_get_IsExpired_mE4ED4EDAA3A57C06198F451E21D347640DB1EA38((TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B *)(&___timeout0), /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0144;
		}
	}
	{
		return (bool)0;
	}

IL_0144:
	{
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		int32_t L_43 = V_3;
		ReaderWriterLockSlim_SpinWait_m4B2AD68AFAF0D0D8C4FACC6EE090CAA5AE7A8B00(L_43, /*hidden argument*/NULL);
		ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline(__this, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_0159:
	{
		bool L_44 = V_2;
		if (!L_44)
		{
			goto IL_0191;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_45 = __this->get_waitUpgradeEvent_15();
		if (L_45)
		{
			goto IL_0176;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** L_46 = __this->get_address_of_waitUpgradeEvent_15();
		ReaderWriterLockSlim_LazyCreateEvent_m02E55386C7E31D1CB3FC38C5D2E1EB89EB617644(__this, (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C **)L_46, (bool)1, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_0176:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_47 = __this->get_waitUpgradeEvent_15();
		uint32_t* L_48 = __this->get_address_of_numWriteUpgradeWaiters_7();
		TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  L_49 = ___timeout0;
		bool L_50;
		L_50 = ReaderWriterLockSlim_WaitOnEvent_m6C6EB73C0C8D57FF14A6F1EBE8A6756407903FF1(__this, L_47, (uint32_t*)L_48, L_49, (bool)1, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_00d3;
		}
	}
	{
		return (bool)0;
	}

IL_0191:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_51 = __this->get_writeEvent_12();
		if (L_51)
		{
			goto IL_01ab;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** L_52 = __this->get_address_of_writeEvent_12();
		ReaderWriterLockSlim_LazyCreateEvent_m02E55386C7E31D1CB3FC38C5D2E1EB89EB617644(__this, (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C **)L_52, (bool)1, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_01ab:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_53 = __this->get_writeEvent_12();
		uint32_t* L_54 = __this->get_address_of_numWriteWaiters_5();
		TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  L_55 = ___timeout0;
		bool L_56;
		L_56 = ReaderWriterLockSlim_WaitOnEvent_m6C6EB73C0C8D57FF14A6F1EBE8A6756407903FF1(__this, L_53, (uint32_t*)L_54, L_55, (bool)1, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_00d3;
		}
	}
	{
		return (bool)0;
	}

IL_01c6:
	{
		bool L_57 = __this->get_fIsReentrant_0();
		if (!L_57)
		{
			goto IL_01ed;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_58 = V_1;
		bool L_59;
		L_59 = ReaderWriterLockSlim_IsRwHashEntryChanged_m3EDD34CB05C022D9A2852EA9BA753642D20A4617(__this, L_58, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_01df;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_60;
		L_60 = ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline(__this, (bool)0, /*hidden argument*/NULL);
		V_1 = L_60;
	}

IL_01df:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_61 = V_1;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_62 = L_61;
		NullCheck(L_62);
		int32_t L_63 = L_62->get_writercount_2();
		NullCheck(L_62);
		L_62->set_writercount_2(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1)));
	}

IL_01ed:
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		int32_t L_64 = V_0;
		__this->set_writeLockOwnerId_11(L_64);
		return (bool)1;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::EnterUpgradeableReadLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_EnterUpgradeableReadLock_m49E33B0F164253250D2CE7D4F369365D4A278319 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = ReaderWriterLockSlim_TryEnterUpgradeableReadLock_mF0F2532E93D3821AD35647FE1DA56C2FEF01FDAA(__this, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterUpgradeableReadLock_mF0F2532E93D3821AD35647FE1DA56C2FEF01FDAA (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___millisecondsTimeout0;
		TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  L_1;
		memset((&L_1), 0, sizeof(L_1));
		TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553((&L_1), L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = ReaderWriterLockSlim_TryEnterUpgradeableReadLock_mE362E867B7E04114EF8BECDC6FF15D65C7D01C13(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLock(System.Threading.ReaderWriterLockSlim/TimeoutTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterUpgradeableReadLock_mE362E867B7E04114EF8BECDC6FF15D65C7D01C13 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  ___timeout0, const RuntimeMethod* method)
{
	{
		TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  L_0 = ___timeout0;
		bool L_1;
		L_1 = ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore_mC3C1C2217C8FA13B0FA3C6C29C12052859A1B49B(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLockCore(System.Threading.ReaderWriterLockSlim/TimeoutTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore_mC3C1C2217C8FA13B0FA3C6C29C12052859A1B49B (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  ___timeout0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * V_1 = NULL;
	int32_t V_2 = 0;
	{
		bool L_0 = __this->get_fDisposed_27();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore_mC3C1C2217C8FA13B0FA3C6C29C12052859A1B49B_RuntimeMethod_var)));
	}

IL_000f:
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = __this->get_fIsReentrant_0();
		if (L_4)
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_upgradeLockOwnerId_10();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_7;
		L_7 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8822CE4A43FFFD3B2CC49B9D5FC1B66F0CCBF3B1)), /*hidden argument*/NULL);
		LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 * L_8 = (LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014_il2cpp_TypeInfo_var)));
		LockRecursionException__ctor_mB938776505F72CC1357C12AE449572415E5B2341(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore_mC3C1C2217C8FA13B0FA3C6C29C12052859A1B49B_RuntimeMethod_var)));
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_writeLockOwnerId_11();
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_11;
		L_11 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DC62F421ABC9EEBA3ED23A09F410EA41A1F72C6)), /*hidden argument*/NULL);
		LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 * L_12 = (LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014_il2cpp_TypeInfo_var)));
		LockRecursionException__ctor_mB938776505F72CC1357C12AE449572415E5B2341(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore_mC3C1C2217C8FA13B0FA3C6C29C12052859A1B49B_RuntimeMethod_var)));
	}

IL_0054:
	{
		ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline(__this, /*hidden argument*/NULL);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_13;
		L_13 = ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline(__this, (bool)1, /*hidden argument*/NULL);
		V_1 = L_13;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_14 = V_1;
		if (!L_14)
		{
			goto IL_011a;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_readercount_1();
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_011a;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84A266738245DD942C30B2FC8963EC80C662B538)), /*hidden argument*/NULL);
		LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 * L_18 = (LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014_il2cpp_TypeInfo_var)));
		LockRecursionException__ctor_mB938776505F72CC1357C12AE449572415E5B2341(L_18, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore_mC3C1C2217C8FA13B0FA3C6C29C12052859A1B49B_RuntimeMethod_var)));
	}

IL_008a:
	{
		ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline(__this, /*hidden argument*/NULL);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_19;
		L_19 = ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline(__this, (bool)0, /*hidden argument*/NULL);
		V_1 = L_19;
		int32_t L_20 = V_0;
		int32_t L_21 = __this->get_upgradeLockOwnerId_10();
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_00b7;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_22 = V_1;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_upgradecount_3();
		NullCheck(L_23);
		L_23->set_upgradecount_3(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_00b7:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = __this->get_writeLockOwnerId_11();
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_00fb;
		}
	}
	{
		uint32_t L_27 = __this->get_owners_21();
		__this->set_owners_21(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		int32_t L_28 = V_0;
		__this->set_upgradeLockOwnerId_10(L_28);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_29 = V_1;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_30 = L_29;
		NullCheck(L_30);
		int32_t L_31 = L_30->get_upgradecount_3();
		NullCheck(L_30);
		L_30->set_upgradecount_3(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_readercount_1();
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		__this->set_fUpgradeThreadHoldingRead_19((bool)1);
	}

IL_00f3:
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_00fb:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_readercount_1();
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_011a;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		String_t* L_36;
		L_36 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84A266738245DD942C30B2FC8963EC80C662B538)), /*hidden argument*/NULL);
		LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 * L_37 = (LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LockRecursionException_tA4B541F6B8DABF4D294304DF7B70F547C8502014_il2cpp_TypeInfo_var)));
		LockRecursionException__ctor_mB938776505F72CC1357C12AE449572415E5B2341(L_37, L_36, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore_mC3C1C2217C8FA13B0FA3C6C29C12052859A1B49B_RuntimeMethod_var)));
	}

IL_011a:
	{
		V_2 = 0;
	}

IL_011c:
	{
		int32_t L_38 = __this->get_upgradeLockOwnerId_10();
		if ((!(((uint32_t)L_38) == ((uint32_t)(-1)))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_39 = __this->get_owners_21();
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)268435454)))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_40 = __this->get_owners_21();
		__this->set_owners_21(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)));
		int32_t L_41 = V_0;
		__this->set_upgradeLockOwnerId_10(L_41);
		goto IL_01a3;
	}

IL_0149:
	{
		int32_t L_42 = V_2;
		if ((((int32_t)L_42) >= ((int32_t)((int32_t)20))))
		{
			goto IL_0171;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		bool L_43;
		L_43 = TimeoutTracker_get_IsExpired_mE4ED4EDAA3A57C06198F451E21D347640DB1EA38((TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B *)(&___timeout0), /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_015f;
		}
	}
	{
		return (bool)0;
	}

IL_015f:
	{
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		int32_t L_45 = V_2;
		ReaderWriterLockSlim_SpinWait_m4B2AD68AFAF0D0D8C4FACC6EE090CAA5AE7A8B00(L_45, /*hidden argument*/NULL);
		ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline(__this, /*hidden argument*/NULL);
		goto IL_011c;
	}

IL_0171:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_46 = __this->get_upgradeEvent_14();
		if (L_46)
		{
			goto IL_0188;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** L_47 = __this->get_address_of_upgradeEvent_14();
		ReaderWriterLockSlim_LazyCreateEvent_m02E55386C7E31D1CB3FC38C5D2E1EB89EB617644(__this, (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C **)L_47, (bool)1, /*hidden argument*/NULL);
		goto IL_011c;
	}

IL_0188:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_48 = __this->get_upgradeEvent_14();
		uint32_t* L_49 = __this->get_address_of_numUpgradeWaiters_8();
		TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  L_50 = ___timeout0;
		bool L_51;
		L_51 = ReaderWriterLockSlim_WaitOnEvent_m6C6EB73C0C8D57FF14A6F1EBE8A6756407903FF1(__this, L_48, (uint32_t*)L_49, L_50, (bool)0, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_011c;
		}
	}
	{
		return (bool)0;
	}

IL_01a3:
	{
		bool L_52 = __this->get_fIsReentrant_0();
		if (!L_52)
		{
			goto IL_01ca;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_53 = V_1;
		bool L_54;
		L_54 = ReaderWriterLockSlim_IsRwHashEntryChanged_m3EDD34CB05C022D9A2852EA9BA753642D20A4617(__this, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_01bc;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_55;
		L_55 = ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline(__this, (bool)0, /*hidden argument*/NULL);
		V_1 = L_55;
	}

IL_01bc:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_56 = V_1;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_57 = L_56;
		NullCheck(L_57);
		int32_t L_58 = L_57->get_upgradecount_3();
		NullCheck(L_57);
		L_57->set_upgradecount_3(((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1)));
	}

IL_01ca:
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::ExitWriteLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ExitWriteLock_m2A49859BD012D6C7FCC58A7C37C3702B8C761BE2 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * G_B6_0 = NULL;
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * G_B5_0 = NULL;
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * G_B8_0 = NULL;
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * G_B7_0 = NULL;
	{
		bool L_0 = __this->get_fIsReentrant_0();
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_writeLockOwnerId_11();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_4;
		L_4 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10C4AECF4C2A9921D7FDB1EEA6237F828B265648)), /*hidden argument*/NULL);
		SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D * L_5 = (SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D_il2cpp_TypeInfo_var)));
		SynchronizationLockException__ctor_m29B6831D6D5BC3D9B35521AFC400358467A4CA2E(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_ExitWriteLock_m2A49859BD012D6C7FCC58A7C37C3702B8C761BE2_RuntimeMethod_var)));
	}

IL_002a:
	{
		ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline(__this, /*hidden argument*/NULL);
		goto IL_0094;
	}

IL_0032:
	{
		ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline(__this, /*hidden argument*/NULL);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_6;
		L_6 = ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline(__this, (bool)0, /*hidden argument*/NULL);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_0058;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10C4AECF4C2A9921D7FDB1EEA6237F828B265648)), /*hidden argument*/NULL);
		SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D * L_9 = (SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D_il2cpp_TypeInfo_var)));
		SynchronizationLockException__ctor_m29B6831D6D5BC3D9B35521AFC400358467A4CA2E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_ExitWriteLock_m2A49859BD012D6C7FCC58A7C37C3702B8C761BE2_RuntimeMethod_var)));
	}

IL_0058:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_10 = G_B6_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_writercount_2();
		G_B7_0 = L_10;
		if ((((int32_t)L_11) >= ((int32_t)1)))
		{
			G_B8_0 = L_10;
			goto IL_0077;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10C4AECF4C2A9921D7FDB1EEA6237F828B265648)), /*hidden argument*/NULL);
		SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D * L_13 = (SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D_il2cpp_TypeInfo_var)));
		SynchronizationLockException__ctor_m29B6831D6D5BC3D9B35521AFC400358467A4CA2E(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_ExitWriteLock_m2A49859BD012D6C7FCC58A7C37C3702B8C761BE2_RuntimeMethod_var)));
	}

IL_0077:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_14 = G_B8_0;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_writercount_2();
		NullCheck(L_15);
		L_15->set_writercount_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)));
		NullCheck(L_14);
		int32_t L_17 = L_14->get_writercount_2();
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		return;
	}

IL_0094:
	{
		ReaderWriterLockSlim_ClearWriterAcquired_m81A620F80C7AFCF5E4AC1DAB2F2A5B262E42AFD8(__this, /*hidden argument*/NULL);
		__this->set_writeLockOwnerId_11((-1));
		ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaiters_m203B2A315D7812546CE39C84789145491C7729C5(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::ExitUpgradeableReadLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ExitUpgradeableReadLock_m870A35845A911065A8897A68EB1F9C28C08E38DE (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * G_B6_0 = NULL;
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * G_B5_0 = NULL;
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * G_B8_0 = NULL;
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * G_B7_0 = NULL;
	{
		bool L_0 = __this->get_fIsReentrant_0();
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_upgradeLockOwnerId_10();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_4;
		L_4 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1E10561E358BF2699823096E8ABA5826AB9E732)), /*hidden argument*/NULL);
		SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D * L_5 = (SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D_il2cpp_TypeInfo_var)));
		SynchronizationLockException__ctor_m29B6831D6D5BC3D9B35521AFC400358467A4CA2E(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_ExitUpgradeableReadLock_m870A35845A911065A8897A68EB1F9C28C08E38DE_RuntimeMethod_var)));
	}

IL_002a:
	{
		ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline(__this, /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_0032:
	{
		ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline(__this, /*hidden argument*/NULL);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_6;
		L_6 = ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline(__this, (bool)1, /*hidden argument*/NULL);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_0058;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1E10561E358BF2699823096E8ABA5826AB9E732)), /*hidden argument*/NULL);
		SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D * L_9 = (SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D_il2cpp_TypeInfo_var)));
		SynchronizationLockException__ctor_m29B6831D6D5BC3D9B35521AFC400358467A4CA2E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_ExitUpgradeableReadLock_m870A35845A911065A8897A68EB1F9C28C08E38DE_RuntimeMethod_var)));
	}

IL_0058:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_10 = G_B6_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_upgradecount_3();
		G_B7_0 = L_10;
		if ((((int32_t)L_11) >= ((int32_t)1)))
		{
			G_B8_0 = L_10;
			goto IL_0077;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1E10561E358BF2699823096E8ABA5826AB9E732)), /*hidden argument*/NULL);
		SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D * L_13 = (SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D_il2cpp_TypeInfo_var)));
		SynchronizationLockException__ctor_m29B6831D6D5BC3D9B35521AFC400358467A4CA2E(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_ExitUpgradeableReadLock_m870A35845A911065A8897A68EB1F9C28C08E38DE_RuntimeMethod_var)));
	}

IL_0077:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_14 = G_B8_0;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_upgradecount_3();
		NullCheck(L_15);
		L_15->set_upgradecount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)));
		NullCheck(L_14);
		int32_t L_17 = L_14->get_upgradecount_3();
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		return;
	}

IL_0094:
	{
		__this->set_fUpgradeThreadHoldingRead_19((bool)0);
	}

IL_009b:
	{
		uint32_t L_18 = __this->get_owners_21();
		__this->set_owners_21(((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)));
		__this->set_upgradeLockOwnerId_10((-1));
		ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaiters_m203B2A315D7812546CE39C84789145491C7729C5(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_LazyCreateEvent_m02E55386C7E31D1CB3FC38C5D2E1EB89EB617644 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** ___waitEvent0, bool ___makeAutoResetEvent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * V_0 = NULL;
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		bool L_0 = ___makeAutoResetEvent1;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * L_1 = (AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D *)il2cpp_codegen_object_new(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m72D2A390415B58E10CA21E260881C88E50D9F35C(L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0019;
	}

IL_0012:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_2 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_2, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0019:
	{
		ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline(__this, /*hidden argument*/NULL);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** L_3 = ___waitEvent0;
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_4 = *((EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C **)L_3);
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** L_5 = ___waitEvent0;
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_6 = V_0;
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_6);
		return;
	}

IL_0027:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Threading.WaitHandle::Close() */, L_7);
		return;
	}
}
// System.Boolean System.Threading.ReaderWriterLockSlim::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Threading.ReaderWriterLockSlim/TimeoutTracker,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_WaitOnEvent_m6C6EB73C0C8D57FF14A6F1EBE8A6756407903FF1 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___waitEvent0, uint32_t* ___numWaiters1, TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B  ___timeout2, bool ___isWriteWaiter3, const RuntimeMethod* method)
{
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_0 = ___waitEvent0;
		NullCheck(L_0);
		bool L_1;
		L_1 = EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30(L_0, /*hidden argument*/NULL);
		uint32_t* L_2 = ___numWaiters1;
		uint32_t* L_3 = ___numWaiters1;
		int32_t L_4 = *((uint32_t*)L_3);
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		__this->set_fNoWaiters_9((bool)0);
		uint32_t L_5 = __this->get_numWriteWaiters_5();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		ReaderWriterLockSlim_SetWritersWaiting_m0E15480965179DBE2CF352BD140188DB5359DF5C(__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		uint32_t L_6 = __this->get_numWriteUpgradeWaiters_7();
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		ReaderWriterLockSlim_SetUpgraderWaiting_mF6E393FE0C46184DF6A1B1B8F2EFBD40A307827F(__this, /*hidden argument*/NULL);
	}

IL_0032:
	{
		V_0 = (bool)0;
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_7 = ___waitEvent0;
		int32_t L_8;
		L_8 = TimeoutTracker_get_RemainingMilliseconds_m2DF873714961B9BED784F45364703221E4259F04((TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B *)(&___timeout2), /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_7, L_8);
		V_0 = L_9;
		IL2CPP_LEAVE(0xAF, FINALLY_004a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		{
			ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline(__this, /*hidden argument*/NULL);
			uint32_t* L_10 = ___numWaiters1;
			uint32_t* L_11 = ___numWaiters1;
			int32_t L_12 = *((uint32_t*)L_11);
			*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
			uint32_t L_13 = __this->get_numWriteWaiters_5();
			if (L_13)
			{
				goto IL_007d;
			}
		}

IL_005e:
		{
			uint32_t L_14 = __this->get_numWriteUpgradeWaiters_7();
			if (L_14)
			{
				goto IL_007d;
			}
		}

IL_0066:
		{
			uint32_t L_15 = __this->get_numUpgradeWaiters_8();
			if (L_15)
			{
				goto IL_007d;
			}
		}

IL_006e:
		{
			uint32_t L_16 = __this->get_numReadWaiters_6();
			if (L_16)
			{
				goto IL_007d;
			}
		}

IL_0076:
		{
			__this->set_fNoWaiters_9((bool)1);
		}

IL_007d:
		{
			uint32_t L_17 = __this->get_numWriteWaiters_5();
			if (L_17)
			{
				goto IL_008b;
			}
		}

IL_0085:
		{
			ReaderWriterLockSlim_ClearWritersWaiting_m97456CAD2756BAD28B6C0EF9B42E60BE7A35D669(__this, /*hidden argument*/NULL);
		}

IL_008b:
		{
			uint32_t L_18 = __this->get_numWriteUpgradeWaiters_7();
			if (L_18)
			{
				goto IL_0099;
			}
		}

IL_0093:
		{
			ReaderWriterLockSlim_ClearUpgraderWaiting_m85BBABDCA1A01D201683926A892CD4F75EAAA44A(__this, /*hidden argument*/NULL);
		}

IL_0099:
		{
			bool L_19 = V_0;
			if (L_19)
			{
				goto IL_00ae;
			}
		}

IL_009c:
		{
			bool L_20 = ___isWriteWaiter3;
			if (!L_20)
			{
				goto IL_00a8;
			}
		}

IL_00a0:
		{
			ReaderWriterLockSlim_ExitAndWakeUpAppropriateReadWaiters_mA0AA94088046F5DFAA395A193C3C45D3D2086389(__this, /*hidden argument*/NULL);
			goto IL_00ae;
		}

IL_00a8:
		{
			ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		}

IL_00ae:
		{
			IL2CPP_END_FINALLY(74)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAF, IL_00af)
	}

IL_00af:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaiters_m203B2A315D7812546CE39C84789145491C7729C5 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_fNoWaiters_9();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		return;
	}

IL_000f:
	{
		ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaitersPreferringWriters_mDE8BD2C760A17C2045AE43994C0D7E85AB316D5D(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaitersPreferringWriters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaitersPreferringWriters_mDE8BD2C760A17C2045AE43994C0D7E85AB316D5D (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = ReaderWriterLockSlim_GetNumReaders_mC51603FD596E2B077422FA9331023A5D87DD3D2D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = __this->get_fIsReentrant_0();
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		uint32_t L_2 = __this->get_numWriteUpgradeWaiters_7();
		if ((!(((uint32_t)L_2) > ((uint32_t)0))))
		{
			goto IL_0037;
		}
	}
	{
		bool L_3 = __this->get_fUpgradeThreadHoldingRead_19();
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0037;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_5 = __this->get_waitUpgradeEvent_15();
		NullCheck(L_5);
		bool L_6;
		L_6 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_5, /*hidden argument*/NULL);
		return;
	}

IL_0037:
	{
		uint32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_8 = __this->get_numWriteUpgradeWaiters_7();
		if ((!(((uint32_t)L_8) > ((uint32_t)0))))
		{
			goto IL_0057;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_9 = __this->get_waitUpgradeEvent_15();
		NullCheck(L_9);
		bool L_10;
		L_10 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_9, /*hidden argument*/NULL);
		return;
	}

IL_0057:
	{
		uint32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_12 = __this->get_numWriteWaiters_5();
		if ((!(((uint32_t)L_12) > ((uint32_t)0))))
		{
			goto IL_0076;
		}
	}
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_13 = __this->get_writeEvent_12();
		NullCheck(L_13);
		bool L_14;
		L_14 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_13, /*hidden argument*/NULL);
		return;
	}

IL_0076:
	{
		ReaderWriterLockSlim_ExitAndWakeUpAppropriateReadWaiters_mA0AA94088046F5DFAA395A193C3C45D3D2086389(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateReadWaiters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ExitAndWakeUpAppropriateReadWaiters_mA0AA94088046F5DFAA395A193C3C45D3D2086389 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	{
		uint32_t L_0 = __this->get_numWriteWaiters_5();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_1 = __this->get_numWriteUpgradeWaiters_7();
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->get_fNoWaiters_9();
		if (!L_2)
		{
			goto IL_001f;
		}
	}

IL_0018:
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		return;
	}

IL_001f:
	{
		uint32_t L_3 = __this->get_numReadWaiters_6();
		V_0 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		uint32_t L_4 = __this->get_numUpgradeWaiters_8();
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_5 = __this->get_upgradeLockOwnerId_10();
		G_B7_0 = ((((int32_t)L_5) == ((int32_t)(-1)))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B7_0 = 0;
	}

IL_003d:
	{
		ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8(__this, /*hidden argument*/NULL);
		bool L_6 = V_0;
		G_B8_0 = G_B7_0;
		if (!L_6)
		{
			G_B9_0 = G_B7_0;
			goto IL_0052;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_7 = __this->get_readEvent_13();
		NullCheck(L_7);
		bool L_8;
		L_8 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_7, /*hidden argument*/NULL);
		G_B9_0 = G_B8_0;
	}

IL_0052:
	{
		if (!G_B9_0)
		{
			goto IL_0060;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_9 = __this->get_upgradeEvent_14();
		NullCheck(L_9);
		bool L_10;
		L_10 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_9, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Boolean System.Threading.ReaderWriterLockSlim::IsWriterAcquired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_IsWriterAcquired_m9F14403D5E6BA8D9840274FFA9CA59E03FE9ADD9 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_owners_21();
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)-1073741825)))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::SetWriterAcquired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_SetWriterAcquired_m24C2FFF43CE66EAF4E5434B345B1858EE92E39E2 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_owners_21();
		__this->set_owners_21(((int32_t)((int32_t)L_0|(int32_t)((int32_t)-2147483648LL))));
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::ClearWriterAcquired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ClearWriterAcquired_m81A620F80C7AFCF5E4AC1DAB2F2A5B262E42AFD8 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_owners_21();
		__this->set_owners_21(((int32_t)((int32_t)L_0&(int32_t)((int32_t)2147483647LL))));
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::SetWritersWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_SetWritersWaiting_m0E15480965179DBE2CF352BD140188DB5359DF5C (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_owners_21();
		__this->set_owners_21(((int32_t)((int32_t)L_0|(int32_t)((int32_t)1073741824))));
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::ClearWritersWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ClearWritersWaiting_m97456CAD2756BAD28B6C0EF9B42E60BE7A35D669 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_owners_21();
		__this->set_owners_21(((int32_t)((int32_t)L_0&(int32_t)((int32_t)-1073741825))));
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::SetUpgraderWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_SetUpgraderWaiting_mF6E393FE0C46184DF6A1B1B8F2EFBD40A307827F (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_owners_21();
		__this->set_owners_21(((int32_t)((int32_t)L_0|(int32_t)((int32_t)536870912))));
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::ClearUpgraderWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ClearUpgraderWaiting_m85BBABDCA1A01D201683926A892CD4F75EAAA44A (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_owners_21();
		__this->set_owners_21(((int32_t)((int32_t)L_0&(int32_t)((int32_t)-536870913))));
		return;
	}
}
// System.UInt32 System.Threading.ReaderWriterLockSlim::GetNumReaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ReaderWriterLockSlim_GetNumReaders_mC51603FD596E2B077422FA9331023A5D87DD3D2D (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_owners_21();
		return ((int32_t)((int32_t)L_0&(int32_t)((int32_t)268435455)));
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of_myLock_1();
		int32_t L_1;
		L_1 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)L_0, 1, 0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ReaderWriterLockSlim_EnterMyLockSpin_mC63264D1309E935E22E6E2BFCAD04EAB8A19AE3C(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLockSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_EnterMyLockSpin_mC63264D1309E935E22E6E2BFCAD04EAB8A19AE3C (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Environment_get_ProcessorCount_m32354B9724A21AE041AC75C0E470687E33B93D33(/*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
	}

IL_0008:
	{
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)10))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = V_1;
		Thread_SpinWait_m6276C02E66DD83A83D5F39E2B20411B8CBA33673(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)20), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)))), /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_001e:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)15))))
		{
			goto IL_002b;
		}
	}
	{
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(0, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_002b:
	{
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(1, /*hidden argument*/NULL);
	}

IL_0031:
	{
		int32_t L_5 = __this->get_myLock_1();
		if (L_5)
		{
			goto IL_0049;
		}
	}
	{
		int32_t* L_6 = __this->get_address_of_myLock_1();
		int32_t L_7;
		L_7 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)L_6, 1, 0, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		goto IL_0008;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::ExitMyLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ExitMyLock_m4D09639AB6AA1E1FEF2BAEA70F3368B1DB88C6A8 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of_myLock_1();
		VolatileWrite((int32_t*)L_0, 0);
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::SpinWait(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_SpinWait_m4B2AD68AFAF0D0D8C4FACC6EE090CAA5AE7A8B00 (int32_t ___SpinCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___SpinCount0;
		if ((((int32_t)L_0) >= ((int32_t)5)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1;
		L_1 = Environment_get_ProcessorCount_m32354B9724A21AE041AC75C0E470687E33B93D33(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___SpinCount0;
		Thread_SpinWait_m6276C02E66DD83A83D5F39E2B20411B8CBA33673(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)20), (int32_t)L_2)), /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___SpinCount0;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)17))))
		{
			goto IL_0022;
		}
	}
	{
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(0, /*hidden argument*/NULL);
		return;
	}

IL_0022:
	{
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_Dispose_m342639E5C3D64460ADC87ED495F4FD43B8C57A7C (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		ReaderWriterLockSlim_Dispose_mDA9910A42284308F6EA8F8A294FF52AC4E05699E(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ReaderWriterLockSlim::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_Dispose_mDA9910A42284308F6EA8F8A294FF52AC4E05699E (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_00d3;
		}
	}
	{
		bool L_1 = __this->get_fDisposed_27();
		if (L_1)
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_2;
		L_2 = ReaderWriterLockSlim_get_WaitingReadCount_m7ABA9E4099E3A845BA69B2DE31F1620468A96168_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ReaderWriterLockSlim_get_WaitingUpgradeCount_m6427A931CE9CD0A0A759ECE9FB89A2953D53F679_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4;
		L_4 = ReaderWriterLockSlim_get_WaitingWriteCount_m4C34DCD34734878CF89D94EFAED6772AC5C803EE_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}

IL_002c:
	{
		String_t* L_5;
		L_5 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDCB7866DEDA66D0DAAD8C519AF9693DB97A9BF28)), /*hidden argument*/NULL);
		SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D * L_6 = (SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D_il2cpp_TypeInfo_var)));
		SynchronizationLockException__ctor_m29B6831D6D5BC3D9B35521AFC400358467A4CA2E(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_Dispose_mDA9910A42284308F6EA8F8A294FF52AC4E05699E_RuntimeMethod_var)));
	}

IL_003c:
	{
		bool L_7;
		L_7 = ReaderWriterLockSlim_get_IsReadLockHeld_m7DCD5FD5F491F1F19B202A8CE4C9609E6FD54B78(__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0054;
		}
	}
	{
		bool L_8;
		L_8 = ReaderWriterLockSlim_get_IsUpgradeableReadLockHeld_mCD549D784C4E29D93D7D1DC7F87D07BBD2B054E4(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		bool L_9;
		L_9 = ReaderWriterLockSlim_get_IsWriteLockHeld_m76BAF63331AE3EA08A46001A77C3B8ED95E6FE25(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}

IL_0054:
	{
		String_t* L_10;
		L_10 = SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDCB7866DEDA66D0DAAD8C519AF9693DB97A9BF28)), /*hidden argument*/NULL);
		SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D * L_11 = (SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SynchronizationLockException_tC8758646B797B6FAE8FBE15A47D17A2A2C597E6D_il2cpp_TypeInfo_var)));
		SynchronizationLockException__ctor_m29B6831D6D5BC3D9B35521AFC400358467A4CA2E(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockSlim_Dispose_mDA9910A42284308F6EA8F8A294FF52AC4E05699E_RuntimeMethod_var)));
	}

IL_0064:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_12 = __this->get_writeEvent_12();
		if (!L_12)
		{
			goto IL_007e;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_13 = __this->get_writeEvent_12();
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Threading.WaitHandle::Close() */, L_13);
		__this->set_writeEvent_12((EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C *)NULL);
	}

IL_007e:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_14 = __this->get_readEvent_13();
		if (!L_14)
		{
			goto IL_0098;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_15 = __this->get_readEvent_13();
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Threading.WaitHandle::Close() */, L_15);
		__this->set_readEvent_13((EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C *)NULL);
	}

IL_0098:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_16 = __this->get_upgradeEvent_14();
		if (!L_16)
		{
			goto IL_00b2;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_17 = __this->get_upgradeEvent_14();
		NullCheck(L_17);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Threading.WaitHandle::Close() */, L_17);
		__this->set_upgradeEvent_14((EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C *)NULL);
	}

IL_00b2:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_18 = __this->get_waitUpgradeEvent_15();
		if (!L_18)
		{
			goto IL_00cc;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_19 = __this->get_waitUpgradeEvent_15();
		NullCheck(L_19);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Threading.WaitHandle::Close() */, L_19);
		__this->set_waitUpgradeEvent_15((EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C *)NULL);
	}

IL_00cc:
	{
		__this->set_fDisposed_27((bool)1);
	}

IL_00d3:
	{
		return;
	}
}
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsReadLockHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_get_IsReadLockHeld_m7DCD5FD5F491F1F19B202A8CE4C9609E6FD54B78 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = ReaderWriterLockSlim_get_RecursiveReadCount_m4F403802E0535224A75B6ACB914795E3255EBE6C(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		return (bool)0;
	}
}
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_get_IsUpgradeableReadLockHeld_mCD549D784C4E29D93D7D1DC7F87D07BBD2B054E4 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = ReaderWriterLockSlim_get_RecursiveUpgradeCount_m57C446384AA3302B1D8551FDF094E0614B43D507(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		return (bool)0;
	}
}
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsWriteLockHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_get_IsWriteLockHeld_m76BAF63331AE3EA08A46001A77C3B8ED95E6FE25 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = ReaderWriterLockSlim_get_RecursiveWriteCount_mB157295491E285DF2269906A16A90F972474367A(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		return (bool)0;
	}
}
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveReadCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_RecursiveReadCount_m4F403802E0535224A75B6ACB914795E3255EBE6C (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * V_1 = NULL;
	{
		V_0 = 0;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_0;
		L_0 = ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline(__this, (bool)1, /*hidden argument*/NULL);
		V_1 = L_0;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_2 = V_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_readercount_1();
		V_0 = L_3;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveUpgradeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_RecursiveUpgradeCount_m57C446384AA3302B1D8551FDF094E0614B43D507 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * V_1 = NULL;
	{
		bool L_0 = __this->get_fIsReentrant_0();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		V_0 = 0;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_1;
		L_1 = ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline(__this, (bool)1, /*hidden argument*/NULL);
		V_1 = L_1;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_2 = V_1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_upgradecount_3();
		V_0 = L_4;
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_001e:
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_6;
		L_6 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_upgradeLockOwnerId_10();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0032;
		}
	}
	{
		return 1;
	}

IL_0032:
	{
		return 0;
	}
}
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveWriteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_RecursiveWriteCount_mB157295491E285DF2269906A16A90F972474367A (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * V_1 = NULL;
	{
		bool L_0 = __this->get_fIsReentrant_0();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		V_0 = 0;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_1;
		L_1 = ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline(__this, (bool)1, /*hidden argument*/NULL);
		V_1 = L_1;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_2 = V_1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_writercount_2();
		V_0 = L_4;
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_001e:
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_6;
		L_6 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_writeLockOwnerId_11();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0032;
		}
	}
	{
		return 1;
	}

IL_0032:
	{
		return 0;
	}
}
// System.Int32 System.Threading.ReaderWriterLockSlim::get_WaitingReadCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_WaitingReadCount_m7ABA9E4099E3A845BA69B2DE31F1620468A96168 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_numReadWaiters_6();
		return L_0;
	}
}
// System.Int32 System.Threading.ReaderWriterLockSlim::get_WaitingUpgradeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_WaitingUpgradeCount_m6427A931CE9CD0A0A759ECE9FB89A2953D53F679 (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_numUpgradeWaiters_8();
		return L_0;
	}
}
// System.Int32 System.Threading.ReaderWriterLockSlim::get_WaitingWriteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_WaitingWriteCount_m4C34DCD34734878CF89D94EFAED6772AC5C803EE (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_numWriteWaiters_5();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_mD7FC73A3473F4F165E55F8B4A7088F2E9F9CC412 (String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.ReaderWriterLockSlim/TimeoutTracker::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553 (TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___millisecondsTimeout0;
		if ((((int32_t)L_0) >= ((int32_t)(-1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF088CD7CED04705BD5E7559DBB7DD9A14559182)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___millisecondsTimeout0;
		__this->set_m_total_0(L_2);
		int32_t L_3 = __this->get_m_total_0();
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = __this->get_m_total_0();
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5;
		L_5 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		__this->set_m_start_1(L_5);
		return;
	}

IL_0033:
	{
		__this->set_m_start_1(0);
		return;
	}
}
IL2CPP_EXTERN_C  void TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553_AdjustorThunk (RuntimeObject * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * _thisAdjusted = reinterpret_cast<TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B *>(__this + _offset);
	TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553(_thisAdjusted, ___millisecondsTimeout0, method);
}
// System.Int32 System.Threading.ReaderWriterLockSlim/TimeoutTracker::get_RemainingMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeoutTracker_get_RemainingMilliseconds_m2DF873714961B9BED784F45364703221E4259F04 (TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_total_0();
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_m_total_0();
		if (L_1)
		{
			goto IL_0018;
		}
	}

IL_0011:
	{
		int32_t L_2 = __this->get_m_total_0();
		return L_2;
	}

IL_0018:
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		int32_t L_4 = __this->get_m_start_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_m_total_0();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0034;
		}
	}

IL_0032:
	{
		return 0;
	}

IL_0034:
	{
		int32_t L_8 = __this->get_m_total_0();
		int32_t L_9 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9));
	}
}
IL2CPP_EXTERN_C  int32_t TimeoutTracker_get_RemainingMilliseconds_m2DF873714961B9BED784F45364703221E4259F04_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * _thisAdjusted = reinterpret_cast<TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TimeoutTracker_get_RemainingMilliseconds_m2DF873714961B9BED784F45364703221E4259F04(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Threading.ReaderWriterLockSlim/TimeoutTracker::get_IsExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeoutTracker_get_IsExpired_mE4ED4EDAA3A57C06198F451E21D347640DB1EA38 (TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = TimeoutTracker_get_RemainingMilliseconds_m2DF873714961B9BED784F45364703221E4259F04((TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B *)__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool TimeoutTracker_get_IsExpired_mE4ED4EDAA3A57C06198F451E21D347640DB1EA38_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * _thisAdjusted = reinterpret_cast<TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B *>(__this + _offset);
	bool _returnValue;
	_returnValue = TimeoutTracker_get_IsExpired_mE4ED4EDAA3A57C06198F451E21D347640DB1EA38(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SymmetricAlgorithm_get_KeySize_m4971214DFD683A30CF42574E399A49D46881EFE6_inline (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_KeySizeValue_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SymmetricAlgorithm_get_FeedbackSize_m5F7652D1BB0A4C6A9573281D5FDB92653E56097F_inline (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_FeedbackSizeValue_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SymmetricAlgorithm_get_Mode_mC45173B64F0EF7E6FE8A282AB16AFE98024492D5_inline (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_ModeValue_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SymmetricAlgorithm_get_Padding_m0E3D81138F2FF12B498A92A096555BC9F22F6D28_inline (SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_PaddingValue_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_IsRWEntryEmpty_mC8DAC7CFE64A30203FF50C4823149F25FB15D116_inline (ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * ___rwc0, const RuntimeMethod* method)
{
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_0 = ___rwc0;
		NullCheck(L_0);
		int64_t L_1 = L_0->get_lockID_0();
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_2 = ___rwc0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_readercount_1();
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_4 = ___rwc0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_writercount_2();
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_6 = ___rwc0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_upgradecount_3();
		if (L_7)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}

IL_0024:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_EnterMyLock_mCE063DE6AD5C084F0EC81D24610EF4AD5A2F0E2A_inline (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of_myLock_1();
		int32_t L_1;
		L_1 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)L_0, 1, 0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ReaderWriterLockSlim_EnterMyLockSpin_mC63264D1309E935E22E6E2BFCAD04EAB8A19AE3C(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * ReaderWriterLockSlim_GetThreadRWCount_m8CCEECA7603C844BACCAB04BB083976E0A85AD5A_inline (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, bool ___dontAllocate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * V_0 = NULL;
	ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * V_1 = NULL;
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_0 = ((ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_il2cpp_TypeInfo_var))->get_t_rwc_18();
		V_0 = L_0;
		V_1 = (ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D *)NULL;
		goto IL_0031;
	}

IL_000a:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_1 = V_0;
		NullCheck(L_1);
		int64_t L_2 = L_1->get_lockID_0();
		int64_t L_3 = __this->get_lockID_17();
		if ((!(((uint64_t)L_2) == ((uint64_t)L_3))))
		{
			goto IL_001a;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_4 = V_0;
		return L_4;
	}

IL_001a:
	{
		bool L_5 = ___dontAllocate0;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_6 = V_1;
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_7 = V_0;
		bool L_8;
		L_8 = ReaderWriterLockSlim_IsRWEntryEmpty_mC8DAC7CFE64A30203FF50C4823149F25FB15D116_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_9 = V_0;
		V_1 = L_9;
	}

IL_002a:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_10 = V_0;
		NullCheck(L_10);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_11 = L_10->get_next_4();
		V_0 = L_11;
	}

IL_0031:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_12 = V_0;
		if (L_12)
		{
			goto IL_000a;
		}
	}
	{
		bool L_13 = ___dontAllocate0;
		if (!L_13)
		{
			goto IL_0039;
		}
	}
	{
		return (ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D *)NULL;
	}

IL_0039:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_14 = V_1;
		if (L_14)
		{
			goto IL_0053;
		}
	}
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_15 = (ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D *)il2cpp_codegen_object_new(ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D_il2cpp_TypeInfo_var);
		ReaderWriterCount__ctor_m0C083844BE7A2C4172B9684CF08A786C1E51874B(L_15, /*hidden argument*/NULL);
		V_1 = L_15;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_16 = V_1;
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_17 = ((ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_il2cpp_TypeInfo_var))->get_t_rwc_18();
		NullCheck(L_16);
		L_16->set_next_4(L_17);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_18 = V_1;
		((ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F_il2cpp_TypeInfo_var))->set_t_rwc_18(L_18);
	}

IL_0053:
	{
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_19 = V_1;
		int64_t L_20 = __this->get_lockID_17();
		NullCheck(L_19);
		L_19->set_lockID_0(L_20);
		ReaderWriterCount_t77045989CF33E994F64F32A7AAC0827046E03B5D * L_21 = V_1;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_WaitingReadCount_m7ABA9E4099E3A845BA69B2DE31F1620468A96168_inline (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_numReadWaiters_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_WaitingUpgradeCount_m6427A931CE9CD0A0A759ECE9FB89A2953D53F679_inline (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_numUpgradeWaiters_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReaderWriterLockSlim_get_WaitingWriteCount_m4C34DCD34734878CF89D94EFAED6772AC5C803EE_inline (ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_numWriteWaiters_5();
		return L_0;
	}
}
