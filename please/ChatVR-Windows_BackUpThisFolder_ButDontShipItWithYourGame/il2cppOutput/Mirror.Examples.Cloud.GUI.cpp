#include "pch-cpp.hpp"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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

// System.Action`1<System.Exception>
struct Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`1<Mirror.NetworkConnection>
struct Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F;
// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC;
// System.Action`2<System.Int32,System.Exception>
struct Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67;
// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient>
struct Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate>
struct Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.HashSet`1<Mirror.NetworkConnection>
struct HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05;
// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>
struct HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Mirror.NetworkConnectionToClient>
struct KeyCollection_t8D65BE6654EF956480ECF996B9A79FA56635F07B;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem>
struct List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>
struct UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Mirror.NetworkConnectionToClient>
struct ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Mirror.NetworkConnectionToClient>[]
struct EntryU5BU5D_t2D9A037EDBEB0FEEEB310E7488A8AA19FF8DDCD8;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Mirror.Cloud.ListServerService.KeyValue[]
struct KeyValueU5BU5D_t2A2C9FE161E3BDAEE4DB89FD0BC9BC94712358D9;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// Mirror.Cloud.ListServerService.ServerJson[]
struct ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641;
// Mirror.Cloud.Example.ServerListUIItem[]
struct ServerListUIItemU5BU5D_t6C0AB8127C6EE60D654A6A05ACB3BF4781B97312;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// Mirror.Cloud.ApiConnector
struct ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80;
// Mirror.Cloud.Example.ApiUpdater
struct ApiUpdater_t5E6F9FEAC6F4FD7B86FF929FE8C4A92F9A6C7534;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Mirror.Cloud.ListServerService.IListServerClientApi
struct IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6;
// Mirror.Cloud.ListServerService.IListServerServerApi
struct IListServerServerApi_t718DD69845E48139C71477B8E4B38B443C68CEA7;
// Mirror.Cloud.IRequestCreator
struct IRequestCreator_t5094B7F928CAAEF49FF9FF31EE40C35FEBBE225E;
// Mirror.Cloud.Examples.InstantiateNetworkManager
struct InstantiateNetworkManager_t7CB6AB614325F982A34161A3DF57E16E761B6FFE;
// Mirror.InterestManagement
struct InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Mirror.Cloud.ListServerService.ListServer
struct ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Mirror.NetworkAuthenticator
struct NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF;
// Mirror.NetworkConnection
struct NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311;
// Mirror.NetworkConnectionToClient
struct NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A;
// Mirror.NetworkIdentity
struct NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6;
// Mirror.NetworkManager
struct NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15;
// Mirror.Cloud.Example.NetworkManagerListServer
struct NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Mirror.Cloud.Example.QuickListServerDebug
struct QuickListServerDebug_t6EF403592C5339C3749925A725E78B240DA0F01A;
// Mirror.Examples.Pong.QuitButtonHUD
struct QuitButtonHUD_t9B8F81BA4B5ABB959E800B00A569E2710E6EAA8E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// Mirror.Cloud.ServerListEvent
struct ServerListEvent_t4B01E7F1A765DC6370C241AE92F97904B203EAEA;
// Mirror.Cloud.Example.ServerListManager
struct ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833;
// Mirror.Cloud.Example.ServerListUI
struct ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA;
// Mirror.Cloud.Example.ServerListUIItem
struct ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Mirror.Transport
struct Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged
struct OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IListServerServerApi_t718DD69845E48139C71477B8E4B38B443C68CEA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral3931E6D8611AD78B9EAE8623A5552724272A477B;
IL2CPP_EXTERN_C String_t* _stringLiteral458A0A752FF9F0DFB7280B2DE1F4A7CE7D020BAF;
IL2CPP_EXTERN_C String_t* _stringLiteral55C5B9ED1AB5218DCF8E4FCB8994B44067FB4EFF;
IL2CPP_EXTERN_C String_t* _stringLiteral5A7FED13743F315AF513E98B470682558F1217C8;
IL2CPP_EXTERN_C String_t* _stringLiteral6420A5686977BF95B15B93846D0D50D48EA1D86A;
IL2CPP_EXTERN_C String_t* _stringLiteral7050AE34EC70FCA836F73D1846FE88E6716A12BA;
IL2CPP_EXTERN_C String_t* _stringLiteralAAD94E48A4C36EAD4BD03791F306A25BBFD0681A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA62F1B246827B8705B87EB7C28443B22C1BE9A3;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C0D1BF72BE78A6F462ED9ACB0137E09DD4E676;
IL2CPP_EXTERN_C String_t* _stringLiteralF8256C9B9F9DC5B71237BF75D2E2939A8AB1042F;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFCC246F1E81C4426050B978FEE10D91BFE3B9BDE;
IL2CPP_EXTERN_C const RuntimeMethod* ApiUpdater_ServerStartedHandler_m7ACCE579E8522DDFC06058D41C88859E91FDB4CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApiUpdater_ServerStoppedHandler_mEA7AB930F0446BAE9B17C2B2AD9A6D4A57B0AD26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApiUpdater_onPlayerListChanged_m9B3D07F4E697DA8893447631B4DCFDE13709E467_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80_m679A7D495B763FF9BEBA64C184D60699AF077040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m9E9BE3E296FBC3A1D0FC73328F2FF60FAA3996E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA609C95443AD26EEDABBE151D0A9A29CA3451431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEFC5A5966D14AC4D50790A2AF79F6E42C25D383F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6484BFBAFE52968FDFE25DBDA36B48180345A252_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCF4F04EBE60C452A5B83516CB8A7377D67BB0840_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4614D86C0F88435A1C3E0F2895F4930F2ED3DCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB91AADF2389C71F27B189ECAD1AB68A6F9AD79CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m066539F8B1502941E49BE0E1D4F0A719FEC09600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m0D970C65CEAAC6EB2242391448125511E47821CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6A20348D12CE335AAF6EE20B74E8C96FA33ACFFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m9F00A952AC2D4CA80EB4D85D8B64C2F2CB1C2A68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisNetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2_m2837FA591B9BE6C944BD1B25B18C428EA7DA1972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09_mFC2576A07602D4710AB3237EDFA36EA754E441DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickListServerDebug_ClientApi_onServerListUpdated_m10185378B51782EA9139B325D3D39CE9D7BD80AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServerListManager_RefreshButtonHandler_m92AB151A0D65B555ECF8427DBA3AD17BDA523A06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServerListManager_StartServerButtonHandler_m90A099E63A7147FCFB139162CF4960A79393A564_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServerListUIItem_OnJoinClicked_mCA89BF6DBA3671C49D9D437A0639305352FB88E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServerListUI_UpdateList_m04C16D1CF015EE990BCECB2135E1F618B91C861E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m3B58BDBB7635065F9DF522A6531BFF7365020CF9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com;
struct KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke;
struct ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_com;
struct ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t99E787199628CADFEDB970A988F9CB77E16BF755 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient>
struct  Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2D9A037EDBEB0FEEEB310E7488A8AA19FF8DDCD8* ___entries_1;
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
	KeyCollection_t8D65BE6654EF956480ECF996B9A79FA56635F07B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___entries_1)); }
	inline EntryU5BU5D_t2D9A037EDBEB0FEEEB310E7488A8AA19FF8DDCD8* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2D9A037EDBEB0FEEEB310E7488A8AA19FF8DDCD8** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2D9A037EDBEB0FEEEB310E7488A8AA19FF8DDCD8* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___keys_7)); }
	inline KeyCollection_t8D65BE6654EF956480ECF996B9A79FA56635F07B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8D65BE6654EF956480ECF996B9A79FA56635F07B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8D65BE6654EF956480ECF996B9A79FA56635F07B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___values_8)); }
	inline ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem>
struct  List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ServerListUIItemU5BU5D_t6C0AB8127C6EE60D654A6A05ACB3BF4781B97312* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC, ____items_1)); }
	inline ServerListUIItemU5BU5D_t6C0AB8127C6EE60D654A6A05ACB3BF4781B97312* get__items_1() const { return ____items_1; }
	inline ServerListUIItemU5BU5D_t6C0AB8127C6EE60D654A6A05ACB3BF4781B97312** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ServerListUIItemU5BU5D_t6C0AB8127C6EE60D654A6A05ACB3BF4781B97312* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ServerListUIItemU5BU5D_t6C0AB8127C6EE60D654A6A05ACB3BF4781B97312* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC_StaticFields, ____emptyArray_5)); }
	inline ServerListUIItemU5BU5D_t6C0AB8127C6EE60D654A6A05ACB3BF4781B97312* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ServerListUIItemU5BU5D_t6C0AB8127C6EE60D654A6A05ACB3BF4781B97312** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ServerListUIItemU5BU5D_t6C0AB8127C6EE60D654A6A05ACB3BF4781B97312* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// Mirror.NetworkConnection
struct  NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::observing
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * ___observing_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate> Mirror.NetworkConnection::messageHandlers
	Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * ___messageHandlers_2;
	// System.Int32 Mirror.NetworkConnection::connectionId
	int32_t ___connectionId_3;
	// System.Boolean Mirror.NetworkConnection::isAuthenticated
	bool ___isAuthenticated_4;
	// System.Object Mirror.NetworkConnection::authenticationData
	RuntimeObject * ___authenticationData_5;
	// System.Boolean Mirror.NetworkConnection::isReady
	bool ___isReady_6;
	// System.Single Mirror.NetworkConnection::lastMessageTime
	float ___lastMessageTime_7;
	// Mirror.NetworkIdentity Mirror.NetworkConnection::<identity>k__BackingField
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___U3CidentityU3Ek__BackingField_8;
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::clientOwnedObjects
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * ___clientOwnedObjects_9;

public:
	inline static int32_t get_offset_of_observing_1() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___observing_1)); }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * get_observing_1() const { return ___observing_1; }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB ** get_address_of_observing_1() { return &___observing_1; }
	inline void set_observing_1(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * value)
	{
		___observing_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observing_1), (void*)value);
	}

	inline static int32_t get_offset_of_messageHandlers_2() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___messageHandlers_2)); }
	inline Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * get_messageHandlers_2() const { return ___messageHandlers_2; }
	inline Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB ** get_address_of_messageHandlers_2() { return &___messageHandlers_2; }
	inline void set_messageHandlers_2(Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * value)
	{
		___messageHandlers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHandlers_2), (void*)value);
	}

	inline static int32_t get_offset_of_connectionId_3() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___connectionId_3)); }
	inline int32_t get_connectionId_3() const { return ___connectionId_3; }
	inline int32_t* get_address_of_connectionId_3() { return &___connectionId_3; }
	inline void set_connectionId_3(int32_t value)
	{
		___connectionId_3 = value;
	}

	inline static int32_t get_offset_of_isAuthenticated_4() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___isAuthenticated_4)); }
	inline bool get_isAuthenticated_4() const { return ___isAuthenticated_4; }
	inline bool* get_address_of_isAuthenticated_4() { return &___isAuthenticated_4; }
	inline void set_isAuthenticated_4(bool value)
	{
		___isAuthenticated_4 = value;
	}

	inline static int32_t get_offset_of_authenticationData_5() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___authenticationData_5)); }
	inline RuntimeObject * get_authenticationData_5() const { return ___authenticationData_5; }
	inline RuntimeObject ** get_address_of_authenticationData_5() { return &___authenticationData_5; }
	inline void set_authenticationData_5(RuntimeObject * value)
	{
		___authenticationData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticationData_5), (void*)value);
	}

	inline static int32_t get_offset_of_isReady_6() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___isReady_6)); }
	inline bool get_isReady_6() const { return ___isReady_6; }
	inline bool* get_address_of_isReady_6() { return &___isReady_6; }
	inline void set_isReady_6(bool value)
	{
		___isReady_6 = value;
	}

	inline static int32_t get_offset_of_lastMessageTime_7() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___lastMessageTime_7)); }
	inline float get_lastMessageTime_7() const { return ___lastMessageTime_7; }
	inline float* get_address_of_lastMessageTime_7() { return &___lastMessageTime_7; }
	inline void set_lastMessageTime_7(float value)
	{
		___lastMessageTime_7 = value;
	}

	inline static int32_t get_offset_of_U3CidentityU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___U3CidentityU3Ek__BackingField_8)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_U3CidentityU3Ek__BackingField_8() const { return ___U3CidentityU3Ek__BackingField_8; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_U3CidentityU3Ek__BackingField_8() { return &___U3CidentityU3Ek__BackingField_8; }
	inline void set_U3CidentityU3Ek__BackingField_8(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___U3CidentityU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidentityU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_clientOwnedObjects_9() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___clientOwnedObjects_9)); }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * get_clientOwnedObjects_9() const { return ___clientOwnedObjects_9; }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB ** get_address_of_clientOwnedObjects_9() { return &___clientOwnedObjects_9; }
	inline void set_clientOwnedObjects_9(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * value)
	{
		___clientOwnedObjects_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientOwnedObjects_9), (void*)value);
	}
};


// Mirror.NetworkServer
struct  NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD  : public RuntimeObject
{
public:

public:
};

struct NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields
{
public:
	// System.Boolean Mirror.NetworkServer::initialized
	bool ___initialized_0;
	// System.Int32 Mirror.NetworkServer::maxConnections
	int32_t ___maxConnections_1;
	// Mirror.NetworkConnectionToClient Mirror.NetworkServer::<localConnection>k__BackingField
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___U3ClocalConnectionU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient> Mirror.NetworkServer::connections
	Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * ___connections_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate> Mirror.NetworkServer::handlers
	Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * ___handlers_4;
	// System.Boolean Mirror.NetworkServer::dontListen
	bool ___dontListen_5;
	// System.Boolean Mirror.NetworkServer::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_6;
	// System.Boolean Mirror.NetworkServer::batching
	bool ___batching_7;
	// System.Single Mirror.NetworkServer::batchInterval
	float ___batchInterval_8;
	// Mirror.InterestManagement Mirror.NetworkServer::aoi
	InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * ___aoi_9;
	// System.Boolean Mirror.NetworkServer::disconnectInactiveConnections
	bool ___disconnectInactiveConnections_10;
	// System.Single Mirror.NetworkServer::disconnectInactiveTimeout
	float ___disconnectInactiveTimeout_11;
	// System.Action`1<Mirror.NetworkConnection> Mirror.NetworkServer::OnConnectedEvent
	Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F * ___OnConnectedEvent_12;
	// System.Action`1<Mirror.NetworkConnection> Mirror.NetworkServer::OnDisconnectedEvent
	Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F * ___OnDisconnectedEvent_13;
	// System.Collections.Generic.HashSet`1<Mirror.NetworkConnection> Mirror.NetworkServer::newObservers
	HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * ___newObservers_14;

