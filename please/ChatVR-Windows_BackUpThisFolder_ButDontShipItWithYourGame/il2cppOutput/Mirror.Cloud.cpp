#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>
struct Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,Mirror.Cloud.ListServerService.KeyValue>
struct Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475;
// System.Func`2<Mirror.Cloud.ListServerService.KeyValue,System.Object>
struct Func_2_t600EC2AEEF3BB37FDCA197F037423749CF498078;
// System.Func`2<Mirror.Cloud.ListServerService.KeyValue,System.String>
struct Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA;
// System.Collections.Generic.IEnumerable`1<Mirror.Cloud.ListServerService.KeyValue>
struct IEnumerable_1_t2242261FEDE5AA6B4DC1ADE2AB5BF6E2B72D3675;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>
struct UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA;
// UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerCollectionJson>
struct UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55;
// UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerJson>
struct UnityEvent_1_t95ECF8AD8934D8C797DE09BAC4AE4FC09E788D2A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Mirror.Cloud.ListServerService.KeyValue[]
struct KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Mirror.Cloud.ListServerService.ServerJson[]
struct ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Mirror.Cloud.ApiConnector
struct ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// Mirror.Cloud.BaseApi
struct BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Mirror.Cloud.ICoroutineRunner
struct ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Mirror.Cloud.ListServerService.IListServerClientApi
struct IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6;
// Mirror.Cloud.ListServerService.IListServerServerApi
struct IListServerServerApi_t718DD69845E48139C71477B8E4B38B443C68CEA7;
// Mirror.Cloud.IRequestCreator
struct IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E;
// Mirror.Cloud.IUnityEqualCheck
struct IUnityEqualCheck_tCA931796FAD8C1E7B0817F004CCB43D709203A19;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Mirror.Cloud.ListServerService.KeyValue
struct KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4;
// Mirror.Cloud.ListServerService.ListServer
struct ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135;
// Mirror.Cloud.ListServerService.ListServerBaseApi
struct ListServerBaseApi_tCAA2999579ADE77AEFC19DCCB5BB40B7A0AB3268;
// Mirror.Cloud.ListServerService.ListServerClientApi
struct ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C;
// Mirror.Cloud.ListServerService.ListServerServerApi
struct ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B;
// Mirror.Cloud.MatchFoundEvent
struct MatchFoundEvent_t525CAFFD2E8D84CE5690CF19607CD8C9CA4D44B8;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Mirror.Cloud.RequestCreator
struct RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA;
// Mirror.Cloud.RequestFail
struct RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A;
// Mirror.Cloud.RequestSuccess
struct RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Mirror.Cloud.ListServerService.ServerJson
struct ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22;
// Mirror.Cloud.ServerListEvent
struct ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA;
// System.String
struct String_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Mirror.Cloud.ListServerService.CustomDataHelper/<>c
struct U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419;
// Mirror.Cloud.ListServerService.ListServerClientApi/<GetServerListRepeat>d__10
struct U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E;
// Mirror.Cloud.ListServerService.ListServerClientApi/<getServerList>d__11
struct U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C;
// Mirror.Cloud.ListServerService.ListServerServerApi/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053;
// Mirror.Cloud.ListServerService.ListServerServerApi/<addServer>d__18
struct U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9;
// Mirror.Cloud.ListServerService.ListServerServerApi/<ping>d__20
struct U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C;
// Mirror.Cloud.ListServerService.ListServerServerApi/<removeServer>d__21
struct U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B;
// Mirror.Cloud.ListServerService.ListServerServerApi/<updateServer>d__19
struct U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0;
// Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15
struct U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBaseApi_t677E0D395209779B8B78C10F528FB65A0EDE4389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral097A0587884D22D3CEC693DA0AF8FBAE05FB47F8;
IL2CPP_EXTERN_C String_t* _stringLiteral0D7CA07B5AD79042346F8AF1118923753D33678D;
IL2CPP_EXTERN_C String_t* _stringLiteral0DE15E3023B96A63BFDA34C415092DD777CF22AF;
IL2CPP_EXTERN_C String_t* _stringLiteral1C868056AF237BD3225A82F2DA8D56E8C3FE0079;
IL2CPP_EXTERN_C String_t* _stringLiteral1DC608F009E3239E74265E933018C2F02BEB5B7D;
IL2CPP_EXTERN_C String_t* _stringLiteral2026E6291795A6F7CBD277311B6F00E4CD423A50;
IL2CPP_EXTERN_C String_t* _stringLiteral23FE3D4F547783B3B122ABD1703CC1F7898638D5;
IL2CPP_EXTERN_C String_t* _stringLiteral277D066918F746880AE343C1604D15E3E527977B;
IL2CPP_EXTERN_C String_t* _stringLiteral33800EFBF01747EBC7EE411FA92A45DA78F30A85;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral40F0CF00362A261A099C1B64E912811D95BA4144;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral5BBE16AA1C4389272AB4027D33CD93FE17652612;
IL2CPP_EXTERN_C String_t* _stringLiteral62D076543CAB903B5EA522AEA5F41D5620E6785F;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral6495F7B652B2430D9E8D1B9BB71ACC8F00D22077;
IL2CPP_EXTERN_C String_t* _stringLiteral762D0808EEDB7278EB4D7DD9CDD0447F5DF17334;
IL2CPP_EXTERN_C String_t* _stringLiteral7F6D30154B5B65D42007FA1D185A34F4F5E484A5;
IL2CPP_EXTERN_C String_t* _stringLiteral80607C7F16A0CDD957684CF46A693CC879F1E6E9;
IL2CPP_EXTERN_C String_t* _stringLiteral8188B12204D77846CFFD9F3AAEA0FC5BA6D31D0C;
IL2CPP_EXTERN_C String_t* _stringLiteral9C7CA32BF2F2BCF374D202A19537C76F03A27486;
IL2CPP_EXTERN_C String_t* _stringLiteralA782209317C48E96A39C85D51CF1EA2FF3607747;
IL2CPP_EXTERN_C String_t* _stringLiteralC6D94F2AF4A63B81F3CC9D277D73D40181964B8E;
IL2CPP_EXTERN_C String_t* _stringLiteralC96F18878485EFFB0416A743386F020591D0D2FD;
IL2CPP_EXTERN_C String_t* _stringLiteralD528FBE40EB40BC73305B1BF9B57FD9F4714EADA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38;
IL2CPP_EXTERN_C String_t* _stringLiteralE1F6A044D424B6AF08152F50855B31FB5EAD3CDB;
IL2CPP_EXTERN_C String_t* _stringLiteralE51D1CDB2E3D0A9DBD3B08833745D9D20ECDB839;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m3D7CC37C1E9B55A556096483FCC1A6CEDC7D7EA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseApi__ctor_m6ED58734DF44397364023344E2619283A48B85E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_mCE01515D8177239195C4F2C05397060B1302241E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m6236E7059399A6BCC06A38420AE93B3BF1715076_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_TisString_t_TisString_t_mC84ACD9759FD116FABF3C53417A47147F28C442C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m270E1CE49DA684C3D93FDAB0F02D84E6A16CA525_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA061B5C2B290A7D09ACBF87F7601661B834EBCD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IRequestCreator_Patch_TisEmptyJson_tECA229F33ADFDA22AC938D91F6185E5120546A66_mD97F9F6A7F6064579D7079AC24124CBCB776DF34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IRequestCreator_Patch_TisPartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_mED44E506A732CE5B131E1AC5AE4DE551A0056344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IRequestCreator_Post_TisServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_mF9ED6E50752FCCFEDC53C3E7132AE4B87B0F38DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisCreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_mED28C3C0CDBAFB198F62A82A31E92DD7B1007A6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_m487953A1FD6702F8E65F1FD3C1C0107D3C5C0B48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListServerClientApi_U3CgetServerListU3Eg__onSuccessU7C11_0_mA8F057772B76D795BAD5DDE8426455F2FEBF472A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListServerServerApi_U3CaddServerU3Eg__onFailU7C18_1_m32210599A9F7BA770D34B65DF7843BB5965DD031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListServerServerApi_U3CaddServerU3Eg__onSuccessU7C18_0_m7CCBC86FCD7C454FFC878BEE3D2A77F34938D385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListServerServerApi_U3CpingU3Eg__onFailU7C20_1_mBA34F07E99F2CD176C1EE310B19AA2A73BF9FA7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListServerServerApi_U3CpingU3Eg__onSuccessU7C20_0_m44DBC357F616341393977861269FCA81C5F7699A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListServerServerApi_U3CupdateServerU3Eg__onSuccessU7C19_0_mF7867288BCE9371208A68F4C0174C000978A1422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListServer__ctor_m21DA24F269DCD98164F36357B43FAC4EC5059EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCreator__ctor_m6DAA512714A02207DDEA5CEF79EA41D344D0666F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetServerListRepeatU3Ed__10_System_Collections_IEnumerator_Reset_m2171CFEC95CF845CA7D2B0C5CD13A36F12D7C161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendRequestEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_mAFEBCB87D91286990AD155FA294CC2D6526AA021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToDictionaryU3Eb__1_0_m2C8F7B33A11EFCDE8FD89AD109540B19073C6E9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToDictionaryU3Eb__1_1_m28A0C477B699FCAD35D1C235F650F8256DF1D62E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToKeyValueArrayU3Eb__2_0_m24F269C87648977ADEC23FC0D1760A899D6BBB11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3CremoveServerWithoutCoroutineU3Eb__0_m60D67ACBBB4A39CA93EDD26A9FF0CB9257D7D67D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CaddServerU3Ed__18_System_Collections_IEnumerator_Reset_m84E64CE143F8605CBFAF3FBF11CB763783F2CD10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgetServerListU3Ed__11_System_Collections_IEnumerator_Reset_mAF8684B0440C9A6BD2E1E12E212B2746ACD6B2E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CpingU3Ed__20_System_Collections_IEnumerator_Reset_m8ACDE188126B93E80C06F1638B3EB3D7DA866BA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CremoveServerU3Ed__21_System_Collections_IEnumerator_Reset_mB7E96F43E3443ED9D3BFB9EB88FC25EFFFA9160B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CupdateServerU3Ed__19_System_Collections_IEnumerator_Reset_mE21033BEA02F5F8FF83B449AE92D8789FD3492E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mA383E6F1A5616232890049A3253BAFE5DD7A9978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mCE4F60CBC2A05FAE52AB4FD840716FF8AD8B6EFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m81FA3EA64C6A797F1842CD36CB33183E95660140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m89F533F2E1E3AAA8666A7F708A021057A097FB39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mC85CDCA0C6A5A0EE2B1641886649D3EF2C7DD0F2_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4;;
struct KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com;
struct KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com;;
struct KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke;
struct KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke;;
struct ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22;;
struct ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_com;
struct ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_com;;
struct ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_pinvoke;
struct ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_pinvoke;;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t48111F630656B53B2CD93EF530FAF3F5A4041D06 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Mirror.Cloud.BaseApi
struct  BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251  : public RuntimeObject
{
public:
	// Mirror.Cloud.ICoroutineRunner Mirror.Cloud.BaseApi::runner
	RuntimeObject* ___runner_0;
	// Mirror.Cloud.IRequestCreator Mirror.Cloud.BaseApi::requestCreator
	RuntimeObject* ___requestCreator_1;

public:
	inline static int32_t get_offset_of_runner_0() { return static_cast<int32_t>(offsetof(BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251, ___runner_0)); }
	inline RuntimeObject* get_runner_0() const { return ___runner_0; }
	inline RuntimeObject** get_address_of_runner_0() { return &___runner_0; }
	inline void set_runner_0(RuntimeObject* value)
	{
		___runner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runner_0), (void*)value);
	}

	inline static int32_t get_offset_of_requestCreator_1() { return static_cast<int32_t>(offsetof(BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251, ___requestCreator_1)); }
	inline RuntimeObject* get_requestCreator_1() const { return ___requestCreator_1; }
	inline RuntimeObject** get_address_of_requestCreator_1() { return &___requestCreator_1; }
	inline void set_requestCreator_1(RuntimeObject* value)
	{
		___requestCreator_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestCreator_1), (void*)value);
	}
};


// Mirror.Cloud.ListServerService.CustomDataHelper
struct  CustomDataHelper_t267DEADD6A7E97B3875F0348807A0615B32C756E  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// Mirror.Cloud.Extensions
struct  Extensions_t93C1108961262C4122347270C14513D6476225B9  : public RuntimeObject
{
public:

public:
};


// Mirror.Cloud.ListServerService.ListServer
struct  ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135  : public RuntimeObject
{
public:
	// Mirror.Cloud.ListServerService.IListServerServerApi Mirror.Cloud.ListServerService.ListServer::ServerApi
	RuntimeObject* ___ServerApi_0;
	// Mirror.Cloud.ListServerService.IListServerClientApi Mirror.Cloud.ListServerService.ListServer::ClientApi
	RuntimeObject* ___ClientApi_1;

public:
	inline static int32_t get_offset_of_ServerApi_0() { return static_cast<int32_t>(offsetof(ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135, ___ServerApi_0)); }
	inline RuntimeObject* get_ServerApi_0() const { return ___ServerApi_0; }
	inline RuntimeObject** get_address_of_ServerApi_0() { return &___ServerApi_0; }
	inline void set_ServerApi_0(RuntimeObject* value)
	{
		___ServerApi_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServerApi_0), (void*)value);
	}

	inline static int32_t get_offset_of_ClientApi_1() { return static_cast<int32_t>(offsetof(ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135, ___ClientApi_1)); }
	inline RuntimeObject* get_ClientApi_1() const { return ___ClientApi_1; }
	inline RuntimeObject** get_address_of_ClientApi_1() { return &___ClientApi_1; }
	inline void set_ClientApi_1(RuntimeObject* value)
	{
		___ClientApi_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClientApi_1), (void*)value);
	}
};


// Mirror.Cloud.Logger
struct  Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3  : public RuntimeObject
{
public:

public:
};

struct Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_StaticFields
{
public:
	// System.Boolean Mirror.Cloud.Logger::VerboseLogging
	bool ___VerboseLogging_0;

public:
	inline static int32_t get_offset_of_VerboseLogging_0() { return static_cast<int32_t>(offsetof(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_StaticFields, ___VerboseLogging_0)); }
	inline bool get_VerboseLogging_0() const { return ___VerboseLogging_0; }
	inline bool* get_address_of_VerboseLogging_0() { return &___VerboseLogging_0; }
	inline void set_VerboseLogging_0(bool value)
	{
		___VerboseLogging_0 = value;
	}
};


// Mirror.Cloud.RequestCreator
struct  RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA  : public RuntimeObject
{
public:
	// System.String Mirror.Cloud.RequestCreator::baseAddress
	String_t* ___baseAddress_4;
	// System.String Mirror.Cloud.RequestCreator::apiKey
	String_t* ___apiKey_5;
	// Mirror.Cloud.ICoroutineRunner Mirror.Cloud.RequestCreator::runner
	RuntimeObject* ___runner_6;

public:
	inline static int32_t get_offset_of_baseAddress_4() { return static_cast<int32_t>(offsetof(RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA, ___baseAddress_4)); }
	inline String_t* get_baseAddress_4() const { return ___baseAddress_4; }
	inline String_t** get_address_of_baseAddress_4() { return &___baseAddress_4; }
	inline void set_baseAddress_4(String_t* value)
	{
		___baseAddress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseAddress_4), (void*)value);
	}

	inline static int32_t get_offset_of_apiKey_5() { return static_cast<int32_t>(offsetof(RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA, ___apiKey_5)); }
	inline String_t* get_apiKey_5() const { return ___apiKey_5; }
	inline String_t** get_address_of_apiKey_5() { return &___apiKey_5; }
	inline void set_apiKey_5(String_t* value)
	{
		___apiKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apiKey_5), (void*)value);
	}

	inline static int32_t get_offset_of_runner_6() { return static_cast<int32_t>(offsetof(RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA, ___runner_6)); }
	inline RuntimeObject* get_runner_6() const { return ___runner_6; }
	inline RuntimeObject** get_address_of_runner_6() { return &___runner_6; }
	inline void set_runner_6(RuntimeObject* value)
	{
		___runner_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runner_6), (void*)value);
	}
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


// Mirror.Cloud.UnityEqualCheckExtension
struct  UnityEqualCheckExtension_tD9C3C5F91A9EE53FDE3C28E281C12577A6A7DF61  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Mirror.Cloud.ListServerService.CustomDataHelper/<>c
struct  U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields
{
public:
	// Mirror.Cloud.ListServerService.CustomDataHelper/<>c Mirror.Cloud.ListServerService.CustomDataHelper/<>c::<>9
	U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 * ___U3CU3E9_0;
	// System.Func`2<Mirror.Cloud.ListServerService.KeyValue,System.String> Mirror.Cloud.ListServerService.CustomDataHelper/<>c::<>9__1_0
	Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * ___U3CU3E9__1_0_1;
	// System.Func`2<Mirror.Cloud.ListServerService.KeyValue,System.String> Mirror.Cloud.ListServerService.CustomDataHelper/<>c::<>9__1_1
	Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * ___U3CU3E9__1_1_2;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,Mirror.Cloud.ListServerService.KeyValue> Mirror.Cloud.ListServerService.CustomDataHelper/<>c::<>9__2_0
	Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 * ___U3CU3E9__2_0_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields, ___U3CU3E9__1_1_2)); }
	inline Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * get_U3CU3E9__1_1_2() const { return ___U3CU3E9__1_1_2; }
	inline Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F ** get_address_of_U3CU3E9__1_1_2() { return &___U3CU3E9__1_1_2; }
	inline void set_U3CU3E9__1_1_2(Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * value)
	{
		___U3CU3E9__1_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields, ___U3CU3E9__2_0_3)); }
	inline Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 * get_U3CU3E9__2_0_3() const { return ___U3CU3E9__2_0_3; }
	inline Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 ** get_address_of_U3CU3E9__2_0_3() { return &___U3CU3E9__2_0_3; }
	inline void set_U3CU3E9__2_0_3(Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 * value)
	{
		___U3CU3E9__2_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_3), (void*)value);
	}
};


// Mirror.Cloud.ListServerService.ListServerClientApi/<GetServerListRepeat>d__10
struct  U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Cloud.ListServerService.ListServerClientApi/<GetServerListRepeat>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Cloud.ListServerService.ListServerClientApi/<GetServerListRepeat>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Cloud.ListServerService.ListServerClientApi Mirror.Cloud.ListServerService.ListServerClientApi/<GetServerListRepeat>d__10::<>4__this
	ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * ___U3CU3E4__this_2;
	// System.Int32 Mirror.Cloud.ListServerService.ListServerClientApi/<GetServerListRepeat>d__10::interval
	int32_t ___interval_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E, ___U3CU3E4__this_2)); }
	inline ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_interval_3() { return static_cast<int32_t>(offsetof(U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E, ___interval_3)); }
	inline int32_t get_interval_3() const { return ___interval_3; }
	inline int32_t* get_address_of_interval_3() { return &___interval_3; }
	inline void set_interval_3(int32_t value)
	{
		___interval_3 = value;
	}
};


// Mirror.Cloud.ListServerService.ListServerClientApi/<getServerList>d__11
struct  U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Cloud.ListServerService.ListServerClientApi/<getServerList>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Cloud.ListServerService.ListServerClientApi/<getServerList>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Cloud.ListServerService.ListServerClientApi Mirror.Cloud.ListServerService.ListServerClientApi/<getServerList>d__11::<>4__this
	ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C, ___U3CU3E4__this_2)); }
	inline ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Mirror.Cloud.ListServerService.ListServerServerApi/<>c__DisplayClass22_0
struct  U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053  : public RuntimeObject
{
public:
	// UnityEngine.Networking.UnityWebRequest Mirror.Cloud.ListServerService.ListServerServerApi/<>c__DisplayClass22_0::request
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request_0;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053, ___request_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_request_0() const { return ___request_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_0), (void*)value);
	}
};


// Mirror.Cloud.ListServerService.ListServerServerApi/<ping>d__20
struct  U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Cloud.ListServerService.ListServerServerApi/<ping>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Cloud.ListServerService.ListServerServerApi/<ping>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Cloud.ListServerService.ListServerServerApi Mirror.Cloud.ListServerService.ListServerServerApi/<ping>d__20::<>4__this
	ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C, ___U3CU3E4__this_2)); }
	inline ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Mirror.Cloud.ListServerService.ListServerServerApi/<removeServer>d__21
struct  U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Cloud.ListServerService.ListServerServerApi/<removeServer>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Cloud.ListServerService.ListServerServerApi/<removeServer>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Cloud.ListServerService.ListServerServerApi Mirror.Cloud.ListServerService.ListServerServerApi/<removeServer>d__21::<>4__this
	ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B, ___U3CU3E4__this_2)); }
	inline ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15
