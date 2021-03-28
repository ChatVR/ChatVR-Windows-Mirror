#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.ArraySegment`1<System.Byte>>
struct Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC;
// System.Action`1<System.Exception>
struct Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC;
// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>
struct Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9;
// System.Action`2<System.Int32,System.Exception>
struct Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67;
// System.Action`2<System.Int32,System.Object>
struct Action_2_tDD9145FF6BEFC0F795374D3C54FE5138E8FDDC96;
// System.Action`2<Mirror.NetworkConnection,Mirror.NetworkPongMessage>
struct Action_2_t4999E6FE7BE06179C5E05415B90EF68FB9671928;
// System.Action`2<Mirror.NetworkConnection,Mirror.ObjectSpawnFinishedMessage>
struct Action_2_t14AA2E49E3D8044FB0556732FDE97BE47496CCBE;
// System.Action`2<Mirror.NetworkConnection,Mirror.ObjectSpawnStartedMessage>
struct Action_2_t97EA4B5CBDFB71A8BDE27D6149F112D583B72BBD;
// System.Action`2<Mirror.NetworkConnection,Mirror.UpdateVarsMessage>
struct Action_2_tAD0A88C2E9FA37737EF19897904209C4D36F122F;
// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState>
struct ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.RemoteCalls.Invoker>
struct Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnection>
struct Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate>
struct Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient/Batch>
struct Dictionary_2_t7F1003EE51EDA9A0C79B16D9C1AC50904C000C80;
// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity>
struct Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817;
// System.Collections.Generic.Dictionary`2<System.UInt64,Mirror.NetworkIdentity>
struct Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<Mirror.PooledNetworkWriter>
struct Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Mirror.NetworkConnectionToClient>,System.Boolean>
struct Func_2_t1186B7233CEE692AB7374C6620B782BD969E354C;
// System.Func`2<UnityEngine.GameObject,System.Boolean>
struct Func_2_t74D96FD01772F3E8773895FC5FAA971DFBA81118;
// System.Func`2<kcp2k.KcpServerConnection,System.Int32>
struct Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644;
// System.Func`2<Mirror.NetworkIdentity,System.UInt32>
struct Func_2_t4B63FD36ACD4A5DEE4166D4225917A89E13C7869;
// System.Func`2<UnityEngine.Transform,System.Int32>
struct Func_2_t09484A5DEC32B5A4F81DC50730DBBCD647D23F99;
// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>
struct HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB;
// System.Collections.Generic.IEqualityComparer`1<System.Boolean>
struct IEqualityComparer_1_t292562B02A54EFB63E2675F1C580255FAD1CA158;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.Single>
struct IEqualityComparer_1_t6150250D280935445F98D4207E3F728AB0589158;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.UInt32>
struct IEqualityComparer_1_t75C3361D3BE51E9742B0BBFA0F3998120E7CB6CE;
// System.Collections.Generic.IList`1<System.Boolean>
struct IList_1_t571733ECC6C65545FA681610BCE26E4B80D64C1C;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t1C0FF9038440D4E3F8C4A2D43AF1062780CF179D;
// System.Collections.Generic.IList`1<System.Single>
struct IList_1_tE2CB81875EDCE22646E13306A3501DF8022F4959;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847;
// System.Collections.Generic.IList`1<System.UInt32>
struct IList_1_tBB8EB2B35159B538FD7A61189589EFD79EE0FE34;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Mirror.RemoteCalls.Invoker>
struct KeyCollection_t09AE1DDE77A3C15466D8734739DFA4B16AF7718C;
// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<System.Boolean>>
struct List_1_tF05E898B9EC731D7A64E61FFEDB44292AB95CC97;
// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<System.Int32>>
struct List_1_t13B8E8A30FCB0EFC6499E53522BF606AB1A1DB4A;
// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<System.Single>>
struct List_1_t368BEE6FB268265EBD7E314E5B7E067C7A1406B5;
// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<System.String>>
struct List_1_tCBAA5355C79F9243413E3132D0DD6E2FF0AEBCA2;
// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<System.UInt32>>
struct List_1_t3C2815D8E1F4088F35457FA5C2A75AD1B0554BE6;
// System.Collections.Generic.List`1<Mirror.SyncObject>
struct List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156;
// Mirror.Pool`1<System.Object>
struct Pool_1_t0032EAB8380650F504B15E7B3C3D2A58E2792D00;
// Mirror.Pool`1<Mirror.PooledNetworkWriter>
struct Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06;
// System.Predicate`1<UnityEngine.Transform>
struct Predicate_1_t6BCB6E6F91A3B0DDB311CB3C36CCB85A0A432136;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<Mirror.PooledNetworkWriter>
struct Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001;
// System.Collections.Generic.Stack`1<Mirror.PooledNetworkWriter>
struct Stack_1_t5A603E9CD211417198FC70169698D5632EF8D960;
// Mirror.SyncList`1/SyncListChanged<System.Boolean>
struct SyncListChanged_t1EDB572F5CA6CBA9B0D39A630D6BFF09523599C8;
// Mirror.SyncList`1/SyncListChanged<System.Int32>
struct SyncListChanged_t40D1C4572130A49D05D26AC603429F5D78646D95;
// Mirror.SyncList`1/SyncListChanged<System.Single>
struct SyncListChanged_t501498047D3FEA5C18A867F8EFCDA896A47317D2;
// Mirror.SyncList`1/SyncListChanged<System.String>
struct SyncListChanged_t9EE81A0DE0B8AF95C73678FB6BA832416858237A;
// Mirror.SyncList`1/SyncListChanged<System.UInt32>
struct SyncListChanged_t40B9D5D446FA878615EE6632914D01AF6D7D02A0;
// Mirror.SyncList`1<System.Boolean>
struct SyncList_1_t2F8F7EA24D2E33454F00D5E6F16884F5AD9C45FB;
// Mirror.SyncList`1<System.Int32>
struct SyncList_1_tAF42BC3F1F91CD5648A2E51A886DDE9D862AC50E;
// Mirror.SyncList`1<System.Object>
struct SyncList_1_t2B3C51A06058137C294B51E4E0CA96072292007B;
// Mirror.SyncList`1<System.Single>
struct SyncList_1_tECB44CC600EBA63341578F8C15F17ED5F4FEB15A;
// Mirror.SyncList`1<System.String>
struct SyncList_1_t83D785F69E2D0AAC15D1603D38FB2A0425CF61CB;
// Mirror.SyncList`1<System.UInt32>
struct SyncList_1_t8D7B521C26EA72344C90ED7A42E0487DBBAE5C36;
// UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>
struct UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Mirror.RemoteCalls.Invoker>
struct ValueCollection_t913628ACDB58CD5B5ADAC6ED54399C86854ED6B6;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Mirror.RemoteCalls.Invoker>[]
struct EntryU5BU5D_tF830743B3FA35877F6AB28DF22379A35EC4A33DD;
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
// Mirror.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17;
// Mirror.PooledNetworkWriter[]
struct PooledNetworkWriterU5BU5D_t98F759966A023522F02742C6C17D2BFC4DE9571D;
// UnityEngine.Renderer[]
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Mirror.Transport[]
struct TransportU5BU5D_t31BE7938608B9FEC8D06AC70431F129A2902D772;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Telepathy.Client
struct Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929;
// Telepathy.ClientConnectionState
struct ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A;
// Mirror.RemoteCalls.CmdDelegate
struct CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// System.Exception
struct Exception_t;
// Mirror.ExponentialMovingAverage
struct ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.ILogger
struct ILogger_t25627AC5B51863702868D31972297B7D633B4583;
// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Mirror.RemoteCalls.Invoker
struct Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806;
// kcp2k.Kcp
struct Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F;
// kcp2k.KcpConnection
struct KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE;
// kcp2k.KcpServerConnection
struct KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5;
// Telepathy.MagnificentReceivePipe
struct MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Mirror.MultiplexTransport
struct MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12;
// Mirror.NetworkBehaviour
struct NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4;
// Mirror.NetworkConnection
struct NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311;
// Mirror.NetworkConnectionToClient
struct NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A;
// Mirror.NetworkIdentity
struct NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6;
// Mirror.NetworkMessage
struct NetworkMessage_t635C3A35C91CD82EDF6475FD930C49A27D4B9A65;
// Mirror.NetworkReader
struct NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9;
// Mirror.NetworkStartPosition
struct NetworkStartPosition_tA32E90C11E6234E04155AA8DD67FBC804541D465;
// Mirror.NetworkVisibility
struct NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07;
// Mirror.NetworkWriter
struct NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Mirror.PooledNetworkReader
struct PooledNetworkReader_tD428721C991DFC38A2922BC2940E1816F0C6824C;
// Mirror.PooledNetworkWriter
struct PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052;
// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Mirror.SceneAttribute
struct SceneAttribute_t320720326837991E38C31235EA75B39CBD4CAA8E;
// Telepathy.Server
struct Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2;
// Mirror.ServerAttribute
struct ServerAttribute_tD8686EAC32E05ED828C7CA0C40D1EA85022718D4;
// Mirror.ServerCallbackAttribute
struct ServerCallbackAttribute_tE7022675485DC307068230EDC6EFC5B503ACF88F;
// Mirror.ShowInInspectorAttribute
struct ShowInInspectorAttribute_tCEDD39B2D6FAE1DC4D1828D468B85870F098521E;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// Mirror.SpawnDelegate
struct SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E;
// Mirror.SpawnHandlerDelegate
struct SpawnHandlerDelegate_t841F48F47475ACF69DD6039DC6BD7D1897FB0007;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// Mirror.SyncListBool
struct SyncListBool_t051D197E6553E4CC6B2EC36D9C1D1D17232BACC6;
// Mirror.SyncListFloat
struct SyncListFloat_t60852422D3B0551688414611FB380EEF26C71082;
// Mirror.SyncListInt
struct SyncListInt_t904A6F00E6FEF42837AB438D17E9531980847271;
// Mirror.SyncListString
struct SyncListString_tD245B6587357B3C6277E58F0F86B65E37D2AF407;
// Mirror.SyncListUInt
struct SyncListUInt_t4536021CB31E90B8DCBA4B21BFA1855C2122E72C;
// Mirror.SyncVarAttribute
struct SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305;
// Mirror.TargetRpcAttribute
struct TargetRpcAttribute_t14D3F619D68AA6A60E49203B8EA34EBCCDCB6BC5;
// System.Net.Sockets.TcpListener
struct TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B;
// Mirror.TelepathyTransport
struct TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Mirror.Transport
struct Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D;
// System.Type
struct Type_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// Mirror.UnSpawnDelegate
struct UnSpawnDelegate_tE6B7286FD960C7A2C80DB84A19FCF44BEB2CE6AC;
// Mirror.UnityEventNetworkConnection
struct UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriBuilder
struct UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mirror.ClientScene/<>c
struct U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D;
// Mirror.ClientScene/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tC3329C157C1207413552FA5809AC7FCD41D61514;
// Mirror.ClientScene/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t149A49A0005767DDF4551E5E3D79C8205228A854;
// Mirror.ClientScene/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_t0944B2607EBEC0A490240D3F8A4A0A30705B336E;
// Mirror.ClientScene/LocalplayerChanged
struct LocalplayerChanged_t153CFBEB17900932F679C9861C613D6FD98F7942;
// kcp2k.KcpTransport/<>c
struct U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14;
// Mirror.MultiplexTransport/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t9991E2E442238C75E9E6007DC4D3D0CD5152B658;
// Mirror.NetworkClient/<>c
struct U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3;
// Mirror.NetworkConnectionToClient/Batch
struct Batch_t8E307F02ADA1296DFCBBF39885614D64DED75DBD;
// Mirror.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041;
// Mirror.NetworkLoop/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t1C570947F0AC66F5A3945996F883B9B3DAD5FEB0;
// Mirror.NetworkManager/<>c
struct U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0;
// Mirror.NetworkReaderPool/<>c
struct U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949;
// Mirror.NetworkWriterPool/<>c
struct U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA;
// Mirror.Transport/<>c
struct U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkReaderPool_t6FBE6C21699B8AE6D381BBBBD5AE3EE9A8FC283C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PooledNetworkReader_tD428721C991DFC38A2922BC2940E1816F0C6824C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69;
IL2CPP_EXTERN_C String_t* _stringLiteral180BF4417B1CFD825BC91C5635B7EC7BBE09CB4D;
IL2CPP_EXTERN_C String_t* _stringLiteral28263A27D302DC5DF9EDC1BFB7D78E301205C5DB;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
IL2CPP_EXTERN_C String_t* _stringLiteral2DFF0528D930AE107C308C6AA508FBD6939B4D63;
IL2CPP_EXTERN_C String_t* _stringLiteral32F9530362DC3D1DADF2EF37575FA3AE08D0E68B;
IL2CPP_EXTERN_C String_t* _stringLiteral391EF5DC7DA4ED709D44D902C5F5ADD1B584357A;
IL2CPP_EXTERN_C String_t* _stringLiteral4ACB97197A5501881CCA1DA27051E9B18746EF5C;
IL2CPP_EXTERN_C String_t* _stringLiteral4E42F2000B4FADD094E0BD2AA1BA5C54F169667A;
IL2CPP_EXTERN_C String_t* _stringLiteral6AD71F6B50EE052763D8705F5E903023A528A3D1;
IL2CPP_EXTERN_C String_t* _stringLiteral780B762059704518D09A16D9F8C8BB89E4AED59B;
IL2CPP_EXTERN_C String_t* _stringLiteral973A66DB55AF166CD9F932F251FE02DA521831C5;
IL2CPP_EXTERN_C String_t* _stringLiteralA00A6ED1079D9BFA0747625B3DBAEAB49075A9D7;
IL2CPP_EXTERN_C String_t* _stringLiteralB3FB58DAF2CFBF3D2821FA68068D1520C3A7E465;
IL2CPP_EXTERN_C String_t* _stringLiteralB6BB3B52FA5BFB37025BF9AFC9590C324FAFEC5B;
IL2CPP_EXTERN_C String_t* _stringLiteralBB79A1D89BEFD9E72C6C2EA4E1CB391D9AACEDF1;
IL2CPP_EXTERN_C String_t* _stringLiteralCF10FC9100B7D12446696F7574E43B725816DD76;
IL2CPP_EXTERN_C String_t* _stringLiteralD5307E6F97D47594218B8AA2F5CFC2402118E60F;
IL2CPP_EXTERN_C String_t* _stringLiteralE556AF7EE33D03AAB586B44414C6DBA3B8C1EDA2;
IL2CPP_EXTERN_C String_t* _stringLiteralE971D200E92B902817CBA6564BCC938A17CA6558;
IL2CPP_EXTERN_C String_t* _stringLiteralEB8FF6B609C5F62B9804776B9469868C7E8C7803;
IL2CPP_EXTERN_C String_t* _stringLiteralF5B7D55577ECC2D6DEFA55674921782E5003E75A;
IL2CPP_EXTERN_C String_t* _stringLiteralFFC4C321A0162D293F571074874146DAF1474345;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m429C88434C52233463BBF414E7283E6EFD4B15B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mF9E901FAD15F0385E62CAFEC66A6DA5D59295858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m0F1FC12DAF031547739B9BFC8532E64934995D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m575F8B46B3B71BEF76A558EE27E3DDBEDC0F59FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m6AE258C04F422C22BD5CB17FF454F34A1F452A8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m77574053810AA03D245085523189B9B1B1D02F70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_m52BF18DD2D5C75431537D8669F55B766BFB28987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_m0653D711C23EA0CC7B71B9BE2719632F36A7699D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m107B791DBC1E809192456359DFF8B8F45A84EAA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m2B36C7918C6E034FD810ECB4ED480BD2F84781BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mE54F65E95E37762A387417D484FD204A4B02C332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m13CCBED1F86108F9D5963871ED2B694227142DC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m571DC5266DD0515238FEE375C58419E469D34618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m17BFA475EE36804655561118BB67DE9A7D6748BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mFADD4CD2C85FFA653C213C571D5B2664F02AC039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mF9F45DC162459E01FF8BEDB7E1464FC767ABA62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mFA75ACF3666006F9878974466A488C75BBD28247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mDFF4631D0F417B42AB24819A2F7D34916E270AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkClient_Send_TisNetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396_mE0CEFAFF49FB5317E61AC99F0CEA31661B986928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkConnection_Send_TisNetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2_mFDDB15291A2C37262033B83AB1A894466DD46EE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteBytesAndSize_m75E79671D06A8D7C3CA09E02844E6316F3A3E56B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Return_m205ADBFC1B5B4BBD90BE148C8EF6850041965BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Take_m628ADF7444CCF6B68881A9A0E019168146396EFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1__ctor_mA7FCF10D36E47802FA097F1FA00FC0C0489405DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m8A390E5C2CBC38435B3D15C68350D0DBA45FBDE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_m13E900D593940E204D267A2B7770541049F45873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_m45D0C7A84F8605974735A247AE954C56A7577841_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_m815BFA4465D735F628EE0ECAFE57796DC33828AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_mD324A1BEF31DF7325F738BB47B26F7D186D8EF04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_mFC6B35AA9D833111D03774AF9E8C9E6B5259CF15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_ClientConnect_m27B5C086CB7ED8E51EDF0D922FACFBEE88CB2BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CAwakeU3Eb__16_0_m905CFDDDDE4DC4C2DF534C3785C594E98316A038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CAwakeU3Eb__16_1_mADDB68E8C56E511F7B71AF2C9CF3A450C7F5DBF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CAwakeU3Eb__16_2_mB5CD19395BFC6D0020C35F8D6C4CE87624B7CDB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CAwakeU3Eb__16_3_m449CD1AB3CC3F97916947FCD69B0412704FF1A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CAwakeU3Eb__16_4_m2999458B1882358091529A2D113CDD0681BAF6B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CAwakeU3Eb__16_5_m5C9F8614ED86F5630676C4E29B4423EA0DD5D9F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CAwakeU3Eb__16_6_m874F866E355A4DCE73B942608DAF1DBCFEF1B9A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__3_0_mB0A5B91C0E7EC65AD20C53B230FD500DECA1A061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__32_0_mF7FDB3F2F0DFF66E559442E14A7D4464D0E14D79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__32_1_m54E5403E2D3851EA7C6A6D343300323AC7110927_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__32_2_mEE5BBB94A91E911340820E2237772AFDD1872CD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__32_3_mC6026CC78089FE13D779CC367A1D87FFCE82D604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__32_4_m195B635652A49A8FC937C05492F1610FAAC6F0BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__32_5_m76101E9DC27C90650C0BA52687E86B115CA542A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__32_6_m324D78CD5F370CACCC239A8ACAB0E17767C01C1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__32_7_m3976B6943CBB65C428F9FE631793BB65EA539C8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mA2EF7120BAD01BD1BAC024CF49A792C4E951B7A8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com;
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.RemoteCalls.Invoker>
struct  Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF830743B3FA35877F6AB28DF22379A35EC4A33DD* ___entries_1;
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
	KeyCollection_t09AE1DDE77A3C15466D8734739DFA4B16AF7718C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t913628ACDB58CD5B5ADAC6ED54399C86854ED6B6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11, ___entries_1)); }
	inline EntryU5BU5D_tF830743B3FA35877F6AB28DF22379A35EC4A33DD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF830743B3FA35877F6AB28DF22379A35EC4A33DD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF830743B3FA35877F6AB28DF22379A35EC4A33DD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11, ___keys_7)); }
	inline KeyCollection_t09AE1DDE77A3C15466D8734739DFA4B16AF7718C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t09AE1DDE77A3C15466D8734739DFA4B16AF7718C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t09AE1DDE77A3C15466D8734739DFA4B16AF7718C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11, ___values_8)); }
	inline ValueCollection_t913628ACDB58CD5B5ADAC6ED54399C86854ED6B6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t913628ACDB58CD5B5ADAC6ED54399C86854ED6B6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t913628ACDB58CD5B5ADAC6ED54399C86854ED6B6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// Mirror.Pool`1<Mirror.PooledNetworkWriter>
struct  Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> Mirror.Pool`1::objects
	Stack_1_t5A603E9CD211417198FC70169698D5632EF8D960 * ___objects_0;
	// System.Func`1<T> Mirror.Pool`1::objectGenerator
	Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950 * ___objectGenerator_1;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06, ___objects_0)); }
	inline Stack_1_t5A603E9CD211417198FC70169698D5632EF8D960 * get_objects_0() const { return ___objects_0; }
	inline Stack_1_t5A603E9CD211417198FC70169698D5632EF8D960 ** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(Stack_1_t5A603E9CD211417198FC70169698D5632EF8D960 * value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_objectGenerator_1() { return static_cast<int32_t>(offsetof(Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06, ___objectGenerator_1)); }
	inline Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950 * get_objectGenerator_1() const { return ___objectGenerator_1; }
	inline Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950 ** get_address_of_objectGenerator_1() { return &___objectGenerator_1; }
	inline void set_objectGenerator_1(Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950 * value)
	{
		___objectGenerator_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectGenerator_1), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<Mirror.PooledNetworkWriter>
struct  Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	PooledNetworkWriterU5BU5D_t98F759966A023522F02742C6C17D2BFC4DE9571D* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001, ____array_0)); }
	inline PooledNetworkWriterU5BU5D_t98F759966A023522F02742C6C17D2BFC4DE9571D* get__array_0() const { return ____array_0; }
	inline PooledNetworkWriterU5BU5D_t98F759966A023522F02742C6C17D2BFC4DE9571D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(PooledNetworkWriterU5BU5D_t98F759966A023522F02742C6C17D2BFC4DE9571D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// Mirror.SyncList`1<System.Boolean>
struct  SyncList_1_t2F8F7EA24D2E33454F00D5E6F16884F5AD9C45FB  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> Mirror.SyncList`1::objects
	RuntimeObject* ___objects_0;
	// System.Collections.Generic.IEqualityComparer`1<T> Mirror.SyncList`1::comparer
	RuntimeObject* ___comparer_1;
	// System.Boolean Mirror.SyncList`1::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_2;
	// Mirror.SyncList`1/SyncListChanged<T> Mirror.SyncList`1::Callback
	SyncListChanged_t1EDB572F5CA6CBA9B0D39A630D6BFF09523599C8 * ___Callback_3;
	// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<T>> Mirror.SyncList`1::changes
	List_1_tF05E898B9EC731D7A64E61FFEDB44292AB95CC97 * ___changes_4;
	// System.Int32 Mirror.SyncList`1::changesAhead
	int32_t ___changesAhead_5;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t2F8F7EA24D2E33454F00D5E6F16884F5AD9C45FB, ___objects_0)); }
	inline RuntimeObject* get_objects_0() const { return ___objects_0; }
	inline RuntimeObject** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(RuntimeObject* value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_comparer_1() { return static_cast<int32_t>(offsetof(SyncList_1_t2F8F7EA24D2E33454F00D5E6F16884F5AD9C45FB, ___comparer_1)); }
	inline RuntimeObject* get_comparer_1() const { return ___comparer_1; }
	inline RuntimeObject** get_address_of_comparer_1() { return &___comparer_1; }
	inline void set_comparer_1(RuntimeObject* value)
	{
		___comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SyncList_1_t2F8F7EA24D2E33454F00D5E6F16884F5AD9C45FB, ___U3CIsReadOnlyU3Ek__BackingField_2)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_2() const { return ___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_2() { return &___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_2(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t2F8F7EA24D2E33454F00D5E6F16884F5AD9C45FB, ___Callback_3)); }
	inline SyncListChanged_t1EDB572F5CA6CBA9B0D39A630D6BFF09523599C8 * get_Callback_3() const { return ___Callback_3; }
	inline SyncListChanged_t1EDB572F5CA6CBA9B0D39A630D6BFF09523599C8 ** get_address_of_Callback_3() { return &___Callback_3; }
	inline void set_Callback_3(SyncListChanged_t1EDB572F5CA6CBA9B0D39A630D6BFF09523599C8 * value)
	{
		___Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_3), (void*)value);
	}

	inline static int32_t get_offset_of_changes_4() { return static_cast<int32_t>(offsetof(SyncList_1_t2F8F7EA24D2E33454F00D5E6F16884F5AD9C45FB, ___changes_4)); }
	inline List_1_tF05E898B9EC731D7A64E61FFEDB44292AB95CC97 * get_changes_4() const { return ___changes_4; }
	inline List_1_tF05E898B9EC731D7A64E61FFEDB44292AB95CC97 ** get_address_of_changes_4() { return &___changes_4; }
	inline void set_changes_4(List_1_tF05E898B9EC731D7A64E61FFEDB44292AB95CC97 * value)
	{
		___changes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changes_4), (void*)value);
	}

	inline static int32_t get_offset_of_changesAhead_5() { return static_cast<int32_t>(offsetof(SyncList_1_t2F8F7EA24D2E33454F00D5E6F16884F5AD9C45FB, ___changesAhead_5)); }
	inline int32_t get_changesAhead_5() const { return ___changesAhead_5; }
	inline int32_t* get_address_of_changesAhead_5() { return &___changesAhead_5; }
	inline void set_changesAhead_5(int32_t value)
	{
		___changesAhead_5 = value;
	}
};


// Mirror.SyncList`1<System.Int32>
struct  SyncList_1_tAF42BC3F1F91CD5648A2E51A886DDE9D862AC50E  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> Mirror.SyncList`1::objects
	RuntimeObject* ___objects_0;
	// System.Collections.Generic.IEqualityComparer`1<T> Mirror.SyncList`1::comparer
	RuntimeObject* ___comparer_1;
	// System.Boolean Mirror.SyncList`1::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_2;
	// Mirror.SyncList`1/SyncListChanged<T> Mirror.SyncList`1::Callback
	SyncListChanged_t40D1C4572130A49D05D26AC603429F5D78646D95 * ___Callback_3;
	// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<T>> Mirror.SyncList`1::changes
	List_1_t13B8E8A30FCB0EFC6499E53522BF606AB1A1DB4A * ___changes_4;
	// System.Int32 Mirror.SyncList`1::changesAhead
	int32_t ___changesAhead_5;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_tAF42BC3F1F91CD5648A2E51A886DDE9D862AC50E, ___objects_0)); }
	inline RuntimeObject* get_objects_0() const { return ___objects_0; }
	inline RuntimeObject** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(RuntimeObject* value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_comparer_1() { return static_cast<int32_t>(offsetof(SyncList_1_tAF42BC3F1F91CD5648A2E51A886DDE9D862AC50E, ___comparer_1)); }
	inline RuntimeObject* get_comparer_1() const { return ___comparer_1; }
	inline RuntimeObject** get_address_of_comparer_1() { return &___comparer_1; }
	inline void set_comparer_1(RuntimeObject* value)
	{
		___comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SyncList_1_tAF42BC3F1F91CD5648A2E51A886DDE9D862AC50E, ___U3CIsReadOnlyU3Ek__BackingField_2)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_2() const { return ___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_2() { return &___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_2(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_tAF42BC3F1F91CD5648A2E51A886DDE9D862AC50E, ___Callback_3)); }
	inline SyncListChanged_t40D1C4572130A49D05D26AC603429F5D78646D95 * get_Callback_3() const { return ___Callback_3; }
	inline SyncListChanged_t40D1C4572130A49D05D26AC603429F5D78646D95 ** get_address_of_Callback_3() { return &___Callback_3; }
	inline void set_Callback_3(SyncListChanged_t40D1C4572130A49D05D26AC603429F5D78646D95 * value)
	{
		___Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_3), (void*)value);
	}

	inline static int32_t get_offset_of_changes_4() { return static_cast<int32_t>(offsetof(SyncList_1_tAF42BC3F1F91CD5648A2E51A886DDE9D862AC50E, ___changes_4)); }
	inline List_1_t13B8E8A30FCB0EFC6499E53522BF606AB1A1DB4A * get_changes_4() const { return ___changes_4; }
	inline List_1_t13B8E8A30FCB0EFC6499E53522BF606AB1A1DB4A ** get_address_of_changes_4() { return &___changes_4; }
	inline void set_changes_4(List_1_t13B8E8A30FCB0EFC6499E53522BF606AB1A1DB4A * value)
	{
		___changes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changes_4), (void*)value);
	}

	inline static int32_t get_offset_of_changesAhead_5() { return static_cast<int32_t>(offsetof(SyncList_1_tAF42BC3F1F91CD5648A2E51A886DDE9D862AC50E, ___changesAhead_5)); }
	inline int32_t get_changesAhead_5() const { return ___changesAhead_5; }
	inline int32_t* get_address_of_changesAhead_5() { return &___changesAhead_5; }
	inline void set_changesAhead_5(int32_t value)
	{
		___changesAhead_5 = value;
	}
};


// Mirror.SyncList`1<System.Single>
struct  SyncList_1_tECB44CC600EBA63341578F8C15F17ED5F4FEB15A  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> Mirror.SyncList`1::objects
	RuntimeObject* ___objects_0;
	// System.Collections.Generic.IEqualityComparer`1<T> Mirror.SyncList`1::comparer
	RuntimeObject* ___comparer_1;
	// System.Boolean Mirror.SyncList`1::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_2;
	// Mirror.SyncList`1/SyncListChanged<T> Mirror.SyncList`1::Callback
	SyncListChanged_t501498047D3FEA5C18A867F8EFCDA896A47317D2 * ___Callback_3;
	// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<T>> Mirror.SyncList`1::changes
	List_1_t368BEE6FB268265EBD7E314E5B7E067C7A1406B5 * ___changes_4;
	// System.Int32 Mirror.SyncList`1::changesAhead
	int32_t ___changesAhead_5;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_tECB44CC600EBA63341578F8C15F17ED5F4FEB15A, ___objects_0)); }
	inline RuntimeObject* get_objects_0() const { return ___objects_0; }
	inline RuntimeObject** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(RuntimeObject* value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_comparer_1() { return static_cast<int32_t>(offsetof(SyncList_1_tECB44CC600EBA63341578F8C15F17ED5F4FEB15A, ___comparer_1)); }
	inline RuntimeObject* get_comparer_1() const { return ___comparer_1; }
	inline RuntimeObject** get_address_of_comparer_1() { return &___comparer_1; }
	inline void set_comparer_1(RuntimeObject* value)
	{
		___comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SyncList_1_tECB44CC600EBA63341578F8C15F17ED5F4FEB15A, ___U3CIsReadOnlyU3Ek__BackingField_2)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_2() const { return ___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_2() { return &___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_2(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_tECB44CC600EBA63341578F8C15F17ED5F4FEB15A, ___Callback_3)); }
	inline SyncListChanged_t501498047D3FEA5C18A867F8EFCDA896A47317D2 * get_Callback_3() const { return ___Callback_3; }
	inline SyncListChanged_t501498047D3FEA5C18A867F8EFCDA896A47317D2 ** get_address_of_Callback_3() { return &___Callback_3; }
	inline void set_Callback_3(SyncListChanged_t501498047D3FEA5C18A867F8EFCDA896A47317D2 * value)
	{
		___Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_3), (void*)value);
	}

	inline static int32_t get_offset_of_changes_4() { return static_cast<int32_t>(offsetof(SyncList_1_tECB44CC600EBA63341578F8C15F17ED5F4FEB15A, ___changes_4)); }
	inline List_1_t368BEE6FB268265EBD7E314E5B7E067C7A1406B5 * get_changes_4() const { return ___changes_4; }
	inline List_1_t368BEE6FB268265EBD7E314E5B7E067C7A1406B5 ** get_address_of_changes_4() { return &___changes_4; }
	inline void set_changes_4(List_1_t368BEE6FB268265EBD7E314E5B7E067C7A1406B5 * value)
	{
		___changes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changes_4), (void*)value);
	}

	inline static int32_t get_offset_of_changesAhead_5() { return static_cast<int32_t>(offsetof(SyncList_1_tECB44CC600EBA63341578F8C15F17ED5F4FEB15A, ___changesAhead_5)); }
	inline int32_t get_changesAhead_5() const { return ___changesAhead_5; }
	inline int32_t* get_address_of_changesAhead_5() { return &___changesAhead_5; }
	inline void set_changesAhead_5(int32_t value)
	{
		___changesAhead_5 = value;
	}
};


// Mirror.SyncList`1<System.String>
struct  SyncList_1_t83D785F69E2D0AAC15D1603D38FB2A0425CF61CB  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> Mirror.SyncList`1::objects
	RuntimeObject* ___objects_0;
	// System.Collections.Generic.IEqualityComparer`1<T> Mirror.SyncList`1::comparer
	RuntimeObject* ___comparer_1;
	// System.Boolean Mirror.SyncList`1::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_2;
	// Mirror.SyncList`1/SyncListChanged<T> Mirror.SyncList`1::Callback
	SyncListChanged_t9EE81A0DE0B8AF95C73678FB6BA832416858237A * ___Callback_3;
	// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<T>> Mirror.SyncList`1::changes
	List_1_tCBAA5355C79F9243413E3132D0DD6E2FF0AEBCA2 * ___changes_4;
	// System.Int32 Mirror.SyncList`1::changesAhead
	int32_t ___changesAhead_5;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t83D785F69E2D0AAC15D1603D38FB2A0425CF61CB, ___objects_0)); }
	inline RuntimeObject* get_objects_0() const { return ___objects_0; }
	inline RuntimeObject** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(RuntimeObject* value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_comparer_1() { return static_cast<int32_t>(offsetof(SyncList_1_t83D785F69E2D0AAC15D1603D38FB2A0425CF61CB, ___comparer_1)); }
	inline RuntimeObject* get_comparer_1() const { return ___comparer_1; }
	inline RuntimeObject** get_address_of_comparer_1() { return &___comparer_1; }
	inline void set_comparer_1(RuntimeObject* value)
	{
		___comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SyncList_1_t83D785F69E2D0AAC15D1603D38FB2A0425CF61CB, ___U3CIsReadOnlyU3Ek__BackingField_2)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_2() const { return ___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_2() { return &___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_2(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t83D785F69E2D0AAC15D1603D38FB2A0425CF61CB, ___Callback_3)); }
	inline SyncListChanged_t9EE81A0DE0B8AF95C73678FB6BA832416858237A * get_Callback_3() const { return ___Callback_3; }
	inline SyncListChanged_t9EE81A0DE0B8AF95C73678FB6BA832416858237A ** get_address_of_Callback_3() { return &___Callback_3; }
	inline void set_Callback_3(SyncListChanged_t9EE81A0DE0B8AF95C73678FB6BA832416858237A * value)
	{
		___Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_3), (void*)value);
	}

	inline static int32_t get_offset_of_changes_4() { return static_cast<int32_t>(offsetof(SyncList_1_t83D785F69E2D0AAC15D1603D38FB2A0425CF61CB, ___changes_4)); }
	inline List_1_tCBAA5355C79F9243413E3132D0DD6E2FF0AEBCA2 * get_changes_4() const { return ___changes_4; }
	inline List_1_tCBAA5355C79F9243413E3132D0DD6E2FF0AEBCA2 ** get_address_of_changes_4() { return &___changes_4; }
	inline void set_changes_4(List_1_tCBAA5355C79F9243413E3132D0DD6E2FF0AEBCA2 * value)
	{
		___changes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changes_4), (void*)value);
	}

	inline static int32_t get_offset_of_changesAhead_5() { return static_cast<int32_t>(offsetof(SyncList_1_t83D785F69E2D0AAC15D1603D38FB2A0425CF61CB, ___changesAhead_5)); }
	inline int32_t get_changesAhead_5() const { return ___changesAhead_5; }
	inline int32_t* get_address_of_changesAhead_5() { return &___changesAhead_5; }
	inline void set_changesAhead_5(int32_t value)
	{
		___changesAhead_5 = value;
	}
};


// Mirror.SyncList`1<System.UInt32>
struct  SyncList_1_t8D7B521C26EA72344C90ED7A42E0487DBBAE5C36  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> Mirror.SyncList`1::objects
	RuntimeObject* ___objects_0;
	// System.Collections.Generic.IEqualityComparer`1<T> Mirror.SyncList`1::comparer
	RuntimeObject* ___comparer_1;
	// System.Boolean Mirror.SyncList`1::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_2;
	// Mirror.SyncList`1/SyncListChanged<T> Mirror.SyncList`1::Callback
	SyncListChanged_t40B9D5D446FA878615EE6632914D01AF6D7D02A0 * ___Callback_3;
	// System.Collections.Generic.List`1<Mirror.SyncList`1/Change<T>> Mirror.SyncList`1::changes
	List_1_t3C2815D8E1F4088F35457FA5C2A75AD1B0554BE6 * ___changes_4;
	// System.Int32 Mirror.SyncList`1::changesAhead
	int32_t ___changesAhead_5;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t8D7B521C26EA72344C90ED7A42E0487DBBAE5C36, ___objects_0)); }
	inline RuntimeObject* get_objects_0() const { return ___objects_0; }
	inline RuntimeObject** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(RuntimeObject* value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_comparer_1() { return static_cast<int32_t>(offsetof(SyncList_1_t8D7B521C26EA72344C90ED7A42E0487DBBAE5C36, ___comparer_1)); }
	inline RuntimeObject* get_comparer_1() const { return ___comparer_1; }
	inline RuntimeObject** get_address_of_comparer_1() { return &___comparer_1; }
	inline void set_comparer_1(RuntimeObject* value)
	{
		___comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SyncList_1_t8D7B521C26EA72344C90ED7A42E0487DBBAE5C36, ___U3CIsReadOnlyU3Ek__BackingField_2)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_2() const { return ___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_2() { return &___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_2(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t8D7B521C26EA72344C90ED7A42E0487DBBAE5C36, ___Callback_3)); }
	inline SyncListChanged_t40B9D5D446FA878615EE6632914D01AF6D7D02A0 * get_Callback_3() const { return ___Callback_3; }
	inline SyncListChanged_t40B9D5D446FA878615EE6632914D01AF6D7D02A0 ** get_address_of_Callback_3() { return &___Callback_3; }
	inline void set_Callback_3(SyncListChanged_t40B9D5D446FA878615EE6632914D01AF6D7D02A0 * value)
	{
		___Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_3), (void*)value);
	}

	inline static int32_t get_offset_of_changes_4() { return static_cast<int32_t>(offsetof(SyncList_1_t8D7B521C26EA72344C90ED7A42E0487DBBAE5C36, ___changes_4)); }
	inline List_1_t3C2815D8E1F4088F35457FA5C2A75AD1B0554BE6 * get_changes_4() const { return ___changes_4; }
	inline List_1_t3C2815D8E1F4088F35457FA5C2A75AD1B0554BE6 ** get_address_of_changes_4() { return &___changes_4; }
	inline void set_changes_4(List_1_t3C2815D8E1F4088F35457FA5C2A75AD1B0554BE6 * value)
	{
		___changes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changes_4), (void*)value);
	}

	inline static int32_t get_offset_of_changesAhead_5() { return static_cast<int32_t>(offsetof(SyncList_1_t8D7B521C26EA72344C90ED7A42E0487DBBAE5C36, ___changesAhead_5)); }
	inline int32_t get_changesAhead_5() const { return ___changesAhead_5; }
	inline int32_t* get_address_of_changesAhead_5() { return &___changesAhead_5; }
	inline void set_changesAhead_5(int32_t value)
	{
		___changesAhead_5 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Telepathy.Common
struct  Common_t25B06616A1695440B39152B4C426E18441C11E0F  : public RuntimeObject
{
public:
	// System.Boolean Telepathy.Common::NoDelay
	bool ___NoDelay_0;
	// System.Int32 Telepathy.Common::MaxMessageSize
	int32_t ___MaxMessageSize_1;
	// System.Int32 Telepathy.Common::SendTimeout
	int32_t ___SendTimeout_2;
	// System.Int32 Telepathy.Common::ReceiveTimeout
	int32_t ___ReceiveTimeout_3;

public:
	inline static int32_t get_offset_of_NoDelay_0() { return static_cast<int32_t>(offsetof(Common_t25B06616A1695440B39152B4C426E18441C11E0F, ___NoDelay_0)); }
	inline bool get_NoDelay_0() const { return ___NoDelay_0; }
	inline bool* get_address_of_NoDelay_0() { return &___NoDelay_0; }
	inline void set_NoDelay_0(bool value)
	{
		___NoDelay_0 = value;
	}

	inline static int32_t get_offset_of_MaxMessageSize_1() { return static_cast<int32_t>(offsetof(Common_t25B06616A1695440B39152B4C426E18441C11E0F, ___MaxMessageSize_1)); }
	inline int32_t get_MaxMessageSize_1() const { return ___MaxMessageSize_1; }
	inline int32_t* get_address_of_MaxMessageSize_1() { return &___MaxMessageSize_1; }
	inline void set_MaxMessageSize_1(int32_t value)
	{
		___MaxMessageSize_1 = value;
	}

	inline static int32_t get_offset_of_SendTimeout_2() { return static_cast<int32_t>(offsetof(Common_t25B06616A1695440B39152B4C426E18441C11E0F, ___SendTimeout_2)); }
	inline int32_t get_SendTimeout_2() const { return ___SendTimeout_2; }
	inline int32_t* get_address_of_SendTimeout_2() { return &___SendTimeout_2; }
	inline void set_SendTimeout_2(int32_t value)
	{
		___SendTimeout_2 = value;
	}

	inline static int32_t get_offset_of_ReceiveTimeout_3() { return static_cast<int32_t>(offsetof(Common_t25B06616A1695440B39152B4C426E18441C11E0F, ___ReceiveTimeout_3)); }
	inline int32_t get_ReceiveTimeout_3() const { return ___ReceiveTimeout_3; }
	inline int32_t* get_address_of_ReceiveTimeout_3() { return &___ReceiveTimeout_3; }
	inline void set_ReceiveTimeout_3(int32_t value)
	{
		___ReceiveTimeout_3 = value;
	}
};


// UnityEngine.Debug
struct  Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B  : public RuntimeObject
{
public:

public:
};

struct Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Logger_0), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_56)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_59)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_60)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
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
	RuntimeObject * ___s_InternalSyncObject_61;

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

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
	}
};


// Mirror.ExponentialMovingAverage
struct  ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856  : public RuntimeObject
{
public:
	// System.Single Mirror.ExponentialMovingAverage::alpha
	float ___alpha_0;
	// System.Boolean Mirror.ExponentialMovingAverage::initialized
	bool ___initialized_1;
	// System.Double Mirror.ExponentialMovingAverage::<Value>k__BackingField
	double ___U3CValueU3Ek__BackingField_2;
	// System.Double Mirror.ExponentialMovingAverage::<Var>k__BackingField
	double ___U3CVarU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_alpha_0() { return static_cast<int32_t>(offsetof(ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856, ___alpha_0)); }
	inline float get_alpha_0() const { return ___alpha_0; }
	inline float* get_address_of_alpha_0() { return &___alpha_0; }
	inline void set_alpha_0(float value)
	{
		___alpha_0 = value;
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856, ___U3CValueU3Ek__BackingField_2)); }
	inline double get_U3CValueU3Ek__BackingField_2() const { return ___U3CValueU3Ek__BackingField_2; }
	inline double* get_address_of_U3CValueU3Ek__BackingField_2() { return &___U3CValueU3Ek__BackingField_2; }
	inline void set_U3CValueU3Ek__BackingField_2(double value)
	{
		___U3CValueU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CVarU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856, ___U3CVarU3Ek__BackingField_3)); }
	inline double get_U3CVarU3Ek__BackingField_3() const { return ___U3CVarU3Ek__BackingField_3; }
	inline double* get_address_of_U3CVarU3Ek__BackingField_3() { return &___U3CVarU3Ek__BackingField_3; }
	inline void set_U3CVarU3Ek__BackingField_3(double value)
	{
		___U3CVarU3Ek__BackingField_3 = value;
	}
};


// Telepathy.Log
struct  Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC  : public RuntimeObject
{
public:

public:
};

struct Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields
{
public:
	// System.Action`1<System.String> Telepathy.Log::Info
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___Info_0;
	// System.Action`1<System.String> Telepathy.Log::Warning
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___Warning_1;
	// System.Action`1<System.String> Telepathy.Log::Error
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___Error_2;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields, ___Info_0)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_Info_0() const { return ___Info_0; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}

	inline static int32_t get_offset_of_Warning_1() { return static_cast<int32_t>(offsetof(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields, ___Warning_1)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_Warning_1() const { return ___Warning_1; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_Warning_1() { return &___Warning_1; }
	inline void set_Warning_1(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___Warning_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Warning_1), (void*)value);
	}

	inline static int32_t get_offset_of_Error_2() { return static_cast<int32_t>(offsetof(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields, ___Error_2)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_Error_2() const { return ___Error_2; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_Error_2() { return &___Error_2; }
	inline void set_Error_2(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___Error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Error_2), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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


// Mirror.NetworkTime
struct  NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D  : public RuntimeObject
{
public:

public:
};

struct NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields
{
public:
	// System.Single Mirror.NetworkTime::PingFrequency
	float ___PingFrequency_0;
	// System.Int32 Mirror.NetworkTime::PingWindowSize
	int32_t ___PingWindowSize_1;
	// System.Double Mirror.NetworkTime::lastPingTime
	double ___lastPingTime_2;
	// System.Diagnostics.Stopwatch Mirror.NetworkTime::stopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___stopwatch_3;
	// Mirror.ExponentialMovingAverage Mirror.NetworkTime::_rtt
	ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * ____rtt_4;
	// Mirror.ExponentialMovingAverage Mirror.NetworkTime::_offset
	ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * ____offset_5;
	// System.Double Mirror.NetworkTime::offsetMin
	double ___offsetMin_6;
	// System.Double Mirror.NetworkTime::offsetMax
	double ___offsetMax_7;

public:
	inline static int32_t get_offset_of_PingFrequency_0() { return static_cast<int32_t>(offsetof(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields, ___PingFrequency_0)); }
	inline float get_PingFrequency_0() const { return ___PingFrequency_0; }
	inline float* get_address_of_PingFrequency_0() { return &___PingFrequency_0; }
	inline void set_PingFrequency_0(float value)
	{
		___PingFrequency_0 = value;
	}

	inline static int32_t get_offset_of_PingWindowSize_1() { return static_cast<int32_t>(offsetof(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields, ___PingWindowSize_1)); }
	inline int32_t get_PingWindowSize_1() const { return ___PingWindowSize_1; }
	inline int32_t* get_address_of_PingWindowSize_1() { return &___PingWindowSize_1; }
	inline void set_PingWindowSize_1(int32_t value)
	{
		___PingWindowSize_1 = value;
	}

	inline static int32_t get_offset_of_lastPingTime_2() { return static_cast<int32_t>(offsetof(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields, ___lastPingTime_2)); }
	inline double get_lastPingTime_2() const { return ___lastPingTime_2; }
	inline double* get_address_of_lastPingTime_2() { return &___lastPingTime_2; }
	inline void set_lastPingTime_2(double value)
	{
		___lastPingTime_2 = value;
	}

	inline static int32_t get_offset_of_stopwatch_3() { return static_cast<int32_t>(offsetof(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields, ___stopwatch_3)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_stopwatch_3() const { return ___stopwatch_3; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_stopwatch_3() { return &___stopwatch_3; }
	inline void set_stopwatch_3(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___stopwatch_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopwatch_3), (void*)value);
	}

	inline static int32_t get_offset_of__rtt_4() { return static_cast<int32_t>(offsetof(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields, ____rtt_4)); }
	inline ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * get__rtt_4() const { return ____rtt_4; }
	inline ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 ** get_address_of__rtt_4() { return &____rtt_4; }
	inline void set__rtt_4(ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * value)
	{
		____rtt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rtt_4), (void*)value);
	}

	inline static int32_t get_offset_of__offset_5() { return static_cast<int32_t>(offsetof(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields, ____offset_5)); }
	inline ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * get__offset_5() const { return ____offset_5; }
	inline ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 ** get_address_of__offset_5() { return &____offset_5; }
	inline void set__offset_5(ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * value)
	{
		____offset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____offset_5), (void*)value);
	}

	inline static int32_t get_offset_of_offsetMin_6() { return static_cast<int32_t>(offsetof(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields, ___offsetMin_6)); }
	inline double get_offsetMin_6() const { return ___offsetMin_6; }
	inline double* get_address_of_offsetMin_6() { return &___offsetMin_6; }
	inline void set_offsetMin_6(double value)
	{
		___offsetMin_6 = value;
	}

	inline static int32_t get_offset_of_offsetMax_7() { return static_cast<int32_t>(offsetof(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields, ___offsetMax_7)); }
	inline double get_offsetMax_7() const { return ___offsetMax_7; }
	inline double* get_address_of_offsetMax_7() { return &___offsetMax_7; }
	inline void set_offsetMax_7(double value)
	{
		___offsetMax_7 = value;
	}
};


// Mirror.NetworkVisibilityObsoleteMessage
struct  NetworkVisibilityObsoleteMessage_t63FF9C97023880643318866D9021629D3089559D  : public RuntimeObject
{
public:

public:
};


// Mirror.NetworkWriter
struct  NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A  : public RuntimeObject
{
public:
	// System.Byte[] Mirror.NetworkWriter::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_1;
	// System.Int32 Mirror.NetworkWriter::position
	int32_t ___position_2;
	// System.Int32 Mirror.NetworkWriter::length
	int32_t ___length_3;

public:
	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A, ___buffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A, ___length_3)); }
	inline int32_t get_length_3() const { return ___length_3; }
	inline int32_t* get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(int32_t value)
	{
		___length_3 = value;
	}
};


// Mirror.NetworkWriterExtensions
struct  NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2  : public RuntimeObject
{
public:

public:
};

struct NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_StaticFields
{
public:
	// System.Text.UTF8Encoding Mirror.NetworkWriterExtensions::encoding
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___encoding_0;
	// System.Byte[] Mirror.NetworkWriterExtensions::stringBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___stringBuffer_1;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_StaticFields, ___encoding_0)); }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * get_encoding_0() const { return ___encoding_0; }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 ** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_stringBuffer_1() { return static_cast<int32_t>(offsetof(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_StaticFields, ___stringBuffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_stringBuffer_1() const { return ___stringBuffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_stringBuffer_1() { return &___stringBuffer_1; }
	inline void set_stringBuffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___stringBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringBuffer_1), (void*)value);
	}
};


// Mirror.NetworkWriterPool
struct  NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0  : public RuntimeObject
{
public:

public:
};

struct NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_StaticFields
{
public:
	// Mirror.Pool`1<Mirror.PooledNetworkWriter> Mirror.NetworkWriterPool::Pool
	Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 * ___Pool_0;

public:
	inline static int32_t get_offset_of_Pool_0() { return static_cast<int32_t>(offsetof(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_StaticFields, ___Pool_0)); }
	inline Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 * get_Pool_0() const { return ___Pool_0; }
	inline Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 ** get_address_of_Pool_0() { return &___Pool_0; }
	inline void set_Pool_0(Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 * value)
	{
		___Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pool_0), (void*)value);
	}
};


// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50  : public RuntimeObject
{
public:

public:
};


// Mirror.RemoteCalls.RemoteCallHelper
struct  RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02  : public RuntimeObject
{
public:

public:
};

struct RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.RemoteCalls.Invoker> Mirror.RemoteCalls.RemoteCallHelper::cmdHandlerDelegates
	Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * ___cmdHandlerDelegates_0;

public:
	inline static int32_t get_offset_of_cmdHandlerDelegates_0() { return static_cast<int32_t>(offsetof(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_StaticFields, ___cmdHandlerDelegates_0)); }
	inline Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * get_cmdHandlerDelegates_0() const { return ___cmdHandlerDelegates_0; }
	inline Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 ** get_address_of_cmdHandlerDelegates_0() { return &___cmdHandlerDelegates_0; }
	inline void set_cmdHandlerDelegates_0(Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * value)
	{
		___cmdHandlerDelegates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cmdHandlerDelegates_0), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
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


// System.Net.Sockets.TcpListener
struct  TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B  : public RuntimeObject
{
public:
	// System.Net.IPEndPoint System.Net.Sockets.TcpListener::m_ServerSocketEP
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___m_ServerSocketEP_0;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::m_ServerSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_ServerSocket_1;
	// System.Boolean System.Net.Sockets.TcpListener::m_Active
	bool ___m_Active_2;
	// System.Boolean System.Net.Sockets.TcpListener::m_ExclusiveAddressUse
	bool ___m_ExclusiveAddressUse_3;

public:
	inline static int32_t get_offset_of_m_ServerSocketEP_0() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_ServerSocketEP_0)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_m_ServerSocketEP_0() const { return ___m_ServerSocketEP_0; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_m_ServerSocketEP_0() { return &___m_ServerSocketEP_0; }
	inline void set_m_ServerSocketEP_0(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___m_ServerSocketEP_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocketEP_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServerSocket_1() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_ServerSocket_1)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_ServerSocket_1() const { return ___m_ServerSocket_1; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_ServerSocket_1() { return &___m_ServerSocket_1; }
	inline void set_m_ServerSocket_1(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_ServerSocket_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocket_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_2() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_Active_2)); }
	inline bool get_m_Active_2() const { return ___m_Active_2; }
	inline bool* get_address_of_m_Active_2() { return &___m_Active_2; }
	inline void set_m_Active_2(bool value)
	{
		___m_Active_2 = value;
	}

	inline static int32_t get_offset_of_m_ExclusiveAddressUse_3() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_ExclusiveAddressUse_3)); }
	inline bool get_m_ExclusiveAddressUse_3() const { return ___m_ExclusiveAddressUse_3; }
	inline bool* get_address_of_m_ExclusiveAddressUse_3() { return &___m_ExclusiveAddressUse_3; }
	inline void set_m_ExclusiveAddressUse_3(bool value)
	{
		___m_ExclusiveAddressUse_3 = value;
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


// System.UriBuilder
struct  UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42  : public RuntimeObject
{
public:
	// System.Boolean System.UriBuilder::_changed
	bool ____changed_0;
	// System.String System.UriBuilder::_fragment
	String_t* ____fragment_1;
	// System.String System.UriBuilder::_host
	String_t* ____host_2;
	// System.String System.UriBuilder::_password
	String_t* ____password_3;
	// System.String System.UriBuilder::_path
	String_t* ____path_4;
	// System.Int32 System.UriBuilder::_port
	int32_t ____port_5;
	// System.String System.UriBuilder::_query
	String_t* ____query_6;
	// System.String System.UriBuilder::_scheme
	String_t* ____scheme_7;
	// System.String System.UriBuilder::_schemeDelimiter
	String_t* ____schemeDelimiter_8;
	// System.Uri System.UriBuilder::_uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ____uri_9;
	// System.String System.UriBuilder::_username
	String_t* ____username_10;

public:
	inline static int32_t get_offset_of__changed_0() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____changed_0)); }
	inline bool get__changed_0() const { return ____changed_0; }
	inline bool* get_address_of__changed_0() { return &____changed_0; }
	inline void set__changed_0(bool value)
	{
		____changed_0 = value;
	}

	inline static int32_t get_offset_of__fragment_1() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____fragment_1)); }
	inline String_t* get__fragment_1() const { return ____fragment_1; }
	inline String_t** get_address_of__fragment_1() { return &____fragment_1; }
	inline void set__fragment_1(String_t* value)
	{
		____fragment_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fragment_1), (void*)value);
	}

	inline static int32_t get_offset_of__host_2() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____host_2)); }
	inline String_t* get__host_2() const { return ____host_2; }
	inline String_t** get_address_of__host_2() { return &____host_2; }
	inline void set__host_2(String_t* value)
	{
		____host_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____host_2), (void*)value);
	}

	inline static int32_t get_offset_of__password_3() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____password_3)); }
	inline String_t* get__password_3() const { return ____password_3; }
	inline String_t** get_address_of__password_3() { return &____password_3; }
	inline void set__password_3(String_t* value)
	{
		____password_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____password_3), (void*)value);
	}

	inline static int32_t get_offset_of__path_4() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____path_4)); }
	inline String_t* get__path_4() const { return ____path_4; }
	inline String_t** get_address_of__path_4() { return &____path_4; }
	inline void set__path_4(String_t* value)
	{
		____path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____path_4), (void*)value);
	}

	inline static int32_t get_offset_of__port_5() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____port_5)); }
	inline int32_t get__port_5() const { return ____port_5; }
	inline int32_t* get_address_of__port_5() { return &____port_5; }
	inline void set__port_5(int32_t value)
	{
		____port_5 = value;
	}

	inline static int32_t get_offset_of__query_6() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____query_6)); }
	inline String_t* get__query_6() const { return ____query_6; }
	inline String_t** get_address_of__query_6() { return &____query_6; }
	inline void set__query_6(String_t* value)
	{
		____query_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____query_6), (void*)value);
	}

	inline static int32_t get_offset_of__scheme_7() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____scheme_7)); }
	inline String_t* get__scheme_7() const { return ____scheme_7; }
	inline String_t** get_address_of__scheme_7() { return &____scheme_7; }
	inline void set__scheme_7(String_t* value)
	{
		____scheme_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____scheme_7), (void*)value);
	}

	inline static int32_t get_offset_of__schemeDelimiter_8() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____schemeDelimiter_8)); }
	inline String_t* get__schemeDelimiter_8() const { return ____schemeDelimiter_8; }
	inline String_t** get_address_of__schemeDelimiter_8() { return &____schemeDelimiter_8; }
	inline void set__schemeDelimiter_8(String_t* value)
	{
		____schemeDelimiter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____schemeDelimiter_8), (void*)value);
	}

	inline static int32_t get_offset_of__uri_9() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____uri_9)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get__uri_9() const { return ____uri_9; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of__uri_9() { return &____uri_9; }
	inline void set__uri_9(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		____uri_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uri_9), (void*)value);
	}

	inline static int32_t get_offset_of__username_10() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____username_10)); }
	inline String_t* get__username_10() const { return ____username_10; }
	inline String_t** get_address_of__username_10() { return &____username_10; }
	inline void set__username_10(String_t* value)
	{
		____username_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____username_10), (void*)value);
	}
};


// Mirror.Utils
struct  Utils_t6DA12E451B11D4B672276CD9EA3C7A2053170B19  : public RuntimeObject
{
public:

public:
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

// Mirror.ClientScene/<>c
struct  U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D_StaticFields
{
public:
	// Mirror.ClientScene/<>c Mirror.ClientScene/<>c::<>9
	U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D * ___U3CU3E9_0;
	// System.Func`2<Mirror.NetworkIdentity,System.UInt32> Mirror.ClientScene/<>c::<>9__49_0
	Func_2_t4B63FD36ACD4A5DEE4166D4225917A89E13C7869 * ___U3CU3E9__49_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__49_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D_StaticFields, ___U3CU3E9__49_0_1)); }
	inline Func_2_t4B63FD36ACD4A5DEE4166D4225917A89E13C7869 * get_U3CU3E9__49_0_1() const { return ___U3CU3E9__49_0_1; }
	inline Func_2_t4B63FD36ACD4A5DEE4166D4225917A89E13C7869 ** get_address_of_U3CU3E9__49_0_1() { return &___U3CU3E9__49_0_1; }
	inline void set_U3CU3E9__49_0_1(Func_2_t4B63FD36ACD4A5DEE4166D4225917A89E13C7869 * value)
	{
		___U3CU3E9__49_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__49_0_1), (void*)value);
	}
};


// Mirror.ClientScene/<>c__DisplayClass30_0
struct  U3CU3Ec__DisplayClass30_0_tC3329C157C1207413552FA5809AC7FCD41D61514  : public RuntimeObject
{
public:
	// Mirror.SpawnDelegate Mirror.ClientScene/<>c__DisplayClass30_0::spawnHandler
	SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * ___spawnHandler_0;

public:
	inline static int32_t get_offset_of_spawnHandler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_tC3329C157C1207413552FA5809AC7FCD41D61514, ___spawnHandler_0)); }
	inline SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * get_spawnHandler_0() const { return ___spawnHandler_0; }
	inline SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E ** get_address_of_spawnHandler_0() { return &___spawnHandler_0; }
	inline void set_spawnHandler_0(SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * value)
	{
		___spawnHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnHandler_0), (void*)value);
	}
};


// Mirror.ClientScene/<>c__DisplayClass31_0
struct  U3CU3Ec__DisplayClass31_0_t149A49A0005767DDF4551E5E3D79C8205228A854  : public RuntimeObject
{
public:
	// Mirror.SpawnDelegate Mirror.ClientScene/<>c__DisplayClass31_0::spawnHandler
	SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * ___spawnHandler_0;

public:
	inline static int32_t get_offset_of_spawnHandler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t149A49A0005767DDF4551E5E3D79C8205228A854, ___spawnHandler_0)); }
	inline SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * get_spawnHandler_0() const { return ___spawnHandler_0; }
	inline SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E ** get_address_of_spawnHandler_0() { return &___spawnHandler_0; }
	inline void set_spawnHandler_0(SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * value)
	{
		___spawnHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnHandler_0), (void*)value);
	}
};


// Mirror.ClientScene/<>c__DisplayClass35_0
struct  U3CU3Ec__DisplayClass35_0_t0944B2607EBEC0A490240D3F8A4A0A30705B336E  : public RuntimeObject
{
public:
	// Mirror.SpawnDelegate Mirror.ClientScene/<>c__DisplayClass35_0::spawnHandler
	SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * ___spawnHandler_0;

public:
	inline static int32_t get_offset_of_spawnHandler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t0944B2607EBEC0A490240D3F8A4A0A30705B336E, ___spawnHandler_0)); }
	inline SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * get_spawnHandler_0() const { return ___spawnHandler_0; }
	inline SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E ** get_address_of_spawnHandler_0() { return &___spawnHandler_0; }
	inline void set_spawnHandler_0(SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * value)
	{
		___spawnHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnHandler_0), (void*)value);
	}
};


// kcp2k.KcpTransport/<>c
struct  U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_StaticFields
{
public:
	// kcp2k.KcpTransport/<>c kcp2k.KcpTransport/<>c::<>9
	U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 * ___U3CU3E9_0;
	// System.Action`1<System.String> kcp2k.KcpTransport/<>c::<>9__13_0
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3CU3E9__13_0_1;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport/<>c::<>9__35_0
	Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * ___U3CU3E9__35_0_2;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport/<>c::<>9__36_0
	Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * ___U3CU3E9__36_0_3;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport/<>c::<>9__37_0
	Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * ___U3CU3E9__37_0_4;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport/<>c::<>9__38_0
	Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * ___U3CU3E9__38_0_5;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport/<>c::<>9__39_0
	Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * ___U3CU3E9__39_0_6;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport/<>c::<>9__40_0
	Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * ___U3CU3E9__40_0_7;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_StaticFields, ___U3CU3E9__13_0_1)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3CU3E9__13_0_1() const { return ___U3CU3E9__13_0_1; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3CU3E9__13_0_1() { return &___U3CU3E9__13_0_1; }
	inline void set_U3CU3E9__13_0_1(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3CU3E9__13_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__35_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_StaticFields, ___U3CU3E9__35_0_2)); }
	inline Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * get_U3CU3E9__35_0_2() const { return ___U3CU3E9__35_0_2; }
	inline Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 ** get_address_of_U3CU3E9__35_0_2() { return &___U3CU3E9__35_0_2; }
	inline void set_U3CU3E9__35_0_2(Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * value)
	{
		___U3CU3E9__35_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__35_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_StaticFields, ___U3CU3E9__36_0_3)); }
	inline Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * get_U3CU3E9__36_0_3() const { return ___U3CU3E9__36_0_3; }
	inline Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 ** get_address_of_U3CU3E9__36_0_3() { return &___U3CU3E9__36_0_3; }
	inline void set_U3CU3E9__36_0_3(Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * value)
	{
		___U3CU3E9__36_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_StaticFields, ___U3CU3E9__37_0_4)); }
	inline Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * get_U3CU3E9__37_0_4() const { return ___U3CU3E9__37_0_4; }
	inline Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 ** get_address_of_U3CU3E9__37_0_4() { return &___U3CU3E9__37_0_4; }
	inline void set_U3CU3E9__37_0_4(Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * value)
	{
		___U3CU3E9__37_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__38_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_StaticFields, ___U3CU3E9__38_0_5)); }
	inline Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * get_U3CU3E9__38_0_5() const { return ___U3CU3E9__38_0_5; }
	inline Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 ** get_address_of_U3CU3E9__38_0_5() { return &___U3CU3E9__38_0_5; }
	inline void set_U3CU3E9__38_0_5(Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * value)
	{
		___U3CU3E9__38_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__38_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__39_0_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_StaticFields, ___U3CU3E9__39_0_6)); }
	inline Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * get_U3CU3E9__39_0_6() const { return ___U3CU3E9__39_0_6; }
	inline Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 ** get_address_of_U3CU3E9__39_0_6() { return &___U3CU3E9__39_0_6; }
	inline void set_U3CU3E9__39_0_6(Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * value)
	{
		___U3CU3E9__39_0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__39_0_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__40_0_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_StaticFields, ___U3CU3E9__40_0_7)); }
	inline Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * get_U3CU3E9__40_0_7() const { return ___U3CU3E9__40_0_7; }
	inline Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 ** get_address_of_U3CU3E9__40_0_7() { return &___U3CU3E9__40_0_7; }
	inline void set_U3CU3E9__40_0_7(Func_2_t520933D6CE91F997014E307E78A4DE76DF2B9644 * value)
	{
		___U3CU3E9__40_0_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__40_0_7), (void*)value);
	}
};


// Mirror.MultiplexTransport/<>c__DisplayClass14_0
struct  U3CU3Ec__DisplayClass14_0_t9991E2E442238C75E9E6007DC4D3D0CD5152B658  : public RuntimeObject
{
public:
	// System.Int32 Mirror.MultiplexTransport/<>c__DisplayClass14_0::locali
	int32_t ___locali_0;
	// Mirror.MultiplexTransport Mirror.MultiplexTransport/<>c__DisplayClass14_0::<>4__this
	MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_locali_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t9991E2E442238C75E9E6007DC4D3D0CD5152B658, ___locali_0)); }
	inline int32_t get_locali_0() const { return ___locali_0; }
	inline int32_t* get_address_of_locali_0() { return &___locali_0; }
	inline void set_locali_0(int32_t value)
	{
		___locali_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t9991E2E442238C75E9E6007DC4D3D0CD5152B658, ___U3CU3E4__this_1)); }
	inline MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// Mirror.NetworkClient/<>c
struct  U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3_StaticFields
{
public:
	// Mirror.NetworkClient/<>c Mirror.NetworkClient/<>c::<>9
	U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3 * ___U3CU3E9_0;
	// System.Action`2<Mirror.NetworkConnection,Mirror.NetworkPongMessage> Mirror.NetworkClient/<>c::<>9__31_0
	Action_2_t4999E6FE7BE06179C5E05415B90EF68FB9671928 * ___U3CU3E9__31_0_1;
	// System.Action`2<Mirror.NetworkConnection,Mirror.ObjectSpawnStartedMessage> Mirror.NetworkClient/<>c::<>9__31_1
	Action_2_t97EA4B5CBDFB71A8BDE27D6149F112D583B72BBD * ___U3CU3E9__31_1_2;
	// System.Action`2<Mirror.NetworkConnection,Mirror.ObjectSpawnFinishedMessage> Mirror.NetworkClient/<>c::<>9__31_2
	Action_2_t14AA2E49E3D8044FB0556732FDE97BE47496CCBE * ___U3CU3E9__31_2_3;
	// System.Action`2<Mirror.NetworkConnection,Mirror.UpdateVarsMessage> Mirror.NetworkClient/<>c::<>9__31_3
	Action_2_tAD0A88C2E9FA37737EF19897904209C4D36F122F * ___U3CU3E9__31_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3_StaticFields, ___U3CU3E9__31_0_1)); }
	inline Action_2_t4999E6FE7BE06179C5E05415B90EF68FB9671928 * get_U3CU3E9__31_0_1() const { return ___U3CU3E9__31_0_1; }
	inline Action_2_t4999E6FE7BE06179C5E05415B90EF68FB9671928 ** get_address_of_U3CU3E9__31_0_1() { return &___U3CU3E9__31_0_1; }
	inline void set_U3CU3E9__31_0_1(Action_2_t4999E6FE7BE06179C5E05415B90EF68FB9671928 * value)
	{
		___U3CU3E9__31_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3_StaticFields, ___U3CU3E9__31_1_2)); }
	inline Action_2_t97EA4B5CBDFB71A8BDE27D6149F112D583B72BBD * get_U3CU3E9__31_1_2() const { return ___U3CU3E9__31_1_2; }
	inline Action_2_t97EA4B5CBDFB71A8BDE27D6149F112D583B72BBD ** get_address_of_U3CU3E9__31_1_2() { return &___U3CU3E9__31_1_2; }
	inline void set_U3CU3E9__31_1_2(Action_2_t97EA4B5CBDFB71A8BDE27D6149F112D583B72BBD * value)
	{
		___U3CU3E9__31_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3_StaticFields, ___U3CU3E9__31_2_3)); }
	inline Action_2_t14AA2E49E3D8044FB0556732FDE97BE47496CCBE * get_U3CU3E9__31_2_3() const { return ___U3CU3E9__31_2_3; }
	inline Action_2_t14AA2E49E3D8044FB0556732FDE97BE47496CCBE ** get_address_of_U3CU3E9__31_2_3() { return &___U3CU3E9__31_2_3; }
	inline void set_U3CU3E9__31_2_3(Action_2_t14AA2E49E3D8044FB0556732FDE97BE47496CCBE * value)
	{
		___U3CU3E9__31_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3_StaticFields, ___U3CU3E9__31_3_4)); }
	inline Action_2_tAD0A88C2E9FA37737EF19897904209C4D36F122F * get_U3CU3E9__31_3_4() const { return ___U3CU3E9__31_3_4; }
	inline Action_2_tAD0A88C2E9FA37737EF19897904209C4D36F122F ** get_address_of_U3CU3E9__31_3_4() { return &___U3CU3E9__31_3_4; }
	inline void set_U3CU3E9__31_3_4(Action_2_tAD0A88C2E9FA37737EF19897904209C4D36F122F * value)
	{
		___U3CU3E9__31_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_3_4), (void*)value);
	}
};


// Mirror.NetworkConnectionToClient/Batch
struct  Batch_t8E307F02ADA1296DFCBBF39885614D64DED75DBD  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<Mirror.PooledNetworkWriter> Mirror.NetworkConnectionToClient/Batch::messages
	Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001 * ___messages_0;
	// System.Double Mirror.NetworkConnectionToClient/Batch::lastSendTime
	double ___lastSendTime_1;

public:
	inline static int32_t get_offset_of_messages_0() { return static_cast<int32_t>(offsetof(Batch_t8E307F02ADA1296DFCBBF39885614D64DED75DBD, ___messages_0)); }
	inline Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001 * get_messages_0() const { return ___messages_0; }
	inline Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001 ** get_address_of_messages_0() { return &___messages_0; }
	inline void set_messages_0(Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001 * value)
	{
		___messages_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messages_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastSendTime_1() { return static_cast<int32_t>(offsetof(Batch_t8E307F02ADA1296DFCBBF39885614D64DED75DBD, ___lastSendTime_1)); }
	inline double get_lastSendTime_1() const { return ___lastSendTime_1; }
	inline double* get_address_of_lastSendTime_1() { return &___lastSendTime_1; }
	inline void set_lastSendTime_1(double value)
	{
		___lastSendTime_1 = value;
	}
};


// Mirror.NetworkLoop/<>c__DisplayClass1_0
struct  U3CU3Ec__DisplayClass1_0_t1C570947F0AC66F5A3945996F883B9B3DAD5FEB0  : public RuntimeObject
{
public:
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction Mirror.NetworkLoop/<>c__DisplayClass1_0::function
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___function_0;

public:
	inline static int32_t get_offset_of_function_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t1C570947F0AC66F5A3945996F883B9B3DAD5FEB0, ___function_0)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_function_0() const { return ___function_0; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_function_0() { return &___function_0; }
	inline void set_function_0(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___function_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___function_0), (void*)value);
	}
};


// Mirror.NetworkManager/<>c
struct  U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0_StaticFields
{
public:
	// Mirror.NetworkManager/<>c Mirror.NetworkManager/<>c::<>9
	U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0 * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Mirror.NetworkConnectionToClient>,System.Boolean> Mirror.NetworkManager/<>c::<>9__26_0
	Func_2_t1186B7233CEE692AB7374C6620B782BD969E354C * ___U3CU3E9__26_0_1;
	// System.Func`2<UnityEngine.GameObject,System.Boolean> Mirror.NetworkManager/<>c::<>9__55_0
	Func_2_t74D96FD01772F3E8773895FC5FAA971DFBA81118 * ___U3CU3E9__55_0_2;
	// System.Func`2<UnityEngine.Transform,System.Int32> Mirror.NetworkManager/<>c::<>9__72_0
	Func_2_t09484A5DEC32B5A4F81DC50730DBBCD647D23F99 * ___U3CU3E9__72_0_3;
	// System.Predicate`1<UnityEngine.Transform> Mirror.NetworkManager/<>c::<>9__74_0
	Predicate_1_t6BCB6E6F91A3B0DDB311CB3C36CCB85A0A432136 * ___U3CU3E9__74_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__26_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0_StaticFields, ___U3CU3E9__26_0_1)); }
	inline Func_2_t1186B7233CEE692AB7374C6620B782BD969E354C * get_U3CU3E9__26_0_1() const { return ___U3CU3E9__26_0_1; }
	inline Func_2_t1186B7233CEE692AB7374C6620B782BD969E354C ** get_address_of_U3CU3E9__26_0_1() { return &___U3CU3E9__26_0_1; }
	inline void set_U3CU3E9__26_0_1(Func_2_t1186B7233CEE692AB7374C6620B782BD969E354C * value)
	{
		___U3CU3E9__26_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__26_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__55_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0_StaticFields, ___U3CU3E9__55_0_2)); }
	inline Func_2_t74D96FD01772F3E8773895FC5FAA971DFBA81118 * get_U3CU3E9__55_0_2() const { return ___U3CU3E9__55_0_2; }
	inline Func_2_t74D96FD01772F3E8773895FC5FAA971DFBA81118 ** get_address_of_U3CU3E9__55_0_2() { return &___U3CU3E9__55_0_2; }
	inline void set_U3CU3E9__55_0_2(Func_2_t74D96FD01772F3E8773895FC5FAA971DFBA81118 * value)
	{
		___U3CU3E9__55_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__55_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__72_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0_StaticFields, ___U3CU3E9__72_0_3)); }
	inline Func_2_t09484A5DEC32B5A4F81DC50730DBBCD647D23F99 * get_U3CU3E9__72_0_3() const { return ___U3CU3E9__72_0_3; }
	inline Func_2_t09484A5DEC32B5A4F81DC50730DBBCD647D23F99 ** get_address_of_U3CU3E9__72_0_3() { return &___U3CU3E9__72_0_3; }
	inline void set_U3CU3E9__72_0_3(Func_2_t09484A5DEC32B5A4F81DC50730DBBCD647D23F99 * value)
	{
		___U3CU3E9__72_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__72_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__74_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0_StaticFields, ___U3CU3E9__74_0_4)); }
	inline Predicate_1_t6BCB6E6F91A3B0DDB311CB3C36CCB85A0A432136 * get_U3CU3E9__74_0_4() const { return ___U3CU3E9__74_0_4; }
	inline Predicate_1_t6BCB6E6F91A3B0DDB311CB3C36CCB85A0A432136 ** get_address_of_U3CU3E9__74_0_4() { return &___U3CU3E9__74_0_4; }
	inline void set_U3CU3E9__74_0_4(Predicate_1_t6BCB6E6F91A3B0DDB311CB3C36CCB85A0A432136 * value)
	{
		___U3CU3E9__74_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__74_0_4), (void*)value);
	}
};


// Mirror.NetworkReaderPool/<>c
struct  U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949_StaticFields
{
public:
	// Mirror.NetworkReaderPool/<>c Mirror.NetworkReaderPool/<>c::<>9
	U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Mirror.NetworkWriterPool/<>c
struct  U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4_StaticFields
{
public:
	// Mirror.NetworkWriterPool/<>c Mirror.NetworkWriterPool/<>c::<>9
	U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Mirror.Transport/<>c
struct  U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields
{
public:
	// Mirror.Transport/<>c Mirror.Transport/<>c::<>9
	U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * ___U3CU3E9_0;
	// System.Action Mirror.Transport/<>c::<>9__32_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__32_0_1;
	// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport/<>c::<>9__32_1
	Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * ___U3CU3E9__32_1_2;
	// System.Action`1<System.Exception> Mirror.Transport/<>c::<>9__32_2
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___U3CU3E9__32_2_3;
	// System.Action Mirror.Transport/<>c::<>9__32_3
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__32_3_4;
	// System.Action`1<System.Int32> Mirror.Transport/<>c::<>9__32_4
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___U3CU3E9__32_4_5;
	// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport/<>c::<>9__32_5
	Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * ___U3CU3E9__32_5_6;
	// System.Action`2<System.Int32,System.Exception> Mirror.Transport/<>c::<>9__32_6
	Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * ___U3CU3E9__32_6_7;
	// System.Action`1<System.Int32> Mirror.Transport/<>c::<>9__32_7
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___U3CU3E9__32_7_8;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields, ___U3CU3E9__32_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__32_0_1() const { return ___U3CU3E9__32_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__32_0_1() { return &___U3CU3E9__32_0_1; }
	inline void set_U3CU3E9__32_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__32_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields, ___U3CU3E9__32_1_2)); }
	inline Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * get_U3CU3E9__32_1_2() const { return ___U3CU3E9__32_1_2; }
	inline Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC ** get_address_of_U3CU3E9__32_1_2() { return &___U3CU3E9__32_1_2; }
	inline void set_U3CU3E9__32_1_2(Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * value)
	{
		___U3CU3E9__32_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields, ___U3CU3E9__32_2_3)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_U3CU3E9__32_2_3() const { return ___U3CU3E9__32_2_3; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_U3CU3E9__32_2_3() { return &___U3CU3E9__32_2_3; }
	inline void set_U3CU3E9__32_2_3(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___U3CU3E9__32_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields, ___U3CU3E9__32_3_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__32_3_4() const { return ___U3CU3E9__32_3_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__32_3_4() { return &___U3CU3E9__32_3_4; }
	inline void set_U3CU3E9__32_3_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__32_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields, ___U3CU3E9__32_4_5)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_U3CU3E9__32_4_5() const { return ___U3CU3E9__32_4_5; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_U3CU3E9__32_4_5() { return &___U3CU3E9__32_4_5; }
	inline void set_U3CU3E9__32_4_5(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___U3CU3E9__32_4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields, ___U3CU3E9__32_5_6)); }
	inline Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * get_U3CU3E9__32_5_6() const { return ___U3CU3E9__32_5_6; }
	inline Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 ** get_address_of_U3CU3E9__32_5_6() { return &___U3CU3E9__32_5_6; }
	inline void set_U3CU3E9__32_5_6(Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * value)
	{
		___U3CU3E9__32_5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_6_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields, ___U3CU3E9__32_6_7)); }
	inline Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * get_U3CU3E9__32_6_7() const { return ___U3CU3E9__32_6_7; }
	inline Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 ** get_address_of_U3CU3E9__32_6_7() { return &___U3CU3E9__32_6_7; }
	inline void set_U3CU3E9__32_6_7(Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * value)
	{
		___U3CU3E9__32_6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_6_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_7_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields, ___U3CU3E9__32_7_8)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_U3CU3E9__32_7_8() const { return ___U3CU3E9__32_7_8; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_U3CU3E9__32_7_8() { return &___U3CU3E9__32_7_8; }
	inline void set_U3CU3E9__32_7_8(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___U3CU3E9__32_7_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_7_8), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct  ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,Mirror.NetworkConnectionToClient>
struct  KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B, ___value_1)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get_value_1() const { return ___value_1; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>
struct  UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4, ___m_InvokeArray_3)); }
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// Telepathy.Client
struct  Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929  : public Common_t25B06616A1695440B39152B4C426E18441C11E0F
{
public:
	// System.Action Telepathy.Client::OnConnected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnConnected_4;
	// System.Action`1<System.ArraySegment`1<System.Byte>> Telepathy.Client::OnData
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * ___OnData_5;
	// System.Action Telepathy.Client::OnDisconnected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDisconnected_6;
	// System.Int32 Telepathy.Client::SendQueueLimit
	int32_t ___SendQueueLimit_7;
	// System.Int32 Telepathy.Client::ReceiveQueueLimit
	int32_t ___ReceiveQueueLimit_8;
	// Telepathy.ClientConnectionState Telepathy.Client::state
	ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * ___state_9;

public:
	inline static int32_t get_offset_of_OnConnected_4() { return static_cast<int32_t>(offsetof(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929, ___OnConnected_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnConnected_4() const { return ___OnConnected_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnConnected_4() { return &___OnConnected_4; }
	inline void set_OnConnected_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnConnected_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnected_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnData_5() { return static_cast<int32_t>(offsetof(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929, ___OnData_5)); }
	inline Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * get_OnData_5() const { return ___OnData_5; }
	inline Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC ** get_address_of_OnData_5() { return &___OnData_5; }
	inline void set_OnData_5(Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * value)
	{
		___OnData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnData_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnected_6() { return static_cast<int32_t>(offsetof(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929, ___OnDisconnected_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDisconnected_6() const { return ___OnDisconnected_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDisconnected_6() { return &___OnDisconnected_6; }
	inline void set_OnDisconnected_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDisconnected_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnected_6), (void*)value);
	}

	inline static int32_t get_offset_of_SendQueueLimit_7() { return static_cast<int32_t>(offsetof(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929, ___SendQueueLimit_7)); }
	inline int32_t get_SendQueueLimit_7() const { return ___SendQueueLimit_7; }
	inline int32_t* get_address_of_SendQueueLimit_7() { return &___SendQueueLimit_7; }
	inline void set_SendQueueLimit_7(int32_t value)
	{
		___SendQueueLimit_7 = value;
	}

	inline static int32_t get_offset_of_ReceiveQueueLimit_8() { return static_cast<int32_t>(offsetof(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929, ___ReceiveQueueLimit_8)); }
	inline int32_t get_ReceiveQueueLimit_8() const { return ___ReceiveQueueLimit_8; }
	inline int32_t* get_address_of_ReceiveQueueLimit_8() { return &___ReceiveQueueLimit_8; }
	inline void set_ReceiveQueueLimit_8(int32_t value)
	{
		___ReceiveQueueLimit_8 = value;
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929, ___state_9)); }
	inline ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * get_state_9() const { return ___state_9; }
	inline ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A ** get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * value)
	{
		___state_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_9), (void*)value);
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


// UnityEngine.Color32
struct  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// Mirror.RemoteCalls.CommandInfo
struct  CommandInfo_tC5DD081D21D80AFAF88EA0134AE42897EF9D0BAE 
{
public:
	// System.Boolean Mirror.RemoteCalls.CommandInfo::requiresAuthority
	bool ___requiresAuthority_0;

public:
	inline static int32_t get_offset_of_requiresAuthority_0() { return static_cast<int32_t>(offsetof(CommandInfo_tC5DD081D21D80AFAF88EA0134AE42897EF9D0BAE, ___requiresAuthority_0)); }
	inline bool get_requiresAuthority_0() const { return ___requiresAuthority_0; }
	inline bool* get_address_of_requiresAuthority_0() { return &___requiresAuthority_0; }
	inline void set_requiresAuthority_0(bool value)
	{
		___requiresAuthority_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Mirror.RemoteCalls.CommandInfo
struct CommandInfo_tC5DD081D21D80AFAF88EA0134AE42897EF9D0BAE_marshaled_pinvoke
{
	int32_t ___requiresAuthority_0;
};
// Native definition for COM marshalling of Mirror.RemoteCalls.CommandInfo
struct CommandInfo_tC5DD081D21D80AFAF88EA0134AE42897EF9D0BAE_marshaled_com
{
	int32_t ___requiresAuthority_0;
};

// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// Mirror.NetworkConnectionToClient
struct  NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A  : public NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient/Batch> Mirror.NetworkConnectionToClient::batches
	Dictionary_2_t7F1003EE51EDA9A0C79B16D9C1AC50904C000C80 * ___batches_10;
	// System.Boolean Mirror.NetworkConnectionToClient::batching
	bool ___batching_11;
	// System.Single Mirror.NetworkConnectionToClient::batchInterval
	float ___batchInterval_12;

public:
	inline static int32_t get_offset_of_batches_10() { return static_cast<int32_t>(offsetof(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A, ___batches_10)); }
	inline Dictionary_2_t7F1003EE51EDA9A0C79B16D9C1AC50904C000C80 * get_batches_10() const { return ___batches_10; }
	inline Dictionary_2_t7F1003EE51EDA9A0C79B16D9C1AC50904C000C80 ** get_address_of_batches_10() { return &___batches_10; }
	inline void set_batches_10(Dictionary_2_t7F1003EE51EDA9A0C79B16D9C1AC50904C000C80 * value)
	{
		___batches_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___batches_10), (void*)value);
	}

	inline static int32_t get_offset_of_batching_11() { return static_cast<int32_t>(offsetof(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A, ___batching_11)); }
	inline bool get_batching_11() const { return ___batching_11; }
	inline bool* get_address_of_batching_11() { return &___batching_11; }
	inline void set_batching_11(bool value)
	{
		___batching_11 = value;
	}

	inline static int32_t get_offset_of_batchInterval_12() { return static_cast<int32_t>(offsetof(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A, ___batchInterval_12)); }
	inline float get_batchInterval_12() const { return ___batchInterval_12; }
	inline float* get_address_of_batchInterval_12() { return &___batchInterval_12; }
	inline void set_batchInterval_12(float value)
	{
		___batchInterval_12 = value;
	}
};


// Mirror.NetworkPingMessage
struct  NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396 
{
public:
	// System.Double Mirror.NetworkPingMessage::clientTime
	double ___clientTime_0;

public:
	inline static int32_t get_offset_of_clientTime_0() { return static_cast<int32_t>(offsetof(NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396, ___clientTime_0)); }
	inline double get_clientTime_0() const { return ___clientTime_0; }
	inline double* get_address_of_clientTime_0() { return &___clientTime_0; }
	inline void set_clientTime_0(double value)
	{
		___clientTime_0 = value;
	}
};


// Mirror.NetworkPongMessage
struct  NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2 
{
public:
	// System.Double Mirror.NetworkPongMessage::clientTime
	double ___clientTime_0;
	// System.Double Mirror.NetworkPongMessage::serverTime
	double ___serverTime_1;

public:
	inline static int32_t get_offset_of_clientTime_0() { return static_cast<int32_t>(offsetof(NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2, ___clientTime_0)); }
	inline double get_clientTime_0() const { return ___clientTime_0; }
	inline double* get_address_of_clientTime_0() { return &___clientTime_0; }
	inline void set_clientTime_0(double value)
	{
		___clientTime_0 = value;
	}

	inline static int32_t get_offset_of_serverTime_1() { return static_cast<int32_t>(offsetof(NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2, ___serverTime_1)); }
	inline double get_serverTime_1() const { return ___serverTime_1; }
	inline double* get_address_of_serverTime_1() { return &___serverTime_1; }
	inline void set_serverTime_1(double value)
	{
		___serverTime_1 = value;
	}
};


// Mirror.NotReadyMessage
struct  NotReadyMessage_tC37B711AF95DDBD12C8A04898AB3966BDBD7398D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NotReadyMessage_tC37B711AF95DDBD12C8A04898AB3966BDBD7398D__padding[1];
	};

public:
};


// Mirror.ObjectDestroyMessage
struct  ObjectDestroyMessage_tA991B06A64D9E787AAB3791462F563BF50C6130D 
{
public:
	// System.UInt32 Mirror.ObjectDestroyMessage::netId
	uint32_t ___netId_0;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectDestroyMessage_tA991B06A64D9E787AAB3791462F563BF50C6130D, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}
};


// Mirror.ObjectHideMessage
struct  ObjectHideMessage_tB6B01B9672314B0D65651FD275286092433892CE 
{
public:
	// System.UInt32 Mirror.ObjectHideMessage::netId
	uint32_t ___netId_0;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectHideMessage_tB6B01B9672314B0D65651FD275286092433892CE, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}
};


// Mirror.ObjectSpawnFinishedMessage
struct  ObjectSpawnFinishedMessage_t6E1E7CC5B237E736E906B7C9B335D2CAFB3C67A7 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ObjectSpawnFinishedMessage_t6E1E7CC5B237E736E906B7C9B335D2CAFB3C67A7__padding[1];
	};

public:
};


// Mirror.ObjectSpawnStartedMessage
struct  ObjectSpawnStartedMessage_tD7D009DD36048BE07917801633EDDEFC2FB19177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ObjectSpawnStartedMessage_tD7D009DD36048BE07917801633EDDEFC2FB19177__padding[1];
	};

public:
};


// Mirror.PooledNetworkWriter
struct  PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118  : public NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A
{
public:

public:
};


// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// Mirror.ReadyMessage
struct  ReadyMessage_t5AA7A133054594669567080C16DDDC1403A2A9BB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ReadyMessage_t5AA7A133054594669567080C16DDDC1403A2A9BB__padding[1];
	};

public:
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// Telepathy.Server
struct  Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2  : public Common_t25B06616A1695440B39152B4C426E18441C11E0F
{
public:
	// System.Action`1<System.Int32> Telepathy.Server::OnConnected
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnConnected_4;
	// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>> Telepathy.Server::OnData
	Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * ___OnData_5;
	// System.Action`1<System.Int32> Telepathy.Server::OnDisconnected
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnDisconnected_6;
	// System.Net.Sockets.TcpListener Telepathy.Server::listener
	TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * ___listener_7;
	// System.Threading.Thread Telepathy.Server::listenerThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___listenerThread_8;
	// System.Int32 Telepathy.Server::SendQueueLimit
	int32_t ___SendQueueLimit_9;
	// System.Int32 Telepathy.Server::ReceiveQueueLimit
	int32_t ___ReceiveQueueLimit_10;
	// Telepathy.MagnificentReceivePipe Telepathy.Server::receivePipe
	MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * ___receivePipe_11;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState> Telepathy.Server::clients
	ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * ___clients_12;
	// System.Int32 Telepathy.Server::counter
	int32_t ___counter_13;

public:
	inline static int32_t get_offset_of_OnConnected_4() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___OnConnected_4)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_OnConnected_4() const { return ___OnConnected_4; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_OnConnected_4() { return &___OnConnected_4; }
	inline void set_OnConnected_4(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___OnConnected_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnected_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnData_5() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___OnData_5)); }
	inline Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * get_OnData_5() const { return ___OnData_5; }
	inline Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 ** get_address_of_OnData_5() { return &___OnData_5; }
	inline void set_OnData_5(Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * value)
	{
		___OnData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnData_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnected_6() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___OnDisconnected_6)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_OnDisconnected_6() const { return ___OnDisconnected_6; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_OnDisconnected_6() { return &___OnDisconnected_6; }
	inline void set_OnDisconnected_6(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___OnDisconnected_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnected_6), (void*)value);
	}

	inline static int32_t get_offset_of_listener_7() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___listener_7)); }
	inline TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * get_listener_7() const { return ___listener_7; }
	inline TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B ** get_address_of_listener_7() { return &___listener_7; }
	inline void set_listener_7(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * value)
	{
		___listener_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_7), (void*)value);
	}

	inline static int32_t get_offset_of_listenerThread_8() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___listenerThread_8)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_listenerThread_8() const { return ___listenerThread_8; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_listenerThread_8() { return &___listenerThread_8; }
	inline void set_listenerThread_8(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___listenerThread_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listenerThread_8), (void*)value);
	}

	inline static int32_t get_offset_of_SendQueueLimit_9() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___SendQueueLimit_9)); }
	inline int32_t get_SendQueueLimit_9() const { return ___SendQueueLimit_9; }
	inline int32_t* get_address_of_SendQueueLimit_9() { return &___SendQueueLimit_9; }
	inline void set_SendQueueLimit_9(int32_t value)
	{
		___SendQueueLimit_9 = value;
	}

	inline static int32_t get_offset_of_ReceiveQueueLimit_10() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___ReceiveQueueLimit_10)); }
	inline int32_t get_ReceiveQueueLimit_10() const { return ___ReceiveQueueLimit_10; }
	inline int32_t* get_address_of_ReceiveQueueLimit_10() { return &___ReceiveQueueLimit_10; }
	inline void set_ReceiveQueueLimit_10(int32_t value)
	{
		___ReceiveQueueLimit_10 = value;
	}

	inline static int32_t get_offset_of_receivePipe_11() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___receivePipe_11)); }
	inline MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * get_receivePipe_11() const { return ___receivePipe_11; }
	inline MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A ** get_address_of_receivePipe_11() { return &___receivePipe_11; }
	inline void set_receivePipe_11(MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * value)
	{
		___receivePipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receivePipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_clients_12() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___clients_12)); }
	inline ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * get_clients_12() const { return ___clients_12; }
	inline ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 ** get_address_of_clients_12() { return &___clients_12; }
	inline void set_clients_12(ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * value)
	{
		___clients_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clients_12), (void*)value);
	}

	inline static int32_t get_offset_of_counter_13() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___counter_13)); }
	inline int32_t get_counter_13() const { return ___counter_13; }
	inline int32_t* get_address_of_counter_13() { return &___counter_13; }
	inline void set_counter_13(int32_t value)
	{
		___counter_13 = value;
	}
};


// Mirror.ServerAttribute
struct  ServerAttribute_tD8686EAC32E05ED828C7CA0C40D1EA85022718D4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Mirror.ServerCallbackAttribute
struct  ServerCallbackAttribute_tE7022675485DC307068230EDC6EFC5B503ACF88F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Mirror.ShowInInspectorAttribute
struct  ShowInInspectorAttribute_tCEDD39B2D6FAE1DC4D1828D468B85870F098521E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// Mirror.SyncListBool
struct  SyncListBool_t051D197E6553E4CC6B2EC36D9C1D1D17232BACC6  : public SyncList_1_t2F8F7EA24D2E33454F00D5E6F16884F5AD9C45FB
{
public:

public:
};


// Mirror.SyncListFloat
struct  SyncListFloat_t60852422D3B0551688414611FB380EEF26C71082  : public SyncList_1_tECB44CC600EBA63341578F8C15F17ED5F4FEB15A
{
public:

public:
};


// Mirror.SyncListInt
struct  SyncListInt_t904A6F00E6FEF42837AB438D17E9531980847271  : public SyncList_1_tAF42BC3F1F91CD5648A2E51A886DDE9D862AC50E
{
public:

public:
};


// Mirror.SyncListString
struct  SyncListString_tD245B6587357B3C6277E58F0F86B65E37D2AF407  : public SyncList_1_t83D785F69E2D0AAC15D1603D38FB2A0425CF61CB
{
public:

public:
};


// Mirror.SyncListUInt
struct  SyncListUInt_t4536021CB31E90B8DCBA4B21BFA1855C2122E72C  : public SyncList_1_t8D7B521C26EA72344C90ED7A42E0487DBBAE5C36
{
public:

public:
};


// Mirror.TargetRpcAttribute
struct  TargetRpcAttribute_t14D3F619D68AA6A60E49203B8EA34EBCCDCB6BC5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 Mirror.TargetRpcAttribute::channel
	int32_t ___channel_0;

public:
	inline static int32_t get_offset_of_channel_0() { return static_cast<int32_t>(offsetof(TargetRpcAttribute_t14D3F619D68AA6A60E49203B8EA34EBCCDCB6BC5, ___channel_0)); }
	inline int32_t get_channel_0() const { return ___channel_0; }
	inline int32_t* get_address_of_channel_0() { return &___channel_0; }
	inline void set_channel_0(int32_t value)
	{
		___channel_0 = value;
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
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


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// Mirror.UIntDouble
struct  UIntDouble_tD7631611195CC431544DA1D1D756CF4AD2E4A0C5 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Mirror.UIntDouble::doubleValue
			double ___doubleValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Mirror.UIntDouble::longValue
			uint64_t ___longValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___longValue_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_doubleValue_0() { return static_cast<int32_t>(offsetof(UIntDouble_tD7631611195CC431544DA1D1D756CF4AD2E4A0C5, ___doubleValue_0)); }
	inline double get_doubleValue_0() const { return ___doubleValue_0; }
	inline double* get_address_of_doubleValue_0() { return &___doubleValue_0; }
	inline void set_doubleValue_0(double value)
	{
		___doubleValue_0 = value;
	}

	inline static int32_t get_offset_of_longValue_1() { return static_cast<int32_t>(offsetof(UIntDouble_tD7631611195CC431544DA1D1D756CF4AD2E4A0C5, ___longValue_1)); }
	inline uint64_t get_longValue_1() const { return ___longValue_1; }
	inline uint64_t* get_address_of_longValue_1() { return &___longValue_1; }
	inline void set_longValue_1(uint64_t value)
	{
		___longValue_1 = value;
	}
};


// Mirror.UIntFloat
struct  UIntFloat_tA5824058E34E6601B0A9E2C4D7A3C7AEAE17EEA2 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Mirror.UIntFloat::floatValue
			float ___floatValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Mirror.UIntFloat::intValue
			uint32_t ___intValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___intValue_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_floatValue_0() { return static_cast<int32_t>(offsetof(UIntFloat_tA5824058E34E6601B0A9E2C4D7A3C7AEAE17EEA2, ___floatValue_0)); }
	inline float get_floatValue_0() const { return ___floatValue_0; }
	inline float* get_address_of_floatValue_0() { return &___floatValue_0; }
	inline void set_floatValue_0(float value)
	{
		___floatValue_0 = value;
	}

	inline static int32_t get_offset_of_intValue_1() { return static_cast<int32_t>(offsetof(UIntFloat_tA5824058E34E6601B0A9E2C4D7A3C7AEAE17EEA2, ___intValue_1)); }
	inline uint32_t get_intValue_1() const { return ___intValue_1; }
	inline uint32_t* get_address_of_intValue_1() { return &___intValue_1; }
	inline void set_intValue_1(uint32_t value)
	{
		___intValue_1 = value;
	}
};


// System.Text.UTF8Encoding
struct  UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_62;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_63;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_62() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_62)); }
	inline bool get_emitUTF8Identifier_62() const { return ___emitUTF8Identifier_62; }
	inline bool* get_address_of_emitUTF8Identifier_62() { return &___emitUTF8Identifier_62; }
	inline void set_emitUTF8Identifier_62(bool value)
	{
		___emitUTF8Identifier_62 = value;
	}

	inline static int32_t get_offset_of_isThrowException_63() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_63)); }
	inline bool get_isThrowException_63() const { return ___isThrowException_63; }
	inline bool* get_address_of_isThrowException_63() { return &___isThrowException_63; }
	inline void set_isThrowException_63(bool value)
	{
		___isThrowException_63 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3Int
struct  Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Back_10;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_One_4)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Up_5)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Down_6)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Left_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Right_8)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Right_8 = value;
	}

	inline static int32_t get_offset_of_s_Forward_9() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Forward_9)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Forward_9() const { return ___s_Forward_9; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Forward_9() { return &___s_Forward_9; }
	inline void set_s_Forward_9(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Forward_9 = value;
	}

	inline static int32_t get_offset_of_s_Back_10() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Back_10)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Back_10() const { return ___s_Back_10; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Back_10() { return &___s_Back_10; }
	inline void set_s_Back_10(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Back_10 = value;
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


// Mirror.NetworkBehaviour/NetworkBehaviourSyncVar
struct  NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F 
{
public:
	// System.UInt32 Mirror.NetworkBehaviour/NetworkBehaviourSyncVar::netId
	uint32_t ___netId_0;
	// System.Byte Mirror.NetworkBehaviour/NetworkBehaviourSyncVar::componentIndex
	uint8_t ___componentIndex_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_componentIndex_1() { return static_cast<int32_t>(offsetof(NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F, ___componentIndex_1)); }
	inline uint8_t get_componentIndex_1() const { return ___componentIndex_1; }
	inline uint8_t* get_address_of_componentIndex_1() { return &___componentIndex_1; }
	inline void set_componentIndex_1(uint8_t value)
	{
		___componentIndex_1 = value;
	}
};


// Mirror.NetworkDiagnostics/MessageInfo
struct  MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A 
{
public:
	// Mirror.NetworkMessage Mirror.NetworkDiagnostics/MessageInfo::message
	RuntimeObject* ___message_0;
	// System.Int32 Mirror.NetworkDiagnostics/MessageInfo::channel
	int32_t ___channel_1;
	// System.Int32 Mirror.NetworkDiagnostics/MessageInfo::bytes
	int32_t ___bytes_2;
	// System.Int32 Mirror.NetworkDiagnostics/MessageInfo::count
	int32_t ___count_3;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A, ___message_0)); }
	inline RuntimeObject* get_message_0() const { return ___message_0; }
	inline RuntimeObject** get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(RuntimeObject* value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_0), (void*)value);
	}

	inline static int32_t get_offset_of_channel_1() { return static_cast<int32_t>(offsetof(MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A, ___channel_1)); }
	inline int32_t get_channel_1() const { return ___channel_1; }
	inline int32_t* get_address_of_channel_1() { return &___channel_1; }
	inline void set_channel_1(int32_t value)
	{
		___channel_1 = value;
	}

	inline static int32_t get_offset_of_bytes_2() { return static_cast<int32_t>(offsetof(MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A, ___bytes_2)); }
	inline int32_t get_bytes_2() const { return ___bytes_2; }
	inline int32_t* get_address_of_bytes_2() { return &___bytes_2; }
	inline void set_bytes_2(int32_t value)
	{
		___bytes_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Mirror.NetworkDiagnostics/MessageInfo
struct MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshaled_pinvoke
{
	RuntimeObject* ___message_0;
	int32_t ___channel_1;
	int32_t ___bytes_2;
	int32_t ___count_3;
};
// Native definition for COM marshalling of Mirror.NetworkDiagnostics/MessageInfo
struct MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshaled_com
{
	RuntimeObject* ___message_0;
	int32_t ___channel_1;
	int32_t ___bytes_2;
	int32_t ___count_3;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// kcp2k.KcpState
struct  KcpState_t2ECAC779E8D62D779C237C2C5B903C70A41E416D 
{
public:
	// System.Int32 kcp2k.KcpState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KcpState_t2ECAC779E8D62D779C237C2C5B903C70A41E416D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.MirrorInvokeType
struct  MirrorInvokeType_t65A39664496DFF7951AD062967071575BE90EAB4 
{
public:
	// System.Int32 Mirror.MirrorInvokeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MirrorInvokeType_t65A39664496DFF7951AD062967071575BE90EAB4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.NetworkReader
struct  NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9  : public RuntimeObject
{
public:
	// System.ArraySegment`1<System.Byte> Mirror.NetworkReader::buffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___buffer_0;
	// System.Int32 Mirror.NetworkReader::Position
	int32_t ___Position_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9, ___buffer_0)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_buffer_0() const { return ___buffer_0; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___buffer_0))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9, ___Position_1)); }
	inline int32_t get_Position_1() const { return ___Position_1; }
	inline int32_t* get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(int32_t value)
	{
		___Position_1 = value;
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

// UnityEngine.Plane
struct  Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.LowLevel.PlayerLoopSystem
struct  PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C 
{
public:
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t * ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_subSystemList_1() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___subSystemList_1)); }
	inline PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* get_subSystemList_1() const { return ___subSystemList_1; }
	inline PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17** get_address_of_subSystemList_1() { return &___subSystemList_1; }
	inline void set_subSystemList_1(PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* value)
	{
		___subSystemList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subSystemList_1), (void*)value);
	}

	inline static int32_t get_offset_of_updateDelegate_2() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___updateDelegate_2)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_updateDelegate_2() const { return ___updateDelegate_2; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_updateDelegate_2() { return &___updateDelegate_2; }
	inline void set_updateDelegate_2(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___updateDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_updateFunction_3() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___updateFunction_3)); }
	inline intptr_t get_updateFunction_3() const { return ___updateFunction_3; }
	inline intptr_t* get_address_of_updateFunction_3() { return &___updateFunction_3; }
	inline void set_updateFunction_3(intptr_t value)
	{
		___updateFunction_3 = value;
	}

	inline static int32_t get_offset_of_loopConditionFunction_4() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___loopConditionFunction_4)); }
	inline intptr_t get_loopConditionFunction_4() const { return ___loopConditionFunction_4; }
	inline intptr_t* get_address_of_loopConditionFunction_4() { return &___loopConditionFunction_4; }
	inline void set_loopConditionFunction_4(intptr_t value)
	{
		___loopConditionFunction_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke
{
	Type_t * ___type_0;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com
{
	Type_t * ___type_0;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
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


// System.Security.Cryptography.RNGCryptoServiceProvider
struct  RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1  : public RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1, ____handle_1)); }
	inline intptr_t get__handle_1() const { return ____handle_1; }
	inline intptr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(intptr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_StaticFields, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_0), (void*)value);
	}
};


// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// Mirror.RpcMessage
struct  RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A 
{
public:
	// System.UInt32 Mirror.RpcMessage::netId
	uint32_t ___netId_0;
	// System.Int32 Mirror.RpcMessage::componentIndex
	int32_t ___componentIndex_1;
	// System.Int32 Mirror.RpcMessage::functionHash
	int32_t ___functionHash_2;
	// System.ArraySegment`1<System.Byte> Mirror.RpcMessage::payload
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_3;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_componentIndex_1() { return static_cast<int32_t>(offsetof(RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A, ___componentIndex_1)); }
	inline int32_t get_componentIndex_1() const { return ___componentIndex_1; }
	inline int32_t* get_address_of_componentIndex_1() { return &___componentIndex_1; }
	inline void set_componentIndex_1(int32_t value)
	{
		___componentIndex_1 = value;
	}

	inline static int32_t get_offset_of_functionHash_2() { return static_cast<int32_t>(offsetof(RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A, ___functionHash_2)); }
	inline int32_t get_functionHash_2() const { return ___functionHash_2; }
	inline int32_t* get_address_of_functionHash_2() { return &___functionHash_2; }
	inline void set_functionHash_2(int32_t value)
	{
		___functionHash_2 = value;
	}

	inline static int32_t get_offset_of_payload_3() { return static_cast<int32_t>(offsetof(RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A, ___payload_3)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_payload_3() const { return ___payload_3; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_payload_3() { return &___payload_3; }
	inline void set_payload_3(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___payload_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___payload_3))->____array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Mirror.RpcMessage
struct RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshaled_pinvoke
{
	uint32_t ___netId_0;
	int32_t ___componentIndex_1;
	int32_t ___functionHash_2;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_3;
};
// Native definition for COM marshalling of Mirror.RpcMessage
struct RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshaled_com
{
	uint32_t ___netId_0;
	int32_t ___componentIndex_1;
	int32_t ___functionHash_2;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_3;
};

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Mirror.SceneAttribute
struct  SceneAttribute_t320720326837991E38C31235EA75B39CBD4CAA8E  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:

public:
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


// Mirror.SpawnMessage
struct  SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A 
{
public:
	// System.UInt32 Mirror.SpawnMessage::netId
	uint32_t ___netId_0;
	// System.Boolean Mirror.SpawnMessage::isLocalPlayer
	bool ___isLocalPlayer_1;
	// System.Boolean Mirror.SpawnMessage::isOwner
	bool ___isOwner_2;
	// System.UInt64 Mirror.SpawnMessage::sceneId
	uint64_t ___sceneId_3;
	// System.Guid Mirror.SpawnMessage::assetId
	Guid_t  ___assetId_4;
	// UnityEngine.Vector3 Mirror.SpawnMessage::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_5;
	// UnityEngine.Quaternion Mirror.SpawnMessage::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_6;
	// UnityEngine.Vector3 Mirror.SpawnMessage::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_7;
	// System.ArraySegment`1<System.Byte> Mirror.SpawnMessage::payload
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_8;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_isLocalPlayer_1() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___isLocalPlayer_1)); }
	inline bool get_isLocalPlayer_1() const { return ___isLocalPlayer_1; }
	inline bool* get_address_of_isLocalPlayer_1() { return &___isLocalPlayer_1; }
	inline void set_isLocalPlayer_1(bool value)
	{
		___isLocalPlayer_1 = value;
	}

	inline static int32_t get_offset_of_isOwner_2() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___isOwner_2)); }
	inline bool get_isOwner_2() const { return ___isOwner_2; }
	inline bool* get_address_of_isOwner_2() { return &___isOwner_2; }
	inline void set_isOwner_2(bool value)
	{
		___isOwner_2 = value;
	}

	inline static int32_t get_offset_of_sceneId_3() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___sceneId_3)); }
	inline uint64_t get_sceneId_3() const { return ___sceneId_3; }
	inline uint64_t* get_address_of_sceneId_3() { return &___sceneId_3; }
	inline void set_sceneId_3(uint64_t value)
	{
		___sceneId_3 = value;
	}

	inline static int32_t get_offset_of_assetId_4() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___assetId_4)); }
	inline Guid_t  get_assetId_4() const { return ___assetId_4; }
	inline Guid_t * get_address_of_assetId_4() { return &___assetId_4; }
	inline void set_assetId_4(Guid_t  value)
	{
		___assetId_4 = value;
	}

	inline static int32_t get_offset_of_position_5() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___position_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_5() const { return ___position_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_5() { return &___position_5; }
	inline void set_position_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_5 = value;
	}

	inline static int32_t get_offset_of_rotation_6() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___rotation_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_6() const { return ___rotation_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_6() { return &___rotation_6; }
	inline void set_rotation_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_6 = value;
	}

	inline static int32_t get_offset_of_scale_7() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___scale_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_7() const { return ___scale_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_7() { return &___scale_7; }
	inline void set_scale_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_7 = value;
	}

	inline static int32_t get_offset_of_payload_8() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___payload_8)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_payload_8() const { return ___payload_8; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_payload_8() { return &___payload_8; }
	inline void set_payload_8(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___payload_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___payload_8))->____array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Mirror.SpawnMessage
struct SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshaled_pinvoke
{
	uint32_t ___netId_0;
	int32_t ___isLocalPlayer_1;
	int32_t ___isOwner_2;
	uint64_t ___sceneId_3;
	Guid_t  ___assetId_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_5;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_7;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_8;
};
// Native definition for COM marshalling of Mirror.SpawnMessage
struct SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshaled_com
{
	uint32_t ___netId_0;
	int32_t ___isLocalPlayer_1;
	int32_t ___isOwner_2;
	uint64_t ___sceneId_3;
	Guid_t  ___assetId_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_5;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_7;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_8;
};

// Mirror.SyncMode
struct  SyncMode_t01A8CEC78393EC5639637113BC865A2E829842C2 
{
public:
	// System.Int32 Mirror.SyncMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SyncMode_t01A8CEC78393EC5639637113BC865A2E829842C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.SyncVarAttribute
struct  SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String Mirror.SyncVarAttribute::hook
	String_t* ___hook_0;

public:
	inline static int32_t get_offset_of_hook_0() { return static_cast<int32_t>(offsetof(SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305, ___hook_0)); }
	inline String_t* get_hook_0() const { return ___hook_0; }
	inline String_t** get_address_of_hook_0() { return &___hook_0; }
	inline void set_hook_0(String_t* value)
	{
		___hook_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hook_0), (void*)value);
	}
};


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// Mirror.UIntDecimal
struct  UIntDecimal_tC67A3835278EF66633BC0F943E68922BDEE84DB9 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Mirror.UIntDecimal::longValue1
			uint64_t ___longValue1_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___longValue1_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___longValue2_1_OffsetPadding[8];
			// System.UInt64 Mirror.UIntDecimal::longValue2
			uint64_t ___longValue2_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___longValue2_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___longValue2_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Decimal Mirror.UIntDecimal::decimalValue
			Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___decimalValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___decimalValue_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_longValue1_0() { return static_cast<int32_t>(offsetof(UIntDecimal_tC67A3835278EF66633BC0F943E68922BDEE84DB9, ___longValue1_0)); }
	inline uint64_t get_longValue1_0() const { return ___longValue1_0; }
	inline uint64_t* get_address_of_longValue1_0() { return &___longValue1_0; }
	inline void set_longValue1_0(uint64_t value)
	{
		___longValue1_0 = value;
	}

	inline static int32_t get_offset_of_longValue2_1() { return static_cast<int32_t>(offsetof(UIntDecimal_tC67A3835278EF66633BC0F943E68922BDEE84DB9, ___longValue2_1)); }
	inline uint64_t get_longValue2_1() const { return ___longValue2_1; }
	inline uint64_t* get_address_of_longValue2_1() { return &___longValue2_1; }
	inline void set_longValue2_1(uint64_t value)
	{
		___longValue2_1 = value;
	}

	inline static int32_t get_offset_of_decimalValue_2() { return static_cast<int32_t>(offsetof(UIntDecimal_tC67A3835278EF66633BC0F943E68922BDEE84DB9, ___decimalValue_2)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_decimalValue_2() const { return ___decimalValue_2; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_decimalValue_2() { return &___decimalValue_2; }
	inline void set_decimalValue_2(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___decimalValue_2 = value;
	}
};


// Mirror.UnityEventNetworkConnection
struct  UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB  : public UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4
{
public:

public:
};


// Mirror.UpdateVarsMessage
struct  UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1 
{
public:
	// System.UInt32 Mirror.UpdateVarsMessage::netId
	uint32_t ___netId_0;
	// System.ArraySegment`1<System.Byte> Mirror.UpdateVarsMessage::payload
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_payload_1() { return static_cast<int32_t>(offsetof(UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1, ___payload_1)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_payload_1() const { return ___payload_1; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_payload_1() { return &___payload_1; }
	inline void set_payload_1(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___payload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___payload_1))->____array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Mirror.UpdateVarsMessage
struct UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshaled_pinvoke
{
	uint32_t ___netId_0;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_1;
};
// Native definition for COM marshalling of Mirror.UpdateVarsMessage
struct UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshaled_com
{
	uint32_t ___netId_0;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_1;
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


// Mirror.Version
struct  Version_t6920CA5BD31E7BFBD303CE43CE882516877126C8 
{
public:
	// System.Int32 Mirror.Version::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Version_t6920CA5BD31E7BFBD303CE43CE882516877126C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.Visibility
struct  Visibility_tCFB30738FC0DA69F05112777E1A9FB99E92DD1B9 
{
public:
	// System.Int32 Mirror.Visibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Visibility_tCFB30738FC0DA69F05112777E1A9FB99E92DD1B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.NetworkLoop/AddMode
struct  AddMode_t65751EF6DB98BF34E757838DC738F8238772EF0F 
{
public:
	// System.Int32 Mirror.NetworkLoop/AddMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddMode_t65751EF6DB98BF34E757838DC738F8238772EF0F, ___value___2)); }
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


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Mirror.RemoteCalls.Invoker
struct  Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806  : public RuntimeObject
{
public:
	// System.Type Mirror.RemoteCalls.Invoker::invokeClass
	Type_t * ___invokeClass_0;
	// Mirror.MirrorInvokeType Mirror.RemoteCalls.Invoker::invokeType
	int32_t ___invokeType_1;
	// Mirror.RemoteCalls.CmdDelegate Mirror.RemoteCalls.Invoker::invokeFunction
	CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * ___invokeFunction_2;
	// System.Boolean Mirror.RemoteCalls.Invoker::cmdRequiresAuthority
	bool ___cmdRequiresAuthority_3;

public:
	inline static int32_t get_offset_of_invokeClass_0() { return static_cast<int32_t>(offsetof(Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806, ___invokeClass_0)); }
	inline Type_t * get_invokeClass_0() const { return ___invokeClass_0; }
	inline Type_t ** get_address_of_invokeClass_0() { return &___invokeClass_0; }
	inline void set_invokeClass_0(Type_t * value)
	{
		___invokeClass_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invokeClass_0), (void*)value);
	}

	inline static int32_t get_offset_of_invokeType_1() { return static_cast<int32_t>(offsetof(Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806, ___invokeType_1)); }
	inline int32_t get_invokeType_1() const { return ___invokeType_1; }
	inline int32_t* get_address_of_invokeType_1() { return &___invokeType_1; }
	inline void set_invokeType_1(int32_t value)
	{
		___invokeType_1 = value;
	}

	inline static int32_t get_offset_of_invokeFunction_2() { return static_cast<int32_t>(offsetof(Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806, ___invokeFunction_2)); }
	inline CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * get_invokeFunction_2() const { return ___invokeFunction_2; }
	inline CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF ** get_address_of_invokeFunction_2() { return &___invokeFunction_2; }
	inline void set_invokeFunction_2(CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * value)
	{
		___invokeFunction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invokeFunction_2), (void*)value);
	}

	inline static int32_t get_offset_of_cmdRequiresAuthority_3() { return static_cast<int32_t>(offsetof(Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806, ___cmdRequiresAuthority_3)); }
	inline bool get_cmdRequiresAuthority_3() const { return ___cmdRequiresAuthority_3; }
	inline bool* get_address_of_cmdRequiresAuthority_3() { return &___cmdRequiresAuthority_3; }
	inline void set_cmdRequiresAuthority_3(bool value)
	{
		___cmdRequiresAuthority_3 = value;
	}
};


// kcp2k.KcpConnection
struct  KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket kcp2k.KcpConnection::socket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket_0;
	// System.Net.EndPoint kcp2k.KcpConnection::remoteEndpoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEndpoint_1;
	// kcp2k.Kcp kcp2k.KcpConnection::kcp
	Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * ___kcp_2;
	// kcp2k.KcpState kcp2k.KcpConnection::state
	int32_t ___state_3;
	// System.Action kcp2k.KcpConnection::OnAuthenticated
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnAuthenticated_4;
	// System.Action`1<System.ArraySegment`1<System.Byte>> kcp2k.KcpConnection::OnData
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * ___OnData_5;
	// System.Action kcp2k.KcpConnection::OnDisconnected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDisconnected_6;
	// System.Boolean kcp2k.KcpConnection::paused
	bool ___paused_7;
	// System.UInt32 kcp2k.KcpConnection::lastReceiveTime
	uint32_t ___lastReceiveTime_9;
	// System.Diagnostics.Stopwatch kcp2k.KcpConnection::refTime
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___refTime_10;
	// System.Byte[] kcp2k.KcpConnection::kcpMessageBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___kcpMessageBuffer_14;
	// System.Byte[] kcp2k.KcpConnection::kcpSendBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___kcpSendBuffer_15;
	// System.Byte[] kcp2k.KcpConnection::rawSendBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___rawSendBuffer_16;
	// System.UInt32 kcp2k.KcpConnection::lastPingTime
	uint32_t ___lastPingTime_18;

public:
	inline static int32_t get_offset_of_socket_0() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___socket_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_socket_0() const { return ___socket_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_socket_0() { return &___socket_0; }
	inline void set_socket_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___socket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndpoint_1() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___remoteEndpoint_1)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_remoteEndpoint_1() const { return ___remoteEndpoint_1; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_remoteEndpoint_1() { return &___remoteEndpoint_1; }
	inline void set_remoteEndpoint_1(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___remoteEndpoint_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndpoint_1), (void*)value);
	}

	inline static int32_t get_offset_of_kcp_2() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___kcp_2)); }
	inline Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * get_kcp_2() const { return ___kcp_2; }
	inline Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F ** get_address_of_kcp_2() { return &___kcp_2; }
	inline void set_kcp_2(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * value)
	{
		___kcp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kcp_2), (void*)value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}

	inline static int32_t get_offset_of_OnAuthenticated_4() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___OnAuthenticated_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnAuthenticated_4() const { return ___OnAuthenticated_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnAuthenticated_4() { return &___OnAuthenticated_4; }
	inline void set_OnAuthenticated_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnAuthenticated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAuthenticated_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnData_5() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___OnData_5)); }
	inline Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * get_OnData_5() const { return ___OnData_5; }
	inline Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC ** get_address_of_OnData_5() { return &___OnData_5; }
	inline void set_OnData_5(Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * value)
	{
		___OnData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnData_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnected_6() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___OnDisconnected_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDisconnected_6() const { return ___OnDisconnected_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDisconnected_6() { return &___OnDisconnected_6; }
	inline void set_OnDisconnected_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDisconnected_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnected_6), (void*)value);
	}

	inline static int32_t get_offset_of_paused_7() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___paused_7)); }
	inline bool get_paused_7() const { return ___paused_7; }
	inline bool* get_address_of_paused_7() { return &___paused_7; }
	inline void set_paused_7(bool value)
	{
		___paused_7 = value;
	}

	inline static int32_t get_offset_of_lastReceiveTime_9() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___lastReceiveTime_9)); }
	inline uint32_t get_lastReceiveTime_9() const { return ___lastReceiveTime_9; }
	inline uint32_t* get_address_of_lastReceiveTime_9() { return &___lastReceiveTime_9; }
	inline void set_lastReceiveTime_9(uint32_t value)
	{
		___lastReceiveTime_9 = value;
	}

	inline static int32_t get_offset_of_refTime_10() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___refTime_10)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_refTime_10() const { return ___refTime_10; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_refTime_10() { return &___refTime_10; }
	inline void set_refTime_10(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___refTime_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refTime_10), (void*)value);
	}

	inline static int32_t get_offset_of_kcpMessageBuffer_14() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___kcpMessageBuffer_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_kcpMessageBuffer_14() const { return ___kcpMessageBuffer_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_kcpMessageBuffer_14() { return &___kcpMessageBuffer_14; }
	inline void set_kcpMessageBuffer_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___kcpMessageBuffer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kcpMessageBuffer_14), (void*)value);
	}

	inline static int32_t get_offset_of_kcpSendBuffer_15() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___kcpSendBuffer_15)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_kcpSendBuffer_15() const { return ___kcpSendBuffer_15; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_kcpSendBuffer_15() { return &___kcpSendBuffer_15; }
	inline void set_kcpSendBuffer_15(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___kcpSendBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kcpSendBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_rawSendBuffer_16() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___rawSendBuffer_16)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_rawSendBuffer_16() const { return ___rawSendBuffer_16; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_rawSendBuffer_16() { return &___rawSendBuffer_16; }
	inline void set_rawSendBuffer_16(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___rawSendBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawSendBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of_lastPingTime_18() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___lastPingTime_18)); }
	inline uint32_t get_lastPingTime_18() const { return ___lastPingTime_18; }
	inline uint32_t* get_address_of_lastPingTime_18() { return &___lastPingTime_18; }
	inline void set_lastPingTime_18(uint32_t value)
	{
		___lastPingTime_18 = value;
	}
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

// Mirror.PooledNetworkReader
struct  PooledNetworkReader_tD428721C991DFC38A2922BC2940E1816F0C6824C  : public NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9
{
public:

public:
};


// Mirror.SceneMessage
struct  SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE 
{
public:
	// System.String Mirror.SceneMessage::sceneName
	String_t* ___sceneName_0;
	// Mirror.SceneOperation Mirror.SceneMessage::sceneOperation
	uint8_t ___sceneOperation_1;
	// System.Boolean Mirror.SceneMessage::customHandling
	bool ___customHandling_2;

public:
	inline static int32_t get_offset_of_sceneName_0() { return static_cast<int32_t>(offsetof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE, ___sceneName_0)); }
	inline String_t* get_sceneName_0() const { return ___sceneName_0; }
	inline String_t** get_address_of_sceneName_0() { return &___sceneName_0; }
	inline void set_sceneName_0(String_t* value)
	{
		___sceneName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_0), (void*)value);
	}

	inline static int32_t get_offset_of_sceneOperation_1() { return static_cast<int32_t>(offsetof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE, ___sceneOperation_1)); }
	inline uint8_t get_sceneOperation_1() const { return ___sceneOperation_1; }
	inline uint8_t* get_address_of_sceneOperation_1() { return &___sceneOperation_1; }
	inline void set_sceneOperation_1(uint8_t value)
	{
		___sceneOperation_1 = value;
	}

	inline static int32_t get_offset_of_customHandling_2() { return static_cast<int32_t>(offsetof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE, ___customHandling_2)); }
	inline bool get_customHandling_2() const { return ___customHandling_2; }
	inline bool* get_address_of_customHandling_2() { return &___customHandling_2; }
	inline void set_customHandling_2(bool value)
	{
		___customHandling_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mirror.SceneMessage
struct SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshaled_pinvoke
{
	char* ___sceneName_0;
	uint8_t ___sceneOperation_1;
	int32_t ___customHandling_2;
};
// Native definition for COM marshalling of Mirror.SceneMessage
struct SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshaled_com
{
	Il2CppChar* ___sceneName_0;
	uint8_t ___sceneOperation_1;
	int32_t ___customHandling_2;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
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


// System.Action`1<System.ArraySegment`1<System.Byte>>
struct  Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Exception>
struct  Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Int32>
struct  Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct  Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>
struct  Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>
struct  Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Int32,System.Exception>
struct  Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>
struct  Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct  Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Mirror.PooledNetworkWriter>
struct  Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950  : public MulticastDelegate_t
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


// Mirror.RemoteCalls.CmdDelegate
struct  CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.InteropServices.ExternalException
struct  ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// kcp2k.KcpServerConnection
struct  KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5  : public KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Mirror.SpawnDelegate
struct  SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E  : public MulticastDelegate_t
{
public:

public:
};


// Mirror.SpawnHandlerDelegate
struct  SpawnHandlerDelegate_t841F48F47475ACF69DD6039DC6BD7D1897FB0007  : public MulticastDelegate_t
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


// Mirror.UnSpawnDelegate
struct  UnSpawnDelegate_tE6B7286FD960C7A2C80DB84A19FCF44BEB2CE6AC  : public MulticastDelegate_t
{
public:

public:
};


// Mirror.ClientScene/LocalplayerChanged
struct  LocalplayerChanged_t153CFBEB17900932F679C9861C613D6FD98F7942  : public MulticastDelegate_t
{
public:

public:
};


// Mirror.NetworkIdentity/ClientAuthorityCallback
struct  ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct  UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA  : public MulticastDelegate_t
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


// System.ComponentModel.Win32Exception
struct  Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950  : public ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// Mirror.NetworkBehaviour
struct  NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Mirror.NetworkBehaviour::lastSyncTime
	float ___lastSyncTime_4;
	// Mirror.SyncMode Mirror.NetworkBehaviour::syncMode
	int32_t ___syncMode_5;
	// System.Single Mirror.NetworkBehaviour::syncInterval
	float ___syncInterval_6;
	// System.UInt64 Mirror.NetworkBehaviour::<syncVarDirtyBits>k__BackingField
	uint64_t ___U3CsyncVarDirtyBitsU3Ek__BackingField_7;
	// System.UInt64 Mirror.NetworkBehaviour::syncVarHookGuard
	uint64_t ___syncVarHookGuard_8;
	// System.Collections.Generic.List`1<Mirror.SyncObject> Mirror.NetworkBehaviour::syncObjects
	List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 * ___syncObjects_9;
	// Mirror.NetworkIdentity Mirror.NetworkBehaviour::netIdentityCache
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___netIdentityCache_10;

public:
	inline static int32_t get_offset_of_lastSyncTime_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___lastSyncTime_4)); }
	inline float get_lastSyncTime_4() const { return ___lastSyncTime_4; }
	inline float* get_address_of_lastSyncTime_4() { return &___lastSyncTime_4; }
	inline void set_lastSyncTime_4(float value)
	{
		___lastSyncTime_4 = value;
	}

	inline static int32_t get_offset_of_syncMode_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncMode_5)); }
	inline int32_t get_syncMode_5() const { return ___syncMode_5; }
	inline int32_t* get_address_of_syncMode_5() { return &___syncMode_5; }
	inline void set_syncMode_5(int32_t value)
	{
		___syncMode_5 = value;
	}

	inline static int32_t get_offset_of_syncInterval_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncInterval_6)); }
	inline float get_syncInterval_6() const { return ___syncInterval_6; }
	inline float* get_address_of_syncInterval_6() { return &___syncInterval_6; }
	inline void set_syncInterval_6(float value)
	{
		___syncInterval_6 = value;
	}

	inline static int32_t get_offset_of_U3CsyncVarDirtyBitsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___U3CsyncVarDirtyBitsU3Ek__BackingField_7)); }
	inline uint64_t get_U3CsyncVarDirtyBitsU3Ek__BackingField_7() const { return ___U3CsyncVarDirtyBitsU3Ek__BackingField_7; }
	inline uint64_t* get_address_of_U3CsyncVarDirtyBitsU3Ek__BackingField_7() { return &___U3CsyncVarDirtyBitsU3Ek__BackingField_7; }
	inline void set_U3CsyncVarDirtyBitsU3Ek__BackingField_7(uint64_t value)
	{
		___U3CsyncVarDirtyBitsU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_syncVarHookGuard_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncVarHookGuard_8)); }
	inline uint64_t get_syncVarHookGuard_8() const { return ___syncVarHookGuard_8; }
	inline uint64_t* get_address_of_syncVarHookGuard_8() { return &___syncVarHookGuard_8; }
	inline void set_syncVarHookGuard_8(uint64_t value)
	{
		___syncVarHookGuard_8 = value;
	}

	inline static int32_t get_offset_of_syncObjects_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncObjects_9)); }
	inline List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 * get_syncObjects_9() const { return ___syncObjects_9; }
	inline List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 ** get_address_of_syncObjects_9() { return &___syncObjects_9; }
	inline void set_syncObjects_9(List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 * value)
	{
		___syncObjects_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncObjects_9), (void*)value);
	}

	inline static int32_t get_offset_of_netIdentityCache_10() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___netIdentityCache_10)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_netIdentityCache_10() const { return ___netIdentityCache_10; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_netIdentityCache_10() { return &___netIdentityCache_10; }
	inline void set_netIdentityCache_10(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___netIdentityCache_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___netIdentityCache_10), (void*)value);
	}
};


// Mirror.NetworkIdentity
struct  NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Mirror.NetworkBehaviour[] Mirror.NetworkIdentity::networkBehavioursCache
	NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* ___networkBehavioursCache_4;
	// System.Boolean Mirror.NetworkIdentity::<isClient>k__BackingField
	bool ___U3CisClientU3Ek__BackingField_5;
	// System.Boolean Mirror.NetworkIdentity::<isServer>k__BackingField
	bool ___U3CisServerU3Ek__BackingField_6;
	// System.Boolean Mirror.NetworkIdentity::<hasAuthority>k__BackingField
	bool ___U3ChasAuthorityU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnection> Mirror.NetworkIdentity::observers
	Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59 * ___observers_8;
	// System.UInt32 Mirror.NetworkIdentity::<netId>k__BackingField
	uint32_t ___U3CnetIdU3Ek__BackingField_9;
	// System.UInt64 Mirror.NetworkIdentity::sceneId
	uint64_t ___sceneId_10;
	// System.Boolean Mirror.NetworkIdentity::serverOnly
	bool ___serverOnly_11;
	// System.Boolean Mirror.NetworkIdentity::destroyCalled
	bool ___destroyCalled_12;
	// Mirror.NetworkConnection Mirror.NetworkIdentity::<connectionToServer>k__BackingField
	NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___U3CconnectionToServerU3Ek__BackingField_13;
	// Mirror.NetworkConnectionToClient Mirror.NetworkIdentity::_connectionToClient
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ____connectionToClient_14;
	// Mirror.NetworkBehaviour[] Mirror.NetworkIdentity::_NetworkBehaviours
	NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* ____NetworkBehaviours_16;
	// Mirror.NetworkVisibility Mirror.NetworkIdentity::visibilityCache
	NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 * ___visibilityCache_17;
	// Mirror.Visibility Mirror.NetworkIdentity::visible
	int32_t ___visible_18;
	// System.String Mirror.NetworkIdentity::m_AssetId
	String_t* ___m_AssetId_19;
	// System.Boolean Mirror.NetworkIdentity::hasSpawned
	bool ___hasSpawned_23;
	// System.Boolean Mirror.NetworkIdentity::<SpawnedFromInstantiate>k__BackingField
	bool ___U3CSpawnedFromInstantiateU3Ek__BackingField_24;
	// System.Boolean Mirror.NetworkIdentity::clientStarted
	bool ___clientStarted_25;
	// System.Boolean Mirror.NetworkIdentity::hadAuthority
	bool ___hadAuthority_27;

public:
	inline static int32_t get_offset_of_networkBehavioursCache_4() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___networkBehavioursCache_4)); }
	inline NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* get_networkBehavioursCache_4() const { return ___networkBehavioursCache_4; }
	inline NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC** get_address_of_networkBehavioursCache_4() { return &___networkBehavioursCache_4; }
	inline void set_networkBehavioursCache_4(NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* value)
	{
		___networkBehavioursCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkBehavioursCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisClientU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CisClientU3Ek__BackingField_5)); }
	inline bool get_U3CisClientU3Ek__BackingField_5() const { return ___U3CisClientU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CisClientU3Ek__BackingField_5() { return &___U3CisClientU3Ek__BackingField_5; }
	inline void set_U3CisClientU3Ek__BackingField_5(bool value)
	{
		___U3CisClientU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CisServerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CisServerU3Ek__BackingField_6)); }
	inline bool get_U3CisServerU3Ek__BackingField_6() const { return ___U3CisServerU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CisServerU3Ek__BackingField_6() { return &___U3CisServerU3Ek__BackingField_6; }
	inline void set_U3CisServerU3Ek__BackingField_6(bool value)
	{
		___U3CisServerU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3ChasAuthorityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3ChasAuthorityU3Ek__BackingField_7)); }
	inline bool get_U3ChasAuthorityU3Ek__BackingField_7() const { return ___U3ChasAuthorityU3Ek__BackingField_7; }
	inline bool* get_address_of_U3ChasAuthorityU3Ek__BackingField_7() { return &___U3ChasAuthorityU3Ek__BackingField_7; }
	inline void set_U3ChasAuthorityU3Ek__BackingField_7(bool value)
	{
		___U3ChasAuthorityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_observers_8() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___observers_8)); }
	inline Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59 * get_observers_8() const { return ___observers_8; }
	inline Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59 ** get_address_of_observers_8() { return &___observers_8; }
	inline void set_observers_8(Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59 * value)
	{
		___observers_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observers_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnetIdU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CnetIdU3Ek__BackingField_9)); }
	inline uint32_t get_U3CnetIdU3Ek__BackingField_9() const { return ___U3CnetIdU3Ek__BackingField_9; }
	inline uint32_t* get_address_of_U3CnetIdU3Ek__BackingField_9() { return &___U3CnetIdU3Ek__BackingField_9; }
	inline void set_U3CnetIdU3Ek__BackingField_9(uint32_t value)
	{
		___U3CnetIdU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_sceneId_10() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___sceneId_10)); }
	inline uint64_t get_sceneId_10() const { return ___sceneId_10; }
	inline uint64_t* get_address_of_sceneId_10() { return &___sceneId_10; }
	inline void set_sceneId_10(uint64_t value)
	{
		___sceneId_10 = value;
	}

	inline static int32_t get_offset_of_serverOnly_11() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___serverOnly_11)); }
	inline bool get_serverOnly_11() const { return ___serverOnly_11; }
	inline bool* get_address_of_serverOnly_11() { return &___serverOnly_11; }
	inline void set_serverOnly_11(bool value)
	{
		___serverOnly_11 = value;
	}

	inline static int32_t get_offset_of_destroyCalled_12() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___destroyCalled_12)); }
	inline bool get_destroyCalled_12() const { return ___destroyCalled_12; }
	inline bool* get_address_of_destroyCalled_12() { return &___destroyCalled_12; }
	inline void set_destroyCalled_12(bool value)
	{
		___destroyCalled_12 = value;
	}

	inline static int32_t get_offset_of_U3CconnectionToServerU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CconnectionToServerU3Ek__BackingField_13)); }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * get_U3CconnectionToServerU3Ek__BackingField_13() const { return ___U3CconnectionToServerU3Ek__BackingField_13; }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 ** get_address_of_U3CconnectionToServerU3Ek__BackingField_13() { return &___U3CconnectionToServerU3Ek__BackingField_13; }
	inline void set_U3CconnectionToServerU3Ek__BackingField_13(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * value)
	{
		___U3CconnectionToServerU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconnectionToServerU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of__connectionToClient_14() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ____connectionToClient_14)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get__connectionToClient_14() const { return ____connectionToClient_14; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of__connectionToClient_14() { return &____connectionToClient_14; }
	inline void set__connectionToClient_14(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		____connectionToClient_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionToClient_14), (void*)value);
	}

	inline static int32_t get_offset_of__NetworkBehaviours_16() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ____NetworkBehaviours_16)); }
	inline NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* get__NetworkBehaviours_16() const { return ____NetworkBehaviours_16; }
	inline NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC** get_address_of__NetworkBehaviours_16() { return &____NetworkBehaviours_16; }
	inline void set__NetworkBehaviours_16(NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* value)
	{
		____NetworkBehaviours_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NetworkBehaviours_16), (void*)value);
	}

	inline static int32_t get_offset_of_visibilityCache_17() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___visibilityCache_17)); }
	inline NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 * get_visibilityCache_17() const { return ___visibilityCache_17; }
	inline NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 ** get_address_of_visibilityCache_17() { return &___visibilityCache_17; }
	inline void set_visibilityCache_17(NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 * value)
	{
		___visibilityCache_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibilityCache_17), (void*)value);
	}

	inline static int32_t get_offset_of_visible_18() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___visible_18)); }
	inline int32_t get_visible_18() const { return ___visible_18; }
	inline int32_t* get_address_of_visible_18() { return &___visible_18; }
	inline void set_visible_18(int32_t value)
	{
		___visible_18 = value;
	}

	inline static int32_t get_offset_of_m_AssetId_19() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___m_AssetId_19)); }
	inline String_t* get_m_AssetId_19() const { return ___m_AssetId_19; }
	inline String_t** get_address_of_m_AssetId_19() { return &___m_AssetId_19; }
	inline void set_m_AssetId_19(String_t* value)
	{
		___m_AssetId_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AssetId_19), (void*)value);
	}

	inline static int32_t get_offset_of_hasSpawned_23() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___hasSpawned_23)); }
	inline bool get_hasSpawned_23() const { return ___hasSpawned_23; }
	inline bool* get_address_of_hasSpawned_23() { return &___hasSpawned_23; }
	inline void set_hasSpawned_23(bool value)
	{
		___hasSpawned_23 = value;
	}

	inline static int32_t get_offset_of_U3CSpawnedFromInstantiateU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CSpawnedFromInstantiateU3Ek__BackingField_24)); }
	inline bool get_U3CSpawnedFromInstantiateU3Ek__BackingField_24() const { return ___U3CSpawnedFromInstantiateU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CSpawnedFromInstantiateU3Ek__BackingField_24() { return &___U3CSpawnedFromInstantiateU3Ek__BackingField_24; }
	inline void set_U3CSpawnedFromInstantiateU3Ek__BackingField_24(bool value)
	{
		___U3CSpawnedFromInstantiateU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_clientStarted_25() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___clientStarted_25)); }
	inline bool get_clientStarted_25() const { return ___clientStarted_25; }
	inline bool* get_address_of_clientStarted_25() { return &___clientStarted_25; }
	inline void set_clientStarted_25(bool value)
	{
		___clientStarted_25 = value;
	}

	inline static int32_t get_offset_of_hadAuthority_27() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___hadAuthority_27)); }
	inline bool get_hadAuthority_27() const { return ___hadAuthority_27; }
	inline bool* get_address_of_hadAuthority_27() { return &___hadAuthority_27; }
	inline void set_hadAuthority_27(bool value)
	{
		___hadAuthority_27 = value;
	}
};

struct NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity> Mirror.NetworkIdentity::spawned
	Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * ___spawned_15;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Mirror.NetworkIdentity> Mirror.NetworkIdentity::sceneIds
	Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * ___sceneIds_20;
	// System.UInt32 Mirror.NetworkIdentity::nextNetworkId
	uint32_t ___nextNetworkId_21;
	// Mirror.NetworkIdentity/ClientAuthorityCallback Mirror.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * ___clientAuthorityCallback_22;
	// Mirror.NetworkIdentity Mirror.NetworkIdentity::previousLocalPlayer
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___previousLocalPlayer_26;

public:
	inline static int32_t get_offset_of_spawned_15() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___spawned_15)); }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * get_spawned_15() const { return ___spawned_15; }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 ** get_address_of_spawned_15() { return &___spawned_15; }
	inline void set_spawned_15(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * value)
	{
		___spawned_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawned_15), (void*)value);
	}

	inline static int32_t get_offset_of_sceneIds_20() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___sceneIds_20)); }
	inline Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * get_sceneIds_20() const { return ___sceneIds_20; }
	inline Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C ** get_address_of_sceneIds_20() { return &___sceneIds_20; }
	inline void set_sceneIds_20(Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * value)
	{
		___sceneIds_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneIds_20), (void*)value);
	}

	inline static int32_t get_offset_of_nextNetworkId_21() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___nextNetworkId_21)); }
	inline uint32_t get_nextNetworkId_21() const { return ___nextNetworkId_21; }
	inline uint32_t* get_address_of_nextNetworkId_21() { return &___nextNetworkId_21; }
	inline void set_nextNetworkId_21(uint32_t value)
	{
		___nextNetworkId_21 = value;
	}

	inline static int32_t get_offset_of_clientAuthorityCallback_22() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___clientAuthorityCallback_22)); }
	inline ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * get_clientAuthorityCallback_22() const { return ___clientAuthorityCallback_22; }
	inline ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 ** get_address_of_clientAuthorityCallback_22() { return &___clientAuthorityCallback_22; }
	inline void set_clientAuthorityCallback_22(ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * value)
	{
		___clientAuthorityCallback_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientAuthorityCallback_22), (void*)value);
	}

	inline static int32_t get_offset_of_previousLocalPlayer_26() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___previousLocalPlayer_26)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_previousLocalPlayer_26() const { return ___previousLocalPlayer_26; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_previousLocalPlayer_26() { return &___previousLocalPlayer_26; }
	inline void set_previousLocalPlayer_26(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___previousLocalPlayer_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousLocalPlayer_26), (void*)value);
	}
};


// Mirror.NetworkStartPosition
struct  NetworkStartPosition_tA32E90C11E6234E04155AA8DD67FBC804541D465  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// System.Net.Sockets.SocketException
struct  SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88  : public Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88, ___m_EndPoint_20)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
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


// Mirror.MultiplexTransport
struct  MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12  : public Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D
{
public:
	// Mirror.Transport[] Mirror.MultiplexTransport::transports
	TransportU5BU5D_t31BE7938608B9FEC8D06AC70431F129A2902D772* ___transports_13;
	// Mirror.Transport Mirror.MultiplexTransport::available
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * ___available_14;

public:
	inline static int32_t get_offset_of_transports_13() { return static_cast<int32_t>(offsetof(MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12, ___transports_13)); }
	inline TransportU5BU5D_t31BE7938608B9FEC8D06AC70431F129A2902D772* get_transports_13() const { return ___transports_13; }
	inline TransportU5BU5D_t31BE7938608B9FEC8D06AC70431F129A2902D772** get_address_of_transports_13() { return &___transports_13; }
	inline void set_transports_13(TransportU5BU5D_t31BE7938608B9FEC8D06AC70431F129A2902D772* value)
	{
		___transports_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transports_13), (void*)value);
	}

	inline static int32_t get_offset_of_available_14() { return static_cast<int32_t>(offsetof(MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12, ___available_14)); }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * get_available_14() const { return ___available_14; }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D ** get_address_of_available_14() { return &___available_14; }
	inline void set_available_14(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * value)
	{
		___available_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___available_14), (void*)value);
	}
};


// Mirror.NetworkVisibility
struct  NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:

public:
};


// Mirror.TelepathyTransport
struct  TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A  : public Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D
{
public:
	// System.UInt16 Mirror.TelepathyTransport::port
	uint16_t ___port_14;
	// System.Boolean Mirror.TelepathyTransport::NoDelay
	bool ___NoDelay_15;
	// System.Int32 Mirror.TelepathyTransport::SendTimeout
	int32_t ___SendTimeout_16;
	// System.Int32 Mirror.TelepathyTransport::ReceiveTimeout
	int32_t ___ReceiveTimeout_17;
	// System.Int32 Mirror.TelepathyTransport::serverMaxMessageSize
	int32_t ___serverMaxMessageSize_18;
	// System.Int32 Mirror.TelepathyTransport::serverMaxReceivesPerTick
	int32_t ___serverMaxReceivesPerTick_19;
	// System.Int32 Mirror.TelepathyTransport::serverSendQueueLimitPerConnection
	int32_t ___serverSendQueueLimitPerConnection_20;
	// System.Int32 Mirror.TelepathyTransport::serverReceiveQueueLimitPerConnection
	int32_t ___serverReceiveQueueLimitPerConnection_21;
	// System.Int32 Mirror.TelepathyTransport::clientMaxMessageSize
	int32_t ___clientMaxMessageSize_22;
	// System.Int32 Mirror.TelepathyTransport::clientMaxReceivesPerTick
	int32_t ___clientMaxReceivesPerTick_23;
	// System.Int32 Mirror.TelepathyTransport::clientSendQueueLimit
	int32_t ___clientSendQueueLimit_24;
	// System.Int32 Mirror.TelepathyTransport::clientReceiveQueueLimit
	int32_t ___clientReceiveQueueLimit_25;
	// Telepathy.Client Mirror.TelepathyTransport::client
	Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * ___client_26;
	// Telepathy.Server Mirror.TelepathyTransport::server
	Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * ___server_27;
	// System.Func`1<System.Boolean> Mirror.TelepathyTransport::enabledCheck
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___enabledCheck_28;

public:
	inline static int32_t get_offset_of_port_14() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___port_14)); }
	inline uint16_t get_port_14() const { return ___port_14; }
	inline uint16_t* get_address_of_port_14() { return &___port_14; }
	inline void set_port_14(uint16_t value)
	{
		___port_14 = value;
	}

	inline static int32_t get_offset_of_NoDelay_15() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___NoDelay_15)); }
	inline bool get_NoDelay_15() const { return ___NoDelay_15; }
	inline bool* get_address_of_NoDelay_15() { return &___NoDelay_15; }
	inline void set_NoDelay_15(bool value)
	{
		___NoDelay_15 = value;
	}

	inline static int32_t get_offset_of_SendTimeout_16() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___SendTimeout_16)); }
	inline int32_t get_SendTimeout_16() const { return ___SendTimeout_16; }
	inline int32_t* get_address_of_SendTimeout_16() { return &___SendTimeout_16; }
	inline void set_SendTimeout_16(int32_t value)
	{
		___SendTimeout_16 = value;
	}

	inline static int32_t get_offset_of_ReceiveTimeout_17() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___ReceiveTimeout_17)); }
	inline int32_t get_ReceiveTimeout_17() const { return ___ReceiveTimeout_17; }
	inline int32_t* get_address_of_ReceiveTimeout_17() { return &___ReceiveTimeout_17; }
	inline void set_ReceiveTimeout_17(int32_t value)
	{
		___ReceiveTimeout_17 = value;
	}

	inline static int32_t get_offset_of_serverMaxMessageSize_18() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___serverMaxMessageSize_18)); }
	inline int32_t get_serverMaxMessageSize_18() const { return ___serverMaxMessageSize_18; }
	inline int32_t* get_address_of_serverMaxMessageSize_18() { return &___serverMaxMessageSize_18; }
	inline void set_serverMaxMessageSize_18(int32_t value)
	{
		___serverMaxMessageSize_18 = value;
	}

	inline static int32_t get_offset_of_serverMaxReceivesPerTick_19() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___serverMaxReceivesPerTick_19)); }
	inline int32_t get_serverMaxReceivesPerTick_19() const { return ___serverMaxReceivesPerTick_19; }
	inline int32_t* get_address_of_serverMaxReceivesPerTick_19() { return &___serverMaxReceivesPerTick_19; }
	inline void set_serverMaxReceivesPerTick_19(int32_t value)
	{
		___serverMaxReceivesPerTick_19 = value;
	}

	inline static int32_t get_offset_of_serverSendQueueLimitPerConnection_20() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___serverSendQueueLimitPerConnection_20)); }
	inline int32_t get_serverSendQueueLimitPerConnection_20() const { return ___serverSendQueueLimitPerConnection_20; }
	inline int32_t* get_address_of_serverSendQueueLimitPerConnection_20() { return &___serverSendQueueLimitPerConnection_20; }
	inline void set_serverSendQueueLimitPerConnection_20(int32_t value)
	{
		___serverSendQueueLimitPerConnection_20 = value;
	}

	inline static int32_t get_offset_of_serverReceiveQueueLimitPerConnection_21() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___serverReceiveQueueLimitPerConnection_21)); }
	inline int32_t get_serverReceiveQueueLimitPerConnection_21() const { return ___serverReceiveQueueLimitPerConnection_21; }
	inline int32_t* get_address_of_serverReceiveQueueLimitPerConnection_21() { return &___serverReceiveQueueLimitPerConnection_21; }
	inline void set_serverReceiveQueueLimitPerConnection_21(int32_t value)
	{
		___serverReceiveQueueLimitPerConnection_21 = value;
	}

	inline static int32_t get_offset_of_clientMaxMessageSize_22() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___clientMaxMessageSize_22)); }
	inline int32_t get_clientMaxMessageSize_22() const { return ___clientMaxMessageSize_22; }
	inline int32_t* get_address_of_clientMaxMessageSize_22() { return &___clientMaxMessageSize_22; }
	inline void set_clientMaxMessageSize_22(int32_t value)
	{
		___clientMaxMessageSize_22 = value;
	}

	inline static int32_t get_offset_of_clientMaxReceivesPerTick_23() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___clientMaxReceivesPerTick_23)); }
	inline int32_t get_clientMaxReceivesPerTick_23() const { return ___clientMaxReceivesPerTick_23; }
	inline int32_t* get_address_of_clientMaxReceivesPerTick_23() { return &___clientMaxReceivesPerTick_23; }
	inline void set_clientMaxReceivesPerTick_23(int32_t value)
	{
		___clientMaxReceivesPerTick_23 = value;
	}

	inline static int32_t get_offset_of_clientSendQueueLimit_24() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___clientSendQueueLimit_24)); }
	inline int32_t get_clientSendQueueLimit_24() const { return ___clientSendQueueLimit_24; }
	inline int32_t* get_address_of_clientSendQueueLimit_24() { return &___clientSendQueueLimit_24; }
	inline void set_clientSendQueueLimit_24(int32_t value)
	{
		___clientSendQueueLimit_24 = value;
	}

	inline static int32_t get_offset_of_clientReceiveQueueLimit_25() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___clientReceiveQueueLimit_25)); }
	inline int32_t get_clientReceiveQueueLimit_25() const { return ___clientReceiveQueueLimit_25; }
	inline int32_t* get_address_of_clientReceiveQueueLimit_25() { return &___clientReceiveQueueLimit_25; }
	inline void set_clientReceiveQueueLimit_25(int32_t value)
	{
		___clientReceiveQueueLimit_25 = value;
	}

	inline static int32_t get_offset_of_client_26() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___client_26)); }
	inline Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * get_client_26() const { return ___client_26; }
	inline Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 ** get_address_of_client_26() { return &___client_26; }
	inline void set_client_26(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * value)
	{
		___client_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_26), (void*)value);
	}

	inline static int32_t get_offset_of_server_27() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___server_27)); }
	inline Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * get_server_27() const { return ___server_27; }
	inline Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 ** get_address_of_server_27() { return &___server_27; }
	inline void set_server_27(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * value)
	{
		___server_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___server_27), (void*)value);
	}

	inline static int32_t get_offset_of_enabledCheck_28() { return static_cast<int32_t>(offsetof(TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A, ___enabledCheck_28)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_enabledCheck_28() const { return ___enabledCheck_28; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_enabledCheck_28() { return &___enabledCheck_28; }
	inline void set_enabledCheck_28(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___enabledCheck_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enabledCheck_28), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Renderer[]
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * m_Items[1];

public:
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
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


// System.Void Mirror.NetworkClient::Send<Mirror.NetworkPingMessage>(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkClient_Send_TisNetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396_mE0CEFAFF49FB5317E61AC99F0CEA31661B986928_gshared (NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396  ___message0, int32_t ___channelId1, const RuntimeMethod* method);
// System.Void Mirror.NetworkConnection::Send<Mirror.NetworkPongMessage>(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConnection_Send_TisNetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2_mFDDB15291A2C37262033B83AB1A894466DD46EE3_gshared (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  ___msg0, int32_t ___channelId1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Byte>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// T Mirror.Pool`1<System.Object>::Take()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Pool_1_Take_mBEDB183F6A149ECA23BA25303C140A3AE1FAC7A7_gshared (Pool_1_t0032EAB8380650F504B15E7B3C3D2A58E2792D00 * __this, const RuntimeMethod* method);
// System.Void Mirror.Pool`1<System.Object>::Return(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_1_Return_m18D10CA725CD2F2D9045CF1191833E64244B71B2_gshared (Pool_1_t0032EAB8380650F504B15E7B3C3D2A58E2792D00 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.Pool`1<System.Object>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_1__ctor_m6D0181003227576F02F85A15A6EB9E1ABAB0B8E2_gshared (Pool_1_t0032EAB8380650F504B15E7B3C3D2A58E2792D00 * __this, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___objectGenerator0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncList`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mD324A1BEF31DF7325F738BB47B26F7D186D8EF04_gshared (SyncList_1_t2F8F7EA24D2E33454F00D5E6F16884F5AD9C45FB * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncList`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m45D0C7A84F8605974735A247AE954C56A7577841_gshared (SyncList_1_tECB44CC600EBA63341578F8C15F17ED5F4FEB15A * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncList`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m13E900D593940E204D267A2B7770541049F45873_gshared (SyncList_1_tAF42BC3F1F91CD5648A2E51A886DDE9D862AC50E * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mED930A9B045E5C42523C6B8B8EA0251575C4DF28_gshared (SyncList_1_t2B3C51A06058137C294B51E4E0CA96072292007B * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncList`1<System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mFC6B35AA9D833111D03774AF9E8C9E6B5259CF15_gshared (SyncList_1_t8D7B521C26EA72344C90ED7A42E0487DBBAE5C36 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE_gshared (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m575F8B46B3B71BEF76A558EE27E3DDBEDC0F59FB_gshared (Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_mF9E901FAD15F0385E62CAFEC66A6DA5D59295858_gshared (Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___arg10, int32_t ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m77574053810AA03D245085523189B9B1B1D02F70_gshared (Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * __this, int32_t ___arg10, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___arg21, int32_t ___arg32, const RuntimeMethod* method);
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6AE258C04F422C22BD5CB17FF454F34A1F452A8E_gshared (Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m52BF18DD2D5C75431537D8669F55B766BFB28987_gshared (Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mD005A0CCFFD77790ADB8E1E418161A6F27A30C64_gshared (Action_2_tDD9145FF6BEFC0F795374D3C54FE5138E8FDDC96 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_mD14A0B886BBCD4DE8C6D4941C9ABC1691394F5E0_gshared (Action_2_tDD9145FF6BEFC0F795374D3C54FE5138E8FDDC96 * __this, int32_t ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::RegisterStartPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_RegisterStartPosition_mDE79A6E850F2627C193B28E33307C73C120B7C8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___start0, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::UnRegisterStartPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_UnRegisterStartPosition_mC51E52EFA2E8B98D0077FA9D654C7548F12CED28 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___start0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void Mirror.ExponentialMovingAverage::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExponentialMovingAverage__ctor_m3EB10AAA23643AF85E68D21E0EEDE15219287268 (ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * __this, int32_t ___n0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Double Mirror.NetworkTime::LocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_LocalTime_m3AB333530CEE96AE8CB62E7C47FBAA7C382E1CCF (const RuntimeMethod* method);
// System.Void Mirror.NetworkPingMessage::.ctor(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkPingMessage__ctor_mF340573CD5E74C9BECF60F7789C8170559A95C5D_inline (NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396 * __this, double ___value0, const RuntimeMethod* method);
// System.Void Mirror.NetworkClient::Send<Mirror.NetworkPingMessage>(T,System.Int32)
inline void NetworkClient_Send_TisNetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396_mE0CEFAFF49FB5317E61AC99F0CEA31661B986928 (NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396  ___message0, int32_t ___channelId1, const RuntimeMethod* method)
{
	((  void (*) (NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396 , int32_t, const RuntimeMethod*))NetworkClient_Send_TisNetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396_mE0CEFAFF49FB5317E61AC99F0CEA31661B986928_gshared)(___message0, ___channelId1, method);
}
// System.Void Mirror.NetworkConnection::Send<Mirror.NetworkPongMessage>(T,System.Int32)
inline void NetworkConnection_Send_TisNetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2_mFDDB15291A2C37262033B83AB1A894466DD46EE3 (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  ___msg0, int32_t ___channelId1, const RuntimeMethod* method)
{
	((  void (*) (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2 , int32_t, const RuntimeMethod*))NetworkConnection_Send_TisNetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2_mFDDB15291A2C37262033B83AB1A894466DD46EE3_gshared)(__this, ___msg0, ___channelId1, method);
}
// System.Void Mirror.ExponentialMovingAverage::Add(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExponentialMovingAverage_Add_mC19B600AC4A4ABB827290B157B0A830103D54F11 (ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * __this, double ___newValue0, const RuntimeMethod* method);
// System.Double System.Math::Max(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Max_mA7AFB223891668427745BC854ACBC24849AEDCB6 (double ___val10, double ___val21, const RuntimeMethod* method);
// System.Double System.Math::Min(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Min_m029DC981252B020B92B6DEC21AF0D42C56FA12B9 (double ___val10, double ___val21, const RuntimeMethod* method);
// System.Double Mirror.ExponentialMovingAverage::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ExponentialMovingAverage_get_Value_mB278B5333872C5EAEAF519E1F95BF4B437F1A00E_inline (ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * __this, const RuntimeMethod* method);
// System.Double Mirror.ExponentialMovingAverage::get_Var()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ExponentialMovingAverage_get_Var_m9ED5A56A0D2B778547F20E4D762562F0F927D8BD_inline (ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * __this, const RuntimeMethod* method);
// System.Double Mirror.NetworkTime::get_timeVar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_timeVar_m9D276BC81BB28039ED914413DDB85A472D41BBF7 (const RuntimeMethod* method);
// System.Double Mirror.NetworkTime::get_rttVar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_rttVar_mB51459101EDA3631D0152687E4EDAEBB28741903 (const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m107B791DBC1E809192456359DFF8B8F45A84EAA1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour__ctor_mB98FF8F52DCEBEB3BC7679DE03FA50785207EE78 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::EnsureLength(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriter_EnsureLength_mE32CDE81422866487CE9EF603DC16106877E7942_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::EnsureCapacity(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriter_EnsureCapacity_m8686EBB645C1892C928AB87D8FD73148B547BDC9_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Byte>(!!0[]&,System.Int32)
inline void Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**, int32_t, const RuntimeMethod*))Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055_gshared)(___array0, ___newSize1, method);
}
// System.Void System.Array::ConstrainedCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_ConstrainedCopy_mD26D19D1D515C4D884E36327A9B0C2BA79CD7003 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteUInt16(Mirror.NetworkWriter,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteUInt16_m7F8221AB37BDB8AC0765BDA883C6CA916CC812F4 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint16_t ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteUInt32(Mirror.NetworkWriter,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint32_t ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteUInt64(Mirror.NetworkWriter,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteUInt64_mD91BA22C056821BD989BFF2480CCCA9A65120A86 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint64_t ___value1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::WriteBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytes_m1EF0FDBA6E07D885F57CB524710524715BB7E374 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteBytesAndSize(Mirror.NetworkWriter,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteBytesAndSize_m75E79671D06A8D7C3CA09E02844E6316F3A3E56B (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, int32_t ___offset2, int32_t ___count3, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline)(__this, method);
}
// System.Void Mirror.NetworkWriterExtensions::WriteSingle(Mirror.NetworkWriter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, float ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteInt32(Mirror.NetworkWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, int32_t ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Plane_get_normal_m71CB4BAB04EE04CAEF9AD272B16766800F7D556B (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteVector3(Mirror.NetworkWriter,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Plane::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plane_get_distance_mB36C8725BD4228914F0410F4B45E12496A1D87D7 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// System.Byte[] System.Guid::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Guid_ToByteArray_mFD26B992E49518AE955F1FE244A9464A5E347E0A (Guid_t * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.UInt32 Mirror.NetworkIdentity::get_netId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkIdentity_get_netId_m3FF02B719B8AE0B6A3483063A373AFFB2489C0FA_inline (NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * __this, const RuntimeMethod* method);
// System.UInt32 Mirror.NetworkBehaviour::get_netId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkBehaviour_get_netId_mFD41F9D183B23443AA528BC0244E0835CCC94826 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Int32 Mirror.NetworkBehaviour::get_ComponentIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkBehaviour_get_ComponentIndex_mACCD123A66C72A3D062535CF936618C2158E9D76 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Mirror.NetworkIdentity>()
inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * Component_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_m0653D711C23EA0CC7B71B9BE2719632F36A7699D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Mirror.NetworkIdentity>()
inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * GameObject_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mFA75ACF3666006F9878974466A488C75BBD28247 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Mirror.NetworkWriterExtensions::WriteString(Mirror.NetworkWriter,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, String_t* ___value1, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mD752778085A353529AF03841383E5603FE556449 (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * __this, bool ___encoderShouldEmitUTF8Identifier0, bool ___throwOnInvalidBytes1, const RuntimeMethod* method);
// T Mirror.Pool`1<Mirror.PooledNetworkWriter>::Take()
inline PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * Pool_1_Take_m628ADF7444CCF6B68881A9A0E019168146396EFB (Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 * __this, const RuntimeMethod* method)
{
	return ((  PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * (*) (Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 *, const RuntimeMethod*))Pool_1_Take_mBEDB183F6A149ECA23BA25303C140A3AE1FAC7A7_gshared)(__this, method);
}
// System.Void Mirror.NetworkWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Reset_m9F34945A36E170550D63E41D2CF9C26ACB03FF77 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, const RuntimeMethod* method);
// System.Void Mirror.Pool`1<Mirror.PooledNetworkWriter>::Return(T)
inline void Pool_1_Return_m205ADBFC1B5B4BBD90BE148C8EF6850041965BF4 (Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 * __this, PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 *, PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 *, const RuntimeMethod*))Pool_1_Return_m18D10CA725CD2F2D9045CF1191833E64244B71B2_gshared)(__this, ___item0, method);
}
// System.Void System.Func`1<Mirror.PooledNetworkWriter>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mF9F45DC162459E01FF8BEDB7E1464FC767ABA62B (Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Mirror.Pool`1<Mirror.PooledNetworkWriter>::.ctor(System.Func`1<T>)
inline void Pool_1__ctor_mA7FCF10D36E47802FA097F1FA00FC0C0489405DE (Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 * __this, Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950 * ___objectGenerator0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 *, Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950 *, const RuntimeMethod*))Pool_1__ctor_m6D0181003227576F02F85A15A6EB9E1ABAB0B8E2_gshared)(__this, ___objectGenerator0, method);
}
// System.Void Mirror.NetworkReader::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkReader__ctor_m7472356275E51A91FEE8FEF118A6AF2240F6417D (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.Void Mirror.NetworkReader::.ctor(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkReader__ctor_m73E59DA6A9DC39831B7EAC72DD9F9B29BA0918C0 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment0, const RuntimeMethod* method);
// System.Void Mirror.NetworkReaderPool::Recycle(Mirror.PooledNetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkReaderPool_Recycle_mAD1BB938E53E18CF168736FB5256680DBBFD1535 (PooledNetworkReader_tD428721C991DFC38A2922BC2940E1816F0C6824C * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterPool::Recycle(Mirror.PooledNetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterPool_Recycle_m8E7D8C8ED6F0856380CE750DBEF1D0EC5BAF8FB3 (PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * ___writer0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter__ctor_mD3E7B77EDCCE633CFEE83EBC1DB06355D0460A5F (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, const RuntimeMethod* method);
// System.Int32 Mirror.Extensions::GetStableHashCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_GetStableHashCode_m0592E21267B4D12BAF6A3124018FFDB85AA1EDB9 (String_t* ___text0, const RuntimeMethod* method);
// System.Int32 Mirror.RemoteCalls.RemoteCallHelper::GetMethodHash(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteCallHelper_GetMethodHash_mA618B5FB67E05E07A97E30F731F381A7EF5E6AB4 (Type_t * ___invokeClass0, String_t* ___methodName1, const RuntimeMethod* method);
// System.Boolean Mirror.RemoteCalls.RemoteCallHelper::CheckIfDeligateExists(System.Type,Mirror.MirrorInvokeType,Mirror.RemoteCalls.CmdDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteCallHelper_CheckIfDeligateExists_mB7136608721A4539332B7C090A64CA13BEFCDBAA (Type_t * ___invokeClass0, int32_t ___invokerType1, CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * ___func2, int32_t ___cmdHash3, const RuntimeMethod* method);
// System.Void Mirror.RemoteCalls.Invoker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invoker__ctor_mAB4C1E969716FCF8DB4257BCF45F152446555DF4 (Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Mirror.RemoteCalls.Invoker>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mFADD4CD2C85FFA653C213C571D5B2664F02AC039 (Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * __this, int32_t ___key0, Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 *, int32_t, Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Mirror.RemoteCalls.Invoker>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m2B36C7918C6E034FD810ECB4ED480BD2F84781BC (Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Mirror.RemoteCalls.Invoker>::get_Item(!0)
inline Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * Dictionary_2_get_Item_m17BFA475EE36804655561118BB67DE9A7D6748BD (Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * (*) (Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared)(__this, ___key0, method);
}
// System.Boolean Mirror.RemoteCalls.Invoker::AreEqual(System.Type,Mirror.MirrorInvokeType,Mirror.RemoteCalls.CmdDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Invoker_AreEqual_mECE8ABA850E084829C577D749E3E69F164829552 (Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * __this, Type_t * ___invokeClass0, int32_t ___invokeType1, CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * ___invokeFunction2, const RuntimeMethod* method);
// System.String Mirror.Extensions::GetMethodName(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_GetMethodName_mBD201B7767E472A8E4F2116F18AD20D437783E0F (Delegate_t * ___func0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 Mirror.RemoteCalls.RemoteCallHelper::RegisterDelegate(System.Type,System.String,Mirror.MirrorInvokeType,Mirror.RemoteCalls.CmdDelegate,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteCallHelper_RegisterDelegate_mC8AD98E6FE1096C3FE88DAC05A2B09E3CDB5F977 (Type_t * ___invokeClass0, String_t* ___cmdName1, int32_t ___invokerType2, CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * ___func3, bool ___cmdRequiresAuthority4, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Mirror.RemoteCalls.Invoker>::Remove(!0)
inline bool Dictionary_2_Remove_mE54F65E95E37762A387417D484FD204A4B02C332 (Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Mirror.RemoteCalls.Invoker>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m13CCBED1F86108F9D5963871ED2B694227142DC5 (Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * __this, int32_t ___key0, Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 *, int32_t, Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Mirror.RemoteCalls.RemoteCallHelper::GetInvokerForHash(System.Int32,Mirror.MirrorInvokeType,Mirror.RemoteCalls.Invoker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteCallHelper_GetInvokerForHash_mEF65749F25DF0C8F8770F042978A52296834866E (int32_t ___cmdHash0, int32_t ___invokeType1, Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 ** ___invoker2, const RuntimeMethod* method);
// System.Void Mirror.RemoteCalls.CmdDelegate::Invoke(Mirror.NetworkBehaviour,Mirror.NetworkReader,Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmdDelegate_Invoke_m8DA7D950737AA88947D43EBAED1C35604D49DC2B (CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * __this, NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * ___obj0, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader1, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___senderConnection2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Mirror.RemoteCalls.Invoker>::.ctor()
inline void Dictionary_2__ctor_m571DC5266DD0515238FEE375C58419E469D34618 (Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7 (PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052 * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncList`1<System.Boolean>::.ctor()
inline void SyncList_1__ctor_mD324A1BEF31DF7325F738BB47B26F7D186D8EF04 (SyncList_1_t2F8F7EA24D2E33454F00D5E6F16884F5AD9C45FB * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t2F8F7EA24D2E33454F00D5E6F16884F5AD9C45FB *, const RuntimeMethod*))SyncList_1__ctor_mD324A1BEF31DF7325F738BB47B26F7D186D8EF04_gshared)(__this, method);
}
// System.Void Mirror.SyncList`1<System.Single>::.ctor()
inline void SyncList_1__ctor_m45D0C7A84F8605974735A247AE954C56A7577841 (SyncList_1_tECB44CC600EBA63341578F8C15F17ED5F4FEB15A * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tECB44CC600EBA63341578F8C15F17ED5F4FEB15A *, const RuntimeMethod*))SyncList_1__ctor_m45D0C7A84F8605974735A247AE954C56A7577841_gshared)(__this, method);
}
// System.Void Mirror.SyncList`1<System.Int32>::.ctor()
inline void SyncList_1__ctor_m13E900D593940E204D267A2B7770541049F45873 (SyncList_1_tAF42BC3F1F91CD5648A2E51A886DDE9D862AC50E * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tAF42BC3F1F91CD5648A2E51A886DDE9D862AC50E *, const RuntimeMethod*))SyncList_1__ctor_m13E900D593940E204D267A2B7770541049F45873_gshared)(__this, method);
}
// System.Void Mirror.SyncList`1<System.String>::.ctor()
inline void SyncList_1__ctor_m815BFA4465D735F628EE0ECAFE57796DC33828AD (SyncList_1_t83D785F69E2D0AAC15D1603D38FB2A0425CF61CB * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t83D785F69E2D0AAC15D1603D38FB2A0425CF61CB *, const RuntimeMethod*))SyncList_1__ctor_mED930A9B045E5C42523C6B8B8EA0251575C4DF28_gshared)(__this, method);
}
// System.Void Mirror.SyncList`1<System.UInt32>::.ctor()
inline void SyncList_1__ctor_mFC6B35AA9D833111D03774AF9E8C9E6B5259CF15 (SyncList_1_t8D7B521C26EA72344C90ED7A42E0487DBBAE5C36 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t8D7B521C26EA72344C90ED7A42E0487DBBAE5C36 *, const RuntimeMethod*))SyncList_1__ctor_mFC6B35AA9D833111D03774AF9E8C9E6B5259CF15_gshared)(__this, method);
}
// System.Void Telepathy.Client::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mD52457064B6A439EF08D6F061337E5ACD5E046C4 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method);
// System.Void Telepathy.Server::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server__ctor_m2B64EC33BE7222CEA9D9DC5BE390B82C94D2EAC0 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m575F8B46B3B71BEF76A558EE27E3DDBEDC0F59FB (Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m575F8B46B3B71BEF76A558EE27E3DDBEDC0F59FB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Boolean Telepathy.Client::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connected_mC86DE616D136C3556010E1CE19AC17F5B0A274C4 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method);
// System.Void Telepathy.Client::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Connect_mDB197946B2907CF0830208C4A3B8B5E967B04401 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsDefaultPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsDefaultPort_mFDB9DC42A42C2D8C5ADFE5D590DEEE27D2918271 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Int32 System.Uri::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Host()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Host_m05E1D82C4E6B14A2369AEDED218F9089DE336E64 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::Send(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_Send_m93CD3EB70EF1DCD964713359C91298850C323500 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___message0, const RuntimeMethod* method);
// System.Void Telepathy.Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_mAE664B949506BF0D4F3698B644416E7A95B35614 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Int32 Telepathy.Client::Tick(System.Int32,System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Client_Tick_mFE8F6ECFFEEF98B6D2D19F7FF5B8665489BC58AA (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, int32_t ___processLimit0, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___checkEnabled1, const RuntimeMethod* method);
// System.Void System.UriBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder__ctor_mE159C4677FB22466FE0C4E2389D7A768B8D960E0 (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * __this, const RuntimeMethod* method);
// System.Void System.UriBuilder::set_Scheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Scheme_m0E10F383F85EC52D7C813EAB32226A8997306D9C (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Net.Dns::GetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dns_GetHostName_m8BF02B75F8EF9723179339212805C5BAF5C4B706 (const RuntimeMethod* method);
// System.Void System.UriBuilder::set_Host(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Host_mCDF7CD943974DFF97DCA53EF4CC29C32DC6AD8C8 (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.UriBuilder::set_Port(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Port_mE953A674E976EB7C93939B7E9DC0478B705A23E6 (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Uri System.UriBuilder::get_Uri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * UriBuilder_get_Uri_mCC00D0ED823993613F5E62435B85FDADC891C328 (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Server::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_get_Active_mE40759A4A854C0CF788380F7BFD303D6A99A09C5 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Server::Start(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Start_mA3609AF20E968EBDF19F8DC77776B69CA9E7A7EE (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___port0, const RuntimeMethod* method);
// System.Boolean Telepathy.Server::Send(System.Int32,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Send_mC665F2B285DD3F5276ADBBFEA708123214A23B94 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___connectionId0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___message1, const RuntimeMethod* method);
// System.Boolean Telepathy.Server::Disconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Disconnect_m81A37C7BA9C9D87CE54FF2886D018C7AA140AC5C (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___connectionId0, const RuntimeMethod* method);
// System.String Telepathy.Server::GetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Server_GetClientAddress_m9574ABDC812B05BDC6F04647C5E757400E1FCDC4 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___connectionId0, const RuntimeMethod* method);
// System.Void Telepathy.Server::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Stop_m5D7C534FDE0D25A15B8498FF0A979FE856364C02 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method);
// System.Int32 Telepathy.Server::Tick(System.Int32,System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_Tick_m299CC47DD1947941F019C321311EDCD1986A7A6A (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___processLimit0, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___checkEnabled1, const RuntimeMethod* method);
// System.String System.UInt16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mCD21CDBE273387A21683B6C00EF5EBEEFF7A8F6D (uint16_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::get_Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connecting_mAF631B73E29AF1F6BB75CD325F2326A4B2059106 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method);
// System.Void Mirror.Transport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport__ctor_m18499670B379DE249BA0A4D8D978335F0C1E0376 (Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>::Invoke(!0,!1)
inline void Action_2_Invoke_mF9E901FAD15F0385E62CAFEC66A6DA5D59295858 (Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC *, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , int32_t, const RuntimeMethod*))Action_2_Invoke_mF9E901FAD15F0385E62CAFEC66A6DA5D59295858_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`1<System.Int32>::Invoke(!0)
inline void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, int32_t, const RuntimeMethod*))Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m77574053810AA03D245085523189B9B1B1D02F70 (Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * __this, int32_t ___arg10, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___arg21, int32_t ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 *, int32_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , int32_t, const RuntimeMethod*))Action_3_Invoke_m77574053810AA03D245085523189B9B1B1D02F70_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m6AE258C04F422C22BD5CB17FF454F34A1F452A8E (Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m6AE258C04F422C22BD5CB17FF454F34A1F452A8E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Exception>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6 (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m52BF18DD2D5C75431537D8669F55B766BFB28987 (Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m52BF18DD2D5C75431537D8669F55B766BFB28987_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<System.Int32,System.Exception>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m0F1FC12DAF031547739B9BFC8532E64934995D42 (Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mD005A0CCFFD77790ADB8E1E418161A6F27A30C64_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>::.ctor()
inline void UnityEvent_1__ctor_mA2EF7120BAD01BD1BAC024CF49A792C4E951B7A8 (UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNGCryptoServiceProvider__ctor_mCBC98067A4839FB96DCF01860078278EC148FFBE (RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1 * __this, const RuntimeMethod* method);
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitConverter_ToUInt32_m0C9F3D9840110CC82D4C18FD882AC5C7EA595366 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Void Mirror.ClientScene/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDB0EFCAE428B5DF8FA931D0785AB161CBACD9CA2 (U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Mirror.SpawnDelegate::Invoke(UnityEngine.Vector3,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpawnDelegate_Invoke_m647484B13C3CB741C8D7D910D355FEC904FBFBA3 (SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Guid_t  ___assetId1, const RuntimeMethod* method);
// System.Void kcp2k.KcpTransport/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m198B95BF0E13C9FF9E4CF6A86E7F21801E5234E0 (U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 * __this, const RuntimeMethod* method);
// System.UInt32 kcp2k.KcpConnection::get_MaxSendRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t KcpConnection_get_MaxSendRate_m79F01DE756C7EBDC1A7CC9F191489F73B4416E22 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.UInt32 kcp2k.KcpConnection::get_MaxReceiveRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t KcpConnection_get_MaxReceiveRate_mD05C8C9E6006EDF3E5AC02B3AF3F088DEA90284F (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Int32 kcp2k.KcpConnection::get_SendQueueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_get_SendQueueCount_m24F398387A8B1579866B2A5E6B14064E259E8CCD (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Int32 kcp2k.KcpConnection::get_ReceiveQueueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_get_ReceiveQueueCount_mE7088852AC83C44DFA8381335B704A15ED65C058 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Int32 kcp2k.KcpConnection::get_SendBufferCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_get_SendBufferCount_m9D780C0933778E0BBE063C1FFB41DE5051C5A27D (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Int32 kcp2k.KcpConnection::get_ReceiveBufferCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_get_ReceiveBufferCount_m1B0C9A15F679EAA6622061522EC27D8817D3DFC9 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Int32 Mirror.MultiplexTransport::FromBaseId(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultiplexTransport_FromBaseId_m48D22B4B10606A37A35893E55EA3F38CF11F24E4 (MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12 * __this, int32_t ___transportId0, int32_t ___connectionId1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.Exception>::Invoke(!0,!1)
inline void Action_2_Invoke_m429C88434C52233463BBF414E7283E6EFD4B15B6 (Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * __this, int32_t ___arg10, Exception_t * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 *, int32_t, Exception_t *, const RuntimeMethod*))Action_2_Invoke_mD14A0B886BBCD4DE8C6D4941C9ABC1691394F5E0_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void Mirror.NetworkBehaviour/NetworkBehaviourSyncVar::.ctor(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviourSyncVar__ctor_mFB219E84A8139BFFCC899543F4057E03D963B0FF (NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F * __this, uint32_t ___netId0, int32_t ___componentIndex1, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour/NetworkBehaviourSyncVar::Equals(Mirror.NetworkBehaviour/NetworkBehaviourSyncVar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviourSyncVar_Equals_m2EE0BD631368A1EA28D3E4422A9F14C43B9B0A27 (NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F * __this, NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F  ___other0, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour/NetworkBehaviourSyncVar::Equals(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviourSyncVar_Equals_m2EE82223A7405A371A233BCED2C78292E69AA85F (NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F * __this, uint32_t ___netId0, int32_t ___componentIndex1, const RuntimeMethod* method);
// System.String Mirror.NetworkBehaviour/NetworkBehaviourSyncVar::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkBehaviourSyncVar_ToString_m4DE9A94D17F9F28FCDB963AC8665144C37076363 (NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m66C0ED4876EBA658BD0CF465BFA73ECA9EBDA408 (U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Mirror.PooledNetworkWriter>::.ctor()
inline void Queue_1__ctor_m8A390E5C2CBC38435B3D15C68350D0DBA45FBDE4 (Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Double Mirror.NetworkTime::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_time_m8DE6EBB4100FF44B7A282881FD69798D737C24C6 (const RuntimeMethod* method);
// System.Void Mirror.NetworkDiagnostics/MessageInfo::.ctor(Mirror.NetworkMessage,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageInfo__ctor_mAC67988BF4FBFD84F5201A8DBFEA962167787671 (MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A * __this, RuntimeObject* ___message0, int32_t ___channel1, int32_t ___bytes2, int32_t ___count3, const RuntimeMethod* method);
// System.Boolean System.Delegate::op_Equality(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Delegate_op_Equality_m7E0C89B9C571EA1CDFD6630CF7D49CC929ED6F41 (Delegate_t * ___d10, Delegate_t * ___d21, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m450CE0D75EBA856B0B9F8B7F888C07156E680F20 (U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Mirror.NetworkConnectionToClient>::get_Value()
inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * KeyValuePair_2_get_Value_mDFF4631D0F417B42AB24819A2F7D34916E270AE1_inline (KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B * __this, const RuntimeMethod* method)
{
	return ((  NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * (*) (KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// Mirror.NetworkIdentity Mirror.NetworkConnection::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkReaderPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDC5278341D19B9BC6F238AF069FB094885AB02D5 (U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949 * __this, const RuntimeMethod* method);
// System.Void Mirror.PooledNetworkReader::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledNetworkReader__ctor_mEAE1DCDFBAC4CCFA4D40970DE4D20B36931D656E (PooledNetworkReader_tD428721C991DFC38A2922BC2940E1816F0C6824C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m54EF1D3A06EA9F18684008AB6E69268AF8AD7A9A (U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4 * __this, const RuntimeMethod* method);
// System.Void Mirror.PooledNetworkWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledNetworkWriter__ctor_m0575E62AABFA81E2F757C76EA455757C8F27B165 (PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * __this, const RuntimeMethod* method);
// System.Void Mirror.Transport/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5310ACAAE5FAD5B20FD9F10931FAB299C78950EC (U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.NetworkStartPosition::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStartPosition_Awake_m957E26CD377C729F2F9442F0C737CC4729A72C47 (NetworkStartPosition_tA32E90C11E6234E04155AA8DD67FBC804541D465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkManager.RegisterStartPosition(transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager_RegisterStartPosition_mDE79A6E850F2627C193B28E33307C73C120B7C8E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkStartPosition::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStartPosition_OnDestroy_m00BD40ED4641A481ACE5967C211E6EBF84585FC8 (NetworkStartPosition_tA32E90C11E6234E04155AA8DD67FBC804541D465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkManager.UnRegisterStartPosition(transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager_UnRegisterStartPosition_mC51E52EFA2E8B98D0077FA9D654C7548F12CED28(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkStartPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStartPosition__ctor_m0630A7917AC91935D77BF5755391FB6EA6DFBFD0 (NetworkStartPosition_tA32E90C11E6234E04155AA8DD67FBC804541D465 * __this, const RuntimeMethod* method)
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
// System.Void Mirror.NetworkTime::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime__cctor_m747E3CF7CD3F32E4BFCA9975961B4C76A4737770 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float PingFrequency = 2.0f;
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set_PingFrequency_0((2.0f));
		// public static int PingWindowSize = 10;
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set_PingWindowSize_1(((int32_t)10));
		// static readonly Stopwatch stopwatch = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_0, /*hidden argument*/NULL);
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set_stopwatch_3(L_0);
		// static ExponentialMovingAverage _rtt = new ExponentialMovingAverage(10);
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_1 = (ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 *)il2cpp_codegen_object_new(ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856_il2cpp_TypeInfo_var);
		ExponentialMovingAverage__ctor_m3EB10AAA23643AF85E68D21E0EEDE15219287268(L_1, ((int32_t)10), /*hidden argument*/NULL);
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set__rtt_4(L_1);
		// static ExponentialMovingAverage _offset = new ExponentialMovingAverage(10);
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_2 = (ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 *)il2cpp_codegen_object_new(ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856_il2cpp_TypeInfo_var);
		ExponentialMovingAverage__ctor_m3EB10AAA23643AF85E68D21E0EEDE15219287268(L_2, ((int32_t)10), /*hidden argument*/NULL);
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set__offset_5(L_2);
		// static double offsetMin = double.MinValue;
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set_offsetMin_6((-1.7976931348623157E+308));
		// static double offsetMax = double.MaxValue;
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set_offsetMax_7((1.7976931348623157E+308));
		// stopwatch.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_3 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get_stopwatch_3();
		NullCheck(L_3);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double Mirror.NetworkTime::LocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_LocalTime_m3AB333530CEE96AE8CB62E7C47FBAA7C382E1CCF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return stopwatch.Elapsed.TotalSeconds;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get_stopwatch_3();
		NullCheck(L_0);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1;
		L_1 = Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		double L_2;
		L_2 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Mirror.NetworkTime::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime_Reset_mCAB26017F5FA88252E547FA6551A26D6BAEF7298 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rtt = new ExponentialMovingAverage(PingWindowSize);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		int32_t L_0 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get_PingWindowSize_1();
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_1 = (ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 *)il2cpp_codegen_object_new(ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856_il2cpp_TypeInfo_var);
		ExponentialMovingAverage__ctor_m3EB10AAA23643AF85E68D21E0EEDE15219287268(L_1, L_0, /*hidden argument*/NULL);
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set__rtt_4(L_1);
		// _offset = new ExponentialMovingAverage(PingWindowSize);
		int32_t L_2 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get_PingWindowSize_1();
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_3 = (ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 *)il2cpp_codegen_object_new(ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856_il2cpp_TypeInfo_var);
		ExponentialMovingAverage__ctor_m3EB10AAA23643AF85E68D21E0EEDE15219287268(L_3, L_2, /*hidden argument*/NULL);
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set__offset_5(L_3);
		// offsetMin = double.MinValue;
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set_offsetMin_6((-1.7976931348623157E+308));
		// offsetMax = double.MaxValue;
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set_offsetMax_7((1.7976931348623157E+308));
		// }
		return;
	}
}
// System.Void Mirror.NetworkTime::UpdateClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime_UpdateClient_m852C8649B8BDB874079CAD542EC213D2165D53DD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkClient_Send_TisNetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396_mE0CEFAFF49FB5317E61AC99F0CEA31661B986928_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Time.time - lastPingTime >= PingFrequency)
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		double L_1 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get_lastPingTime_2();
		float L_2 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get_PingFrequency_0();
		if ((!(((double)((double)il2cpp_codegen_subtract((double)((double)((double)L_0)), (double)L_1))) >= ((double)((double)((double)L_2))))))
		{
			goto IL_002f;
		}
	}
	{
		// NetworkPingMessage pingMessage = new NetworkPingMessage(LocalTime());
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = NetworkTime_LocalTime_m3AB333530CEE96AE8CB62E7C47FBAA7C382E1CCF(/*hidden argument*/NULL);
		NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396  L_4;
		memset((&L_4), 0, sizeof(L_4));
		NetworkPingMessage__ctor_mF340573CD5E74C9BECF60F7789C8170559A95C5D_inline((&L_4), L_3, /*hidden argument*/NULL);
		// NetworkClient.Send(pingMessage, Channels.DefaultUnreliable);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		NetworkClient_Send_TisNetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396_mE0CEFAFF49FB5317E61AC99F0CEA31661B986928(L_4, 1, /*hidden argument*/NetworkClient_Send_TisNetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396_mE0CEFAFF49FB5317E61AC99F0CEA31661B986928_RuntimeMethod_var);
		// lastPingTime = Time.time;
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set_lastPingTime_2(((double)((double)L_5)));
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Mirror.NetworkTime::OnServerPing(Mirror.NetworkConnection,Mirror.NetworkPingMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime_OnServerPing_m68FD3838E10FE31CDFC7F861EF8FE0D9C37D8B54 (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396  ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkConnection_Send_TisNetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2_mFDDB15291A2C37262033B83AB1A894466DD46EE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// NetworkPongMessage pongMsg = new NetworkPongMessage
		// {
		//     clientTime = msg.clientTime,
		//     serverTime = LocalTime()
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2 ));
		NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396  L_0 = ___msg1;
		double L_1 = L_0.get_clientTime_0();
		(&V_1)->set_clientTime_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = NetworkTime_LocalTime_m3AB333530CEE96AE8CB62E7C47FBAA7C382E1CCF(/*hidden argument*/NULL);
		(&V_1)->set_serverTime_1(L_2);
		NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  L_3 = V_1;
		V_0 = L_3;
		// conn.Send(pongMsg, Channels.DefaultUnreliable);
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_4 = ___conn0;
		NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  L_5 = V_0;
		NullCheck(L_4);
		NetworkConnection_Send_TisNetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2_mFDDB15291A2C37262033B83AB1A894466DD46EE3(L_4, L_5, 1, /*hidden argument*/NetworkConnection_Send_TisNetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2_mFDDB15291A2C37262033B83AB1A894466DD46EE3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.NetworkTime::OnClientPong(Mirror.NetworkPongMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime_OnClientPong_m44B93D45F64A2A215C28274C23018A9CADBDC253 (NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		// double now = LocalTime();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = NetworkTime_LocalTime_m3AB333530CEE96AE8CB62E7C47FBAA7C382E1CCF(/*hidden argument*/NULL);
		// double newRtt = now - msg.clientTime;
		double L_1 = L_0;
		NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  L_2 = ___msg0;
		double L_3 = L_2.get_clientTime_0();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_1, (double)L_3));
		// _rtt.Add(newRtt);
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_4 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get__rtt_4();
		double L_5 = V_0;
		NullCheck(L_4);
		ExponentialMovingAverage_Add_mC19B600AC4A4ABB827290B157B0A830103D54F11(L_4, L_5, /*hidden argument*/NULL);
		// double newOffset = now - newRtt * 0.5f - msg.serverTime;
		double L_6 = L_1;
		double L_7 = V_0;
		NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  L_8 = ___msg0;
		double L_9 = L_8.get_serverTime_1();
		V_1 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_subtract((double)L_6, (double)((double)il2cpp_codegen_multiply((double)L_7, (double)(0.5))))), (double)L_9));
		// double newOffsetMin = now - newRtt - msg.serverTime;
		double L_10 = L_6;
		double L_11 = V_0;
		NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  L_12 = ___msg0;
		double L_13 = L_12.get_serverTime_1();
		V_2 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_subtract((double)L_10, (double)L_11)), (double)L_13));
		// double newOffsetMax = now - msg.serverTime;
		NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  L_14 = ___msg0;
		double L_15 = L_14.get_serverTime_1();
		V_3 = ((double)il2cpp_codegen_subtract((double)L_10, (double)L_15));
		// offsetMin = Math.Max(offsetMin, newOffsetMin);
		double L_16 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get_offsetMin_6();
		double L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = Math_Max_mA7AFB223891668427745BC854ACBC24849AEDCB6(L_16, L_17, /*hidden argument*/NULL);
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set_offsetMin_6(L_18);
		// offsetMax = Math.Min(offsetMax, newOffsetMax);
		double L_19 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get_offsetMax_7();
		double L_20 = V_3;
		double L_21;
		L_21 = Math_Min_m029DC981252B020B92B6DEC21AF0D42C56FA12B9(L_19, L_20, /*hidden argument*/NULL);
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set_offsetMax_7(L_21);
		// if (_offset.Value < offsetMin || _offset.Value > offsetMax)
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_22 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get__offset_5();
		NullCheck(L_22);
		double L_23;
		L_23 = ExponentialMovingAverage_get_Value_mB278B5333872C5EAEAF519E1F95BF4B437F1A00E_inline(L_22, /*hidden argument*/NULL);
		double L_24 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get_offsetMin_6();
		if ((((double)L_23) < ((double)L_24)))
		{
			goto IL_0083;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_25 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get__offset_5();
		NullCheck(L_25);
		double L_26;
		L_26 = ExponentialMovingAverage_get_Value_mB278B5333872C5EAEAF519E1F95BF4B437F1A00E_inline(L_25, /*hidden argument*/NULL);
		double L_27 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get_offsetMax_7();
		if ((!(((double)L_26) > ((double)L_27))))
		{
			goto IL_009e;
		}
	}

IL_0083:
	{
		// _offset = new ExponentialMovingAverage(PingWindowSize);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		int32_t L_28 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get_PingWindowSize_1();
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_29 = (ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 *)il2cpp_codegen_object_new(ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856_il2cpp_TypeInfo_var);
		ExponentialMovingAverage__ctor_m3EB10AAA23643AF85E68D21E0EEDE15219287268(L_29, L_28, /*hidden argument*/NULL);
		((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->set__offset_5(L_29);
		// _offset.Add(newOffset);
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_30 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get__offset_5();
		double L_31 = V_1;
		NullCheck(L_30);
		ExponentialMovingAverage_Add_mC19B600AC4A4ABB827290B157B0A830103D54F11(L_30, L_31, /*hidden argument*/NULL);
		// }
		return;
	}

IL_009e:
	{
		// else if (newOffset >= offsetMin || newOffset <= offsetMax)
		double L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		double L_33 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get_offsetMin_6();
		if ((((double)L_32) >= ((double)L_33)))
		{
			goto IL_00ae;
		}
	}
	{
		double L_34 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		double L_35 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get_offsetMax_7();
		if ((!(((double)L_34) <= ((double)L_35))))
		{
			goto IL_00b9;
		}
	}

IL_00ae:
	{
		// _offset.Add(newOffset);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_36 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get__offset_5();
		double L_37 = V_1;
		NullCheck(L_36);
		ExponentialMovingAverage_Add_mC19B600AC4A4ABB827290B157B0A830103D54F11(L_36, L_37, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Double Mirror.NetworkTime::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_time_m8DE6EBB4100FF44B7A282881FD69798D737C24C6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static double time => LocalTime() - _offset.Value;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = NetworkTime_LocalTime_m3AB333530CEE96AE8CB62E7C47FBAA7C382E1CCF(/*hidden argument*/NULL);
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_1 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get__offset_5();
		NullCheck(L_1);
		double L_2;
		L_2 = ExponentialMovingAverage_get_Value_mB278B5333872C5EAEAF519E1F95BF4B437F1A00E_inline(L_1, /*hidden argument*/NULL);
		return ((double)il2cpp_codegen_subtract((double)L_0, (double)L_2));
	}
}
// System.Double Mirror.NetworkTime::get_timeVar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_timeVar_m9D276BC81BB28039ED914413DDB85A472D41BBF7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static double timeVar => _offset.Var;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_0 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get__offset_5();
		NullCheck(L_0);
		double L_1;
		L_1 = ExponentialMovingAverage_get_Var_m9ED5A56A0D2B778547F20E4D762562F0F927D8BD_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double Mirror.NetworkTime::get_timeSd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_timeSd_m3701E26030E55483B12EE1BB684ACFA8CC5A3405 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static double timeSd => Math.Sqrt(timeVar);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = NetworkTime_get_timeVar_m9D276BC81BB28039ED914413DDB85A472D41BBF7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sqrt(L_0);
		return L_1;
	}
}
// System.Double Mirror.NetworkTime::get_offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_offset_m962DCC4FAA7B83F01518096E0BD17F34EEA84CBF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static double offset => _offset.Value;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_0 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get__offset_5();
		NullCheck(L_0);
		double L_1;
		L_1 = ExponentialMovingAverage_get_Value_mB278B5333872C5EAEAF519E1F95BF4B437F1A00E_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double Mirror.NetworkTime::get_rtt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_rtt_m9E4EC224EB95FBB7B8329E9A225D3275D0770C66 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static double rtt => _rtt.Value;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_0 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get__rtt_4();
		NullCheck(L_0);
		double L_1;
		L_1 = ExponentialMovingAverage_get_Value_mB278B5333872C5EAEAF519E1F95BF4B437F1A00E_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double Mirror.NetworkTime::get_rttVar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_rttVar_mB51459101EDA3631D0152687E4EDAEBB28741903 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static double rttVar => _rtt.Var;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * L_0 = ((NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var))->get__rtt_4();
		NullCheck(L_0);
		double L_1;
		L_1 = ExponentialMovingAverage_get_Var_m9ED5A56A0D2B778547F20E4D762562F0F927D8BD_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double Mirror.NetworkTime::get_rttSd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_rttSd_m90AD954DF60BA5962609303A376108671F368FC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static double rttSd => Math.Sqrt(rttVar);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = NetworkTime_get_rttVar_mB51459101EDA3631D0152687E4EDAEBB28741903(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sqrt(L_0);
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
// System.Void Mirror.NetworkVisibility::OnSetHostVisibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVisibility_OnSetHostVisibility_m5F33C7B41C04A03A8B9B1601DCE466AB1CF7766F (NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 * __this, bool ___visible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m107B791DBC1E809192456359DFF8B8F45A84EAA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (Renderer rend in GetComponentsInChildren<Renderer>())
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_0;
		L_0 = Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m107B791DBC1E809192456359DFF8B8F45A84EAA1(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m107B791DBC1E809192456359DFF8B8F45A84EAA1_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (Renderer rend in GetComponentsInChildren<Renderer>())
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// rend.enabled = visible;
		bool L_5 = ___visible0;
		NullCheck(L_4);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0018:
	{
		// foreach (Renderer rend in GetComponentsInChildren<Renderer>())
		int32_t L_7 = V_1;
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mirror.NetworkVisibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVisibility__ctor_m113F49AE3B33B035A6132DC95F52F21506C4BA63 (NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 * __this, const RuntimeMethod* method)
{
	{
		NetworkBehaviour__ctor_mB98FF8F52DCEBEB3BC7679DE03FA50785207EE78(__this, /*hidden argument*/NULL);
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
// System.Int32 Mirror.NetworkWriter::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkWriter_get_Length_m814675F5934A7C6E09BC3EAC5294B0B71EA96C95 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, const RuntimeMethod* method)
{
	{
		// public int Length => length;
		int32_t L_0 = __this->get_length_3();
		return L_0;
	}
}
// System.Int32 Mirror.NetworkWriter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkWriter_get_Position_mCC619999A1AD046AD2377028073AABAEBD1A7BFD (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, const RuntimeMethod* method)
{
	{
		// get => position;
		int32_t L_0 = __this->get_position_2();
		return L_0;
	}
}
// System.Void Mirror.NetworkWriter::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_set_Position_m201FBEA9E80A82E2BEC2C2BF48D4C80F1258BE57 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// position = value;
		int32_t L_0 = ___value0;
		__this->set_position_2(L_0);
		// EnsureLength(value);
		int32_t L_1 = ___value0;
		NetworkWriter_EnsureLength_mE32CDE81422866487CE9EF603DC16106877E7942_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Reset_m9F34945A36E170550D63E41D2CF9C26ACB03FF77 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, const RuntimeMethod* method)
{
	{
		// position = 0;
		__this->set_position_2(0);
		// length = 0;
		__this->set_length_3(0);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriter::SetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_SetLength_m772F0AB2AC0AE5DEDD1EBBE19B86196ED78E240D (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, int32_t ___newLength0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int oldLength = length;
		int32_t L_0 = __this->get_length_3();
		V_0 = L_0;
		// EnsureLength(newLength);
		int32_t L_1 = ___newLength0;
		NetworkWriter_EnsureLength_mE32CDE81422866487CE9EF603DC16106877E7942_inline(__this, L_1, /*hidden argument*/NULL);
		// if (oldLength < newLength)
		int32_t L_2 = V_0;
		int32_t L_3 = ___newLength0;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0021;
		}
	}
	{
		// Array.Clear(buffer, oldLength, newLength - oldLength);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_buffer_1();
		int32_t L_5 = V_0;
		int32_t L_6 = ___newLength0;
		int32_t L_7 = V_0;
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_4, L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), /*hidden argument*/NULL);
	}

IL_0021:
	{
		// length = newLength;
		int32_t L_8 = ___newLength0;
		__this->set_length_3(L_8);
		// position = Mathf.Min(position, length);
		int32_t L_9 = __this->get_position_2();
		int32_t L_10 = __this->get_length_3();
		int32_t L_11;
		L_11 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_9, L_10, /*hidden argument*/NULL);
		__this->set_position_2(L_11);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriter::EnsureLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_EnsureLength_mE32CDE81422866487CE9EF603DC16106877E7942 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (length < value)
		int32_t L_0 = __this->get_length_3();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		// length = value;
		int32_t L_2 = ___value0;
		__this->set_length_3(L_2);
		// EnsureCapacity(value);
		int32_t L_3 = ___value0;
		NetworkWriter_EnsureCapacity_m8686EBB645C1892C928AB87D8FD73148B547BDC9_inline(__this, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriter::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_EnsureCapacity_m8686EBB645C1892C928AB87D8FD73148B547BDC9 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (buffer.Length < value)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_buffer_1();
		NullCheck(L_0);
		int32_t L_1 = ___value0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) >= ((int32_t)L_1)))
		{
			goto IL_0028;
		}
	}
	{
		// int capacity = Math.Max(value, buffer.Length * 2);
		int32_t L_2 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_buffer_1();
		NullCheck(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_2, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_4;
		// Array.Resize(ref buffer, capacity);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_5 = __this->get_address_of_buffer_1();
		int32_t L_6 = V_0;
		Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_5, L_6, /*hidden argument*/Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055_RuntimeMethod_var);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Byte[] Mirror.NetworkWriter::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NetworkWriter_ToArray_mC9A28117C639BA09B09A43343D3D3A3488A187E7 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// byte[] data = new byte[length];
		int32_t L_0 = __this->get_length_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// Array.ConstrainedCopy(buffer, 0, data, 0, length);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_buffer_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		int32_t L_4 = __this->get_length_3();
		Array_ConstrainedCopy_mD26D19D1D515C4D884E36327A9B0C2BA79CD7003((RuntimeArray *)(RuntimeArray *)L_2, 0, (RuntimeArray *)(RuntimeArray *)L_3, 0, L_4, /*hidden argument*/NULL);
		// return data;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		return L_5;
	}
}
// System.ArraySegment`1<System.Byte> Mirror.NetworkWriter::ToArraySegment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  NetworkWriter_ToArraySegment_m20B3969C06F4320029AD66A820B0523A8D6641EF (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ArraySegment<byte>(buffer, 0, length);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_buffer_1();
		int32_t L_1 = __this->get_length_3();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_2), L_0, 0, L_1, /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Mirror.NetworkWriter::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// EnsureLength(position + 1);
		int32_t L_0 = __this->get_position_2();
		NetworkWriter_EnsureLength_mE32CDE81422866487CE9EF603DC16106877E7942_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// buffer[position++] = value;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_buffer_1();
		int32_t L_2 = __this->get_position_2();
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->set_position_2(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = V_0;
		uint8_t L_5 = ___value0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)L_5);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriter::WriteBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytes_m1EF0FDBA6E07D885F57CB524710524715BB7E374 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		// EnsureLength(position + count);
		int32_t L_0 = __this->get_position_2();
		int32_t L_1 = ___count2;
		NetworkWriter_EnsureLength_mE32CDE81422866487CE9EF603DC16106877E7942_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		// Array.ConstrainedCopy(buffer, offset, this.buffer, position, count);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___buffer0;
		int32_t L_3 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_buffer_1();
		int32_t L_5 = __this->get_position_2();
		int32_t L_6 = ___count2;
		Array_ConstrainedCopy_mD26D19D1D515C4D884E36327A9B0C2BA79CD7003((RuntimeArray *)(RuntimeArray *)L_2, L_3, (RuntimeArray *)(RuntimeArray *)L_4, L_5, L_6, /*hidden argument*/NULL);
		// position += count;
		int32_t L_7 = __this->get_position_2();
		int32_t L_8 = ___count2;
		__this->set_position_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter__ctor_mD3E7B77EDCCE633CFEE83EBC1DB06355D0460A5F (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// byte[] buffer = new byte[1500];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1500));
		__this->set_buffer_1(L_0);
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
// System.Void Mirror.NetworkWriterExtensions::WriteByte(Mirror.NetworkWriter,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteByte_mFFEFC20C5AB176841BBBE10C1E4A866EAF369B96 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint8_t ___value1, const RuntimeMethod* method)
{
	{
		// public static void WriteByte(this NetworkWriter writer, byte value) => writer.WriteByte(value);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		uint8_t L_1 = ___value1;
		NullCheck(L_0);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteSByte(Mirror.NetworkWriter,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteSByte_m9AA9E2E5390BD4AC9CEA8A05EAE1234D9C48B8C8 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, int8_t ___value1, const RuntimeMethod* method)
{
	{
		// public static void WriteSByte(this NetworkWriter writer, sbyte value) => writer.WriteByte((byte)value);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		int8_t L_1 = ___value1;
		NullCheck(L_0);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_0, (uint8_t)((int32_t)((uint8_t)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteChar(Mirror.NetworkWriter,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteChar_m14899B6388B37CA68D9BA49CF0BE0C3EE956E49E (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void WriteChar(this NetworkWriter writer, char value) => writer.WriteUInt16(value);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		Il2CppChar L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt16_m7F8221AB37BDB8AC0765BDA883C6CA916CC812F4(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteBoolean(Mirror.NetworkWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteBoolean_m1286C9865F21B0EB024250572C0ADDC319782162 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, bool ___value1, const RuntimeMethod* method)
{
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * G_B2_0 = NULL;
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * G_B3_1 = NULL;
	{
		// public static void WriteBoolean(this NetworkWriter writer, bool value) => writer.WriteByte((byte)(value ? 1 : 0));
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		bool L_1 = ___value1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0008:
	{
		NullCheck(G_B3_1);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(G_B3_1, (uint8_t)((int32_t)((uint8_t)G_B3_0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteUInt16(Mirror.NetworkWriter,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteUInt16_m7F8221AB37BDB8AC0765BDA883C6CA916CC812F4 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint16_t ___value1, const RuntimeMethod* method)
{
	{
		// writer.WriteByte((byte)value);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		uint16_t L_1 = ___value1;
		NullCheck(L_0);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_0, (uint8_t)((int32_t)((uint8_t)L_1)), /*hidden argument*/NULL);
		// writer.WriteByte((byte)(value >> 8));
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		uint16_t L_3 = ___value1;
		NullCheck(L_2);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_2, (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_3>>(int32_t)8)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteInt16(Mirror.NetworkWriter,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteInt16_m5C7AE32A24F49E8EE8F42BE01BF5B5D7065FB47F (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, int16_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void WriteInt16(this NetworkWriter writer, short value) => writer.WriteUInt16((ushort)value);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		int16_t L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt16_m7F8221AB37BDB8AC0765BDA883C6CA916CC812F4(L_0, (uint16_t)((int32_t)((uint16_t)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteUInt32(Mirror.NetworkWriter,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint32_t ___value1, const RuntimeMethod* method)
{
	{
		// writer.WriteByte((byte)value);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		uint32_t L_1 = ___value1;
		NullCheck(L_0);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_0, (uint8_t)((int32_t)((uint8_t)L_1)), /*hidden argument*/NULL);
		// writer.WriteByte((byte)(value >> 8));
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		uint32_t L_3 = ___value1;
		NullCheck(L_2);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_2, (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_3>>8)))), /*hidden argument*/NULL);
		// writer.WriteByte((byte)(value >> 16));
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_4 = ___writer0;
		uint32_t L_5 = ___value1;
		NullCheck(L_4);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_4, (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_5>>((int32_t)16))))), /*hidden argument*/NULL);
		// writer.WriteByte((byte)(value >> 24));
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		uint32_t L_7 = ___value1;
		NullCheck(L_6);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_6, (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_7>>((int32_t)24))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteInt32(Mirror.NetworkWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void WriteInt32(this NetworkWriter writer, int value) => writer.WriteUInt32((uint)value);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		int32_t L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteUInt64(Mirror.NetworkWriter,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteUInt64_mD91BA22C056821BD989BFF2480CCCA9A65120A86 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint64_t ___value1, const RuntimeMethod* method)
{
	{
		// writer.WriteByte((byte)value);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		uint64_t L_1 = ___value1;
		NullCheck(L_0);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_0, (uint8_t)((int32_t)((uint8_t)L_1)), /*hidden argument*/NULL);
		// writer.WriteByte((byte)(value >> 8));
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		uint64_t L_3 = ___value1;
		NullCheck(L_2);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_2, (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_3>>8)))), /*hidden argument*/NULL);
		// writer.WriteByte((byte)(value >> 16));
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_4 = ___writer0;
		uint64_t L_5 = ___value1;
		NullCheck(L_4);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_4, (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_5>>((int32_t)16))))), /*hidden argument*/NULL);
		// writer.WriteByte((byte)(value >> 24));
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		uint64_t L_7 = ___value1;
		NullCheck(L_6);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_6, (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_7>>((int32_t)24))))), /*hidden argument*/NULL);
		// writer.WriteByte((byte)(value >> 32));
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_8 = ___writer0;
		uint64_t L_9 = ___value1;
		NullCheck(L_8);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_8, (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_9>>((int32_t)32))))), /*hidden argument*/NULL);
		// writer.WriteByte((byte)(value >> 40));
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_10 = ___writer0;
		uint64_t L_11 = ___value1;
		NullCheck(L_10);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_10, (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_11>>((int32_t)40))))), /*hidden argument*/NULL);
		// writer.WriteByte((byte)(value >> 48));
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_12 = ___writer0;
		uint64_t L_13 = ___value1;
		NullCheck(L_12);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_12, (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_13>>((int32_t)48))))), /*hidden argument*/NULL);
		// writer.WriteByte((byte)(value >> 56));
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_14 = ___writer0;
		uint64_t L_15 = ___value1;
		NullCheck(L_14);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_14, (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_15>>((int32_t)56))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteInt64(Mirror.NetworkWriter,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteInt64_m381C3EB4FED2C7C18CD6630ACCAC174FFC5E3C9C (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void WriteInt64(this NetworkWriter writer, long value) => writer.WriteUInt64((ulong)value);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		int64_t L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt64_mD91BA22C056821BD989BFF2480CCCA9A65120A86(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteSingle(Mirror.NetworkWriter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UIntFloat_tA5824058E34E6601B0A9E2C4D7A3C7AEAE17EEA2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UIntFloat_tA5824058E34E6601B0A9E2C4D7A3C7AEAE17EEA2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// UIntFloat converter = new UIntFloat
		// {
		//     floatValue = value
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(UIntFloat_tA5824058E34E6601B0A9E2C4D7A3C7AEAE17EEA2 ));
		float L_0 = ___value1;
		(&V_1)->set_floatValue_0(L_0);
		UIntFloat_tA5824058E34E6601B0A9E2C4D7A3C7AEAE17EEA2  L_1 = V_1;
		V_0 = L_1;
		// writer.WriteUInt32(converter.intValue);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		UIntFloat_tA5824058E34E6601B0A9E2C4D7A3C7AEAE17EEA2  L_3 = V_0;
		uint32_t L_4 = L_3.get_intValue_1();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteDouble(Mirror.NetworkWriter,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteDouble_m40D19C266720079063B22A53B6940E1CF6482BFC (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, double ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UIntDouble_tD7631611195CC431544DA1D1D756CF4AD2E4A0C5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UIntDouble_tD7631611195CC431544DA1D1D756CF4AD2E4A0C5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// UIntDouble converter = new UIntDouble
		// {
		//     doubleValue = value
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(UIntDouble_tD7631611195CC431544DA1D1D756CF4AD2E4A0C5 ));
		double L_0 = ___value1;
		(&V_1)->set_doubleValue_0(L_0);
		UIntDouble_tD7631611195CC431544DA1D1D756CF4AD2E4A0C5  L_1 = V_1;
		V_0 = L_1;
		// writer.WriteUInt64(converter.longValue);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		UIntDouble_tD7631611195CC431544DA1D1D756CF4AD2E4A0C5  L_3 = V_0;
		uint64_t L_4 = L_3.get_longValue_1();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt64_mD91BA22C056821BD989BFF2480CCCA9A65120A86(L_2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteDecimal(Mirror.NetworkWriter,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteDecimal_m1F5400E8F7D91C15538FC724A4B430A818479431 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UIntDecimal_tC67A3835278EF66633BC0F943E68922BDEE84DB9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UIntDecimal_tC67A3835278EF66633BC0F943E68922BDEE84DB9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// UIntDecimal converter = new UIntDecimal
		// {
		//     decimalValue = value
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(UIntDecimal_tC67A3835278EF66633BC0F943E68922BDEE84DB9 ));
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_0 = ___value1;
		(&V_1)->set_decimalValue_2(L_0);
		UIntDecimal_tC67A3835278EF66633BC0F943E68922BDEE84DB9  L_1 = V_1;
		V_0 = L_1;
		// writer.WriteUInt64(converter.longValue1);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		UIntDecimal_tC67A3835278EF66633BC0F943E68922BDEE84DB9  L_3 = V_0;
		uint64_t L_4 = L_3.get_longValue1_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt64_mD91BA22C056821BD989BFF2480CCCA9A65120A86(L_2, L_4, /*hidden argument*/NULL);
		// writer.WriteUInt64(converter.longValue2);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_5 = ___writer0;
		UIntDecimal_tC67A3835278EF66633BC0F943E68922BDEE84DB9  L_6 = V_0;
		uint64_t L_7 = L_6.get_longValue2_1();
		NetworkWriterExtensions_WriteUInt64_mD91BA22C056821BD989BFF2480CCCA9A65120A86(L_5, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteString(Mirror.NetworkWriter,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (value == null)
		String_t* L_0 = ___value1;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// writer.WriteUInt16(0);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_1 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt16_m7F8221AB37BDB8AC0765BDA883C6CA916CC812F4(L_1, (uint16_t)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_000b:
	{
		// int size = encoding.GetBytes(value, 0, value.Length, stringBuffer, 0);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_2 = ((NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var))->get_encoding_0();
		String_t* L_3 = ___value1;
		String_t* L_4 = ___value1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ((NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var))->get_stringBuffer_1();
		NullCheck(L_2);
		int32_t L_7;
		L_7 = VirtFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(16 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_2, L_3, 0, L_5, L_6, 0);
		V_0 = L_7;
		// if (size >= NetworkWriter.MaxStringLength)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)32768))))
		{
			goto IL_0055;
		}
	}
	{
		// throw new IndexOutOfRangeException("NetworkWriter.Write(string) too long: " + size + ". Limit: " + NetworkWriter.MaxStringLength);
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = ((int32_t)32768);
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral391EF5DC7DA4ED709D44D902C5F5ADD1B584357A)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA00A6ED1079D9BFA0747625B3DBAEAB49075A9D7)), L_10, /*hidden argument*/NULL);
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_12 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F_RuntimeMethod_var)));
	}

IL_0055:
	{
		// writer.WriteUInt16(checked((ushort)(size + 1)));
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_13 = ___writer0;
		int32_t L_14 = V_0;
		if (((int64_t)L_14 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_14 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1))) > 65535LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt16_m7F8221AB37BDB8AC0765BDA883C6CA916CC812F4(L_13, ((uint16_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)))), /*hidden argument*/NULL);
		// writer.WriteBytes(stringBuffer, 0, size);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_15 = ___writer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ((NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var))->get_stringBuffer_1();
		int32_t L_17 = V_0;
		NullCheck(L_15);
		NetworkWriter_WriteBytes_m1EF0FDBA6E07D885F57CB524710524715BB7E374(L_15, L_16, 0, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteBytesAndSize(Mirror.NetworkWriter,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteBytesAndSize_m75E79671D06A8D7C3CA09E02844E6316F3A3E56B (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, int32_t ___offset2, int32_t ___count3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_WriteBytesAndSize_m75E79671D06A8D7C3CA09E02844E6316F3A3E56B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buffer == null)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer1;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// writer.WriteUInt32(0u);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_1 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_1, 0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_000b:
	{
		// writer.WriteUInt32(checked((uint)count) + 1u);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		int32_t L_3 = ___count3;
		if ((int64_t)(L_3) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NetworkWriterExtensions_WriteBytesAndSize_m75E79671D06A8D7C3CA09E02844E6316F3A3E56B_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_2, ((int32_t)il2cpp_codegen_add((int32_t)((uint32_t)((uint32_t)L_3)), (int32_t)1)), /*hidden argument*/NULL);
		// writer.WriteBytes(buffer, offset, count);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_4 = ___writer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___buffer1;
		int32_t L_6 = ___offset2;
		int32_t L_7 = ___count3;
		NullCheck(L_4);
		NetworkWriter_WriteBytes_m1EF0FDBA6E07D885F57CB524710524715BB7E374(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteBytesAndSize(Mirror.NetworkWriter,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteBytesAndSize_mB11A8C12622432C14420D616F763F130DD1A91C9 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B2_1 = NULL;
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B1_1 = NULL;
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_2 = NULL;
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * G_B3_3 = NULL;
	{
		// writer.WriteBytesAndSize(buffer, 0, buffer != null ? buffer.Length : 0);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___buffer1;
		G_B1_0 = 0;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_2)
		{
			G_B2_0 = 0;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_000c;
	}

IL_0009:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer1;
		NullCheck(L_3);
		G_B3_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteBytesAndSize_m75E79671D06A8D7C3CA09E02844E6316F3A3E56B(G_B3_3, G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteBytesAndSizeSegment(Mirror.NetworkWriter,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteBytesAndSizeSegment_mAD214D7E8A080A5615D400A6C3F2F5218F3AD11B (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___buffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteBytesAndSize(buffer.Array, buffer.Offset, buffer.Count);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___buffer1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_2;
		L_2 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___buffer1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		int32_t L_3;
		L_3 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___buffer1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteBytesAndSize_m75E79671D06A8D7C3CA09E02844E6316F3A3E56B(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteVector2(Mirror.NetworkWriter,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteVector2_m52B333B1242AC5E0490DA980D5954157FDF9949F (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteSingle(value.x);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___value1;
		float L_2 = L_1.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_0, L_2, /*hidden argument*/NULL);
		// writer.WriteSingle(value.y);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___value1;
		float L_5 = L_4.get_y_1();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteVector3(Mirror.NetworkWriter,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteSingle(value.x);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___value1;
		float L_2 = L_1.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_0, L_2, /*hidden argument*/NULL);
		// writer.WriteSingle(value.y);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___value1;
		float L_5 = L_4.get_y_3();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_3, L_5, /*hidden argument*/NULL);
		// writer.WriteSingle(value.z);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___value1;
		float L_8 = L_7.get_z_4();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_6, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteVector4(Mirror.NetworkWriter,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteVector4_mE75893C683F8C655244CE272B0B050662E751414 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteSingle(value.x);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___value1;
		float L_2 = L_1.get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_0, L_2, /*hidden argument*/NULL);
		// writer.WriteSingle(value.y);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___value1;
		float L_5 = L_4.get_y_2();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_3, L_5, /*hidden argument*/NULL);
		// writer.WriteSingle(value.z);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7 = ___value1;
		float L_8 = L_7.get_z_3();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_6, L_8, /*hidden argument*/NULL);
		// writer.WriteSingle(value.w);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_9 = ___writer0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___value1;
		float L_11 = L_10.get_w_4();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_9, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteVector2Int(Mirror.NetworkWriter,UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteVector2Int_mDA0A622A19099A741DE393233204CD6FB89FF75A (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteInt32(value.x);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		int32_t L_1;
		L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___value1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A(L_0, L_1, /*hidden argument*/NULL);
		// writer.WriteInt32(value.y);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___value1), /*hidden argument*/NULL);
		NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteVector3Int(Mirror.NetworkWriter,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteVector3Int_m4911D397D68D855E386699BB99ECF4BD0F5F7060 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteInt32(value.x);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		int32_t L_1;
		L_1 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___value1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A(L_0, L_1, /*hidden argument*/NULL);
		// writer.WriteInt32(value.y);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		int32_t L_3;
		L_3 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___value1), /*hidden argument*/NULL);
		NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A(L_2, L_3, /*hidden argument*/NULL);
		// writer.WriteInt32(value.z);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_4 = ___writer0;
		int32_t L_5;
		L_5 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___value1), /*hidden argument*/NULL);
		NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteColor(Mirror.NetworkWriter,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteColor_m7EA61C4CEE7C0F49BCAF7339D1A76F4ECA50626E (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteSingle(value.r);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___value1;
		float L_2 = L_1.get_r_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_0, L_2, /*hidden argument*/NULL);
		// writer.WriteSingle(value.g);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ___value1;
		float L_5 = L_4.get_g_1();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_3, L_5, /*hidden argument*/NULL);
		// writer.WriteSingle(value.b);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ___value1;
		float L_8 = L_7.get_b_2();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_6, L_8, /*hidden argument*/NULL);
		// writer.WriteSingle(value.a);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_9 = ___writer0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = ___value1;
		float L_11 = L_10.get_a_3();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_9, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteColor32(Mirror.NetworkWriter,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteColor32_mC430555DAD65FA8A1ACA7117122960F6412B3079 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___value1, const RuntimeMethod* method)
{
	{
		// writer.WriteByte(value.r);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_1 = ___value1;
		uint8_t L_2 = L_1.get_r_1();
		NullCheck(L_0);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_0, L_2, /*hidden argument*/NULL);
		// writer.WriteByte(value.g);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_4 = ___value1;
		uint8_t L_5 = L_4.get_g_2();
		NullCheck(L_3);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_3, L_5, /*hidden argument*/NULL);
		// writer.WriteByte(value.b);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_7 = ___value1;
		uint8_t L_8 = L_7.get_b_3();
		NullCheck(L_6);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_6, L_8, /*hidden argument*/NULL);
		// writer.WriteByte(value.a);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_9 = ___writer0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_10 = ___value1;
		uint8_t L_11 = L_10.get_a_4();
		NullCheck(L_9);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_9, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteQuaternion(Mirror.NetworkWriter,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteQuaternion_m96A981CD95861D3F23358155CD1CCBCDF185D909 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteSingle(value.x);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___value1;
		float L_2 = L_1.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_0, L_2, /*hidden argument*/NULL);
		// writer.WriteSingle(value.y);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = ___value1;
		float L_5 = L_4.get_y_1();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_3, L_5, /*hidden argument*/NULL);
		// writer.WriteSingle(value.z);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = ___value1;
		float L_8 = L_7.get_z_2();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_6, L_8, /*hidden argument*/NULL);
		// writer.WriteSingle(value.w);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_9 = ___writer0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = ___value1;
		float L_11 = L_10.get_w_3();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_9, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteRect(Mirror.NetworkWriter,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteRect_m1C462FFD3B7FE7B73B6F733CDECEDCBFFF9F3A05 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteSingle(value.xMin);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		float L_1;
		L_1 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___value1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_0, L_1, /*hidden argument*/NULL);
		// writer.WriteSingle(value.yMin);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		float L_3;
		L_3 = Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___value1), /*hidden argument*/NULL);
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_2, L_3, /*hidden argument*/NULL);
		// writer.WriteSingle(value.width);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_4 = ___writer0;
		float L_5;
		L_5 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___value1), /*hidden argument*/NULL);
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_4, L_5, /*hidden argument*/NULL);
		// writer.WriteSingle(value.height);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		float L_7;
		L_7 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___value1), /*hidden argument*/NULL);
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WritePlane(Mirror.NetworkWriter,UnityEngine.Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WritePlane_m75F27F25C9E50A60C635D376D4C1D993D1376A97 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteVector3(value.normal);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Plane_get_normal_m71CB4BAB04EE04CAEF9AD272B16766800F7D556B((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&___value1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609(L_0, L_1, /*hidden argument*/NULL);
		// writer.WriteSingle(value.distance);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		float L_3;
		L_3 = Plane_get_distance_mB36C8725BD4228914F0410F4B45E12496A1D87D7((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&___value1), /*hidden argument*/NULL);
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteRay(Mirror.NetworkWriter,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteRay_mF907AD59F7170BBB74CF49611FBBAF069DD6D1F2 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteVector3(value.origin);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&___value1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609(L_0, L_1, /*hidden argument*/NULL);
		// writer.WriteVector3(value.direction);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&___value1), /*hidden argument*/NULL);
		NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteMatrix4x4(Mirror.NetworkWriter,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteMatrix4x4_m40B7941CFBB2912FA11AFB35F5729E4F2383BEAD (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteSingle(value.m00);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1 = ___value1;
		float L_2 = L_1.get_m00_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_0, L_2, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m01);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4 = ___value1;
		float L_5 = L_4.get_m01_4();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_3, L_5, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m02);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_7 = ___value1;
		float L_8 = L_7.get_m02_8();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_6, L_8, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m03);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_9 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10 = ___value1;
		float L_11 = L_10.get_m03_12();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_9, L_11, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m10);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_12 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_13 = ___value1;
		float L_14 = L_13.get_m10_1();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_12, L_14, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m11);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_15 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_16 = ___value1;
		float L_17 = L_16.get_m11_5();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_15, L_17, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m12);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_18 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_19 = ___value1;
		float L_20 = L_19.get_m12_9();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_18, L_20, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m13);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_21 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_22 = ___value1;
		float L_23 = L_22.get_m13_13();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_21, L_23, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m20);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_24 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_25 = ___value1;
		float L_26 = L_25.get_m20_2();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_24, L_26, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m21);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_27 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_28 = ___value1;
		float L_29 = L_28.get_m21_6();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_27, L_29, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m22);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_30 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_31 = ___value1;
		float L_32 = L_31.get_m22_10();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_30, L_32, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m23);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_33 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_34 = ___value1;
		float L_35 = L_34.get_m23_14();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_33, L_35, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m30);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_36 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_37 = ___value1;
		float L_38 = L_37.get_m30_3();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_36, L_38, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m31);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_39 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_40 = ___value1;
		float L_41 = L_40.get_m31_7();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_39, L_41, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m32);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_42 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_43 = ___value1;
		float L_44 = L_43.get_m32_11();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_42, L_44, /*hidden argument*/NULL);
		// writer.WriteSingle(value.m33);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_45 = ___writer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_46 = ___value1;
		float L_47 = L_46.get_m33_15();
		NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08(L_45, L_47, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteGuid(Mirror.NetworkWriter,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteGuid_m1700462B08DC1D6B80FF00521C50C5A85E781AFB (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Guid_t  ___value1, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// byte[] data = value.ToByteArray();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = Guid_ToByteArray_mFD26B992E49518AE955F1FE244A9464A5E347E0A((Guid_t *)(&___value1), /*hidden argument*/NULL);
		V_0 = L_0;
		// writer.WriteBytes(data, 0, data.Length);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_1 = ___writer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		NullCheck(L_3);
		NullCheck(L_1);
		NetworkWriter_WriteBytes_m1EF0FDBA6E07D885F57CB524710524715BB7E374(L_1, L_2, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteNetworkIdentity(Mirror.NetworkWriter,Mirror.NetworkIdentity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteNetworkIdentity_m6B7BF775A09551E47F1E98F2603E0C3B8358FC64 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_0 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// writer.WriteUInt32(0);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_2, 0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0011:
	{
		// writer.WriteUInt32(value.netId);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_4 = ___value1;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = NetworkIdentity_get_netId_m3FF02B719B8AE0B6A3483063A373AFFB2489C0FA_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteNetworkBehaviour(Mirror.NetworkWriter,Mirror.NetworkBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteNetworkBehaviour_mCA7167729B04CFA80D5F7AB5D9C43FC24B4DF20D (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_0 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// writer.WriteUInt32(0);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_2, 0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0011:
	{
		// writer.WriteUInt32(value.netId);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_4 = ___value1;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = NetworkBehaviour_get_netId_mFD41F9D183B23443AA528BC0244E0835CCC94826(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_3, L_5, /*hidden argument*/NULL);
		// writer.WriteByte((byte)value.ComponentIndex);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_7 = ___value1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = NetworkBehaviour_get_ComponentIndex_mACCD123A66C72A3D062535CF936618C2158E9D76(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		NetworkWriter_WriteByte_mC22A6863F21D47005ECAD28F5AB6FC5248B23D0E(L_6, (uint8_t)((int32_t)((uint8_t)L_8)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteTransform(Mirror.NetworkWriter,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteTransform_m3118EFCE291DE2182B785E099FE30B3D68F36830 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_m0653D711C23EA0CC7B71B9BE2719632F36A7699D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32F9530362DC3D1DADF2EF37575FA3AE08D0E68B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE556AF7EE33D03AAB586B44414C6DBA3B8C1EDA2);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// if (value == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// writer.WriteUInt32(0);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_2, 0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0011:
	{
		// NetworkIdentity identity = value.GetComponent<NetworkIdentity>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___value1;
		NullCheck(L_3);
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_4;
		L_4 = Component_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_m0653D711C23EA0CC7B71B9BE2719632F36A7699D(L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_m0653D711C23EA0CC7B71B9BE2719632F36A7699D_RuntimeMethod_var);
		V_0 = L_4;
		// if (identity != null)
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		// writer.WriteUInt32(identity.netId);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_7 = ___writer0;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_8 = V_0;
		NullCheck(L_8);
		uint32_t L_9;
		L_9 = NetworkIdentity_get_netId_m3FF02B719B8AE0B6A3483063A373AFFB2489C0FA_inline(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_7, L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// Debug.LogWarning("NetworkWriter " + value + " has no NetworkIdentity");
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = ___value1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10;
		G_B5_0 = L_11;
		G_B5_1 = _stringLiteral32F9530362DC3D1DADF2EF37575FA3AE08D0E68B;
		if (L_11)
		{
			G_B6_0 = L_11;
			G_B6_1 = _stringLiteral32F9530362DC3D1DADF2EF37575FA3AE08D0E68B;
			goto IL_003b;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_0040;
	}

IL_003b:
	{
		NullCheck(G_B6_0);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
		G_B7_0 = L_12;
		G_B7_1 = G_B6_1;
	}

IL_0040:
	{
		String_t* L_13;
		L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B7_1, G_B7_0, _stringLiteralE556AF7EE33D03AAB586B44414C6DBA3B8C1EDA2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_13, /*hidden argument*/NULL);
		// writer.WriteUInt32(0);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_14 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_14, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteGameObject(Mirror.NetworkWriter,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteGameObject_m461FDFA27D93D42B1C6C1B5F84EC2314E479E45B (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mFA75ACF3666006F9878974466A488C75BBD28247_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32F9530362DC3D1DADF2EF37575FA3AE08D0E68B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE556AF7EE33D03AAB586B44414C6DBA3B8C1EDA2);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// if (value == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// writer.WriteUInt32(0);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_2 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_2, 0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0011:
	{
		// NetworkIdentity identity = value.GetComponent<NetworkIdentity>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___value1;
		NullCheck(L_3);
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_4;
		L_4 = GameObject_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mFA75ACF3666006F9878974466A488C75BBD28247(L_3, /*hidden argument*/GameObject_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mFA75ACF3666006F9878974466A488C75BBD28247_RuntimeMethod_var);
		V_0 = L_4;
		// if (identity != null)
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		// writer.WriteUInt32(identity.netId);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_7 = ___writer0;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_8 = V_0;
		NullCheck(L_8);
		uint32_t L_9;
		L_9 = NetworkIdentity_get_netId_m3FF02B719B8AE0B6A3483063A373AFFB2489C0FA_inline(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_7, L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// Debug.LogWarning("NetworkWriter " + value + " has no NetworkIdentity");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = ___value1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10;
		G_B5_0 = L_11;
		G_B5_1 = _stringLiteral32F9530362DC3D1DADF2EF37575FA3AE08D0E68B;
		if (L_11)
		{
			G_B6_0 = L_11;
			G_B6_1 = _stringLiteral32F9530362DC3D1DADF2EF37575FA3AE08D0E68B;
			goto IL_003b;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_0040;
	}

IL_003b:
	{
		NullCheck(G_B6_0);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
		G_B7_0 = L_12;
		G_B7_1 = G_B6_1;
	}

IL_0040:
	{
		String_t* L_13;
		L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B7_1, G_B7_0, _stringLiteralE556AF7EE33D03AAB586B44414C6DBA3B8C1EDA2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_13, /*hidden argument*/NULL);
		// writer.WriteUInt32(0);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_14 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_14, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::WriteUri(Mirror.NetworkWriter,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteUri_mECC3E974CD9C900CEBB24E5E4743DF2D41E3533F (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteString(uri.ToString());
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___uri1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions__cctor_mEF540B4CE4511D89773F16F2D0E8092600455D59 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly UTF8Encoding encoding = new UTF8Encoding(false, true);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mD752778085A353529AF03841383E5603FE556449(L_0, (bool)0, (bool)1, /*hidden argument*/NULL);
		((NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var))->set_encoding_0(L_0);
		// static readonly byte[] stringBuffer = new byte[NetworkWriter.MaxStringLength];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768));
		((NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var))->set_stringBuffer_1(L_1);
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
// Mirror.PooledNetworkWriter Mirror.NetworkWriterPool::GetWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * NetworkWriterPool_GetWriter_m53506C8016911951C82F2F83E45592CE2F9A85AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Take_m628ADF7444CCF6B68881A9A0E019168146396EFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PooledNetworkWriter writer = Pool.Take();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 * L_0 = ((NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var))->get_Pool_0();
		NullCheck(L_0);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_1;
		L_1 = Pool_1_Take_m628ADF7444CCF6B68881A9A0E019168146396EFB(L_0, /*hidden argument*/Pool_1_Take_m628ADF7444CCF6B68881A9A0E019168146396EFB_RuntimeMethod_var);
		// writer.Reset();
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_2 = L_1;
		NullCheck(L_2);
		NetworkWriter_Reset_m9F34945A36E170550D63E41D2CF9C26ACB03FF77(L_2, /*hidden argument*/NULL);
		// return writer;
		return L_2;
	}
}
// System.Void Mirror.NetworkWriterPool::Recycle(Mirror.PooledNetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterPool_Recycle_m8E7D8C8ED6F0856380CE750DBEF1D0EC5BAF8FB3 (PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Return_m205ADBFC1B5B4BBD90BE148C8EF6850041965BF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Pool.Return(writer);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 * L_0 = ((NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var))->get_Pool_0();
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_1 = ___writer0;
		NullCheck(L_0);
		Pool_1_Return_m205ADBFC1B5B4BBD90BE148C8EF6850041965BF4(L_0, L_1, /*hidden argument*/Pool_1_Return_m205ADBFC1B5B4BBD90BE148C8EF6850041965BF4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.NetworkWriterPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterPool__cctor_m9274ABE8EE4582DC7D9DF184F7F73F2DF3FC7CF3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mF9F45DC162459E01FF8BEDB7E1464FC767ABA62B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1__ctor_mA7FCF10D36E47802FA097F1FA00FC0C0489405DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__3_0_mB0A5B91C0E7EC65AD20C53B230FD500DECA1A061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Pool<PooledNetworkWriter> Pool = new Pool<PooledNetworkWriter>(
		//     () => new PooledNetworkWriter()
		// );
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4_il2cpp_TypeInfo_var);
		U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4 * L_0 = ((U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950 * L_1 = (Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950 *)il2cpp_codegen_object_new(Func_1_t8D5354E8F1B4A20B48AB3B40B3BBA3CFFAB24950_il2cpp_TypeInfo_var);
		Func_1__ctor_mF9F45DC162459E01FF8BEDB7E1464FC767ABA62B(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__3_0_mB0A5B91C0E7EC65AD20C53B230FD500DECA1A061_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mF9F45DC162459E01FF8BEDB7E1464FC767ABA62B_RuntimeMethod_var);
		Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 * L_2 = (Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06 *)il2cpp_codegen_object_new(Pool_1_tFBB03B623B19BB8D4A426CDF9D8C833FD2497A06_il2cpp_TypeInfo_var);
		Pool_1__ctor_mA7FCF10D36E47802FA097F1FA00FC0C0489405DE(L_2, L_1, /*hidden argument*/Pool_1__ctor_mA7FCF10D36E47802FA097F1FA00FC0C0489405DE_RuntimeMethod_var);
		((NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var))->set_Pool_0(L_2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.PooledNetworkReader::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledNetworkReader__ctor_mEAE1DCDFBAC4CCFA4D40970DE4D20B36931D656E (PooledNetworkReader_tD428721C991DFC38A2922BC2940E1816F0C6824C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	{
		// internal PooledNetworkReader(byte[] bytes) : base(bytes) {}
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NetworkReader__ctor_m7472356275E51A91FEE8FEF118A6AF2240F6417D(__this, L_0, /*hidden argument*/NULL);
		// internal PooledNetworkReader(byte[] bytes) : base(bytes) {}
		return;
	}
}
// System.Void Mirror.PooledNetworkReader::.ctor(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledNetworkReader__ctor_m576FB263D8FEA8501D96F220390DC912FEB24762 (PooledNetworkReader_tD428721C991DFC38A2922BC2940E1816F0C6824C * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment0, const RuntimeMethod* method)
{
	{
		// internal PooledNetworkReader(ArraySegment<byte> segment) : base(segment) {}
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_0 = ___segment0;
		NetworkReader__ctor_m73E59DA6A9DC39831B7EAC72DD9F9B29BA0918C0(__this, L_0, /*hidden argument*/NULL);
		// internal PooledNetworkReader(ArraySegment<byte> segment) : base(segment) {}
		return;
	}
}
// System.Void Mirror.PooledNetworkReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledNetworkReader_Dispose_mC35EBC46EDE36DB1EBCF9AFDDCE4375618D32A15 (PooledNetworkReader_tD428721C991DFC38A2922BC2940E1816F0C6824C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkReaderPool_t6FBE6C21699B8AE6D381BBBBD5AE3EE9A8FC283C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Dispose() => NetworkReaderPool.Recycle(this);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderPool_t6FBE6C21699B8AE6D381BBBBD5AE3EE9A8FC283C_il2cpp_TypeInfo_var);
		NetworkReaderPool_Recycle_mAD1BB938E53E18CF168736FB5256680DBBFD1535(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.PooledNetworkWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledNetworkWriter_Dispose_m4D1350BAFF1AE5BE1A2C6540EFACB15F02511A18 (PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Dispose() => NetworkWriterPool.Recycle(this);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		NetworkWriterPool_Recycle_m8E7D8C8ED6F0856380CE750DBEF1D0EC5BAF8FB3(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.PooledNetworkWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledNetworkWriter__ctor_m0575E62AABFA81E2F757C76EA455757C8F27B165 (PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * __this, const RuntimeMethod* method)
{
	{
		NetworkWriter__ctor_mD3E7B77EDCCE633CFEE83EBC1DB06355D0460A5F(__this, /*hidden argument*/NULL);
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
// System.Int32 Mirror.RemoteCalls.RemoteCallHelper::GetMethodHash(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteCallHelper_GetMethodHash_mA618B5FB67E05E07A97E30F731F381A7EF5E6AB4 (Type_t * ___invokeClass0, String_t* ___methodName1, const RuntimeMethod* method)
{
	{
		// int hash = invokeClass.FullName.GetStableHashCode();
		Type_t * L_0 = ___invokeClass0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_0);
		int32_t L_2;
		L_2 = Extensions_GetStableHashCode_m0592E21267B4D12BAF6A3124018FFDB85AA1EDB9(L_1, /*hidden argument*/NULL);
		// return hash * 503 + methodName.GetStableHashCode();
		String_t* L_3 = ___methodName1;
		int32_t L_4;
		L_4 = Extensions_GetStableHashCode_m0592E21267B4D12BAF6A3124018FFDB85AA1EDB9(L_3, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)503))), (int32_t)L_4));
	}
}
// System.Int32 Mirror.RemoteCalls.RemoteCallHelper::RegisterDelegate(System.Type,System.String,Mirror.MirrorInvokeType,Mirror.RemoteCalls.CmdDelegate,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteCallHelper_RegisterDelegate_mC8AD98E6FE1096C3FE88DAC05A2B09E3CDB5F977 (Type_t * ___invokeClass0, String_t* ___cmdName1, int32_t ___invokerType2, CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * ___func3, bool ___cmdRequiresAuthority4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mFADD4CD2C85FFA653C213C571D5B2664F02AC039_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * V_1 = NULL;
	{
		// int cmdHash = GetMethodHash(invokeClass, cmdName);
		Type_t * L_0 = ___invokeClass0;
		String_t* L_1 = ___cmdName1;
		IL2CPP_RUNTIME_CLASS_INIT(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = RemoteCallHelper_GetMethodHash_mA618B5FB67E05E07A97E30F731F381A7EF5E6AB4(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (CheckIfDeligateExists(invokeClass, invokerType, func, cmdHash))
		Type_t * L_3 = ___invokeClass0;
		int32_t L_4 = ___invokerType2;
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_5 = ___func3;
		int32_t L_6 = V_0;
		bool L_7;
		L_7 = RemoteCallHelper_CheckIfDeligateExists_mB7136608721A4539332B7C090A64CA13BEFCDBAA(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0015;
		}
	}
	{
		// return cmdHash;
		int32_t L_8 = V_0;
		return L_8;
	}

IL_0015:
	{
		// Invoker invoker = new Invoker
		// {
		//     invokeType = invokerType,
		//     invokeClass = invokeClass,
		//     invokeFunction = func,
		//     cmdRequiresAuthority = cmdRequiresAuthority,
		// };
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_9 = (Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 *)il2cpp_codegen_object_new(Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806_il2cpp_TypeInfo_var);
		Invoker__ctor_mAB4C1E969716FCF8DB4257BCF45F152446555DF4(L_9, /*hidden argument*/NULL);
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_10 = L_9;
		int32_t L_11 = ___invokerType2;
		NullCheck(L_10);
		L_10->set_invokeType_1(L_11);
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_12 = L_10;
		Type_t * L_13 = ___invokeClass0;
		NullCheck(L_12);
		L_12->set_invokeClass_0(L_13);
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_14 = L_12;
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_15 = ___func3;
		NullCheck(L_14);
		L_14->set_invokeFunction_2(L_15);
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_16 = L_14;
		bool L_17 = ___cmdRequiresAuthority4;
		NullCheck(L_16);
		L_16->set_cmdRequiresAuthority_3(L_17);
		V_1 = L_16;
		// cmdHandlerDelegates[cmdHash] = invoker;
		IL2CPP_RUNTIME_CLASS_INIT(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * L_18 = ((RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_StaticFields*)il2cpp_codegen_static_fields_for(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var))->get_cmdHandlerDelegates_0();
		int32_t L_19 = V_0;
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_20 = V_1;
		NullCheck(L_18);
		Dictionary_2_set_Item_mFADD4CD2C85FFA653C213C571D5B2664F02AC039(L_18, L_19, L_20, /*hidden argument*/Dictionary_2_set_Item_mFADD4CD2C85FFA653C213C571D5B2664F02AC039_RuntimeMethod_var);
		// return cmdHash;
		int32_t L_21 = V_0;
		return L_21;
	}
}
// System.Boolean Mirror.RemoteCalls.RemoteCallHelper::CheckIfDeligateExists(System.Type,Mirror.MirrorInvokeType,Mirror.RemoteCalls.CmdDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteCallHelper_CheckIfDeligateExists_mB7136608721A4539332B7C090A64CA13BEFCDBAA (Type_t * ___invokeClass0, int32_t ___invokerType1, CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * ___func2, int32_t ___cmdHash3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m2B36C7918C6E034FD810ECB4ED480BD2F84781BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m17BFA475EE36804655561118BB67DE9A7D6748BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E42F2000B4FADD094E0BD2AA1BA5C54F169667A);
		s_Il2CppMethodInitialized = true;
	}
	Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * V_0 = NULL;
	{
		// if (cmdHandlerDelegates.ContainsKey(cmdHash))
		IL2CPP_RUNTIME_CLASS_INIT(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * L_0 = ((RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_StaticFields*)il2cpp_codegen_static_fields_for(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var))->get_cmdHandlerDelegates_0();
		int32_t L_1 = ___cmdHash3;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m2B36C7918C6E034FD810ECB4ED480BD2F84781BC(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m2B36C7918C6E034FD810ECB4ED480BD2F84781BC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		// Invoker oldInvoker = cmdHandlerDelegates[cmdHash];
		IL2CPP_RUNTIME_CLASS_INIT(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * L_3 = ((RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_StaticFields*)il2cpp_codegen_static_fields_for(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var))->get_cmdHandlerDelegates_0();
		int32_t L_4 = ___cmdHash3;
		NullCheck(L_3);
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_5;
		L_5 = Dictionary_2_get_Item_m17BFA475EE36804655561118BB67DE9A7D6748BD(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m17BFA475EE36804655561118BB67DE9A7D6748BD_RuntimeMethod_var);
		V_0 = L_5;
		// if (oldInvoker.AreEqual(invokeClass, invokerType, func))
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_6 = V_0;
		Type_t * L_7 = ___invokeClass0;
		int32_t L_8 = ___invokerType1;
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_9 = ___func2;
		NullCheck(L_6);
		bool L_10;
		L_10 = Invoker_AreEqual_mECE8ABA850E084829C577D749E3E69F164829552(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0026;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0026:
	{
		// Debug.LogError($"Function {oldInvoker.invokeClass}.{oldInvoker.invokeFunction.GetMethodName()} and {invokeClass}.{func.GetMethodName()} have the same hash.  Please rename one of them");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_13 = V_0;
		NullCheck(L_13);
		Type_t * L_14 = L_13->get_invokeClass_0();
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_12;
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_16 = V_0;
		NullCheck(L_16);
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_17 = L_16->get_invokeFunction_2();
		String_t* L_18;
		L_18 = Extensions_GetMethodName_mBD201B7767E472A8E4F2116F18AD20D437783E0F(L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_15;
		Type_t * L_20 = ___invokeClass0;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_20);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_19;
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_22 = ___func2;
		String_t* L_23;
		L_23 = Extensions_GetMethodName_mBD201B7767E472A8E4F2116F18AD20D437783E0F(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_23);
		String_t* L_24;
		L_24 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral4E42F2000B4FADD094E0BD2AA1BA5C54F169667A, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_24, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Mirror.RemoteCalls.RemoteCallHelper::RegisterCommandDelegate(System.Type,System.String,Mirror.RemoteCalls.CmdDelegate,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCallHelper_RegisterCommandDelegate_m196440B96E1D7A909D38037A770734FC5139842F (Type_t * ___invokeClass0, String_t* ___cmdName1, CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * ___func2, bool ___requiresAuthority3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RegisterDelegate(invokeClass, cmdName, MirrorInvokeType.Command, func, requiresAuthority);
		Type_t * L_0 = ___invokeClass0;
		String_t* L_1 = ___cmdName1;
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_2 = ___func2;
		bool L_3 = ___requiresAuthority3;
		IL2CPP_RUNTIME_CLASS_INIT(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = RemoteCallHelper_RegisterDelegate_mC8AD98E6FE1096C3FE88DAC05A2B09E3CDB5F977(L_0, L_1, 0, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.RemoteCalls.RemoteCallHelper::RegisterRpcDelegate(System.Type,System.String,Mirror.RemoteCalls.CmdDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCallHelper_RegisterRpcDelegate_m3381432C36F433DF9E6D924514BEBAD8B37B7AC9 (Type_t * ___invokeClass0, String_t* ___rpcName1, CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * ___func2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RegisterDelegate(invokeClass, rpcName, MirrorInvokeType.ClientRpc, func);
		Type_t * L_0 = ___invokeClass0;
		String_t* L_1 = ___rpcName1;
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_2 = ___func2;
		IL2CPP_RUNTIME_CLASS_INIT(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = RemoteCallHelper_RegisterDelegate_mC8AD98E6FE1096C3FE88DAC05A2B09E3CDB5F977(L_0, L_1, 1, L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.RemoteCalls.RemoteCallHelper::RemoveDelegate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCallHelper_RemoveDelegate_m5E404B31C4616919F1755E414DF3C115693EC696 (int32_t ___hash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mE54F65E95E37762A387417D484FD204A4B02C332_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cmdHandlerDelegates.Remove(hash);
		IL2CPP_RUNTIME_CLASS_INIT(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * L_0 = ((RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_StaticFields*)il2cpp_codegen_static_fields_for(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var))->get_cmdHandlerDelegates_0();
		int32_t L_1 = ___hash0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_mE54F65E95E37762A387417D484FD204A4B02C332(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_mE54F65E95E37762A387417D484FD204A4B02C332_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Mirror.RemoteCalls.RemoteCallHelper::GetInvokerForHash(System.Int32,Mirror.MirrorInvokeType,Mirror.RemoteCalls.Invoker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteCallHelper_GetInvokerForHash_mEF65749F25DF0C8F8770F042978A52296834866E (int32_t ___cmdHash0, int32_t ___invokeType1, Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 ** ___invoker2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m13CCBED1F86108F9D5963871ED2B694227142DC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cmdHandlerDelegates.TryGetValue(cmdHash, out invoker) && invoker != null && invoker.invokeType == invokeType)
		IL2CPP_RUNTIME_CLASS_INIT(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * L_0 = ((RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_StaticFields*)il2cpp_codegen_static_fields_for(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var))->get_cmdHandlerDelegates_0();
		int32_t L_1 = ___cmdHash0;
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 ** L_2 = ___invoker2;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m13CCBED1F86108F9D5963871ED2B694227142DC5(L_0, L_1, (Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 **)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m13CCBED1F86108F9D5963871ED2B694227142DC5_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 ** L_4 = ___invoker2;
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_5 = *((Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 **)L_4);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 ** L_6 = ___invoker2;
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_7 = *((Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 **)L_6);
		NullCheck(L_7);
		int32_t L_8 = L_7->get_invokeType_1();
		int32_t L_9 = ___invokeType1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_001e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Mirror.RemoteCalls.RemoteCallHelper::InvokeHandlerDelegate(System.Int32,Mirror.MirrorInvokeType,Mirror.NetworkReader,Mirror.NetworkBehaviour,Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteCallHelper_InvokeHandlerDelegate_mD913C9F9303C0186A3BF47E09DDCEFBACB7459B9 (int32_t ___cmdHash0, int32_t ___invokeType1, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader2, NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * ___invokingType3, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___senderConnection4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * V_0 = NULL;
	{
		// if (GetInvokerForHash(cmdHash, invokeType, out Invoker invoker) && invoker.invokeClass.IsInstanceOfType(invokingType))
		int32_t L_0 = ___cmdHash0;
		int32_t L_1 = ___invokeType1;
		IL2CPP_RUNTIME_CLASS_INIT(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = RemoteCallHelper_GetInvokerForHash_mEF65749F25DF0C8F8770F042978A52296834866E(L_0, L_1, (Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 **)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = L_3->get_invokeClass_0();
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_5 = ___invokingType3;
		NullCheck(L_4);
		bool L_6;
		L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(110 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// invoker.invokeFunction(invokingType, reader, senderConnection);
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_7 = V_0;
		NullCheck(L_7);
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_8 = L_7->get_invokeFunction_2();
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_9 = ___invokingType3;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_10 = ___reader2;
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_11 = ___senderConnection4;
		NullCheck(L_8);
		CmdDelegate_Invoke_m8DA7D950737AA88947D43EBAED1C35604D49DC2B(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_002a:
	{
		// return false;
		return (bool)0;
	}
}
// Mirror.RemoteCalls.CommandInfo Mirror.RemoteCalls.RemoteCallHelper::GetCommandInfo(System.Int32,Mirror.NetworkBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommandInfo_tC5DD081D21D80AFAF88EA0134AE42897EF9D0BAE  RemoteCallHelper_GetCommandInfo_m26146856DB6082F9D0AE81E0276C9455CE2969A3 (int32_t ___cmdHash0, NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * ___invokingType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * V_0 = NULL;
	CommandInfo_tC5DD081D21D80AFAF88EA0134AE42897EF9D0BAE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (GetInvokerForHash(cmdHash, MirrorInvokeType.Command, out Invoker invoker) && invoker.invokeClass.IsInstanceOfType(invokingType))
		int32_t L_0 = ___cmdHash0;
		IL2CPP_RUNTIME_CLASS_INIT(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = RemoteCallHelper_GetInvokerForHash_mEF65749F25DF0C8F8770F042978A52296834866E(L_0, 0, (Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_2 = V_0;
		NullCheck(L_2);
		Type_t * L_3 = L_2->get_invokeClass_0();
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_4 = ___invokingType1;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(110 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_3, L_4);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// return new CommandInfo
		// {
		//     requiresAuthority = invoker.cmdRequiresAuthority
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(CommandInfo_tC5DD081D21D80AFAF88EA0134AE42897EF9D0BAE ));
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->get_cmdRequiresAuthority_3();
		(&V_1)->set_requiresAuthority_0(L_7);
		CommandInfo_tC5DD081D21D80AFAF88EA0134AE42897EF9D0BAE  L_8 = V_1;
		return L_8;
	}

IL_0030:
	{
		// return default;
		il2cpp_codegen_initobj((&V_1), sizeof(CommandInfo_tC5DD081D21D80AFAF88EA0134AE42897EF9D0BAE ));
		CommandInfo_tC5DD081D21D80AFAF88EA0134AE42897EF9D0BAE  L_9 = V_1;
		return L_9;
	}
}
// Mirror.RemoteCalls.CmdDelegate Mirror.RemoteCalls.RemoteCallHelper::GetDelegate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * RemoteCallHelper_GetDelegate_mB573EBBF9D129EE42980B107FBE0E0FADD2F50E5 (int32_t ___cmdHash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m13CCBED1F86108F9D5963871ED2B694227142DC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * V_0 = NULL;
	{
		// if (cmdHandlerDelegates.TryGetValue(cmdHash, out Invoker invoker))
		IL2CPP_RUNTIME_CLASS_INIT(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * L_0 = ((RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_StaticFields*)il2cpp_codegen_static_fields_for(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var))->get_cmdHandlerDelegates_0();
		int32_t L_1 = ___cmdHash0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m13CCBED1F86108F9D5963871ED2B694227142DC5(L_0, L_1, (Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m13CCBED1F86108F9D5963871ED2B694227142DC5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return invoker.invokeFunction;
		Invoker_tFF3DF12E4AB451D154A671C69B1CA495EA812806 * L_3 = V_0;
		NullCheck(L_3);
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_4 = L_3->get_invokeFunction_2();
		return L_4;
	}

IL_0016:
	{
		// return null;
		return (CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF *)NULL;
	}
}
// System.Void Mirror.RemoteCalls.RemoteCallHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCallHelper__cctor_mE8A90B144EE99C80B996010B2C7D7D4D9F0E502B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m571DC5266DD0515238FEE375C58419E469D34618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Dictionary<int, Invoker> cmdHandlerDelegates = new Dictionary<int, Invoker>();
		Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 * L_0 = (Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11 *)il2cpp_codegen_object_new(Dictionary_2_tE95548A31D13445FC2D782AA0B33627BD3446C11_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m571DC5266DD0515238FEE375C58419E469D34618(L_0, /*hidden argument*/Dictionary_2__ctor_m571DC5266DD0515238FEE375C58419E469D34618_RuntimeMethod_var);
		((RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_StaticFields*)il2cpp_codegen_static_fields_for(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var))->set_cmdHandlerDelegates_0(L_0);
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
// Conversion methods for marshalling of: Mirror.RpcMessage
IL2CPP_EXTERN_C void RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshal_pinvoke(const RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A& unmarshaled, RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___payload_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'RpcMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_3Exception, NULL);
}
IL2CPP_EXTERN_C void RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshal_pinvoke_back(const RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshaled_pinvoke& marshaled, RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A& unmarshaled)
{
	Exception_t* ___payload_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'RpcMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mirror.RpcMessage
IL2CPP_EXTERN_C void RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshal_pinvoke_cleanup(RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mirror.RpcMessage
IL2CPP_EXTERN_C void RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshal_com(const RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A& unmarshaled, RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshaled_com& marshaled)
{
	Exception_t* ___payload_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'RpcMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_3Exception, NULL);
}
IL2CPP_EXTERN_C void RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshal_com_back(const RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshaled_com& marshaled, RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A& unmarshaled)
{
	Exception_t* ___payload_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'RpcMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mirror.RpcMessage
IL2CPP_EXTERN_C void RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshal_com_cleanup(RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SceneAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAttribute__ctor_m7F8095E94F9D74BDB458EE8B5CF10781C8EEEB62 (SceneAttribute_t320720326837991E38C31235EA75B39CBD4CAA8E * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Mirror.SceneMessage
IL2CPP_EXTERN_C void SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshal_pinvoke(const SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE& unmarshaled, SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshaled_pinvoke& marshaled)
{
	marshaled.___sceneName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_sceneName_0());
	marshaled.___sceneOperation_1 = unmarshaled.get_sceneOperation_1();
	marshaled.___customHandling_2 = static_cast<int32_t>(unmarshaled.get_customHandling_2());
}
IL2CPP_EXTERN_C void SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshal_pinvoke_back(const SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshaled_pinvoke& marshaled, SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE& unmarshaled)
{
	unmarshaled.set_sceneName_0(il2cpp_codegen_marshal_string_result(marshaled.___sceneName_0));
	uint8_t unmarshaled_sceneOperation_temp_1 = 0;
	unmarshaled_sceneOperation_temp_1 = marshaled.___sceneOperation_1;
	unmarshaled.set_sceneOperation_1(unmarshaled_sceneOperation_temp_1);
	bool unmarshaled_customHandling_temp_2 = false;
	unmarshaled_customHandling_temp_2 = static_cast<bool>(marshaled.___customHandling_2);
	unmarshaled.set_customHandling_2(unmarshaled_customHandling_temp_2);
}
// Conversion method for clean up from marshalling of: Mirror.SceneMessage
IL2CPP_EXTERN_C void SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshal_pinvoke_cleanup(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___sceneName_0);
	marshaled.___sceneName_0 = NULL;
}
// Conversion methods for marshalling of: Mirror.SceneMessage
IL2CPP_EXTERN_C void SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshal_com(const SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE& unmarshaled, SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshaled_com& marshaled)
{
	marshaled.___sceneName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_sceneName_0());
	marshaled.___sceneOperation_1 = unmarshaled.get_sceneOperation_1();
	marshaled.___customHandling_2 = static_cast<int32_t>(unmarshaled.get_customHandling_2());
}
IL2CPP_EXTERN_C void SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshal_com_back(const SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshaled_com& marshaled, SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE& unmarshaled)
{
	unmarshaled.set_sceneName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___sceneName_0));
	uint8_t unmarshaled_sceneOperation_temp_1 = 0;
	unmarshaled_sceneOperation_temp_1 = marshaled.___sceneOperation_1;
	unmarshaled.set_sceneOperation_1(unmarshaled_sceneOperation_temp_1);
	bool unmarshaled_customHandling_temp_2 = false;
	unmarshaled_customHandling_temp_2 = static_cast<bool>(marshaled.___customHandling_2);
	unmarshaled.set_customHandling_2(unmarshaled_customHandling_temp_2);
}
// Conversion method for clean up from marshalling of: Mirror.SceneMessage
IL2CPP_EXTERN_C void SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshal_com_cleanup(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___sceneName_0);
	marshaled.___sceneName_0 = NULL;
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
// System.Void Mirror.ServerAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerAttribute__ctor_m413F135143ED76C9B8C3F41B2DB6597E4382E0A6 (ServerAttribute_tD8686EAC32E05ED828C7CA0C40D1EA85022718D4 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.ServerCallbackAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerCallbackAttribute__ctor_m7258C253CBA5BF5C92BAAB6345240F9418C0B61D (ServerCallbackAttribute_tE7022675485DC307068230EDC6EFC5B503ACF88F * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.ShowInInspectorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowInInspectorAttribute__ctor_mFA3EF79FD7E9F573D31F156DE62A6CBDBE254688 (ShowInInspectorAttribute_tCEDD39B2D6FAE1DC4D1828D468B85870F098521E * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.SpawnDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnDelegate__ctor_m85296496F410FDA1A8F167B0E65E39B176491618 (SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.GameObject Mirror.SpawnDelegate::Invoke(UnityEngine.Vector3,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpawnDelegate_Invoke_m647484B13C3CB741C8D7D910D355FEC904FBFBA3 (SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Guid_t  ___assetId1, const RuntimeMethod* method)
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * result = NULL;
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
			if (___parameterCount == 2)
			{
				// open
				typedef GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*FunctionPointerType) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Guid_t , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___position0, ___assetId1, targetMethod);
			}
			else
			{
				// closed
				typedef GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Guid_t , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___assetId1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Guid_t  >::Invoke(targetMethod, targetThis, ___position0, ___assetId1);
					else
						result = GenericVirtFuncInvoker2< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Guid_t  >::Invoke(targetMethod, targetThis, ___position0, ___assetId1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Guid_t  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0, ___assetId1);
					else
						result = VirtFuncInvoker2< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Guid_t  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0, ___assetId1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*FunctionPointerType) (RuntimeObject*, Guid_t , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___position0) - 1), ___assetId1, targetMethod);
				}
				else
				{
					typedef GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Guid_t , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___assetId1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mirror.SpawnDelegate::BeginInvoke(UnityEngine.Vector3,System.Guid,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnDelegate_BeginInvoke_m6BDC7169A26F222C731A4CC93B5D2C1A9A5DCF7B (SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Guid_t  ___assetId1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = Box(Guid_t_il2cpp_TypeInfo_var, &___assetId1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// UnityEngine.GameObject Mirror.SpawnDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpawnDelegate_EndInvoke_m3DC601F0E76C04C3159289012B2B4AC40BDA0AB5 (SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SpawnHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnHandlerDelegate__ctor_m5D9B376DBB3C85A6B66ED69AB8B7E7010A3130C9 (SpawnHandlerDelegate_t841F48F47475ACF69DD6039DC6BD7D1897FB0007 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.GameObject Mirror.SpawnHandlerDelegate::Invoke(Mirror.SpawnMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpawnHandlerDelegate_Invoke_m8DCF7DA5325363F4860AF5A135A7D9318A8C21D0 (SpawnHandlerDelegate_t841F48F47475ACF69DD6039DC6BD7D1897FB0007 * __this, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  ___msg0, const RuntimeMethod* method)
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * result = NULL;
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
				typedef GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*FunctionPointerType) (SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___msg0, targetMethod);
			}
			else
			{
				// closed
				typedef GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*FunctionPointerType) (void*, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___msg0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  >::Invoke(targetMethod, targetThis, ___msg0);
					else
						result = GenericVirtFuncInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  >::Invoke(targetMethod, targetThis, ___msg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___msg0);
					else
						result = VirtFuncInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___msg0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___msg0) - 1), targetMethod);
				}
				else
				{
					typedef GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*FunctionPointerType) (void*, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___msg0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mirror.SpawnHandlerDelegate::BeginInvoke(Mirror.SpawnMessage,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnHandlerDelegate_BeginInvoke_mA8C0FE11CC475B4F433E7CE81A0D91EDC68631C4 (SpawnHandlerDelegate_t841F48F47475ACF69DD6039DC6BD7D1897FB0007 * __this, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  ___msg0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_il2cpp_TypeInfo_var, &___msg0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// UnityEngine.GameObject Mirror.SpawnHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpawnHandlerDelegate_EndInvoke_m20D6E4B8796890F64D0FDF48450469B8FF716965 (SpawnHandlerDelegate_t841F48F47475ACF69DD6039DC6BD7D1897FB0007 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Mirror.SpawnMessage
IL2CPP_EXTERN_C void SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshal_pinvoke(const SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A& unmarshaled, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___payload_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'SpawnMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_8Exception, NULL);
}
IL2CPP_EXTERN_C void SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshal_pinvoke_back(const SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshaled_pinvoke& marshaled, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A& unmarshaled)
{
	Exception_t* ___payload_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'SpawnMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mirror.SpawnMessage
IL2CPP_EXTERN_C void SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshal_pinvoke_cleanup(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mirror.SpawnMessage
IL2CPP_EXTERN_C void SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshal_com(const SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A& unmarshaled, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshaled_com& marshaled)
{
	Exception_t* ___payload_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'SpawnMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_8Exception, NULL);
}
IL2CPP_EXTERN_C void SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshal_com_back(const SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshaled_com& marshaled, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A& unmarshaled)
{
	Exception_t* ___payload_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'SpawnMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mirror.SpawnMessage
IL2CPP_EXTERN_C void SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshal_com_cleanup(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.SyncListBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListBool__ctor_m2916C60036ACE746504B76D4076DE7B039BA5399 (SyncListBool_t051D197E6553E4CC6B2EC36D9C1D1D17232BACC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_mD324A1BEF31DF7325F738BB47B26F7D186D8EF04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_mD324A1BEF31DF7325F738BB47B26F7D186D8EF04(__this, /*hidden argument*/SyncList_1__ctor_mD324A1BEF31DF7325F738BB47B26F7D186D8EF04_RuntimeMethod_var);
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
// System.Void Mirror.SyncListFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListFloat__ctor_m4B45173BADFFBBDB078AC492AA195341C83AFDE0 (SyncListFloat_t60852422D3B0551688414611FB380EEF26C71082 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_m45D0C7A84F8605974735A247AE954C56A7577841_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m45D0C7A84F8605974735A247AE954C56A7577841(__this, /*hidden argument*/SyncList_1__ctor_m45D0C7A84F8605974735A247AE954C56A7577841_RuntimeMethod_var);
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
// System.Void Mirror.SyncListInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListInt__ctor_m5946A57F58B76D25F4E339924332AAC7DF742ADA (SyncListInt_t904A6F00E6FEF42837AB438D17E9531980847271 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_m13E900D593940E204D267A2B7770541049F45873_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m13E900D593940E204D267A2B7770541049F45873(__this, /*hidden argument*/SyncList_1__ctor_m13E900D593940E204D267A2B7770541049F45873_RuntimeMethod_var);
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
// System.Void Mirror.SyncListString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListString__ctor_mA4D9B6BCC69307496D8FDCEE024CD97D199DF0E7 (SyncListString_tD245B6587357B3C6277E58F0F86B65E37D2AF407 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_m815BFA4465D735F628EE0ECAFE57796DC33828AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m815BFA4465D735F628EE0ECAFE57796DC33828AD(__this, /*hidden argument*/SyncList_1__ctor_m815BFA4465D735F628EE0ECAFE57796DC33828AD_RuntimeMethod_var);
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
// System.Void Mirror.SyncListUInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListUInt__ctor_m00CBE30DC4011DAEDA7F08D946017D0F8792F47A (SyncListUInt_t4536021CB31E90B8DCBA4B21BFA1855C2122E72C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_mFC6B35AA9D833111D03774AF9E8C9E6B5259CF15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_mFC6B35AA9D833111D03774AF9E8C9E6B5259CF15(__this, /*hidden argument*/SyncList_1__ctor_mFC6B35AA9D833111D03774AF9E8C9E6B5259CF15_RuntimeMethod_var);
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
// System.Void Mirror.SyncVarAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncVarAttribute__ctor_m4E99C2B45DDA311F1D9B684B967978541348C875 (SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.TargetRpcAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetRpcAttribute__ctor_m5954E4349796FC0A7AA8BE4857791C38E867CA8C (TargetRpcAttribute_t14D3F619D68AA6A60E49203B8EA34EBCCDCB6BC5 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.TelepathyTransport::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_Awake_m602F5715334063DC6405856C3AD1FC29C7B7E5A5 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m575F8B46B3B71BEF76A558EE27E3DDBEDC0F59FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CAwakeU3Eb__16_0_m905CFDDDDE4DC4C2DF534C3785C594E98316A038_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CAwakeU3Eb__16_1_mADDB68E8C56E511F7B71AF2C9CF3A450C7F5DBF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CAwakeU3Eb__16_2_mB5CD19395BFC6D0020C35F8D6C4CE87624B7CDB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CAwakeU3Eb__16_3_m449CD1AB3CC3F97916947FCD69B0412704FF1A1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CAwakeU3Eb__16_4_m2999458B1882358091529A2D113CDD0681BAF6B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CAwakeU3Eb__16_5_m5C9F8614ED86F5630676C4E29B4423EA0DD5D9F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CAwakeU3Eb__16_6_m874F866E355A4DCE73B942608DAF1DBCFEF1B9A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780B762059704518D09A16D9F8C8BB89E4AED59B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client = new Telepathy.Client(clientMaxMessageSize);
		int32_t L_0 = __this->get_clientMaxMessageSize_22();
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_1 = (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 *)il2cpp_codegen_object_new(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929_il2cpp_TypeInfo_var);
		Client__ctor_mD52457064B6A439EF08D6F061337E5ACD5E046C4(L_1, L_0, /*hidden argument*/NULL);
		__this->set_client_26(L_1);
		// server = new Telepathy.Server(serverMaxMessageSize);
		int32_t L_2 = __this->get_serverMaxMessageSize_18();
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_3 = (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 *)il2cpp_codegen_object_new(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2_il2cpp_TypeInfo_var);
		Server__ctor_m2B64EC33BE7222CEA9D9DC5BE390B82C94D2EAC0(L_3, L_2, /*hidden argument*/NULL);
		__this->set_server_27(L_3);
		// Telepathy.Log.Info = Debug.Log;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_4 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_4, NULL, (intptr_t)((intptr_t)Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->set_Info_0(L_4);
		// Telepathy.Log.Warning = Debug.LogWarning;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_5 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_5, NULL, (intptr_t)((intptr_t)Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->set_Warning_1(L_5);
		// Telepathy.Log.Error = Debug.LogError;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_6, NULL, (intptr_t)((intptr_t)Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->set_Error_2(L_6);
		// client.OnConnected = () => OnClientConnected.Invoke();
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_7 = __this->get_client_26();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CAwakeU3Eb__16_0_m905CFDDDDE4DC4C2DF534C3785C594E98316A038_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_OnConnected_4(L_8);
		// client.OnData = (segment) => OnClientDataReceived.Invoke(segment, Channels.DefaultReliable);
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_9 = __this->get_client_26();
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_10 = (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC *)il2cpp_codegen_object_new(Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC_il2cpp_TypeInfo_var);
		Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE(L_10, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CAwakeU3Eb__16_1_mADDB68E8C56E511F7B71AF2C9CF3A450C7F5DBF7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_OnData_5(L_10);
		// client.OnDisconnected = () => OnClientDisconnected.Invoke();
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_11 = __this->get_client_26();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_12, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CAwakeU3Eb__16_2_mB5CD19395BFC6D0020C35F8D6C4CE87624B7CDB6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_OnDisconnected_6(L_12);
		// client.NoDelay = NoDelay;
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_13 = __this->get_client_26();
		bool L_14 = __this->get_NoDelay_15();
		NullCheck(L_13);
		((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)L_13)->set_NoDelay_0(L_14);
		// client.SendTimeout = SendTimeout;
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_15 = __this->get_client_26();
		int32_t L_16 = __this->get_SendTimeout_16();
		NullCheck(L_15);
		((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)L_15)->set_SendTimeout_2(L_16);
		// client.ReceiveTimeout = ReceiveTimeout;
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_17 = __this->get_client_26();
		int32_t L_18 = __this->get_ReceiveTimeout_17();
		NullCheck(L_17);
		((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)L_17)->set_ReceiveTimeout_3(L_18);
		// client.SendQueueLimit = clientSendQueueLimit;
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_19 = __this->get_client_26();
		int32_t L_20 = __this->get_clientSendQueueLimit_24();
		NullCheck(L_19);
		L_19->set_SendQueueLimit_7(L_20);
		// client.ReceiveQueueLimit = clientReceiveQueueLimit;
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_21 = __this->get_client_26();
		int32_t L_22 = __this->get_clientReceiveQueueLimit_25();
		NullCheck(L_21);
		L_21->set_ReceiveQueueLimit_8(L_22);
		// server.OnConnected = (connectionId) => OnServerConnected.Invoke(connectionId);
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_23 = __this->get_server_27();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_24 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_24, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CAwakeU3Eb__16_3_m449CD1AB3CC3F97916947FCD69B0412704FF1A1E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		NullCheck(L_23);
		L_23->set_OnConnected_4(L_24);
		// server.OnData = (connectionId, segment) => OnServerDataReceived.Invoke(connectionId, segment, Channels.DefaultReliable);
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_25 = __this->get_server_27();
		Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * L_26 = (Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 *)il2cpp_codegen_object_new(Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9_il2cpp_TypeInfo_var);
		Action_2__ctor_m575F8B46B3B71BEF76A558EE27E3DDBEDC0F59FB(L_26, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CAwakeU3Eb__16_4_m2999458B1882358091529A2D113CDD0681BAF6B9_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m575F8B46B3B71BEF76A558EE27E3DDBEDC0F59FB_RuntimeMethod_var);
		NullCheck(L_25);
		L_25->set_OnData_5(L_26);
		// server.OnDisconnected = (connectionId) => OnServerDisconnected.Invoke(connectionId);
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_27 = __this->get_server_27();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_28 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_28, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CAwakeU3Eb__16_5_m5C9F8614ED86F5630676C4E29B4423EA0DD5D9F6_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		NullCheck(L_27);
		L_27->set_OnDisconnected_6(L_28);
		// server.NoDelay = NoDelay;
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_29 = __this->get_server_27();
		bool L_30 = __this->get_NoDelay_15();
		NullCheck(L_29);
		((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)L_29)->set_NoDelay_0(L_30);
		// server.SendTimeout = SendTimeout;
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_31 = __this->get_server_27();
		int32_t L_32 = __this->get_SendTimeout_16();
		NullCheck(L_31);
		((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)L_31)->set_SendTimeout_2(L_32);
		// server.ReceiveTimeout = ReceiveTimeout;
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_33 = __this->get_server_27();
		int32_t L_34 = __this->get_ReceiveTimeout_17();
		NullCheck(L_33);
		((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)L_33)->set_ReceiveTimeout_3(L_34);
		// server.SendQueueLimit = serverSendQueueLimitPerConnection;
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_35 = __this->get_server_27();
		int32_t L_36 = __this->get_serverSendQueueLimitPerConnection_20();
		NullCheck(L_35);
		L_35->set_SendQueueLimit_9(L_36);
		// server.ReceiveQueueLimit = serverReceiveQueueLimitPerConnection;
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_37 = __this->get_server_27();
		int32_t L_38 = __this->get_serverReceiveQueueLimitPerConnection_21();
		NullCheck(L_37);
		L_37->set_ReceiveQueueLimit_10(L_38);
		// enabledCheck = () => enabled;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_39 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_39, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CAwakeU3Eb__16_6_m874F866E355A4DCE73B942608DAF1DBCFEF1B9A7_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		__this->set_enabledCheck_28(L_39);
		// Debug.Log("TelepathyTransport initialized!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral780B762059704518D09A16D9F8C8BB89E4AED59B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Mirror.TelepathyTransport::Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_Available_mF8EDA3882E796A7C821F5205051E549927AFEB80 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	{
		// return Application.platform != RuntimePlatform.WebGLPlayer;
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mirror.TelepathyTransport::ClientConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ClientConnected_m8B5228FFC261001AAFD1F4C1DACEAB32FB728BFA (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	{
		// public override bool ClientConnected() => client.Connected;
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_0 = __this->get_client_26();
		NullCheck(L_0);
		bool L_1;
		L_1 = Client_get_Connected_mC86DE616D136C3556010E1CE19AC17F5B0A274C4(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mirror.TelepathyTransport::ClientConnect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientConnect_mEC8326A6AE0253B05D929D98B37E774134A8320D (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, String_t* ___address0, const RuntimeMethod* method)
{
	{
		// public override void ClientConnect(string address) => client.Connect(address, port);
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_0 = __this->get_client_26();
		String_t* L_1 = ___address0;
		uint16_t L_2 = __this->get_port_14();
		NullCheck(L_0);
		Client_Connect_mDB197946B2907CF0830208C4A3B8B5E967B04401(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ClientConnect(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientConnect_m27B5C086CB7ED8E51EDF0D922FACFBEE88CB2BB5 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3FB58DAF2CFBF3D2821FA68068D1520C3A7E465);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		// if (uri.Scheme != Scheme)
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___uri0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_1, _stringLiteralB3FB58DAF2CFBF3D2821FA68068D1520C3A7E465, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// throw new ArgumentException($"Invalid url {uri}, use {Scheme}://host:port instead", nameof(uri));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = ___uri0;
		String_t* L_4;
		L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5B7D55577ECC2D6DEFA55674921782E5003E75A)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3FB58DAF2CFBF3D2821FA68068D1520C3A7E465)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TelepathyTransport_ClientConnect_m27B5C086CB7ED8E51EDF0D922FACFBEE88CB2BB5_RuntimeMethod_var)));
	}

IL_002d:
	{
		// int serverPort = uri.IsDefaultPort ? port : uri.Port;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_6 = ___uri0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Uri_get_IsDefaultPort_mFDB9DC42A42C2D8C5ADFE5D590DEEE27D2918271(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_8 = ___uri0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C(L_8, /*hidden argument*/NULL);
		G_B5_0 = L_9;
		goto IL_0043;
	}

IL_003d:
	{
		uint16_t L_10 = __this->get_port_14();
		G_B5_0 = ((int32_t)(L_10));
	}

IL_0043:
	{
		V_0 = G_B5_0;
		// client.Connect(uri.Host, serverPort);
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_11 = __this->get_client_26();
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_12 = ___uri0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Uri_get_Host_m05E1D82C4E6B14A2369AEDED218F9089DE336E64(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		NullCheck(L_11);
		Client_Connect_mDB197946B2907CF0830208C4A3B8B5E967B04401(L_11, L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ClientSend(System.Int32,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientSend_m95DA556F300DB657FF0FC0A54E0BCCCE883D9F94 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, int32_t ___channelId0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment1, const RuntimeMethod* method)
{
	{
		// public override void ClientSend(int channelId, ArraySegment<byte> segment) => client.Send(segment);
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_0 = __this->get_client_26();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_1 = ___segment1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Client_Send_m93CD3EB70EF1DCD964713359C91298850C323500(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ClientDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientDisconnect_m0A27B27ECCDAF5C60DC6777E95D6BA075FCEA4AC (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	{
		// public override void ClientDisconnect() => client.Disconnect();
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_0 = __this->get_client_26();
		NullCheck(L_0);
		Client_Disconnect_mAE664B949506BF0D4F3698B644416E7A95B35614(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ClientEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientEarlyUpdate_m03B06C08025B8191282BEE1F6A9EC25C0EE47D34 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// client.Tick(clientMaxReceivesPerTick, enabledCheck);
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_1 = __this->get_client_26();
		int32_t L_2 = __this->get_clientMaxReceivesPerTick_23();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = __this->get_enabledCheck_28();
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Client_Tick_mFE8F6ECFFEEF98B6D2D19F7FF5B8665489BC58AA(L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Uri Mirror.TelepathyTransport::ServerUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * TelepathyTransport_ServerUri_mD3896EBAB74A7FE4BE2970ACB5B8930A1C064D0B (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3FB58DAF2CFBF3D2821FA68068D1520C3A7E465);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UriBuilder builder = new UriBuilder();
		UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * L_0 = (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *)il2cpp_codegen_object_new(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42_il2cpp_TypeInfo_var);
		UriBuilder__ctor_mE159C4677FB22466FE0C4E2389D7A768B8D960E0(L_0, /*hidden argument*/NULL);
		// builder.Scheme = Scheme;
		UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * L_1 = L_0;
		NullCheck(L_1);
		UriBuilder_set_Scheme_m0E10F383F85EC52D7C813EAB32226A8997306D9C(L_1, _stringLiteralB3FB58DAF2CFBF3D2821FA68068D1520C3A7E465, /*hidden argument*/NULL);
		// builder.Host = Dns.GetHostName();
		UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * L_2 = L_1;
		String_t* L_3;
		L_3 = Dns_GetHostName_m8BF02B75F8EF9723179339212805C5BAF5C4B706(/*hidden argument*/NULL);
		NullCheck(L_2);
		UriBuilder_set_Host_mCDF7CD943974DFF97DCA53EF4CC29C32DC6AD8C8(L_2, L_3, /*hidden argument*/NULL);
		// builder.Port = port;
		UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * L_4 = L_2;
		uint16_t L_5 = __this->get_port_14();
		NullCheck(L_4);
		UriBuilder_set_Port_mE953A674E976EB7C93939B7E9DC0478B705A23E6(L_4, L_5, /*hidden argument*/NULL);
		// return builder.Uri;
		NullCheck(L_4);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_6;
		L_6 = UriBuilder_get_Uri_mCC00D0ED823993613F5E62435B85FDADC891C328(L_4, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Mirror.TelepathyTransport::ServerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ServerActive_m7E31D881004FB4A68CE8E0C7F5C2D3C18ED9909E (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	{
		// public override bool ServerActive() => server.Active;
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_0 = __this->get_server_27();
		NullCheck(L_0);
		bool L_1;
		L_1 = Server_get_Active_mE40759A4A854C0CF788380F7BFD303D6A99A09C5(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mirror.TelepathyTransport::ServerStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerStart_m6F3609E2583811D26FB3ED5DF916A40EF848F84D (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	{
		// public override void ServerStart() => server.Start(port);
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_0 = __this->get_server_27();
		uint16_t L_1 = __this->get_port_14();
		NullCheck(L_0);
		bool L_2;
		L_2 = Server_Start_mA3609AF20E968EBDF19F8DC77776B69CA9E7A7EE(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ServerSend(System.Int32,System.Int32,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerSend_m998FDA65A8819E3C5470BC34F2D68937E717B838 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, int32_t ___connectionId0, int32_t ___channelId1, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment2, const RuntimeMethod* method)
{
	{
		// public override void ServerSend(int connectionId, int channelId, ArraySegment<byte> segment) => server.Send(connectionId, segment);
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_0 = __this->get_server_27();
		int32_t L_1 = ___connectionId0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_2 = ___segment2;
		NullCheck(L_0);
		bool L_3;
		L_3 = Server_Send_mC665F2B285DD3F5276ADBBFEA708123214A23B94(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mirror.TelepathyTransport::ServerDisconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ServerDisconnect_mADA1668FE8AB923684F437B38CA59255913144E3 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	{
		// public override bool ServerDisconnect(int connectionId) => server.Disconnect(connectionId);
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_0 = __this->get_server_27();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Server_Disconnect_m81A37C7BA9C9D87CE54FF2886D018C7AA140AC5C(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Mirror.TelepathyTransport::ServerGetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TelepathyTransport_ServerGetClientAddress_mCAAE5E776410D1E8F8CB92D5AE547207F4F32EEE (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// return server.GetClientAddress(connectionId);
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_0 = __this->get_server_27();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = Server_GetClientAddress_m9574ABDC812B05BDC6F04647C5E757400E1FCDC4(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0018;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000f;
		}
		throw e;
	}

CATCH_000f:
	{ // begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException)
		// return "unknown";
		V_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0018;
	} // end catch (depth: 1)

IL_0018:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Mirror.TelepathyTransport::ServerStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerStop_m029E82E1FC85B297A37C856ACBB2471C6410E2FB (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	{
		// public override void ServerStop() => server.Stop();
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_0 = __this->get_server_27();
		NullCheck(L_0);
		Server_Stop_m5D7C534FDE0D25A15B8498FF0A979FE856364C02(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ServerEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerEarlyUpdate_m970EF7D651ED0FC5FD4898CEDC3878892DC820E0 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// server.Tick(serverMaxReceivesPerTick, enabledCheck);
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_1 = __this->get_server_27();
		int32_t L_2 = __this->get_serverMaxReceivesPerTick_19();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = __this->get_enabledCheck_28();
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Server_Tick_m299CC47DD1947941F019C321311EDCD1986A7A6A(L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_Shutdown_mA4F85A710C7C52BB890A74C4942EC7BA64F9FB40 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE971D200E92B902817CBA6564BCC938A17CA6558);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("TelepathyTransport Shutdown()");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE971D200E92B902817CBA6564BCC938A17CA6558, /*hidden argument*/NULL);
		// client.Disconnect();
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_0 = __this->get_client_26();
		NullCheck(L_0);
		Client_Disconnect_mAE664B949506BF0D4F3698B644416E7A95B35614(L_0, /*hidden argument*/NULL);
		// server.Stop();
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_1 = __this->get_server_27();
		NullCheck(L_1);
		Server_Stop_m5D7C534FDE0D25A15B8498FF0A979FE856364C02(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Mirror.TelepathyTransport::GetMaxPacketSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TelepathyTransport_GetMaxPacketSize_m81DCD6F50C02F566D328EB5097BEE7081C544A2B (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, int32_t ___channelId0, const RuntimeMethod* method)
{
	{
		// return serverMaxMessageSize;
		int32_t L_0 = __this->get_serverMaxMessageSize_18();
		return L_0;
	}
}
// System.String Mirror.TelepathyTransport::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TelepathyTransport_ToString_m528636DD99B5B7A9346BC0B4E628E3C07CAA954C (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DFF0528D930AE107C308C6AA508FBD6939B4D63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral973A66DB55AF166CD9F932F251FE02DA521831C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6BB3B52FA5BFB37025BF9AFC9590C324FAFEC5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (server.Active && server.listener != null)
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_0 = __this->get_server_27();
		NullCheck(L_0);
		bool L_1;
		L_1 = Server_get_Active_mE40759A4A854C0CF788380F7BFD303D6A99A09C5(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_2 = __this->get_server_27();
		NullCheck(L_2);
		TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_3 = L_2->get_listener_7();
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// return "Telepathy Server port: " + port;
		uint16_t* L_4 = __this->get_address_of_port_14();
		String_t* L_5;
		L_5 = UInt16_ToString_mCD21CDBE273387A21683B6C00EF5EBEEFF7A8F6D((uint16_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2DFF0528D930AE107C308C6AA508FBD6939B4D63, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0030:
	{
		// else if (client.Connecting || client.Connected)
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_7 = __this->get_client_26();
		NullCheck(L_7);
		bool L_8;
		L_8 = Client_get_Connecting_mAF631B73E29AF1F6BB75CD325F2326A4B2059106(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_004a;
		}
	}
	{
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_9 = __this->get_client_26();
		NullCheck(L_9);
		bool L_10;
		L_10 = Client_get_Connected_mC86DE616D136C3556010E1CE19AC17F5B0A274C4(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0060;
		}
	}

IL_004a:
	{
		// return "Telepathy Client port: " + port;
		uint16_t* L_11 = __this->get_address_of_port_14();
		String_t* L_12;
		L_12 = UInt16_ToString_mCD21CDBE273387A21683B6C00EF5EBEEFF7A8F6D((uint16_t*)L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB6BB3B52FA5BFB37025BF9AFC9590C324FAFEC5B, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0060:
	{
		// return "Telepathy (inactive/disconnected)";
		return _stringLiteral973A66DB55AF166CD9F932F251FE02DA521831C5;
	}
}
// System.Void Mirror.TelepathyTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport__ctor_mA4061E623CDE35A23989AE27570AB68007F43F9D (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	{
		// public ushort port = 7777;
		__this->set_port_14((uint16_t)((int32_t)7777));
		// public bool NoDelay = true;
		__this->set_NoDelay_15((bool)1);
		// public int SendTimeout = 5000;
		__this->set_SendTimeout_16(((int32_t)5000));
		// public int ReceiveTimeout = 30000;
		__this->set_ReceiveTimeout_17(((int32_t)30000));
		// public int serverMaxMessageSize = 16 * 1024;
		__this->set_serverMaxMessageSize_18(((int32_t)16384));
		// public int serverMaxReceivesPerTick = 10000;
		__this->set_serverMaxReceivesPerTick_19(((int32_t)10000));
		// public int serverSendQueueLimitPerConnection = 10000;
		__this->set_serverSendQueueLimitPerConnection_20(((int32_t)10000));
		// public int serverReceiveQueueLimitPerConnection = 10000;
		__this->set_serverReceiveQueueLimitPerConnection_21(((int32_t)10000));
		// public int clientMaxMessageSize = 16 * 1024;
		__this->set_clientMaxMessageSize_22(((int32_t)16384));
		// public int clientMaxReceivesPerTick = 1000;
		__this->set_clientMaxReceivesPerTick_23(((int32_t)1000));
		// public int clientSendQueueLimit = 10000;
		__this->set_clientSendQueueLimit_24(((int32_t)10000));
		// public int clientReceiveQueueLimit = 10000;
		__this->set_clientReceiveQueueLimit_25(((int32_t)10000));
		Transport__ctor_m18499670B379DE249BA0A4D8D978335F0C1E0376(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<Awake>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CAwakeU3Eb__16_0_m905CFDDDDE4DC4C2DF534C3785C594E98316A038 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	{
		// client.OnConnected = () => OnClientConnected.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnClientConnected_5();
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<Awake>b__16_1(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CAwakeU3Eb__16_1_mADDB68E8C56E511F7B71AF2C9CF3A450C7F5DBF7 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mF9E901FAD15F0385E62CAFEC66A6DA5D59295858_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.OnData = (segment) => OnClientDataReceived.Invoke(segment, Channels.DefaultReliable);
		Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * L_0 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnClientDataReceived_6();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_1 = ___segment0;
		NullCheck(L_0);
		Action_2_Invoke_mF9E901FAD15F0385E62CAFEC66A6DA5D59295858(L_0, L_1, 0, /*hidden argument*/Action_2_Invoke_mF9E901FAD15F0385E62CAFEC66A6DA5D59295858_RuntimeMethod_var);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<Awake>b__16_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CAwakeU3Eb__16_2_mB5CD19395BFC6D0020C35F8D6C4CE87624B7CDB6 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	{
		// client.OnDisconnected = () => OnClientDisconnected.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnClientDisconnected_8();
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<Awake>b__16_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CAwakeU3Eb__16_3_m449CD1AB3CC3F97916947FCD69B0412704FF1A1E (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// server.OnConnected = (connectionId) => OnServerConnected.Invoke(connectionId);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnServerConnected_9();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(L_0, L_1, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<Awake>b__16_4(System.Int32,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CAwakeU3Eb__16_4_m2999458B1882358091529A2D113CDD0681BAF6B9 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, int32_t ___connectionId0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_m77574053810AA03D245085523189B9B1B1D02F70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// server.OnData = (connectionId, segment) => OnServerDataReceived.Invoke(connectionId, segment, Channels.DefaultReliable);
		Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * L_0 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnServerDataReceived_10();
		int32_t L_1 = ___connectionId0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_2 = ___segment1;
		NullCheck(L_0);
		Action_3_Invoke_m77574053810AA03D245085523189B9B1B1D02F70(L_0, L_1, L_2, 0, /*hidden argument*/Action_3_Invoke_m77574053810AA03D245085523189B9B1B1D02F70_RuntimeMethod_var);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<Awake>b__16_5(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CAwakeU3Eb__16_5_m5C9F8614ED86F5630676C4E29B4423EA0DD5D9F6 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// server.OnDisconnected = (connectionId) => OnServerDisconnected.Invoke(connectionId);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnServerDisconnected_12();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(L_0, L_1, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Mirror.TelepathyTransport::<Awake>b__16_6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_U3CAwakeU3Eb__16_6_m874F866E355A4DCE73B942608DAF1DBCFEF1B9A7 (TelepathyTransport_tA2335A0510A67EAAE0F4E97F58E4DF39AA7A863A * __this, const RuntimeMethod* method)
{
	{
		// enabledCheck = () => enabled;
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Transport::ClientConnect(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport_ClientConnect_mBA9A630061B0F73E6B0383A762693985C3AEEA6D (Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, const RuntimeMethod* method)
{
	{
		// ClientConnect(uri.Host);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___uri0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Uri_get_Host_m05E1D82C4E6B14A2369AEDED218F9089DE336E64(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Mirror.Transport::ClientConnect(System.String) */, __this, L_1);
		// }
		return;
	}
}
// System.Int32 Mirror.Transport::GetMaxBatchSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transport_GetMaxBatchSize_mCDEC1092208777286584F4982E9713DA5E7DA5E4 (Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * __this, int32_t ___channelId0, const RuntimeMethod* method)
{
	{
		// GetMaxPacketSize(channelId);
		int32_t L_0 = ___channelId0;
		int32_t L_1;
		L_1 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(17 /* System.Int32 Mirror.Transport::GetMaxPacketSize(System.Int32) */, __this, L_0);
		return L_1;
	}
}
// System.Void Mirror.Transport::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport_Update_mE9D7C9DCA9E54CA74C6D1B47C38834ABE4C7D796 (Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * __this, const RuntimeMethod* method)
{
	{
		// public void Update() {}
		return;
	}
}
// System.Void Mirror.Transport::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport_LateUpdate_m458595D25E89D7222C3424D8A95AE08BF0D646FD (Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * __this, const RuntimeMethod* method)
{
	{
		// public void LateUpdate() {}
		return;
	}
}
// System.Void Mirror.Transport::ClientEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport_ClientEarlyUpdate_m0722DB6D5B6FC924657EAEC9A7E0DAE15497AEBE (Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * __this, const RuntimeMethod* method)
{
	{
		// public virtual void ClientEarlyUpdate() {}
		return;
	}
}
// System.Void Mirror.Transport::ServerEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport_ServerEarlyUpdate_mFD20DA364D3891A0C0F053D96FECF8E79E717D80 (Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * __this, const RuntimeMethod* method)
{
	{
		// public virtual void ServerEarlyUpdate() {}
		return;
	}
}
// System.Void Mirror.Transport::ClientLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport_ClientLateUpdate_mD6FF8477B2174BD8B8DB9EA6F2CB02BDD473A135 (Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * __this, const RuntimeMethod* method)
{
	{
		// public virtual void ClientLateUpdate() {}
		return;
	}
}
// System.Void Mirror.Transport::ServerLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport_ServerLateUpdate_m0FC3D74ECF4029F06B92999BB34025E58F34CC8C (Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * __this, const RuntimeMethod* method)
{
	{
		// public virtual void ServerLateUpdate() {}
		return;
	}
}
// System.Void Mirror.Transport::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport_OnApplicationQuit_mC51DBEB57BAB46E2B780F49420F5E205D79675BB (Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * __this, const RuntimeMethod* method)
{
	{
		// Shutdown();
		VirtActionInvoker0::Invoke(23 /* System.Void Mirror.Transport::Shutdown() */, __this);
		// }
		return;
	}
}
// System.Void Mirror.Transport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport__ctor_m18499670B379DE249BA0A4D8D978335F0C1E0376 (Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m0F1FC12DAF031547739B9BFC8532E64934995D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m6AE258C04F422C22BD5CB17FF454F34A1F452A8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3__ctor_m52BF18DD2D5C75431537D8669F55B766BFB28987_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__32_0_mF7FDB3F2F0DFF66E559442E14A7D4464D0E14D79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__32_1_m54E5403E2D3851EA7C6A6D343300323AC7110927_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__32_2_mEE5BBB94A91E911340820E2237772AFDD1872CD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__32_3_mC6026CC78089FE13D779CC367A1D87FFCE82D604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__32_4_m195B635652A49A8FC937C05492F1610FAAC6F0BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__32_5_m76101E9DC27C90650C0BA52687E86B115CA542A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__32_6_m324D78CD5F370CACCC239A8ACAB0E17767C01C1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__32_7_m3976B6943CBB65C428F9FE631793BB65EA539C8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B2_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B1_1 = NULL;
	Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * G_B4_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B4_1 = NULL;
	Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * G_B3_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B3_1 = NULL;
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * G_B6_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B6_1 = NULL;
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * G_B5_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B5_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B8_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B8_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B7_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B7_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B10_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B10_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B9_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B9_1 = NULL;
	Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * G_B12_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B12_1 = NULL;
	Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * G_B11_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B11_1 = NULL;
	Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * G_B14_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B14_1 = NULL;
	Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * G_B13_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B13_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B16_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B16_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B15_0 = NULL;
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * G_B15_1 = NULL;
	{
		// public Action OnClientConnected = () => Debug.LogWarning("OnClientConnected called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9__32_0_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * L_2 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__32_0_mF7FDB3F2F0DFF66E559442E14A7D4464D0E14D79_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
		((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->set_U3CU3E9__32_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_OnClientConnected_5(G_B2_0);
		// public Action<ArraySegment<byte>, int> OnClientDataReceived = (data, channel) => Debug.LogWarning("OnClientDataReceived called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * L_5 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9__32_1_2();
		Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = __this;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * L_7 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * L_8 = (Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC *)il2cpp_codegen_object_new(Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC_il2cpp_TypeInfo_var);
		Action_2__ctor_m6AE258C04F422C22BD5CB17FF454F34A1F452A8E(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__32_1_m54E5403E2D3851EA7C6A6D343300323AC7110927_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m6AE258C04F422C22BD5CB17FF454F34A1F452A8E_RuntimeMethod_var);
		Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * L_9 = L_8;
		((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->set_U3CU3E9__32_1_2(L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_OnClientDataReceived_6(G_B4_0);
		// public Action<Exception> OnClientError = (error) => Debug.LogWarning("OnClientError called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_10 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9__32_2_3();
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_11 = L_10;
		G_B5_0 = L_11;
		G_B5_1 = __this;
		if (L_11)
		{
			G_B6_0 = L_11;
			G_B6_1 = __this;
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * L_12 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_13 = (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)il2cpp_codegen_object_new(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90_il2cpp_TypeInfo_var);
		Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__32_2_mEE5BBB94A91E911340820E2237772AFDD1872CD7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6_RuntimeMethod_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_14 = L_13;
		((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->set_U3CU3E9__32_2_3(L_14);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_1;
	}

IL_006a:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_OnClientError_7(G_B6_0);
		// public Action OnClientDisconnected = () => Debug.LogWarning("OnClientDisconnected called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9__32_3_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = L_15;
		G_B7_0 = L_16;
		G_B7_1 = __this;
		if (L_16)
		{
			G_B8_0 = L_16;
			G_B8_1 = __this;
			goto IL_008f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * L_17 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_18 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__32_3_mC6026CC78089FE13D779CC367A1D87FFCE82D604_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_19 = L_18;
		((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->set_U3CU3E9__32_3_4(L_19);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_008f:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_OnClientDisconnected_8(G_B8_0);
		// public Action<int> OnServerConnected = (connId) => Debug.LogWarning("OnServerConnected called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_20 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9__32_4_5();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_21 = L_20;
		G_B9_0 = L_21;
		G_B9_1 = __this;
		if (L_21)
		{
			G_B10_0 = L_21;
			G_B10_1 = __this;
			goto IL_00b4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * L_22 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_23 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_23, L_22, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__32_4_m195B635652A49A8FC937C05492F1610FAAC6F0BB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_24 = L_23;
		((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->set_U3CU3E9__32_4_5(L_24);
		G_B10_0 = L_24;
		G_B10_1 = G_B9_1;
	}

IL_00b4:
	{
		NullCheck(G_B10_1);
		G_B10_1->set_OnServerConnected_9(G_B10_0);
		// public Action<int, ArraySegment<byte>, int> OnServerDataReceived = (connId, data, channel) => Debug.LogWarning("OnServerDataReceived called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * L_25 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9__32_5_6();
		Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * L_26 = L_25;
		G_B11_0 = L_26;
		G_B11_1 = __this;
		if (L_26)
		{
			G_B12_0 = L_26;
			G_B12_1 = __this;
			goto IL_00d9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * L_27 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * L_28 = (Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 *)il2cpp_codegen_object_new(Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0_il2cpp_TypeInfo_var);
		Action_3__ctor_m52BF18DD2D5C75431537D8669F55B766BFB28987(L_28, L_27, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__32_5_m76101E9DC27C90650C0BA52687E86B115CA542A2_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_m52BF18DD2D5C75431537D8669F55B766BFB28987_RuntimeMethod_var);
		Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * L_29 = L_28;
		((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->set_U3CU3E9__32_5_6(L_29);
		G_B12_0 = L_29;
		G_B12_1 = G_B11_1;
	}

IL_00d9:
	{
		NullCheck(G_B12_1);
		G_B12_1->set_OnServerDataReceived_10(G_B12_0);
		// public Action<int, Exception> OnServerError = (connId, error) => Debug.LogWarning("OnServerError called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * L_30 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9__32_6_7();
		Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * L_31 = L_30;
		G_B13_0 = L_31;
		G_B13_1 = __this;
		if (L_31)
		{
			G_B14_0 = L_31;
			G_B14_1 = __this;
			goto IL_00fe;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * L_32 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * L_33 = (Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 *)il2cpp_codegen_object_new(Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67_il2cpp_TypeInfo_var);
		Action_2__ctor_m0F1FC12DAF031547739B9BFC8532E64934995D42(L_33, L_32, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__32_6_m324D78CD5F370CACCC239A8ACAB0E17767C01C1C_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m0F1FC12DAF031547739B9BFC8532E64934995D42_RuntimeMethod_var);
		Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * L_34 = L_33;
		((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->set_U3CU3E9__32_6_7(L_34);
		G_B14_0 = L_34;
		G_B14_1 = G_B13_1;
	}

IL_00fe:
	{
		NullCheck(G_B14_1);
		G_B14_1->set_OnServerError_11(G_B14_0);
		// public Action<int> OnServerDisconnected = (connId) => Debug.LogWarning("OnServerDisconnected called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_35 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9__32_7_8();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_36 = L_35;
		G_B15_0 = L_36;
		G_B15_1 = __this;
		if (L_36)
		{
			G_B16_0 = L_36;
			G_B16_1 = __this;
			goto IL_0123;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * L_37 = ((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_38 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_38, L_37, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__32_7_m3976B6943CBB65C428F9FE631793BB65EA539C8D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_39 = L_38;
		((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->set_U3CU3E9__32_7_8(L_39);
		G_B16_0 = L_39;
		G_B16_1 = G_B15_1;
	}

IL_0123:
	{
		NullCheck(G_B16_1);
		G_B16_1->set_OnServerDisconnected_12(G_B16_0);
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
// System.Void Mirror.UnSpawnDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSpawnDelegate__ctor_mB9B060274806A21287BA156858B167BDCC028AE1 (UnSpawnDelegate_tE6B7286FD960C7A2C80DB84A19FCF44BEB2CE6AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mirror.UnSpawnDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSpawnDelegate_Invoke_m253B17666AEEE399A94FF14D3B4FA5AFD7078D57 (UnSpawnDelegate_tE6B7286FD960C7A2C80DB84A19FCF44BEB2CE6AC * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawned0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___spawned0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___spawned0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___spawned0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___spawned0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___spawned0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___spawned0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___spawned0, targetMethod);
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
						GenericInterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___spawned0);
					else
						GenericVirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___spawned0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___spawned0);
					else
						VirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___spawned0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___spawned0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___spawned0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mirror.UnSpawnDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnSpawnDelegate_BeginInvoke_m281EC91CBC5162D34ACF38393B3881A800CE3058 (UnSpawnDelegate_tE6B7286FD960C7A2C80DB84A19FCF44BEB2CE6AC * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawned0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___spawned0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mirror.UnSpawnDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSpawnDelegate_EndInvoke_mECA5B4C0F9415708A4E4D354020E3F4F48927B57 (UnSpawnDelegate_tE6B7286FD960C7A2C80DB84A19FCF44BEB2CE6AC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Mirror.UnityEventNetworkConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventNetworkConnection__ctor_m2E143132E593982075D6CFB3ACE9FC22A2E66F55 (UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mA2EF7120BAD01BD1BAC024CF49A792C4E951B7A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mA2EF7120BAD01BD1BAC024CF49A792C4E951B7A8(__this, /*hidden argument*/UnityEvent_1__ctor_mA2EF7120BAD01BD1BAC024CF49A792C4E951B7A8_RuntimeMethod_var);
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
// Conversion methods for marshalling of: Mirror.UpdateVarsMessage
IL2CPP_EXTERN_C void UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshal_pinvoke(const UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1& unmarshaled, UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___payload_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'UpdateVarsMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_1Exception, NULL);
}
IL2CPP_EXTERN_C void UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshal_pinvoke_back(const UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshaled_pinvoke& marshaled, UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1& unmarshaled)
{
	Exception_t* ___payload_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'UpdateVarsMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mirror.UpdateVarsMessage
IL2CPP_EXTERN_C void UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshal_pinvoke_cleanup(UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mirror.UpdateVarsMessage
IL2CPP_EXTERN_C void UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshal_com(const UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1& unmarshaled, UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshaled_com& marshaled)
{
	Exception_t* ___payload_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'UpdateVarsMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_1Exception, NULL);
}
IL2CPP_EXTERN_C void UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshal_com_back(const UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshaled_com& marshaled, UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1& unmarshaled)
{
	Exception_t* ___payload_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'UpdateVarsMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mirror.UpdateVarsMessage
IL2CPP_EXTERN_C void UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshal_com_cleanup(UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 Mirror.Utils::GetTrueRandomUInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Utils_GetTrueRandomUInt_m42E9457ACD0D68D5B81A8B127F0F5B3D68C8A60E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1 * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	uint32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (RNGCryptoServiceProvider rng = new RNGCryptoServiceProvider())
		RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1 * L_0 = (RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1 *)il2cpp_codegen_object_new(RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_il2cpp_TypeInfo_var);
		RNGCryptoServiceProvider__ctor_mCBC98067A4839FB96DCF01860078278EC148FFBE(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// byte[] bytes = new byte[4];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		V_1 = L_1;
		// rng.GetBytes(bytes);
		RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1 * L_2 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_1;
		NullCheck(L_2);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_2, L_3);
		// return BitConverter.ToUInt32(bytes, 0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = BitConverter_ToUInt32_m0C9F3D9840110CC82D4C18FD882AC5C7EA595366(L_4, 0, /*hidden argument*/NULL);
		V_2 = L_5;
		IL2CPP_LEAVE(0x28, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		{
			RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0027;
			}
		}

IL_0021:
		{
			RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_7);
		}

IL_0027:
		{
			IL2CPP_END_FINALLY(30)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x28, IL_0028)
	}

IL_0028:
	{
		// }
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// System.Boolean Mirror.Utils::IsPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsPrefab_mF9AE489EFFD6D206956CB7C33F27A6515578F502 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, const RuntimeMethod* method)
{
	{
		// return false;
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
// System.Void Mirror.ClientScene/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5D315FCE088C3CF0C57EAC3AA2FAB0CEEE39AF00 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D * L_0 = (U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D *)il2cpp_codegen_object_new(U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDB0EFCAE428B5DF8FA931D0785AB161CBACD9CA2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mirror.ClientScene/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDB0EFCAE428B5DF8FA931D0785AB161CBACD9CA2 (U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt32 Mirror.ClientScene/<>c::<OnObjectSpawnFinished>b__49_0(Mirror.NetworkIdentity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CU3Ec_U3COnObjectSpawnFinishedU3Eb__49_0_m4830F3AE14217C8AE404E35365A5824A551940BF (U3CU3Ec_t9A3248AC73C1324B52B8F2B80A8BA70E5212646D * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___uv0, const RuntimeMethod* method)
{
	{
		// foreach (NetworkIdentity identity in NetworkIdentity.spawned.Values.OrderBy(uv => uv.netId))
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_0 = ___uv0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkIdentity_get_netId_m3FF02B719B8AE0B6A3483063A373AFFB2489C0FA_inline(L_0, /*hidden argument*/NULL);
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
// System.Void Mirror.ClientScene/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_m6C6794B7F9D66C67049CEA43720ED35476E5578D (U3CU3Ec__DisplayClass30_0_tC3329C157C1207413552FA5809AC7FCD41D61514 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject Mirror.ClientScene/<>c__DisplayClass30_0::<RegisterPrefab>b__0(Mirror.SpawnMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * U3CU3Ec__DisplayClass30_0_U3CRegisterPrefabU3Eb__0_mDB202A3AE8AC61721B30F315780FD34C95373D30 (U3CU3Ec__DisplayClass30_0_tC3329C157C1207413552FA5809AC7FCD41D61514 * __this, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  ___msg0, const RuntimeMethod* method)
{
	{
		// RegisterPrefab(prefab, newAssetId, msg => spawnHandler(msg.position, msg.assetId), unspawnHandler);
		SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * L_0 = __this->get_spawnHandler_0();
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_1 = ___msg0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = L_1.get_position_5();
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_3 = ___msg0;
		Guid_t  L_4 = L_3.get_assetId_4();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = SpawnDelegate_Invoke_m647484B13C3CB741C8D7D910D355FEC904FBFBA3(L_0, L_2, L_4, /*hidden argument*/NULL);
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
// System.Void Mirror.ClientScene/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mBBAA0C53DB049430B2466206A0F79FB027B82EC7 (U3CU3Ec__DisplayClass31_0_t149A49A0005767DDF4551E5E3D79C8205228A854 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject Mirror.ClientScene/<>c__DisplayClass31_0::<RegisterPrefab>b__0(Mirror.SpawnMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * U3CU3Ec__DisplayClass31_0_U3CRegisterPrefabU3Eb__0_m99DE60EA75365AB963141964467DAD6178268161 (U3CU3Ec__DisplayClass31_0_t149A49A0005767DDF4551E5E3D79C8205228A854 * __this, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  ___msg0, const RuntimeMethod* method)
{
	{
		// RegisterPrefab(prefab, msg => spawnHandler(msg.position, msg.assetId), unspawnHandler);
		SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * L_0 = __this->get_spawnHandler_0();
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_1 = ___msg0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = L_1.get_position_5();
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_3 = ___msg0;
		Guid_t  L_4 = L_3.get_assetId_4();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = SpawnDelegate_Invoke_m647484B13C3CB741C8D7D910D355FEC904FBFBA3(L_0, L_2, L_4, /*hidden argument*/NULL);
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
// System.Void Mirror.ClientScene/<>c__DisplayClass35_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0__ctor_m6D92E831B1CB45C49FDB9E49BED50D0803C01A92 (U3CU3Ec__DisplayClass35_0_t0944B2607EBEC0A490240D3F8A4A0A30705B336E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject Mirror.ClientScene/<>c__DisplayClass35_0::<RegisterSpawnHandler>b__0(Mirror.SpawnMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * U3CU3Ec__DisplayClass35_0_U3CRegisterSpawnHandlerU3Eb__0_mDF0846A9DC0E86BE49FD743F535DE68971212598 (U3CU3Ec__DisplayClass35_0_t0944B2607EBEC0A490240D3F8A4A0A30705B336E * __this, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  ___msg0, const RuntimeMethod* method)
{
	{
		// RegisterSpawnHandler(assetId, msg => spawnHandler(msg.position, msg.assetId), unspawnHandler);
		SpawnDelegate_tB0DDF990C9C6DD4879F9E4374B4CFDD1C3BE892E * L_0 = __this->get_spawnHandler_0();
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_1 = ___msg0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = L_1.get_position_5();
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_3 = ___msg0;
		Guid_t  L_4 = L_3.get_assetId_4();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = SpawnDelegate_Invoke_m647484B13C3CB741C8D7D910D355FEC904FBFBA3(L_0, L_2, L_4, /*hidden argument*/NULL);
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
// System.Void Mirror.ClientScene/LocalplayerChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalplayerChanged__ctor_m958B7F80F29E42B4A5739A5261AD9CEBADEE7868 (LocalplayerChanged_t153CFBEB17900932F679C9861C613D6FD98F7942 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mirror.ClientScene/LocalplayerChanged::Invoke(Mirror.NetworkIdentity,Mirror.NetworkIdentity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalplayerChanged_Invoke_m64A03681BF2A78FC1823995E3620CD49A09AEF90 (LocalplayerChanged_t153CFBEB17900932F679C9861C613D6FD98F7942 * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___oldPlayer0, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___newPlayer1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___oldPlayer0, ___newPlayer1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___oldPlayer0, ___newPlayer1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * >::Invoke(targetMethod, ___oldPlayer0, ___newPlayer1);
					else
						GenericVirtActionInvoker1< NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * >::Invoke(targetMethod, ___oldPlayer0, ___newPlayer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___oldPlayer0, ___newPlayer1);
					else
						VirtActionInvoker1< NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___oldPlayer0, ___newPlayer1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___oldPlayer0, ___newPlayer1, targetMethod);
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
						GenericInterfaceActionInvoker2< NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * >::Invoke(targetMethod, targetThis, ___oldPlayer0, ___newPlayer1);
					else
						GenericVirtActionInvoker2< NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * >::Invoke(targetMethod, targetThis, ___oldPlayer0, ___newPlayer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___oldPlayer0, ___newPlayer1);
					else
						VirtActionInvoker2< NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___oldPlayer0, ___newPlayer1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___oldPlayer0, ___newPlayer1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___oldPlayer0, ___newPlayer1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mirror.ClientScene/LocalplayerChanged::BeginInvoke(Mirror.NetworkIdentity,Mirror.NetworkIdentity,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocalplayerChanged_BeginInvoke_m5A7B98C10BC009985FEDCAE5B4437A296C17F16D (LocalplayerChanged_t153CFBEB17900932F679C9861C613D6FD98F7942 * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___oldPlayer0, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___newPlayer1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___oldPlayer0;
	__d_args[1] = ___newPlayer1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Mirror.ClientScene/LocalplayerChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalplayerChanged_EndInvoke_mDFB4A723845AFC7137A1EAC07EB2C2B70D875EAF (LocalplayerChanged_t153CFBEB17900932F679C9861C613D6FD98F7942 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void kcp2k.KcpTransport/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m74DDBDACB2E47803B0ECB09111C9BCD8E1FBC2FF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 * L_0 = (U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 *)il2cpp_codegen_object_new(U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m198B95BF0E13C9FF9E4CF6A86E7F21801E5234E0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void kcp2k.KcpTransport/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m198B95BF0E13C9FF9E4CF6A86E7F21801E5234E0 (U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport/<>c::<Awake>b__13_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__13_0_m734C59CAF6A3A5F86C7C74B6D0B502FE1660C9E9 (U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 * __this, String_t* ____0, const RuntimeMethod* method)
{
	{
		// Log.Info = _ => {};
		return;
	}
}
// System.Int32 kcp2k.KcpTransport/<>c::<GetAverageMaxSendRate>b__35_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetAverageMaxSendRateU3Eb__35_0_m4FA0E31E7D8E09D87780AE77B6ADBF3B4C67F39C (U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 * __this, KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * ___conn0, const RuntimeMethod* method)
{
	{
		// ? server.connections.Values.Sum(conn => (int)conn.MaxSendRate) / server.connections.Count
		KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_0 = ___conn0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = KcpConnection_get_MaxSendRate_m79F01DE756C7EBDC1A7CC9F191489F73B4416E22(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 kcp2k.KcpTransport/<>c::<GetAverageMaxReceiveRate>b__36_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetAverageMaxReceiveRateU3Eb__36_0_m35CC40E5FEEBD969C13D40C1D310FC9ECAB1DBA3 (U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 * __this, KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * ___conn0, const RuntimeMethod* method)
{
	{
		// ? server.connections.Values.Sum(conn => (int)conn.MaxReceiveRate) / server.connections.Count
		KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_0 = ___conn0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = KcpConnection_get_MaxReceiveRate_mD05C8C9E6006EDF3E5AC02B3AF3F088DEA90284F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 kcp2k.KcpTransport/<>c::<GetTotalSendQueue>b__37_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTotalSendQueueU3Eb__37_0_mA750649976DD14B26E587CF216B33FF05773C12C (U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 * __this, KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * ___conn0, const RuntimeMethod* method)
{
	{
		// server.connections.Values.Sum(conn => conn.SendQueueCount);
		KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_0 = ___conn0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = KcpConnection_get_SendQueueCount_m24F398387A8B1579866B2A5E6B14064E259E8CCD(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 kcp2k.KcpTransport/<>c::<GetTotalReceiveQueue>b__38_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTotalReceiveQueueU3Eb__38_0_m2CC37246A2B07544CE74082F7DFD5B4B68663AB9 (U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 * __this, KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * ___conn0, const RuntimeMethod* method)
{
	{
		// server.connections.Values.Sum(conn => conn.ReceiveQueueCount);
		KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_0 = ___conn0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = KcpConnection_get_ReceiveQueueCount_mE7088852AC83C44DFA8381335B704A15ED65C058(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 kcp2k.KcpTransport/<>c::<GetTotalSendBuffer>b__39_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTotalSendBufferU3Eb__39_0_m86D09D49E1E98A625F5CB78DF23CED311719A71A (U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 * __this, KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * ___conn0, const RuntimeMethod* method)
{
	{
		// server.connections.Values.Sum(conn => conn.SendBufferCount);
		KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_0 = ___conn0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = KcpConnection_get_SendBufferCount_m9D780C0933778E0BBE063C1FFB41DE5051C5A27D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 kcp2k.KcpTransport/<>c::<GetTotalReceiveBuffer>b__40_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTotalReceiveBufferU3Eb__40_0_m7028B49A8E209110599965F22C9E24A4148922DB (U3CU3Ec_tB82D798F991A7DF5861FFFB68A88F8E22D310F14 * __this, KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * ___conn0, const RuntimeMethod* method)
{
	{
		// server.connections.Values.Sum(conn => conn.ReceiveBufferCount);
		KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_0 = ___conn0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = KcpConnection_get_ReceiveBufferCount_m1B0C9A15F679EAA6622061522EC27D8817D3DFC9(L_0, /*hidden argument*/NULL);
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
// System.Void Mirror.MultiplexTransport/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m53F2A9B26A161C859B2318A428A652CB727DB371 (U3CU3Ec__DisplayClass14_0_t9991E2E442238C75E9E6007DC4D3D0CD5152B658 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.MultiplexTransport/<>c__DisplayClass14_0::<AddServerCallbacks>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CAddServerCallbacksU3Eb__0_mB86FC4DB9E097611B00F45EC525E36EF9B3F8C0D (U3CU3Ec__DisplayClass14_0_t9991E2E442238C75E9E6007DC4D3D0CD5152B658 * __this, int32_t ___baseConnectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnServerConnected.Invoke(FromBaseId(locali, baseConnectionId));
		MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12 * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)L_0)->get_OnServerConnected_9();
		MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12 * L_2 = __this->get_U3CU3E4__this_1();
		int32_t L_3 = __this->get_locali_0();
		int32_t L_4 = ___baseConnectionId0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = MultiplexTransport_FromBaseId_m48D22B4B10606A37A35893E55EA3F38CF11F24E4(L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(L_1, L_5, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		// });
		return;
	}
}
// System.Void Mirror.MultiplexTransport/<>c__DisplayClass14_0::<AddServerCallbacks>b__1(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CAddServerCallbacksU3Eb__1_m1E8E121DA8E371550E1546331141EA32D86C987E (U3CU3Ec__DisplayClass14_0_t9991E2E442238C75E9E6007DC4D3D0CD5152B658 * __this, int32_t ___baseConnectionId0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___data1, int32_t ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_m77574053810AA03D245085523189B9B1B1D02F70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnServerDataReceived.Invoke(FromBaseId(locali, baseConnectionId), data, channel);
		MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12 * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * L_1 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)L_0)->get_OnServerDataReceived_10();
		MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12 * L_2 = __this->get_U3CU3E4__this_1();
		int32_t L_3 = __this->get_locali_0();
		int32_t L_4 = ___baseConnectionId0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = MultiplexTransport_FromBaseId_m48D22B4B10606A37A35893E55EA3F38CF11F24E4(L_2, L_3, L_4, /*hidden argument*/NULL);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_6 = ___data1;
		int32_t L_7 = ___channel2;
		NullCheck(L_1);
		Action_3_Invoke_m77574053810AA03D245085523189B9B1B1D02F70(L_1, L_5, L_6, L_7, /*hidden argument*/Action_3_Invoke_m77574053810AA03D245085523189B9B1B1D02F70_RuntimeMethod_var);
		// };
		return;
	}
}
// System.Void Mirror.MultiplexTransport/<>c__DisplayClass14_0::<AddServerCallbacks>b__2(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CAddServerCallbacksU3Eb__2_m77F0D52A387FB92FB26A8DC832090C90D02DCB2C (U3CU3Ec__DisplayClass14_0_t9991E2E442238C75E9E6007DC4D3D0CD5152B658 * __this, int32_t ___baseConnectionId0, Exception_t * ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m429C88434C52233463BBF414E7283E6EFD4B15B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnServerError.Invoke(FromBaseId(locali, baseConnectionId), error);
		MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12 * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		Action_2_t65966DF8C2BC50E2630B66B1C17C9846754A4E67 * L_1 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)L_0)->get_OnServerError_11();
		MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12 * L_2 = __this->get_U3CU3E4__this_1();
		int32_t L_3 = __this->get_locali_0();
		int32_t L_4 = ___baseConnectionId0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = MultiplexTransport_FromBaseId_m48D22B4B10606A37A35893E55EA3F38CF11F24E4(L_2, L_3, L_4, /*hidden argument*/NULL);
		Exception_t * L_6 = ___error1;
		NullCheck(L_1);
		Action_2_Invoke_m429C88434C52233463BBF414E7283E6EFD4B15B6(L_1, L_5, L_6, /*hidden argument*/Action_2_Invoke_m429C88434C52233463BBF414E7283E6EFD4B15B6_RuntimeMethod_var);
		// };
		return;
	}
}
// System.Void Mirror.MultiplexTransport/<>c__DisplayClass14_0::<AddServerCallbacks>b__3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CAddServerCallbacksU3Eb__3_m9AA80B1886AF791C79822B3D00917CF912128090 (U3CU3Ec__DisplayClass14_0_t9991E2E442238C75E9E6007DC4D3D0CD5152B658 * __this, int32_t ___baseConnectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnServerDisconnected.Invoke(FromBaseId(locali, baseConnectionId));
		MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12 * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)L_0)->get_OnServerDisconnected_12();
		MultiplexTransport_t8D22C1707BFBA6D122CE6AA884CFCCED527D1A12 * L_2 = __this->get_U3CU3E4__this_1();
		int32_t L_3 = __this->get_locali_0();
		int32_t L_4 = ___baseConnectionId0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = MultiplexTransport_FromBaseId_m48D22B4B10606A37A35893E55EA3F38CF11F24E4(L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(L_1, L_5, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
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
// System.Void Mirror.NetworkBehaviour/NetworkBehaviourSyncVar::.ctor(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviourSyncVar__ctor_mFB219E84A8139BFFCC899543F4057E03D963B0FF (NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F * __this, uint32_t ___netId0, int32_t ___componentIndex1, const RuntimeMethod* method)
{
	{
		// public NetworkBehaviourSyncVar(uint netId, int componentIndex) : this()
		il2cpp_codegen_initobj(__this, sizeof(NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F ));
		// this.netId = netId;
		uint32_t L_0 = ___netId0;
		__this->set_netId_0(L_0);
		// this.componentIndex = (byte)componentIndex;
		int32_t L_1 = ___componentIndex1;
		__this->set_componentIndex_1((uint8_t)((int32_t)((uint8_t)L_1)));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkBehaviourSyncVar__ctor_mFB219E84A8139BFFCC899543F4057E03D963B0FF_AdjustorThunk (RuntimeObject * __this, uint32_t ___netId0, int32_t ___componentIndex1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F * _thisAdjusted = reinterpret_cast<NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F *>(__this + _offset);
	NetworkBehaviourSyncVar__ctor_mFB219E84A8139BFFCC899543F4057E03D963B0FF(_thisAdjusted, ___netId0, ___componentIndex1, method);
}
// System.Boolean Mirror.NetworkBehaviour/NetworkBehaviourSyncVar::Equals(Mirror.NetworkBehaviour/NetworkBehaviourSyncVar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviourSyncVar_Equals_m2EE0BD631368A1EA28D3E4422A9F14C43B9B0A27 (NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F * __this, NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F  ___other0, const RuntimeMethod* method)
{
	{
		// return other.netId == netId && other.componentIndex == componentIndex;
		NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F  L_0 = ___other0;
		uint32_t L_1 = L_0.get_netId_0();
		uint32_t L_2 = __this->get_netId_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F  L_3 = ___other0;
		uint8_t L_4 = L_3.get_componentIndex_1();
		uint8_t L_5 = __this->get_componentIndex_1();
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool NetworkBehaviourSyncVar_Equals_m2EE0BD631368A1EA28D3E4422A9F14C43B9B0A27_AdjustorThunk (RuntimeObject * __this, NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F * _thisAdjusted = reinterpret_cast<NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkBehaviourSyncVar_Equals_m2EE0BD631368A1EA28D3E4422A9F14C43B9B0A27(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Mirror.NetworkBehaviour/NetworkBehaviourSyncVar::Equals(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviourSyncVar_Equals_m2EE82223A7405A371A233BCED2C78292E69AA85F (NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F * __this, uint32_t ___netId0, int32_t ___componentIndex1, const RuntimeMethod* method)
{
	{
		// return this.netId == netId && this.componentIndex == componentIndex;
		uint32_t L_0 = __this->get_netId_0();
		uint32_t L_1 = ___netId0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0013;
		}
	}
	{
		uint8_t L_2 = __this->get_componentIndex_1();
		int32_t L_3 = ___componentIndex1;
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}

IL_0013:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool NetworkBehaviourSyncVar_Equals_m2EE82223A7405A371A233BCED2C78292E69AA85F_AdjustorThunk (RuntimeObject * __this, uint32_t ___netId0, int32_t ___componentIndex1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F * _thisAdjusted = reinterpret_cast<NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkBehaviourSyncVar_Equals_m2EE82223A7405A371A233BCED2C78292E69AA85F(_thisAdjusted, ___netId0, ___componentIndex1, method);
	return _returnValue;
}
// System.String Mirror.NetworkBehaviour/NetworkBehaviourSyncVar::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkBehaviourSyncVar_ToString_m4DE9A94D17F9F28FCDB963AC8665144C37076363 (NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28263A27D302DC5DF9EDC1BFB7D78E301205C5DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"[netId:{netId} compIndex:{componentIndex}]";
		uint32_t L_0 = __this->get_netId_0();
		uint32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_1);
		uint8_t L_3 = __this->get_componentIndex_1();
		uint8_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral28263A27D302DC5DF9EDC1BFB7D78E301205C5DB, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* NetworkBehaviourSyncVar_ToString_m4DE9A94D17F9F28FCDB963AC8665144C37076363_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F * _thisAdjusted = reinterpret_cast<NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = NetworkBehaviourSyncVar_ToString_m4DE9A94D17F9F28FCDB963AC8665144C37076363(_thisAdjusted, method);
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
// System.Void Mirror.NetworkClient/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBED38AB857BA061D80B1B06261A24C9C56744C10 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3 * L_0 = (U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3 *)il2cpp_codegen_object_new(U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m66C0ED4876EBA658BD0CF465BFA73ECA9EBDA408(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mirror.NetworkClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m66C0ED4876EBA658BD0CF465BFA73ECA9EBDA408 (U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkClient/<>c::<RegisterSystemHandlers>b__31_0(Mirror.NetworkConnection,Mirror.NetworkPongMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterSystemHandlersU3Eb__31_0_mACF461C3EC9CB490E1B64B86DC95FBF9653564A6 (U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  ___msg1, const RuntimeMethod* method)
{
	{
		// RegisterHandler<NetworkPongMessage>((conn, msg) => {}, false);
		return;
	}
}
// System.Void Mirror.NetworkClient/<>c::<RegisterSystemHandlers>b__31_1(Mirror.NetworkConnection,Mirror.ObjectSpawnStartedMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterSystemHandlersU3Eb__31_1_m0E763A5BB052431A6D476F3954D9CA58CF5CD332 (U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, ObjectSpawnStartedMessage_tD7D009DD36048BE07917801633EDDEFC2FB19177  ___msg1, const RuntimeMethod* method)
{
	{
		// RegisterHandler<ObjectSpawnStartedMessage>((conn, msg) => {});
		return;
	}
}
// System.Void Mirror.NetworkClient/<>c::<RegisterSystemHandlers>b__31_2(Mirror.NetworkConnection,Mirror.ObjectSpawnFinishedMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterSystemHandlersU3Eb__31_2_mBA9BC55B0C3814B5430AF68D040593292A6E5A5F (U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, ObjectSpawnFinishedMessage_t6E1E7CC5B237E736E906B7C9B335D2CAFB3C67A7  ___msg1, const RuntimeMethod* method)
{
	{
		// RegisterHandler<ObjectSpawnFinishedMessage>((conn, msg) => {});
		return;
	}
}
// System.Void Mirror.NetworkClient/<>c::<RegisterSystemHandlers>b__31_3(Mirror.NetworkConnection,Mirror.UpdateVarsMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterSystemHandlersU3Eb__31_3_m37EAE0518BB4F21E6163A863A0FC795A7D315C97 (U3CU3Ec_tC1919C57E3AF5B4715AF5C5647F54CE7B7BCC1F3 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1  ___msg1, const RuntimeMethod* method)
{
	{
		// RegisterHandler<UpdateVarsMessage>((conn, msg) => {});
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
// System.Void Mirror.NetworkConnectionToClient/Batch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Batch__ctor_mC38954B624162C3C15FE977087CEAB6D395B3FAF (Batch_t8E307F02ADA1296DFCBBF39885614D64DED75DBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m8A390E5C2CBC38435B3D15C68350D0DBA45FBDE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Queue<PooledNetworkWriter> messages = new Queue<PooledNetworkWriter>();
		Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001 * L_0 = (Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001 *)il2cpp_codegen_object_new(Queue_1_tCE12D4F9467A8C2305D1CBA393BF7E1F50361001_il2cpp_TypeInfo_var);
		Queue_1__ctor_m8A390E5C2CBC38435B3D15C68350D0DBA45FBDE4(L_0, /*hidden argument*/Queue_1__ctor_m8A390E5C2CBC38435B3D15C68350D0DBA45FBDE4_RuntimeMethod_var);
		__this->set_messages_0(L_0);
		// internal double lastSendTime = NetworkTime.time;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = NetworkTime_get_time_m8DE6EBB4100FF44B7A282881FD69798D737C24C6(/*hidden argument*/NULL);
		__this->set_lastSendTime_1(L_1);
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
// Conversion methods for marshalling of: Mirror.NetworkDiagnostics/MessageInfo
IL2CPP_EXTERN_C void MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshal_pinvoke(const MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A& unmarshaled, MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___message_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'message' of type 'MessageInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___message_0Exception, NULL);
}
IL2CPP_EXTERN_C void MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshal_pinvoke_back(const MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshaled_pinvoke& marshaled, MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A& unmarshaled)
{
	Exception_t* ___message_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'message' of type 'MessageInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___message_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mirror.NetworkDiagnostics/MessageInfo
IL2CPP_EXTERN_C void MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshal_pinvoke_cleanup(MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mirror.NetworkDiagnostics/MessageInfo
IL2CPP_EXTERN_C void MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshal_com(const MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A& unmarshaled, MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshaled_com& marshaled)
{
	Exception_t* ___message_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'message' of type 'MessageInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___message_0Exception, NULL);
}
IL2CPP_EXTERN_C void MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshal_com_back(const MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshaled_com& marshaled, MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A& unmarshaled)
{
	Exception_t* ___message_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'message' of type 'MessageInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___message_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mirror.NetworkDiagnostics/MessageInfo
IL2CPP_EXTERN_C void MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshal_com_cleanup(MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A_marshaled_com& marshaled)
{
}
// System.Void Mirror.NetworkDiagnostics/MessageInfo::.ctor(Mirror.NetworkMessage,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageInfo__ctor_mAC67988BF4FBFD84F5201A8DBFEA962167787671 (MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A * __this, RuntimeObject* ___message0, int32_t ___channel1, int32_t ___bytes2, int32_t ___count3, const RuntimeMethod* method)
{
	{
		// this.message = message;
		RuntimeObject* L_0 = ___message0;
		__this->set_message_0(L_0);
		// this.channel = channel;
		int32_t L_1 = ___channel1;
		__this->set_channel_1(L_1);
		// this.bytes = bytes;
		int32_t L_2 = ___bytes2;
		__this->set_bytes_2(L_2);
		// this.count = count;
		int32_t L_3 = ___count3;
		__this->set_count_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MessageInfo__ctor_mAC67988BF4FBFD84F5201A8DBFEA962167787671_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___message0, int32_t ___channel1, int32_t ___bytes2, int32_t ___count3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A * _thisAdjusted = reinterpret_cast<MessageInfo_tBCD9A3538EB6421D7CDE5939C7CF83886B53728A *>(__this + _offset);
	MessageInfo__ctor_mAC67988BF4FBFD84F5201A8DBFEA962167787671(_thisAdjusted, ___message0, ___channel1, ___bytes2, ___count3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.NetworkIdentity/ClientAuthorityCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAuthorityCallback__ctor_m5CB257AFC43DEA6B8CF7BDC3B8F05DB42B6BD7C7 (ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mirror.NetworkIdentity/ClientAuthorityCallback::Invoke(Mirror.NetworkConnection,Mirror.NetworkIdentity,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAuthorityCallback_Invoke_m7D934B03E2A5EECD750AEA84F0581DFCAB5FCAB5 (ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___identity1, bool ___authorityState2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___conn0, ___identity1, ___authorityState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___conn0, ___identity1, ___authorityState2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, bool >::Invoke(targetMethod, ___conn0, ___identity1, ___authorityState2);
					else
						GenericVirtActionInvoker2< NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, bool >::Invoke(targetMethod, ___conn0, ___identity1, ___authorityState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___conn0, ___identity1, ___authorityState2);
					else
						VirtActionInvoker2< NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___conn0, ___identity1, ___authorityState2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___conn0, ___identity1, ___authorityState2, targetMethod);
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
						GenericInterfaceActionInvoker3< NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, bool >::Invoke(targetMethod, targetThis, ___conn0, ___identity1, ___authorityState2);
					else
						GenericVirtActionInvoker3< NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, bool >::Invoke(targetMethod, targetThis, ___conn0, ___identity1, ___authorityState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___conn0, ___identity1, ___authorityState2);
					else
						VirtActionInvoker3< NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___conn0, ___identity1, ___authorityState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___conn0, ___identity1, ___authorityState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___conn0, ___identity1, ___authorityState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mirror.NetworkIdentity/ClientAuthorityCallback::BeginInvoke(Mirror.NetworkConnection,Mirror.NetworkIdentity,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientAuthorityCallback_BeginInvoke_m7C864923D390D7907FAFFA752AA01B181E3DAD4E (ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___identity1, bool ___authorityState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___conn0;
	__d_args[1] = ___identity1;
	__d_args[2] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___authorityState2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Mirror.NetworkIdentity/ClientAuthorityCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAuthorityCallback_EndInvoke_m9D51E32557679438EA41FEE710455EBF916C4C97 (ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Mirror.NetworkLoop/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m15643106A40EEFAFAC816B59F96EBCB72FA70518 (U3CU3Ec__DisplayClass1_0_t1C570947F0AC66F5A3945996F883B9B3DAD5FEB0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mirror.NetworkLoop/<>c__DisplayClass1_0::<FindPlayerLoopEntryIndex>b__0(UnityEngine.LowLevel.PlayerLoopSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1_0_U3CFindPlayerLoopEntryIndexU3Eb__0_m3154F15A533CFE0182B0AE7D57B513F9407D351D (U3CU3Ec__DisplayClass1_0_t1C570947F0AC66F5A3945996F883B9B3DAD5FEB0 * __this, PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  ___elem0, const RuntimeMethod* method)
{
	{
		// return Array.FindIndex(playerLoop.subSystemList, (elem => elem.updateDelegate == function));
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_0 = ___elem0;
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_1 = L_0.get_updateDelegate_2();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = __this->get_function_0();
		bool L_3;
		L_3 = Delegate_op_Equality_m7E0C89B9C571EA1CDFD6630CF7D49CC929ED6F41(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Mirror.NetworkManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m37D13BDF4CBED4CBCBB1249A2281187B67BA788E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0 * L_0 = (U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0 *)il2cpp_codegen_object_new(U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m450CE0D75EBA856B0B9F8B7F888C07156E680F20(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mirror.NetworkManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m450CE0D75EBA856B0B9F8B7F888C07156E680F20 (U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mirror.NetworkManager/<>c::<get_numPlayers>b__26_0(System.Collections.Generic.KeyValuePair`2<System.Int32,Mirror.NetworkConnectionToClient>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_numPlayersU3Eb__26_0_m2B608786386286EAFF249E77B10E54B6CE68914D (U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0 * __this, KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B  ___kv0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDFF4631D0F417B42AB24819A2F7D34916E270AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int numPlayers => NetworkServer.connections.Count(kv => kv.Value.identity != null);
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_0;
		L_0 = KeyValuePair_2_get_Value_mDFF4631D0F417B42AB24819A2F7D34916E270AE1_inline((KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B *)(&___kv0), /*hidden argument*/KeyValuePair_2_get_Value_mDFF4631D0F417B42AB24819A2F7D34916E270AE1_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_1;
		L_1 = NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Mirror.NetworkManager/<>c::<RegisterClientMessages>b__55_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRegisterClientMessagesU3Eb__55_0_m58EE1182E5BABAAE81670C7F35A2DDD6B47F2319 (U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// foreach (GameObject prefab in spawnPrefabs.Where(t => t != null))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Mirror.NetworkManager/<>c::<RegisterStartPosition>b__72_0(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRegisterStartPositionU3Eb__72_0_mF7915E6A5ADA857C925F8240D62090FB1C0F3924 (U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method)
{
	{
		// startPositions = startPositions.OrderBy(transform => transform.GetSiblingIndex()).ToList();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Mirror.NetworkManager/<>c::<GetStartPosition>b__74_0(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetStartPositionU3Eb__74_0_m05AFD0C503A61EC61B25F88CE277A173C0AD071A (U3CU3Ec_t9A14060B58491EF21BA8E8A593DFDCB8FD4955B0 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startPositions.RemoveAll(t => t == null);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
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
// System.Void Mirror.NetworkReaderPool/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m312E11FBBE279F10D9D2B17EFB882AA1B0920D12 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949 * L_0 = (U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949 *)il2cpp_codegen_object_new(U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDC5278341D19B9BC6F238AF069FB094885AB02D5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mirror.NetworkReaderPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDC5278341D19B9BC6F238AF069FB094885AB02D5 (U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.PooledNetworkReader Mirror.NetworkReaderPool/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledNetworkReader_tD428721C991DFC38A2922BC2940E1816F0C6824C * U3CU3Ec_U3C_cctorU3Eb__4_0_m7B2E2E667B272E9C7BD040EDDA22D56ABB94241D (U3CU3Ec_tE62E7DC4817CC1D8000D4C24F7F47E0D64BBC949 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PooledNetworkReader_tD428721C991DFC38A2922BC2940E1816F0C6824C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new PooledNetworkReader(new byte[]{})
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		PooledNetworkReader_tD428721C991DFC38A2922BC2940E1816F0C6824C * L_1 = (PooledNetworkReader_tD428721C991DFC38A2922BC2940E1816F0C6824C *)il2cpp_codegen_object_new(PooledNetworkReader_tD428721C991DFC38A2922BC2940E1816F0C6824C_il2cpp_TypeInfo_var);
		PooledNetworkReader__ctor_mEAE1DCDFBAC4CCFA4D40970DE4D20B36931D656E(L_1, L_0, /*hidden argument*/NULL);
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
// System.Void Mirror.NetworkWriterPool/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3FD838FF3EDCED87947D48608D148699344D8A93 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4 * L_0 = (U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4 *)il2cpp_codegen_object_new(U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m54EF1D3A06EA9F18684008AB6E69268AF8AD7A9A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mirror.NetworkWriterPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m54EF1D3A06EA9F18684008AB6E69268AF8AD7A9A (U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.PooledNetworkWriter Mirror.NetworkWriterPool/<>c::<.cctor>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * U3CU3Ec_U3C_cctorU3Eb__3_0_mB0A5B91C0E7EC65AD20C53B230FD500DECA1A061 (U3CU3Ec_tF707D8B5002DB47C28AB84BF4DB650F286AD81A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new PooledNetworkWriter()
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_0 = (PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 *)il2cpp_codegen_object_new(PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118_il2cpp_TypeInfo_var);
		PooledNetworkWriter__ctor_m0575E62AABFA81E2F757C76EA455757C8F27B165(L_0, /*hidden argument*/NULL);
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
// System.Void Mirror.Transport/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m304817F15C080D3EEC191046CF1E9890B95CC53C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * L_0 = (U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C *)il2cpp_codegen_object_new(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5310ACAAE5FAD5B20FD9F10931FAB299C78950EC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mirror.Transport/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5310ACAAE5FAD5B20FD9F10931FAB299C78950EC (U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Transport/<>c::<.ctor>b__32_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__32_0_mF7FDB3F2F0DFF66E559442E14A7D4464D0E14D79 (U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFC4C321A0162D293F571074874146DAF1474345);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Action OnClientConnected = () => Debug.LogWarning("OnClientConnected called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralFFC4C321A0162D293F571074874146DAF1474345, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Transport/<>c::<.ctor>b__32_1(System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__32_1_m54E5403E2D3851EA7C6A6D343300323AC7110927 (U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___data0, int32_t ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB79A1D89BEFD9E72C6C2EA4E1CB391D9AACEDF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Action<ArraySegment<byte>, int> OnClientDataReceived = (data, channel) => Debug.LogWarning("OnClientDataReceived called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralBB79A1D89BEFD9E72C6C2EA4E1CB391D9AACEDF1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Transport/<>c::<.ctor>b__32_2(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__32_2_mEE5BBB94A91E911340820E2237772AFDD1872CD7 (U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB8FF6B609C5F62B9804776B9469868C7E8C7803);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Action<Exception> OnClientError = (error) => Debug.LogWarning("OnClientError called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralEB8FF6B609C5F62B9804776B9469868C7E8C7803, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Transport/<>c::<.ctor>b__32_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__32_3_mC6026CC78089FE13D779CC367A1D87FFCE82D604 (U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF10FC9100B7D12446696F7574E43B725816DD76);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Action OnClientDisconnected = () => Debug.LogWarning("OnClientDisconnected called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralCF10FC9100B7D12446696F7574E43B725816DD76, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Transport/<>c::<.ctor>b__32_4(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__32_4_m195B635652A49A8FC937C05492F1610FAAC6F0BB (U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * __this, int32_t ___connId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral180BF4417B1CFD825BC91C5635B7EC7BBE09CB4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Action<int> OnServerConnected = (connId) => Debug.LogWarning("OnServerConnected called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral180BF4417B1CFD825BC91C5635B7EC7BBE09CB4D, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Transport/<>c::<.ctor>b__32_5(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__32_5_m76101E9DC27C90650C0BA52687E86B115CA542A2 (U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * __this, int32_t ___connId0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___data1, int32_t ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AD71F6B50EE052763D8705F5E903023A528A3D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Action<int, ArraySegment<byte>, int> OnServerDataReceived = (connId, data, channel) => Debug.LogWarning("OnServerDataReceived called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral6AD71F6B50EE052763D8705F5E903023A528A3D1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Transport/<>c::<.ctor>b__32_6(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__32_6_m324D78CD5F370CACCC239A8ACAB0E17767C01C1C (U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * __this, int32_t ___connId0, Exception_t * ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ACB97197A5501881CCA1DA27051E9B18746EF5C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Action<int, Exception> OnServerError = (connId, error) => Debug.LogWarning("OnServerError called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral4ACB97197A5501881CCA1DA27051E9B18746EF5C, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Transport/<>c::<.ctor>b__32_7(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__32_7_m3976B6943CBB65C428F9FE631793BB65EA539C8D (U3CU3Ec_tB183AC6CB307996FBD07956B20B286614A80759C * __this, int32_t ___connId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5307E6F97D47594218B8AA2F5CFC2402118E60F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Action<int> OnServerDisconnected = (connId) => Debug.LogWarning("OnServerDisconnected called with no handler");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralD5307E6F97D47594218B8AA2F5CFC2402118E60F, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkPingMessage__ctor_mF340573CD5E74C9BECF60F7789C8170559A95C5D_inline (NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// clientTime = value;
		double L_0 = ___value0;
		__this->set_clientTime_0(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ExponentialMovingAverage_get_Value_mB278B5333872C5EAEAF519E1F95BF4B437F1A00E_inline (ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * __this, const RuntimeMethod* method)
{
	{
		// public double Value { get; private set; }
		double L_0 = __this->get_U3CValueU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ExponentialMovingAverage_get_Var_m9ED5A56A0D2B778547F20E4D762562F0F927D8BD_inline (ExponentialMovingAverage_t0380DDB28D80FD04E4691ED0E2AA0963EADBF856 * __this, const RuntimeMethod* method)
{
	{
		// public double Var { get; private set; }
		double L_0 = __this->get_U3CVarU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriter_EnsureLength_mE32CDE81422866487CE9EF603DC16106877E7942_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (length < value)
		int32_t L_0 = __this->get_length_3();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		// length = value;
		int32_t L_2 = ___value0;
		__this->set_length_3(L_2);
		// EnsureCapacity(value);
		int32_t L_3 = ___value0;
		NetworkWriter_EnsureCapacity_m8686EBB645C1892C928AB87D8FD73148B547BDC9_inline(__this, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriter_EnsureCapacity_m8686EBB645C1892C928AB87D8FD73148B547BDC9_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (buffer.Length < value)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_buffer_1();
		NullCheck(L_0);
		int32_t L_1 = ___value0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) >= ((int32_t)L_1)))
		{
			goto IL_0028;
		}
	}
	{
		// int capacity = Math.Max(value, buffer.Length * 2);
		int32_t L_2 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_buffer_1();
		NullCheck(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_2, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_4;
		// Array.Resize(ref buffer, capacity);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_5 = __this->get_address_of_buffer_1();
		int32_t L_6 = V_0;
		Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_5, L_6, /*hidden argument*/Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055_RuntimeMethod_var);
	}

IL_0028:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkIdentity_get_netId_m3FF02B719B8AE0B6A3483063A373AFFB2489C0FA_inline (NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * __this, const RuntimeMethod* method)
{
	{
		// public uint netId { get; internal set; }
		uint32_t L_0 = __this->get_U3CnetIdU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, const RuntimeMethod* method)
{
	{
		// public NetworkIdentity identity { get; internal set; }
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_0 = __this->get_U3CidentityU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get__array_0();
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__offset_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