public:
	inline static int32_t get_offset_of_initialized_0() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___initialized_0)); }
	inline bool get_initialized_0() const { return ___initialized_0; }
	inline bool* get_address_of_initialized_0() { return &___initialized_0; }
	inline void set_initialized_0(bool value)
	{
		___initialized_0 = value;
	}

	inline static int32_t get_offset_of_maxConnections_1() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___maxConnections_1)); }
	inline int32_t get_maxConnections_1() const { return ___maxConnections_1; }
	inline int32_t* get_address_of_maxConnections_1() { return &___maxConnections_1; }
	inline void set_maxConnections_1(int32_t value)
	{
		___maxConnections_1 = value;
	}

	inline static int32_t get_offset_of_U3ClocalConnectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___U3ClocalConnectionU3Ek__BackingField_2)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get_U3ClocalConnectionU3Ek__BackingField_2() const { return ___U3ClocalConnectionU3Ek__BackingField_2; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of_U3ClocalConnectionU3Ek__BackingField_2() { return &___U3ClocalConnectionU3Ek__BackingField_2; }
	inline void set_U3ClocalConnectionU3Ek__BackingField_2(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		___U3ClocalConnectionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalConnectionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_connections_3() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___connections_3)); }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * get_connections_3() const { return ___connections_3; }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 ** get_address_of_connections_3() { return &___connections_3; }
	inline void set_connections_3(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * value)
	{
		___connections_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connections_3), (void*)value);
	}

	inline static int32_t get_offset_of_handlers_4() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___handlers_4)); }
	inline Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * get_handlers_4() const { return ___handlers_4; }
	inline Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB ** get_address_of_handlers_4() { return &___handlers_4; }
	inline void set_handlers_4(Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * value)
	{
		___handlers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handlers_4), (void*)value);
	}

	inline static int32_t get_offset_of_dontListen_5() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___dontListen_5)); }
	inline bool get_dontListen_5() const { return ___dontListen_5; }
	inline bool* get_address_of_dontListen_5() { return &___dontListen_5; }
	inline void set_dontListen_5(bool value)
	{
		___dontListen_5 = value;
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___U3CactiveU3Ek__BackingField_6)); }
	inline bool get_U3CactiveU3Ek__BackingField_6() const { return ___U3CactiveU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_6() { return &___U3CactiveU3Ek__BackingField_6; }
	inline void set_U3CactiveU3Ek__BackingField_6(bool value)
	{
		___U3CactiveU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_batching_7() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___batching_7)); }
	inline bool get_batching_7() const { return ___batching_7; }
	inline bool* get_address_of_batching_7() { return &___batching_7; }
	inline void set_batching_7(bool value)
	{
		___batching_7 = value;
	}

	inline static int32_t get_offset_of_batchInterval_8() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___batchInterval_8)); }
	inline float get_batchInterval_8() const { return ___batchInterval_8; }
	inline float* get_address_of_batchInterval_8() { return &___batchInterval_8; }
	inline void set_batchInterval_8(float value)
	{
		___batchInterval_8 = value;
	}

	inline static int32_t get_offset_of_aoi_9() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___aoi_9)); }
	inline InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * get_aoi_9() const { return ___aoi_9; }
	inline InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 ** get_address_of_aoi_9() { return &___aoi_9; }
	inline void set_aoi_9(InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * value)
	{
		___aoi_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aoi_9), (void*)value);
	}

	inline static int32_t get_offset_of_disconnectInactiveConnections_10() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___disconnectInactiveConnections_10)); }
	inline bool get_disconnectInactiveConnections_10() const { return ___disconnectInactiveConnections_10; }
	inline bool* get_address_of_disconnectInactiveConnections_10() { return &___disconnectInactiveConnections_10; }
	inline void set_disconnectInactiveConnections_10(bool value)
	{
		___disconnectInactiveConnections_10 = value;
	}

	inline static int32_t get_offset_of_disconnectInactiveTimeout_11() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___disconnectInactiveTimeout_11)); }
	inline float get_disconnectInactiveTimeout_11() const { return ___disconnectInactiveTimeout_11; }
	inline float* get_address_of_disconnectInactiveTimeout_11() { return &___disconnectInactiveTimeout_11; }
	inline void set_disconnectInactiveTimeout_11(float value)
	{
		___disconnectInactiveTimeout_11 = value;
	}

	inline static int32_t get_offset_of_OnConnectedEvent_12() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___OnConnectedEvent_12)); }
	inline Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F * get_OnConnectedEvent_12() const { return ___OnConnectedEvent_12; }
	inline Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F ** get_address_of_OnConnectedEvent_12() { return &___OnConnectedEvent_12; }
	inline void set_OnConnectedEvent_12(Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F * value)
	{
		___OnConnectedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnectedEvent_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnectedEvent_13() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___OnDisconnectedEvent_13)); }
	inline Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F * get_OnDisconnectedEvent_13() const { return ___OnDisconnectedEvent_13; }
	inline Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F ** get_address_of_OnDisconnectedEvent_13() { return &___OnDisconnectedEvent_13; }
	inline void set_OnDisconnectedEvent_13(Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F * value)
	{
		___OnDisconnectedEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnectedEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_newObservers_14() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___newObservers_14)); }
	inline HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * get_newObservers_14() const { return ___newObservers_14; }
	inline HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 ** get_address_of_newObservers_14() { return &___newObservers_14; }
	inline void set_newObservers_14(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * value)
	{
		___newObservers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newObservers_14), (void*)value);
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

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Mirror.Cloud.Example.ServerListUIItem>
struct  Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB, ___list_0)); }
	inline List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * get_list_0() const { return ___list_0; }
	inline List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB, ___current_3)); }
	inline ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * get_current_3() const { return ___current_3; }
	inline ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>
struct  Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB 
{
public:
	// T System.Nullable`1::value
	ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB, ___value_0)); }
	inline ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  get_value_0() const { return ___value_0; }
	inline ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___servers_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
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

// Mirror.NetworkManagerMode
struct  NetworkManagerMode_t53B2212CEC3ED0A68CA0BE2365C233C7E2C83DFD 
{
public:
	// System.Int32 Mirror.NetworkManagerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkManagerMode_t53B2212CEC3ED0A68CA0BE2365C233C7E2C83DFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Mirror.PlayerSpawnMethod
struct  PlayerSpawnMethod_t621298130B9992D978B1AC813054DBE1D43D7D96 
{
public:
	// System.Int32 Mirror.PlayerSpawnMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerSpawnMethod_t621298130B9992D978B1AC813054DBE1D43D7D96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.SceneOperation
struct  SceneOperation_t43180D185C1D8F6FF33FC8A61F3AC3528627667E 
{
public:
	// System.Byte Mirror.SceneOperation::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneOperation_t43180D185C1D8F6FF33FC8A61F3AC3528627667E, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.GUILayoutOption/Type
struct  Type_t79FB5C82B695061CED8D628CBB6A1E8709705288 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t79FB5C82B695061CED8D628CBB6A1E8709705288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
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


// UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>
struct  UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
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


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged
struct  OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF  : public MulticastDelegate_t
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


// Mirror.Cloud.Example.ApiUpdater
struct  ApiUpdater_t5E6F9FEAC6F4FD7B86FF929FE8C4A92F9A6C7534  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Mirror.Cloud.Example.NetworkManagerListServer Mirror.Cloud.Example.ApiUpdater::manager
	NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * ___manager_4;
	// Mirror.Cloud.ApiConnector Mirror.Cloud.Example.ApiUpdater::connector
	ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * ___connector_5;
	// System.String Mirror.Cloud.Example.ApiUpdater::gameName
	String_t* ___gameName_6;

public:
	inline static int32_t get_offset_of_manager_4() { return static_cast<int32_t>(offsetof(ApiUpdater_t5E6F9FEAC6F4FD7B86FF929FE8C4A92F9A6C7534, ___manager_4)); }
	inline NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * get_manager_4() const { return ___manager_4; }
	inline NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 ** get_address_of_manager_4() { return &___manager_4; }
	inline void set_manager_4(NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * value)
	{
		___manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_4), (void*)value);
	}

	inline static int32_t get_offset_of_connector_5() { return static_cast<int32_t>(offsetof(ApiUpdater_t5E6F9FEAC6F4FD7B86FF929FE8C4A92F9A6C7534, ___connector_5)); }
	inline ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * get_connector_5() const { return ___connector_5; }
	inline ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 ** get_address_of_connector_5() { return &___connector_5; }
	inline void set_connector_5(ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * value)
	{
		___connector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connector_5), (void*)value);
	}

	inline static int32_t get_offset_of_gameName_6() { return static_cast<int32_t>(offsetof(ApiUpdater_t5E6F9FEAC6F4FD7B86FF929FE8C4A92F9A6C7534, ___gameName_6)); }
	inline String_t* get_gameName_6() const { return ___gameName_6; }
	inline String_t** get_address_of_gameName_6() { return &___gameName_6; }
	inline void set_gameName_6(String_t* value)
	{
		___gameName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameName_6), (void*)value);
	}
};


// Mirror.Cloud.Examples.InstantiateNetworkManager
struct  InstantiateNetworkManager_t7CB6AB614325F982A34161A3DF57E16E761B6FFE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Mirror.Cloud.Examples.InstantiateNetworkManager::prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_4;

public:
	inline static int32_t get_offset_of_prefab_4() { return static_cast<int32_t>(offsetof(InstantiateNetworkManager_t7CB6AB614325F982A34161A3DF57E16E761B6FFE, ___prefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_4() const { return ___prefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_4() { return &___prefab_4; }
	inline void set_prefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_4), (void*)value);
	}
};


// Mirror.NetworkManager
struct  NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Mirror.NetworkManager::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_4;
	// System.Boolean Mirror.NetworkManager::runInBackground
	bool ___runInBackground_5;
	// System.Boolean Mirror.NetworkManager::autoStartServerBuild
	bool ___autoStartServerBuild_6;
	// System.Boolean Mirror.NetworkManager::showDebugMessages
	bool ___showDebugMessages_7;
	// System.Int32 Mirror.NetworkManager::serverTickRate
	int32_t ___serverTickRate_8;
	// System.Boolean Mirror.NetworkManager::serverBatching
	bool ___serverBatching_9;
	// System.Single Mirror.NetworkManager::serverBatchInterval
	float ___serverBatchInterval_10;
	// System.String Mirror.NetworkManager::offlineScene
	String_t* ___offlineScene_11;
	// System.String Mirror.NetworkManager::onlineScene
	String_t* ___onlineScene_12;
	// Mirror.Transport Mirror.NetworkManager::transport
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * ___transport_13;
	// System.String Mirror.NetworkManager::networkAddress
	String_t* ___networkAddress_14;
	// System.Int32 Mirror.NetworkManager::maxConnections
	int32_t ___maxConnections_15;
	// System.Boolean Mirror.NetworkManager::disconnectInactiveConnections
	bool ___disconnectInactiveConnections_16;
	// System.Single Mirror.NetworkManager::disconnectInactiveTimeout
	float ___disconnectInactiveTimeout_17;
	// Mirror.NetworkAuthenticator Mirror.NetworkManager::authenticator
	NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * ___authenticator_18;
	// UnityEngine.GameObject Mirror.NetworkManager::playerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerPrefab_19;
	// System.Boolean Mirror.NetworkManager::autoCreatePlayer
	bool ___autoCreatePlayer_20;
	// Mirror.PlayerSpawnMethod Mirror.NetworkManager::playerSpawnMethod
	int32_t ___playerSpawnMethod_21;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Mirror.NetworkManager::spawnPrefabs
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___spawnPrefabs_22;
	// System.Boolean Mirror.NetworkManager::isNetworkActive
	bool ___isNetworkActive_26;
	// System.Boolean Mirror.NetworkManager::clientLoadedScene
	bool ___clientLoadedScene_28;
	// Mirror.NetworkManagerMode Mirror.NetworkManager::<mode>k__BackingField
	int32_t ___U3CmodeU3Ek__BackingField_29;
	// System.Boolean Mirror.NetworkManager::finishStartHostPending
	bool ___finishStartHostPending_30;
	// Mirror.SceneOperation Mirror.NetworkManager::clientSceneOperation
	uint8_t ___clientSceneOperation_33;