struct  U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::request
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request_2;
	// Mirror.Cloud.RequestSuccess Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::onSuccess
	RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * ___onSuccess_3;
	// Mirror.Cloud.RequestFail Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::onFail
	RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * ___onFail_4;
	// UnityEngine.Networking.UnityWebRequest Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::<webRequest>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_request_2() { return static_cast<int32_t>(offsetof(U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1, ___request_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_request_2() const { return ___request_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_request_2() { return &___request_2; }
	inline void set_request_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___request_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_2), (void*)value);
	}

	inline static int32_t get_offset_of_onSuccess_3() { return static_cast<int32_t>(offsetof(U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1, ___onSuccess_3)); }
	inline RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * get_onSuccess_3() const { return ___onSuccess_3; }
	inline RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 ** get_address_of_onSuccess_3() { return &___onSuccess_3; }
	inline void set_onSuccess_3(RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * value)
	{
		___onSuccess_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSuccess_3), (void*)value);
	}

	inline static int32_t get_offset_of_onFail_4() { return static_cast<int32_t>(offsetof(U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1, ___onFail_4)); }
	inline RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * get_onFail_4() const { return ___onFail_4; }
	inline RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A ** get_address_of_onFail_4() { return &___onFail_4; }
	inline void set_onFail_4(RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * value)
	{
		___onFail_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFail_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1, ___U3CwebRequestU3E5__2_5)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3E5__2_5() const { return ___U3CwebRequestU3E5__2_5; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3E5__2_5() { return &___U3CwebRequestU3E5__2_5; }
	inline void set_U3CwebRequestU3E5__2_5(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3E5__2_5), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerCollectionJson>
struct  UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerJson>
struct  UnityEvent_1_t95ECF8AD8934D8C797DE09BAC4AE4FC09E788D2A  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t95ECF8AD8934D8C797DE09BAC4AE4FC09E788D2A, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
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


// Mirror.Cloud.CreatedIdJson
struct  CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F 
{
public:
	// System.String Mirror.Cloud.CreatedIdJson::id
	String_t* ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.Cloud.CreatedIdJson
struct CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshaled_pinvoke
{
	char* ___id_0;
};
// Native definition for COM marshalling of Mirror.Cloud.CreatedIdJson
struct CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshaled_com
{
	Il2CppChar* ___id_0;
};

// Mirror.Cloud.EmptyJson
struct  EmptyJson_tECA229F33ADFDA22AC938D91F6185E5120546A66 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EmptyJson_tECA229F33ADFDA22AC938D91F6185E5120546A66__padding[1];
	};

public:
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

// Mirror.Cloud.ErrorJson
struct  ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504 
{
public:
	// System.String Mirror.Cloud.ErrorJson::code
	String_t* ___code_0;
	// System.String Mirror.Cloud.ErrorJson::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_code_0() { return static_cast<int32_t>(offsetof(ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504, ___code_0)); }
	inline String_t* get_code_0() const { return ___code_0; }
	inline String_t** get_address_of_code_0() { return &___code_0; }
	inline void set_code_0(String_t* value)
	{
		___code_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_0), (void*)value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.Cloud.ErrorJson
struct ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshaled_pinvoke
{
	char* ___code_0;
	char* ___message_1;
};
// Native definition for COM marshalling of Mirror.Cloud.ErrorJson
struct ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshaled_com
{
	Il2CppChar* ___code_0;
	Il2CppChar* ___message_1;
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


// Mirror.Cloud.ListServerService.KeyValue
struct  KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 
{
public:
	// System.String Mirror.Cloud.ListServerService.KeyValue::key
	String_t* ___key_2;
	// System.String Mirror.Cloud.ListServerService.KeyValue::value
	String_t* ___value_3;

public:
	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4, ___key_2)); }
	inline String_t* get_key_2() const { return ___key_2; }
	inline String_t** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(String_t* value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_2), (void*)value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4, ___value_3)); }
	inline String_t* get_value_3() const { return ___value_3; }
	inline String_t** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(String_t* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.Cloud.ListServerService.KeyValue
struct KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke
{
	char* ___key_2;
	char* ___value_3;
};
// Native definition for COM marshalling of Mirror.Cloud.ListServerService.KeyValue
struct KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com
{
	Il2CppChar* ___key_2;
	Il2CppChar* ___value_3;
};

// Mirror.Cloud.ListServerService.ListServerBaseApi
struct  ListServerBaseApi_tCAA2999579ADE77AEFC19DCCB5BB40B7A0AB3268  : public BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251
{
public:

public:
};


// Mirror.Cloud.ListServerService.PartialServerJson
struct  PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B 
{
public:
	// System.Int32 Mirror.Cloud.ListServerService.PartialServerJson::playerCount
	int32_t ___playerCount_0;
	// System.Int32 Mirror.Cloud.ListServerService.PartialServerJson::maxPlayerCount
	int32_t ___maxPlayerCount_1;
	// System.String Mirror.Cloud.ListServerService.PartialServerJson::displayName
	String_t* ___displayName_2;
	// Mirror.Cloud.ListServerService.KeyValue[] Mirror.Cloud.ListServerService.PartialServerJson::customData
	KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* ___customData_3;

public:
	inline static int32_t get_offset_of_playerCount_0() { return static_cast<int32_t>(offsetof(PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B, ___playerCount_0)); }
	inline int32_t get_playerCount_0() const { return ___playerCount_0; }
	inline int32_t* get_address_of_playerCount_0() { return &___playerCount_0; }
	inline void set_playerCount_0(int32_t value)
	{
		___playerCount_0 = value;
	}

	inline static int32_t get_offset_of_maxPlayerCount_1() { return static_cast<int32_t>(offsetof(PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B, ___maxPlayerCount_1)); }
	inline int32_t get_maxPlayerCount_1() const { return ___maxPlayerCount_1; }
	inline int32_t* get_address_of_maxPlayerCount_1() { return &___maxPlayerCount_1; }
	inline void set_maxPlayerCount_1(int32_t value)
	{
		___maxPlayerCount_1 = value;
	}

	inline static int32_t get_offset_of_displayName_2() { return static_cast<int32_t>(offsetof(PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B, ___displayName_2)); }
	inline String_t* get_displayName_2() const { return ___displayName_2; }
	inline String_t** get_address_of_displayName_2() { return &___displayName_2; }
	inline void set_displayName_2(String_t* value)
	{
		___displayName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_2), (void*)value);
	}

	inline static int32_t get_offset_of_customData_3() { return static_cast<int32_t>(offsetof(PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B, ___customData_3)); }
	inline KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* get_customData_3() const { return ___customData_3; }
	inline KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9** get_address_of_customData_3() { return &___customData_3; }
	inline void set_customData_3(KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* value)
	{
		___customData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customData_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.Cloud.ListServerService.PartialServerJson
struct PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshaled_pinvoke
{
	int32_t ___playerCount_0;
	int32_t ___maxPlayerCount_1;
	char* ___displayName_2;
	KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke* ___customData_3;
};
// Native definition for COM marshalling of Mirror.Cloud.ListServerService.PartialServerJson
struct PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshaled_com
{
	int32_t ___playerCount_0;
	int32_t ___maxPlayerCount_1;
	Il2CppChar* ___displayName_2;
	KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com* ___customData_3;
};

// Mirror.Cloud.ListServerService.ServerCollectionJson
struct  ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55 
{
public:
	// Mirror.Cloud.ListServerService.ServerJson[] Mirror.Cloud.ListServerService.ServerCollectionJson::servers
	ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* ___servers_0;

public:
	inline static int32_t get_offset_of_servers_0() { return static_cast<int32_t>(offsetof(ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55, ___servers_0)); }
	inline ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* get_servers_0() const { return ___servers_0; }
	inline ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641** get_address_of_servers_0() { return &___servers_0; }
	inline void set_servers_0(ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* value)
	{
		___servers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___servers_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.Cloud.ListServerService.ServerCollectionJson
struct ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshaled_pinvoke
{
	ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_pinvoke* ___servers_0;
};
// Native definition for COM marshalling of Mirror.Cloud.ListServerService.ServerCollectionJson
struct ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshaled_com
{
	ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_com* ___servers_0;
};

// Mirror.Cloud.ListServerService.ServerJson
struct  ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 
{
public:
	// System.String Mirror.Cloud.ListServerService.ServerJson::protocol
	String_t* ___protocol_0;
	// System.Int32 Mirror.Cloud.ListServerService.ServerJson::port
	int32_t ___port_1;
	// System.Int32 Mirror.Cloud.ListServerService.ServerJson::playerCount
	int32_t ___playerCount_2;
	// System.Int32 Mirror.Cloud.ListServerService.ServerJson::maxPlayerCount
	int32_t ___maxPlayerCount_3;
	// System.String Mirror.Cloud.ListServerService.ServerJson::displayName
	String_t* ___displayName_4;
	// System.String Mirror.Cloud.ListServerService.ServerJson::address
	String_t* ___address_5;
	// System.String Mirror.Cloud.ListServerService.ServerJson::customAddress
	String_t* ___customAddress_6;
	// Mirror.Cloud.ListServerService.KeyValue[] Mirror.Cloud.ListServerService.ServerJson::customData
	KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* ___customData_7;

public:
	inline static int32_t get_offset_of_protocol_0() { return static_cast<int32_t>(offsetof(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22, ___protocol_0)); }
	inline String_t* get_protocol_0() const { return ___protocol_0; }
	inline String_t** get_address_of_protocol_0() { return &___protocol_0; }
	inline void set_protocol_0(String_t* value)
	{
		___protocol_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___protocol_0), (void*)value);
	}

	inline static int32_t get_offset_of_port_1() { return static_cast<int32_t>(offsetof(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22, ___port_1)); }
	inline int32_t get_port_1() const { return ___port_1; }
	inline int32_t* get_address_of_port_1() { return &___port_1; }
	inline void set_port_1(int32_t value)
	{
		___port_1 = value;
	}

	inline static int32_t get_offset_of_playerCount_2() { return static_cast<int32_t>(offsetof(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22, ___playerCount_2)); }
	inline int32_t get_playerCount_2() const { return ___playerCount_2; }
	inline int32_t* get_address_of_playerCount_2() { return &___playerCount_2; }
	inline void set_playerCount_2(int32_t value)
	{
		___playerCount_2 = value;
	}

	inline static int32_t get_offset_of_maxPlayerCount_3() { return static_cast<int32_t>(offsetof(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22, ___maxPlayerCount_3)); }
	inline int32_t get_maxPlayerCount_3() const { return ___maxPlayerCount_3; }
	inline int32_t* get_address_of_maxPlayerCount_3() { return &___maxPlayerCount_3; }
	inline void set_maxPlayerCount_3(int32_t value)
	{
		___maxPlayerCount_3 = value;
	}

	inline static int32_t get_offset_of_displayName_4() { return static_cast<int32_t>(offsetof(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22, ___displayName_4)); }
	inline String_t* get_displayName_4() const { return ___displayName_4; }
	inline String_t** get_address_of_displayName_4() { return &___displayName_4; }
	inline void set_displayName_4(String_t* value)
	{
		___displayName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_4), (void*)value);
	}

	inline static int32_t get_offset_of_address_5() { return static_cast<int32_t>(offsetof(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22, ___address_5)); }
	inline String_t* get_address_5() const { return ___address_5; }
	inline String_t** get_address_of_address_5() { return &___address_5; }
	inline void set_address_5(String_t* value)
	{
		___address_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___address_5), (void*)value);
	}

	inline static int32_t get_offset_of_customAddress_6() { return static_cast<int32_t>(offsetof(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22, ___customAddress_6)); }
	inline String_t* get_customAddress_6() const { return ___customAddress_6; }
	inline String_t** get_address_of_customAddress_6() { return &___customAddress_6; }
	inline void set_customAddress_6(String_t* value)
	{
		___customAddress_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customAddress_6), (void*)value);
	}

	inline static int32_t get_offset_of_customData_7() { return static_cast<int32_t>(offsetof(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22, ___customData_7)); }
	inline KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* get_customData_7() const { return ___customData_7; }
	inline KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9** get_address_of_customData_7() { return &___customData_7; }
	inline void set_customData_7(KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* value)
	{
		___customData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customData_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.Cloud.ListServerService.ServerJson
struct ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_pinvoke
{
	char* ___protocol_0;
	int32_t ___port_1;
	int32_t ___playerCount_2;
	int32_t ___maxPlayerCount_3;
	char* ___displayName_4;
	char* ___address_5;
	char* ___customAddress_6;
	KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke* ___customData_7;
};
// Native definition for COM marshalling of Mirror.Cloud.ListServerService.ServerJson
struct ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_com
{
	Il2CppChar* ___protocol_0;
	int32_t ___port_1;
	int32_t ___playerCount_2;
	int32_t ___maxPlayerCount_3;
	Il2CppChar* ___displayName_4;
	Il2CppChar* ___address_5;
	Il2CppChar* ___customAddress_6;
	KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com* ___customData_7;
};

// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
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


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Mirror.Cloud.ListServerService.ListServerClientApi
struct  ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C  : public ListServerBaseApi_tCAA2999579ADE77AEFC19DCCB5BB40B7A0AB3268
{
public:
	// Mirror.Cloud.ServerListEvent Mirror.Cloud.ListServerService.ListServerClientApi::_onServerListUpdated
	ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * ____onServerListUpdated_2;
	// UnityEngine.Coroutine Mirror.Cloud.ListServerService.ListServerClientApi::getServerListRepeatCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___getServerListRepeatCoroutine_3;

public:
	inline static int32_t get_offset_of__onServerListUpdated_2() { return static_cast<int32_t>(offsetof(ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C, ____onServerListUpdated_2)); }
	inline ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * get__onServerListUpdated_2() const { return ____onServerListUpdated_2; }
	inline ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA ** get_address_of__onServerListUpdated_2() { return &____onServerListUpdated_2; }
	inline void set__onServerListUpdated_2(ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * value)
	{
		____onServerListUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onServerListUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_getServerListRepeatCoroutine_3() { return static_cast<int32_t>(offsetof(ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C, ___getServerListRepeatCoroutine_3)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_getServerListRepeatCoroutine_3() const { return ___getServerListRepeatCoroutine_3; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_getServerListRepeatCoroutine_3() { return &___getServerListRepeatCoroutine_3; }
	inline void set_getServerListRepeatCoroutine_3(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___getServerListRepeatCoroutine_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getServerListRepeatCoroutine_3), (void*)value);
	}
};


// Mirror.Cloud.ListServerService.ListServerServerApi
struct  ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B  : public ListServerBaseApi_tCAA2999579ADE77AEFC19DCCB5BB40B7A0AB3268
{
public:
	// Mirror.Cloud.ListServerService.ServerJson Mirror.Cloud.ListServerService.ListServerServerApi::currentServer
	ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  ___currentServer_4;
	// System.String Mirror.Cloud.ListServerService.ListServerServerApi::serverId
	String_t* ___serverId_5;
	// UnityEngine.Coroutine Mirror.Cloud.ListServerService.ListServerServerApi::_pingCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____pingCoroutine_6;
	// System.Boolean Mirror.Cloud.ListServerService.ListServerServerApi::added
	bool ___added_7;
	// System.Boolean Mirror.Cloud.ListServerService.ListServerServerApi::sending
	bool ___sending_8;
	// System.Boolean Mirror.Cloud.ListServerService.ListServerServerApi::skipNextPing
	bool ___skipNextPing_9;
	// System.Int32 Mirror.Cloud.ListServerService.ListServerServerApi::pingFails
	int32_t ___pingFails_10;

public:
	inline static int32_t get_offset_of_currentServer_4() { return static_cast<int32_t>(offsetof(ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B, ___currentServer_4)); }
	inline ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  get_currentServer_4() const { return ___currentServer_4; }
	inline ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * get_address_of_currentServer_4() { return &___currentServer_4; }
	inline void set_currentServer_4(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  value)
	{
		___currentServer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentServer_4))->___protocol_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentServer_4))->___displayName_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentServer_4))->___address_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentServer_4))->___customAddress_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentServer_4))->___customData_7), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_serverId_5() { return static_cast<int32_t>(offsetof(ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B, ___serverId_5)); }
	inline String_t* get_serverId_5() const { return ___serverId_5; }
	inline String_t** get_address_of_serverId_5() { return &___serverId_5; }
	inline void set_serverId_5(String_t* value)
	{
		___serverId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serverId_5), (void*)value);
	}

	inline static int32_t get_offset_of__pingCoroutine_6() { return static_cast<int32_t>(offsetof(ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B, ____pingCoroutine_6)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__pingCoroutine_6() const { return ____pingCoroutine_6; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__pingCoroutine_6() { return &____pingCoroutine_6; }
	inline void set__pingCoroutine_6(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____pingCoroutine_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pingCoroutine_6), (void*)value);
	}

	inline static int32_t get_offset_of_added_7() { return static_cast<int32_t>(offsetof(ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B, ___added_7)); }
	inline bool get_added_7() const { return ___added_7; }
	inline bool* get_address_of_added_7() { return &___added_7; }
	inline void set_added_7(bool value)
	{
		___added_7 = value;
	}

	inline static int32_t get_offset_of_sending_8() { return static_cast<int32_t>(offsetof(ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B, ___sending_8)); }
	inline bool get_sending_8() const { return ___sending_8; }
	inline bool* get_address_of_sending_8() { return &___sending_8; }
	inline void set_sending_8(bool value)
	{
		___sending_8 = value;
	}

	inline static int32_t get_offset_of_skipNextPing_9() { return static_cast<int32_t>(offsetof(ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B, ___skipNextPing_9)); }
	inline bool get_skipNextPing_9() const { return ___skipNextPing_9; }
	inline bool* get_address_of_skipNextPing_9() { return &___skipNextPing_9; }
	inline void set_skipNextPing_9(bool value)
	{
		___skipNextPing_9 = value;
	}

	inline static int32_t get_offset_of_pingFails_10() { return static_cast<int32_t>(offsetof(ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B, ___pingFails_10)); }
	inline int32_t get_pingFails_10() const { return ___pingFails_10; }
	inline int32_t* get_address_of_pingFails_10() { return &___pingFails_10; }
	inline void set_pingFails_10(int32_t value)
	{
		___pingFails_10 = value;
	}
};


// Mirror.Cloud.MatchFoundEvent
struct  MatchFoundEvent_t525CAFFD2E8D84CE5690CF19607CD8C9CA4D44B8  : public UnityEvent_1_t95ECF8AD8934D8C797DE09BAC4AE4FC09E788D2A
{
public:

public:
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Mirror.Cloud.ServerListEvent
struct  ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA  : public UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55
{
public:

public:
};


// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.UriFormat
struct  UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct  UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.Cloud.ListServerService.ListServerServerApi/<addServer>d__18
struct  U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Cloud.ListServerService.ListServerServerApi/<addServer>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Cloud.ListServerService.ListServerServerApi/<addServer>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Cloud.ListServerService.ListServerServerApi Mirror.Cloud.ListServerService.ListServerServerApi/<addServer>d__18::<>4__this
	ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * ___U3CU3E4__this_2;
	// Mirror.Cloud.ListServerService.ServerJson Mirror.Cloud.ListServerService.ListServerServerApi/<addServer>d__18::server
	ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  ___server_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9, ___U3CU3E4__this_2)); }
	inline ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_server_3() { return static_cast<int32_t>(offsetof(U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9, ___server_3)); }
	inline ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  get_server_3() const { return ___server_3; }
	inline ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * get_address_of_server_3() { return &___server_3; }
	inline void set_server_3(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  value)
	{
		___server_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_3))->___protocol_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_3))->___displayName_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_3))->___address_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_3))->___customAddress_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_3))->___customData_7), (void*)NULL);
		#endif
	}
};


// Mirror.Cloud.ListServerService.ListServerServerApi/<updateServer>d__19
struct  U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Cloud.ListServerService.ListServerServerApi/<updateServer>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Cloud.ListServerService.ListServerServerApi/<updateServer>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Cloud.ListServerService.ListServerServerApi Mirror.Cloud.ListServerService.ListServerServerApi/<updateServer>d__19::<>4__this
	ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * ___U3CU3E4__this_2;
	// Mirror.Cloud.ListServerService.PartialServerJson Mirror.Cloud.ListServerService.ListServerServerApi/<updateServer>d__19::server
	PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B  ___server_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0, ___U3CU3E4__this_2)); }
	inline ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_server_3() { return static_cast<int32_t>(offsetof(U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0, ___server_3)); }
	inline PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B  get_server_3() const { return ___server_3; }
	inline PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B * get_address_of_server_3() { return &___server_3; }
	inline void set_server_3(PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B  value)
	{
		___server_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_3))->___displayName_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_3))->___customData_3), (void*)NULL);
		#endif
	}
};


// System.Uri/Flags
struct  Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Networking.DownloadHandlerBuffer
struct  DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct  UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669  : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
};

// System.Uri
struct  Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// System.Action`1<UnityEngine.AsyncOperation>
struct  Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,Mirror.Cloud.ListServerService.KeyValue>
struct  Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.Cloud.ListServerService.KeyValue,System.String>
struct  Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>
struct  UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA  : public MulticastDelegate_t
{
public:

public:
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


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Mirror.Cloud.RequestFail
struct  RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A  : public MulticastDelegate_t
{
public:

public:
};


// Mirror.Cloud.RequestSuccess
struct  RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Mirror.Cloud.ApiConnector
struct  ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Mirror.Cloud.ApiConnector::ApiAddress
	String_t* ___ApiAddress_4;
	// System.String Mirror.Cloud.ApiConnector::ApiKey
	String_t* ___ApiKey_5;
	// Mirror.Cloud.ServerListEvent Mirror.Cloud.ApiConnector::_onServerListUpdated
	ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * ____onServerListUpdated_6;
	// Mirror.Cloud.IRequestCreator Mirror.Cloud.ApiConnector::requestCreator
	RuntimeObject* ___requestCreator_7;
	// Mirror.Cloud.ListServerService.ListServer Mirror.Cloud.ApiConnector::<ListServer>k__BackingField
	ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * ___U3CListServerU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_ApiAddress_4() { return static_cast<int32_t>(offsetof(ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80, ___ApiAddress_4)); }
	inline String_t* get_ApiAddress_4() const { return ___ApiAddress_4; }
	inline String_t** get_address_of_ApiAddress_4() { return &___ApiAddress_4; }
	inline void set_ApiAddress_4(String_t* value)
	{
		___ApiAddress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApiAddress_4), (void*)value);
	}

	inline static int32_t get_offset_of_ApiKey_5() { return static_cast<int32_t>(offsetof(ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80, ___ApiKey_5)); }
	inline String_t* get_ApiKey_5() const { return ___ApiKey_5; }
	inline String_t** get_address_of_ApiKey_5() { return &___ApiKey_5; }
	inline void set_ApiKey_5(String_t* value)
	{
		___ApiKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApiKey_5), (void*)value);
	}

	inline static int32_t get_offset_of__onServerListUpdated_6() { return static_cast<int32_t>(offsetof(ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80, ____onServerListUpdated_6)); }
	inline ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * get__onServerListUpdated_6() const { return ____onServerListUpdated_6; }
	inline ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA ** get_address_of__onServerListUpdated_6() { return &____onServerListUpdated_6; }
	inline void set__onServerListUpdated_6(ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * value)
	{
		____onServerListUpdated_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onServerListUpdated_6), (void*)value);
	}

	inline static int32_t get_offset_of_requestCreator_7() { return static_cast<int32_t>(offsetof(ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80, ___requestCreator_7)); }
	inline RuntimeObject* get_requestCreator_7() const { return ___requestCreator_7; }
	inline RuntimeObject** get_address_of_requestCreator_7() { return &___requestCreator_7; }
	inline void set_requestCreator_7(RuntimeObject* value)
	{
		___requestCreator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestCreator_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CListServerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80, ___U3CListServerU3Ek__BackingField_8)); }
	inline ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * get_U3CListServerU3Ek__BackingField_8() const { return ___U3CListServerU3Ek__BackingField_8; }
	inline ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 ** get_address_of_U3CListServerU3Ek__BackingField_8() { return &___U3CListServerU3Ek__BackingField_8; }
	inline void set_U3CListServerU3Ek__BackingField_8(ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * value)
	{
		___U3CListServerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListServerU3Ek__BackingField_8), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Mirror.Cloud.ListServerService.KeyValue[]
struct KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  m_Items[1];

public:
	inline KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
	inline KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mirror.Cloud.ListServerService.ServerJson[]
struct ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  m_Items[1];