public:
	inline static int32_t get_offset_of_dontDestroyOnLoad_4() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___dontDestroyOnLoad_4)); }
	inline bool get_dontDestroyOnLoad_4() const { return ___dontDestroyOnLoad_4; }
	inline bool* get_address_of_dontDestroyOnLoad_4() { return &___dontDestroyOnLoad_4; }
	inline void set_dontDestroyOnLoad_4(bool value)
	{
		___dontDestroyOnLoad_4 = value;
	}

	inline static int32_t get_offset_of_runInBackground_5() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___runInBackground_5)); }
	inline bool get_runInBackground_5() const { return ___runInBackground_5; }
	inline bool* get_address_of_runInBackground_5() { return &___runInBackground_5; }
	inline void set_runInBackground_5(bool value)
	{
		___runInBackground_5 = value;
	}

	inline static int32_t get_offset_of_autoStartServerBuild_6() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___autoStartServerBuild_6)); }
	inline bool get_autoStartServerBuild_6() const { return ___autoStartServerBuild_6; }
	inline bool* get_address_of_autoStartServerBuild_6() { return &___autoStartServerBuild_6; }
	inline void set_autoStartServerBuild_6(bool value)
	{
		___autoStartServerBuild_6 = value;
	}

	inline static int32_t get_offset_of_showDebugMessages_7() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___showDebugMessages_7)); }
	inline bool get_showDebugMessages_7() const { return ___showDebugMessages_7; }
	inline bool* get_address_of_showDebugMessages_7() { return &___showDebugMessages_7; }
	inline void set_showDebugMessages_7(bool value)
	{
		___showDebugMessages_7 = value;
	}

	inline static int32_t get_offset_of_serverTickRate_8() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___serverTickRate_8)); }
	inline int32_t get_serverTickRate_8() const { return ___serverTickRate_8; }
	inline int32_t* get_address_of_serverTickRate_8() { return &___serverTickRate_8; }
	inline void set_serverTickRate_8(int32_t value)
	{
		___serverTickRate_8 = value;
	}

	inline static int32_t get_offset_of_serverBatching_9() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___serverBatching_9)); }
	inline bool get_serverBatching_9() const { return ___serverBatching_9; }
	inline bool* get_address_of_serverBatching_9() { return &___serverBatching_9; }
	inline void set_serverBatching_9(bool value)
	{
		___serverBatching_9 = value;
	}

	inline static int32_t get_offset_of_serverBatchInterval_10() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___serverBatchInterval_10)); }
	inline float get_serverBatchInterval_10() const { return ___serverBatchInterval_10; }
	inline float* get_address_of_serverBatchInterval_10() { return &___serverBatchInterval_10; }
	inline void set_serverBatchInterval_10(float value)
	{
		___serverBatchInterval_10 = value;
	}

	inline static int32_t get_offset_of_offlineScene_11() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___offlineScene_11)); }
	inline String_t* get_offlineScene_11() const { return ___offlineScene_11; }
	inline String_t** get_address_of_offlineScene_11() { return &___offlineScene_11; }
	inline void set_offlineScene_11(String_t* value)
	{
		___offlineScene_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offlineScene_11), (void*)value);
	}

	inline static int32_t get_offset_of_onlineScene_12() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___onlineScene_12)); }
	inline String_t* get_onlineScene_12() const { return ___onlineScene_12; }
	inline String_t** get_address_of_onlineScene_12() { return &___onlineScene_12; }
	inline void set_onlineScene_12(String_t* value)
	{
		___onlineScene_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onlineScene_12), (void*)value);
	}

	inline static int32_t get_offset_of_transport_13() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___transport_13)); }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * get_transport_13() const { return ___transport_13; }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D ** get_address_of_transport_13() { return &___transport_13; }
	inline void set_transport_13(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * value)
	{
		___transport_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transport_13), (void*)value);
	}

	inline static int32_t get_offset_of_networkAddress_14() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___networkAddress_14)); }
	inline String_t* get_networkAddress_14() const { return ___networkAddress_14; }
	inline String_t** get_address_of_networkAddress_14() { return &___networkAddress_14; }
	inline void set_networkAddress_14(String_t* value)
	{
		___networkAddress_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkAddress_14), (void*)value);
	}

	inline static int32_t get_offset_of_maxConnections_15() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___maxConnections_15)); }
	inline int32_t get_maxConnections_15() const { return ___maxConnections_15; }
	inline int32_t* get_address_of_maxConnections_15() { return &___maxConnections_15; }
	inline void set_maxConnections_15(int32_t value)
	{
		___maxConnections_15 = value;
	}

	inline static int32_t get_offset_of_disconnectInactiveConnections_16() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___disconnectInactiveConnections_16)); }
	inline bool get_disconnectInactiveConnections_16() const { return ___disconnectInactiveConnections_16; }
	inline bool* get_address_of_disconnectInactiveConnections_16() { return &___disconnectInactiveConnections_16; }
	inline void set_disconnectInactiveConnections_16(bool value)
	{
		___disconnectInactiveConnections_16 = value;
	}

	inline static int32_t get_offset_of_disconnectInactiveTimeout_17() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___disconnectInactiveTimeout_17)); }
	inline float get_disconnectInactiveTimeout_17() const { return ___disconnectInactiveTimeout_17; }
	inline float* get_address_of_disconnectInactiveTimeout_17() { return &___disconnectInactiveTimeout_17; }
	inline void set_disconnectInactiveTimeout_17(float value)
	{
		___disconnectInactiveTimeout_17 = value;
	}

	inline static int32_t get_offset_of_authenticator_18() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___authenticator_18)); }
	inline NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * get_authenticator_18() const { return ___authenticator_18; }
	inline NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF ** get_address_of_authenticator_18() { return &___authenticator_18; }
	inline void set_authenticator_18(NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * value)
	{
		___authenticator_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticator_18), (void*)value);
	}

	inline static int32_t get_offset_of_playerPrefab_19() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___playerPrefab_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerPrefab_19() const { return ___playerPrefab_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerPrefab_19() { return &___playerPrefab_19; }
	inline void set_playerPrefab_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerPrefab_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerPrefab_19), (void*)value);
	}

	inline static int32_t get_offset_of_autoCreatePlayer_20() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___autoCreatePlayer_20)); }
	inline bool get_autoCreatePlayer_20() const { return ___autoCreatePlayer_20; }
	inline bool* get_address_of_autoCreatePlayer_20() { return &___autoCreatePlayer_20; }
	inline void set_autoCreatePlayer_20(bool value)
	{
		___autoCreatePlayer_20 = value;
	}

	inline static int32_t get_offset_of_playerSpawnMethod_21() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___playerSpawnMethod_21)); }
	inline int32_t get_playerSpawnMethod_21() const { return ___playerSpawnMethod_21; }
	inline int32_t* get_address_of_playerSpawnMethod_21() { return &___playerSpawnMethod_21; }
	inline void set_playerSpawnMethod_21(int32_t value)
	{
		___playerSpawnMethod_21 = value;
	}

	inline static int32_t get_offset_of_spawnPrefabs_22() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___spawnPrefabs_22)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_spawnPrefabs_22() const { return ___spawnPrefabs_22; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_spawnPrefabs_22() { return &___spawnPrefabs_22; }
	inline void set_spawnPrefabs_22(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___spawnPrefabs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPrefabs_22), (void*)value);
	}

	inline static int32_t get_offset_of_isNetworkActive_26() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___isNetworkActive_26)); }
	inline bool get_isNetworkActive_26() const { return ___isNetworkActive_26; }
	inline bool* get_address_of_isNetworkActive_26() { return &___isNetworkActive_26; }
	inline void set_isNetworkActive_26(bool value)
	{
		___isNetworkActive_26 = value;
	}

	inline static int32_t get_offset_of_clientLoadedScene_28() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___clientLoadedScene_28)); }
	inline bool get_clientLoadedScene_28() const { return ___clientLoadedScene_28; }
	inline bool* get_address_of_clientLoadedScene_28() { return &___clientLoadedScene_28; }
	inline void set_clientLoadedScene_28(bool value)
	{
		___clientLoadedScene_28 = value;
	}

	inline static int32_t get_offset_of_U3CmodeU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___U3CmodeU3Ek__BackingField_29)); }
	inline int32_t get_U3CmodeU3Ek__BackingField_29() const { return ___U3CmodeU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CmodeU3Ek__BackingField_29() { return &___U3CmodeU3Ek__BackingField_29; }
	inline void set_U3CmodeU3Ek__BackingField_29(int32_t value)
	{
		___U3CmodeU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_finishStartHostPending_30() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___finishStartHostPending_30)); }
	inline bool get_finishStartHostPending_30() const { return ___finishStartHostPending_30; }
	inline bool* get_address_of_finishStartHostPending_30() { return &___finishStartHostPending_30; }
	inline void set_finishStartHostPending_30(bool value)
	{
		___finishStartHostPending_30 = value;
	}

	inline static int32_t get_offset_of_clientSceneOperation_33() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___clientSceneOperation_33)); }
	inline uint8_t get_clientSceneOperation_33() const { return ___clientSceneOperation_33; }
	inline uint8_t* get_address_of_clientSceneOperation_33() { return &___clientSceneOperation_33; }
	inline void set_clientSceneOperation_33(uint8_t value)
	{
		___clientSceneOperation_33 = value;
	}
};

struct NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Transform> Mirror.NetworkManager::startPositions
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___startPositions_23;
	// System.Int32 Mirror.NetworkManager::startPositionIndex
	int32_t ___startPositionIndex_24;
	// Mirror.NetworkManager Mirror.NetworkManager::<singleton>k__BackingField
	NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * ___U3CsingletonU3Ek__BackingField_25;
	// Mirror.NetworkConnection Mirror.NetworkManager::clientReadyConnection
	NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___clientReadyConnection_27;
	// System.String Mirror.NetworkManager::<networkSceneName>k__BackingField
	String_t* ___U3CnetworkSceneNameU3Ek__BackingField_31;
	// UnityEngine.AsyncOperation Mirror.NetworkManager::loadingSceneAsync
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___loadingSceneAsync_32;

public:
	inline static int32_t get_offset_of_startPositions_23() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields, ___startPositions_23)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_startPositions_23() const { return ___startPositions_23; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_startPositions_23() { return &___startPositions_23; }
	inline void set_startPositions_23(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___startPositions_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startPositions_23), (void*)value);
	}

	inline static int32_t get_offset_of_startPositionIndex_24() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields, ___startPositionIndex_24)); }
	inline int32_t get_startPositionIndex_24() const { return ___startPositionIndex_24; }
	inline int32_t* get_address_of_startPositionIndex_24() { return &___startPositionIndex_24; }
	inline void set_startPositionIndex_24(int32_t value)
	{
		___startPositionIndex_24 = value;
	}

	inline static int32_t get_offset_of_U3CsingletonU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields, ___U3CsingletonU3Ek__BackingField_25)); }
	inline NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * get_U3CsingletonU3Ek__BackingField_25() const { return ___U3CsingletonU3Ek__BackingField_25; }
	inline NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 ** get_address_of_U3CsingletonU3Ek__BackingField_25() { return &___U3CsingletonU3Ek__BackingField_25; }
	inline void set_U3CsingletonU3Ek__BackingField_25(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * value)
	{
		___U3CsingletonU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsingletonU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_clientReadyConnection_27() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields, ___clientReadyConnection_27)); }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * get_clientReadyConnection_27() const { return ___clientReadyConnection_27; }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 ** get_address_of_clientReadyConnection_27() { return &___clientReadyConnection_27; }
	inline void set_clientReadyConnection_27(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * value)
	{
		___clientReadyConnection_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientReadyConnection_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnetworkSceneNameU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields, ___U3CnetworkSceneNameU3Ek__BackingField_31)); }
	inline String_t* get_U3CnetworkSceneNameU3Ek__BackingField_31() const { return ___U3CnetworkSceneNameU3Ek__BackingField_31; }
	inline String_t** get_address_of_U3CnetworkSceneNameU3Ek__BackingField_31() { return &___U3CnetworkSceneNameU3Ek__BackingField_31; }
	inline void set_U3CnetworkSceneNameU3Ek__BackingField_31(String_t* value)
	{
		___U3CnetworkSceneNameU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnetworkSceneNameU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_loadingSceneAsync_32() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields, ___loadingSceneAsync_32)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_loadingSceneAsync_32() const { return ___loadingSceneAsync_32; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_loadingSceneAsync_32() { return &___loadingSceneAsync_32; }
	inline void set_loadingSceneAsync_32(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___loadingSceneAsync_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingSceneAsync_32), (void*)value);
	}
};


// Mirror.Cloud.Example.QuickListServerDebug
struct  QuickListServerDebug_t6EF403592C5339C3749925A725E78B240DA0F01A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Mirror.Cloud.ApiConnector Mirror.Cloud.Example.QuickListServerDebug::connector
	ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * ___connector_4;
	// System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson> Mirror.Cloud.Example.QuickListServerDebug::collection
	Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB  ___collection_5;

public:
	inline static int32_t get_offset_of_connector_4() { return static_cast<int32_t>(offsetof(QuickListServerDebug_t6EF403592C5339C3749925A725E78B240DA0F01A, ___connector_4)); }
	inline ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * get_connector_4() const { return ___connector_4; }
	inline ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 ** get_address_of_connector_4() { return &___connector_4; }
	inline void set_connector_4(ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * value)
	{
		___connector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connector_4), (void*)value);
	}

	inline static int32_t get_offset_of_collection_5() { return static_cast<int32_t>(offsetof(QuickListServerDebug_t6EF403592C5339C3749925A725E78B240DA0F01A, ___collection_5)); }
	inline Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB  get_collection_5() const { return ___collection_5; }
	inline Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB * get_address_of_collection_5() { return &___collection_5; }
	inline void set_collection_5(Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB  value)
	{
		___collection_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___collection_5))->___value_0))->___servers_0), (void*)NULL);
	}
};


// Mirror.Examples.Pong.QuitButtonHUD
struct  QuitButtonHUD_t9B8F81BA4B5ABB959E800B00A569E2710E6EAA8E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Mirror.Cloud.Example.ServerListManager
struct  ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Mirror.Cloud.Example.ServerListUI Mirror.Cloud.Example.ServerListManager::listUI
	ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA * ___listUI_4;
	// UnityEngine.UI.Button Mirror.Cloud.Example.ServerListManager::refreshButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___refreshButton_5;
	// UnityEngine.UI.Button Mirror.Cloud.Example.ServerListManager::startServerButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___startServerButton_6;
	// System.Boolean Mirror.Cloud.Example.ServerListManager::autoRefreshServerlist
	bool ___autoRefreshServerlist_7;
	// System.Int32 Mirror.Cloud.Example.ServerListManager::refreshinterval
	int32_t ___refreshinterval_8;
	// Mirror.Cloud.ApiConnector Mirror.Cloud.Example.ServerListManager::connector
	ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * ___connector_9;

public:
	inline static int32_t get_offset_of_listUI_4() { return static_cast<int32_t>(offsetof(ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833, ___listUI_4)); }
	inline ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA * get_listUI_4() const { return ___listUI_4; }
	inline ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA ** get_address_of_listUI_4() { return &___listUI_4; }
	inline void set_listUI_4(ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA * value)
	{
		___listUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_refreshButton_5() { return static_cast<int32_t>(offsetof(ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833, ___refreshButton_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_refreshButton_5() const { return ___refreshButton_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_refreshButton_5() { return &___refreshButton_5; }
	inline void set_refreshButton_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___refreshButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refreshButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_startServerButton_6() { return static_cast<int32_t>(offsetof(ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833, ___startServerButton_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_startServerButton_6() const { return ___startServerButton_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_startServerButton_6() { return &___startServerButton_6; }
	inline void set_startServerButton_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___startServerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startServerButton_6), (void*)value);
	}

	inline static int32_t get_offset_of_autoRefreshServerlist_7() { return static_cast<int32_t>(offsetof(ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833, ___autoRefreshServerlist_7)); }
	inline bool get_autoRefreshServerlist_7() const { return ___autoRefreshServerlist_7; }
	inline bool* get_address_of_autoRefreshServerlist_7() { return &___autoRefreshServerlist_7; }
	inline void set_autoRefreshServerlist_7(bool value)
	{
		___autoRefreshServerlist_7 = value;
	}

	inline static int32_t get_offset_of_refreshinterval_8() { return static_cast<int32_t>(offsetof(ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833, ___refreshinterval_8)); }
	inline int32_t get_refreshinterval_8() const { return ___refreshinterval_8; }
	inline int32_t* get_address_of_refreshinterval_8() { return &___refreshinterval_8; }
	inline void set_refreshinterval_8(int32_t value)
	{
		___refreshinterval_8 = value;
	}

	inline static int32_t get_offset_of_connector_9() { return static_cast<int32_t>(offsetof(ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833, ___connector_9)); }
	inline ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * get_connector_9() const { return ___connector_9; }
	inline ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 ** get_address_of_connector_9() { return &___connector_9; }
	inline void set_connector_9(ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * value)
	{
		___connector_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connector_9), (void*)value);
	}
};


// Mirror.Cloud.Example.ServerListUI
struct  ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Mirror.Cloud.Example.ServerListUIItem Mirror.Cloud.Example.ServerListUI::itemPrefab
	ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * ___itemPrefab_4;
	// UnityEngine.Transform Mirror.Cloud.Example.ServerListUI::parent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent_5;
	// System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem> Mirror.Cloud.Example.ServerListUI::items
	List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * ___items_6;

public:
	inline static int32_t get_offset_of_itemPrefab_4() { return static_cast<int32_t>(offsetof(ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA, ___itemPrefab_4)); }
	inline ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * get_itemPrefab_4() const { return ___itemPrefab_4; }
	inline ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 ** get_address_of_itemPrefab_4() { return &___itemPrefab_4; }
	inline void set_itemPrefab_4(ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * value)
	{
		___itemPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA, ___parent_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_parent_5() const { return ___parent_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_items_6() { return static_cast<int32_t>(offsetof(ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA, ___items_6)); }
	inline List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * get_items_6() const { return ___items_6; }
	inline List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC ** get_address_of_items_6() { return &___items_6; }
	inline void set_items_6(List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * value)
	{
		___items_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_6), (void*)value);
	}
};


// Mirror.Cloud.Example.ServerListUIItem
struct  ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Mirror.Cloud.Example.ServerListUIItem::nameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nameText_4;
	// UnityEngine.UI.Text Mirror.Cloud.Example.ServerListUIItem::namePlayers
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___namePlayers_5;
	// System.String Mirror.Cloud.Example.ServerListUIItem::playersFormat
	String_t* ___playersFormat_6;
	// UnityEngine.UI.Text Mirror.Cloud.Example.ServerListUIItem::addressText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___addressText_7;
	// UnityEngine.UI.Button Mirror.Cloud.Example.ServerListUIItem::joinButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___joinButton_8;
	// Mirror.Cloud.ListServerService.ServerJson Mirror.Cloud.Example.ServerListUIItem::server
	ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  ___server_9;

public:
	inline static int32_t get_offset_of_nameText_4() { return static_cast<int32_t>(offsetof(ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09, ___nameText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nameText_4() const { return ___nameText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nameText_4() { return &___nameText_4; }
	inline void set_nameText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nameText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameText_4), (void*)value);
	}

	inline static int32_t get_offset_of_namePlayers_5() { return static_cast<int32_t>(offsetof(ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09, ___namePlayers_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_namePlayers_5() const { return ___namePlayers_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_namePlayers_5() { return &___namePlayers_5; }
	inline void set_namePlayers_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___namePlayers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namePlayers_5), (void*)value);
	}

	inline static int32_t get_offset_of_playersFormat_6() { return static_cast<int32_t>(offsetof(ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09, ___playersFormat_6)); }
	inline String_t* get_playersFormat_6() const { return ___playersFormat_6; }
	inline String_t** get_address_of_playersFormat_6() { return &___playersFormat_6; }
	inline void set_playersFormat_6(String_t* value)
	{
		___playersFormat_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playersFormat_6), (void*)value);
	}

	inline static int32_t get_offset_of_addressText_7() { return static_cast<int32_t>(offsetof(ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09, ___addressText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_addressText_7() const { return ___addressText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_addressText_7() { return &___addressText_7; }
	inline void set_addressText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___addressText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addressText_7), (void*)value);
	}

	inline static int32_t get_offset_of_joinButton_8() { return static_cast<int32_t>(offsetof(ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09, ___joinButton_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_joinButton_8() const { return ___joinButton_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_joinButton_8() { return &___joinButton_8; }
	inline void set_joinButton_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___joinButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joinButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_server_9() { return static_cast<int32_t>(offsetof(ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09, ___server_9)); }
	inline ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  get_server_9() const { return ___server_9; }
	inline ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * get_address_of_server_9() { return &___server_9; }
	inline void set_server_9(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  value)
	{
		___server_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_9))->___protocol_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_9))->___displayName_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_9))->___address_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_9))->___customAddress_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_9))->___customData_7), (void*)NULL);
		#endif
	}
};


// Mirror.Transport
struct  Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action Mirror.Transport::OnClientConnected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnClientConnected_5;
	// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnClientDataReceived
	Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * ___OnClientDataReceived_6;
	// System.Action`1<System.Exception> Mirror.Transport::OnClientError
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___OnClientError_7;
	// System.Action Mirror.Transport::OnClientDisconnected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnClientDisconnected_8;
	// System.Action`1<System.Int32> Mirror.Transport::OnServerConnected
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnServerConnected_9;
	// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnServerDataReceived
	Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * ___OnServerDataReceived_10;
	// System.Action`2<System.Int32,System.Exception> Mirror.Transport::OnServerError
	Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * ___OnServerError_11;
	// System.Action`1<System.Int32> Mirror.Transport::OnServerDisconnected
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnServerDisconnected_12;

public:
	inline static int32_t get_offset_of_OnClientConnected_5() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnClientConnected_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnClientConnected_5() const { return ___OnClientConnected_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnClientConnected_5() { return &___OnClientConnected_5; }
	inline void set_OnClientConnected_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnClientConnected_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientConnected_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDataReceived_6() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnClientDataReceived_6)); }
	inline Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * get_OnClientDataReceived_6() const { return ___OnClientDataReceived_6; }
	inline Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC ** get_address_of_OnClientDataReceived_6() { return &___OnClientDataReceived_6; }
	inline void set_OnClientDataReceived_6(Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * value)
	{
		___OnClientDataReceived_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDataReceived_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientError_7() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnClientError_7)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_OnClientError_7() const { return ___OnClientError_7; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_OnClientError_7() { return &___OnClientError_7; }
	inline void set_OnClientError_7(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___OnClientError_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientError_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDisconnected_8() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnClientDisconnected_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnClientDisconnected_8() const { return ___OnClientDisconnected_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnClientDisconnected_8() { return &___OnClientDisconnected_8; }
	inline void set_OnClientDisconnected_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnClientDisconnected_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDisconnected_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerConnected_9() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnServerConnected_9)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_OnServerConnected_9() const { return ___OnServerConnected_9; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_OnServerConnected_9() { return &___OnServerConnected_9; }
	inline void set_OnServerConnected_9(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___OnServerConnected_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerConnected_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerDataReceived_10() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnServerDataReceived_10)); }
	inline Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * get_OnServerDataReceived_10() const { return ___OnServerDataReceived_10; }
	inline Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 ** get_address_of_OnServerDataReceived_10() { return &___OnServerDataReceived_10; }
	inline void set_OnServerDataReceived_10(Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * value)
	{
		___OnServerDataReceived_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerDataReceived_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerError_11() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnServerError_11)); }
	inline Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * get_OnServerError_11() const { return ___OnServerError_11; }
	inline Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 ** get_address_of_OnServerError_11() { return &___OnServerError_11; }
	inline void set_OnServerError_11(Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * value)
	{
		___OnServerError_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerError_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerDisconnected_12() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnServerDisconnected_12)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_OnServerDisconnected_12() const { return ___OnServerDisconnected_12; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_OnServerDisconnected_12() { return &___OnServerDisconnected_12; }
	inline void set_OnServerDisconnected_12(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___OnServerDisconnected_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerDisconnected_12), (void*)value);
	}
};