public:
	inline ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___protocol_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___displayName_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___address_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___customAddress_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___customData_7), (void*)NULL);
		#endif
	}
	inline ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___protocol_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___displayName_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___address_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___customAddress_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___customData_7), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_pinvoke(const KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4& unmarshaled, KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_pinvoke_back(const KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke& marshaled, KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4& unmarshaled);
IL2CPP_EXTERN_C void KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_pinvoke_cleanup(KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_com(const KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4& unmarshaled, KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com& marshaled);
IL2CPP_EXTERN_C void KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_com_back(const KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com& marshaled, KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4& unmarshaled);
IL2CPP_EXTERN_C void KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_com_cleanup(KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_pinvoke(const ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22& unmarshaled, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_pinvoke_back(const ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_pinvoke& marshaled, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22& unmarshaled);
IL2CPP_EXTERN_C void ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_pinvoke_cleanup(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_com(const ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22& unmarshaled, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_com_back(const ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_com& marshaled, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22& unmarshaled);
IL2CPP_EXTERN_C void ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_com_cleanup(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_com& marshaled);

// System.Void System.Func`2<Mirror.Cloud.ListServerService.KeyValue,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m8756A0B8523E9F6E703D102FF46167A00F74B30B_gshared (Func_2_t600EC2AEEF3BB37FDCA197F037423749CF498078 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<Mirror.Cloud.ListServerService.KeyValue,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * Enumerable_ToDictionary_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_TisRuntimeObject_TisRuntimeObject_mF37A091525DD3F247869DA19B750176867021D4F_gshared (RuntimeObject* ___source0, Func_2_t600EC2AEEF3BB37FDCA197F037423749CF498078 * ___keySelector1, Func_2_t600EC2AEEF3BB37FDCA197F037423749CF498078 * ___elementSelector2, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA2B98AFD48E4A91F9C1D1AEDB08A4DC17B64605A_gshared (Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_mC149826B79345E1F597F0C49994F385AE666C621_gshared (RuntimeObject* ___source0, Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<Mirror.Cloud.ListServerService.KeyValue>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* Enumerable_ToArray_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m6236E7059399A6BCC06A38420AE93B3BF1715076_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Array::Resize<Mirror.Cloud.ListServerService.KeyValue>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m3D7CC37C1E9B55A556096483FCC1A6CEDC7D7EA3_gshared (KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mA383E6F1A5616232890049A3253BAFE5DD7A9978_gshared (UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55 * __this, UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m81FA3EA64C6A797F1842CD36CB33183E95660140_gshared (UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55 * __this, UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * ___call0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Mirror.Cloud.ListServerService.ServerCollectionJson>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  JsonUtility_FromJson_TisServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_m487953A1FD6702F8E65F1FD3C1C0107D3C5C0B48_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mCE4F60CBC2A05FAE52AB4FD840716FF8AD8B6EFF_gshared (UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55 * __this, ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  ___arg00, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Mirror.Cloud.CreatedIdJson>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F  JsonUtility_FromJson_TisCreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_mED28C3C0CDBAFB198F62A82A31E92DD7B1007A6C_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerJson>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mC85CDCA0C6A5A0EE2B1641886649D3EF2C7DD0F2_gshared (UnityEvent_1_t95ECF8AD8934D8C797DE09BAC4AE4FC09E788D2A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m89F533F2E1E3AAA8666A7F708A021057A097FB39_gshared (UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);

// System.Void Mirror.Cloud.RequestCreator::.ctor(System.String,System.String,Mirror.Cloud.ICoroutineRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCreator__ctor_m6DAA512714A02207DDEA5CEF79EA41D344D0666F (RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * __this, String_t* ___baseAddress0, String_t* ___apiKey1, RuntimeObject* ___coroutineRunner2, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ApiConnector::InitListServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiConnector_InitListServer_mFE1728C612BFED7B6C820864AC6663EBCEBAA46A (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::.ctor(Mirror.Cloud.ICoroutineRunner,Mirror.Cloud.IRequestCreator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi__ctor_m9BDCAF70E6E03C76B0F0044AF40B935A36926B13 (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, RuntimeObject* ___runner0, RuntimeObject* ___requestCreator1, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi::.ctor(Mirror.Cloud.ICoroutineRunner,Mirror.Cloud.IRequestCreator,Mirror.Cloud.ServerListEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerClientApi__ctor_mEFD1F513D5F5E1A188C561F82F20A90784A0F483 (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, RuntimeObject* ___runner0, RuntimeObject* ___requestCreator1, ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * ___onServerListUpdated2, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ListServer::.ctor(Mirror.Cloud.ListServerService.IListServerServerApi,Mirror.Cloud.ListServerService.IListServerClientApi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServer__ctor_m21DA24F269DCD98164F36357B43FAC4EC5059EA4 (ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * __this, RuntimeObject* ___serverApi0, RuntimeObject* ___clientApi1, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ApiConnector::set_ListServer(Mirror.Cloud.ListServerService.ListServer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiConnector_set_ListServer_mF515EEE5908AD2E4E313956A9A1EFAE4D197BB89_inline (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * ___value0, const RuntimeMethod* method);
// Mirror.Cloud.ListServerService.ListServer Mirror.Cloud.ApiConnector::get_ListServer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ServerListEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListEvent__ctor_m7B4C8C5D984E2EC917E1ECA46CD0D883E83457C7 (ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Func`2<Mirror.Cloud.ListServerService.KeyValue,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA061B5C2B290A7D09ACBF87F7601661B834EBCD9 (Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m8756A0B8523E9F6E703D102FF46167A00F74B30B_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<Mirror.Cloud.ListServerService.KeyValue,System.String,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * Enumerable_ToDictionary_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_TisString_t_TisString_t_mC84ACD9759FD116FABF3C53417A47147F28C442C (RuntimeObject* ___source0, Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * ___keySelector1, Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * ___elementSelector2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*) (RuntimeObject*, Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F *, Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F *, const RuntimeMethod*))Enumerable_ToDictionary_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_TisRuntimeObject_TisRuntimeObject_mF37A091525DD3F247869DA19B750176867021D4F_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,Mirror.Cloud.ListServerService.KeyValue>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m270E1CE49DA684C3D93FDAB0F02D84E6A16CA525 (Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA2B98AFD48E4A91F9C1D1AEDB08A4DC17B64605A_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,Mirror.Cloud.ListServerService.KeyValue>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_mCE01515D8177239195C4F2C05397060B1302241E (RuntimeObject* ___source0, Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 *, const RuntimeMethod*))Enumerable_Select_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_mC149826B79345E1F597F0C49994F385AE666C621_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<Mirror.Cloud.ListServerService.KeyValue>(System.Collections.Generic.IEnumerable`1<!!0>)
inline KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* Enumerable_ToArray_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m6236E7059399A6BCC06A38420AE93B3BF1715076 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m6236E7059399A6BCC06A38420AE93B3BF1715076_gshared)(___source0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Logger::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogError_m784E8AB1B1053A7F68F99892E45C69D5576E4247 (String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.Array::Resize<Mirror.Cloud.ListServerService.KeyValue>(!!0[]&,System.Int32)
inline void Array_Resize_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m3D7CC37C1E9B55A556096483FCC1A6CEDC7D7EA3 (KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9**, int32_t, const RuntimeMethod*))Array_Resize_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m3D7CC37C1E9B55A556096483FCC1A6CEDC7D7EA3_gshared)(___array0, ___newSize1, method);
}
// System.Void Mirror.Cloud.ListServerService.KeyValue::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValue_Validate_m3BE22FA299FB931E9356209EAEA57168ED845665 (KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Int32 Mirror.Cloud.ErrorJson::get_HtmlCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ErrorJson_get_HtmlCode_m761C1ED3428AB310E92CAC4B3A4693C0E1F780C7 (ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504 * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.KeyValue::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValue__ctor_mB02C8E33135318FC4B625DBFF40D732188B13B39 (KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void Mirror.Cloud.BaseApi::.ctor(Mirror.Cloud.ICoroutineRunner,Mirror.Cloud.IRequestCreator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseApi__ctor_m6ED58734DF44397364023344E2619283A48B85E6 (BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 * __this, RuntimeObject* ___runner0, RuntimeObject* ___requestCreator1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mA383E6F1A5616232890049A3253BAFE5DD7A9978 (UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55 * __this, UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55 *, UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA *, const RuntimeMethod*))UnityEvent_1_AddListener_mA383E6F1A5616232890049A3253BAFE5DD7A9978_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m81FA3EA64C6A797F1842CD36CB33183E95660140 (UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55 * __this, UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55 *, UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m81FA3EA64C6A797F1842CD36CB33183E95660140_gshared)(__this, ___call0, method);
}
// System.Void Mirror.Cloud.ListServerService.ListServerBaseApi::.ctor(Mirror.Cloud.ICoroutineRunner,Mirror.Cloud.IRequestCreator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerBaseApi__ctor_mDEE98593ABEC48907E02B39EBC03E3205089FD9E (ListServerBaseApi_tCAA2999579ADE77AEFC19DCCB5BB40B7A0AB3268 * __this, RuntimeObject* ___runner0, RuntimeObject* ___requestCreator1, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi::StopGetServerListRepeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerClientApi_StopGetServerListRepeat_mF79C138DFA311D9A49CE49F47EE9E889AF940ACC (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Mirror.Cloud.ListServerService.ListServerClientApi::getServerList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListServerClientApi_getServerList_mE8AE311010096A737DDC6F2C3AD4A0D80673B512 (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Mirror.Cloud.ListServerService.ListServerClientApi::GetServerListRepeat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListServerClientApi_GetServerListRepeat_mD201F09EBE19752302663F6A0C40D91965DA71CC (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, int32_t ___interval0, const RuntimeMethod* method);
// System.Boolean Mirror.Cloud.UnityEqualCheckExtension::IsNotNull(Mirror.Cloud.IUnityEqualCheck)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityEqualCheckExtension_IsNotNull_m5166D412E4EFDA5D0CDA57FF03C2C60AFC138913 (RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi/<GetServerListRepeat>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetServerListRepeatU3Ed__10__ctor_m266442BE0D94127F8E9CADB1698E630EE260C6B0 (U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi/<getServerList>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetServerListU3Ed__11__ctor_m46814C413E44A8271DEC519B16A1B8C5BCDDB0EF (U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Mirror.Cloud.ListServerService.ServerCollectionJson>(System.String)
inline ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  JsonUtility_FromJson_TisServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_m487953A1FD6702F8E65F1FD3C1C0107D3C5C0B48 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_m487953A1FD6702F8E65F1FD3C1C0107D3C5C0B48_gshared)(___json0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::Invoke(!0)
inline void UnityEvent_1_Invoke_mCE4F60CBC2A05FAE52AB4FD840716FF8AD8B6EFF (UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55 * __this, ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55 *, ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55 , const RuntimeMethod*))UnityEvent_1_Invoke_mCE4F60CBC2A05FAE52AB4FD840716FF8AD8B6EFF_gshared)(__this, ___arg00, method);
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::stopPingCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_stopPingCoroutine_m66428BE38715A89C01503C706B07F1841BCC7B6C (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::removeServerWithoutCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_removeServerWithoutCoroutine_mD9C131DFC457CA388DDEDE264BA404BC3BF195BF (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Logger::LogWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogWarning_mB4F5ECB5DEFBBC92EE827F376509D0CD1C7D7C03 (String_t* ___msg0, const RuntimeMethod* method);
// System.Boolean Mirror.Cloud.ListServerService.ServerJson::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServerJson_Validate_mA5812CC578933233C5F14DF484D2CF80061C5BC8 (ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Mirror.Cloud.ListServerService.ListServerServerApi::addServer(Mirror.Cloud.ListServerService.ServerJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListServerServerApi_addServer_m07095F3A41AF366AAE9DC184F9F968206277EE7F (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  ___server0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::UpdateServer(Mirror.Cloud.ListServerService.ServerJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_UpdateServer_m0D0606C1A2ADA9F51738CA601B65A59BDF37CDC4 (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  ___server0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.PartialServerJson::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialServerJson_Validate_mDA60636F178F2187E6178D0DDC6D274DB3D0DEF9 (PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Mirror.Cloud.ListServerService.ListServerServerApi::updateServer(Mirror.Cloud.ListServerService.PartialServerJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListServerServerApi_updateServer_mC608E3913C41C9C3A19AB4E2989B4AC9669FD8CC (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B  ___server0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator Mirror.Cloud.ListServerService.ListServerServerApi::removeServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListServerServerApi_removeServer_m6F4BB34346163E77511C0E67F51A66728F635CAA (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<addServer>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CaddServerU3Ed__18__ctor_m11B346846D264328484CB2292AC7CF7CE6998A4D (U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<updateServer>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CupdateServerU3Ed__19__ctor_mD52CDD0A44D81546B0B63EF9ACF9109967DAB737 (U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<ping>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpingU3Ed__20__ctor_m36EBD1C7BE6DEC38F8BA7A839F614A4DE82EDE47 (U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<removeServer>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CremoveServerU3Ed__21__ctor_m75A25C2799A30520F24CA05BF59555A856B893E4 (U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mA28FDC699A2E3FA134BEED08127EBCCE0F4A355C (U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10 (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Mirror.Cloud.CreatedIdJson>(System.String)
inline CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F  JsonUtility_FromJson_TisCreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_mED28C3C0CDBAFB198F62A82A31E92DD7B1007A6C (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F  (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisCreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_mED28C3C0CDBAFB198F62A82A31E92DD7B1007A6C_gshared)(___json0, method);
}
// System.Collections.IEnumerator Mirror.Cloud.ListServerService.ListServerServerApi::ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListServerServerApi_ping_m003AE070BB04DACB48CC6F9DA38E629870F3682E (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_url_m802F6A7942362F28F2D856F17B2BDF8C2561734E (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.String[] System.Uri::get_Segments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Uri_get_Segments_m1E7A75D04E7D1806685F517A82483A0A0F7EA120 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_method_mDEB685B259E296FAE2484B504108AA384A3E0A4F (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerJson>::.ctor()
inline void UnityEvent_1__ctor_mC85CDCA0C6A5A0EE2B1641886649D3EF2C7DD0F2 (UnityEvent_1_t95ECF8AD8934D8C797DE09BAC4AE4FC09E788D2A * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t95ECF8AD8934D8C797DE09BAC4AE4FC09E788D2A *, const RuntimeMethod*))UnityEvent_1__ctor_mC85CDCA0C6A5A0EE2B1641886649D3EF2C7DD0F2_gshared)(__this, method);
}
// Mirror.Cloud.ListServerService.KeyValue[] Mirror.Cloud.ListServerService.CustomDataHelper::ToKeyValueArray(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* CustomDataHelper_ToKeyValueArray_m8BE5C92CC15CE5C8A20DDF0630FB9A8B51747F5C (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.CustomDataHelper::ValidateCustomData(Mirror.Cloud.ListServerService.KeyValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDataHelper_ValidateCustomData_mFD2074D983ACF751DDCCFE07A50A4BB47EF038E4 (KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* ___customData0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.PartialServerJson::SetCustomData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialServerJson_SetCustomData_m1E3206BF0753934DE199277C6E1B4CEB6FD10902 (PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___data0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Logger::LogRequest(System.String,System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogRequest_m62FE8B8C249AC1CAD3A34BAD7CADF742F9E70AF4 (String_t* ___page0, String_t* ___method1, bool ___hasJson2, String_t* ___json3, const RuntimeMethod* method);
// System.Uri Mirror.Cloud.RequestCreator::CreateUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * RequestCreator_CreateUri_m906FCA0C88171FA1726BAB368941C13683480A52 (RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * __this, String_t* ___page0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mC259E6DCA8B4D38CED1D07BB0CB2CA00FC976E5C (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest Mirror.Cloud.RequestCreator::CreateWebRequest(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * RequestCreator_CreateWebRequest_m0C487AA9FA810424560B74F3EA09A3E6CC310A3B (RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * __this, String_t* ___page0, String_t* ___method1, String_t* ___json2, const RuntimeMethod* method);
// System.Collections.IEnumerator Mirror.Cloud.RequestCreator::SendRequestEnumerator(UnityEngine.Networking.UnityWebRequest,Mirror.Cloud.RequestSuccess,Mirror.Cloud.RequestFail)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RequestCreator_SendRequestEnumerator_mAC10259A4763A5695E019BC046C74EAC4FE6CE8D (RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * ___onSuccess1, RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * ___onFail2, const RuntimeMethod* method);
// System.Void Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestEnumeratorU3Ed__15__ctor_m345587D889D6FF23396EA611B089EDBDBAAFE32A (U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Uri Mirror.Cloud.ListServerService.ServerJson::GetServerUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ServerJson_GetServerUri_mE2DC79EBC7425FF39BBE21F8579D0CC0ECBFD37E (ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * __this, const RuntimeMethod* method);
// System.Uri Mirror.Cloud.ListServerService.ServerJson::GetCustomUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ServerJson_GetCustomUri_mBF1D0417197643A87CC329EDDF463B55E1554BCA (ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.ServerJson::SetCustomData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerJson_SetCustomData_mFA2B43E562FC2470D2DD8F5FFDC7E5E0FC46B9F6 (ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::.ctor()
inline void UnityEvent_1__ctor_m89F533F2E1E3AAA8666A7F708A021057A097FB39 (UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t69E4CC0E89FAC95DC0556CD7BE7577982CC1CE55 *, const RuntimeMethod*))UnityEvent_1__ctor_m89F533F2E1E3AAA8666A7F708A021057A097FB39_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Mirror.Cloud.ListServerService.CustomDataHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m637FA2B5B23ADB2D0834C0F8D4FA9D1FFDB43436 (U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.RequestSuccess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestSuccess__ctor_m3F3728350B1CFB5B659A7A17E92987067C3400E3 (RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Logger::LogResponse(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogResponse_m69B0BC4961D61880DE3D943E03EB60792E444643 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___statusRequest0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.RequestFail::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFail__ctor_m2209EFBCA9879589BB6E6DDEB8C5F231C4A392BD (RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestEnumeratorU3Ed__15_U3CU3Em__Finally1_m502ADB2813E350C9C135C07C71A9B0CE70489E26 (U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Logger::Verbose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Verbose_m58E5E28ED8DF98AB74256996CB5CF97CAD5FE1D7 (String_t* ___msg0, const RuntimeMethod* method);
// System.Boolean Mirror.Cloud.Extensions::IsOk(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Extensions_IsOk_m5D362F2652D710ACFE3B7CCE4E8D69800CF65762 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___webRequest0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.RequestSuccess::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestSuccess_Invoke_mC84186FF5F4FDB0D0661549471D147BB04BEE8D7 (RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * __this, String_t* ___responseBody0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.RequestFail::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFail_Invoke_m5AE58CE088A4C65651565FECCDE81D2228B18E6B (RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * __this, String_t* ___responseBody0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestEnumeratorU3Ed__15_System_IDisposable_Dispose_m16E5479DA9B40272EB914F40FD09921AA5C7C326 (U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * __this, const RuntimeMethod* method);
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
// Mirror.Cloud.ListServerService.ListServer Mirror.Cloud.ApiConnector::get_ListServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, const RuntimeMethod* method)
{
	{
		// public ListServer ListServer { get; private set; }
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_0 = __this->get_U3CListServerU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Mirror.Cloud.ApiConnector::set_ListServer(Mirror.Cloud.ListServerService.ListServer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiConnector_set_ListServer_mF515EEE5908AD2E4E313956A9A1EFAE4D197BB89 (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * ___value0, const RuntimeMethod* method)
{
	{
		// public ListServer ListServer { get; private set; }
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_0 = ___value0;
		__this->set_U3CListServerU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Mirror.Cloud.ApiConnector::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiConnector_Awake_m41F50BF85577F328582E1FD4BC7F15EE9A00E415 (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// requestCreator = new RequestCreator(ApiAddress, ApiKey, this);
		String_t* L_0 = __this->get_ApiAddress_4();
		String_t* L_1 = __this->get_ApiKey_5();
		RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * L_2 = (RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA *)il2cpp_codegen_object_new(RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA_il2cpp_TypeInfo_var);
		RequestCreator__ctor_m6DAA512714A02207DDEA5CEF79EA41D344D0666F(L_2, L_0, L_1, __this, /*hidden argument*/NULL);
		__this->set_requestCreator_7(L_2);
		// InitListServer();
		ApiConnector_InitListServer_mFE1728C612BFED7B6C820864AC6663EBCEBAA46A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ApiConnector::InitListServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiConnector_InitListServer_mFE1728C612BFED7B6C820864AC6663EBCEBAA46A (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// IListServerServerApi serverApi = new ListServerServerApi(this, requestCreator);
		RuntimeObject* L_0 = __this->get_requestCreator_7();
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_1 = (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B *)il2cpp_codegen_object_new(ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B_il2cpp_TypeInfo_var);
		ListServerServerApi__ctor_m9BDCAF70E6E03C76B0F0044AF40B935A36926B13(L_1, __this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// IListServerClientApi clientApi = new ListServerClientApi(this, requestCreator, _onServerListUpdated);
		RuntimeObject* L_2 = __this->get_requestCreator_7();
		ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * L_3 = __this->get__onServerListUpdated_6();
		ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * L_4 = (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C *)il2cpp_codegen_object_new(ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C_il2cpp_TypeInfo_var);
		ListServerClientApi__ctor_mEFD1F513D5F5E1A188C561F82F20A90784A0F483(L_4, __this, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// ListServer = new ListServer(serverApi, clientApi);
		RuntimeObject* L_5 = V_0;
		RuntimeObject* L_6 = V_1;
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_7 = (ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 *)il2cpp_codegen_object_new(ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135_il2cpp_TypeInfo_var);
		ListServer__ctor_m21DA24F269DCD98164F36357B43FAC4EC5059EA4(L_7, L_5, L_6, /*hidden argument*/NULL);
		ApiConnector_set_ListServer_mF515EEE5908AD2E4E313956A9A1EFAE4D197BB89_inline(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ApiConnector::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiConnector_OnDestroy_m91D5CA4E6603F6E7E431CC76CC8E27DD34A0D343 (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBaseApi_t677E0D395209779B8B78C10F528FB65A0EDE4389_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * G_B2_0 = NULL;
	ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * G_B1_0 = NULL;
	ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * G_B5_0 = NULL;
	ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * G_B4_0 = NULL;
	{
		// ListServer?.ServerApi.Shutdown();
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_0;
		L_0 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(__this, /*hidden argument*/NULL);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0016;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_2 = G_B2_0->get_ServerApi_0();
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Mirror.Cloud.IBaseApi::Shutdown() */, IBaseApi_t677E0D395209779B8B78C10F528FB65A0EDE4389_il2cpp_TypeInfo_var, L_2);
	}

IL_0016:
	{
		// ListServer?.ClientApi.Shutdown();
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_3;
		L_3 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(__this, /*hidden argument*/NULL);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0021:
	{
		NullCheck(G_B5_0);
		RuntimeObject* L_5 = G_B5_0->get_ClientApi_1();
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Mirror.Cloud.IBaseApi::Shutdown() */, IBaseApi_t677E0D395209779B8B78C10F528FB65A0EDE4389_il2cpp_TypeInfo_var, L_5);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ApiConnector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiConnector__ctor_m5E7B181F3CF1E5CBE78FA3800EB47F1245174995 (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] string ApiAddress = "";
		__this->set_ApiAddress_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// [SerializeField] string ApiKey = "";
		__this->set_ApiKey_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// [SerializeField] ServerListEvent _onServerListUpdated = new ServerListEvent();
		ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * L_0 = (ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA *)il2cpp_codegen_object_new(ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA_il2cpp_TypeInfo_var);
		ServerListEvent__ctor_m7B4C8C5D984E2EC917E1ECA46CD0D883E83457C7(L_0, /*hidden argument*/NULL);
		__this->set__onServerListUpdated_6(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine Mirror.Cloud.ApiConnector::Mirror.Cloud.ICoroutineRunner.StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ApiConnector_Mirror_Cloud_ICoroutineRunner_StartCoroutine_m9D5975DD6459F35537B428B13FC4065518F6AE2E (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___routine0;
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mirror.Cloud.ApiConnector::Mirror.Cloud.ICoroutineRunner.StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiConnector_Mirror_Cloud_ICoroutineRunner_StopCoroutine_m8A8CB4382643668BD7A3686B3A2997799696297B (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___routine0;
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Cloud.ApiConnector::Mirror.Cloud.ICoroutineRunner.StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiConnector_Mirror_Cloud_ICoroutineRunner_StopCoroutine_mFCD0C2036F1B8D2A174ABB277180EE35B79131C1 (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method)
{
	{
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = ___routine0;
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Mirror.Cloud.BaseApi::.ctor(Mirror.Cloud.ICoroutineRunner,Mirror.Cloud.IRequestCreator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseApi__ctor_m6ED58734DF44397364023344E2619283A48B85E6 (BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 * __this, RuntimeObject* ___runner0, RuntimeObject* ___requestCreator1, const RuntimeMethod* method)
{
	RuntimeObject* G_B2_0 = NULL;
	BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 * G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 * G_B1_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 * G_B4_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 * G_B3_1 = NULL;
	{
		// protected BaseApi(ICoroutineRunner runner, IRequestCreator requestCreator)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.runner = runner ?? throw new ArgumentNullException(nameof(runner));
		RuntimeObject* L_0 = ___runner0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DC608F009E3239E74265E933018C2F02BEB5B7D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseApi__ctor_m6ED58734DF44397364023344E2619283A48B85E6_RuntimeMethod_var)));
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_runner_0(G_B2_0);
		// this.requestCreator = requestCreator ?? throw new ArgumentNullException(nameof(requestCreator));
		RuntimeObject* L_3 = ___requestCreator1;
		RuntimeObject* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_002d;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_5 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F6D30154B5B65D42007FA1D185A34F4F5E484A5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseApi__ctor_m6ED58734DF44397364023344E2619283A48B85E6_RuntimeMethod_var)));
	}

IL_002d:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_requestCreator_1(G_B4_0);
		// }
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
// Conversion methods for marshalling of: Mirror.Cloud.CreatedIdJson
IL2CPP_EXTERN_C void CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshal_pinvoke(const CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F& unmarshaled, CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshaled_pinvoke& marshaled)
{
	marshaled.___id_0 = il2cpp_codegen_marshal_string(unmarshaled.get_id_0());
}
IL2CPP_EXTERN_C void CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshal_pinvoke_back(const CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshaled_pinvoke& marshaled, CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F& unmarshaled)
{
	unmarshaled.set_id_0(il2cpp_codegen_marshal_string_result(marshaled.___id_0));
}
// Conversion method for clean up from marshalling of: Mirror.Cloud.CreatedIdJson
IL2CPP_EXTERN_C void CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshal_pinvoke_cleanup(CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___id_0);
	marshaled.___id_0 = NULL;
}
// Conversion methods for marshalling of: Mirror.Cloud.CreatedIdJson
IL2CPP_EXTERN_C void CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshal_com(const CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F& unmarshaled, CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshaled_com& marshaled)
{
	marshaled.___id_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_id_0());
}
IL2CPP_EXTERN_C void CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshal_com_back(const CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshaled_com& marshaled, CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F& unmarshaled)
{
	unmarshaled.set_id_0(il2cpp_codegen_marshal_bstring_result(marshaled.___id_0));
}
// Conversion method for clean up from marshalling of: Mirror.Cloud.CreatedIdJson
IL2CPP_EXTERN_C void CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshal_com_cleanup(CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___id_0);
	marshaled.___id_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.Dictionary`2<System.String,System.String> Mirror.Cloud.ListServerService.CustomDataHelper::ToDictionary(Mirror.Cloud.ListServerService.KeyValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * CustomDataHelper_ToDictionary_mCB8A6B1B34E0D4A35B13A8BD0469050B219BEF5A (KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* ___keyValues0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_TisString_t_TisString_t_mC84ACD9759FD116FABF3C53417A47147F28C442C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mA061B5C2B290A7D09ACBF87F7601661B834EBCD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToDictionaryU3Eb__1_0_m2C8F7B33A11EFCDE8FD89AD109540B19073C6E9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToDictionaryU3Eb__1_1_m28A0C477B699FCAD35D1C235F650F8256DF1D62E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * G_B2_0 = NULL;
	KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* G_B2_1 = NULL;
	Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * G_B1_0 = NULL;
	KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* G_B1_1 = NULL;
	Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * G_B4_0 = NULL;
	Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * G_B4_1 = NULL;
	KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* G_B4_2 = NULL;
	Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * G_B3_0 = NULL;
	Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * G_B3_1 = NULL;
	KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* G_B3_2 = NULL;
	{
		// return keyValues.ToDictionary(x => x.key, x => x.value);
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_0 = ___keyValues0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var);
		Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * L_1 = ((U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var);
		U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 * L_3 = ((U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * L_4 = (Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F *)il2cpp_codegen_object_new(Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F_il2cpp_TypeInfo_var);
		Func_2__ctor_mA061B5C2B290A7D09ACBF87F7601661B834EBCD9(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CToDictionaryU3Eb__1_0_m2C8F7B33A11EFCDE8FD89AD109540B19073C6E9C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA061B5C2B290A7D09ACBF87F7601661B834EBCD9_RuntimeMethod_var);
		Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * L_5 = L_4;
		((U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var);
		Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * L_6 = ((U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var))->get_U3CU3E9__1_1_2();
		Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = G_B2_0;
			G_B4_2 = G_B2_1;
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var);
		U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 * L_8 = ((U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * L_9 = (Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F *)il2cpp_codegen_object_new(Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F_il2cpp_TypeInfo_var);
		Func_2__ctor_mA061B5C2B290A7D09ACBF87F7601661B834EBCD9(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec_U3CToDictionaryU3Eb__1_1_m28A0C477B699FCAD35D1C235F650F8256DF1D62E_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA061B5C2B290A7D09ACBF87F7601661B834EBCD9_RuntimeMethod_var);
		Func_2_t7C40E2A8111C9BA34F444A2F6858007BDE64980F * L_10 = L_9;
		((U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var))->set_U3CU3E9__1_1_2(L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_003f:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_11;
		L_11 = Enumerable_ToDictionary_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_TisString_t_TisString_t_mC84ACD9759FD116FABF3C53417A47147F28C442C((RuntimeObject*)(RuntimeObject*)G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/Enumerable_ToDictionary_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_TisString_t_TisString_t_mC84ACD9759FD116FABF3C53417A47147F28C442C_RuntimeMethod_var);
		return L_11;
	}
}
// Mirror.Cloud.ListServerService.KeyValue[] Mirror.Cloud.ListServerService.CustomDataHelper::ToKeyValueArray(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* CustomDataHelper_ToKeyValueArray_m8BE5C92CC15CE5C8A20DDF0630FB9A8B51747F5C (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_mCE01515D8177239195C4F2C05397060B1302241E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m6236E7059399A6BCC06A38420AE93B3BF1715076_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m270E1CE49DA684C3D93FDAB0F02D84E6A16CA525_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToKeyValueArrayU3Eb__2_0_m24F269C87648977ADEC23FC0D1760A899D6BBB11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 * G_B2_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B2_1 = NULL;
	Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 * G_B1_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B1_1 = NULL;
	{
		// return dictionary.Select(kvp => new KeyValue(kvp.Key, kvp.Value)).ToArray();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ___dictionary0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var);
		Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 * L_1 = ((U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var))->get_U3CU3E9__2_0_3();
		Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var);
		U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 * L_3 = ((U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 * L_4 = (Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 *)il2cpp_codegen_object_new(Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475_il2cpp_TypeInfo_var);
		Func_2__ctor_m270E1CE49DA684C3D93FDAB0F02D84E6A16CA525(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CToKeyValueArrayU3Eb__2_0_m24F269C87648977ADEC23FC0D1760A899D6BBB11_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m270E1CE49DA684C3D93FDAB0F02D84E6A16CA525_RuntimeMethod_var);
		Func_2_tBDC2A09D2A458FB104F902317A5A439830E7E475 * L_5 = L_4;
		((U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var))->set_U3CU3E9__2_0_3(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_mCE01515D8177239195C4F2C05397060B1302241E(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_mCE01515D8177239195C4F2C05397060B1302241E_RuntimeMethod_var);
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_7;
		L_7 = Enumerable_ToArray_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m6236E7059399A6BCC06A38420AE93B3BF1715076(L_6, /*hidden argument*/Enumerable_ToArray_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m6236E7059399A6BCC06A38420AE93B3BF1715076_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void Mirror.Cloud.ListServerService.CustomDataHelper::ValidateCustomData(Mirror.Cloud.ListServerService.KeyValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDataHelper_ValidateCustomData_mFD2074D983ACF751DDCCFE07A50A4BB47EF038E4 (KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* ___customData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m3D7CC37C1E9B55A556096483FCC1A6CEDC7D7EA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80607C7F16A0CDD957684CF46A693CC879F1E6E9);
		s_Il2CppMethodInitialized = true;
	}
	KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* V_0 = NULL;
	int32_t V_1 = 0;
	KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (customData == null)
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_0 = ___customData0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (customData.Length > MaxCustomData)
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_1 = ___customData0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) <= ((int32_t)((int32_t)16))))
		{
			goto IL_0032;
		}
	}
	{
		// Logger.LogError($"There can only be {MaxCustomData} custom data but there was {customData.Length} values given");
		int32_t L_2 = ((int32_t)16);
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_4 = ___customData0;
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral80607C7F16A0CDD957684CF46A693CC879F1E6E9, L_3, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogError_m784E8AB1B1053A7F68F99892E45C69D5576E4247(L_7, /*hidden argument*/NULL);
		// Array.Resize(ref customData, MaxCustomData);
		Array_Resize_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m3D7CC37C1E9B55A556096483FCC1A6CEDC7D7EA3((KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9**)(&___customData0), ((int32_t)16), /*hidden argument*/Array_Resize_TisKeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_m3D7CC37C1E9B55A556096483FCC1A6CEDC7D7EA3_RuntimeMethod_var);
	}

IL_0032:
	{
		// foreach (KeyValue item in customData)
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_8 = ___customData0;
		V_0 = L_8;
		V_1 = 0;
		goto IL_004b;
	}

IL_0038:
	{
		// foreach (KeyValue item in customData)
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		// item.Validate();
		KeyValue_Validate_m3BE22FA299FB931E9356209EAEA57168ED845665((KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 *)(&V_2), /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004b:
	{
		// foreach (KeyValue item in customData)
		int32_t L_14 = V_1;
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Mirror.Cloud.ErrorJson
IL2CPP_EXTERN_C void ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshal_pinvoke(const ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504& unmarshaled, ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshaled_pinvoke& marshaled)
{
	marshaled.___code_0 = il2cpp_codegen_marshal_string(unmarshaled.get_code_0());
	marshaled.___message_1 = il2cpp_codegen_marshal_string(unmarshaled.get_message_1());
}
IL2CPP_EXTERN_C void ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshal_pinvoke_back(const ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshaled_pinvoke& marshaled, ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504& unmarshaled)
{
	unmarshaled.set_code_0(il2cpp_codegen_marshal_string_result(marshaled.___code_0));
	unmarshaled.set_message_1(il2cpp_codegen_marshal_string_result(marshaled.___message_1));
}
// Conversion method for clean up from marshalling of: Mirror.Cloud.ErrorJson
IL2CPP_EXTERN_C void ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshal_pinvoke_cleanup(ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___code_0);
	marshaled.___code_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___message_1);
	marshaled.___message_1 = NULL;
}
// Conversion methods for marshalling of: Mirror.Cloud.ErrorJson
IL2CPP_EXTERN_C void ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshal_com(const ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504& unmarshaled, ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshaled_com& marshaled)
{
	marshaled.___code_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_code_0());
	marshaled.___message_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_message_1());
}
IL2CPP_EXTERN_C void ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshal_com_back(const ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshaled_com& marshaled, ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504& unmarshaled)
{
	unmarshaled.set_code_0(il2cpp_codegen_marshal_bstring_result(marshaled.___code_0));
	unmarshaled.set_message_1(il2cpp_codegen_marshal_bstring_result(marshaled.___message_1));
}
// Conversion method for clean up from marshalling of: Mirror.Cloud.ErrorJson
IL2CPP_EXTERN_C void ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshal_com_cleanup(ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___code_0);
	marshaled.___code_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___message_1);
	marshaled.___message_1 = NULL;
}
// System.Int32 Mirror.Cloud.ErrorJson::get_HtmlCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ErrorJson_get_HtmlCode_m761C1ED3428AB310E92CAC4B3A4693C0E1F780C7 (ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504 * __this, const RuntimeMethod* method)
{
	{
		// public int HtmlCode => int.Parse(code);
		String_t* L_0 = __this->get_code_0();
		int32_t L_1;
		L_1 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ErrorJson_get_HtmlCode_m761C1ED3428AB310E92CAC4B3A4693C0E1F780C7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504 * _thisAdjusted = reinterpret_cast<ErrorJson_t81A3DBBBA2DADF565017DB1F45DBC40575C56504 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ErrorJson_get_HtmlCode_m761C1ED3428AB310E92CAC4B3A4693C0E1F780C7(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Mirror.Cloud.Extensions::IsOk(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Extensions_IsOk_m5D362F2652D710ACFE3B7CCE4E8D69800CF65762 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___webRequest0, const RuntimeMethod* method)
{
	{
		// return 200 <= webRequest.responseCode && webRequest.responseCode <= 299;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___webRequest0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(L_0, /*hidden argument*/NULL);
		if ((((int64_t)((int64_t)((int64_t)((int32_t)200)))) > ((int64_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = ___webRequest0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int64_t)L_3) > ((int64_t)((int64_t)((int64_t)((int32_t)299)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)0;
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
// Conversion methods for marshalling of: Mirror.Cloud.ListServerService.KeyValue
IL2CPP_EXTERN_C void KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_pinvoke(const KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4& unmarshaled, KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke& marshaled)
{
	marshaled.___key_2 = il2cpp_codegen_marshal_string(unmarshaled.get_key_2());
	marshaled.___value_3 = il2cpp_codegen_marshal_string(unmarshaled.get_value_3());
}
IL2CPP_EXTERN_C void KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_pinvoke_back(const KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke& marshaled, KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4& unmarshaled)
{
	unmarshaled.set_key_2(il2cpp_codegen_marshal_string_result(marshaled.___key_2));
	unmarshaled.set_value_3(il2cpp_codegen_marshal_string_result(marshaled.___value_3));
}
// Conversion method for clean up from marshalling of: Mirror.Cloud.ListServerService.KeyValue
IL2CPP_EXTERN_C void KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_pinvoke_cleanup(KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___key_2);
	marshaled.___key_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___value_3);
	marshaled.___value_3 = NULL;
}
// Conversion methods for marshalling of: Mirror.Cloud.ListServerService.KeyValue
IL2CPP_EXTERN_C void KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_com(const KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4& unmarshaled, KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com& marshaled)
{
	marshaled.___key_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_key_2());
	marshaled.___value_3 = il2cpp_codegen_marshal_bstring(unmarshaled.get_value_3());
}
IL2CPP_EXTERN_C void KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_com_back(const KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com& marshaled, KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4& unmarshaled)
{
	unmarshaled.set_key_2(il2cpp_codegen_marshal_bstring_result(marshaled.___key_2));
	unmarshaled.set_value_3(il2cpp_codegen_marshal_bstring_result(marshaled.___value_3));
}
// Conversion method for clean up from marshalling of: Mirror.Cloud.ListServerService.KeyValue
IL2CPP_EXTERN_C void KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_com_cleanup(KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___key_2);
	marshaled.___key_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___value_3);
	marshaled.___value_3 = NULL;
}
// System.Void Mirror.Cloud.ListServerService.KeyValue::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValue__ctor_mB02C8E33135318FC4B625DBFF40D732188B13B39 (KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		// this.key = key;
		String_t* L_0 = ___key0;
		__this->set_key_2(L_0);
		// this.value = value;
		String_t* L_1 = ___value1;
		__this->set_value_3(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void KeyValue__ctor_mB02C8E33135318FC4B625DBFF40D732188B13B39_AdjustorThunk (RuntimeObject * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 * _thisAdjusted = reinterpret_cast<KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 *>(__this + _offset);
	KeyValue__ctor_mB02C8E33135318FC4B625DBFF40D732188B13B39(_thisAdjusted, ___key0, ___value1, method);
}
// System.Void Mirror.Cloud.ListServerService.KeyValue::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValue_Validate_m3BE22FA299FB931E9356209EAEA57168ED845665 (KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D7CA07B5AD79042346F8AF1118923753D33678D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F0CF00362A261A099C1B64E912811D95BA4144);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (key.Length > MaxKeySize)
		String_t* L_0 = __this->get_key_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)32))))
		{
			goto IL_0039;
		}
	}
	{
		// Logger.LogError($"Custom Data must have key with length less than {MaxKeySize}");
		int32_t L_2 = ((int32_t)32);
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral40F0CF00362A261A099C1B64E912811D95BA4144, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogError_m784E8AB1B1053A7F68F99892E45C69D5576E4247(L_4, /*hidden argument*/NULL);
		// key = key.Substring(0, MaxKeySize);
		String_t* L_5 = __this->get_key_2();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_5, 0, ((int32_t)32), /*hidden argument*/NULL);
		__this->set_key_2(L_6);
	}

IL_0039:
	{
		// if (value.Length > MaxValueSize)
		String_t* L_7 = __this->get_value_3();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)256))))
		{
			goto IL_007b;
		}
	}
	{
		// Logger.LogError($"Custom Data must have value with length less than {MaxValueSize}");
		int32_t L_9 = ((int32_t)256);
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral0D7CA07B5AD79042346F8AF1118923753D33678D, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogError_m784E8AB1B1053A7F68F99892E45C69D5576E4247(L_11, /*hidden argument*/NULL);
		// value = value.Substring(0, MaxValueSize);
		String_t* L_12 = __this->get_value_3();
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_12, 0, ((int32_t)256), /*hidden argument*/NULL);
		__this->set_value_3(L_13);
	}

IL_007b:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void KeyValue_Validate_m3BE22FA299FB931E9356209EAEA57168ED845665_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 * _thisAdjusted = reinterpret_cast<KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 *>(__this + _offset);
	KeyValue_Validate_m3BE22FA299FB931E9356209EAEA57168ED845665(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.Cloud.ListServerService.ListServer::.ctor(Mirror.Cloud.ListServerService.IListServerServerApi,Mirror.Cloud.ListServerService.IListServerClientApi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServer__ctor_m21DA24F269DCD98164F36357B43FAC4EC5059EA4 (ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * __this, RuntimeObject* ___serverApi0, RuntimeObject* ___clientApi1, const RuntimeMethod* method)
{
	RuntimeObject* G_B2_0 = NULL;
	ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * G_B1_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * G_B4_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * G_B3_1 = NULL;
	{
		// public ListServer(IListServerServerApi serverApi, IListServerClientApi clientApi)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ServerApi = serverApi ?? throw new ArgumentNullException(nameof(serverApi));
		RuntimeObject* L_0 = ___serverApi0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33800EFBF01747EBC7EE411FA92A45DA78F30A85)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListServer__ctor_m21DA24F269DCD98164F36357B43FAC4EC5059EA4_RuntimeMethod_var)));
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_ServerApi_0(G_B2_0);
		// ClientApi = clientApi ?? throw new ArgumentNullException(nameof(clientApi));
		RuntimeObject* L_3 = ___clientApi1;
		RuntimeObject* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_002d;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_5 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BBE16AA1C4389272AB4027D33CD93FE17652612)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListServer__ctor_m21DA24F269DCD98164F36357B43FAC4EC5059EA4_RuntimeMethod_var)));
	}

IL_002d:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_ClientApi_1(G_B4_0);
		// }
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
// System.Void Mirror.Cloud.ListServerService.ListServerBaseApi::.ctor(Mirror.Cloud.ICoroutineRunner,Mirror.Cloud.IRequestCreator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerBaseApi__ctor_mDEE98593ABEC48907E02B39EBC03E3205089FD9E (ListServerBaseApi_tCAA2999579ADE77AEFC19DCCB5BB40B7A0AB3268 * __this, RuntimeObject* ___runner0, RuntimeObject* ___requestCreator1, const RuntimeMethod* method)
{
	{
		// protected ListServerBaseApi(ICoroutineRunner runner, IRequestCreator requestCreator) : base(runner, requestCreator)
		RuntimeObject* L_0 = ___runner0;
		RuntimeObject* L_1 = ___requestCreator1;
		BaseApi__ctor_m6ED58734DF44397364023344E2619283A48B85E6(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
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
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi::add_onServerListUpdated(UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerClientApi_add_onServerListUpdated_m2755148F143807B2089F46B4ED5F28F28AEFA92E (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mA383E6F1A5616232890049A3253BAFE5DD7A9978_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add => _onServerListUpdated.AddListener(value);
		ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * L_0 = __this->get__onServerListUpdated_2();
		UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * L_1 = ___value0;
		NullCheck(L_0);
		UnityEvent_1_AddListener_mA383E6F1A5616232890049A3253BAFE5DD7A9978(L_0, L_1, /*hidden argument*/UnityEvent_1_AddListener_mA383E6F1A5616232890049A3253BAFE5DD7A9978_RuntimeMethod_var);
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi::remove_onServerListUpdated(UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerClientApi_remove_onServerListUpdated_mF1DB9E19130FA72B280CB78E4297B6A41C726B5B (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m81FA3EA64C6A797F1842CD36CB33183E95660140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove => _onServerListUpdated.RemoveListener(value);
		ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * L_0 = __this->get__onServerListUpdated_2();
		UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * L_1 = ___value0;
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m81FA3EA64C6A797F1842CD36CB33183E95660140(L_0, L_1, /*hidden argument*/UnityEvent_1_RemoveListener_m81FA3EA64C6A797F1842CD36CB33183E95660140_RuntimeMethod_var);
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi::.ctor(Mirror.Cloud.ICoroutineRunner,Mirror.Cloud.IRequestCreator,Mirror.Cloud.ServerListEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerClientApi__ctor_mEFD1F513D5F5E1A188C561F82F20A90784A0F483 (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, RuntimeObject* ___runner0, RuntimeObject* ___requestCreator1, ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * ___onServerListUpdated2, const RuntimeMethod* method)
{
	{
		// public ListServerClientApi(ICoroutineRunner runner, IRequestCreator requestCreator, ServerListEvent onServerListUpdated) : base(runner, requestCreator)
		RuntimeObject* L_0 = ___runner0;
		RuntimeObject* L_1 = ___requestCreator1;
		ListServerBaseApi__ctor_mDEE98593ABEC48907E02B39EBC03E3205089FD9E(__this, L_0, L_1, /*hidden argument*/NULL);
		// _onServerListUpdated = onServerListUpdated;
		ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * L_2 = ___onServerListUpdated2;
		__this->set__onServerListUpdated_2(L_2);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerClientApi_Shutdown_m09F5C2ABBEB350E5944892667F058BD0FFC21D4E (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, const RuntimeMethod* method)
{
	{
		// StopGetServerListRepeat();
		ListServerClientApi_StopGetServerListRepeat_mF79C138DFA311D9A49CE49F47EE9E889AF940ACC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi::GetServerList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerClientApi_GetServerList_m595166898AFCD3FE9C9E3674327AFB15E6D24A63 (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// runner.StartCoroutine(getServerList());
		RuntimeObject* L_0 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)__this)->get_runner_0();
		RuntimeObject* L_1;
		L_1 = ListServerClientApi_getServerList_mE8AE311010096A737DDC6F2C3AD4A0D80673B512(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = InterfaceFuncInvoker1< Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *, RuntimeObject* >::Invoke(0 /* UnityEngine.Coroutine Mirror.Cloud.ICoroutineRunner::StartCoroutine(System.Collections.IEnumerator) */, ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi::StartGetServerListRepeat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerClientApi_StartGetServerListRepeat_m6C7FE9F84A2EABD1689B9E21911C198895C6B737 (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, int32_t ___interval0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// getServerListRepeatCoroutine = runner.StartCoroutine(GetServerListRepeat(interval));
		RuntimeObject* L_0 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)__this)->get_runner_0();
		int32_t L_1 = ___interval0;
		RuntimeObject* L_2;
		L_2 = ListServerClientApi_GetServerListRepeat_mD201F09EBE19752302663F6A0C40D91965DA71CC(__this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = InterfaceFuncInvoker1< Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *, RuntimeObject* >::Invoke(0 /* UnityEngine.Coroutine Mirror.Cloud.ICoroutineRunner::StartCoroutine(System.Collections.IEnumerator) */, ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var, L_0, L_2);
		__this->set_getServerListRepeatCoroutine_3(L_3);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi::StopGetServerListRepeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerClientApi_StopGetServerListRepeat_mF79C138DFA311D9A49CE49F47EE9E889AF940ACC (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner.IsNotNull() && getServerListRepeatCoroutine != null)
		RuntimeObject* L_0 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)__this)->get_runner_0();
		bool L_1;
		L_1 = UnityEqualCheckExtension_IsNotNull_m5166D412E4EFDA5D0CDA57FF03C2C60AFC138913(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2 = __this->get_getServerListRepeatCoroutine_3();
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// runner.StopCoroutine(getServerListRepeatCoroutine);
		RuntimeObject* L_3 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)__this)->get_runner_0();
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4 = __this->get_getServerListRepeatCoroutine_3();
		NullCheck(L_3);
		InterfaceActionInvoker1< Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * >::Invoke(2 /* System.Void Mirror.Cloud.ICoroutineRunner::StopCoroutine(UnityEngine.Coroutine) */, ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Mirror.Cloud.ListServerService.ListServerClientApi::GetServerListRepeat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListServerClientApi_GetServerListRepeat_mD201F09EBE19752302663F6A0C40D91965DA71CC (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, int32_t ___interval0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E * L_0 = (U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E *)il2cpp_codegen_object_new(U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E_il2cpp_TypeInfo_var);
		U3CGetServerListRepeatU3Ed__10__ctor_m266442BE0D94127F8E9CADB1698E630EE260C6B0(L_0, 0, /*hidden argument*/NULL);
		U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E * L_2 = L_1;
		int32_t L_3 = ___interval0;
		NullCheck(L_2);
		L_2->set_interval_3(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator Mirror.Cloud.ListServerService.ListServerClientApi::getServerList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListServerClientApi_getServerList_mE8AE311010096A737DDC6F2C3AD4A0D80673B512 (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C * L_0 = (U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C *)il2cpp_codegen_object_new(U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C_il2cpp_TypeInfo_var);
		U3CgetServerListU3Ed__11__ctor_m46814C413E44A8271DEC519B16A1B8C5BCDDB0EF(L_0, 0, /*hidden argument*/NULL);
		U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi::<getServerList>g__onSuccess|11_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerClientApi_U3CgetServerListU3Eg__onSuccessU7C11_0_mA8F057772B76D795BAD5DDE8426455F2FEBF472A (ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * __this, String_t* ___responseBody0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_m487953A1FD6702F8E65F1FD3C1C0107D3C5C0B48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mCE4F60CBC2A05FAE52AB4FD840716FF8AD8B6EFF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * G_B2_0 = NULL;
	ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * G_B1_0 = NULL;
	{
		// ServerCollectionJson serverlist = JsonUtility.FromJson<ServerCollectionJson>(responseBody);
		String_t* L_0 = ___responseBody0;
		ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  L_1;
		L_1 = JsonUtility_FromJson_TisServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_m487953A1FD6702F8E65F1FD3C1C0107D3C5C0B48(L_0, /*hidden argument*/JsonUtility_FromJson_TisServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_m487953A1FD6702F8E65F1FD3C1C0107D3C5C0B48_RuntimeMethod_var);
		V_0 = L_1;
		// _onServerListUpdated?.Invoke(serverlist);
		ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * L_2 = __this->get__onServerListUpdated_2();
		ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  L_4 = V_0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mCE4F60CBC2A05FAE52AB4FD840716FF8AD8B6EFF(G_B2_0, L_4, /*hidden argument*/UnityEvent_1_Invoke_mCE4F60CBC2A05FAE52AB4FD840716FF8AD8B6EFF_RuntimeMethod_var);
		// }
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
// System.Boolean Mirror.Cloud.ListServerService.ListServerServerApi::get_ServerInList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListServerServerApi_get_ServerInList_mFB93A779FB84F9B1685E150EB5DAEF8EFA335597 (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, const RuntimeMethod* method)
{
	{
		// public bool ServerInList => added;
		bool L_0 = __this->get_added_7();
		return L_0;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::.ctor(Mirror.Cloud.ICoroutineRunner,Mirror.Cloud.IRequestCreator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi__ctor_m9BDCAF70E6E03C76B0F0044AF40B935A36926B13 (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, RuntimeObject* ___runner0, RuntimeObject* ___requestCreator1, const RuntimeMethod* method)
{
	{
		// public ListServerServerApi(ICoroutineRunner runner, IRequestCreator requestCreator) : base(runner, requestCreator)
		RuntimeObject* L_0 = ___runner0;
		RuntimeObject* L_1 = ___requestCreator1;
		ListServerBaseApi__ctor_mDEE98593ABEC48907E02B39EBC03E3205089FD9E(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_Shutdown_m7974E9621937A19416D201000166608DC9CF13C6 (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, const RuntimeMethod* method)
{
	{
		// stopPingCoroutine();
		ListServerServerApi_stopPingCoroutine_m66428BE38715A89C01503C706B07F1841BCC7B6C(__this, /*hidden argument*/NULL);
		// if (added)
		bool L_0 = __this->get_added_7();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// removeServerWithoutCoroutine();
		ListServerServerApi_removeServerWithoutCoroutine_mD9C131DFC457CA388DDEDE264BA404BC3BF195BF(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// added = false;
		__this->set_added_7((bool)0);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::AddServer(Mirror.Cloud.ListServerService.ServerJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_AddServer_m80E99312C230ABDFE6E0C56BF5A191A5E4453564 (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  ___server0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23FE3D4F547783B3B122ABD1703CC1F7898638D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (added) { Logger.LogWarning("AddServer called when server was already adding or added"); return; }
		bool L_0 = __this->get_added_7();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (added) { Logger.LogWarning("AddServer called when server was already adding or added"); return; }
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogWarning_mB4F5ECB5DEFBBC92EE827F376509D0CD1C7D7C03(_stringLiteral23FE3D4F547783B3B122ABD1703CC1F7898638D5, /*hidden argument*/NULL);
		// if (added) { Logger.LogWarning("AddServer called when server was already adding or added"); return; }
		return;
	}

IL_0013:
	{
		// bool valid = server.Validate();
		bool L_1;
		L_1 = ServerJson_Validate_mA5812CC578933233C5F14DF484D2CF80061C5BC8((ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 *)(&___server0), /*hidden argument*/NULL);
		// if (!valid) { return; }
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// if (!valid) { return; }
		return;
	}

IL_001d:
	{
		// runner.StartCoroutine(addServer(server));
		RuntimeObject* L_2 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)__this)->get_runner_0();
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_3 = ___server0;
		RuntimeObject* L_4;
		L_4 = ListServerServerApi_addServer_m07095F3A41AF366AAE9DC184F9F968206277EE7F(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = InterfaceFuncInvoker1< Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *, RuntimeObject* >::Invoke(0 /* UnityEngine.Coroutine Mirror.Cloud.ICoroutineRunner::StartCoroutine(System.Collections.IEnumerator) */, ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var, L_2, L_4);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::UpdateServer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_UpdateServer_mA57280433B11D6F55C92234D34581310ADFE610D (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, int32_t ___newPlayerCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6495F7B652B2430D9E8D1B9BB71ACC8F00D22077);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!added) { Logger.LogWarning("UpdateServer called when before server was added"); return; }
		bool L_0 = __this->get_added_7();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (!added) { Logger.LogWarning("UpdateServer called when before server was added"); return; }
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogWarning_mB4F5ECB5DEFBBC92EE827F376509D0CD1C7D7C03(_stringLiteral6495F7B652B2430D9E8D1B9BB71ACC8F00D22077, /*hidden argument*/NULL);
		// if (!added) { Logger.LogWarning("UpdateServer called when before server was added"); return; }
		return;
	}

IL_0013:
	{
		// currentServer.playerCount = newPlayerCount;
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * L_1 = __this->get_address_of_currentServer_4();
		int32_t L_2 = ___newPlayerCount0;
		L_1->set_playerCount_2(L_2);
		// UpdateServer(currentServer);
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_3 = __this->get_currentServer_4();
		ListServerServerApi_UpdateServer_m0D0606C1A2ADA9F51738CA601B65A59BDF37CDC4(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::UpdateServer(Mirror.Cloud.ListServerService.ServerJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_UpdateServer_m0D0606C1A2ADA9F51738CA601B65A59BDF37CDC4 (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  ___server0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6495F7B652B2430D9E8D1B9BB71ACC8F00D22077);
		s_Il2CppMethodInitialized = true;
	}
	PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!added) { Logger.LogWarning("UpdateServer called when before server was added"); return; }
		bool L_0 = __this->get_added_7();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (!added) { Logger.LogWarning("UpdateServer called when before server was added"); return; }
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogWarning_mB4F5ECB5DEFBBC92EE827F376509D0CD1C7D7C03(_stringLiteral6495F7B652B2430D9E8D1B9BB71ACC8F00D22077, /*hidden argument*/NULL);
		// if (!added) { Logger.LogWarning("UpdateServer called when before server was added"); return; }
		return;
	}

IL_0013:
	{
		// PartialServerJson partialServer = new PartialServerJson
		// {
		//     displayName = server.displayName,
		//     playerCount = server.playerCount,
		//     maxPlayerCount = server.maxPlayerCount,
		//     customData = server.customData,
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B ));
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_1 = ___server0;
		String_t* L_2 = L_1.get_displayName_4();
		(&V_1)->set_displayName_2(L_2);
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_3 = ___server0;
		int32_t L_4 = L_3.get_playerCount_2();
		(&V_1)->set_playerCount_0(L_4);
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_5 = ___server0;
		int32_t L_6 = L_5.get_maxPlayerCount_3();
		(&V_1)->set_maxPlayerCount_1(L_6);
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_7 = ___server0;
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_8 = L_7.get_customData_7();
		(&V_1)->set_customData_3(L_8);
		PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B  L_9 = V_1;
		V_0 = L_9;
		// partialServer.Validate();
		PartialServerJson_Validate_mDA60636F178F2187E6178D0DDC6D274DB3D0DEF9((PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B *)(&V_0), /*hidden argument*/NULL);
		// runner.StartCoroutine(updateServer(partialServer));
		RuntimeObject* L_10 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)__this)->get_runner_0();
		PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B  L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = ListServerServerApi_updateServer_mC608E3913C41C9C3A19AB4E2989B4AC9669FD8CC(__this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
		L_13 = InterfaceFuncInvoker1< Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *, RuntimeObject* >::Invoke(0 /* UnityEngine.Coroutine Mirror.Cloud.ICoroutineRunner::StartCoroutine(System.Collections.IEnumerator) */, ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var, L_10, L_12);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::RemoveServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_RemoveServer_m5E37E4695676EF759FA28BD40761A485D2900EED (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral097A0587884D22D3CEC693DA0AF8FBAE05FB47F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!added) { return; }
		bool L_0 = __this->get_added_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!added) { return; }
		return;
	}

IL_0009:
	{
		// if (string.IsNullOrEmpty(serverId))
		String_t* L_1 = __this->get_serverId_5();
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Logger.LogWarning("Can not remove server because serverId was empty");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogWarning_mB4F5ECB5DEFBBC92EE827F376509D0CD1C7D7C03(_stringLiteral097A0587884D22D3CEC693DA0AF8FBAE05FB47F8, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0021:
	{
		// stopPingCoroutine();
		ListServerServerApi_stopPingCoroutine_m66428BE38715A89C01503C706B07F1841BCC7B6C(__this, /*hidden argument*/NULL);
		// runner.StartCoroutine(removeServer());
		RuntimeObject* L_3 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)__this)->get_runner_0();
		RuntimeObject* L_4;
		L_4 = ListServerServerApi_removeServer_m6F4BB34346163E77511C0E67F51A66728F635CAA(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = InterfaceFuncInvoker1< Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *, RuntimeObject* >::Invoke(0 /* UnityEngine.Coroutine Mirror.Cloud.ICoroutineRunner::StartCoroutine(System.Collections.IEnumerator) */, ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var, L_3, L_4);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::stopPingCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_stopPingCoroutine_m66428BE38715A89C01503C706B07F1841BCC7B6C (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_pingCoroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get__pingCoroutine_6();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// runner.StopCoroutine(_pingCoroutine);
		RuntimeObject* L_1 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)__this)->get_runner_0();
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2 = __this->get__pingCoroutine_6();
		NullCheck(L_1);
		InterfaceActionInvoker1< Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * >::Invoke(2 /* System.Void Mirror.Cloud.ICoroutineRunner::StopCoroutine(UnityEngine.Coroutine) */, ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var, L_1, L_2);
		// _pingCoroutine = null;
		__this->set__pingCoroutine_6((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Mirror.Cloud.ListServerService.ListServerServerApi::addServer(Mirror.Cloud.ListServerService.ServerJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListServerServerApi_addServer_m07095F3A41AF366AAE9DC184F9F968206277EE7F (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  ___server0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9 * L_0 = (U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9 *)il2cpp_codegen_object_new(U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9_il2cpp_TypeInfo_var);
		U3CaddServerU3Ed__18__ctor_m11B346846D264328484CB2292AC7CF7CE6998A4D(L_0, 0, /*hidden argument*/NULL);
		U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9 * L_2 = L_1;
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_3 = ___server0;
		NullCheck(L_2);
		L_2->set_server_3(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator Mirror.Cloud.ListServerService.ListServerServerApi::updateServer(Mirror.Cloud.ListServerService.PartialServerJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListServerServerApi_updateServer_mC608E3913C41C9C3A19AB4E2989B4AC9669FD8CC (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B  ___server0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0 * L_0 = (U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0 *)il2cpp_codegen_object_new(U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0_il2cpp_TypeInfo_var);
		U3CupdateServerU3Ed__19__ctor_mD52CDD0A44D81546B0B63EF9ACF9109967DAB737(L_0, 0, /*hidden argument*/NULL);
		U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0 * L_2 = L_1;
		PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B  L_3 = ___server0;
		NullCheck(L_2);
		L_2->set_server_3(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator Mirror.Cloud.ListServerService.ListServerServerApi::ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListServerServerApi_ping_m003AE070BB04DACB48CC6F9DA38E629870F3682E (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C * L_0 = (U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C *)il2cpp_codegen_object_new(U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C_il2cpp_TypeInfo_var);
		U3CpingU3Ed__20__ctor_m36EBD1C7BE6DEC38F8BA7A839F614A4DE82EDE47(L_0, 0, /*hidden argument*/NULL);
		U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Mirror.Cloud.ListServerService.ListServerServerApi::removeServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListServerServerApi_removeServer_m6F4BB34346163E77511C0E67F51A66728F635CAA (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B * L_0 = (U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B *)il2cpp_codegen_object_new(U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B_il2cpp_TypeInfo_var);
		U3CremoveServerU3Ed__21__ctor_m75A25C2799A30520F24CA05BF59555A856B893E4(L_0, 0, /*hidden argument*/NULL);
		U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::removeServerWithoutCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_removeServerWithoutCoroutine_mD9C131DFC457CA388DDEDE264BA404BC3BF195BF (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CremoveServerWithoutCoroutineU3Eb__0_m60D67ACBBB4A39CA93EDD26A9FF0CB9257D7D67D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral097A0587884D22D3CEC693DA0AF8FBAE05FB47F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8188B12204D77846CFFD9F3AAEA0FC5BA6D31D0C);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053 * L_0 = (U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass22_0__ctor_mA28FDC699A2E3FA134BEED08127EBCCE0F4A355C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (string.IsNullOrEmpty(serverId))
		String_t* L_1 = __this->get_serverId_5();
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Logger.LogWarning("Can not remove server because serverId was empty");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogWarning_mB4F5ECB5DEFBBC92EE827F376509D0CD1C7D7C03(_stringLiteral097A0587884D22D3CEC693DA0AF8FBAE05FB47F8, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// UnityWebRequest request = requestCreator.Delete("servers/" + serverId);
		U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053 * L_3 = V_0;
		RuntimeObject* L_4 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)__this)->get_requestCreator_1();
		String_t* L_5 = __this->get_serverId_5();
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8188B12204D77846CFFD9F3AAEA0FC5BA6D31D0C, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7;
		L_7 = InterfaceFuncInvoker1< UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t* >::Invoke(0 /* UnityEngine.Networking.UnityWebRequest Mirror.Cloud.IRequestCreator::Delete(System.String) */, IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var, L_4, L_6);
		NullCheck(L_3);
		L_3->set_request_0(L_7);
		// UnityWebRequestAsyncOperation operation = request.SendWebRequest();
		U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053 * L_8 = V_0;
		NullCheck(L_8);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = L_8->get_request_0();
		NullCheck(L_9);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_10;
		L_10 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_9, /*hidden argument*/NULL);
		// operation.completed += (op) =>
		// {
		//     Logger.LogResponse(request);
		// };
		U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053 * L_11 = V_0;
		Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * L_12 = (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *)il2cpp_codegen_object_new(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass22_0_U3CremoveServerWithoutCoroutineU3Eb__0_m60D67ACBBB4A39CA93EDD26A9FF0CB9257D7D67D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		NullCheck(L_10);
		AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8(L_10, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::<addServer>g__onSuccess|18_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_U3CaddServerU3Eg__onSuccessU7C18_0_m7CCBC86FCD7C454FFC878BEE3D2A77F34938D385 (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, String_t* ___responseBody0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisCreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_mED28C3C0CDBAFB198F62A82A31E92DD7B1007A6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CreatedIdJson created = JsonUtility.FromJson<CreatedIdJson>(responseBody);
		String_t* L_0 = ___responseBody0;
		CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F  L_1;
		L_1 = JsonUtility_FromJson_TisCreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_mED28C3C0CDBAFB198F62A82A31E92DD7B1007A6C(L_0, /*hidden argument*/JsonUtility_FromJson_TisCreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F_mED28C3C0CDBAFB198F62A82A31E92DD7B1007A6C_RuntimeMethod_var);
		V_0 = L_1;
		// serverId = created.id;
		CreatedIdJson_tB6C21F2402FE74F8BA637B73976A4C3D90AEEF0F  L_2 = V_0;
		String_t* L_3 = L_2.get_id_0();
		__this->set_serverId_5(L_3);
		// _pingCoroutine = runner.StartCoroutine(ping());
		RuntimeObject* L_4 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)__this)->get_runner_0();
		RuntimeObject* L_5;
		L_5 = ListServerServerApi_ping_m003AE070BB04DACB48CC6F9DA38E629870F3682E(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = InterfaceFuncInvoker1< Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *, RuntimeObject* >::Invoke(0 /* UnityEngine.Coroutine Mirror.Cloud.ICoroutineRunner::StartCoroutine(System.Collections.IEnumerator) */, ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var, L_4, L_5);
		__this->set__pingCoroutine_6(L_6);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::<addServer>g__onFail|18_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_U3CaddServerU3Eg__onFailU7C18_1_m32210599A9F7BA770D34B65DF7843BB5965DD031 (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, String_t* ___responseBody0, const RuntimeMethod* method)
{
	{
		// added = false;
		__this->set_added_7((bool)0);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::<updateServer>g__onSuccess|19_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_U3CupdateServerU3Eg__onSuccessU7C19_0_mF7867288BCE9371208A68F4C0174C000978A1422 (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, String_t* ___responseBody0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// skipNextPing = true;
		__this->set_skipNextPing_9((bool)1);
		// if (_pingCoroutine == null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get__pingCoroutine_6();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// _pingCoroutine = runner.StartCoroutine(ping());
		RuntimeObject* L_1 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)__this)->get_runner_0();
		RuntimeObject* L_2;
		L_2 = ListServerServerApi_ping_m003AE070BB04DACB48CC6F9DA38E629870F3682E(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = InterfaceFuncInvoker1< Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *, RuntimeObject* >::Invoke(0 /* UnityEngine.Coroutine Mirror.Cloud.ICoroutineRunner::StartCoroutine(System.Collections.IEnumerator) */, ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var, L_1, L_2);
		__this->set__pingCoroutine_6(L_3);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::<ping>g__onSuccess|20_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_U3CpingU3Eg__onSuccessU7C20_0_m44DBC357F616341393977861269FCA81C5F7699A (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, String_t* ___responseBody0, const RuntimeMethod* method)
{
	{
		// pingFails = 0;
		__this->set_pingFails_10(0);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi::<ping>g__onFail|20_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListServerServerApi_U3CpingU3Eg__onFailU7C20_1_mBA34F07E99F2CD176C1EE310B19AA2A73BF9FA7C (ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * __this, String_t* ___responseBody0, const RuntimeMethod* method)
{
	{
		// pingFails++;
		int32_t L_0 = __this->get_pingFails_10();
		__this->set_pingFails_10(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
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
// System.Void Mirror.Cloud.Logger::LogRequest(System.String,System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogRequest_m62FE8B8C249AC1CAD3A34BAD7CADF742F9E70AF4 (String_t* ___page0, String_t* ___method1, bool ___hasJson2, String_t* ___json3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C7CA32BF2F2BCF374D202A19537C76F03A27486);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6D94F2AF4A63B81F3CC9D277D73D40181964B8E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hasJson)
		bool L_0 = ___hasJson2;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.LogFormat("Request: {0} {1} {2}", method, page, json);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___method1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___page0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		String_t* L_7 = ___json3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteralC6D94F2AF4A63B81F3CC9D277D73D40181964B8E, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0020:
	{
		// Debug.LogFormat("Request: {0} {1}", method, page);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		String_t* L_10 = ___method1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_9;
		String_t* L_12 = ___page0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral9C7CA32BF2F2BCF374D202A19537C76F03A27486, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Logger::LogResponse(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogResponse_m69B0BC4961D61880DE3D943E03EB60792E444643 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___statusRequest0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC96F18878485EFFB0416A743386F020591D0D2FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE51D1CDB2E3D0A9DBD3B08833745D9D20ECDB839);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// long code = statusRequest.responseCode;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___statusRequest0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// string format = "Response: {0} {1} {2} {3}";
		// Uri uri = new Uri(statusRequest.url);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = ___statusRequest0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UnityWebRequest_get_url_m802F6A7942362F28F2D856F17B2BDF8C2561734E(L_2, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// string path = string.Join("", uri.Segments);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_5 = V_1;
		NullCheck(L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = Uri_get_Segments_m1E7A75D04E7D1806685F517A82483A0A0F7EA120(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// string msg = string.Format(format, statusRequest.method, code, path, statusRequest.downloadHandler.text);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = ___statusRequest0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = UnityWebRequest_get_method_mDEB685B259E296FAE2484B504108AA384A3E0A4F(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_9;
		int64_t L_13 = V_0;
		int64_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_12;
		String_t* L_17 = V_2;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_16;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_19 = ___statusRequest0;
		NullCheck(L_19);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_20;
		L_20 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
		String_t* L_22;
		L_22 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralC96F18878485EFFB0416A743386F020591D0D2FD, L_18, /*hidden argument*/NULL);
		// Debug.Log(msg);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_22, /*hidden argument*/NULL);
		// if (!string.IsNullOrEmpty(statusRequest.error))
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_23 = ___statusRequest0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_23, /*hidden argument*/NULL);
		bool L_25;
		L_25 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_007f;
		}
	}
	{
		// msg = string.Format("WEB REQUEST ERROR: {0}", statusRequest.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_26 = ___statusRequest0;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_26, /*hidden argument*/NULL);
		String_t* L_28;
		L_28 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralE51D1CDB2E3D0A9DBD3B08833745D9D20ECDB839, L_27, /*hidden argument*/NULL);
		// Debug.LogError(msg);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_28, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Logger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Log_m0A2E0441E8D3FF89658B3657F2889C0C090CAE16 (String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(msg);
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Logger::LogWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogWarning_mB4F5ECB5DEFBBC92EE827F376509D0CD1C7D7C03 (String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(msg);
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Logger::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogError_m784E8AB1B1053A7F68F99892E45C69D5576E4247 (String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(msg);
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Logger::Verbose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Verbose_m58E5E28ED8DF98AB74256996CB5CF97CAD5FE1D7 (String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (VerboseLogging)
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		bool L_0 = ((Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var))->get_VerboseLogging_0();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Debug.Log(msg);
		String_t* L_1 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Logger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__cctor_m3366261D3CB54F104D5CDAC3368B32C903B72C69 (const RuntimeMethod* method)
{
	{
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
// System.Void Mirror.Cloud.MatchFoundEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchFoundEvent__ctor_mA75F1B7FD1CB325293FDBCECB6D23AAC6C86746E (MatchFoundEvent_t525CAFFD2E8D84CE5690CF19607CD8C9CA4D44B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mC85CDCA0C6A5A0EE2B1641886649D3EF2C7DD0F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mC85CDCA0C6A5A0EE2B1641886649D3EF2C7DD0F2(__this, /*hidden argument*/UnityEvent_1__ctor_mC85CDCA0C6A5A0EE2B1641886649D3EF2C7DD0F2_RuntimeMethod_var);
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


// Conversion methods for marshalling of: Mirror.Cloud.ListServerService.PartialServerJson
IL2CPP_EXTERN_C void PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshal_pinvoke(const PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B& unmarshaled, PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshaled_pinvoke& marshaled)
{
	marshaled.___playerCount_0 = unmarshaled.get_playerCount_0();
	marshaled.___maxPlayerCount_1 = unmarshaled.get_maxPlayerCount_1();
	marshaled.___displayName_2 = il2cpp_codegen_marshal_string(unmarshaled.get_displayName_2());
	if (unmarshaled.get_customData_3() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_customData_Length = (unmarshaled.get_customData_3())->max_length;
		marshaled.___customData_3 = il2cpp_codegen_marshal_allocate_array<KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke>(_unmarshaled_customData_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_customData_Length); i++)
		{
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_pinvoke((unmarshaled.get_customData_3())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___customData_3)[i]);
		}
	}
	else
	{
		marshaled.___customData_3 = NULL;
	}
}
IL2CPP_EXTERN_C void PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshal_pinvoke_back(const PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshaled_pinvoke& marshaled, PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_playerCount_temp_0 = 0;
	unmarshaled_playerCount_temp_0 = marshaled.___playerCount_0;
	unmarshaled.set_playerCount_0(unmarshaled_playerCount_temp_0);
	int32_t unmarshaled_maxPlayerCount_temp_1 = 0;
	unmarshaled_maxPlayerCount_temp_1 = marshaled.___maxPlayerCount_1;
	unmarshaled.set_maxPlayerCount_1(unmarshaled_maxPlayerCount_temp_1);
	unmarshaled.set_displayName_2(il2cpp_codegen_marshal_string_result(marshaled.___displayName_2));
	if (marshaled.___customData_3 != NULL)
	{
		if (unmarshaled.get_customData_3() == NULL)
		{
			unmarshaled.set_customData_3(reinterpret_cast<KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9*>((KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9*)SZArrayNew(KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_customData_3())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  _marshaled____customData_3_i__unmarshaled;
			memset((&_marshaled____customData_3_i__unmarshaled), 0, sizeof(_marshaled____customData_3_i__unmarshaled));
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_pinvoke_back((marshaled.___customData_3)[i], _marshaled____customData_3_i__unmarshaled);
			(unmarshaled.get_customData_3())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____customData_3_i__unmarshaled);
		}
	}
}
// Conversion method for clean up from marshalling of: Mirror.Cloud.ListServerService.PartialServerJson
IL2CPP_EXTERN_C void PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshal_pinvoke_cleanup(PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___displayName_2);
	marshaled.___displayName_2 = NULL;
	if (marshaled.___customData_3 != NULL)
	{
		const il2cpp_array_size_t marshaled____customData_3_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____customData_3_CleanupLoopCount); i++)
		{
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_pinvoke_cleanup((marshaled.___customData_3)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___customData_3);
		marshaled.___customData_3 = NULL;
	}
}


// Conversion methods for marshalling of: Mirror.Cloud.ListServerService.PartialServerJson
IL2CPP_EXTERN_C void PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshal_com(const PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B& unmarshaled, PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshaled_com& marshaled)
{
	marshaled.___playerCount_0 = unmarshaled.get_playerCount_0();
	marshaled.___maxPlayerCount_1 = unmarshaled.get_maxPlayerCount_1();
	marshaled.___displayName_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_displayName_2());
	if (unmarshaled.get_customData_3() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_customData_Length = (unmarshaled.get_customData_3())->max_length;
		marshaled.___customData_3 = il2cpp_codegen_marshal_allocate_array<KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com>(_unmarshaled_customData_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_customData_Length); i++)
		{
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_com((unmarshaled.get_customData_3())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___customData_3)[i]);
		}
	}
	else
	{
		marshaled.___customData_3 = NULL;
	}
}
IL2CPP_EXTERN_C void PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshal_com_back(const PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshaled_com& marshaled, PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_playerCount_temp_0 = 0;
	unmarshaled_playerCount_temp_0 = marshaled.___playerCount_0;
	unmarshaled.set_playerCount_0(unmarshaled_playerCount_temp_0);
	int32_t unmarshaled_maxPlayerCount_temp_1 = 0;
	unmarshaled_maxPlayerCount_temp_1 = marshaled.___maxPlayerCount_1;
	unmarshaled.set_maxPlayerCount_1(unmarshaled_maxPlayerCount_temp_1);
	unmarshaled.set_displayName_2(il2cpp_codegen_marshal_bstring_result(marshaled.___displayName_2));
	if (marshaled.___customData_3 != NULL)
	{
		if (unmarshaled.get_customData_3() == NULL)
		{
			unmarshaled.set_customData_3(reinterpret_cast<KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9*>((KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9*)SZArrayNew(KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_customData_3())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  _marshaled____customData_3_i__unmarshaled;
			memset((&_marshaled____customData_3_i__unmarshaled), 0, sizeof(_marshaled____customData_3_i__unmarshaled));
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_com_back((marshaled.___customData_3)[i], _marshaled____customData_3_i__unmarshaled);
			(unmarshaled.get_customData_3())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____customData_3_i__unmarshaled);
		}
	}
}
// Conversion method for clean up from marshalling of: Mirror.Cloud.ListServerService.PartialServerJson
IL2CPP_EXTERN_C void PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshal_com_cleanup(PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___displayName_2);
	marshaled.___displayName_2 = NULL;
	if (marshaled.___customData_3 != NULL)
	{
		const il2cpp_array_size_t marshaled____customData_3_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____customData_3_CleanupLoopCount); i++)
		{
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_com_cleanup((marshaled.___customData_3)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___customData_3);
		marshaled.___customData_3 = NULL;
	}
}
// System.Void Mirror.Cloud.ListServerService.PartialServerJson::SetCustomData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialServerJson_SetCustomData_m1E3206BF0753934DE199277C6E1B4CEB6FD10902 (PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___data0, const RuntimeMethod* method)
{
	{
		// if (data == null)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ___data0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// customData = null;
		__this->set_customData_3((KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9*)NULL);
		// }
		return;
	}

IL_000b:
	{
		// customData = data.ToKeyValueArray();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = ___data0;
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_2;
		L_2 = CustomDataHelper_ToKeyValueArray_m8BE5C92CC15CE5C8A20DDF0630FB9A8B51747F5C(L_1, /*hidden argument*/NULL);
		__this->set_customData_3(L_2);
		// CustomDataHelper.ValidateCustomData(customData);
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_3 = __this->get_customData_3();
		CustomDataHelper_ValidateCustomData_mFD2074D983ACF751DDCCFE07A50A4BB47EF038E4(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PartialServerJson_SetCustomData_m1E3206BF0753934DE199277C6E1B4CEB6FD10902_AdjustorThunk (RuntimeObject * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___data0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B * _thisAdjusted = reinterpret_cast<PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B *>(__this + _offset);
	PartialServerJson_SetCustomData_m1E3206BF0753934DE199277C6E1B4CEB6FD10902(_thisAdjusted, ___data0, method);
}
// System.Void Mirror.Cloud.ListServerService.PartialServerJson::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialServerJson_Validate_mDA60636F178F2187E6178D0DDC6D274DB3D0DEF9 (PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B * __this, const RuntimeMethod* method)
{
	{
		// CustomDataHelper.ValidateCustomData(customData);
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_0 = __this->get_customData_3();
		CustomDataHelper_ValidateCustomData_mFD2074D983ACF751DDCCFE07A50A4BB47EF038E4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PartialServerJson_Validate_mDA60636F178F2187E6178D0DDC6D274DB3D0DEF9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B * _thisAdjusted = reinterpret_cast<PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B *>(__this + _offset);
	PartialServerJson_Validate_mDA60636F178F2187E6178D0DDC6D274DB3D0DEF9(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.Cloud.RequestCreator::.ctor(System.String,System.String,Mirror.Cloud.ICoroutineRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCreator__ctor_m6DAA512714A02207DDEA5CEF79EA41D344D0666F (RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * __this, String_t* ___baseAddress0, String_t* ___apiKey1, RuntimeObject* ___coroutineRunner2, const RuntimeMethod* method)
{
	RuntimeObject* G_B6_0 = NULL;
	RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * G_B6_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * G_B5_1 = NULL;
	{
		// public RequestCreator(string baseAddress, string apiKey, ICoroutineRunner coroutineRunner)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (string.IsNullOrEmpty(baseAddress))
		String_t* L_0 = ___baseAddress0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentNullException(nameof(baseAddress));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA782209317C48E96A39C85D51CF1EA2FF3607747)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RequestCreator__ctor_m6DAA512714A02207DDEA5CEF79EA41D344D0666F_RuntimeMethod_var)));
	}

IL_0019:
	{
		// if (string.IsNullOrEmpty(apiKey))
		String_t* L_3 = ___apiKey1;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new ArgumentNullException(nameof(apiKey));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_5 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2026E6291795A6F7CBD277311B6F00E4CD423A50)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RequestCreator__ctor_m6DAA512714A02207DDEA5CEF79EA41D344D0666F_RuntimeMethod_var)));
	}

IL_002c:
	{
		// this.baseAddress = baseAddress;
		String_t* L_6 = ___baseAddress0;
		__this->set_baseAddress_4(L_6);
		// this.apiKey = apiKey;
		String_t* L_7 = ___apiKey1;
		__this->set_apiKey_5(L_7);
		// runner = coroutineRunner ?? throw new ArgumentNullException(nameof(coroutineRunner));
		RuntimeObject* L_8 = ___coroutineRunner2;
		RuntimeObject* L_9 = L_8;
		G_B5_0 = L_9;
		G_B5_1 = __this;
		if (L_9)
		{
			G_B6_0 = L_9;
			G_B6_1 = __this;
			goto IL_004b;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_10 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD528FBE40EB40BC73305B1BF9B57FD9F4714EADA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RequestCreator__ctor_m6DAA512714A02207DDEA5CEF79EA41D344D0666F_RuntimeMethod_var)));
	}

IL_004b:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_runner_6(G_B6_0);
		// }
		return;
	}
}
// System.Uri Mirror.Cloud.RequestCreator::CreateUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * RequestCreator_CreateUri_m906FCA0C88171FA1726BAB368941C13683480A52 (RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * __this, String_t* ___page0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DE15E3023B96A63BFDA34C415092DD777CF22AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Uri(string.Format("{0}/{1}?key={2}", baseAddress, page, apiKey));
		String_t* L_0 = __this->get_baseAddress_4();
		String_t* L_1 = ___page0;
		String_t* L_2 = __this->get_apiKey_5();
		String_t* L_3;
		L_3 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral0DE15E3023B96A63BFDA34C415092DD777CF22AF, L_0, L_1, L_2, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Networking.UnityWebRequest Mirror.Cloud.RequestCreator::CreateWebRequest(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * RequestCreator_CreateWebRequest_m0C487AA9FA810424560B74F3EA09A3E6CC310A3B (RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * __this, String_t* ___page0, String_t* ___method1, String_t* ___json2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B5_0 = NULL;
	{
		// bool hasJson = !string.IsNullOrEmpty(json);
		String_t* L_0 = ___json2;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// Logger.LogRequest(page, method, hasJson, json);
		String_t* L_2 = ___page0;
		String_t* L_3 = ___method1;
		bool L_4 = V_0;
		String_t* L_5 = ___json2;
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogRequest_m62FE8B8C249AC1CAD3A34BAD7CADF742F9E70AF4(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// UnityWebRequest request = new UnityWebRequest(CreateUri(page));
		String_t* L_6 = ___page0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_7;
		L_7 = RequestCreator_CreateUri_m906FCA0C88171FA1726BAB368941C13683480A52(__this, L_6, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mC259E6DCA8B4D38CED1D07BB0CB2CA00FC976E5C(L_8, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// request.method = method;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = V_1;
		String_t* L_10 = ___method1;
		NullCheck(L_9);
		UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7(L_9, L_10, /*hidden argument*/NULL);
		// if (hasJson)
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_003a;
		}
	}
	{
		// request.SetRequestHeader("Content-Type", "application/json");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = V_1;
		NullCheck(L_12);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_12, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// request.downloadHandler = new DownloadHandlerBuffer();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = V_1;
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_14 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_13, L_14, /*hidden argument*/NULL);
		// byte[] bodyRaw = hasJson
		//     ? Encoding.UTF8.GetBytes(json)
		//     : null;
		bool L_15 = V_0;
		if (L_15)
		{
			goto IL_004b;
		}
	}
	{
		G_B5_0 = ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(NULL));
		goto IL_0056;
	}

IL_004b:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_16;
		L_16 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_17 = ___json2;
		NullCheck(L_16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
		L_18 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		G_B5_0 = L_18;
	}

IL_0056:
	{
		V_2 = G_B5_0;
		// request.uploadHandler = new UploadHandlerRaw(bodyRaw);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_19 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = V_2;
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_21 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_21, L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_19, L_21, /*hidden argument*/NULL);
		// return request;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_22 = V_1;
		return L_22;
	}
}
// UnityEngine.Networking.UnityWebRequest Mirror.Cloud.RequestCreator::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * RequestCreator_Get_m7854701F82FE9C31DBBAE44B24624E3371C4B0FE (RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * __this, String_t* ___page0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreateWebRequest(page, GET);
		String_t* L_0 = ___page0;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1;
		L_1 = RequestCreator_CreateWebRequest_m0C487AA9FA810424560B74F3EA09A3E6CC310A3B(__this, L_0, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, (String_t*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Networking.UnityWebRequest Mirror.Cloud.RequestCreator::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * RequestCreator_Delete_m9FABD4E200D1632FCFC683C4F5B564540AD6E44B (RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * __this, String_t* ___page0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreateWebRequest(page, DELETE);
		String_t* L_0 = ___page0;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1;
		L_1 = RequestCreator_CreateWebRequest_m0C487AA9FA810424560B74F3EA09A3E6CC310A3B(__this, L_0, _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38, (String_t*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mirror.Cloud.RequestCreator::SendRequest(UnityEngine.Networking.UnityWebRequest,Mirror.Cloud.RequestSuccess,Mirror.Cloud.RequestFail)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCreator_SendRequest_m3A9204F6F9A1CEC8D764A0251BB0F220D0A3AFB6 (RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * ___onSuccess1, RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * ___onFail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// runner.StartCoroutine(SendRequestEnumerator(request, onSuccess, onFail));
		RuntimeObject* L_0 = __this->get_runner_6();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = ___request0;
		RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * L_2 = ___onSuccess1;
		RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * L_3 = ___onFail2;
		RuntimeObject* L_4;
		L_4 = RequestCreator_SendRequestEnumerator_mAC10259A4763A5695E019BC046C74EAC4FE6CE8D(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = InterfaceFuncInvoker1< Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *, RuntimeObject* >::Invoke(0 /* UnityEngine.Coroutine Mirror.Cloud.ICoroutineRunner::StartCoroutine(System.Collections.IEnumerator) */, ICoroutineRunner_tF97EC7CCF2FCFA770F628935E2F679E47CE0D93E_il2cpp_TypeInfo_var, L_0, L_4);
		// }
		return;
	}
}
// System.Collections.IEnumerator Mirror.Cloud.RequestCreator::SendRequestEnumerator(UnityEngine.Networking.UnityWebRequest,Mirror.Cloud.RequestSuccess,Mirror.Cloud.RequestFail)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RequestCreator_SendRequestEnumerator_mAC10259A4763A5695E019BC046C74EAC4FE6CE8D (RequestCreator_tD2DFC2BDEA4C12D9FAD1B6D8B2229FF7292489BA * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * ___onSuccess1, RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * ___onFail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * L_0 = (U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 *)il2cpp_codegen_object_new(U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1_il2cpp_TypeInfo_var);
		U3CSendRequestEnumeratorU3Ed__15__ctor_m345587D889D6FF23396EA611B089EDBDBAAFE32A(L_0, 0, /*hidden argument*/NULL);
		U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * L_1 = L_0;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = ___request0;
		NullCheck(L_1);
		L_1->set_request_2(L_2);
		U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * L_3 = L_1;
		RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * L_4 = ___onSuccess1;
		NullCheck(L_3);
		L_3->set_onSuccess_3(L_4);
		U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * L_5 = L_3;
		RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * L_6 = ___onFail2;
		NullCheck(L_5);
		L_5->set_onFail_4(L_6);
		return L_5;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A (RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * __this, String_t* ___responseBody0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___responseBody0' to native representation
	char* ____responseBody0_marshaled = NULL;
	____responseBody0_marshaled = il2cpp_codegen_marshal_string(___responseBody0);

	// Native function invocation
	il2cppPInvokeFunc(____responseBody0_marshaled);

	// Marshaling cleanup of parameter '___responseBody0' native representation
	il2cpp_codegen_marshal_free(____responseBody0_marshaled);
	____responseBody0_marshaled = NULL;

}
// System.Void Mirror.Cloud.RequestFail::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFail__ctor_m2209EFBCA9879589BB6E6DDEB8C5F231C4A392BD (RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mirror.Cloud.RequestFail::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFail_Invoke_m5AE58CE088A4C65651565FECCDE81D2228B18E6B (RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * __this, String_t* ___responseBody0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___responseBody0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___responseBody0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___responseBody0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___responseBody0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___responseBody0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___responseBody0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___responseBody0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___responseBody0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___responseBody0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___responseBody0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___responseBody0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___responseBody0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___responseBody0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mirror.Cloud.RequestFail::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RequestFail_BeginInvoke_mCFD33938D2C2AC69DD2E6D10D9F2D957ACBFE42E (RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * __this, String_t* ___responseBody0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___responseBody0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mirror.Cloud.RequestFail::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFail_EndInvoke_mA1C37D27EE509767CBD899C3D33E920E950B8B32 (RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 (RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * __this, String_t* ___responseBody0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___responseBody0' to native representation
	char* ____responseBody0_marshaled = NULL;
	____responseBody0_marshaled = il2cpp_codegen_marshal_string(___responseBody0);

	// Native function invocation
	il2cppPInvokeFunc(____responseBody0_marshaled);

	// Marshaling cleanup of parameter '___responseBody0' native representation
	il2cpp_codegen_marshal_free(____responseBody0_marshaled);
	____responseBody0_marshaled = NULL;

}
// System.Void Mirror.Cloud.RequestSuccess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestSuccess__ctor_m3F3728350B1CFB5B659A7A17E92987067C3400E3 (RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mirror.Cloud.RequestSuccess::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestSuccess_Invoke_mC84186FF5F4FDB0D0661549471D147BB04BEE8D7 (RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * __this, String_t* ___responseBody0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___responseBody0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___responseBody0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___responseBody0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___responseBody0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___responseBody0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___responseBody0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___responseBody0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___responseBody0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___responseBody0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___responseBody0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___responseBody0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___responseBody0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___responseBody0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mirror.Cloud.RequestSuccess::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RequestSuccess_BeginInvoke_mCAACBC6546CB686870EC476F7AB95945D8353838 (RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * __this, String_t* ___responseBody0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___responseBody0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mirror.Cloud.RequestSuccess::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestSuccess_EndInvoke_m527C22E75394EF48002FC3004C8B58C9509EB9DC (RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Mirror.Cloud.ListServerService.ServerCollectionJson
IL2CPP_EXTERN_C void ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshal_pinvoke(const ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55& unmarshaled, ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_servers_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_servers_Length = (unmarshaled.get_servers_0())->max_length;
		marshaled.___servers_0 = il2cpp_codegen_marshal_allocate_array<ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_pinvoke>(_unmarshaled_servers_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_servers_Length); i++)
		{
			ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_pinvoke((unmarshaled.get_servers_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___servers_0)[i]);
		}
	}
	else
	{
		marshaled.___servers_0 = NULL;
	}
}
IL2CPP_EXTERN_C void ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshal_pinvoke_back(const ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshaled_pinvoke& marshaled, ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___servers_0 != NULL)
	{
		if (unmarshaled.get_servers_0() == NULL)
		{
			unmarshaled.set_servers_0(reinterpret_cast<ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641*>((ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641*)SZArrayNew(ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_servers_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  _marshaled____servers_0_i__unmarshaled;
			memset((&_marshaled____servers_0_i__unmarshaled), 0, sizeof(_marshaled____servers_0_i__unmarshaled));
			ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_pinvoke_back((marshaled.___servers_0)[i], _marshaled____servers_0_i__unmarshaled);
			(unmarshaled.get_servers_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____servers_0_i__unmarshaled);
		}
	}
}
// Conversion method for clean up from marshalling of: Mirror.Cloud.ListServerService.ServerCollectionJson
IL2CPP_EXTERN_C void ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshal_pinvoke_cleanup(ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshaled_pinvoke& marshaled)
{
	if (marshaled.___servers_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____servers_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____servers_0_CleanupLoopCount); i++)
		{
			ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_pinvoke_cleanup((marshaled.___servers_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___servers_0);
		marshaled.___servers_0 = NULL;
	}
}


// Conversion methods for marshalling of: Mirror.Cloud.ListServerService.ServerCollectionJson
IL2CPP_EXTERN_C void ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshal_com(const ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55& unmarshaled, ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshaled_com& marshaled)
{
	if (unmarshaled.get_servers_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_servers_Length = (unmarshaled.get_servers_0())->max_length;
		marshaled.___servers_0 = il2cpp_codegen_marshal_allocate_array<ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_com>(_unmarshaled_servers_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_servers_Length); i++)
		{
			ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_com((unmarshaled.get_servers_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___servers_0)[i]);
		}
	}
	else
	{
		marshaled.___servers_0 = NULL;
	}
}
IL2CPP_EXTERN_C void ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshal_com_back(const ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshaled_com& marshaled, ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___servers_0 != NULL)
	{
		if (unmarshaled.get_servers_0() == NULL)
		{
			unmarshaled.set_servers_0(reinterpret_cast<ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641*>((ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641*)SZArrayNew(ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_servers_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  _marshaled____servers_0_i__unmarshaled;
			memset((&_marshaled____servers_0_i__unmarshaled), 0, sizeof(_marshaled____servers_0_i__unmarshaled));
			ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_com_back((marshaled.___servers_0)[i], _marshaled____servers_0_i__unmarshaled);
			(unmarshaled.get_servers_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____servers_0_i__unmarshaled);
		}
	}
}
// Conversion method for clean up from marshalling of: Mirror.Cloud.ListServerService.ServerCollectionJson
IL2CPP_EXTERN_C void ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshal_com_cleanup(ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55_marshaled_com& marshaled)
{
	if (marshaled.___servers_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____servers_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____servers_0_CleanupLoopCount); i++)
		{
			ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_com_cleanup((marshaled.___servers_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___servers_0);
		marshaled.___servers_0 = NULL;
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


// Conversion methods for marshalling of: Mirror.Cloud.ListServerService.ServerJson
IL2CPP_EXTERN_C void ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_pinvoke(const ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22& unmarshaled, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_pinvoke& marshaled)
{
	marshaled.___protocol_0 = il2cpp_codegen_marshal_string(unmarshaled.get_protocol_0());
	marshaled.___port_1 = unmarshaled.get_port_1();
	marshaled.___playerCount_2 = unmarshaled.get_playerCount_2();
	marshaled.___maxPlayerCount_3 = unmarshaled.get_maxPlayerCount_3();
	marshaled.___displayName_4 = il2cpp_codegen_marshal_string(unmarshaled.get_displayName_4());
	marshaled.___address_5 = il2cpp_codegen_marshal_string(unmarshaled.get_address_5());
	marshaled.___customAddress_6 = il2cpp_codegen_marshal_string(unmarshaled.get_customAddress_6());
	if (unmarshaled.get_customData_7() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_customData_Length = (unmarshaled.get_customData_7())->max_length;
		marshaled.___customData_7 = il2cpp_codegen_marshal_allocate_array<KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke>(_unmarshaled_customData_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_customData_Length); i++)
		{
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_pinvoke((unmarshaled.get_customData_7())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___customData_7)[i]);
		}
	}
	else
	{
		marshaled.___customData_7 = NULL;
	}
}
IL2CPP_EXTERN_C void ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_pinvoke_back(const ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_pinvoke& marshaled, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_protocol_0(il2cpp_codegen_marshal_string_result(marshaled.___protocol_0));
	int32_t unmarshaled_port_temp_1 = 0;
	unmarshaled_port_temp_1 = marshaled.___port_1;
	unmarshaled.set_port_1(unmarshaled_port_temp_1);
	int32_t unmarshaled_playerCount_temp_2 = 0;
	unmarshaled_playerCount_temp_2 = marshaled.___playerCount_2;
	unmarshaled.set_playerCount_2(unmarshaled_playerCount_temp_2);
	int32_t unmarshaled_maxPlayerCount_temp_3 = 0;
	unmarshaled_maxPlayerCount_temp_3 = marshaled.___maxPlayerCount_3;
	unmarshaled.set_maxPlayerCount_3(unmarshaled_maxPlayerCount_temp_3);
	unmarshaled.set_displayName_4(il2cpp_codegen_marshal_string_result(marshaled.___displayName_4));
	unmarshaled.set_address_5(il2cpp_codegen_marshal_string_result(marshaled.___address_5));
	unmarshaled.set_customAddress_6(il2cpp_codegen_marshal_string_result(marshaled.___customAddress_6));
	if (marshaled.___customData_7 != NULL)
	{
		if (unmarshaled.get_customData_7() == NULL)
		{
			unmarshaled.set_customData_7(reinterpret_cast<KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9*>((KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9*)SZArrayNew(KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_customData_7())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  _marshaled____customData_7_i__unmarshaled;
			memset((&_marshaled____customData_7_i__unmarshaled), 0, sizeof(_marshaled____customData_7_i__unmarshaled));
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_pinvoke_back((marshaled.___customData_7)[i], _marshaled____customData_7_i__unmarshaled);
			(unmarshaled.get_customData_7())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____customData_7_i__unmarshaled);
		}
	}
}
// Conversion method for clean up from marshalling of: Mirror.Cloud.ListServerService.ServerJson
IL2CPP_EXTERN_C void ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_pinvoke_cleanup(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___protocol_0);
	marshaled.___protocol_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___displayName_4);
	marshaled.___displayName_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___address_5);
	marshaled.___address_5 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___customAddress_6);
	marshaled.___customAddress_6 = NULL;
	if (marshaled.___customData_7 != NULL)
	{
		const il2cpp_array_size_t marshaled____customData_7_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____customData_7_CleanupLoopCount); i++)
		{
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_pinvoke_cleanup((marshaled.___customData_7)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___customData_7);
		marshaled.___customData_7 = NULL;
	}
}


// Conversion methods for marshalling of: Mirror.Cloud.ListServerService.ServerJson
IL2CPP_EXTERN_C void ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_com(const ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22& unmarshaled, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_com& marshaled)
{
	marshaled.___protocol_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_protocol_0());
	marshaled.___port_1 = unmarshaled.get_port_1();
	marshaled.___playerCount_2 = unmarshaled.get_playerCount_2();
	marshaled.___maxPlayerCount_3 = unmarshaled.get_maxPlayerCount_3();
	marshaled.___displayName_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_displayName_4());
	marshaled.___address_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_address_5());
	marshaled.___customAddress_6 = il2cpp_codegen_marshal_bstring(unmarshaled.get_customAddress_6());
	if (unmarshaled.get_customData_7() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_customData_Length = (unmarshaled.get_customData_7())->max_length;
		marshaled.___customData_7 = il2cpp_codegen_marshal_allocate_array<KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com>(_unmarshaled_customData_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_customData_Length); i++)
		{
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_com((unmarshaled.get_customData_7())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___customData_7)[i]);
		}
	}
	else
	{
		marshaled.___customData_7 = NULL;
	}
}
IL2CPP_EXTERN_C void ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_com_back(const ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_com& marshaled, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_protocol_0(il2cpp_codegen_marshal_bstring_result(marshaled.___protocol_0));
	int32_t unmarshaled_port_temp_1 = 0;
	unmarshaled_port_temp_1 = marshaled.___port_1;
	unmarshaled.set_port_1(unmarshaled_port_temp_1);
	int32_t unmarshaled_playerCount_temp_2 = 0;
	unmarshaled_playerCount_temp_2 = marshaled.___playerCount_2;
	unmarshaled.set_playerCount_2(unmarshaled_playerCount_temp_2);
	int32_t unmarshaled_maxPlayerCount_temp_3 = 0;
	unmarshaled_maxPlayerCount_temp_3 = marshaled.___maxPlayerCount_3;
	unmarshaled.set_maxPlayerCount_3(unmarshaled_maxPlayerCount_temp_3);
	unmarshaled.set_displayName_4(il2cpp_codegen_marshal_bstring_result(marshaled.___displayName_4));
	unmarshaled.set_address_5(il2cpp_codegen_marshal_bstring_result(marshaled.___address_5));
	unmarshaled.set_customAddress_6(il2cpp_codegen_marshal_bstring_result(marshaled.___customAddress_6));
	if (marshaled.___customData_7 != NULL)
	{
		if (unmarshaled.get_customData_7() == NULL)
		{
			unmarshaled.set_customData_7(reinterpret_cast<KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9*>((KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9*)SZArrayNew(KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_customData_7())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  _marshaled____customData_7_i__unmarshaled;
			memset((&_marshaled____customData_7_i__unmarshaled), 0, sizeof(_marshaled____customData_7_i__unmarshaled));
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_com_back((marshaled.___customData_7)[i], _marshaled____customData_7_i__unmarshaled);
			(unmarshaled.get_customData_7())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____customData_7_i__unmarshaled);
		}
	}
}
// Conversion method for clean up from marshalling of: Mirror.Cloud.ListServerService.ServerJson
IL2CPP_EXTERN_C void ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshal_com_cleanup(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___protocol_0);
	marshaled.___protocol_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___displayName_4);
	marshaled.___displayName_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___address_5);
	marshaled.___address_5 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___customAddress_6);
	marshaled.___customAddress_6 = NULL;
	if (marshaled.___customData_7 != NULL)
	{
		const il2cpp_array_size_t marshaled____customData_7_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____customData_7_CleanupLoopCount); i++)
		{
			KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshal_com_cleanup((marshaled.___customData_7)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___customData_7);
		marshaled.___customData_7 = NULL;
	}
}
// System.Uri Mirror.Cloud.ListServerService.ServerJson::GetServerUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ServerJson_GetServerUri_mE2DC79EBC7425FF39BBE21F8579D0CC0ECBFD37E (ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Uri GetServerUri() => new Uri(address);
		String_t* L_0 = __this->get_address_5();
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ServerJson_GetServerUri_mE2DC79EBC7425FF39BBE21F8579D0CC0ECBFD37E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * _thisAdjusted = reinterpret_cast<ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 *>(__this + _offset);
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * _returnValue;
	_returnValue = ServerJson_GetServerUri_mE2DC79EBC7425FF39BBE21F8579D0CC0ECBFD37E(_thisAdjusted, method);
	return _returnValue;
}
// System.Uri Mirror.Cloud.ListServerService.ServerJson::GetCustomUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ServerJson_GetCustomUri_mBF1D0417197643A87CC329EDDF463B55E1554BCA (ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Uri GetCustomUri() => new Uri(customAddress);
		String_t* L_0 = __this->get_customAddress_6();
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ServerJson_GetCustomUri_mBF1D0417197643A87CC329EDDF463B55E1554BCA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * _thisAdjusted = reinterpret_cast<ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 *>(__this + _offset);
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * _returnValue;
	_returnValue = ServerJson_GetCustomUri_mBF1D0417197643A87CC329EDDF463B55E1554BCA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Mirror.Cloud.ListServerService.ServerJson::SetCustomData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerJson_SetCustomData_mFA2B43E562FC2470D2DD8F5FFDC7E5E0FC46B9F6 (ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___data0, const RuntimeMethod* method)
{
	{
		// if (data == null)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ___data0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// customData = null;
		__this->set_customData_7((KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9*)NULL);
		// }
		return;
	}

IL_000b:
	{
		// customData = data.ToKeyValueArray();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = ___data0;
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_2;
		L_2 = CustomDataHelper_ToKeyValueArray_m8BE5C92CC15CE5C8A20DDF0630FB9A8B51747F5C(L_1, /*hidden argument*/NULL);
		__this->set_customData_7(L_2);
		// CustomDataHelper.ValidateCustomData(customData);
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_3 = __this->get_customData_7();
		CustomDataHelper_ValidateCustomData_mFD2074D983ACF751DDCCFE07A50A4BB47EF038E4(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ServerJson_SetCustomData_mFA2B43E562FC2470D2DD8F5FFDC7E5E0FC46B9F6_AdjustorThunk (RuntimeObject * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___data0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * _thisAdjusted = reinterpret_cast<ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 *>(__this + _offset);
	ServerJson_SetCustomData_mFA2B43E562FC2470D2DD8F5FFDC7E5E0FC46B9F6(_thisAdjusted, ___data0, method);
}
// System.Boolean Mirror.Cloud.ListServerService.ServerJson::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServerJson_Validate_mA5812CC578933233C5F14DF484D2CF80061C5BC8 (ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral277D066918F746880AE343C1604D15E3E527977B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62D076543CAB903B5EA522AEA5F41D5620E6785F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral762D0808EEDB7278EB4D7DD9CDD0447F5DF17334);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CustomDataHelper.ValidateCustomData(customData);
		KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9* L_0 = __this->get_customData_7();
		CustomDataHelper_ValidateCustomData_mFD2074D983ACF751DDCCFE07A50A4BB47EF038E4(L_0, /*hidden argument*/NULL);
		// if (string.IsNullOrEmpty(protocol))
		String_t* L_1 = __this->get_protocol_0();
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Logger.LogError("ServerJson should not have empty protocol");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogError_m784E8AB1B1053A7F68F99892E45C69D5576E4247(_stringLiteral277D066918F746880AE343C1604D15E3E527977B, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (port == 0)
		int32_t L_3 = __this->get_port_1();
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		// Logger.LogError("ServerJson should not have port equal 0");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogError_m784E8AB1B1053A7F68F99892E45C69D5576E4247(_stringLiteral62D076543CAB903B5EA522AEA5F41D5620E6785F, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0038:
	{
		// if (maxPlayerCount == 0)
		int32_t L_4 = __this->get_maxPlayerCount_3();
		if (L_4)
		{
			goto IL_004c;
		}
	}
	{
		// Logger.LogError("ServerJson should not have maxPlayerCount equal 0");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogError_m784E8AB1B1053A7F68F99892E45C69D5576E4247(_stringLiteral762D0808EEDB7278EB4D7DD9CDD0447F5DF17334, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_004c:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool ServerJson_Validate_mA5812CC578933233C5F14DF484D2CF80061C5BC8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * _thisAdjusted = reinterpret_cast<ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ServerJson_Validate_mA5812CC578933233C5F14DF484D2CF80061C5BC8(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.Cloud.ServerListEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListEvent__ctor_m7B4C8C5D984E2EC917E1ECA46CD0D883E83457C7 (ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m89F533F2E1E3AAA8666A7F708A021057A097FB39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m89F533F2E1E3AAA8666A7F708A021057A097FB39(__this, /*hidden argument*/UnityEvent_1__ctor_m89F533F2E1E3AAA8666A7F708A021057A097FB39_RuntimeMethod_var);
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
// System.Boolean Mirror.Cloud.UnityEqualCheckExtension::IsNull(Mirror.Cloud.IUnityEqualCheck)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityEqualCheckExtension_IsNull_m09F32E94F7828093B872E58D88253023B5A7491F (RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (obj as Object) == null;
		RuntimeObject* L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)IsInstClass((RuntimeObject*)L_0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)), (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Mirror.Cloud.UnityEqualCheckExtension::IsNotNull(Mirror.Cloud.IUnityEqualCheck)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityEqualCheckExtension_IsNotNull_m5166D412E4EFDA5D0CDA57FF03C2C60AFC138913 (RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (obj as Object) != null;
		RuntimeObject* L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)IsInstClass((RuntimeObject*)L_0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)), (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Mirror.Cloud.ListServerService.CustomDataHelper/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFBD27E239C9E2567B6633412A76D7A42B3E4A059 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 * L_0 = (U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 *)il2cpp_codegen_object_new(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m637FA2B5B23ADB2D0834C0F8D4FA9D1FFDB43436(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.CustomDataHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m637FA2B5B23ADB2D0834C0F8D4FA9D1FFDB43436 (U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mirror.Cloud.ListServerService.CustomDataHelper/<>c::<ToDictionary>b__1_0(Mirror.Cloud.ListServerService.KeyValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToDictionaryU3Eb__1_0_m2C8F7B33A11EFCDE8FD89AD109540B19073C6E9C (U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 * __this, KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  ___x0, const RuntimeMethod* method)
{
	{
		// return keyValues.ToDictionary(x => x.key, x => x.value);
		KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  L_0 = ___x0;
		String_t* L_1 = L_0.get_key_2();
		return L_1;
	}
}
// System.String Mirror.Cloud.ListServerService.CustomDataHelper/<>c::<ToDictionary>b__1_1(Mirror.Cloud.ListServerService.KeyValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToDictionaryU3Eb__1_1_m28A0C477B699FCAD35D1C235F650F8256DF1D62E (U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 * __this, KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  ___x0, const RuntimeMethod* method)
{
	{
		// return keyValues.ToDictionary(x => x.key, x => x.value);
		KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  L_0 = ___x0;
		String_t* L_1 = L_0.get_value_3();
		return L_1;
	}
}
// Mirror.Cloud.ListServerService.KeyValue Mirror.Cloud.ListServerService.CustomDataHelper/<>c::<ToKeyValueArray>b__2_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  U3CU3Ec_U3CToKeyValueArrayU3Eb__2_0_m24F269C87648977ADEC23FC0D1760A899D6BBB11 (U3CU3Ec_t61BF087CF82601B4EB5AF6C72259B55DC20D0419 * __this, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___kvp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return dictionary.Select(kvp => new KeyValue(kvp.Key, kvp.Value)).ToArray();
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___kvp0), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		String_t* L_1;
		L_1 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___kvp0), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  L_2;
		memset((&L_2), 0, sizeof(L_2));
		KeyValue__ctor_mB02C8E33135318FC4B625DBFF40D732188B13B39((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi/<GetServerListRepeat>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetServerListRepeatU3Ed__10__ctor_m266442BE0D94127F8E9CADB1698E630EE260C6B0 (U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi/<GetServerListRepeat>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetServerListRepeatU3Ed__10_System_IDisposable_Dispose_m3B839977AE4D53161DEE3FB011AE3823C66E8FAF (U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Cloud.ListServerService.ListServerClientApi/<GetServerListRepeat>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetServerListRepeatU3Ed__10_MoveNext_mCACB031639965DB4DBDECCB21473B7757A8EA580 (U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_003e;
			}
			case 2:
			{
				goto IL_0060;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0029:
	{
		// yield return getServerList();
		ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * L_3 = V_1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ListServerClientApi_getServerList_mE8AE311010096A737DDC6F2C3AD4A0D80673B512(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(interval);
		int32_t L_5 = __this->get_interval_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, ((float)((float)L_5)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0060:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0029;
	}
}
// System.Object Mirror.Cloud.ListServerService.ListServerClientApi/<GetServerListRepeat>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetServerListRepeatU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB90FF7B8AEB6FF03E1856443239A7C0C7FE78F24 (U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi/<GetServerListRepeat>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetServerListRepeatU3Ed__10_System_Collections_IEnumerator_Reset_m2171CFEC95CF845CA7D2B0C5CD13A36F12D7C161 (U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetServerListRepeatU3Ed__10_System_Collections_IEnumerator_Reset_m2171CFEC95CF845CA7D2B0C5CD13A36F12D7C161_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Cloud.ListServerService.ListServerClientApi/<GetServerListRepeat>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetServerListRepeatU3Ed__10_System_Collections_IEnumerator_get_Current_mA99FFA34B5816F34232A650305BEC728202D0CD5 (U3CGetServerListRepeatU3Ed__10_tDABFC002239A3BD8B720D7A1E16D4713C9BB363E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi/<getServerList>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetServerListU3Ed__11__ctor_m46814C413E44A8271DEC519B16A1B8C5BCDDB0EF (U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi/<getServerList>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetServerListU3Ed__11_System_IDisposable_Dispose_mC0E56FFA317FEB0D06C3457F9E74A194EE7E6CD3 (U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Cloud.ListServerService.ListServerClientApi/<getServerList>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CgetServerListU3Ed__11_MoveNext_m40C471F80FF885DE2C8E574DFD9BB7CE6D851A8F (U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListServerClientApi_U3CgetServerListU3Eg__onSuccessU7C11_0_mA8F057772B76D795BAD5DDE8426455F2FEBF472A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1F6A044D424B6AF08152F50855B31FB5EAD3CDB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * V_1 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0057;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// UnityWebRequest request = requestCreator.Get("servers");
		ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)L_4)->get_requestCreator_1();
		NullCheck(L_5);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6;
		L_6 = InterfaceFuncInvoker1< UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t* >::Invoke(1 /* UnityEngine.Networking.UnityWebRequest Mirror.Cloud.IRequestCreator::Get(System.String) */, IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var, L_5, _stringLiteralE1F6A044D424B6AF08152F50855B31FB5EAD3CDB);
		V_2 = L_6;
		// yield return requestCreator.SendRequestEnumerator(request, onSuccess);
		ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)L_7)->get_requestCreator_1();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = V_2;
		ListServerClientApi_tE16496DF841071AA45688B82538B17B82057D64C * L_10 = V_1;
		RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * L_11 = (RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 *)il2cpp_codegen_object_new(RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133_il2cpp_TypeInfo_var);
		RequestSuccess__ctor_m3F3728350B1CFB5B659A7A17E92987067C3400E3(L_11, L_10, (intptr_t)((intptr_t)ListServerClientApi_U3CgetServerListU3Eg__onSuccessU7C11_0_mA8F057772B76D795BAD5DDE8426455F2FEBF472A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker3< RuntimeObject*, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 *, RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * >::Invoke(5 /* System.Collections.IEnumerator Mirror.Cloud.IRequestCreator::SendRequestEnumerator(UnityEngine.Networking.UnityWebRequest,Mirror.Cloud.RequestSuccess,Mirror.Cloud.RequestFail) */, IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var, L_8, L_9, L_11, (RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A *)NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0057:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Cloud.ListServerService.ListServerClientApi/<getServerList>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetServerListU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m19A291C4767C84CE3CE53833AC37643B16917908 (U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerClientApi/<getServerList>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetServerListU3Ed__11_System_Collections_IEnumerator_Reset_mAF8684B0440C9A6BD2E1E12E212B2746ACD6B2E1 (U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CgetServerListU3Ed__11_System_Collections_IEnumerator_Reset_mAF8684B0440C9A6BD2E1E12E212B2746ACD6B2E1_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Cloud.ListServerService.ListServerClientApi/<getServerList>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetServerListU3Ed__11_System_Collections_IEnumerator_get_Current_m1F44103817610C5762F2B46EE5881BB6C50E608D (U3CgetServerListU3Ed__11_tE1E0F02E5B0B014B184E9C063F53404B03C93E5C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mA28FDC699A2E3FA134BEED08127EBCCE0F4A355C (U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<>c__DisplayClass22_0::<removeServerWithoutCoroutine>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CremoveServerWithoutCoroutineU3Eb__0_m60D67ACBBB4A39CA93EDD26A9FF0CB9257D7D67D (U3CU3Ec__DisplayClass22_0_t501BB4331B2AA131437BA4641FDBF4FC7386B053 * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___op0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Logger.LogResponse(request);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_request_0();
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogResponse_m69B0BC4961D61880DE3D943E03EB60792E444643(L_0, /*hidden argument*/NULL);
		// };
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
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<addServer>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CaddServerU3Ed__18__ctor_m11B346846D264328484CB2292AC7CF7CE6998A4D (U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<addServer>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CaddServerU3Ed__18_System_IDisposable_Dispose_mBF2A2F4F9B3F4034D4DE46797A136728A96C3BEE (U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Cloud.ListServerService.ListServerServerApi/<addServer>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CaddServerU3Ed__18_MoveNext_m99A8081F49EB54E868E066A33CD36E9C2DC9AB69 (U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequestCreator_Post_TisServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_mF9ED6E50752FCCFEDC53C3E7132AE4B87B0F38DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListServerServerApi_U3CaddServerU3Eg__onFailU7C18_1_m32210599A9F7BA770D34B65DF7843BB5965DD031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListServerServerApi_U3CaddServerU3Eg__onSuccessU7C18_0_m7CCBC86FCD7C454FFC878BEE3D2A77F34938D385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1F6A044D424B6AF08152F50855B31FB5EAD3CDB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * V_1 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0082;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// added = true;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_added_7((bool)1);
		// sending = true;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_5 = V_1;
		NullCheck(L_5);
		L_5->set_sending_8((bool)1);
		// currentServer = server;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_6 = V_1;
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_7 = __this->get_server_3();
		NullCheck(L_6);
		L_6->set_currentServer_4(L_7);
		// UnityWebRequest request = requestCreator.Post("servers", currentServer);
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)L_8)->get_requestCreator_1();
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_10 = V_1;
		NullCheck(L_10);
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_11 = L_10->get_currentServer_4();
		NullCheck(L_9);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12;
		L_12 = GenericInterfaceFuncInvoker2< UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  >::Invoke(IRequestCreator_Post_TisServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_mF9ED6E50752FCCFEDC53C3E7132AE4B87B0F38DB_RuntimeMethod_var, L_9, _stringLiteralE1F6A044D424B6AF08152F50855B31FB5EAD3CDB, L_11);
		V_2 = L_12;
		// yield return requestCreator.SendRequestEnumerator(request, onSuccess, onFail);
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_13 = V_1;
		NullCheck(L_13);
		RuntimeObject* L_14 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)L_13)->get_requestCreator_1();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15 = V_2;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_16 = V_1;
		RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * L_17 = (RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 *)il2cpp_codegen_object_new(RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133_il2cpp_TypeInfo_var);
		RequestSuccess__ctor_m3F3728350B1CFB5B659A7A17E92987067C3400E3(L_17, L_16, (intptr_t)((intptr_t)ListServerServerApi_U3CaddServerU3Eg__onSuccessU7C18_0_m7CCBC86FCD7C454FFC878BEE3D2A77F34938D385_RuntimeMethod_var), /*hidden argument*/NULL);
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_18 = V_1;
		RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * L_19 = (RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A *)il2cpp_codegen_object_new(RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A_il2cpp_TypeInfo_var);
		RequestFail__ctor_m2209EFBCA9879589BB6E6DDEB8C5F231C4A392BD(L_19, L_18, (intptr_t)((intptr_t)ListServerServerApi_U3CaddServerU3Eg__onFailU7C18_1_m32210599A9F7BA770D34B65DF7843BB5965DD031_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker3< RuntimeObject*, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 *, RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * >::Invoke(5 /* System.Collections.IEnumerator Mirror.Cloud.IRequestCreator::SendRequestEnumerator(UnityEngine.Networking.UnityWebRequest,Mirror.Cloud.RequestSuccess,Mirror.Cloud.RequestFail) */, IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var, L_14, L_15, L_17, L_19);
		__this->set_U3CU3E2__current_1(L_20);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0082:
	{
		__this->set_U3CU3E1__state_0((-1));
		// sending = false;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_21 = V_1;
		NullCheck(L_21);
		L_21->set_sending_8((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Cloud.ListServerService.ListServerServerApi/<addServer>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CaddServerU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3245BB391AAFBD440926EC273EF4B92F515FE61F (U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<addServer>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CaddServerU3Ed__18_System_Collections_IEnumerator_Reset_m84E64CE143F8605CBFAF3FBF11CB763783F2CD10 (U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CaddServerU3Ed__18_System_Collections_IEnumerator_Reset_m84E64CE143F8605CBFAF3FBF11CB763783F2CD10_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Cloud.ListServerService.ListServerServerApi/<addServer>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CaddServerU3Ed__18_System_Collections_IEnumerator_get_Current_m2CF5831797D0BE8AA1F0C8E2C80B822D77BC815B (U3CaddServerU3Ed__18_t68CBAEBC2A54009F174C489E8FBD10CF002A6EE9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<ping>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpingU3Ed__20__ctor_m36EBD1C7BE6DEC38F8BA7A839F614A4DE82EDE47 (U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<ping>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpingU3Ed__20_System_IDisposable_Dispose_m5873B069E8197B624D7CF0093A69496CD8FFC70F (U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Cloud.ListServerService.ListServerServerApi/<ping>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CpingU3Ed__20_MoveNext_m0FE100AE5B56E063E45204B3CA9CE0F52CD5E199 (U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequestCreator_Patch_TisEmptyJson_tECA229F33ADFDA22AC938D91F6185E5120546A66_mD97F9F6A7F6064579D7079AC24124CBCB776DF34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListServerServerApi_U3CpingU3Eg__onFailU7C20_1_mBA34F07E99F2CD176C1EE310B19AA2A73BF9FA7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListServerServerApi_U3CpingU3Eg__onSuccessU7C20_0_m44DBC357F616341393977861269FCA81C5F7699A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C868056AF237BD3225A82F2DA8D56E8C3FE0079);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8188B12204D77846CFFD9F3AAEA0FC5BA6D31D0C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * V_1 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_2 = NULL;
	EmptyJson_tECA229F33ADFDA22AC938D91F6185E5120546A66  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_00be;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00cc;
	}

IL_002e:
	{
		// yield return new WaitForSeconds(PingInterval);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (20.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0047:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (skipNextPing)
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_skipNextPing_9();
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		// skipNextPing = false;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_skipNextPing_9((bool)0);
		// continue;
		goto IL_00cc;
	}

IL_005f:
	{
		// sending = true;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_7 = V_1;
		NullCheck(L_7);
		L_7->set_sending_8((bool)1);
		// UnityWebRequest request = requestCreator.Patch("servers/" + serverId, new EmptyJson());
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)L_8)->get_requestCreator_1();
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_serverId_5();
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8188B12204D77846CFFD9F3AAEA0FC5BA6D31D0C, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(EmptyJson_tECA229F33ADFDA22AC938D91F6185E5120546A66 ));
		EmptyJson_tECA229F33ADFDA22AC938D91F6185E5120546A66  L_13 = V_3;
		NullCheck(L_9);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14;
		L_14 = GenericInterfaceFuncInvoker2< UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*, EmptyJson_tECA229F33ADFDA22AC938D91F6185E5120546A66  >::Invoke(IRequestCreator_Patch_TisEmptyJson_tECA229F33ADFDA22AC938D91F6185E5120546A66_mD97F9F6A7F6064579D7079AC24124CBCB776DF34_RuntimeMethod_var, L_9, L_12, L_13);
		V_2 = L_14;
		// yield return requestCreator.SendRequestEnumerator(request, onSuccess, onFail);
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_15 = V_1;
		NullCheck(L_15);
		RuntimeObject* L_16 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)L_15)->get_requestCreator_1();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17 = V_2;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_18 = V_1;
		RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * L_19 = (RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 *)il2cpp_codegen_object_new(RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133_il2cpp_TypeInfo_var);
		RequestSuccess__ctor_m3F3728350B1CFB5B659A7A17E92987067C3400E3(L_19, L_18, (intptr_t)((intptr_t)ListServerServerApi_U3CpingU3Eg__onSuccessU7C20_0_m44DBC357F616341393977861269FCA81C5F7699A_RuntimeMethod_var), /*hidden argument*/NULL);
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_20 = V_1;
		RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * L_21 = (RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A *)il2cpp_codegen_object_new(RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A_il2cpp_TypeInfo_var);
		RequestFail__ctor_m2209EFBCA9879589BB6E6DDEB8C5F231C4A392BD(L_21, L_20, (intptr_t)((intptr_t)ListServerServerApi_U3CpingU3Eg__onFailU7C20_1_mBA34F07E99F2CD176C1EE310B19AA2A73BF9FA7C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker3< RuntimeObject*, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 *, RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * >::Invoke(5 /* System.Collections.IEnumerator Mirror.Cloud.IRequestCreator::SendRequestEnumerator(UnityEngine.Networking.UnityWebRequest,Mirror.Cloud.RequestSuccess,Mirror.Cloud.RequestFail) */, IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var, L_16, L_17, L_19, L_21);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00be:
	{
		__this->set_U3CU3E1__state_0((-1));
		// sending = false;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_23 = V_1;
		NullCheck(L_23);
		L_23->set_sending_8((bool)0);
	}

IL_00cc:
	{
		// while (pingFails <= MaxPingFails)
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_pingFails_10();
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)15))))
		{
			goto IL_002e;
		}
	}
	{
		// Logger.LogWarning("Max ping fails reached, stopping to ping server");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogWarning_mB4F5ECB5DEFBBC92EE827F376509D0CD1C7D7C03(_stringLiteral1C868056AF237BD3225A82F2DA8D56E8C3FE0079, /*hidden argument*/NULL);
		// _pingCoroutine = null;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_26 = V_1;
		NullCheck(L_26);
		L_26->set__pingCoroutine_6((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Cloud.ListServerService.ListServerServerApi/<ping>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CpingU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5CBDBAB1F42243CF04FE9F7EA3531230E9979157 (U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<ping>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpingU3Ed__20_System_Collections_IEnumerator_Reset_m8ACDE188126B93E80C06F1638B3EB3D7DA866BA9 (U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CpingU3Ed__20_System_Collections_IEnumerator_Reset_m8ACDE188126B93E80C06F1638B3EB3D7DA866BA9_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Cloud.ListServerService.ListServerServerApi/<ping>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CpingU3Ed__20_System_Collections_IEnumerator_get_Current_mBD6146F8420EF6742BD87A7F054B9E21E93B075B (U3CpingU3Ed__20_tFCEFDB66F6268937E12EE76CC04DFF36D79C4D2C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<removeServer>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CremoveServerU3Ed__21__ctor_m75A25C2799A30520F24CA05BF59555A856B893E4 (U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<removeServer>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CremoveServerU3Ed__21_System_IDisposable_Dispose_m46CDADE05A14A63BA5A6A5BCB9CC2AEF864801A8 (U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Cloud.ListServerService.ListServerServerApi/<removeServer>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CremoveServerU3Ed__21_MoveNext_mDAAE20F38701BC2EDED14E639C8946D030451589 (U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8188B12204D77846CFFD9F3AAEA0FC5BA6D31D0C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * V_1 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// sending = true;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_sending_8((bool)1);
		// UnityWebRequest request = requestCreator.Delete("servers/" + serverId);
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)L_5)->get_requestCreator_1();
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_serverId_5();
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8188B12204D77846CFFD9F3AAEA0FC5BA6D31D0C, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10;
		L_10 = InterfaceFuncInvoker1< UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t* >::Invoke(0 /* UnityEngine.Networking.UnityWebRequest Mirror.Cloud.IRequestCreator::Delete(System.String) */, IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var, L_6, L_9);
		V_2 = L_10;
		// yield return requestCreator.SendRequestEnumerator(request);
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_11 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_12 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)L_11)->get_requestCreator_1();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = V_2;
		NullCheck(L_12);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker3< RuntimeObject*, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 *, RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * >::Invoke(5 /* System.Collections.IEnumerator Mirror.Cloud.IRequestCreator::SendRequestEnumerator(UnityEngine.Networking.UnityWebRequest,Mirror.Cloud.RequestSuccess,Mirror.Cloud.RequestFail) */, IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var, L_12, L_13, (RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 *)NULL, (RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A *)NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// sending = false;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_15 = V_1;
		NullCheck(L_15);
		L_15->set_sending_8((bool)0);
		// added = false;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_16 = V_1;
		NullCheck(L_16);
		L_16->set_added_7((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Cloud.ListServerService.ListServerServerApi/<removeServer>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CremoveServerU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m905729FA1E591941AF7C9F54D558A12B494FC4C2 (U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<removeServer>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CremoveServerU3Ed__21_System_Collections_IEnumerator_Reset_mB7E96F43E3443ED9D3BFB9EB88FC25EFFFA9160B (U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CremoveServerU3Ed__21_System_Collections_IEnumerator_Reset_mB7E96F43E3443ED9D3BFB9EB88FC25EFFFA9160B_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Cloud.ListServerService.ListServerServerApi/<removeServer>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CremoveServerU3Ed__21_System_Collections_IEnumerator_get_Current_m9CEDD74EAEA5A7F836ECE5370100EC06890199E0 (U3CremoveServerU3Ed__21_tB270E4F7F3C339DBE71A44AD569AA799C060412B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<updateServer>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CupdateServerU3Ed__19__ctor_mD52CDD0A44D81546B0B63EF9ACF9109967DAB737 (U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<updateServer>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CupdateServerU3Ed__19_System_IDisposable_Dispose_mCFA23D44E5CFCFFBB1BE874E9B999566CC24B0EF (U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Cloud.ListServerService.ListServerServerApi/<updateServer>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CupdateServerU3Ed__19_MoveNext_m9B5632419D0584C564341EACB9CC11B99FB3CFF6 (U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequestCreator_Patch_TisPartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_mED44E506A732CE5B131E1AC5AE4DE551A0056344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListServerServerApi_U3CupdateServerU3Eg__onSuccessU7C19_0_mF7867288BCE9371208A68F4C0174C000978A1422_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6495F7B652B2430D9E8D1B9BB71ACC8F00D22077);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8188B12204D77846CFFD9F3AAEA0FC5BA6D31D0C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * V_1 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_00b8;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_004b;
	}

IL_002b:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0044:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004b:
	{
		// while (sending)
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_sending_8();
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		// if (!added) { Logger.LogWarning("UpdateServer called when before server was added"); yield break; }
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = L_6->get_added_7();
		if (L_7)
		{
			goto IL_0067;
		}
	}
	{
		// if (!added) { Logger.LogWarning("UpdateServer called when before server was added"); yield break; }
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		Logger_LogWarning_mB4F5ECB5DEFBBC92EE827F376509D0CD1C7D7C03(_stringLiteral6495F7B652B2430D9E8D1B9BB71ACC8F00D22077, /*hidden argument*/NULL);
		// if (!added) { Logger.LogWarning("UpdateServer called when before server was added"); yield break; }
		return (bool)0;
	}

IL_0067:
	{
		// sending = true;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_8 = V_1;
		NullCheck(L_8);
		L_8->set_sending_8((bool)1);
		// UnityWebRequest request = requestCreator.Patch("servers/" + serverId, server);
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_9 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_10 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)L_9)->get_requestCreator_1();
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12 = L_11->get_serverId_5();
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8188B12204D77846CFFD9F3AAEA0FC5BA6D31D0C, L_12, /*hidden argument*/NULL);
		PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B  L_14 = __this->get_server_3();
		NullCheck(L_10);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15;
		L_15 = GenericInterfaceFuncInvoker2< UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*, PartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B  >::Invoke(IRequestCreator_Patch_TisPartialServerJson_tA573B6D14FBF3D0128EDF7418ACF9B2DCDFED15B_mED44E506A732CE5B131E1AC5AE4DE551A0056344_RuntimeMethod_var, L_10, L_13, L_14);
		V_2 = L_15;
		// yield return requestCreator.SendRequestEnumerator(request, onSuccess);
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_16 = V_1;
		NullCheck(L_16);
		RuntimeObject* L_17 = ((BaseApi_t723C01FB7E407FE274EF6041BE2D56D2F9A77251 *)L_16)->get_requestCreator_1();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_18 = V_2;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_19 = V_1;
		RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * L_20 = (RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 *)il2cpp_codegen_object_new(RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133_il2cpp_TypeInfo_var);
		RequestSuccess__ctor_m3F3728350B1CFB5B659A7A17E92987067C3400E3(L_20, L_19, (intptr_t)((intptr_t)ListServerServerApi_U3CupdateServerU3Eg__onSuccessU7C19_0_mF7867288BCE9371208A68F4C0174C000978A1422_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker3< RuntimeObject*, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 *, RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * >::Invoke(5 /* System.Collections.IEnumerator Mirror.Cloud.IRequestCreator::SendRequestEnumerator(UnityEngine.Networking.UnityWebRequest,Mirror.Cloud.RequestSuccess,Mirror.Cloud.RequestFail) */, IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E_il2cpp_TypeInfo_var, L_17, L_18, L_20, (RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A *)NULL);
		__this->set_U3CU3E2__current_1(L_21);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00b8:
	{
		__this->set_U3CU3E1__state_0((-1));
		// sending = false;
		ListServerServerApi_t26C29C6A77559C04EB75FE0AA6E214D3CC49DF2B * L_22 = V_1;
		NullCheck(L_22);
		L_22->set_sending_8((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Cloud.ListServerService.ListServerServerApi/<updateServer>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CupdateServerU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m55CA81309EFBE58C2A437D2807A2856E8EE32051 (U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Cloud.ListServerService.ListServerServerApi/<updateServer>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CupdateServerU3Ed__19_System_Collections_IEnumerator_Reset_mE21033BEA02F5F8FF83B449AE92D8789FD3492E6 (U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CupdateServerU3Ed__19_System_Collections_IEnumerator_Reset_mE21033BEA02F5F8FF83B449AE92D8789FD3492E6_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Cloud.ListServerService.ListServerServerApi/<updateServer>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CupdateServerU3Ed__19_System_Collections_IEnumerator_get_Current_mCCA71A1D8A3FB1388FE28FBE96A4868DA98A19B4 (U3CupdateServerU3Ed__19_t1C62820DD8BF9773112A37891E5CCF35F51ABEA0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestEnumeratorU3Ed__15__ctor_m345587D889D6FF23396EA611B089EDBDBAAFE32A (U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestEnumeratorU3Ed__15_System_IDisposable_Dispose_m16E5479DA9B40272EB914F40FD09921AA5C7C326 (U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CSendRequestEnumeratorU3Ed__15_U3CU3Em__Finally1_m502ADB2813E350C9C135C07C71A9B0CE70489E26(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendRequestEnumeratorU3Ed__15_MoveNext_m2A67A2E7B2F1776A83EEE283C2670E2DCC83A2C0 (U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * G_B7_0 = NULL;
	RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * G_B6_0 = NULL;
	RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * G_B10_0 = NULL;
	RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * G_B9_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_004c;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00c1;
		}

IL_0015:
		{
			__this->set_U3CU3E1__state_0((-1));
			// using (UnityWebRequest webRequest = request)
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3 = __this->get_request_2();
			__this->set_U3CwebRequestU3E5__2_5(L_3);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return webRequest.SendWebRequest();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4 = __this->get_U3CwebRequestU3E5__2_5();
			NullCheck(L_4);
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_5;
			L_5 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_4, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_5);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00c1;
		}

IL_004c:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// Logger.LogResponse(webRequest);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = __this->get_U3CwebRequestU3E5__2_5();
			IL2CPP_RUNTIME_CLASS_INIT(Logger_t4CC5FB0428BC49E2E9EBFFCE2A9A0BA6BFDA55A3_il2cpp_TypeInfo_var);
			Logger_LogResponse_m69B0BC4961D61880DE3D943E03EB60792E444643(L_6, /*hidden argument*/NULL);
			// string text = webRequest.downloadHandler.text;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = __this->get_U3CwebRequestU3E5__2_5();
			NullCheck(L_7);
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_8;
			L_8 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			String_t* L_9;
			L_9 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_8, /*hidden argument*/NULL);
			V_2 = L_9;
			// Logger.Verbose(text);
			String_t* L_10 = V_2;
			Logger_Verbose_m58E5E28ED8DF98AB74256996CB5CF97CAD5FE1D7(L_10, /*hidden argument*/NULL);
			// if (webRequest.IsOk())
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CwebRequestU3E5__2_5();
			bool L_12;
			L_12 = Extensions_IsOk_m5D362F2652D710ACFE3B7CCE4E8D69800CF65762(L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0097;
			}
		}

IL_0083:
		{
			// onSuccess?.Invoke(text);
			RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * L_13 = __this->get_onSuccess_3();
			RequestSuccess_tDD31154DB444B9F8B9FB11A8AE15684B3D3F4133 * L_14 = L_13;
			G_B6_0 = L_14;
			if (L_14)
			{
				G_B7_0 = L_14;
				goto IL_008f;
			}
		}

IL_008c:
		{
			goto IL_00a9;
		}

IL_008f:
		{
			String_t* L_15 = V_2;
			NullCheck(G_B7_0);
			RequestSuccess_Invoke_mC84186FF5F4FDB0D0661549471D147BB04BEE8D7(G_B7_0, L_15, /*hidden argument*/NULL);
			// }
			goto IL_00a9;
		}

IL_0097:
		{
			// onFail?.Invoke(text);
			RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * L_16 = __this->get_onFail_4();
			RequestFail_tBC4929A2BD0C171E96D3FC6D8861D07C41A3FE3A * L_17 = L_16;
			G_B9_0 = L_17;
			if (L_17)
			{
				G_B10_0 = L_17;
				goto IL_00a3;
			}
		}

IL_00a0:
		{
			goto IL_00a9;
		}

IL_00a3:
		{
			String_t* L_18 = V_2;
			NullCheck(G_B10_0);
			RequestFail_Invoke_m5AE58CE088A4C65651565FECCDE81D2228B18E6B(G_B10_0, L_18, /*hidden argument*/NULL);
		}

IL_00a9:
		{
			// }
			U3CSendRequestEnumeratorU3Ed__15_U3CU3Em__Finally1_m502ADB2813E350C9C135C07C71A9B0CE70489E26(__this, /*hidden argument*/NULL);
			__this->set_U3CwebRequestU3E5__2_5((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
			// }
			V_0 = (bool)0;
			goto IL_00c1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ba;
	}

FAULT_00ba:
	{ // begin fault (depth: 1)
		U3CSendRequestEnumeratorU3Ed__15_System_IDisposable_Dispose_m16E5479DA9B40272EB914F40FD09921AA5C7C326(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(186)
	} // end fault
	IL2CPP_CLEANUP(186)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c1:
	{
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestEnumeratorU3Ed__15_U3CU3Em__Finally1_m502ADB2813E350C9C135C07C71A9B0CE70489E26 (U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CwebRequestU3E5__2_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = __this->get_U3CwebRequestU3E5__2_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSendRequestEnumeratorU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA29EB119A6C0C28513435EE90488EF47DDF14DE3 (U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_mAFEBCB87D91286990AD155FA294CC2D6526AA021 (U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendRequestEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_mAFEBCB87D91286990AD155FA294CC2D6526AA021_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Cloud.RequestCreator/<SendRequestEnumerator>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSendRequestEnumeratorU3Ed__15_System_Collections_IEnumerator_get_Current_mFC653D490EB575D36C84ED70412FCFA17F931A1F (U3CSendRequestEnumeratorU3Ed__15_t604DAB317C571624EC050D7B1124FFB259E797F1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiConnector_set_ListServer_mF515EEE5908AD2E4E313956A9A1EFAE4D197BB89_inline (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * ___value0, const RuntimeMethod* method)
{
	{
		// public ListServer ListServer { get; private set; }
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_0 = ___value0;
		__this->set_U3CListServerU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, const RuntimeMethod* method)
{
	{
		// public ListServer ListServer { get; private set; }
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_0 = __this->get_U3CListServerU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