struct Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D_StaticFields
{
public:
	// Mirror.Transport Mirror.Transport::activeTransport
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * ___activeTransport_4;

public:
	inline static int32_t get_offset_of_activeTransport_4() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D_StaticFields, ___activeTransport_4)); }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * get_activeTransport_4() const { return ___activeTransport_4; }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D ** get_address_of_activeTransport_4() { return &___activeTransport_4; }
	inline void set_activeTransport_4(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * value)
	{
		___activeTransport_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeTransport_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Mirror.Cloud.Example.NetworkManagerListServer
struct  NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2  : public NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15
{
public:
	// System.Action Mirror.Cloud.Example.NetworkManagerListServer::onServerStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onServerStarted_34;
	// System.Action Mirror.Cloud.Example.NetworkManagerListServer::onServerStopped
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onServerStopped_35;
	// Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged Mirror.Cloud.Example.NetworkManagerListServer::onPlayerListChanged
	OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * ___onPlayerListChanged_36;

public:
	inline static int32_t get_offset_of_onServerStarted_34() { return static_cast<int32_t>(offsetof(NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2, ___onServerStarted_34)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onServerStarted_34() const { return ___onServerStarted_34; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onServerStarted_34() { return &___onServerStarted_34; }
	inline void set_onServerStarted_34(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onServerStarted_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onServerStarted_34), (void*)value);
	}

	inline static int32_t get_offset_of_onServerStopped_35() { return static_cast<int32_t>(offsetof(NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2, ___onServerStopped_35)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onServerStopped_35() const { return ___onServerStopped_35; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onServerStopped_35() { return &___onServerStopped_35; }
	inline void set_onServerStopped_35(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onServerStopped_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onServerStopped_35), (void*)value);
	}

	inline static int32_t get_offset_of_onPlayerListChanged_36() { return static_cast<int32_t>(offsetof(NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2, ___onPlayerListChanged_36)); }
	inline OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * get_onPlayerListChanged_36() const { return ___onPlayerListChanged_36; }
	inline OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF ** get_address_of_onPlayerListChanged_36() { return &___onPlayerListChanged_36; }
	inline void set_onPlayerListChanged_36(OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * value)
	{
		___onPlayerListChanged_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlayerListChanged_36), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * m_Items[1];

public:
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m12374F2F6F3D2DE9CBF98D3BD63CBB0DA19C69C5_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m3B58BDBB7635065F9DF522A6531BFF7365020CF9_gshared (UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m0D970C65CEAAC6EB2242391448125511E47821CA_gshared (Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB * __this, ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  ___value0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6A20348D12CE335AAF6EE20B74E8C96FA33ACFFA_gshared_inline (Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  Nullable_1_get_Value_m9F00A952AC2D4CA80EB4D85D8B64C2F2CB1C2A68_gshared (Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Mirror.Cloud.Example.NetworkManagerListServer>()
inline NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * Object_FindObjectOfType_TisNetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2_m2837FA591B9BE6C944BD1B25B18C428EA7DA1972 (const RuntimeMethod* method)
{
	return ((  NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// !!0 UnityEngine.Component::GetComponent<Mirror.Cloud.ApiConnector>()
inline ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * Component_GetComponent_TisApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80_m679A7D495B763FF9BEBA64C184D60699AF077040 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlayerListChanged__ctor_m16CE8D60D02829DD22FC6E1511F8176EEC629A48 (OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::add_onPlayerListChanged(Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_add_onPlayerListChanged_m429CC27EE628C7E75BA7DDFEDE91532A7F6894DA (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * ___value0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::add_onServerStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_add_onServerStarted_mC2DFF53A8F0B519CF0975726C4E29C172629347E (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::add_onServerStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_add_onServerStopped_m28352F9521F542D54FA4004C448D95C389A5EE62 (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::remove_onPlayerListChanged(Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_remove_onPlayerListChanged_m0C167F29FE221D1634A5206A81F008DD9EA1231D (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * ___value0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::remove_onServerStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_remove_onServerStarted_m30192118F1621758406FE5FFB194E3FC171C00BC (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::remove_onServerStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_remove_onServerStopped_m67C60E75BC86C9224CEE09A6EDEEBA1A8C045232 (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// Mirror.Cloud.ListServerService.ListServer Mirror.Cloud.ApiConnector::get_ListServer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.ApiUpdater::AddServer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_AddServer_m45DF9F41E55188EC1395C6A942FDD1BBD22FA3F5 (ApiUpdater_t5E6F9FEAC6F4FD7B86FF929FE8C4A92F9A6C7534 * __this, int32_t ___playerCount0, const RuntimeMethod* method);
// System.Int32 System.Uri::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// Mirror.NetworkManager Mirror.NetworkManager::get_singleton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * NetworkManager_get_singleton_m3687E70BBF51C41E6F20B606EF0E0E40D13E7641_inline (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient>::get_Count()
inline int32_t Dictionary_2_get_Count_m9E9BE3E296FBC3A1D0FC73328F2FF60FAA3996E1 (Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 *, const RuntimeMethod*))Dictionary_2_get_Count_m12374F2F6F3D2DE9CBF98D3BD63CBB0DA19C69C5_gshared)(__this, method);
}
// System.Int32 Mirror.Cloud.Example.NetworkManagerListServer::get_connectionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkManagerListServer_get_connectionCount_m2681CD30CE87E8863D5ADE9D610D32957E9269C2 (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlayerListChanged_Invoke_m7CABFB885142FC3EBFA727DDF9873B193F763F4D (OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * __this, int32_t ___playerCount0, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::OnServerDisconnect(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_OnServerDisconnect_m2A4B300BE2D36D5FFFA0C7AF59296E527CB10EE2 (NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager__ctor_m831DF4BB5F616C10CC2B272AD9DA2C660B3A1924 (NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3B58BDBB7635065F9DF522A6531BFF7365020CF9 (UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m3B58BDBB7635065F9DF522A6531BFF7365020CF9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::.ctor(!0)
inline void Nullable_1__ctor_m0D970C65CEAAC6EB2242391448125511E47821CA (Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB * __this, ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB *, ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55 , const RuntimeMethod*))Nullable_1__ctor_m0D970C65CEAAC6EB2242391448125511E47821CA_gshared)(__this, ___value0, method);
}
// !!0[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502 (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162 (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Space(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Space_m86E4A2CC27661A11F7D50132217B74E9D76CB9DD (float ___pixels0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6A20348D12CE335AAF6EE20B74E8C96FA33ACFFA_inline (Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB *, const RuntimeMethod*))Nullable_1_get_HasValue_m6A20348D12CE335AAF6EE20B74E8C96FA33ACFFA_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::get_Value()
inline ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  Nullable_1_get_Value_m9F00A952AC2D4CA80EB4D85D8B64C2F2CB1C2A68 (Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB * __this, const RuntimeMethod* method)
{
	return ((  ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  (*) (Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB *, const RuntimeMethod*))Nullable_1_get_Value_m9F00A952AC2D4CA80EB4D85D8B64C2F2CB1C2A68_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// Mirror.NetworkManagerMode Mirror.NetworkManager::get_mode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkManager_get_mode_m7DDDC4AFB7EC130F64E6BA4E916235B46C338337_inline (NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::StopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_StopServer_m796F0F4CA3CA42289EBD5F1F6CA6975C9993D988 (NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::StopHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_StopHost_m9BE1DF0275204D698472DCB8B1DBF62FC83994CF (NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::StopClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_StopClient_m749293B1F5FA88A3CBD079B8A5A45B6400F3FE47 (NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.ServerListManager::AddButtonHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager_AddButtonHandlers_m01179E51343F735CEBC1A5EC1E5D3560C7D55202 (ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_StartServer_m7F3D716905D518790D749225F100D0841051B017 (NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.ServerListUI::DeleteOldItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI_DeleteOldItems_m125A85BED24A11B17A73FCD0F242FEEE385FE600 (ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.ServerListUI::CreateNewItems(Mirror.Cloud.ListServerService.ServerJson[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI_CreateNewItems_mEBB87AAAA5C2C48717B825517F25FEF9F18EA22F (ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA * __this, ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* ___servers0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<Mirror.Cloud.Example.ServerListUIItem>(!!0,UnityEngine.Transform)
inline ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * Object_Instantiate_TisServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09_mFC2576A07602D4710AB3237EDFA36EA754E441DE (ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * (*) (ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void Mirror.Cloud.Example.ServerListUIItem::Setup(Mirror.Cloud.ListServerService.ServerJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUIItem_Setup_mE0484DE633FF1D123EEB5BA2584CF58AF3282093 (ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * __this, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  ___server0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem>::Add(!0)
inline void List_1_Add_mCF4F04EBE60C452A5B83516CB8A7377D67BB0840 (List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * __this, ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC *, ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem>::GetEnumerator()
inline Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB  List_1_GetEnumerator_mB91AADF2389C71F27B189ECAD1AB68A6F9AD79CD (List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB  (*) (List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Mirror.Cloud.Example.ServerListUIItem>::get_Current()
inline ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * Enumerator_get_Current_m6484BFBAFE52968FDFE25DBDA36B48180345A252_inline (Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB * __this, const RuntimeMethod* method)
{
	return ((  ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * (*) (Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mirror.Cloud.Example.ServerListUIItem>::MoveNext()
inline bool Enumerator_MoveNext_mEFC5A5966D14AC4D50790A2AF79F6E42C25D383F (Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Mirror.Cloud.Example.ServerListUIItem>::Dispose()
inline void Enumerator_Dispose_mA609C95443AD26EEDABBE151D0A9A29CA3451431 (Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem>::Clear()
inline void List_1_Clear_m4614D86C0F88435A1C3E0F2895F4930F2ED3DCE8 (List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem>::.ctor()
inline void List_1__ctor_m066539F8B1502941E49BE0E1D4F0A719FEC09600 (List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::StartClient(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_StartClient_mC4B472F3B09F109813AD8B7AC133D0475BBCECAE (NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, const RuntimeMethod* method);
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
// System.Void Mirror.Cloud.Example.ApiUpdater::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_Awake_mAA06A5AA92B3BEAD5B0CB11F839FEB89F2767785 (ApiUpdater_t5E6F9FEAC6F4FD7B86FF929FE8C4A92F9A6C7534 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUpdater_ServerStartedHandler_m7ACCE579E8522DDFC06058D41C88859E91FDB4CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUpdater_ServerStoppedHandler_mEA7AB930F0446BAE9B17C2B2AD9A6D4A57B0AD26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUpdater_onPlayerListChanged_m9B3D07F4E697DA8893447631B4DCFDE13709E467_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80_m679A7D495B763FF9BEBA64C184D60699AF077040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisNetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2_m2837FA591B9BE6C944BD1B25B18C428EA7DA1972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (manager == null)
		NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * L_0 = __this->get_manager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// manager = FindObjectOfType<NetworkManagerListServer>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * L_2;
		L_2 = Object_FindObjectOfType_TisNetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2_m2837FA591B9BE6C944BD1B25B18C428EA7DA1972(/*hidden argument*/Object_FindObjectOfType_TisNetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2_m2837FA591B9BE6C944BD1B25B18C428EA7DA1972_RuntimeMethod_var);
		__this->set_manager_4(L_2);
	}

IL_0019:
	{
		// if (connector == null)
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_3 = __this->get_connector_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// connector = manager.GetComponent<ApiConnector>();
		NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * L_5 = __this->get_manager_4();
		NullCheck(L_5);
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_6;
		L_6 = Component_GetComponent_TisApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80_m679A7D495B763FF9BEBA64C184D60699AF077040(L_5, /*hidden argument*/Component_GetComponent_TisApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80_m679A7D495B763FF9BEBA64C184D60699AF077040_RuntimeMethod_var);
		__this->set_connector_5(L_6);
	}

IL_0038:
	{
		// manager.onPlayerListChanged += onPlayerListChanged;
		NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * L_7 = __this->get_manager_4();
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_8 = (OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF *)il2cpp_codegen_object_new(OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF_il2cpp_TypeInfo_var);
		OnPlayerListChanged__ctor_m16CE8D60D02829DD22FC6E1511F8176EEC629A48(L_8, __this, (intptr_t)((intptr_t)ApiUpdater_onPlayerListChanged_m9B3D07F4E697DA8893447631B4DCFDE13709E467_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		NetworkManagerListServer_add_onPlayerListChanged_m429CC27EE628C7E75BA7DDFEDE91532A7F6894DA(L_7, L_8, /*hidden argument*/NULL);
		// manager.onServerStarted += ServerStartedHandler;
		NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * L_9 = __this->get_manager_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, __this, (intptr_t)((intptr_t)ApiUpdater_ServerStartedHandler_m7ACCE579E8522DDFC06058D41C88859E91FDB4CE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		NetworkManagerListServer_add_onServerStarted_mC2DFF53A8F0B519CF0975726C4E29C172629347E(L_9, L_10, /*hidden argument*/NULL);
		// manager.onServerStopped += ServerStoppedHandler;
		NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * L_11 = __this->get_manager_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_12, __this, (intptr_t)((intptr_t)ApiUpdater_ServerStoppedHandler_mEA7AB930F0446BAE9B17C2B2AD9A6D4A57B0AD26_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		NetworkManagerListServer_add_onServerStopped_m28352F9521F542D54FA4004C448D95C389A5EE62(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ApiUpdater::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_OnDestroy_mB4D43916CF8840F41DB53175C05D2CE324F37C77 (ApiUpdater_t5E6F9FEAC6F4FD7B86FF929FE8C4A92F9A6C7534 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUpdater_ServerStartedHandler_m7ACCE579E8522DDFC06058D41C88859E91FDB4CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUpdater_ServerStoppedHandler_mEA7AB930F0446BAE9B17C2B2AD9A6D4A57B0AD26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUpdater_onPlayerListChanged_m9B3D07F4E697DA8893447631B4DCFDE13709E467_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (manager != null)
		NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * L_0 = __this->get_manager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		// manager.onPlayerListChanged -= onPlayerListChanged;
		NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * L_2 = __this->get_manager_4();
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_3 = (OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF *)il2cpp_codegen_object_new(OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF_il2cpp_TypeInfo_var);
		OnPlayerListChanged__ctor_m16CE8D60D02829DD22FC6E1511F8176EEC629A48(L_3, __this, (intptr_t)((intptr_t)ApiUpdater_onPlayerListChanged_m9B3D07F4E697DA8893447631B4DCFDE13709E467_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		NetworkManagerListServer_remove_onPlayerListChanged_m0C167F29FE221D1634A5206A81F008DD9EA1231D(L_2, L_3, /*hidden argument*/NULL);
		// manager.onServerStarted -= ServerStartedHandler;
		NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * L_4 = __this->get_manager_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, __this, (intptr_t)((intptr_t)ApiUpdater_ServerStartedHandler_m7ACCE579E8522DDFC06058D41C88859E91FDB4CE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		NetworkManagerListServer_remove_onServerStarted_m30192118F1621758406FE5FFB194E3FC171C00BC(L_4, L_5, /*hidden argument*/NULL);
		// manager.onServerStopped -= ServerStoppedHandler;
		NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * L_6 = __this->get_manager_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_7, __this, (intptr_t)((intptr_t)ApiUpdater_ServerStoppedHandler_mEA7AB930F0446BAE9B17C2B2AD9A6D4A57B0AD26_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		NetworkManagerListServer_remove_onServerStopped_m67C60E75BC86C9224CEE09A6EDEEBA1A8C045232(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ApiUpdater::onPlayerListChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_onPlayerListChanged_m9B3D07F4E697DA8893447631B4DCFDE13709E467 (ApiUpdater_t5E6F9FEAC6F4FD7B86FF929FE8C4A92F9A6C7534 * __this, int32_t ___playerCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListServerServerApi_t718DD69845E48139C71477B8E4B38B443C68CEA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A7FED13743F315AF513E98B470682558F1217C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA62F1B246827B8705B87EB7C28443B22C1BE9A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCC246F1E81C4426050B978FEE10D91BFE3B9BDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (connector.ListServer.ServerApi.ServerInList)
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_0 = __this->get_connector_5();
		NullCheck(L_0);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_1;
		L_1 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->get_ServerApi_0();
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Mirror.Cloud.ListServerService.IListServerServerApi::get_ServerInList() */, IListServerServerApi_t718DD69845E48139C71477B8E4B38B443C68CEA7_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (playerCount < manager.maxConnections)
		int32_t L_4 = ___playerCount0;
		NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * L_5 = __this->get_manager_4();
		NullCheck(L_5);
		int32_t L_6 = ((NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 *)L_5)->get_maxConnections_15();
		if ((((int32_t)L_4) >= ((int32_t)L_6)))
		{
			goto IL_0051;
		}
	}
	{
		// Debug.Log($"Updating Server, player count: {playerCount} ");
		int32_t L_7 = ___playerCount0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDA62F1B246827B8705B87EB7C28443B22C1BE9A3, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// connector.ListServer.ServerApi.UpdateServer(playerCount);
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_11 = __this->get_connector_5();
		NullCheck(L_11);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_12;
		L_12 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->get_ServerApi_0();
		int32_t L_14 = ___playerCount0;
		NullCheck(L_13);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Mirror.Cloud.ListServerService.IListServerServerApi::UpdateServer(System.Int32) */, IListServerServerApi_t718DD69845E48139C71477B8E4B38B443C68CEA7_il2cpp_TypeInfo_var, L_13, L_14);
		// }
		return;
	}

IL_0051:
	{
		// Debug.Log($"Removing Server, player count: {playerCount}");
		int32_t L_15 = ___playerCount0;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralFCC246F1E81C4426050B978FEE10D91BFE3B9BDE, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_18, /*hidden argument*/NULL);
		// connector.ListServer.ServerApi.RemoveServer();
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_19 = __this->get_connector_5();
		NullCheck(L_19);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_20;
		L_20 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->get_ServerApi_0();
		NullCheck(L_21);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Mirror.Cloud.ListServerService.IListServerServerApi::RemoveServer() */, IListServerServerApi_t718DD69845E48139C71477B8E4B38B443C68CEA7_il2cpp_TypeInfo_var, L_21);
		// }
		return;
	}

IL_007c:
	{
		// if (playerCount < 2)
		int32_t L_22 = ___playerCount0;
		if ((((int32_t)L_22) >= ((int32_t)2)))
		{
			goto IL_009c;
		}
	}
	{
		// Debug.Log($"Adding Server, player count: {playerCount}");
		int32_t L_23 = ___playerCount0;
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26;
		L_26 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral5A7FED13743F315AF513E98B470682558F1217C8, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_26, /*hidden argument*/NULL);
		// AddServer(playerCount);
		int32_t L_27 = ___playerCount0;
		ApiUpdater_AddServer_m45DF9F41E55188EC1395C6A942FDD1BBD22FA3F5(__this, L_27, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ApiUpdater::ServerStartedHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_ServerStartedHandler_m7ACCE579E8522DDFC06058D41C88859E91FDB4CE (ApiUpdater_t5E6F9FEAC6F4FD7B86FF929FE8C4A92F9A6C7534 * __this, const RuntimeMethod* method)
{
	{
		// AddServer(0);
		ApiUpdater_AddServer_m45DF9F41E55188EC1395C6A942FDD1BBD22FA3F5(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ApiUpdater::AddServer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_AddServer_m45DF9F41E55188EC1395C6A942FDD1BBD22FA3F5 (ApiUpdater_t5E6F9FEAC6F4FD7B86FF929FE8C4A92F9A6C7534 * __this, int32_t ___playerCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListServerServerApi_t718DD69845E48139C71477B8E4B38B443C68CEA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// Transport transport = Transport.activeTransport;
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D_StaticFields*)il2cpp_codegen_static_fields_for(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D_il2cpp_TypeInfo_var))->get_activeTransport_4();
		// Uri uri = transport.ServerUri();
		NullCheck(L_0);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1;
		L_1 = VirtFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(10 /* System.Uri Mirror.Transport::ServerUri() */, L_0);
		// int port = uri.Port;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// string protocol = uri.Scheme;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_2, /*hidden argument*/NULL);
		V_1 = L_4;
		// connector.ListServer.ServerApi.AddServer(new ServerJson
		// {
		//     displayName = $"{gameName} {(UnityEngine.Random.value * 1000).ToString("0")}",
		//     protocol = protocol,
		//     port = port,
		//     maxPlayerCount = NetworkManager.singleton.maxConnections,
		//     playerCount = playerCount
		// });
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_5 = __this->get_connector_5();
		NullCheck(L_5);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_6;
		L_6 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->get_ServerApi_0();
		il2cpp_codegen_initobj((&V_2), sizeof(ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 ));
		String_t* L_8 = __this->get_gameName_6();
		float L_9;
		L_9 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_multiply((float)L_9, (float)(1000.0f)));
		String_t* L_10;
		L_10 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_3), _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_8, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_10, /*hidden argument*/NULL);
		(&V_2)->set_displayName_4(L_11);
		String_t* L_12 = V_1;
		(&V_2)->set_protocol_0(L_12);
		int32_t L_13 = V_0;
		(&V_2)->set_port_1(L_13);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_14;
		L_14 = NetworkManager_get_singleton_m3687E70BBF51C41E6F20B606EF0E0E40D13E7641_inline(/*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = L_14->get_maxConnections_15();
		(&V_2)->set_maxPlayerCount_3(L_15);
		int32_t L_16 = ___playerCount0;
		(&V_2)->set_playerCount_2(L_16);
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_17 = V_2;
		NullCheck(L_7);
		InterfaceActionInvoker1< ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  >::Invoke(1 /* System.Void Mirror.Cloud.ListServerService.IListServerServerApi::AddServer(Mirror.Cloud.ListServerService.ServerJson) */, IListServerServerApi_t718DD69845E48139C71477B8E4B38B443C68CEA7_il2cpp_TypeInfo_var, L_7, L_17);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ApiUpdater::ServerStoppedHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_ServerStoppedHandler_mEA7AB930F0446BAE9B17C2B2AD9A6D4A57B0AD26 (ApiUpdater_t5E6F9FEAC6F4FD7B86FF929FE8C4A92F9A6C7534 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListServerServerApi_t718DD69845E48139C71477B8E4B38B443C68CEA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// connector.ListServer.ServerApi.RemoveServer();
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_0 = __this->get_connector_5();
		NullCheck(L_0);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_1;
		L_1 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->get_ServerApi_0();
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Mirror.Cloud.ListServerService.IListServerServerApi::RemoveServer() */, IListServerServerApi_t718DD69845E48139C71477B8E4B38B443C68CEA7_il2cpp_TypeInfo_var, L_2);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ApiUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater__ctor_mC66225F12682CBF2541B8B5B779C8EF9E19076C3 (ApiUpdater_t5E6F9FEAC6F4FD7B86FF929FE8C4A92F9A6C7534 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string gameName = "Game";
		__this->set_gameName_6(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Cloud.Examples.InstantiateNetworkManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateNetworkManager_Awake_m3E08495D8FBA99A0E20515F384E107D700086DE3 (InstantiateNetworkManager_t7CB6AB614325F982A34161A3DF57E16E761B6FFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NetworkManager.singleton == null)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_0;
		L_0 = NetworkManager_get_singleton_m3687E70BBF51C41E6F20B606EF0E0E40D13E7641_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Instantiate(prefab);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_prefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Examples.InstantiateNetworkManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateNetworkManager__ctor_m66F1DB90DE992CDBCC826C6F2D12C7DCEFE55227 (InstantiateNetworkManager_t7CB6AB614325F982A34161A3DF57E16E761B6FFE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::add_onServerStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_add_onServerStarted_mC2DFF53A8F0B519CF0975726C4E29C172629347E (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_onServerStarted_34();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_onServerStarted_34();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::remove_onServerStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_remove_onServerStarted_m30192118F1621758406FE5FFB194E3FC171C00BC (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_onServerStarted_34();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_onServerStarted_34();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::add_onServerStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_add_onServerStopped_m28352F9521F542D54FA4004C448D95C389A5EE62 (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_onServerStopped_35();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_onServerStopped_35();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::remove_onServerStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_remove_onServerStopped_m67C60E75BC86C9224CEE09A6EDEEBA1A8C045232 (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_onServerStopped_35();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_onServerStopped_35();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::add_onPlayerListChanged(Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_add_onPlayerListChanged_m429CC27EE628C7E75BA7DDFEDE91532A7F6894DA (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * V_0 = NULL;
	OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * V_1 = NULL;
	OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * V_2 = NULL;
	{
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_0 = __this->get_onPlayerListChanged_36();
		V_0 = L_0;
	}

IL_0007:
	{
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_1 = V_0;
		V_1 = L_1;
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_2 = V_1;
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF *)CastclassSealed((RuntimeObject*)L_4, OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF_il2cpp_TypeInfo_var));
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF ** L_5 = __this->get_address_of_onPlayerListChanged_36();
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_6 = V_2;
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_7 = V_1;
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF *>((OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF **)L_5, L_6, L_7);
		V_0 = L_8;
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_9 = V_0;
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF *)L_9) == ((RuntimeObject*)(OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::remove_onPlayerListChanged(Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_remove_onPlayerListChanged_m0C167F29FE221D1634A5206A81F008DD9EA1231D (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * V_0 = NULL;
	OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * V_1 = NULL;
	OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * V_2 = NULL;
	{
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_0 = __this->get_onPlayerListChanged_36();
		V_0 = L_0;
	}

IL_0007:
	{
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_1 = V_0;
		V_1 = L_1;
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_2 = V_1;
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF *)CastclassSealed((RuntimeObject*)L_4, OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF_il2cpp_TypeInfo_var));
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF ** L_5 = __this->get_address_of_onPlayerListChanged_36();
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_6 = V_2;
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_7 = V_1;
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF *>((OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF **)L_5, L_6, L_7);
		V_0 = L_8;
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_9 = V_0;
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF *)L_9) == ((RuntimeObject*)(OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Int32 Mirror.Cloud.Example.NetworkManagerListServer::get_connectionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkManagerListServer_get_connectionCount_m2681CD30CE87E8863D5ADE9D610D32957E9269C2 (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m9E9BE3E296FBC3A1D0FC73328F2FF60FAA3996E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int connectionCount => NetworkServer.connections.Count;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * L_0 = ((NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields*)il2cpp_codegen_static_fields_for(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var))->get_connections_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m9E9BE3E296FBC3A1D0FC73328F2FF60FAA3996E1(L_0, /*hidden argument*/Dictionary_2_get_Count_m9E9BE3E296FBC3A1D0FC73328F2FF60FAA3996E1_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::OnServerConnect(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_OnServerConnect_m938CFE23DE96F1516C34CAC164C917D062310CAF (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * G_B4_0 = NULL;
	OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * G_B3_0 = NULL;
	{
		// int count = connectionCount;
		int32_t L_0;
		L_0 = NetworkManagerListServer_get_connectionCount_m2681CD30CE87E8863D5ADE9D610D32957E9269C2(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (count > maxConnections)
		int32_t L_1 = V_0;
		int32_t L_2 = ((NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 *)__this)->get_maxConnections_15();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		// conn.Disconnect();
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_3 = ___conn0;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(5 /* System.Void Mirror.NetworkConnection::Disconnect() */, L_3);
		// return;
		return;
	}

IL_0017:
	{
		// onPlayerListChanged?.Invoke(count);
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_4 = __this->get_onPlayerListChanged_36();
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		int32_t L_6 = V_0;
		NullCheck(G_B4_0);
		OnPlayerListChanged_Invoke_m7CABFB885142FC3EBFA727DDF9873B193F763F4D(G_B4_0, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::OnServerDisconnect(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_OnServerDisconnect_m9594E0AA6A7CF65E04C17F85E4987E8CA8DC2E12 (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, const RuntimeMethod* method)
{
	OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * G_B2_0 = NULL;
	OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * G_B1_0 = NULL;
	{
		// base.OnServerDisconnect(conn);
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_0 = ___conn0;
		NetworkManager_OnServerDisconnect_m2A4B300BE2D36D5FFFA0C7AF59296E527CB10EE2(__this, L_0, /*hidden argument*/NULL);
		// onPlayerListChanged?.Invoke(connectionCount);
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_1 = __this->get_onPlayerListChanged_36();
		OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		int32_t L_3;
		L_3 = NetworkManagerListServer_get_connectionCount_m2681CD30CE87E8863D5ADE9D610D32957E9269C2(__this, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		OnPlayerListChanged_Invoke_m7CABFB885142FC3EBFA727DDF9873B193F763F4D(G_B2_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::OnStartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_OnStartServer_m9468D920947B737CC5AF6A95B4DCA766FD66BC24 (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// onServerStarted?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_onServerStarted_34();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::OnStopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_OnStopServer_mBA0891300430364E9FF2659A902CFFB765B536F3 (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// onServerStopped?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_onServerStopped_35();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer__ctor_m4957443B4C28C98A23903654E5A8CD0CE2755430 (NetworkManagerListServer_tCB4AE8BA1F1ED79839062EF5B77878E1485A8FF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager__ctor_m831DF4BB5F616C10CC2B272AD9DA2C660B3A1924(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Cloud.Example.QuickListServerDebug::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickListServerDebug_Start_m241B3443BF8FE550BD5A2025D068AA6B2577C291 (QuickListServerDebug_t6EF403592C5339C3749925A725E78B240DA0F01A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80_m679A7D495B763FF9BEBA64C184D60699AF077040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickListServerDebug_ClientApi_onServerListUpdated_m10185378B51782EA9139B325D3D39CE9D7BD80AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m3B58BDBB7635065F9DF522A6531BFF7365020CF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * V_0 = NULL;
	{
		// NetworkManager manager = NetworkManager.singleton;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_0;
		L_0 = NetworkManager_get_singleton_m3687E70BBF51C41E6F20B606EF0E0E40D13E7641_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// connector = manager.GetComponent<ApiConnector>();
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_1 = V_0;
		NullCheck(L_1);
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_2;
		L_2 = Component_GetComponent_TisApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80_m679A7D495B763FF9BEBA64C184D60699AF077040(L_1, /*hidden argument*/Component_GetComponent_TisApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80_m679A7D495B763FF9BEBA64C184D60699AF077040_RuntimeMethod_var);
		__this->set_connector_4(L_2);
		// connector.ListServer.ClientApi.onServerListUpdated += ClientApi_onServerListUpdated;
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_3 = __this->get_connector_4();
		NullCheck(L_3);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_4;
		L_4 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_ClientApi_1();
		UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * L_6 = (UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA *)il2cpp_codegen_object_new(UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m3B58BDBB7635065F9DF522A6531BFF7365020CF9(L_6, __this, (intptr_t)((intptr_t)QuickListServerDebug_ClientApi_onServerListUpdated_m10185378B51782EA9139B325D3D39CE9D7BD80AA_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m3B58BDBB7635065F9DF522A6531BFF7365020CF9_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker1< UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * >::Invoke(0 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::add_onServerListUpdated(UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>) */, IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6_il2cpp_TypeInfo_var, L_5, L_6);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.QuickListServerDebug::ClientApi_onServerListUpdated(Mirror.Cloud.ListServerService.ServerCollectionJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickListServerDebug_ClientApi_onServerListUpdated_m10185378B51782EA9139B325D3D39CE9D7BD80AA (QuickListServerDebug_t6EF403592C5339C3749925A725E78B240DA0F01A * __this, ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m0D970C65CEAAC6EB2242391448125511E47821CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// collection = arg0;
		ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  L_0 = ___arg00;
		Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m0D970C65CEAAC6EB2242391448125511E47821CA((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m0D970C65CEAAC6EB2242391448125511E47821CA_RuntimeMethod_var);
		__this->set_collection_5(L_1);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.QuickListServerDebug::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickListServerDebug_OnGUI_m1215408A33C512C55BE67F97E9F7783A86713285 (QuickListServerDebug_t6EF403592C5339C3749925A725E78B240DA0F01A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6A20348D12CE335AAF6EE20B74E8C96FA33ACFFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m9F00A952AC2D4CA80EB4D85D8B64C2F2CB1C2A68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral458A0A752FF9F0DFB7280B2DE1F4A7CE7D020BAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55C5B9ED1AB5218DCF8E4FCB8994B44067FB4EFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C0D1BF72BE78A6F462ED9ACB0137E09DD4E676);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8256C9B9F9DC5B71237BF75D2E2939A8AB1042F);
		s_Il2CppMethodInitialized = true;
	}
	ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* V_0 = NULL;
	int32_t V_1 = 0;
	ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GUILayout.Label("List Server");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_0;
		L_0 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral55C5B9ED1AB5218DCF8E4FCB8994B44067FB4EFF, L_0, /*hidden argument*/NULL);
		// if (GUILayout.Button("Refresh"))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_1;
		L_1 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_2;
		L_2 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteralF4C0D1BF72BE78A6F462ED9ACB0137E09DD4E676, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// connector.ListServer.ClientApi.GetServerList();
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_3 = __this->get_connector_4();
		NullCheck(L_3);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_4;
		L_4 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_ClientApi_1();
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::GetServerList() */, IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6_il2cpp_TypeInfo_var, L_5);
	}

IL_0035:
	{
		// GUILayout.Space(40);
		GUILayout_Space_m86E4A2CC27661A11F7D50132217B74E9D76CB9DD((40.0f), /*hidden argument*/NULL);
		// if (collection != null)
		Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB * L_6 = __this->get_address_of_collection_5();
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m6A20348D12CE335AAF6EE20B74E8C96FA33ACFFA_inline((Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB *)L_6, /*hidden argument*/Nullable_1_get_HasValue_m6A20348D12CE335AAF6EE20B74E8C96FA33ACFFA_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_00ca;
		}
	}
	{
		// GUILayout.Label("Servers:");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_8;
		L_8 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral458A0A752FF9F0DFB7280B2DE1F4A7CE7D020BAF, L_8, /*hidden argument*/NULL);
		// foreach (ServerJson item in collection.Value.servers)
		Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB * L_9 = __this->get_address_of_collection_5();
		ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  L_10;
		L_10 = Nullable_1_get_Value_m9F00A952AC2D4CA80EB4D85D8B64C2F2CB1C2A68((Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB *)L_9, /*hidden argument*/Nullable_1_get_Value_m9F00A952AC2D4CA80EB4D85D8B64C2F2CB1C2A68_RuntimeMethod_var);
		ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* L_11 = L_10.get_servers_0();
		V_0 = L_11;
		V_1 = 0;
		goto IL_00c4;
	}

IL_0070:
	{
		// foreach (ServerJson item in collection.Value.servers)
		ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		// GUILayout.Label($"{item.displayName}, {item.address}, {item.playerCount}/{item.maxPlayerCount}");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_16;
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_18 = V_2;
		String_t* L_19 = L_18.get_displayName_4();
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_17;
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_21 = V_2;
		String_t* L_22 = L_21.get_address_5();
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_22);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_20;
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_24 = V_2;
		int32_t L_25 = L_24.get_playerCount_2();
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_23;
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_29 = V_2;
		int32_t L_30 = L_29.get_maxPlayerCount_3();
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_32);
		String_t* L_33;
		L_33 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralF8256C9B9F9DC5B71237BF75D2E2939A8AB1042F, L_28, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_34;
		L_34 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_33, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00c4:
	{
		// foreach (ServerJson item in collection.Value.servers)
		int32_t L_36 = V_1;
		ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* L_37 = V_0;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
		{
			goto IL_0070;
		}
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.QuickListServerDebug::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickListServerDebug__ctor_mDC36CA73B1CCA7BAA40E94C3DCB7DBB44A5B9A97 (QuickListServerDebug_t6EF403592C5339C3749925A725E78B240DA0F01A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Examples.Pong.QuitButtonHUD::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitButtonHUD_OnGUI_m13650752A968A123DD1ADFCCCA2C243AD7DA470D (QuitButtonHUD_t9B8F81BA4B5ABB959E800B00A569E2710E6EAA8E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6420A5686977BF95B15B93846D0D50D48EA1D86A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7050AE34EC70FCA836F73D1846FE88E6716A12BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAD94E48A4C36EAD4BD03791F306A25BBFD0681A);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * V_0 = NULL;
	{
		// NetworkManager manager = NetworkManager.singleton;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_0;
		L_0 = NetworkManager_get_singleton_m3687E70BBF51C41E6F20B606EF0E0E40D13E7641_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (manager == null)
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// if (manager.mode == NetworkManagerMode.ServerOnly)
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = NetworkManager_get_mode_m7DDDC4AFB7EC130F64E6BA4E916235B46C338337_inline(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// if (GUILayout.Button("Stop Server"))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_5;
		L_5 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_6;
		L_6 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteralAAD94E48A4C36EAD4BD03791F306A25BBFD0681A, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		// manager.StopServer();
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_7 = V_0;
		NullCheck(L_7);
		NetworkManager_StopServer_m796F0F4CA3CA42289EBD5F1F6CA6975C9993D988(L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0031:
	{
		// else if (manager.mode == NetworkManagerMode.Host)
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = NetworkManager_get_mode_m7DDDC4AFB7EC130F64E6BA4E916235B46C338337_inline(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_0052;
		}
	}
	{
		// if (GUILayout.Button("Stop Host"))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_10;
		L_10 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_11;
		L_11 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteral7050AE34EC70FCA836F73D1846FE88E6716A12BA, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		// manager.StopHost();
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_12 = V_0;
		NullCheck(L_12);
		NetworkManager_StopHost_m9BE1DF0275204D698472DCB8B1DBF62FC83994CF(L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0052:
	{
		// else if (manager.mode == NetworkManagerMode.ClientOnly)
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = NetworkManager_get_mode_m7DDDC4AFB7EC130F64E6BA4E916235B46C338337_inline(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0072;
		}
	}
	{
		// if (GUILayout.Button("Stop Client"))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_15;
		L_15 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_16;
		L_16 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteral6420A5686977BF95B15B93846D0D50D48EA1D86A, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0072;
		}
	}
	{
		// manager.StopClient();
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_17 = V_0;
		NullCheck(L_17);
		NetworkManager_StopClient_m749293B1F5FA88A3CBD079B8A5A45B6400F3FE47(L_17, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Mirror.Examples.Pong.QuitButtonHUD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitButtonHUD__ctor_m04EE6CCC99FB63968D6D9BFA8381466B02973225 (QuitButtonHUD_t9B8F81BA4B5ABB959E800B00A569E2710E6EAA8E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Cloud.Example.ServerListManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager_Start_m346D9016AA12F677DCA6FE2C05D4D659DBF282AC (ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80_m679A7D495B763FF9BEBA64C184D60699AF077040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerListUI_UpdateList_m04C16D1CF015EE990BCECB2135E1F618B91C861E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m3B58BDBB7635065F9DF522A6531BFF7365020CF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * V_0 = NULL;
	{
		// NetworkManager manager = NetworkManager.singleton;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_0;
		L_0 = NetworkManager_get_singleton_m3687E70BBF51C41E6F20B606EF0E0E40D13E7641_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// connector = manager.GetComponent<ApiConnector>();
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_1 = V_0;
		NullCheck(L_1);
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_2;
		L_2 = Component_GetComponent_TisApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80_m679A7D495B763FF9BEBA64C184D60699AF077040(L_1, /*hidden argument*/Component_GetComponent_TisApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80_m679A7D495B763FF9BEBA64C184D60699AF077040_RuntimeMethod_var);
		__this->set_connector_9(L_2);
		// connector.ListServer.ClientApi.onServerListUpdated += listUI.UpdateList;
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_3 = __this->get_connector_9();
		NullCheck(L_3);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_4;
		L_4 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_ClientApi_1();
		ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA * L_6 = __this->get_listUI_4();
		UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * L_7 = (UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA *)il2cpp_codegen_object_new(UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m3B58BDBB7635065F9DF522A6531BFF7365020CF9(L_7, L_6, (intptr_t)((intptr_t)ServerListUI_UpdateList_m04C16D1CF015EE990BCECB2135E1F618B91C861E_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m3B58BDBB7635065F9DF522A6531BFF7365020CF9_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker1< UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * >::Invoke(0 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::add_onServerListUpdated(UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>) */, IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6_il2cpp_TypeInfo_var, L_5, L_7);
		// if (autoRefreshServerlist)
		bool L_8 = __this->get_autoRefreshServerlist_7();
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		// connector.ListServer.ClientApi.StartGetServerListRepeat(refreshinterval);
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_9 = __this->get_connector_9();
		NullCheck(L_9);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_10;
		L_10 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->get_ClientApi_1();
		int32_t L_12 = __this->get_refreshinterval_8();
		NullCheck(L_11);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::StartGetServerListRepeat(System.Int32) */, IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_005b:
	{
		// AddButtonHandlers();
		ServerListManager_AddButtonHandlers_m01179E51343F735CEBC1A5EC1E5D3560C7D55202(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListManager::AddButtonHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager_AddButtonHandlers_m01179E51343F735CEBC1A5EC1E5D3560C7D55202 (ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerListManager_RefreshButtonHandler_m92AB151A0D65B555ECF8427DBA3AD17BDA523A06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerListManager_StartServerButtonHandler_m90A099E63A7147FCFB139162CF4960A79393A564_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// refreshButton.onClick.AddListener(RefreshButtonHandler);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_refreshButton_5();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)ServerListManager_RefreshButtonHandler_m92AB151A0D65B555ECF8427DBA3AD17BDA523A06_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_1, L_2, /*hidden argument*/NULL);
		// startServerButton.onClick.AddListener(StartServerButtonHandler);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_startServerButton_6();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)ServerListManager_StartServerButtonHandler_m90A099E63A7147FCFB139162CF4960A79393A564_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager_OnDestroy_m401E5113A97847DAEA9ECF622B1461881B6DA83E (ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerListUI_UpdateList_m04C16D1CF015EE990BCECB2135E1F618B91C861E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m3B58BDBB7635065F9DF522A6531BFF7365020CF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (connector == null)
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_0 = __this->get_connector_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (autoRefreshServerlist)
		bool L_2 = __this->get_autoRefreshServerlist_7();
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// connector.ListServer.ClientApi.StopGetServerListRepeat();
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_3 = __this->get_connector_9();
		NullCheck(L_3);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_4;
		L_4 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_ClientApi_1();
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::StopGetServerListRepeat() */, IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6_il2cpp_TypeInfo_var, L_5);
	}

IL_002c:
	{
		// connector.ListServer.ClientApi.onServerListUpdated -= listUI.UpdateList;
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_6 = __this->get_connector_9();
		NullCheck(L_6);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_7;
		L_7 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->get_ClientApi_1();
		ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA * L_9 = __this->get_listUI_4();
		UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * L_10 = (UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA *)il2cpp_codegen_object_new(UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m3B58BDBB7635065F9DF522A6531BFF7365020CF9(L_10, L_9, (intptr_t)((intptr_t)ServerListUI_UpdateList_m04C16D1CF015EE990BCECB2135E1F618B91C861E_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m3B58BDBB7635065F9DF522A6531BFF7365020CF9_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< UnityAction_1_t1E75068162BCBBB458CDEC6BB7745DAB4B0D6EDA * >::Invoke(1 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::remove_onServerListUpdated(UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>) */, IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6_il2cpp_TypeInfo_var, L_8, L_10);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListManager::RefreshButtonHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager_RefreshButtonHandler_m92AB151A0D65B555ECF8427DBA3AD17BDA523A06 (ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// connector.ListServer.ClientApi.GetServerList();
		ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * L_0 = __this->get_connector_9();
		NullCheck(L_0);
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_1;
		L_1 = ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->get_ClientApi_1();
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::GetServerList() */, IListServerClientApi_t54C67E6E6589A939FD4DA16275AED837F5ED30E6_il2cpp_TypeInfo_var, L_2);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListManager::StartServerButtonHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager_StartServerButtonHandler_m90A099E63A7147FCFB139162CF4960A79393A564 (ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkManager.singleton.StartServer();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_0;
		L_0 = NetworkManager_get_singleton_m3687E70BBF51C41E6F20B606EF0E0E40D13E7641_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		NetworkManager_StartServer_m7F3D716905D518790D749225F100D0841051B017(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager__ctor_mAB8374F7EC9183E7A1096AC038417B22D4209FD2 (ServerListManager_tBEB1E74EC8601721DE594B6E1419595049973833 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] int refreshinterval = 20;
		__this->set_refreshinterval_8(((int32_t)20));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Cloud.Example.ServerListUI::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI_OnValidate_mBD0AFACDDF518BD9EA6ABCDAF7837C6335EF1927 (ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (parent == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_parent_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// parent = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		__this->set_parent_5(L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListUI::UpdateList(Mirror.Cloud.ListServerService.ServerCollectionJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI_UpdateList_m04C16D1CF015EE990BCECB2135E1F618B91C861E (ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA * __this, ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  ___serverCollection0, const RuntimeMethod* method)
{
	{
		// DeleteOldItems();
		ServerListUI_DeleteOldItems_m125A85BED24A11B17A73FCD0F242FEEE385FE600(__this, /*hidden argument*/NULL);
		// CreateNewItems(serverCollection.servers);
		ServerCollectionJson_tBFC797E551DB0A17F1BA477B64D3D928A5C18B55  L_0 = ___serverCollection0;
		ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* L_1 = L_0.get_servers_0();
		ServerListUI_CreateNewItems_mEBB87AAAA5C2C48717B825517F25FEF9F18EA22F(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListUI::CreateNewItems(Mirror.Cloud.ListServerService.ServerJson[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI_CreateNewItems_mEBB87AAAA5C2C48717B825517F25FEF9F18EA22F (ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA * __this, ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* ___servers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF4F04EBE60C452A5B83516CB8A7377D67BB0840_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09_mFC2576A07602D4710AB3237EDFA36EA754E441DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* V_0 = NULL;
	int32_t V_1 = 0;
	ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * V_3 = NULL;
	{
		// foreach (ServerJson server in servers)
		ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* L_0 = ___servers0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0037;
	}

IL_0006:
	{
		// foreach (ServerJson server in servers)
		ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// ServerListUIItem clone = Instantiate(itemPrefab, parent);
		ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * L_5 = __this->get_itemPrefab_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_parent_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * L_7;
		L_7 = Object_Instantiate_TisServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09_mFC2576A07602D4710AB3237EDFA36EA754E441DE(L_5, L_6, /*hidden argument*/Object_Instantiate_TisServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09_mFC2576A07602D4710AB3237EDFA36EA754E441DE_RuntimeMethod_var);
		V_3 = L_7;
		// clone.Setup(server);
		ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * L_8 = V_3;
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_9 = V_2;
		NullCheck(L_8);
		ServerListUIItem_Setup_mE0484DE633FF1D123EEB5BA2584CF58AF3282093(L_8, L_9, /*hidden argument*/NULL);
		// items.Add(clone);
		List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * L_10 = __this->get_items_6();
		ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * L_11 = V_3;
		NullCheck(L_10);
		List_1_Add_mCF4F04EBE60C452A5B83516CB8A7377D67BB0840(L_10, L_11, /*hidden argument*/List_1_Add_mCF4F04EBE60C452A5B83516CB8A7377D67BB0840_RuntimeMethod_var);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0037:
	{
		// foreach (ServerJson server in servers)
		int32_t L_13 = V_1;
		ServerJsonU5BU5D_t5869F80E502452D21643CC0B75C3E7B019911641* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListUI::DeleteOldItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI_DeleteOldItems_m125A85BED24A11B17A73FCD0F242FEEE385FE600 (ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA609C95443AD26EEDABBE151D0A9A29CA3451431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEFC5A5966D14AC4D50790A2AF79F6E42C25D383F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6484BFBAFE52968FDFE25DBDA36B48180345A252_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4614D86C0F88435A1C3E0F2895F4930F2ED3DCE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB91AADF2389C71F27B189ECAD1AB68A6F9AD79CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (ServerListUIItem item in items)
		List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * L_0 = __this->get_items_6();
		NullCheck(L_0);
		Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB  L_1;
		L_1 = List_1_GetEnumerator_mB91AADF2389C71F27B189ECAD1AB68A6F9AD79CD(L_0, /*hidden argument*/List_1_GetEnumerator_mB91AADF2389C71F27B189ECAD1AB68A6F9AD79CD_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_000e:
		{
			// foreach (ServerListUIItem item in items)
			ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * L_2;
			L_2 = Enumerator_get_Current_m6484BFBAFE52968FDFE25DBDA36B48180345A252_inline((Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m6484BFBAFE52968FDFE25DBDA36B48180345A252_RuntimeMethod_var);
			// Destroy(item.gameObject);
			NullCheck(L_2);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
			L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// foreach (ServerListUIItem item in items)
			bool L_4;
			L_4 = Enumerator_MoveNext_mEFC5A5966D14AC4D50790A2AF79F6E42C25D383F((Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mEFC5A5966D14AC4D50790A2AF79F6E42C25D383F_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000e;
			}
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x38, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mA609C95443AD26EEDABBE151D0A9A29CA3451431((Enumerator_t1F6397F9B2884C520525BF2B1303CFB15040D0CB *)(&V_0), /*hidden argument*/Enumerator_Dispose_mA609C95443AD26EEDABBE151D0A9A29CA3451431_RuntimeMethod_var);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		// items.Clear();
		List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * L_5 = __this->get_items_6();
		NullCheck(L_5);
		List_1_Clear_m4614D86C0F88435A1C3E0F2895F4930F2ED3DCE8(L_5, /*hidden argument*/List_1_Clear_m4614D86C0F88435A1C3E0F2895F4930F2ED3DCE8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI__ctor_m3A20FE3477538481AD808D738E73F24D1E21FF0C (ServerListUI_t2460CFF772E80D97662575812A3D3E5B16C5E5AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m066539F8B1502941E49BE0E1D4F0A719FEC09600_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly List<ServerListUIItem> items = new List<ServerListUIItem>();
		List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC * L_0 = (List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC *)il2cpp_codegen_object_new(List_1_t36A6E36EADBFDAA5E030637E01D34A68D99629AC_il2cpp_TypeInfo_var);
		List_1__ctor_m066539F8B1502941E49BE0E1D4F0A719FEC09600(L_0, /*hidden argument*/List_1__ctor_m066539F8B1502941E49BE0E1D4F0A719FEC09600_RuntimeMethod_var);
		__this->set_items_6(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Cloud.Example.ServerListUIItem::Setup(Mirror.Cloud.ListServerService.ServerJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUIItem_Setup_mE0484DE633FF1D123EEB5BA2584CF58AF3282093 (ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * __this, ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  ___server0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerListUIItem_OnJoinClicked_mCA89BF6DBA3671C49D9D437A0639305352FB88E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.server = server;
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_0 = ___server0;
		__this->set_server_9(L_0);
		// nameText.text = server.displayName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_nameText_4();
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_2 = ___server0;
		String_t* L_3 = L_2.get_displayName_4();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// namePlayers.text = string.Format(playersFormat, server.playerCount, server.maxPlayerCount);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_namePlayers_5();
		String_t* L_5 = __this->get_playersFormat_6();
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_6 = ___server0;
		int32_t L_7 = L_6.get_playerCount_2();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_10 = ___server0;
		int32_t L_11 = L_10.get_maxPlayerCount_3();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(L_5, L_9, L_13, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_14);
		// addressText.text = server.address;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_addressText_7();
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22  L_16 = ___server0;
		String_t* L_17 = L_16.get_address_5();
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_17);
		// joinButton.onClick.AddListener(OnJoinClicked);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_18 = __this->get_joinButton_8();
		NullCheck(L_18);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_19;
		L_19 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_18, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_20 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_20, __this, (intptr_t)((intptr_t)ServerListUIItem_OnJoinClicked_mCA89BF6DBA3671C49D9D437A0639305352FB88E0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListUIItem::OnJoinClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUIItem_OnJoinClicked_mCA89BF6DBA3671C49D9D437A0639305352FB88E0 (ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkManager.singleton.StartClient(new Uri(server.address));
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_0;
		L_0 = NetworkManager_get_singleton_m3687E70BBF51C41E6F20B606EF0E0E40D13E7641_inline(/*hidden argument*/NULL);
		ServerJson_t6AB4316C193ADDFADCC028AEB87424296048AC22 * L_1 = __this->get_address_of_server_9();
		String_t* L_2 = L_1->get_address_5();
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		NetworkManager_StartClient_mC4B472F3B09F109813AD8B7AC133D0475BBCECAE(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListUIItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUIItem__ctor_m215FB33736F21D07442CB82BAC5AD16D1BC7B47B (ServerListUIItem_t0CBAF6E22358328E34652BDC9D9740A380DB5D09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3931E6D8611AD78B9EAE8623A5552724272A477B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] string playersFormat = "{0} / {1}";
		__this->set_playersFormat_6(_stringLiteral3931E6D8611AD78B9EAE8623A5552724272A477B);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF (OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * __this, int32_t ___playerCount0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___playerCount0);

}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlayerListChanged__ctor_m16CE8D60D02829DD22FC6E1511F8176EEC629A48 (OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlayerListChanged_Invoke_m7CABFB885142FC3EBFA727DDF9873B193F763F4D (OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * __this, int32_t ___playerCount0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___playerCount0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___playerCount0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___playerCount0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___playerCount0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___playerCount0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___playerCount0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___playerCount0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPlayerListChanged_BeginInvoke_mC65D16E8D038D7B9D9095A280A066152553917D5 (OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * __this, int32_t ___playerCount0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___playerCount0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlayerListChanged_EndInvoke_mACF6F2C02AC4CA26B1B4D95770A51F6AED8F6439 (OnPlayerListChanged_tAE9C3FA9011C49CF6D1CDE78E4B040C0DFEE50CF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * ApiConnector_get_ListServer_mEB49FA44AB6D86E925C24210E0BA66CB4300BDBD_inline (ApiConnector_t158C081B26F45D32EEB37293EDF22483E8B2CC80 * __this, const RuntimeMethod* method)
{
	{
		// public ListServer ListServer { get; private set; }
		ListServer_tA8EB1E93C2A4E419EC954B4B4A1513E4DFBCC135 * L_0 = __this->get_U3CListServerU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * NetworkManager_get_singleton_m3687E70BBF51C41E6F20B606EF0E0E40D13E7641_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NetworkManager singleton { get; private set; }
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_0 = ((NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var))->get_U3CsingletonU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkManager_get_mode_m7DDDC4AFB7EC130F64E6BA4E916235B46C338337_inline (NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * __this, const RuntimeMethod* method)
{
	{
		// public NetworkManagerMode mode { get; private set; }
		int32_t L_0 = __this->get_U3CmodeU3Ek__BackingField_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6A20348D12CE335AAF6EE20B74E8C96FA33ACFFA_gshared_inline (Nullable_1_t042A055CF6AC1232D1CEC87B86A0E2DC78444DDB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
