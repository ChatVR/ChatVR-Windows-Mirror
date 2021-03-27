#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct VirtActionInvoker9
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct GenericVirtActionInvoker9
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InterfaceActionInvoker9
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct GenericInterfaceActionInvoker9
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.UriParser>
struct Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t883859B252A9C2EBF5E5132DE4284CC61456ADAA;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
// System.Text.RegularExpressions.Regex[]
struct RegexU5BU5D_tA9690D2129825E18F8375CD80C6DF80B7A8320CD;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Net.AutoWebProxyScriptEngine
struct AutoWebProxyScriptEngine_t66B44494A6732AF45DEE0D36F5B6D15D0D497D4A;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Net.ICredentials
struct ICredentials_t7F4F7C8E1E36461DC5388554FF404E2203D30C48;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IOAsyncCallback
struct IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E;
// System.IOAsyncResult
struct IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9;
// System.IOSelectorJob
struct IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9;
// System.Security.SecureString
struct SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// System.Net.WebProxy
struct WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219;
// System.Net.Sockets.Socket/<>c__DisplayClass243_0
struct U3CU3Ec__DisplayClass243_0_t4E6A04693E05DD252059AB519837027D75B1DA61;
// System.Net.Sockets.Socket/<>c__DisplayClass255_0
struct U3CU3Ec__DisplayClass255_0_tA074DB635AC0ECB5666E0CEB17074993E777A5B4;
// System.Net.Sockets.Socket/<>c__DisplayClass299_0
struct U3CU3Ec__DisplayClass299_0_tD5321E7830B62906F9B8E1B9882C40CFAA9E71E7;
// System.Net.Sockets.SocketAsyncResult/<>c
struct U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Net.TimerThread/Callback
struct Callback_t762D11D347389984D6A23378030FA60146124360;
// System.Net.TimerThread/InfiniteTimerQueue
struct InfiniteTimerQueue_t1D20699FE2900CE42CDF3C92FCF2156E0A9A7E60;
// System.Net.TimerThread/Queue
struct Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB;
// System.Net.TimerThread/Timer
struct Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323;
// System.Net.TimerThread/TimerNode
struct TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9;
// System.Net.TimerThread/TimerQueue
struct TimerQueue_tA722FEFC39AECB14D47041145F37F2C0656BC34F;
// Mono.Unity.UnityTls/unitytls_interface_struct
struct unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD;
// Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8;
// Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
struct unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC;
// Mono.Unity.UnityTls/unitytls_tlsctx_read_callback
struct unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E;
// Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback
struct unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B;
// Mono.Unity.UnityTls/unitytls_tlsctx_write_callback
struct unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A;
// Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback
struct unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC;
// Mono.Unity.UnityTls/unitytls_x509verify_callback
struct unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C;
// System.Uri/MoreInfo
struct MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// System.UriParser/BuiltInUriParser
struct BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A;
// System.Net.WebRequest/WebProxyWrapper
struct WebProxyWrapper_tEF5FEF9C3A75F32ABD48893D8B1029B6DB629CEB;
// System.Net.WebRequest/WebProxyWrapperOpaque
struct WebProxyWrapperOpaque_t06FAF957BFE393A0BB04B732DB4ADE60710DFFA2;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2;
// System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper
struct MyNativeHelper_t9E78ECADEC33A3AFF81DEF8E43A27DDFD5187F6D;
// System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c
struct U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t
struct unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t
struct unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t
struct unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t
struct unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t
struct unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
struct unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t
struct unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t
struct unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t
struct unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t
struct unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t
struct unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t
struct unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t
struct unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t
struct unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
struct unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t
struct unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t
struct unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t
struct unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t
struct unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t
struct unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t
struct unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t
struct unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t
struct unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t
struct unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t
struct unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t
struct unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t
struct unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t
struct unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t
struct unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
struct unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316;

IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshaled_com;
struct IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshaled_pinvoke;
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8;;
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke;
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke;;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct  TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.CollectionBase
struct  CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB, ___list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_list_0() const { return ___list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.IOAsyncResult
struct  IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9  : public RuntimeObject
{
public:
	// System.AsyncCallback System.IOAsyncResult::async_callback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___async_callback_0;
	// System.Object System.IOAsyncResult::async_state
	RuntimeObject * ___async_state_1;
	// System.Threading.ManualResetEvent System.IOAsyncResult::wait_handle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___wait_handle_2;
	// System.Boolean System.IOAsyncResult::completed_synchronously
	bool ___completed_synchronously_3;
	// System.Boolean System.IOAsyncResult::completed
	bool ___completed_4;

public:
	inline static int32_t get_offset_of_async_callback_0() { return static_cast<int32_t>(offsetof(IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9, ___async_callback_0)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_async_callback_0() const { return ___async_callback_0; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_async_callback_0() { return &___async_callback_0; }
	inline void set_async_callback_0(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___async_callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___async_callback_0), (void*)value);
	}

	inline static int32_t get_offset_of_async_state_1() { return static_cast<int32_t>(offsetof(IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9, ___async_state_1)); }
	inline RuntimeObject * get_async_state_1() const { return ___async_state_1; }
	inline RuntimeObject ** get_address_of_async_state_1() { return &___async_state_1; }
	inline void set_async_state_1(RuntimeObject * value)
	{
		___async_state_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___async_state_1), (void*)value);
	}

	inline static int32_t get_offset_of_wait_handle_2() { return static_cast<int32_t>(offsetof(IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9, ___wait_handle_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_wait_handle_2() const { return ___wait_handle_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_wait_handle_2() { return &___wait_handle_2; }
	inline void set_wait_handle_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wait_handle_2), (void*)value);
	}

	inline static int32_t get_offset_of_completed_synchronously_3() { return static_cast<int32_t>(offsetof(IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9, ___completed_synchronously_3)); }
	inline bool get_completed_synchronously_3() const { return ___completed_synchronously_3; }
	inline bool* get_address_of_completed_synchronously_3() { return &___completed_synchronously_3; }
	inline void set_completed_synchronously_3(bool value)
	{
		___completed_synchronously_3 = value;
	}

	inline static int32_t get_offset_of_completed_4() { return static_cast<int32_t>(offsetof(IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9, ___completed_4)); }
	inline bool get_completed_4() const { return ___completed_4; }
	inline bool* get_address_of_completed_4() { return &___completed_4; }
	inline void set_completed_4(bool value)
	{
		___completed_4 = value;
	}
};

// Native definition for P/Invoke marshalling of System.IOAsyncResult
struct IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshaled_pinvoke
{
	Il2CppMethodPointer ___async_callback_0;
	Il2CppIUnknown* ___async_state_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___wait_handle_2;
	int32_t ___completed_synchronously_3;
	int32_t ___completed_4;
};
// Native definition for COM marshalling of System.IOAsyncResult
struct IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshaled_com
{
	Il2CppMethodPointer ___async_callback_0;
	Il2CppIUnknown* ___async_state_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___wait_handle_2;
	int32_t ___completed_synchronously_3;
	int32_t ___completed_4;
};

// System.Security.SecureString
struct  SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94  : public RuntimeObject
{
public:
	// System.Int32 System.Security.SecureString::length
	int32_t ___length_0;
	// System.Boolean System.Security.SecureString::disposed
	bool ___disposed_1;
	// System.Byte[] System.Security.SecureString::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94, ___data_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
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

// System.Net.WebProxy
struct  WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E  : public RuntimeObject
{
public:
	// System.Boolean System.Net.WebProxy::_UseRegistry
	bool ____UseRegistry_0;
	// System.Boolean System.Net.WebProxy::_BypassOnLocal
	bool ____BypassOnLocal_1;
	// System.Boolean System.Net.WebProxy::m_EnableAutoproxy
	bool ___m_EnableAutoproxy_2;
	// System.Uri System.Net.WebProxy::_ProxyAddress
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ____ProxyAddress_3;
	// System.Collections.ArrayList System.Net.WebProxy::_BypassList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____BypassList_4;
	// System.Net.ICredentials System.Net.WebProxy::_Credentials
	RuntimeObject* ____Credentials_5;
	// System.Text.RegularExpressions.Regex[] System.Net.WebProxy::_RegExBypassList
	RegexU5BU5D_tA9690D2129825E18F8375CD80C6DF80B7A8320CD* ____RegExBypassList_6;
	// System.Collections.Hashtable System.Net.WebProxy::_ProxyHostAddresses
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____ProxyHostAddresses_7;
	// System.Net.AutoWebProxyScriptEngine System.Net.WebProxy::m_ScriptEngine
	AutoWebProxyScriptEngine_t66B44494A6732AF45DEE0D36F5B6D15D0D497D4A * ___m_ScriptEngine_8;

public:
	inline static int32_t get_offset_of__UseRegistry_0() { return static_cast<int32_t>(offsetof(WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E, ____UseRegistry_0)); }
	inline bool get__UseRegistry_0() const { return ____UseRegistry_0; }
	inline bool* get_address_of__UseRegistry_0() { return &____UseRegistry_0; }
	inline void set__UseRegistry_0(bool value)
	{
		____UseRegistry_0 = value;
	}

	inline static int32_t get_offset_of__BypassOnLocal_1() { return static_cast<int32_t>(offsetof(WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E, ____BypassOnLocal_1)); }
	inline bool get__BypassOnLocal_1() const { return ____BypassOnLocal_1; }
	inline bool* get_address_of__BypassOnLocal_1() { return &____BypassOnLocal_1; }
	inline void set__BypassOnLocal_1(bool value)
	{
		____BypassOnLocal_1 = value;
	}

	inline static int32_t get_offset_of_m_EnableAutoproxy_2() { return static_cast<int32_t>(offsetof(WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E, ___m_EnableAutoproxy_2)); }
	inline bool get_m_EnableAutoproxy_2() const { return ___m_EnableAutoproxy_2; }
	inline bool* get_address_of_m_EnableAutoproxy_2() { return &___m_EnableAutoproxy_2; }
	inline void set_m_EnableAutoproxy_2(bool value)
	{
		___m_EnableAutoproxy_2 = value;
	}

	inline static int32_t get_offset_of__ProxyAddress_3() { return static_cast<int32_t>(offsetof(WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E, ____ProxyAddress_3)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get__ProxyAddress_3() const { return ____ProxyAddress_3; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of__ProxyAddress_3() { return &____ProxyAddress_3; }
	inline void set__ProxyAddress_3(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		____ProxyAddress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ProxyAddress_3), (void*)value);
	}

	inline static int32_t get_offset_of__BypassList_4() { return static_cast<int32_t>(offsetof(WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E, ____BypassList_4)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__BypassList_4() const { return ____BypassList_4; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__BypassList_4() { return &____BypassList_4; }
	inline void set__BypassList_4(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____BypassList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____BypassList_4), (void*)value);
	}

	inline static int32_t get_offset_of__Credentials_5() { return static_cast<int32_t>(offsetof(WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E, ____Credentials_5)); }
	inline RuntimeObject* get__Credentials_5() const { return ____Credentials_5; }
	inline RuntimeObject** get_address_of__Credentials_5() { return &____Credentials_5; }
	inline void set__Credentials_5(RuntimeObject* value)
	{
		____Credentials_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Credentials_5), (void*)value);
	}

	inline static int32_t get_offset_of__RegExBypassList_6() { return static_cast<int32_t>(offsetof(WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E, ____RegExBypassList_6)); }
	inline RegexU5BU5D_tA9690D2129825E18F8375CD80C6DF80B7A8320CD* get__RegExBypassList_6() const { return ____RegExBypassList_6; }
	inline RegexU5BU5D_tA9690D2129825E18F8375CD80C6DF80B7A8320CD** get_address_of__RegExBypassList_6() { return &____RegExBypassList_6; }
	inline void set__RegExBypassList_6(RegexU5BU5D_tA9690D2129825E18F8375CD80C6DF80B7A8320CD* value)
	{
		____RegExBypassList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____RegExBypassList_6), (void*)value);
	}

	inline static int32_t get_offset_of__ProxyHostAddresses_7() { return static_cast<int32_t>(offsetof(WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E, ____ProxyHostAddresses_7)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__ProxyHostAddresses_7() const { return ____ProxyHostAddresses_7; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__ProxyHostAddresses_7() { return &____ProxyHostAddresses_7; }
	inline void set__ProxyHostAddresses_7(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____ProxyHostAddresses_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ProxyHostAddresses_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScriptEngine_8() { return static_cast<int32_t>(offsetof(WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E, ___m_ScriptEngine_8)); }
	inline AutoWebProxyScriptEngine_t66B44494A6732AF45DEE0D36F5B6D15D0D497D4A * get_m_ScriptEngine_8() const { return ___m_ScriptEngine_8; }
	inline AutoWebProxyScriptEngine_t66B44494A6732AF45DEE0D36F5B6D15D0D497D4A ** get_address_of_m_ScriptEngine_8() { return &___m_ScriptEngine_8; }
	inline void set_m_ScriptEngine_8(AutoWebProxyScriptEngine_t66B44494A6732AF45DEE0D36F5B6D15D0D497D4A * value)
	{
		___m_ScriptEngine_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScriptEngine_8), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * ___impl_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_3;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___impl_0)); }
	inline X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * get_impl_0() const { return ___impl_0; }
	inline X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_0), (void*)value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_issuer_name_2() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___issuer_name_2)); }
	inline String_t* get_issuer_name_2() const { return ___issuer_name_2; }
	inline String_t** get_address_of_issuer_name_2() { return &___issuer_name_2; }
	inline void set_issuer_name_2(String_t* value)
	{
		___issuer_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_subject_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___subject_name_3)); }
	inline String_t* get_subject_name_3() const { return ___subject_name_3; }
	inline String_t** get_address_of_subject_name_3() { return &___subject_name_3; }
	inline void set_subject_name_3(String_t* value)
	{
		___subject_name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_name_3), (void*)value);
	}
};


// System.Net.Sockets.Socket/<>c__DisplayClass243_0
struct  U3CU3Ec__DisplayClass243_0_t4E6A04693E05DD252059AB519837027D75B1DA61  : public RuntimeObject
{
public:
	// System.Int32 System.Net.Sockets.Socket/<>c__DisplayClass243_0::sent_so_far
	int32_t ___sent_so_far_0;

public:
	inline static int32_t get_offset_of_sent_so_far_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass243_0_t4E6A04693E05DD252059AB519837027D75B1DA61, ___sent_so_far_0)); }
	inline int32_t get_sent_so_far_0() const { return ___sent_so_far_0; }
	inline int32_t* get_address_of_sent_so_far_0() { return &___sent_so_far_0; }
	inline void set_sent_so_far_0(int32_t value)
	{
		___sent_so_far_0 = value;
	}
};


// System.Net.Sockets.Socket/<>c__DisplayClass255_0
struct  U3CU3Ec__DisplayClass255_0_tA074DB635AC0ECB5666E0CEB17074993E777A5B4  : public RuntimeObject
{
public:
	// System.Int32 System.Net.Sockets.Socket/<>c__DisplayClass255_0::sent_so_far
	int32_t ___sent_so_far_0;

public:
	inline static int32_t get_offset_of_sent_so_far_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass255_0_tA074DB635AC0ECB5666E0CEB17074993E777A5B4, ___sent_so_far_0)); }
	inline int32_t get_sent_so_far_0() const { return ___sent_so_far_0; }
	inline int32_t* get_address_of_sent_so_far_0() { return &___sent_so_far_0; }
	inline void set_sent_so_far_0(int32_t value)
	{
		___sent_so_far_0 = value;
	}
};


// System.Net.Sockets.SocketAsyncResult/<>c
struct  U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466_StaticFields
{
public:
	// System.Net.Sockets.SocketAsyncResult/<>c System.Net.Sockets.SocketAsyncResult/<>c::<>9
	U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466 * ___U3CU3E9_0;
	// System.Threading.WaitCallback System.Net.Sockets.SocketAsyncResult/<>c::<>9__27_0
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___U3CU3E9__27_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__27_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466_StaticFields, ___U3CU3E9__27_0_1)); }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * get_U3CU3E9__27_0_1() const { return ___U3CU3E9__27_0_1; }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 ** get_address_of_U3CU3E9__27_0_1() { return &___U3CU3E9__27_0_1; }
	inline void set_U3CU3E9__27_0_1(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * value)
	{
		___U3CU3E9__27_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__27_0_1), (void*)value);
	}
};


// System.Net.TimerThread/Queue
struct  Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB  : public RuntimeObject
{
public:
	// System.Int32 System.Net.TimerThread/Queue::m_DurationMilliseconds
	int32_t ___m_DurationMilliseconds_0;

public:
	inline static int32_t get_offset_of_m_DurationMilliseconds_0() { return static_cast<int32_t>(offsetof(Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB, ___m_DurationMilliseconds_0)); }
	inline int32_t get_m_DurationMilliseconds_0() const { return ___m_DurationMilliseconds_0; }
	inline int32_t* get_address_of_m_DurationMilliseconds_0() { return &___m_DurationMilliseconds_0; }
	inline void set_m_DurationMilliseconds_0(int32_t value)
	{
		___m_DurationMilliseconds_0 = value;
	}
};


// System.Net.TimerThread/Timer
struct  Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323  : public RuntimeObject
{
public:
	// System.Int32 System.Net.TimerThread/Timer::m_StartTimeMilliseconds
	int32_t ___m_StartTimeMilliseconds_0;
	// System.Int32 System.Net.TimerThread/Timer::m_DurationMilliseconds
	int32_t ___m_DurationMilliseconds_1;

public:
	inline static int32_t get_offset_of_m_StartTimeMilliseconds_0() { return static_cast<int32_t>(offsetof(Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323, ___m_StartTimeMilliseconds_0)); }
	inline int32_t get_m_StartTimeMilliseconds_0() const { return ___m_StartTimeMilliseconds_0; }
	inline int32_t* get_address_of_m_StartTimeMilliseconds_0() { return &___m_StartTimeMilliseconds_0; }
	inline void set_m_StartTimeMilliseconds_0(int32_t value)
	{
		___m_StartTimeMilliseconds_0 = value;
	}

	inline static int32_t get_offset_of_m_DurationMilliseconds_1() { return static_cast<int32_t>(offsetof(Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323, ___m_DurationMilliseconds_1)); }
	inline int32_t get_m_DurationMilliseconds_1() const { return ___m_DurationMilliseconds_1; }
	inline int32_t* get_address_of_m_DurationMilliseconds_1() { return &___m_DurationMilliseconds_1; }
	inline void set_m_DurationMilliseconds_1(int32_t value)
	{
		___m_DurationMilliseconds_1 = value;
	}
};


// System.ComponentModel.TypeConverter/StandardValuesCollection
struct  StandardValuesCollection_tB8B2368EBF592D624D7A07BE6C539DE9BA9A1FB1  : public RuntimeObject
{
public:

public:
};


// System.Net.UnsafeNclNativeMethods/SecureStringHelper
struct  SecureStringHelper_tE5F1AC23A693714BA78674D197128C47AAE76060  : public RuntimeObject
{
public:

public:
};


// System.Uri/MoreInfo
struct  MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727  : public RuntimeObject
{
public:
	// System.String System.Uri/MoreInfo::Path
	String_t* ___Path_0;
	// System.String System.Uri/MoreInfo::Query
	String_t* ___Query_1;
	// System.String System.Uri/MoreInfo::Fragment
	String_t* ___Fragment_2;
	// System.String System.Uri/MoreInfo::AbsoluteUri
	String_t* ___AbsoluteUri_3;
	// System.Int32 System.Uri/MoreInfo::Hash
	int32_t ___Hash_4;
	// System.String System.Uri/MoreInfo::RemoteUrl
	String_t* ___RemoteUrl_5;

public:
	inline static int32_t get_offset_of_Path_0() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___Path_0)); }
	inline String_t* get_Path_0() const { return ___Path_0; }
	inline String_t** get_address_of_Path_0() { return &___Path_0; }
	inline void set_Path_0(String_t* value)
	{
		___Path_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_0), (void*)value);
	}

	inline static int32_t get_offset_of_Query_1() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___Query_1)); }
	inline String_t* get_Query_1() const { return ___Query_1; }
	inline String_t** get_address_of_Query_1() { return &___Query_1; }
	inline void set_Query_1(String_t* value)
	{
		___Query_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Query_1), (void*)value);
	}

	inline static int32_t get_offset_of_Fragment_2() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___Fragment_2)); }
	inline String_t* get_Fragment_2() const { return ___Fragment_2; }
	inline String_t** get_address_of_Fragment_2() { return &___Fragment_2; }
	inline void set_Fragment_2(String_t* value)
	{
		___Fragment_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Fragment_2), (void*)value);
	}

	inline static int32_t get_offset_of_AbsoluteUri_3() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___AbsoluteUri_3)); }
	inline String_t* get_AbsoluteUri_3() const { return ___AbsoluteUri_3; }
	inline String_t** get_address_of_AbsoluteUri_3() { return &___AbsoluteUri_3; }
	inline void set_AbsoluteUri_3(String_t* value)
	{
		___AbsoluteUri_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AbsoluteUri_3), (void*)value);
	}

	inline static int32_t get_offset_of_Hash_4() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___Hash_4)); }
	inline int32_t get_Hash_4() const { return ___Hash_4; }
	inline int32_t* get_address_of_Hash_4() { return &___Hash_4; }
	inline void set_Hash_4(int32_t value)
	{
		___Hash_4 = value;
	}

	inline static int32_t get_offset_of_RemoteUrl_5() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___RemoteUrl_5)); }
	inline String_t* get_RemoteUrl_5() const { return ___RemoteUrl_5; }
	inline String_t** get_address_of_RemoteUrl_5() { return &___RemoteUrl_5; }
	inline void set_RemoteUrl_5(String_t* value)
	{
		___RemoteUrl_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteUrl_5), (void*)value);
	}
};


// System.Net.WebRequest/DesignerWebRequestCreate
struct  DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A  : public RuntimeObject
{
public:

public:
};


// System.Net.WebRequest/WebProxyWrapperOpaque
struct  WebProxyWrapperOpaque_t06FAF957BFE393A0BB04B732DB4ADE60710DFFA2  : public RuntimeObject
{
public:
	// System.Net.WebProxy System.Net.WebRequest/WebProxyWrapperOpaque::webProxy
	WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E * ___webProxy_0;

public:
	inline static int32_t get_offset_of_webProxy_0() { return static_cast<int32_t>(offsetof(WebProxyWrapperOpaque_t06FAF957BFE393A0BB04B732DB4ADE60710DFFA2, ___webProxy_0)); }
	inline WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E * get_webProxy_0() const { return ___webProxy_0; }
	inline WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E ** get_address_of_webProxy_0() { return &___webProxy_0; }
	inline void set_webProxy_0(WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E * value)
	{
		___webProxy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webProxy_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper
struct  MyNativeHelper_t9E78ECADEC33A3AFF81DEF8E43A27DDFD5187F6D  : public RuntimeObject
{
public:

public:
};


// System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c
struct  U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_StaticFields
{
public:
	// System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::<>9
	U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.Boolean> System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::<>9__4_0
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
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


// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct  X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// System.Net.TimerThread/InfiniteTimerQueue
struct  InfiniteTimerQueue_t1D20699FE2900CE42CDF3C92FCF2156E0A9A7E60  : public Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB
{
public:

public:
};


// System.Net.TimerThread/TimerQueue
struct  TimerQueue_tA722FEFC39AECB14D47041145F37F2C0656BC34F  : public Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB
{
public:
	// System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerQueue::m_Timers
	TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * ___m_Timers_1;

public:
	inline static int32_t get_offset_of_m_Timers_1() { return static_cast<int32_t>(offsetof(TimerQueue_tA722FEFC39AECB14D47041145F37F2C0656BC34F, ___m_Timers_1)); }
	inline TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * get_m_Timers_1() const { return ___m_Timers_1; }
	inline TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 ** get_address_of_m_Timers_1() { return &___m_Timers_1; }
	inline void set_m_Timers_1(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * value)
	{
		___m_Timers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Timers_1), (void*)value);
	}
};


// Mono.Unity.UnityTls/unitytls_key
struct  unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_key_tCCB86243887B79F39458152647B04B94699985D2__padding[1];
	};

public:
};


// Mono.Unity.UnityTls/unitytls_key_ref
struct  unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_key_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_tlsctx
struct  unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA__padding[1];
	};

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct  unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 
{
public:
	// Mono.Unity.UnityTls/unitytls_tlsctx_read_callback Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::read
	unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * ___read_0;
	// Mono.Unity.UnityTls/unitytls_tlsctx_write_callback Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::write
	unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * ___write_1;
	// System.Void* Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::data
	void* ___data_2;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8, ___read_0)); }
	inline unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * get_read_0() const { return ___read_0; }
	inline unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}

	inline static int32_t get_offset_of_write_1() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8, ___write_1)); }
	inline unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * get_write_1() const { return ___write_1; }
	inline unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A ** get_address_of_write_1() { return &___write_1; }
	inline void set_write_1(unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * value)
	{
		___write_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8, ___data_2)); }
	inline void* get_data_2() const { return ___data_2; }
	inline void** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(void* value)
	{
		___data_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke
{
	Il2CppMethodPointer ___read_0;
	Il2CppMethodPointer ___write_1;
	void* ___data_2;
};
// Native definition for COM marshalling of Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_com
{
	Il2CppMethodPointer ___read_0;
	Il2CppMethodPointer ___write_1;
	void* ___data_2;
};

// Mono.Unity.UnityTls/unitytls_x509_ref
struct  unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509list
struct  unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D__padding[1];
	};

public:
};


// Mono.Unity.UnityTls/unitytls_x509list_ref
struct  unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509list_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509name
struct  unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6__padding[1];
	};

public:
};


// System.Uri/Offset
#pragma pack(push, tp, 1)
struct  Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 
{
public:
	// System.UInt16 System.Uri/Offset::Scheme
	uint16_t ___Scheme_0;
	// System.UInt16 System.Uri/Offset::User
	uint16_t ___User_1;
	// System.UInt16 System.Uri/Offset::Host
	uint16_t ___Host_2;
	// System.UInt16 System.Uri/Offset::PortValue
	uint16_t ___PortValue_3;
	// System.UInt16 System.Uri/Offset::Path
	uint16_t ___Path_4;
	// System.UInt16 System.Uri/Offset::Query
	uint16_t ___Query_5;
	// System.UInt16 System.Uri/Offset::Fragment
	uint16_t ___Fragment_6;
	// System.UInt16 System.Uri/Offset::End
	uint16_t ___End_7;

public:
	inline static int32_t get_offset_of_Scheme_0() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Scheme_0)); }
	inline uint16_t get_Scheme_0() const { return ___Scheme_0; }
	inline uint16_t* get_address_of_Scheme_0() { return &___Scheme_0; }
	inline void set_Scheme_0(uint16_t value)
	{
		___Scheme_0 = value;
	}

	inline static int32_t get_offset_of_User_1() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___User_1)); }
	inline uint16_t get_User_1() const { return ___User_1; }
	inline uint16_t* get_address_of_User_1() { return &___User_1; }
	inline void set_User_1(uint16_t value)
	{
		___User_1 = value;
	}

	inline static int32_t get_offset_of_Host_2() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Host_2)); }
	inline uint16_t get_Host_2() const { return ___Host_2; }
	inline uint16_t* get_address_of_Host_2() { return &___Host_2; }
	inline void set_Host_2(uint16_t value)
	{
		___Host_2 = value;
	}

	inline static int32_t get_offset_of_PortValue_3() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___PortValue_3)); }
	inline uint16_t get_PortValue_3() const { return ___PortValue_3; }
	inline uint16_t* get_address_of_PortValue_3() { return &___PortValue_3; }
	inline void set_PortValue_3(uint16_t value)
	{
		___PortValue_3 = value;
	}

	inline static int32_t get_offset_of_Path_4() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Path_4)); }
	inline uint16_t get_Path_4() const { return ___Path_4; }
	inline uint16_t* get_address_of_Path_4() { return &___Path_4; }
	inline void set_Path_4(uint16_t value)
	{
		___Path_4 = value;
	}

	inline static int32_t get_offset_of_Query_5() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Query_5)); }
	inline uint16_t get_Query_5() const { return ___Query_5; }
	inline uint16_t* get_address_of_Query_5() { return &___Query_5; }
	inline void set_Query_5(uint16_t value)
	{
		___Query_5 = value;
	}

	inline static int32_t get_offset_of_Fragment_6() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Fragment_6)); }
	inline uint16_t get_Fragment_6() const { return ___Fragment_6; }
	inline uint16_t* get_address_of_Fragment_6() { return &___Fragment_6; }
	inline void set_Fragment_6(uint16_t value)
	{
		___Fragment_6 = value;
	}

	inline static int32_t get_offset_of_End_7() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___End_7)); }
	inline uint16_t get_End_7() const { return ___End_7; }
	inline uint16_t* get_address_of_End_7() { return &___End_7; }
	inline void set_End_7(uint16_t value)
	{
		___End_7 = value;
	}
};
#pragma pack(pop, tp)


// System.Net.WebRequest/WebProxyWrapper
struct  WebProxyWrapper_tEF5FEF9C3A75F32ABD48893D8B1029B6DB629CEB  : public WebProxyWrapperOpaque_t06FAF957BFE393A0BB04B732DB4ADE60710DFFA2
{
public:

public:
};


// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
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

// System.IOOperation
struct  IOOperation_tAEE43CD34C62AC0D25378E0BCB8A9E9CAEF5A1B0 
{
public:
	// System.Int32 System.IOOperation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IOOperation_tAEE43CD34C62AC0D25378E0BCB8A9E9CAEF5A1B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.ProtocolType
struct  ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketFlags
struct  SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketOperation
struct  SocketOperation_tC56A9E4C617C150848730F748822AE65ADC6A163 
{
public:
	// System.Int32 System.Net.Sockets.SocketOperation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketOperation_tC56A9E4C617C150848730F748822AE65ADC6A163, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct  SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
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


// System.UriSyntaxFlags
struct  UriSyntaxFlags_t00ABF83A3AA06E5B670D3F73E3E87BC21F72044A 
{
public:
	// System.Int32 System.UriSyntaxFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriSyntaxFlags_t00ABF83A3AA06E5B670D3F73E3E87BC21F72044A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.Socket/<>c__DisplayClass299_0
struct  U3CU3Ec__DisplayClass299_0_tD5321E7830B62906F9B8E1B9882C40CFAA9E71E7  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/<>c__DisplayClass299_0::<>4__this
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___U3CU3E4__this_0;
	// System.IOSelectorJob System.Net.Sockets.Socket/<>c__DisplayClass299_0::job
	IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9 * ___job_1;
	// System.IntPtr System.Net.Sockets.Socket/<>c__DisplayClass299_0::handle
	intptr_t ___handle_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass299_0_tD5321E7830B62906F9B8E1B9882C40CFAA9E71E7, ___U3CU3E4__this_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_job_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass299_0_tD5321E7830B62906F9B8E1B9882C40CFAA9E71E7, ___job_1)); }
	inline IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9 * get_job_1() const { return ___job_1; }
	inline IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9 ** get_address_of_job_1() { return &___job_1; }
	inline void set_job_1(IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9 * value)
	{
		___job_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___job_1), (void*)value);
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass299_0_tD5321E7830B62906F9B8E1B9882C40CFAA9E71E7, ___handle_2)); }
	inline intptr_t get_handle_2() const { return ___handle_2; }
	inline intptr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(intptr_t value)
	{
		___handle_2 = value;
	}
};


// System.Net.Sockets.Socket/WSABUF
struct  WSABUF_t982D1FB4F102556DD0ABE9F8AC73FDA02B581C57 
{
public:
	// System.Int32 System.Net.Sockets.Socket/WSABUF::len
	int32_t ___len_0;
	// System.IntPtr System.Net.Sockets.Socket/WSABUF::buf
	intptr_t ___buf_1;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(WSABUF_t982D1FB4F102556DD0ABE9F8AC73FDA02B581C57, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_buf_1() { return static_cast<int32_t>(offsetof(WSABUF_t982D1FB4F102556DD0ABE9F8AC73FDA02B581C57, ___buf_1)); }
	inline intptr_t get_buf_1() const { return ___buf_1; }
	inline intptr_t* get_address_of_buf_1() { return &___buf_1; }
	inline void set_buf_1(intptr_t value)
	{
		___buf_1 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_ciphersuite
struct  unitytls_ciphersuite_t3D7B347610D6F27E84245DA98B2A3DB13E4CC663 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_ciphersuite::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_ciphersuite_t3D7B347610D6F27E84245DA98B2A3DB13E4CC663, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_error_code
struct  unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_error_code::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_protocol
struct  unitytls_protocol_t8E18DBA7D28280F405CA3104F9936BE9B543B89A 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_protocol::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_protocol_t8E18DBA7D28280F405CA3104F9936BE9B543B89A, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509verify_result
struct  unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_x509verify_result::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Check
struct  Check_tEDA05554030AFFE9920C7E4C2233599B26DA74E8 
{
public:
	// System.Int32 System.Uri/Check::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Check_tEDA05554030AFFE9920C7E4C2233599B26DA74E8, ___value___2)); }
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


// System.Uri/UriInfo
struct  UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45  : public RuntimeObject
{
public:
	// System.String System.Uri/UriInfo::Host
	String_t* ___Host_0;
	// System.String System.Uri/UriInfo::ScopeId
	String_t* ___ScopeId_1;
	// System.String System.Uri/UriInfo::String
	String_t* ___String_2;
	// System.Uri/Offset System.Uri/UriInfo::Offset
	Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5  ___Offset_3;
	// System.String System.Uri/UriInfo::DnsSafeHost
	String_t* ___DnsSafeHost_4;
	// System.Uri/MoreInfo System.Uri/UriInfo::MoreInfo
	MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * ___MoreInfo_5;

public:
	inline static int32_t get_offset_of_Host_0() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___Host_0)); }
	inline String_t* get_Host_0() const { return ___Host_0; }
	inline String_t** get_address_of_Host_0() { return &___Host_0; }
	inline void set_Host_0(String_t* value)
	{
		___Host_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Host_0), (void*)value);
	}

	inline static int32_t get_offset_of_ScopeId_1() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___ScopeId_1)); }
	inline String_t* get_ScopeId_1() const { return ___ScopeId_1; }
	inline String_t** get_address_of_ScopeId_1() { return &___ScopeId_1; }
	inline void set_ScopeId_1(String_t* value)
	{
		___ScopeId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScopeId_1), (void*)value);
	}

	inline static int32_t get_offset_of_String_2() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___String_2)); }
	inline String_t* get_String_2() const { return ___String_2; }
	inline String_t** get_address_of_String_2() { return &___String_2; }
	inline void set_String_2(String_t* value)
	{
		___String_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___String_2), (void*)value);
	}

	inline static int32_t get_offset_of_Offset_3() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___Offset_3)); }
	inline Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5  get_Offset_3() const { return ___Offset_3; }
	inline Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * get_address_of_Offset_3() { return &___Offset_3; }
	inline void set_Offset_3(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5  value)
	{
		___Offset_3 = value;
	}

	inline static int32_t get_offset_of_DnsSafeHost_4() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___DnsSafeHost_4)); }
	inline String_t* get_DnsSafeHost_4() const { return ___DnsSafeHost_4; }
	inline String_t** get_address_of_DnsSafeHost_4() { return &___DnsSafeHost_4; }
	inline void set_DnsSafeHost_4(String_t* value)
	{
		___DnsSafeHost_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DnsSafeHost_4), (void*)value);
	}

	inline static int32_t get_offset_of_MoreInfo_5() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___MoreInfo_5)); }
	inline MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * get_MoreInfo_5() const { return ___MoreInfo_5; }
	inline MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 ** get_address_of_MoreInfo_5() { return &___MoreInfo_5; }
	inline void set_MoreInfo_5(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * value)
	{
		___MoreInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoreInfo_5), (void*)value);
	}
};


// System.UriParser/UriQuirksVersion
struct  UriQuirksVersion_t5A2A88A1D01D0CBC52BC12C612CC1A7F714E79B6 
{
public:
	// System.Int32 System.UriParser/UriQuirksVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriQuirksVersion_t5A2A88A1D01D0CBC52BC12C612CC1A7F714E79B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebHeaderCollection/RfcChar
struct  RfcChar_t7039B1A50409D04AE3C0E3C7B0BBA59655474D31 
{
public:
	// System.Byte System.Net.WebHeaderCollection/RfcChar::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RfcChar_t7039B1A50409D04AE3C0E3C7B0BBA59655474D31, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Net.TimerThread/TimerNode/TimerState
struct  TimerState_t8BD0BCEC970BC18F9E52AC1DE03D34629F097B22 
{
public:
	// System.Int32 System.Net.TimerThread/TimerNode/TimerState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimerState_t8BD0BCEC970BC18F9E52AC1DE03D34629F097B22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IOSelectorJob
struct  IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9  : public RuntimeObject
{
public:
	// System.IOOperation System.IOSelectorJob::operation
	int32_t ___operation_0;
	// System.IOAsyncCallback System.IOSelectorJob::callback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___callback_1;
	// System.IOAsyncResult System.IOSelectorJob::state
	IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9 * ___state_2;

public:
	inline static int32_t get_offset_of_operation_0() { return static_cast<int32_t>(offsetof(IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9, ___operation_0)); }
	inline int32_t get_operation_0() const { return ___operation_0; }
	inline int32_t* get_address_of_operation_0() { return &___operation_0; }
	inline void set_operation_0(int32_t value)
	{
		___operation_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9, ___callback_1)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_callback_1() const { return ___callback_1; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9, ___state_2)); }
	inline IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9 * get_state_2() const { return ___state_2; }
	inline IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9 ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9 * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.IOSelectorJob
struct IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshaled_pinvoke
{
	int32_t ___operation_0;
	Il2CppMethodPointer ___callback_1;
	IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshaled_pinvoke* ___state_2;
};
// Native definition for COM marshalling of System.IOSelectorJob
struct IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshaled_com
{
	int32_t ___operation_0;
	Il2CppMethodPointer ___callback_1;
	IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshaled_com* ___state_2;
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

// System.Net.Sockets.Socket
struct  Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_10;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_11;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_12;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_13;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_14;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_15;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_16;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * ___m_Handle_17;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___seed_endpoint_18;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___ReadSem_19;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___WriteSem_20;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_21;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_22;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_23;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_24;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_25;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_26;

public:
	inline static int32_t get_offset_of_is_closed_10() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_closed_10)); }
	inline bool get_is_closed_10() const { return ___is_closed_10; }
	inline bool* get_address_of_is_closed_10() { return &___is_closed_10; }
	inline void set_is_closed_10(bool value)
	{
		___is_closed_10 = value;
	}

	inline static int32_t get_offset_of_is_listening_11() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_listening_11)); }
	inline bool get_is_listening_11() const { return ___is_listening_11; }
	inline bool* get_address_of_is_listening_11() { return &___is_listening_11; }
	inline void set_is_listening_11(bool value)
	{
		___is_listening_11 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_12() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___useOverlappedIO_12)); }
	inline bool get_useOverlappedIO_12() const { return ___useOverlappedIO_12; }
	inline bool* get_address_of_useOverlappedIO_12() { return &___useOverlappedIO_12; }
	inline void set_useOverlappedIO_12(bool value)
	{
		___useOverlappedIO_12 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_13() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___linger_timeout_13)); }
	inline int32_t get_linger_timeout_13() const { return ___linger_timeout_13; }
	inline int32_t* get_address_of_linger_timeout_13() { return &___linger_timeout_13; }
	inline void set_linger_timeout_13(int32_t value)
	{
		___linger_timeout_13 = value;
	}

	inline static int32_t get_offset_of_addressFamily_14() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___addressFamily_14)); }
	inline int32_t get_addressFamily_14() const { return ___addressFamily_14; }
	inline int32_t* get_address_of_addressFamily_14() { return &___addressFamily_14; }
	inline void set_addressFamily_14(int32_t value)
	{
		___addressFamily_14 = value;
	}

	inline static int32_t get_offset_of_socketType_15() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___socketType_15)); }
	inline int32_t get_socketType_15() const { return ___socketType_15; }
	inline int32_t* get_address_of_socketType_15() { return &___socketType_15; }
	inline void set_socketType_15(int32_t value)
	{
		___socketType_15 = value;
	}

	inline static int32_t get_offset_of_protocolType_16() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___protocolType_16)); }
	inline int32_t get_protocolType_16() const { return ___protocolType_16; }
	inline int32_t* get_address_of_protocolType_16() { return &___protocolType_16; }
	inline void set_protocolType_16(int32_t value)
	{
		___protocolType_16 = value;
	}

	inline static int32_t get_offset_of_m_Handle_17() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_Handle_17)); }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * get_m_Handle_17() const { return ___m_Handle_17; }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 ** get_address_of_m_Handle_17() { return &___m_Handle_17; }
	inline void set_m_Handle_17(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * value)
	{
		___m_Handle_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_17), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_18() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___seed_endpoint_18)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_seed_endpoint_18() const { return ___seed_endpoint_18; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_seed_endpoint_18() { return &___seed_endpoint_18; }
	inline void set_seed_endpoint_18(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___seed_endpoint_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_18), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_19() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ReadSem_19)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_ReadSem_19() const { return ___ReadSem_19; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_ReadSem_19() { return &___ReadSem_19; }
	inline void set_ReadSem_19(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___ReadSem_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_19), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_20() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___WriteSem_20)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_WriteSem_20() const { return ___WriteSem_20; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_WriteSem_20() { return &___WriteSem_20; }
	inline void set_WriteSem_20(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___WriteSem_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_20), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_21() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_blocking_21)); }
	inline bool get_is_blocking_21() const { return ___is_blocking_21; }
	inline bool* get_address_of_is_blocking_21() { return &___is_blocking_21; }
	inline void set_is_blocking_21(bool value)
	{
		___is_blocking_21 = value;
	}

	inline static int32_t get_offset_of_is_bound_22() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_bound_22)); }
	inline bool get_is_bound_22() const { return ___is_bound_22; }
	inline bool* get_address_of_is_bound_22() { return &___is_bound_22; }
	inline void set_is_bound_22(bool value)
	{
		___is_bound_22 = value;
	}

	inline static int32_t get_offset_of_is_connected_23() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_connected_23)); }
	inline bool get_is_connected_23() const { return ___is_connected_23; }
	inline bool* get_address_of_is_connected_23() { return &___is_connected_23; }
	inline void set_is_connected_23(bool value)
	{
		___is_connected_23 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_24() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_IntCleanedUp_24)); }
	inline int32_t get_m_IntCleanedUp_24() const { return ___m_IntCleanedUp_24; }
	inline int32_t* get_address_of_m_IntCleanedUp_24() { return &___m_IntCleanedUp_24; }
	inline void set_m_IntCleanedUp_24(int32_t value)
	{
		___m_IntCleanedUp_24 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_25() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___connect_in_progress_25)); }
	inline bool get_connect_in_progress_25() const { return ___connect_in_progress_25; }
	inline bool* get_address_of_connect_in_progress_25() { return &___connect_in_progress_25; }
	inline void set_connect_in_progress_25(bool value)
	{
		___connect_in_progress_25 = value;
	}

	inline static int32_t get_offset_of_ID_26() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ID_26)); }
	inline int32_t get_ID_26() const { return ___ID_26; }
	inline int32_t* get_address_of_ID_26() { return &___ID_26; }
	inline void set_ID_26(int32_t value)
	{
		___ID_26 = value;
	}
};

struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_6;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___AcceptAsyncCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptReceiveCallback_29;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ConnectAsyncCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginConnectCallback_31;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___DisconnectAsyncCallback_32;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginDisconnectCallback_33;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveGenericCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveFromAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveFromCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginSendGenericCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendToAsyncCallback_41;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_s_PerfCountersEnabled_6() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_PerfCountersEnabled_6)); }
	inline bool get_s_PerfCountersEnabled_6() const { return ___s_PerfCountersEnabled_6; }
	inline bool* get_address_of_s_PerfCountersEnabled_6() { return &___s_PerfCountersEnabled_6; }
	inline void set_s_PerfCountersEnabled_6(bool value)
	{
		___s_PerfCountersEnabled_6 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_27() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___AcceptAsyncCallback_27)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_AcceptAsyncCallback_27() const { return ___AcceptAsyncCallback_27; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_AcceptAsyncCallback_27() { return &___AcceptAsyncCallback_27; }
	inline void set_AcceptAsyncCallback_27(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___AcceptAsyncCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_28() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptCallback_28)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptCallback_28() const { return ___BeginAcceptCallback_28; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptCallback_28() { return &___BeginAcceptCallback_28; }
	inline void set_BeginAcceptCallback_28(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_29() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptReceiveCallback_29)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptReceiveCallback_29() const { return ___BeginAcceptReceiveCallback_29; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptReceiveCallback_29() { return &___BeginAcceptReceiveCallback_29; }
	inline void set_BeginAcceptReceiveCallback_29(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptReceiveCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_30() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ConnectAsyncCallback_30)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ConnectAsyncCallback_30() const { return ___ConnectAsyncCallback_30; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ConnectAsyncCallback_30() { return &___ConnectAsyncCallback_30; }
	inline void set_ConnectAsyncCallback_30(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ConnectAsyncCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_31() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginConnectCallback_31)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginConnectCallback_31() const { return ___BeginConnectCallback_31; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginConnectCallback_31() { return &___BeginConnectCallback_31; }
	inline void set_BeginConnectCallback_31(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginConnectCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_32() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___DisconnectAsyncCallback_32)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_DisconnectAsyncCallback_32() const { return ___DisconnectAsyncCallback_32; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_DisconnectAsyncCallback_32() { return &___DisconnectAsyncCallback_32; }
	inline void set_DisconnectAsyncCallback_32(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___DisconnectAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_33() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginDisconnectCallback_33)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginDisconnectCallback_33() const { return ___BeginDisconnectCallback_33; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginDisconnectCallback_33() { return &___BeginDisconnectCallback_33; }
	inline void set_BeginDisconnectCallback_33(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginDisconnectCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_34() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveAsyncCallback_34)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveAsyncCallback_34() const { return ___ReceiveAsyncCallback_34; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveAsyncCallback_34() { return &___ReceiveAsyncCallback_34; }
	inline void set_ReceiveAsyncCallback_34(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveAsyncCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_35() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveCallback_35)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveCallback_35() const { return ___BeginReceiveCallback_35; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveCallback_35() { return &___BeginReceiveCallback_35; }
	inline void set_BeginReceiveCallback_35(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_36() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveGenericCallback_36)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveGenericCallback_36() const { return ___BeginReceiveGenericCallback_36; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveGenericCallback_36() { return &___BeginReceiveGenericCallback_36; }
	inline void set_BeginReceiveGenericCallback_36(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveGenericCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_37() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveFromAsyncCallback_37)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveFromAsyncCallback_37() const { return ___ReceiveFromAsyncCallback_37; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveFromAsyncCallback_37() { return &___ReceiveFromAsyncCallback_37; }
	inline void set_ReceiveFromAsyncCallback_37(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveFromAsyncCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_37), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_38() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveFromCallback_38)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveFromCallback_38() const { return ___BeginReceiveFromCallback_38; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveFromCallback_38() { return &___BeginReceiveFromCallback_38; }
	inline void set_BeginReceiveFromCallback_38(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveFromCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_39() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendAsyncCallback_39)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendAsyncCallback_39() const { return ___SendAsyncCallback_39; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendAsyncCallback_39() { return &___SendAsyncCallback_39; }
	inline void set_SendAsyncCallback_39(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendAsyncCallback_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_39), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_40() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginSendGenericCallback_40)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginSendGenericCallback_40() const { return ___BeginSendGenericCallback_40; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginSendGenericCallback_40() { return &___BeginSendGenericCallback_40; }
	inline void set_BeginSendGenericCallback_40(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginSendGenericCallback_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_40), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_41() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendToAsyncCallback_41)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendToAsyncCallback_41() const { return ___SendToAsyncCallback_41; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendToAsyncCallback_41() { return &___SendToAsyncCallback_41; }
	inline void set_SendToAsyncCallback_41(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendToAsyncCallback_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_41), (void*)value);
	}
};


// System.Net.Sockets.SocketAsyncResult
struct  SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4  : public IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::socket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket_5;
	// System.Net.Sockets.SocketOperation System.Net.Sockets.SocketAsyncResult::operation
	int32_t ___operation_6;
	// System.Exception System.Net.Sockets.SocketAsyncResult::DelayedException
	Exception_t * ___DelayedException_7;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncResult::EndPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___EndPoint_8;
	// System.Byte[] System.Net.Sockets.SocketAsyncResult::Buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Buffer_9;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Offset
	int32_t ___Offset_10;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Size
	int32_t ___Size_11;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncResult::SockFlags
	int32_t ___SockFlags_12;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::AcceptSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___AcceptSocket_13;
	// System.Net.IPAddress[] System.Net.Sockets.SocketAsyncResult::Addresses
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* ___Addresses_14;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Port
	int32_t ___Port_15;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncResult::Buffers
	RuntimeObject* ___Buffers_16;
	// System.Boolean System.Net.Sockets.SocketAsyncResult::ReuseSocket
	bool ___ReuseSocket_17;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::CurrentAddress
	int32_t ___CurrentAddress_18;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::AcceptedSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___AcceptedSocket_19;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Total
	int32_t ___Total_20;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::error
	int32_t ___error_21;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::EndCalled
	int32_t ___EndCalled_22;

public:
	inline static int32_t get_offset_of_socket_5() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___socket_5)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_socket_5() const { return ___socket_5; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_socket_5() { return &___socket_5; }
	inline void set_socket_5(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___socket_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_5), (void*)value);
	}

	inline static int32_t get_offset_of_operation_6() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___operation_6)); }
	inline int32_t get_operation_6() const { return ___operation_6; }
	inline int32_t* get_address_of_operation_6() { return &___operation_6; }
	inline void set_operation_6(int32_t value)
	{
		___operation_6 = value;
	}

	inline static int32_t get_offset_of_DelayedException_7() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___DelayedException_7)); }
	inline Exception_t * get_DelayedException_7() const { return ___DelayedException_7; }
	inline Exception_t ** get_address_of_DelayedException_7() { return &___DelayedException_7; }
	inline void set_DelayedException_7(Exception_t * value)
	{
		___DelayedException_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DelayedException_7), (void*)value);
	}

	inline static int32_t get_offset_of_EndPoint_8() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___EndPoint_8)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_EndPoint_8() const { return ___EndPoint_8; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_EndPoint_8() { return &___EndPoint_8; }
	inline void set_EndPoint_8(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___EndPoint_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndPoint_8), (void*)value);
	}

	inline static int32_t get_offset_of_Buffer_9() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___Buffer_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Buffer_9() const { return ___Buffer_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Buffer_9() { return &___Buffer_9; }
	inline void set_Buffer_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Buffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Buffer_9), (void*)value);
	}

	inline static int32_t get_offset_of_Offset_10() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___Offset_10)); }
	inline int32_t get_Offset_10() const { return ___Offset_10; }
	inline int32_t* get_address_of_Offset_10() { return &___Offset_10; }
	inline void set_Offset_10(int32_t value)
	{
		___Offset_10 = value;
	}

	inline static int32_t get_offset_of_Size_11() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___Size_11)); }
	inline int32_t get_Size_11() const { return ___Size_11; }
	inline int32_t* get_address_of_Size_11() { return &___Size_11; }
	inline void set_Size_11(int32_t value)
	{
		___Size_11 = value;
	}

	inline static int32_t get_offset_of_SockFlags_12() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___SockFlags_12)); }
	inline int32_t get_SockFlags_12() const { return ___SockFlags_12; }
	inline int32_t* get_address_of_SockFlags_12() { return &___SockFlags_12; }
	inline void set_SockFlags_12(int32_t value)
	{
		___SockFlags_12 = value;
	}

	inline static int32_t get_offset_of_AcceptSocket_13() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___AcceptSocket_13)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_AcceptSocket_13() const { return ___AcceptSocket_13; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_AcceptSocket_13() { return &___AcceptSocket_13; }
	inline void set_AcceptSocket_13(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___AcceptSocket_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptSocket_13), (void*)value);
	}

	inline static int32_t get_offset_of_Addresses_14() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___Addresses_14)); }
	inline IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* get_Addresses_14() const { return ___Addresses_14; }
	inline IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB** get_address_of_Addresses_14() { return &___Addresses_14; }
	inline void set_Addresses_14(IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* value)
	{
		___Addresses_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Addresses_14), (void*)value);
	}

	inline static int32_t get_offset_of_Port_15() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___Port_15)); }
	inline int32_t get_Port_15() const { return ___Port_15; }
	inline int32_t* get_address_of_Port_15() { return &___Port_15; }
	inline void set_Port_15(int32_t value)
	{
		___Port_15 = value;
	}

	inline static int32_t get_offset_of_Buffers_16() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___Buffers_16)); }
	inline RuntimeObject* get_Buffers_16() const { return ___Buffers_16; }
	inline RuntimeObject** get_address_of_Buffers_16() { return &___Buffers_16; }
	inline void set_Buffers_16(RuntimeObject* value)
	{
		___Buffers_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Buffers_16), (void*)value);
	}

	inline static int32_t get_offset_of_ReuseSocket_17() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___ReuseSocket_17)); }
	inline bool get_ReuseSocket_17() const { return ___ReuseSocket_17; }
	inline bool* get_address_of_ReuseSocket_17() { return &___ReuseSocket_17; }
	inline void set_ReuseSocket_17(bool value)
	{
		___ReuseSocket_17 = value;
	}

	inline static int32_t get_offset_of_CurrentAddress_18() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___CurrentAddress_18)); }
	inline int32_t get_CurrentAddress_18() const { return ___CurrentAddress_18; }
	inline int32_t* get_address_of_CurrentAddress_18() { return &___CurrentAddress_18; }
	inline void set_CurrentAddress_18(int32_t value)
	{
		___CurrentAddress_18 = value;
	}

	inline static int32_t get_offset_of_AcceptedSocket_19() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___AcceptedSocket_19)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_AcceptedSocket_19() const { return ___AcceptedSocket_19; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_AcceptedSocket_19() { return &___AcceptedSocket_19; }
	inline void set_AcceptedSocket_19(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___AcceptedSocket_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptedSocket_19), (void*)value);
	}

	inline static int32_t get_offset_of_Total_20() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___Total_20)); }
	inline int32_t get_Total_20() const { return ___Total_20; }
	inline int32_t* get_address_of_Total_20() { return &___Total_20; }
	inline void set_Total_20(int32_t value)
	{
		___Total_20 = value;
	}

	inline static int32_t get_offset_of_error_21() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___error_21)); }
	inline int32_t get_error_21() const { return ___error_21; }
	inline int32_t* get_address_of_error_21() { return &___error_21; }
	inline void set_error_21(int32_t value)
	{
		___error_21 = value;
	}

	inline static int32_t get_offset_of_EndCalled_22() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4, ___EndCalled_22)); }
	inline int32_t get_EndCalled_22() const { return ___EndCalled_22; }
	inline int32_t* get_address_of_EndCalled_22() { return &___EndCalled_22; }
	inline void set_EndCalled_22(int32_t value)
	{
		___EndCalled_22 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_marshaled_pinvoke : public IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshaled_pinvoke
{
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket_5;
	int32_t ___operation_6;
	Exception_t_marshaled_pinvoke* ___DelayedException_7;
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___EndPoint_8;
	Il2CppSafeArray/*NONE*/* ___Buffer_9;
	int32_t ___Offset_10;
	int32_t ___Size_11;
	int32_t ___SockFlags_12;
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___AcceptSocket_13;
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* ___Addresses_14;
	int32_t ___Port_15;
	RuntimeObject* ___Buffers_16;
	int32_t ___ReuseSocket_17;
	int32_t ___CurrentAddress_18;
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___AcceptedSocket_19;
	int32_t ___Total_20;
	int32_t ___error_21;
	int32_t ___EndCalled_22;
};
// Native definition for COM marshalling of System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_marshaled_com : public IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshaled_com
{
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket_5;
	int32_t ___operation_6;
	Exception_t_marshaled_com* ___DelayedException_7;
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___EndPoint_8;
	Il2CppSafeArray/*NONE*/* ___Buffer_9;
	int32_t ___Offset_10;
	int32_t ___Size_11;
	int32_t ___SockFlags_12;
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___AcceptSocket_13;
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* ___Addresses_14;
	int32_t ___Port_15;
	RuntimeObject* ___Buffers_16;
	int32_t ___ReuseSocket_17;
	int32_t ___CurrentAddress_18;
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___AcceptedSocket_19;
	int32_t ___Total_20;
	int32_t ___error_21;
	int32_t ___EndCalled_22;
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


// System.UriParser
struct  UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A  : public RuntimeObject
{
public:
	// System.UriSyntaxFlags System.UriParser::m_Flags
	int32_t ___m_Flags_3;
	// System.UriSyntaxFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.UriParser::m_UpdatableFlags
	int32_t ___m_UpdatableFlags_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.UriParser::m_UpdatableFlagsUsed
	bool ___m_UpdatableFlagsUsed_5;
	// System.Int32 System.UriParser::m_Port
	int32_t ___m_Port_7;
	// System.String System.UriParser::m_Scheme
	String_t* ___m_Scheme_8;

public:
	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlags_4() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_UpdatableFlags_4)); }
	inline int32_t get_m_UpdatableFlags_4() const { return ___m_UpdatableFlags_4; }
	inline int32_t* get_address_of_m_UpdatableFlags_4() { return &___m_UpdatableFlags_4; }
	inline void set_m_UpdatableFlags_4(int32_t value)
	{
		___m_UpdatableFlags_4 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlagsUsed_5() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_UpdatableFlagsUsed_5)); }
	inline bool get_m_UpdatableFlagsUsed_5() const { return ___m_UpdatableFlagsUsed_5; }
	inline bool* get_address_of_m_UpdatableFlagsUsed_5() { return &___m_UpdatableFlagsUsed_5; }
	inline void set_m_UpdatableFlagsUsed_5(bool value)
	{
		___m_UpdatableFlagsUsed_5 = value;
	}

	inline static int32_t get_offset_of_m_Port_7() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_Port_7)); }
	inline int32_t get_m_Port_7() const { return ___m_Port_7; }
	inline int32_t* get_address_of_m_Port_7() { return &___m_Port_7; }
	inline void set_m_Port_7(int32_t value)
	{
		___m_Port_7 = value;
	}

	inline static int32_t get_offset_of_m_Scheme_8() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_Scheme_8)); }
	inline String_t* get_m_Scheme_8() const { return ___m_Scheme_8; }
	inline String_t** get_address_of_m_Scheme_8() { return &___m_Scheme_8; }
	inline void set_m_Scheme_8(String_t* value)
	{
		___m_Scheme_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scheme_8), (void*)value);
	}
};

struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_Table
	Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * ___m_Table_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_TempTable
	Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * ___m_TempTable_2;
	// System.UriParser System.UriParser::HttpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___HttpUri_11;
	// System.UriParser System.UriParser::HttpsUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___HttpsUri_12;
	// System.UriParser System.UriParser::WsUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___WsUri_13;
	// System.UriParser System.UriParser::WssUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___WssUri_14;
	// System.UriParser System.UriParser::FtpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___FtpUri_15;
	// System.UriParser System.UriParser::FileUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___FileUri_16;
	// System.UriParser System.UriParser::GopherUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___GopherUri_17;
	// System.UriParser System.UriParser::NntpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NntpUri_18;
	// System.UriParser System.UriParser::NewsUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NewsUri_19;
	// System.UriParser System.UriParser::MailToUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___MailToUri_20;
	// System.UriParser System.UriParser::UuidUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___UuidUri_21;
	// System.UriParser System.UriParser::TelnetUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___TelnetUri_22;
	// System.UriParser System.UriParser::LdapUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___LdapUri_23;
	// System.UriParser System.UriParser::NetTcpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NetTcpUri_24;
	// System.UriParser System.UriParser::NetPipeUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NetPipeUri_25;
	// System.UriParser System.UriParser::VsMacrosUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___VsMacrosUri_26;
	// System.UriParser/UriQuirksVersion System.UriParser::s_QuirksVersion
	int32_t ___s_QuirksVersion_27;
	// System.UriSyntaxFlags System.UriParser::HttpSyntaxFlags
	int32_t ___HttpSyntaxFlags_30;
	// System.UriSyntaxFlags System.UriParser::FileSyntaxFlags
	int32_t ___FileSyntaxFlags_32;

public:
	inline static int32_t get_offset_of_m_Table_1() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___m_Table_1)); }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * get_m_Table_1() const { return ___m_Table_1; }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 ** get_address_of_m_Table_1() { return &___m_Table_1; }
	inline void set_m_Table_1(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * value)
	{
		___m_Table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Table_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TempTable_2() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___m_TempTable_2)); }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * get_m_TempTable_2() const { return ___m_TempTable_2; }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 ** get_address_of_m_TempTable_2() { return &___m_TempTable_2; }
	inline void set_m_TempTable_2(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * value)
	{
		___m_TempTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempTable_2), (void*)value);
	}

	inline static int32_t get_offset_of_HttpUri_11() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___HttpUri_11)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_HttpUri_11() const { return ___HttpUri_11; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_HttpUri_11() { return &___HttpUri_11; }
	inline void set_HttpUri_11(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___HttpUri_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpUri_11), (void*)value);
	}

	inline static int32_t get_offset_of_HttpsUri_12() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___HttpsUri_12)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_HttpsUri_12() const { return ___HttpsUri_12; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_HttpsUri_12() { return &___HttpsUri_12; }
	inline void set_HttpsUri_12(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___HttpsUri_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpsUri_12), (void*)value);
	}

	inline static int32_t get_offset_of_WsUri_13() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___WsUri_13)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_WsUri_13() const { return ___WsUri_13; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_WsUri_13() { return &___WsUri_13; }
	inline void set_WsUri_13(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___WsUri_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WsUri_13), (void*)value);
	}

	inline static int32_t get_offset_of_WssUri_14() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___WssUri_14)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_WssUri_14() const { return ___WssUri_14; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_WssUri_14() { return &___WssUri_14; }
	inline void set_WssUri_14(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___WssUri_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WssUri_14), (void*)value);
	}

	inline static int32_t get_offset_of_FtpUri_15() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___FtpUri_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_FtpUri_15() const { return ___FtpUri_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_FtpUri_15() { return &___FtpUri_15; }
	inline void set_FtpUri_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___FtpUri_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FtpUri_15), (void*)value);
	}

	inline static int32_t get_offset_of_FileUri_16() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___FileUri_16)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_FileUri_16() const { return ___FileUri_16; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_FileUri_16() { return &___FileUri_16; }
	inline void set_FileUri_16(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___FileUri_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FileUri_16), (void*)value);
	}

	inline static int32_t get_offset_of_GopherUri_17() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___GopherUri_17)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_GopherUri_17() const { return ___GopherUri_17; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_GopherUri_17() { return &___GopherUri_17; }
	inline void set_GopherUri_17(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___GopherUri_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GopherUri_17), (void*)value);
	}

	inline static int32_t get_offset_of_NntpUri_18() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NntpUri_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NntpUri_18() const { return ___NntpUri_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NntpUri_18() { return &___NntpUri_18; }
	inline void set_NntpUri_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NntpUri_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NntpUri_18), (void*)value);
	}

	inline static int32_t get_offset_of_NewsUri_19() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NewsUri_19)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NewsUri_19() const { return ___NewsUri_19; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NewsUri_19() { return &___NewsUri_19; }
	inline void set_NewsUri_19(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NewsUri_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewsUri_19), (void*)value);
	}

	inline static int32_t get_offset_of_MailToUri_20() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___MailToUri_20)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_MailToUri_20() const { return ___MailToUri_20; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_MailToUri_20() { return &___MailToUri_20; }
	inline void set_MailToUri_20(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___MailToUri_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MailToUri_20), (void*)value);
	}

	inline static int32_t get_offset_of_UuidUri_21() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___UuidUri_21)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_UuidUri_21() const { return ___UuidUri_21; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_UuidUri_21() { return &___UuidUri_21; }
	inline void set_UuidUri_21(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___UuidUri_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UuidUri_21), (void*)value);
	}

	inline static int32_t get_offset_of_TelnetUri_22() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___TelnetUri_22)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_TelnetUri_22() const { return ___TelnetUri_22; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_TelnetUri_22() { return &___TelnetUri_22; }
	inline void set_TelnetUri_22(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___TelnetUri_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TelnetUri_22), (void*)value);
	}

	inline static int32_t get_offset_of_LdapUri_23() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___LdapUri_23)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_LdapUri_23() const { return ___LdapUri_23; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_LdapUri_23() { return &___LdapUri_23; }
	inline void set_LdapUri_23(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___LdapUri_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LdapUri_23), (void*)value);
	}

	inline static int32_t get_offset_of_NetTcpUri_24() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NetTcpUri_24)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NetTcpUri_24() const { return ___NetTcpUri_24; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NetTcpUri_24() { return &___NetTcpUri_24; }
	inline void set_NetTcpUri_24(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NetTcpUri_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetTcpUri_24), (void*)value);
	}

	inline static int32_t get_offset_of_NetPipeUri_25() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NetPipeUri_25)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NetPipeUri_25() const { return ___NetPipeUri_25; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NetPipeUri_25() { return &___NetPipeUri_25; }
	inline void set_NetPipeUri_25(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NetPipeUri_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetPipeUri_25), (void*)value);
	}

	inline static int32_t get_offset_of_VsMacrosUri_26() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___VsMacrosUri_26)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_VsMacrosUri_26() const { return ___VsMacrosUri_26; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_VsMacrosUri_26() { return &___VsMacrosUri_26; }
	inline void set_VsMacrosUri_26(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___VsMacrosUri_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VsMacrosUri_26), (void*)value);
	}

	inline static int32_t get_offset_of_s_QuirksVersion_27() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___s_QuirksVersion_27)); }
	inline int32_t get_s_QuirksVersion_27() const { return ___s_QuirksVersion_27; }
	inline int32_t* get_address_of_s_QuirksVersion_27() { return &___s_QuirksVersion_27; }
	inline void set_s_QuirksVersion_27(int32_t value)
	{
		___s_QuirksVersion_27 = value;
	}

	inline static int32_t get_offset_of_HttpSyntaxFlags_30() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___HttpSyntaxFlags_30)); }
	inline int32_t get_HttpSyntaxFlags_30() const { return ___HttpSyntaxFlags_30; }
	inline int32_t* get_address_of_HttpSyntaxFlags_30() { return &___HttpSyntaxFlags_30; }
	inline void set_HttpSyntaxFlags_30(int32_t value)
	{
		___HttpSyntaxFlags_30 = value;
	}

	inline static int32_t get_offset_of_FileSyntaxFlags_32() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___FileSyntaxFlags_32)); }
	inline int32_t get_FileSyntaxFlags_32() const { return ___FileSyntaxFlags_32; }
	inline int32_t* get_address_of_FileSyntaxFlags_32() { return &___FileSyntaxFlags_32; }
	inline void set_FileSyntaxFlags_32(int32_t value)
	{
		___FileSyntaxFlags_32 = value;
	}
};


// System.Net.TimerThread/TimerNode
struct  TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9  : public Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323
{
public:
	// System.Net.TimerThread/TimerNode/TimerState System.Net.TimerThread/TimerNode::m_TimerState
	int32_t ___m_TimerState_2;
	// System.Net.TimerThread/Callback System.Net.TimerThread/TimerNode::m_Callback
	Callback_t762D11D347389984D6A23378030FA60146124360 * ___m_Callback_3;
	// System.Object System.Net.TimerThread/TimerNode::m_Context
	RuntimeObject * ___m_Context_4;
	// System.Object System.Net.TimerThread/TimerNode::m_QueueLock
	RuntimeObject * ___m_QueueLock_5;
	// System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::next
	TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * ___next_6;
	// System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::prev
	TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * ___prev_7;

public:
	inline static int32_t get_offset_of_m_TimerState_2() { return static_cast<int32_t>(offsetof(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9, ___m_TimerState_2)); }
	inline int32_t get_m_TimerState_2() const { return ___m_TimerState_2; }
	inline int32_t* get_address_of_m_TimerState_2() { return &___m_TimerState_2; }
	inline void set_m_TimerState_2(int32_t value)
	{
		___m_TimerState_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9, ___m_Callback_3)); }
	inline Callback_t762D11D347389984D6A23378030FA60146124360 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline Callback_t762D11D347389984D6A23378030FA60146124360 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(Callback_t762D11D347389984D6A23378030FA60146124360 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Context_4() { return static_cast<int32_t>(offsetof(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9, ___m_Context_4)); }
	inline RuntimeObject * get_m_Context_4() const { return ___m_Context_4; }
	inline RuntimeObject ** get_address_of_m_Context_4() { return &___m_Context_4; }
	inline void set_m_Context_4(RuntimeObject * value)
	{
		___m_Context_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Context_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueueLock_5() { return static_cast<int32_t>(offsetof(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9, ___m_QueueLock_5)); }
	inline RuntimeObject * get_m_QueueLock_5() const { return ___m_QueueLock_5; }
	inline RuntimeObject ** get_address_of_m_QueueLock_5() { return &___m_QueueLock_5; }
	inline void set_m_QueueLock_5(RuntimeObject * value)
	{
		___m_QueueLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_QueueLock_5), (void*)value);
	}

	inline static int32_t get_offset_of_next_6() { return static_cast<int32_t>(offsetof(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9, ___next_6)); }
	inline TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * get_next_6() const { return ___next_6; }
	inline TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 ** get_address_of_next_6() { return &___next_6; }
	inline void set_next_6(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * value)
	{
		___next_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_6), (void*)value);
	}

	inline static int32_t get_offset_of_prev_7() { return static_cast<int32_t>(offsetof(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9, ___prev_7)); }
	inline TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * get_prev_7() const { return ___prev_7; }
	inline TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 ** get_address_of_prev_7() { return &___prev_7; }
	inline void set_prev_7(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * value)
	{
		___prev_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_7), (void*)value);
	}
};


// Mono.Unity.UnityTls/unitytls_errorstate
struct  unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_errorstate::magic
	uint32_t ___magic_0;
	// Mono.Unity.UnityTls/unitytls_error_code Mono.Unity.UnityTls/unitytls_errorstate::code
	uint32_t ___code_1;
	// System.UInt64 Mono.Unity.UnityTls/unitytls_errorstate::reserved
	uint64_t ___reserved_2;

public:
	inline static int32_t get_offset_of_magic_0() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___magic_0)); }
	inline uint32_t get_magic_0() const { return ___magic_0; }
	inline uint32_t* get_address_of_magic_0() { return &___magic_0; }
	inline void set_magic_0(uint32_t value)
	{
		___magic_0 = value;
	}

	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___code_1)); }
	inline uint32_t get_code_1() const { return ___code_1; }
	inline uint32_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(uint32_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_reserved_2() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___reserved_2)); }
	inline uint64_t get_reserved_2() const { return ___reserved_2; }
	inline uint64_t* get_address_of_reserved_2() { return &___reserved_2; }
	inline void set_reserved_2(uint64_t value)
	{
		___reserved_2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange
struct  unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 
{
public:
	// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange::min
	uint32_t ___min_0;
	// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange::max
	uint32_t ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68, ___min_0)); }
	inline uint32_t get_min_0() const { return ___min_0; }
	inline uint32_t* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(uint32_t value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68, ___max_1)); }
	inline uint32_t get_max_1() const { return ___max_1; }
	inline uint32_t* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(uint32_t value)
	{
		___max_1 = value;
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Net.TimerThread/Callback
struct  Callback_t762D11D347389984D6A23378030FA60146124360  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct
struct  unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD  : public RuntimeObject
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_interface_struct::UNITYTLS_INVALID_HANDLE
	uint64_t ___UNITYTLS_INVALID_HANDLE_0;
	// Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange Mono.Unity.UnityTls/unitytls_interface_struct::UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT
	unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_errorstate_create
	unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * ___unitytls_errorstate_create_2;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_errorstate_raise_error
	unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * ___unitytls_errorstate_raise_error_3;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_key_get_ref
	unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * ___unitytls_key_get_ref_4;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_key_parse_der
	unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * ___unitytls_key_parse_der_5;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_key_parse_pem
	unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * ___unitytls_key_parse_pem_6;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_key_free
	unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * ___unitytls_key_free_7;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509_export_der
	unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * ___unitytls_x509_export_der_8;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_get_ref
	unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * ___unitytls_x509list_get_ref_9;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_get_x509
	unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * ___unitytls_x509list_get_x509_10;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_create
	unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * ___unitytls_x509list_create_11;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_append
	unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * ___unitytls_x509list_append_12;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_append_der
	unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * ___unitytls_x509list_append_der_13;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_append_pem
	unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * ___unitytls_x509list_append_pem_14;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_free
	unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * ___unitytls_x509list_free_15;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509verify_default_ca
	unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * ___unitytls_x509verify_default_ca_16;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509verify_explicit_ca
	unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * ___unitytls_x509verify_explicit_ca_17;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_create_server
	unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * ___unitytls_tlsctx_create_server_18;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_create_client
	unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * ___unitytls_tlsctx_create_client_19;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_server_require_client_authentication
	unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * ___unitytls_tlsctx_server_require_client_authentication_20;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback
	unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * ___unitytls_tlsctx_set_certificate_callback_21;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_set_trace_callback
	unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * ___unitytls_tlsctx_set_trace_callback_22;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback
	unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * ___unitytls_tlsctx_set_x509verify_callback_23;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_set_supported_ciphersuites
	unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * ___unitytls_tlsctx_set_supported_ciphersuites_24;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_get_ciphersuite
	unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * ___unitytls_tlsctx_get_ciphersuite_25;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_get_protocol
	unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * ___unitytls_tlsctx_get_protocol_26;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_process_handshake
	unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * ___unitytls_tlsctx_process_handshake_27;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_read
	unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * ___unitytls_tlsctx_read_28;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_write
	unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * ___unitytls_tlsctx_write_29;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_notify_close
	unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * ___unitytls_tlsctx_notify_close_30;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_free
	unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * ___unitytls_tlsctx_free_31;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_random_generate_bytes
	unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * ___unitytls_random_generate_bytes_32;

public:
	inline static int32_t get_offset_of_UNITYTLS_INVALID_HANDLE_0() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___UNITYTLS_INVALID_HANDLE_0)); }
	inline uint64_t get_UNITYTLS_INVALID_HANDLE_0() const { return ___UNITYTLS_INVALID_HANDLE_0; }
	inline uint64_t* get_address_of_UNITYTLS_INVALID_HANDLE_0() { return &___UNITYTLS_INVALID_HANDLE_0; }
	inline void set_UNITYTLS_INVALID_HANDLE_0(uint64_t value)
	{
		___UNITYTLS_INVALID_HANDLE_0 = value;
	}

	inline static int32_t get_offset_of_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1)); }
	inline unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1() const { return ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1; }
	inline unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 * get_address_of_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1() { return &___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1; }
	inline void set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  value)
	{
		___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1 = value;
	}

	inline static int32_t get_offset_of_unitytls_errorstate_create_2() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_errorstate_create_2)); }
	inline unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * get_unitytls_errorstate_create_2() const { return ___unitytls_errorstate_create_2; }
	inline unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 ** get_address_of_unitytls_errorstate_create_2() { return &___unitytls_errorstate_create_2; }
	inline void set_unitytls_errorstate_create_2(unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * value)
	{
		___unitytls_errorstate_create_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_errorstate_create_2), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_errorstate_raise_error_3() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_errorstate_raise_error_3)); }
	inline unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * get_unitytls_errorstate_raise_error_3() const { return ___unitytls_errorstate_raise_error_3; }
	inline unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E ** get_address_of_unitytls_errorstate_raise_error_3() { return &___unitytls_errorstate_raise_error_3; }
	inline void set_unitytls_errorstate_raise_error_3(unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * value)
	{
		___unitytls_errorstate_raise_error_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_errorstate_raise_error_3), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_key_get_ref_4() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_key_get_ref_4)); }
	inline unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * get_unitytls_key_get_ref_4() const { return ___unitytls_key_get_ref_4; }
	inline unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 ** get_address_of_unitytls_key_get_ref_4() { return &___unitytls_key_get_ref_4; }
	inline void set_unitytls_key_get_ref_4(unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * value)
	{
		___unitytls_key_get_ref_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_key_get_ref_4), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_key_parse_der_5() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_key_parse_der_5)); }
	inline unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * get_unitytls_key_parse_der_5() const { return ___unitytls_key_parse_der_5; }
	inline unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 ** get_address_of_unitytls_key_parse_der_5() { return &___unitytls_key_parse_der_5; }
	inline void set_unitytls_key_parse_der_5(unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * value)
	{
		___unitytls_key_parse_der_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_key_parse_der_5), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_key_parse_pem_6() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_key_parse_pem_6)); }
	inline unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * get_unitytls_key_parse_pem_6() const { return ___unitytls_key_parse_pem_6; }
	inline unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC ** get_address_of_unitytls_key_parse_pem_6() { return &___unitytls_key_parse_pem_6; }
	inline void set_unitytls_key_parse_pem_6(unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * value)
	{
		___unitytls_key_parse_pem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_key_parse_pem_6), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_key_free_7() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_key_free_7)); }
	inline unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * get_unitytls_key_free_7() const { return ___unitytls_key_free_7; }
	inline unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F ** get_address_of_unitytls_key_free_7() { return &___unitytls_key_free_7; }
	inline void set_unitytls_key_free_7(unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * value)
	{
		___unitytls_key_free_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_key_free_7), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_x509_export_der_8() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_x509_export_der_8)); }
	inline unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * get_unitytls_x509_export_der_8() const { return ___unitytls_x509_export_der_8; }
	inline unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC ** get_address_of_unitytls_x509_export_der_8() { return &___unitytls_x509_export_der_8; }
	inline void set_unitytls_x509_export_der_8(unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * value)
	{
		___unitytls_x509_export_der_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_x509_export_der_8), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_get_ref_9() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_x509list_get_ref_9)); }
	inline unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * get_unitytls_x509list_get_ref_9() const { return ___unitytls_x509list_get_ref_9; }
	inline unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 ** get_address_of_unitytls_x509list_get_ref_9() { return &___unitytls_x509list_get_ref_9; }
	inline void set_unitytls_x509list_get_ref_9(unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * value)
	{
		___unitytls_x509list_get_ref_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_x509list_get_ref_9), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_get_x509_10() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_x509list_get_x509_10)); }
	inline unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * get_unitytls_x509list_get_x509_10() const { return ___unitytls_x509list_get_x509_10; }
	inline unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 ** get_address_of_unitytls_x509list_get_x509_10() { return &___unitytls_x509list_get_x509_10; }
	inline void set_unitytls_x509list_get_x509_10(unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * value)
	{
		___unitytls_x509list_get_x509_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_x509list_get_x509_10), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_create_11() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_x509list_create_11)); }
	inline unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * get_unitytls_x509list_create_11() const { return ___unitytls_x509list_create_11; }
	inline unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F ** get_address_of_unitytls_x509list_create_11() { return &___unitytls_x509list_create_11; }
	inline void set_unitytls_x509list_create_11(unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * value)
	{
		___unitytls_x509list_create_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_x509list_create_11), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_append_12() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_x509list_append_12)); }
	inline unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * get_unitytls_x509list_append_12() const { return ___unitytls_x509list_append_12; }
	inline unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 ** get_address_of_unitytls_x509list_append_12() { return &___unitytls_x509list_append_12; }
	inline void set_unitytls_x509list_append_12(unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * value)
	{
		___unitytls_x509list_append_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_x509list_append_12), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_append_der_13() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_x509list_append_der_13)); }
	inline unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * get_unitytls_x509list_append_der_13() const { return ___unitytls_x509list_append_der_13; }
	inline unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E ** get_address_of_unitytls_x509list_append_der_13() { return &___unitytls_x509list_append_der_13; }
	inline void set_unitytls_x509list_append_der_13(unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * value)
	{
		___unitytls_x509list_append_der_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_x509list_append_der_13), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_append_pem_14() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_x509list_append_pem_14)); }
	inline unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * get_unitytls_x509list_append_pem_14() const { return ___unitytls_x509list_append_pem_14; }
	inline unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E ** get_address_of_unitytls_x509list_append_pem_14() { return &___unitytls_x509list_append_pem_14; }
	inline void set_unitytls_x509list_append_pem_14(unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * value)
	{
		___unitytls_x509list_append_pem_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_x509list_append_pem_14), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_free_15() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_x509list_free_15)); }
	inline unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * get_unitytls_x509list_free_15() const { return ___unitytls_x509list_free_15; }
	inline unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 ** get_address_of_unitytls_x509list_free_15() { return &___unitytls_x509list_free_15; }
	inline void set_unitytls_x509list_free_15(unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * value)
	{
		___unitytls_x509list_free_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_x509list_free_15), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_x509verify_default_ca_16() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_x509verify_default_ca_16)); }
	inline unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * get_unitytls_x509verify_default_ca_16() const { return ___unitytls_x509verify_default_ca_16; }
	inline unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 ** get_address_of_unitytls_x509verify_default_ca_16() { return &___unitytls_x509verify_default_ca_16; }
	inline void set_unitytls_x509verify_default_ca_16(unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * value)
	{
		___unitytls_x509verify_default_ca_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_x509verify_default_ca_16), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_x509verify_explicit_ca_17() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_x509verify_explicit_ca_17)); }
	inline unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * get_unitytls_x509verify_explicit_ca_17() const { return ___unitytls_x509verify_explicit_ca_17; }
	inline unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 ** get_address_of_unitytls_x509verify_explicit_ca_17() { return &___unitytls_x509verify_explicit_ca_17; }
	inline void set_unitytls_x509verify_explicit_ca_17(unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * value)
	{
		___unitytls_x509verify_explicit_ca_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_x509verify_explicit_ca_17), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_create_server_18() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_create_server_18)); }
	inline unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * get_unitytls_tlsctx_create_server_18() const { return ___unitytls_tlsctx_create_server_18; }
	inline unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B ** get_address_of_unitytls_tlsctx_create_server_18() { return &___unitytls_tlsctx_create_server_18; }
	inline void set_unitytls_tlsctx_create_server_18(unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * value)
	{
		___unitytls_tlsctx_create_server_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_create_server_18), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_create_client_19() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_create_client_19)); }
	inline unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * get_unitytls_tlsctx_create_client_19() const { return ___unitytls_tlsctx_create_client_19; }
	inline unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 ** get_address_of_unitytls_tlsctx_create_client_19() { return &___unitytls_tlsctx_create_client_19; }
	inline void set_unitytls_tlsctx_create_client_19(unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * value)
	{
		___unitytls_tlsctx_create_client_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_create_client_19), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_server_require_client_authentication_20() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_server_require_client_authentication_20)); }
	inline unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * get_unitytls_tlsctx_server_require_client_authentication_20() const { return ___unitytls_tlsctx_server_require_client_authentication_20; }
	inline unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD ** get_address_of_unitytls_tlsctx_server_require_client_authentication_20() { return &___unitytls_tlsctx_server_require_client_authentication_20; }
	inline void set_unitytls_tlsctx_server_require_client_authentication_20(unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * value)
	{
		___unitytls_tlsctx_server_require_client_authentication_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_server_require_client_authentication_20), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_set_certificate_callback_21() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_set_certificate_callback_21)); }
	inline unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * get_unitytls_tlsctx_set_certificate_callback_21() const { return ___unitytls_tlsctx_set_certificate_callback_21; }
	inline unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 ** get_address_of_unitytls_tlsctx_set_certificate_callback_21() { return &___unitytls_tlsctx_set_certificate_callback_21; }
	inline void set_unitytls_tlsctx_set_certificate_callback_21(unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * value)
	{
		___unitytls_tlsctx_set_certificate_callback_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_set_certificate_callback_21), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_set_trace_callback_22() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_set_trace_callback_22)); }
	inline unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * get_unitytls_tlsctx_set_trace_callback_22() const { return ___unitytls_tlsctx_set_trace_callback_22; }
	inline unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF ** get_address_of_unitytls_tlsctx_set_trace_callback_22() { return &___unitytls_tlsctx_set_trace_callback_22; }
	inline void set_unitytls_tlsctx_set_trace_callback_22(unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * value)
	{
		___unitytls_tlsctx_set_trace_callback_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_set_trace_callback_22), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_set_x509verify_callback_23() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_set_x509verify_callback_23)); }
	inline unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * get_unitytls_tlsctx_set_x509verify_callback_23() const { return ___unitytls_tlsctx_set_x509verify_callback_23; }
	inline unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 ** get_address_of_unitytls_tlsctx_set_x509verify_callback_23() { return &___unitytls_tlsctx_set_x509verify_callback_23; }
	inline void set_unitytls_tlsctx_set_x509verify_callback_23(unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * value)
	{
		___unitytls_tlsctx_set_x509verify_callback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_set_x509verify_callback_23), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_set_supported_ciphersuites_24() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_set_supported_ciphersuites_24)); }
	inline unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * get_unitytls_tlsctx_set_supported_ciphersuites_24() const { return ___unitytls_tlsctx_set_supported_ciphersuites_24; }
	inline unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E ** get_address_of_unitytls_tlsctx_set_supported_ciphersuites_24() { return &___unitytls_tlsctx_set_supported_ciphersuites_24; }
	inline void set_unitytls_tlsctx_set_supported_ciphersuites_24(unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * value)
	{
		___unitytls_tlsctx_set_supported_ciphersuites_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_set_supported_ciphersuites_24), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_get_ciphersuite_25() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_get_ciphersuite_25)); }
	inline unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * get_unitytls_tlsctx_get_ciphersuite_25() const { return ___unitytls_tlsctx_get_ciphersuite_25; }
	inline unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 ** get_address_of_unitytls_tlsctx_get_ciphersuite_25() { return &___unitytls_tlsctx_get_ciphersuite_25; }
	inline void set_unitytls_tlsctx_get_ciphersuite_25(unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * value)
	{
		___unitytls_tlsctx_get_ciphersuite_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_get_ciphersuite_25), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_get_protocol_26() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_get_protocol_26)); }
	inline unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * get_unitytls_tlsctx_get_protocol_26() const { return ___unitytls_tlsctx_get_protocol_26; }
	inline unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 ** get_address_of_unitytls_tlsctx_get_protocol_26() { return &___unitytls_tlsctx_get_protocol_26; }
	inline void set_unitytls_tlsctx_get_protocol_26(unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * value)
	{
		___unitytls_tlsctx_get_protocol_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_get_protocol_26), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_process_handshake_27() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_process_handshake_27)); }
	inline unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * get_unitytls_tlsctx_process_handshake_27() const { return ___unitytls_tlsctx_process_handshake_27; }
	inline unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C ** get_address_of_unitytls_tlsctx_process_handshake_27() { return &___unitytls_tlsctx_process_handshake_27; }
	inline void set_unitytls_tlsctx_process_handshake_27(unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * value)
	{
		___unitytls_tlsctx_process_handshake_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_process_handshake_27), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_read_28() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_read_28)); }
	inline unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * get_unitytls_tlsctx_read_28() const { return ___unitytls_tlsctx_read_28; }
	inline unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 ** get_address_of_unitytls_tlsctx_read_28() { return &___unitytls_tlsctx_read_28; }
	inline void set_unitytls_tlsctx_read_28(unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * value)
	{
		___unitytls_tlsctx_read_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_read_28), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_write_29() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_write_29)); }
	inline unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * get_unitytls_tlsctx_write_29() const { return ___unitytls_tlsctx_write_29; }
	inline unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 ** get_address_of_unitytls_tlsctx_write_29() { return &___unitytls_tlsctx_write_29; }
	inline void set_unitytls_tlsctx_write_29(unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * value)
	{
		___unitytls_tlsctx_write_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_write_29), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_notify_close_30() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_notify_close_30)); }
	inline unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * get_unitytls_tlsctx_notify_close_30() const { return ___unitytls_tlsctx_notify_close_30; }
	inline unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB ** get_address_of_unitytls_tlsctx_notify_close_30() { return &___unitytls_tlsctx_notify_close_30; }
	inline void set_unitytls_tlsctx_notify_close_30(unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * value)
	{
		___unitytls_tlsctx_notify_close_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_notify_close_30), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_free_31() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_tlsctx_free_31)); }
	inline unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * get_unitytls_tlsctx_free_31() const { return ___unitytls_tlsctx_free_31; }
	inline unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA ** get_address_of_unitytls_tlsctx_free_31() { return &___unitytls_tlsctx_free_31; }
	inline void set_unitytls_tlsctx_free_31(unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * value)
	{
		___unitytls_tlsctx_free_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_tlsctx_free_31), (void*)value);
	}

	inline static int32_t get_offset_of_unitytls_random_generate_bytes_32() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD, ___unitytls_random_generate_bytes_32)); }
	inline unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * get_unitytls_random_generate_bytes_32() const { return ___unitytls_random_generate_bytes_32; }
	inline unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD ** get_address_of_unitytls_random_generate_bytes_32() { return &___unitytls_random_generate_bytes_32; }
	inline void set_unitytls_random_generate_bytes_32(unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * value)
	{
		___unitytls_random_generate_bytes_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitytls_random_generate_bytes_32), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mono.Unity.UnityTls/unitytls_interface_struct
struct unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshaled_pinvoke
{
	uint64_t ___UNITYTLS_INVALID_HANDLE_0;
	unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1;
	Il2CppMethodPointer ___unitytls_errorstate_create_2;
	Il2CppMethodPointer ___unitytls_errorstate_raise_error_3;
	Il2CppMethodPointer ___unitytls_key_get_ref_4;
	Il2CppMethodPointer ___unitytls_key_parse_der_5;
	Il2CppMethodPointer ___unitytls_key_parse_pem_6;
	Il2CppMethodPointer ___unitytls_key_free_7;
	Il2CppMethodPointer ___unitytls_x509_export_der_8;
	Il2CppMethodPointer ___unitytls_x509list_get_ref_9;
	Il2CppMethodPointer ___unitytls_x509list_get_x509_10;
	Il2CppMethodPointer ___unitytls_x509list_create_11;
	Il2CppMethodPointer ___unitytls_x509list_append_12;
	Il2CppMethodPointer ___unitytls_x509list_append_der_13;
	Il2CppMethodPointer ___unitytls_x509list_append_pem_14;
	Il2CppMethodPointer ___unitytls_x509list_free_15;
	Il2CppMethodPointer ___unitytls_x509verify_default_ca_16;
	Il2CppMethodPointer ___unitytls_x509verify_explicit_ca_17;
	Il2CppMethodPointer ___unitytls_tlsctx_create_server_18;
	Il2CppMethodPointer ___unitytls_tlsctx_create_client_19;
	Il2CppMethodPointer ___unitytls_tlsctx_server_require_client_authentication_20;
	Il2CppMethodPointer ___unitytls_tlsctx_set_certificate_callback_21;
	Il2CppMethodPointer ___unitytls_tlsctx_set_trace_callback_22;
	Il2CppMethodPointer ___unitytls_tlsctx_set_x509verify_callback_23;
	Il2CppMethodPointer ___unitytls_tlsctx_set_supported_ciphersuites_24;
	Il2CppMethodPointer ___unitytls_tlsctx_get_ciphersuite_25;
	Il2CppMethodPointer ___unitytls_tlsctx_get_protocol_26;
	Il2CppMethodPointer ___unitytls_tlsctx_process_handshake_27;
	Il2CppMethodPointer ___unitytls_tlsctx_read_28;
	Il2CppMethodPointer ___unitytls_tlsctx_write_29;
	Il2CppMethodPointer ___unitytls_tlsctx_notify_close_30;
	Il2CppMethodPointer ___unitytls_tlsctx_free_31;
	Il2CppMethodPointer ___unitytls_random_generate_bytes_32;
};
// Native definition for COM marshalling of Mono.Unity.UnityTls/unitytls_interface_struct
struct unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshaled_com
{
	uint64_t ___UNITYTLS_INVALID_HANDLE_0;
	unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1;
	Il2CppMethodPointer ___unitytls_errorstate_create_2;
	Il2CppMethodPointer ___unitytls_errorstate_raise_error_3;
	Il2CppMethodPointer ___unitytls_key_get_ref_4;
	Il2CppMethodPointer ___unitytls_key_parse_der_5;
	Il2CppMethodPointer ___unitytls_key_parse_pem_6;
	Il2CppMethodPointer ___unitytls_key_free_7;
	Il2CppMethodPointer ___unitytls_x509_export_der_8;
	Il2CppMethodPointer ___unitytls_x509list_get_ref_9;
	Il2CppMethodPointer ___unitytls_x509list_get_x509_10;
	Il2CppMethodPointer ___unitytls_x509list_create_11;
	Il2CppMethodPointer ___unitytls_x509list_append_12;
	Il2CppMethodPointer ___unitytls_x509list_append_der_13;
	Il2CppMethodPointer ___unitytls_x509list_append_pem_14;
	Il2CppMethodPointer ___unitytls_x509list_free_15;
	Il2CppMethodPointer ___unitytls_x509verify_default_ca_16;
	Il2CppMethodPointer ___unitytls_x509verify_explicit_ca_17;
	Il2CppMethodPointer ___unitytls_tlsctx_create_server_18;
	Il2CppMethodPointer ___unitytls_tlsctx_create_client_19;
	Il2CppMethodPointer ___unitytls_tlsctx_server_require_client_authentication_20;
	Il2CppMethodPointer ___unitytls_tlsctx_set_certificate_callback_21;
	Il2CppMethodPointer ___unitytls_tlsctx_set_trace_callback_22;
	Il2CppMethodPointer ___unitytls_tlsctx_set_x509verify_callback_23;
	Il2CppMethodPointer ___unitytls_tlsctx_set_supported_ciphersuites_24;
	Il2CppMethodPointer ___unitytls_tlsctx_get_ciphersuite_25;
	Il2CppMethodPointer ___unitytls_tlsctx_get_protocol_26;
	Il2CppMethodPointer ___unitytls_tlsctx_process_handshake_27;
	Il2CppMethodPointer ___unitytls_tlsctx_read_28;
	Il2CppMethodPointer ___unitytls_tlsctx_write_29;
	Il2CppMethodPointer ___unitytls_tlsctx_notify_close_30;
	Il2CppMethodPointer ___unitytls_tlsctx_free_31;
	Il2CppMethodPointer ___unitytls_random_generate_bytes_32;
};

// Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
struct  unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_read_callback
struct  unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback
struct  unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_write_callback
struct  unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback
struct  unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_x509verify_callback
struct  unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C  : public MulticastDelegate_t
{
public:

public:
};


// System.UriParser/BuiltInUriParser
struct  BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26  : public UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t
struct  unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t
struct  unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t
struct  unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t
struct  unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t
struct  unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
struct  unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t
struct  unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t
struct  unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t
struct  unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t
struct  unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t
struct  unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t
struct  unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t
struct  unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t
struct  unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
struct  unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t
struct  unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t
struct  unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t
struct  unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t
struct  unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t
struct  unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t
struct  unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t
struct  unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t
struct  unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t
struct  unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t
struct  unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t
struct  unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t
struct  unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t
struct  unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t
struct  unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
struct  unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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

IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(const unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8& unmarshaled, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_back(const unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8& unmarshaled);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled);

// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_gshared (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, bool ___result0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::BeginSendCallback(System.Net.Sockets.SocketAsyncResult,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_BeginSendCallback_mCC42F20496AC0BB4DD9178C0C26D23ACC36DF864 (SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4 * ___sockares0, int32_t ___sent_so_far1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::BeginSendToCallback(System.Net.Sockets.SocketAsyncResult,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_BeginSendToCallback_m54F9520B1344D7D731151AA572580FB9D15AD25A (SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4 * ___sockares0, int32_t ___sent_so_far1, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_CleanedUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_CleanedUp_m74D2A5015FB338E942B827B5AD89A618C51EFA35 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Void System.IOSelectorJob::MarkDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSelectorJob_MarkDisposed_m59C7B222B7A2C93E838F2515F89A9BFD16CB6435 (IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9 * __this, const RuntimeMethod* method);
// System.Void System.IOSelector::Add(System.IntPtr,System.IOSelectorJob)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSelector_Add_m5CD0B1BF6A9DBA5B42F6D6CE9F86568A2ADBFF02 (intptr_t ___handle0, IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9 * ___job1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.SocketAsyncResult/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m087776B9BEE00F1A315C08CB888C7F2875461366 (U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466 * __this, const RuntimeMethod* method);
// System.AsyncCallback System.IOAsyncResult::get_AsyncCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * IOAsyncResult_get_AsyncCallback_m28F2ACED98F5AA2F05882EAD17000A26FA3DD5BD_inline (IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9 * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_mFCCCB843AEC4B5B3FC89BCED2BA839783920EA47 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject* ___ar0, const RuntimeMethod* method);
// System.Void System.Net.TimerThread/Queue::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_mC89D29D512FC164F6B5A4C9FD5DE574328FC99CC (Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * __this, int32_t ___durationMilliseconds0, const RuntimeMethod* method);
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E (const RuntimeMethod* method);
// System.Void System.Net.TimerThread/Timer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m4540393393A01B07D912FFFD47EE37BAD97D8DD0 (Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 * __this, int32_t ___durationMilliseconds0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Next()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * TimerNode_get_Next_m3960D4407C100E026C6F7EF316B07F8BB2C26517_inline (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, const RuntimeMethod* method);
// System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Prev()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * TimerNode_get_Prev_m6A2D3FA9F1ED71F25B05D72A81DB7A8B368AAA62_inline (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, const RuntimeMethod* method);
// System.Void System.Net.TimerThread/TimerNode::set_Prev(System.Net.TimerThread/TimerNode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimerNode_set_Prev_m3D69D7AED0406834FFFFBE21804DF522B8FB14B6_inline (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * ___value0, const RuntimeMethod* method);
// System.Void System.Net.TimerThread/TimerNode::set_Next(System.Net.TimerThread/TimerNode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimerNode_set_Next_m0C74401BC133D94AEDB40E1CB0A24F2C1F52FC68_inline (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Net.TimerThread/TimerNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerNode__ctor_mD6B740263A99B51737831DE7F0400AF236C5A39E (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Security.SecureString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureString__ctor_mF8E66ECEFAED82FEA8BA89D9C460BC8586A36574 (SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94 * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42 (const RuntimeMethod* method);
// System.Void System.Security.SecureString::.ctor(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureString__ctor_mEE9D2ACBD5D7C7BD4D6F544B75C2C1D8C52D2E20 (SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94 * __this, Il2CppChar* ___value0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.UriParser::.ctor(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriParser__ctor_m9A2C47C1F30EF65ADFBAEB0A569FB972F383825C (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * WebProxy_GetProxy_m8FDE265E6B9973E022EA8970C9B1DAD0B2CCC25F (WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___destination0, const RuntimeMethod* method);
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebProxy_IsBypassed_m8F90EF89CB55CAE69CA92B25A737849F0C2B6449 (WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___host0, const RuntimeMethod* method);
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33CB0ED421096418F623E21D1843F088ECAE8907 (U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetResult(!0)
inline bool TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251 (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, bool ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *, bool, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_gshared)(__this, ___result0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Sockets.Socket/<>c__DisplayClass243_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass243_0__ctor_m5F03E623DD7362E05C09E3ABB8C803F171217FCB (U3CU3Ec__DisplayClass243_0_t4E6A04693E05DD252059AB519837027D75B1DA61 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c__DisplayClass243_0::<BeginSendCallback>b__0(System.IOAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass243_0_U3CBeginSendCallbackU3Eb__0_mCE9408390F94237D14C6BA83630E34F2DCA56860 (U3CU3Ec__DisplayClass243_0_t4E6A04693E05DD252059AB519837027D75B1DA61 * __this, IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9 * L_0 = ___s0;
		int32_t L_1 = __this->get_sent_so_far_0();
		IL2CPP_RUNTIME_CLASS_INIT(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		Socket_BeginSendCallback_mCC42F20496AC0BB4DD9178C0C26D23ACC36DF864(((SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4 *)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
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
// System.Void System.Net.Sockets.Socket/<>c__DisplayClass255_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass255_0__ctor_m525B077301FDF00109F87D70A6FE0DCFE754E881 (U3CU3Ec__DisplayClass255_0_tA074DB635AC0ECB5666E0CEB17074993E777A5B4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c__DisplayClass255_0::<BeginSendToCallback>b__0(System.IOAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass255_0_U3CBeginSendToCallbackU3Eb__0_mD845DC321450D65BDB748179B84E15E021E45421 (U3CU3Ec__DisplayClass255_0_tA074DB635AC0ECB5666E0CEB17074993E777A5B4 * __this, IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9 * L_0 = ___s0;
		int32_t L_1 = __this->get_sent_so_far_0();
		IL2CPP_RUNTIME_CLASS_INIT(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		Socket_BeginSendToCallback_m54F9520B1344D7D731151AA572580FB9D15AD25A(((SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4 *)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
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
// System.Void System.Net.Sockets.Socket/<>c__DisplayClass299_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass299_0__ctor_mA2004E88EE9AC6E49EE6A5701BA464ED976A0ED4 (U3CU3Ec__DisplayClass299_0_tD5321E7830B62906F9B8E1B9882C40CFAA9E71E7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c__DisplayClass299_0::<QueueIOSelectorJob>b__0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass299_0_U3CQueueIOSelectorJobU3Eb__0_mD066C2DF490C722A0CD2B048F1B7031BA5E502D9 (U3CU3Ec__DisplayClass299_0_tD5321E7830B62906F9B8E1B9882C40CFAA9E71E7 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t0, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = Socket_get_CleanedUp_m74D2A5015FB338E942B827B5AD89A618C51EFA35(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9 * L_2 = __this->get_job_1();
		NullCheck(L_2);
		IOSelectorJob_MarkDisposed_m59C7B222B7A2C93E838F2515F89A9BFD16CB6435(L_2, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		intptr_t L_3 = __this->get_handle_2();
		IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9 * L_4 = __this->get_job_1();
		IOSelector_Add_m5CD0B1BF6A9DBA5B42F6D6CE9F86568A2ADBFF02((intptr_t)L_3, L_4, /*hidden argument*/NULL);
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
// System.Void System.Net.Sockets.SocketAsyncResult/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0BA2FADDF44F04C0C4DECA6414D64974F0C407AB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466 * L_0 = (U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466 *)il2cpp_codegen_object_new(U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m087776B9BEE00F1A315C08CB888C7F2875461366(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m087776B9BEE00F1A315C08CB888C7F2875461366 (U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult/<>c::<Complete>b__27_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCompleteU3Eb__27_0_m5C293AC939107CF4960BBA8DFBA174438C2BD359 (U3CU3Ec_tF062E403C464806AE41933DD04714342BF601466 * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4 *)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_il2cpp_TypeInfo_var)));
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_1;
		L_1 = IOAsyncResult_get_AsyncCallback_m28F2ACED98F5AA2F05882EAD17000A26FA3DD5BD_inline(((SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4 *)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___state0;
		NullCheck(L_1);
		AsyncCallback_Invoke_mFCCCB843AEC4B5B3FC89BCED2BA839783920EA47(L_1, ((SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4 *)CastclassSealed((RuntimeObject*)L_2, SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
// System.Void System.Net.TimerThread/Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_m6DECF0EA1ECE944021384E1D04CF4931C89353FC (Callback_t762D11D347389984D6A23378030FA60146124360 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.Net.TimerThread/Callback::Invoke(System.Net.TimerThread/Timer,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_m5CF1B13973F36016D5A95A11766B53018849FC0B (Callback_t762D11D347389984D6A23378030FA60146124360 * __this, Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 * ___timer0, int32_t ___timeNoticed1, RuntimeObject * ___context2, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 *, int32_t, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___timer0, ___timeNoticed1, ___context2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 *, int32_t, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___timer0, ___timeNoticed1, ___context2, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(targetMethod, ___timer0, ___timeNoticed1, ___context2);
					else
						GenericVirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(targetMethod, ___timer0, ___timeNoticed1, ___context2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___timer0, ___timeNoticed1, ___context2);
					else
						VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___timer0, ___timeNoticed1, ___context2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 *, int32_t, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___timer0, ___timeNoticed1, ___context2, targetMethod);
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
						GenericInterfaceActionInvoker3< Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 *, int32_t, RuntimeObject * >::Invoke(targetMethod, targetThis, ___timer0, ___timeNoticed1, ___context2);
					else
						GenericVirtActionInvoker3< Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 *, int32_t, RuntimeObject * >::Invoke(targetMethod, targetThis, ___timer0, ___timeNoticed1, ___context2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 *, int32_t, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___timer0, ___timeNoticed1, ___context2);
					else
						VirtActionInvoker3< Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 *, int32_t, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___timer0, ___timeNoticed1, ___context2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 *, int32_t, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___timer0, ___timeNoticed1, ___context2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 *, int32_t, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___timer0, ___timeNoticed1, ___context2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult System.Net.TimerThread/Callback::BeginInvoke(System.Net.TimerThread/Timer,System.Int32,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Callback_BeginInvoke_mAE44EE87C3A42CE9EE94B437D3FCB03C743CF2F9 (Callback_t762D11D347389984D6A23378030FA60146124360 * __this, Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 * ___timer0, int32_t ___timeNoticed1, RuntimeObject * ___context2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___timer0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___timeNoticed1);
	__d_args[2] = ___context2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void System.Net.TimerThread/Callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_EndInvoke_mD9EB2BA9D74B86A5A84275D63BAFD884CA639C7E (Callback_t762D11D347389984D6A23378030FA60146124360 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void System.Net.TimerThread/InfiniteTimerQueue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfiniteTimerQueue__ctor_m0615ECE53786982AB9CE17517821090EAA4875FE (InfiniteTimerQueue_t1D20699FE2900CE42CDF3C92FCF2156E0A9A7E60 * __this, const RuntimeMethod* method)
{
	{
		Queue__ctor_mC89D29D512FC164F6B5A4C9FD5DE574328FC99CC(__this, (-1), /*hidden argument*/NULL);
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
// System.Void System.Net.TimerThread/Queue::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_mC89D29D512FC164F6B5A4C9FD5DE574328FC99CC (Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * __this, int32_t ___durationMilliseconds0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___durationMilliseconds0;
		__this->set_m_DurationMilliseconds_0(L_0);
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
// System.Void System.Net.TimerThread/Timer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m4540393393A01B07D912FFFD47EE37BAD97D8DD0 (Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 * __this, int32_t ___durationMilliseconds0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___durationMilliseconds0;
		__this->set_m_DurationMilliseconds_1(L_0);
		int32_t L_1;
		L_1 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		__this->set_m_StartTimeMilliseconds_0(L_1);
		return;
	}
}
// System.Void System.Net.TimerThread/Timer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Dispose_m14AC12E37E52871D2FEC402F8D2F78BF8101C32B (Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Net.TimerThread/Timer::Cancel() */, __this);
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
// System.Void System.Net.TimerThread/TimerNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerNode__ctor_mD6B740263A99B51737831DE7F0400AF236C5A39E (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, const RuntimeMethod* method)
{
	{
		Timer__ctor_m4540393393A01B07D912FFFD47EE37BAD97D8DD0(__this, 0, /*hidden argument*/NULL);
		__this->set_m_TimerState_2(3);
		return;
	}
}
// System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * TimerNode_get_Next_m3960D4407C100E026C6F7EF316B07F8BB2C26517 (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, const RuntimeMethod* method)
{
	{
		TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_0 = __this->get_next_6();
		return L_0;
	}
}
// System.Void System.Net.TimerThread/TimerNode::set_Next(System.Net.TimerThread/TimerNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerNode_set_Next_m0C74401BC133D94AEDB40E1CB0A24F2C1F52FC68 (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * ___value0, const RuntimeMethod* method)
{
	{
		TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_0 = ___value0;
		__this->set_next_6(L_0);
		return;
	}
}
// System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * TimerNode_get_Prev_m6A2D3FA9F1ED71F25B05D72A81DB7A8B368AAA62 (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, const RuntimeMethod* method)
{
	{
		TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_0 = __this->get_prev_7();
		return L_0;
	}
}
// System.Void System.Net.TimerThread/TimerNode::set_Prev(System.Net.TimerThread/TimerNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerNode_set_Prev_m3D69D7AED0406834FFFFBE21804DF522B8FB14B6 (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * ___value0, const RuntimeMethod* method)
{
	{
		TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_0 = ___value0;
		__this->set_prev_7(L_0);
		return;
	}
}
// System.Boolean System.Net.TimerThread/TimerNode::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimerNode_Cancel_m6EB166DFE1E2E01BBBAA1FA4C35457DB111D951B (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_m_TimerState_2();
		if (L_0)
		{
			goto IL_0076;
		}
	}
	{
		RuntimeObject * L_1 = __this->get_m_QueueLock_5();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			int32_t L_3 = __this->get_m_TimerState_2();
			if (L_3)
			{
				goto IL_006a;
			}
		}

IL_0021:
		{
			TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_4;
			L_4 = TimerNode_get_Next_m3960D4407C100E026C6F7EF316B07F8BB2C26517_inline(__this, /*hidden argument*/NULL);
			TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_5;
			L_5 = TimerNode_get_Prev_m6A2D3FA9F1ED71F25B05D72A81DB7A8B368AAA62_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_4);
			TimerNode_set_Prev_m3D69D7AED0406834FFFFBE21804DF522B8FB14B6_inline(L_4, L_5, /*hidden argument*/NULL);
			TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_6;
			L_6 = TimerNode_get_Prev_m6A2D3FA9F1ED71F25B05D72A81DB7A8B368AAA62_inline(__this, /*hidden argument*/NULL);
			TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_7;
			L_7 = TimerNode_get_Next_m3960D4407C100E026C6F7EF316B07F8BB2C26517_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_6);
			TimerNode_set_Next_m0C74401BC133D94AEDB40E1CB0A24F2C1F52FC68_inline(L_6, L_7, /*hidden argument*/NULL);
			TimerNode_set_Next_m0C74401BC133D94AEDB40E1CB0A24F2C1F52FC68_inline(__this, (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 *)NULL, /*hidden argument*/NULL);
			TimerNode_set_Prev_m3D69D7AED0406834FFFFBE21804DF522B8FB14B6_inline(__this, (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 *)NULL, /*hidden argument*/NULL);
			__this->set_m_Callback_3((Callback_t762D11D347389984D6A23378030FA60146124360 *)NULL);
			__this->set_m_Context_4(NULL);
			__this->set_m_TimerState_2(2);
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x78, FINALLY_006c);
		}

IL_006a:
		{
			IL2CPP_LEAVE(0x76, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_1;
			if (!L_8)
			{
				goto IL_0075;
			}
		}

IL_006f:
		{
			RuntimeObject * L_9 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		}

IL_0075:
		{
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x78, IL_0078)
		IL2CPP_JUMP_TBL(0x76, IL_0076)
	}

IL_0076:
	{
		return (bool)0;
	}

IL_0078:
	{
		bool L_10 = V_2;
		return L_10;
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
// System.Void System.Net.TimerThread/TimerQueue::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerQueue__ctor_m43203205D39CB2175B0E5832A359AFB952AEA9D6 (TimerQueue_tA722FEFC39AECB14D47041145F37F2C0656BC34F * __this, int32_t ___durationMilliseconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___durationMilliseconds0;
		Queue__ctor_mC89D29D512FC164F6B5A4C9FD5DE574328FC99CC(__this, L_0, /*hidden argument*/NULL);
		TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_1 = (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 *)il2cpp_codegen_object_new(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9_il2cpp_TypeInfo_var);
		TimerNode__ctor_mD6B740263A99B51737831DE7F0400AF236C5A39E(L_1, /*hidden argument*/NULL);
		__this->set_m_Timers_1(L_1);
		TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_2 = __this->get_m_Timers_1();
		TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_3 = __this->get_m_Timers_1();
		NullCheck(L_2);
		TimerNode_set_Next_m0C74401BC133D94AEDB40E1CB0A24F2C1F52FC68_inline(L_2, L_3, /*hidden argument*/NULL);
		TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_4 = __this->get_m_Timers_1();
		TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_5 = __this->get_m_Timers_1();
		NullCheck(L_4);
		TimerNode_set_Prev_m3D69D7AED0406834FFFFBE21804DF522B8FB14B6_inline(L_4, L_5, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Mono.Unity.UnityTls/unitytls_interface_struct
IL2CPP_EXTERN_C void unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshal_pinvoke(const unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD& unmarshaled, unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshaled_pinvoke& marshaled)
{
	marshaled.___UNITYTLS_INVALID_HANDLE_0 = unmarshaled.get_UNITYTLS_INVALID_HANDLE_0();
	marshaled.___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1 = unmarshaled.get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1();
	marshaled.___unitytls_errorstate_create_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_errorstate_create_2()));
	marshaled.___unitytls_errorstate_raise_error_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_errorstate_raise_error_3()));
	marshaled.___unitytls_key_get_ref_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_key_get_ref_4()));
	marshaled.___unitytls_key_parse_der_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_key_parse_der_5()));
	marshaled.___unitytls_key_parse_pem_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_key_parse_pem_6()));
	marshaled.___unitytls_key_free_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_key_free_7()));
	marshaled.___unitytls_x509_export_der_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509_export_der_8()));
	marshaled.___unitytls_x509list_get_ref_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_get_ref_9()));
	marshaled.___unitytls_x509list_get_x509_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_get_x509_10()));
	marshaled.___unitytls_x509list_create_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_create_11()));
	marshaled.___unitytls_x509list_append_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_append_12()));
	marshaled.___unitytls_x509list_append_der_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_append_der_13()));
	marshaled.___unitytls_x509list_append_pem_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_append_pem_14()));
	marshaled.___unitytls_x509list_free_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_free_15()));
	marshaled.___unitytls_x509verify_default_ca_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509verify_default_ca_16()));
	marshaled.___unitytls_x509verify_explicit_ca_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509verify_explicit_ca_17()));
	marshaled.___unitytls_tlsctx_create_server_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_create_server_18()));
	marshaled.___unitytls_tlsctx_create_client_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_create_client_19()));
	marshaled.___unitytls_tlsctx_server_require_client_authentication_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_server_require_client_authentication_20()));
	marshaled.___unitytls_tlsctx_set_certificate_callback_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_set_certificate_callback_21()));
	marshaled.___unitytls_tlsctx_set_trace_callback_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_set_trace_callback_22()));
	marshaled.___unitytls_tlsctx_set_x509verify_callback_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_set_x509verify_callback_23()));
	marshaled.___unitytls_tlsctx_set_supported_ciphersuites_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_set_supported_ciphersuites_24()));
	marshaled.___unitytls_tlsctx_get_ciphersuite_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_get_ciphersuite_25()));
	marshaled.___unitytls_tlsctx_get_protocol_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_get_protocol_26()));
	marshaled.___unitytls_tlsctx_process_handshake_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_process_handshake_27()));
	marshaled.___unitytls_tlsctx_read_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_read_28()));
	marshaled.___unitytls_tlsctx_write_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_write_29()));
	marshaled.___unitytls_tlsctx_notify_close_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_notify_close_30()));
	marshaled.___unitytls_tlsctx_free_31 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_free_31()));
	marshaled.___unitytls_random_generate_bytes_32 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_random_generate_bytes_32()));
}
IL2CPP_EXTERN_C void unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshal_pinvoke_back(const unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshaled_pinvoke& marshaled, unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t unmarshaled_UNITYTLS_INVALID_HANDLE_temp_0 = 0;
	unmarshaled_UNITYTLS_INVALID_HANDLE_temp_0 = marshaled.___UNITYTLS_INVALID_HANDLE_0;
	unmarshaled.set_UNITYTLS_INVALID_HANDLE_0(unmarshaled_UNITYTLS_INVALID_HANDLE_temp_0);
	unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  unmarshaled_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_temp_1;
	memset((&unmarshaled_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_temp_1), 0, sizeof(unmarshaled_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_temp_1));
	unmarshaled_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_temp_1 = marshaled.___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1;
	unmarshaled.set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1(unmarshaled_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_temp_1);
	unmarshaled.set_unitytls_errorstate_create_2(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7>(marshaled.___unitytls_errorstate_create_2, unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_errorstate_raise_error_3(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E>(marshaled.___unitytls_errorstate_raise_error_3, unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_key_get_ref_4(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44>(marshaled.___unitytls_key_get_ref_4, unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_key_parse_der_5(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9>(marshaled.___unitytls_key_parse_der_5, unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_key_parse_pem_6(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC>(marshaled.___unitytls_key_parse_pem_6, unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_key_free_7(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F>(marshaled.___unitytls_key_free_7, unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509_export_der_8(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC>(marshaled.___unitytls_x509_export_der_8, unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_get_ref_9(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3>(marshaled.___unitytls_x509list_get_ref_9, unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_get_x509_10(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25>(marshaled.___unitytls_x509list_get_x509_10, unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_create_11(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F>(marshaled.___unitytls_x509list_create_11, unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_append_12(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0>(marshaled.___unitytls_x509list_append_12, unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_append_der_13(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E>(marshaled.___unitytls_x509list_append_der_13, unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_append_pem_14(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E>(marshaled.___unitytls_x509list_append_pem_14, unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_free_15(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2>(marshaled.___unitytls_x509list_free_15, unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509verify_default_ca_16(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97>(marshaled.___unitytls_x509verify_default_ca_16, unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509verify_explicit_ca_17(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316>(marshaled.___unitytls_x509verify_explicit_ca_17, unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_create_server_18(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B>(marshaled.___unitytls_tlsctx_create_server_18, unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_create_client_19(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391>(marshaled.___unitytls_tlsctx_create_client_19, unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_server_require_client_authentication_20(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD>(marshaled.___unitytls_tlsctx_server_require_client_authentication_20, unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_set_certificate_callback_21(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1>(marshaled.___unitytls_tlsctx_set_certificate_callback_21, unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_set_trace_callback_22(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF>(marshaled.___unitytls_tlsctx_set_trace_callback_22, unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_set_x509verify_callback_23(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4>(marshaled.___unitytls_tlsctx_set_x509verify_callback_23, unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_set_supported_ciphersuites_24(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E>(marshaled.___unitytls_tlsctx_set_supported_ciphersuites_24, unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_get_ciphersuite_25(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4>(marshaled.___unitytls_tlsctx_get_ciphersuite_25, unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_get_protocol_26(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6>(marshaled.___unitytls_tlsctx_get_protocol_26, unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_process_handshake_27(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C>(marshaled.___unitytls_tlsctx_process_handshake_27, unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_read_28(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3>(marshaled.___unitytls_tlsctx_read_28, unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_write_29(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9>(marshaled.___unitytls_tlsctx_write_29, unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_notify_close_30(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB>(marshaled.___unitytls_tlsctx_notify_close_30, unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_free_31(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA>(marshaled.___unitytls_tlsctx_free_31, unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_random_generate_bytes_32(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD>(marshaled.___unitytls_random_generate_bytes_32, unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Mono.Unity.UnityTls/unitytls_interface_struct
IL2CPP_EXTERN_C void unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshal_pinvoke_cleanup(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mono.Unity.UnityTls/unitytls_interface_struct
IL2CPP_EXTERN_C void unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshal_com(const unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD& unmarshaled, unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshaled_com& marshaled)
{
	marshaled.___UNITYTLS_INVALID_HANDLE_0 = unmarshaled.get_UNITYTLS_INVALID_HANDLE_0();
	marshaled.___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1 = unmarshaled.get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1();
	marshaled.___unitytls_errorstate_create_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_errorstate_create_2()));
	marshaled.___unitytls_errorstate_raise_error_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_errorstate_raise_error_3()));
	marshaled.___unitytls_key_get_ref_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_key_get_ref_4()));
	marshaled.___unitytls_key_parse_der_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_key_parse_der_5()));
	marshaled.___unitytls_key_parse_pem_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_key_parse_pem_6()));
	marshaled.___unitytls_key_free_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_key_free_7()));
	marshaled.___unitytls_x509_export_der_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509_export_der_8()));
	marshaled.___unitytls_x509list_get_ref_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_get_ref_9()));
	marshaled.___unitytls_x509list_get_x509_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_get_x509_10()));
	marshaled.___unitytls_x509list_create_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_create_11()));
	marshaled.___unitytls_x509list_append_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_append_12()));
	marshaled.___unitytls_x509list_append_der_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_append_der_13()));
	marshaled.___unitytls_x509list_append_pem_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_append_pem_14()));
	marshaled.___unitytls_x509list_free_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509list_free_15()));
	marshaled.___unitytls_x509verify_default_ca_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509verify_default_ca_16()));
	marshaled.___unitytls_x509verify_explicit_ca_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_x509verify_explicit_ca_17()));
	marshaled.___unitytls_tlsctx_create_server_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_create_server_18()));
	marshaled.___unitytls_tlsctx_create_client_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_create_client_19()));
	marshaled.___unitytls_tlsctx_server_require_client_authentication_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_server_require_client_authentication_20()));
	marshaled.___unitytls_tlsctx_set_certificate_callback_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_set_certificate_callback_21()));
	marshaled.___unitytls_tlsctx_set_trace_callback_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_set_trace_callback_22()));
	marshaled.___unitytls_tlsctx_set_x509verify_callback_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_set_x509verify_callback_23()));
	marshaled.___unitytls_tlsctx_set_supported_ciphersuites_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_set_supported_ciphersuites_24()));
	marshaled.___unitytls_tlsctx_get_ciphersuite_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_get_ciphersuite_25()));
	marshaled.___unitytls_tlsctx_get_protocol_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_get_protocol_26()));
	marshaled.___unitytls_tlsctx_process_handshake_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_process_handshake_27()));
	marshaled.___unitytls_tlsctx_read_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_read_28()));
	marshaled.___unitytls_tlsctx_write_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_write_29()));
	marshaled.___unitytls_tlsctx_notify_close_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_notify_close_30()));
	marshaled.___unitytls_tlsctx_free_31 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_tlsctx_free_31()));
	marshaled.___unitytls_random_generate_bytes_32 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_unitytls_random_generate_bytes_32()));
}
IL2CPP_EXTERN_C void unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshal_com_back(const unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshaled_com& marshaled, unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t unmarshaled_UNITYTLS_INVALID_HANDLE_temp_0 = 0;
	unmarshaled_UNITYTLS_INVALID_HANDLE_temp_0 = marshaled.___UNITYTLS_INVALID_HANDLE_0;
	unmarshaled.set_UNITYTLS_INVALID_HANDLE_0(unmarshaled_UNITYTLS_INVALID_HANDLE_temp_0);
	unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  unmarshaled_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_temp_1;
	memset((&unmarshaled_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_temp_1), 0, sizeof(unmarshaled_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_temp_1));
	unmarshaled_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_temp_1 = marshaled.___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1;
	unmarshaled.set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1(unmarshaled_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_temp_1);
	unmarshaled.set_unitytls_errorstate_create_2(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7>(marshaled.___unitytls_errorstate_create_2, unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_errorstate_raise_error_3(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E>(marshaled.___unitytls_errorstate_raise_error_3, unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_key_get_ref_4(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44>(marshaled.___unitytls_key_get_ref_4, unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_key_parse_der_5(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9>(marshaled.___unitytls_key_parse_der_5, unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_key_parse_pem_6(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC>(marshaled.___unitytls_key_parse_pem_6, unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_key_free_7(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F>(marshaled.___unitytls_key_free_7, unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509_export_der_8(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC>(marshaled.___unitytls_x509_export_der_8, unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_get_ref_9(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3>(marshaled.___unitytls_x509list_get_ref_9, unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_get_x509_10(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25>(marshaled.___unitytls_x509list_get_x509_10, unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_create_11(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F>(marshaled.___unitytls_x509list_create_11, unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_append_12(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0>(marshaled.___unitytls_x509list_append_12, unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_append_der_13(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E>(marshaled.___unitytls_x509list_append_der_13, unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_append_pem_14(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E>(marshaled.___unitytls_x509list_append_pem_14, unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509list_free_15(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2>(marshaled.___unitytls_x509list_free_15, unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509verify_default_ca_16(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97>(marshaled.___unitytls_x509verify_default_ca_16, unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_x509verify_explicit_ca_17(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316>(marshaled.___unitytls_x509verify_explicit_ca_17, unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_create_server_18(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B>(marshaled.___unitytls_tlsctx_create_server_18, unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_create_client_19(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391>(marshaled.___unitytls_tlsctx_create_client_19, unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_server_require_client_authentication_20(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD>(marshaled.___unitytls_tlsctx_server_require_client_authentication_20, unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_set_certificate_callback_21(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1>(marshaled.___unitytls_tlsctx_set_certificate_callback_21, unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_set_trace_callback_22(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF>(marshaled.___unitytls_tlsctx_set_trace_callback_22, unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_set_x509verify_callback_23(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4>(marshaled.___unitytls_tlsctx_set_x509verify_callback_23, unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_set_supported_ciphersuites_24(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E>(marshaled.___unitytls_tlsctx_set_supported_ciphersuites_24, unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_get_ciphersuite_25(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4>(marshaled.___unitytls_tlsctx_get_ciphersuite_25, unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_get_protocol_26(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6>(marshaled.___unitytls_tlsctx_get_protocol_26, unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_process_handshake_27(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C>(marshaled.___unitytls_tlsctx_process_handshake_27, unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_read_28(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3>(marshaled.___unitytls_tlsctx_read_28, unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_write_29(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9>(marshaled.___unitytls_tlsctx_write_29, unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_notify_close_30(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB>(marshaled.___unitytls_tlsctx_notify_close_30, unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_tlsctx_free_31(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA>(marshaled.___unitytls_tlsctx_free_31, unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA_il2cpp_TypeInfo_var));
	unmarshaled.set_unitytls_random_generate_bytes_32(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD>(marshaled.___unitytls_random_generate_bytes_32, unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Mono.Unity.UnityTls/unitytls_interface_struct
IL2CPP_EXTERN_C void unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshal_com_cleanup(unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshaled_com& marshaled)
{
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_interface_struct__ctor_m55B3993F42779B4442042D897FAFEC6C978012AD (unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(const unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8& unmarshaled, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled)
{
	marshaled.___read_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_read_0()));
	marshaled.___write_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_write_1()));
	marshaled.___data_2 = unmarshaled.get_data_2();
}
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_back(const unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_read_0(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E>(marshaled.___read_0, unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E_il2cpp_TypeInfo_var));
	unmarshaled.set_write_1(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A>(marshaled.___write_1, unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A_il2cpp_TypeInfo_var));
	unmarshaled.set_data_2(marshaled.___data_2);
}
// Conversion method for clean up from marshalling of: Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_com(const unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8& unmarshaled, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_com& marshaled)
{
	marshaled.___read_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_read_0()));
	marshaled.___write_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_write_1()));
	marshaled.___data_2 = unmarshaled.get_data_2();
}
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_com_back(const unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_com& marshaled, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_read_0(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E>(marshaled.___read_0, unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E_il2cpp_TypeInfo_var));
	unmarshaled.set_write_1(il2cpp_codegen_marshal_function_ptr_to_delegate<unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A>(marshaled.___write_1, unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A_il2cpp_TypeInfo_var));
	unmarshaled.set_data_2(marshaled.___data_2);
}
// Conversion method for clean up from marshalling of: Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_com_cleanup(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_com& marshaled)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC (unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * __this, void* ___userData0, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 * ___caList4, intptr_t ___caListLen5, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D * ___chain6, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 * ___key7, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState8, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 *, intptr_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D *, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___userData0, ___ctx1, ___cn2, ___cnLen3, ___caList4, ___caListLen5, ___chain6, ___key7, ___errorState8);

}
// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_certificate_callback__ctor_mE30600E8B0DC15C286BEBDE36DB7CF0A5DC806A3 (unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_certificate_callback_Invoke_m536C2AF2B9CF109A6014DFF45D3691EF04A56919 (unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * __this, void* ___userData0, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 * ___caList4, intptr_t ___caListLen5, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D * ___chain6, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 * ___key7, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState8, const RuntimeMethod* method)
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
			if (___parameterCount == 9)
			{
				// open
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 *, intptr_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D *, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___userData0, ___ctx1, ___cn2, ___cnLen3, ___caList4, ___caListLen5, ___chain6, ___key7, ___errorState8, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 *, intptr_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D *, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___ctx1, ___cn2, ___cnLen3, ___caList4, ___caListLen5, ___chain6, ___key7, ___errorState8, targetMethod);
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
						GenericInterfaceActionInvoker9< void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 *, intptr_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D *, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___userData0, ___ctx1, ___cn2, ___cnLen3, ___caList4, ___caListLen5, ___chain6, ___key7, ___errorState8);
					else
						GenericVirtActionInvoker9< void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 *, intptr_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D *, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___userData0, ___ctx1, ___cn2, ___cnLen3, ___caList4, ___caListLen5, ___chain6, ___key7, ___errorState8);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker9< void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 *, intptr_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D *, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___userData0, ___ctx1, ___cn2, ___cnLen3, ___caList4, ___caListLen5, ___chain6, ___key7, ___errorState8);
					else
						VirtActionInvoker9< void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 *, intptr_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D *, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___userData0, ___ctx1, ___cn2, ___cnLen3, ___caList4, ___caListLen5, ___chain6, ___key7, ___errorState8);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 *, intptr_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D *, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___userData0, ___ctx1, ___cn2, ___cnLen3, ___caList4, ___caListLen5, ___chain6, ___key7, ___errorState8, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 *, intptr_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D *, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___ctx1, ___cn2, ___cnLen3, ___caList4, ___caListLen5, ___chain6, ___key7, ___errorState8, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_certificate_callback_BeginInvoke_m7A678B70786434002434B2C15E17F0E642FC9606 (unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * __this, void* ___userData0, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 * ___caList4, intptr_t ___caListLen5, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D * ___chain6, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 * ___key7, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState8, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback9, RuntimeObject * ___object10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[10] = {0};
	__d_args[0] = ___userData0;
	__d_args[1] = ___ctx1;
	__d_args[2] = ___cn2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen3);
	__d_args[4] = ___caList4;
	__d_args[5] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___caListLen5);
	__d_args[6] = ___chain6;
	__d_args[7] = ___key7;
	__d_args[8] = ___errorState8;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback9, (RuntimeObject*)___object10);;
}
// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_certificate_callback_EndInvoke_m55CDFC75FB80F60044FFE4FA6939252C2A01FD7B (unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E (unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * __this, void* ___userData0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___userData0, ___buffer1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_read_callback__ctor_m42EC0545CBCEE38C403A2AD81C2A951A18536317 (unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::Invoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_read_callback_Invoke_m10194359ED6B21DAC2865817902E27D036864332 (unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * __this, void* ___userData0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___userData0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< intptr_t, void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___userData0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___userData0, ___buffer1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___userData0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___userData0, ___buffer1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___userData0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::BeginInvoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_read_callback_BeginInvoke_m500B1F505ACCCE25672F6C4112379D824CA20B21 (unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * __this, void* ___userData0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___userData0;
	__d_args[1] = ___buffer1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_read_callback_EndInvoke_m5F3AE9D02E36D788A768006CF41CE166C3B1029A (unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B (unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * __this, void* ___userData0, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx1, uint8_t* ___traceMessage2, intptr_t ___traceMessageLen3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___userData0, ___ctx1, ___traceMessage2, ___traceMessageLen3);

}
// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_trace_callback__ctor_m5AAAAE3312A549267BC7A177CE9298C31B9FE6CD (unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_trace_callback_Invoke_m9A667101357751D33683A21B461FA7EF0C8A9B9C (unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * __this, void* ___userData0, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx1, uint8_t* ___traceMessage2, intptr_t ___traceMessageLen3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___userData0, ___ctx1, ___traceMessage2, ___traceMessageLen3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___ctx1, ___traceMessage2, ___traceMessageLen3, targetMethod);
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
						GenericInterfaceActionInvoker4< void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t >::Invoke(targetMethod, targetThis, ___userData0, ___ctx1, ___traceMessage2, ___traceMessageLen3);
					else
						GenericVirtActionInvoker4< void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t >::Invoke(targetMethod, targetThis, ___userData0, ___ctx1, ___traceMessage2, ___traceMessageLen3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___userData0, ___ctx1, ___traceMessage2, ___traceMessageLen3);
					else
						VirtActionInvoker4< void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___userData0, ___ctx1, ___traceMessage2, ___traceMessageLen3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___userData0, ___ctx1, ___traceMessage2, ___traceMessageLen3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___ctx1, ___traceMessage2, ___traceMessageLen3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_trace_callback_BeginInvoke_mEA1F9A679A167E7758686CE4B73A60E8D316010F (unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * __this, void* ___userData0, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx1, uint8_t* ___traceMessage2, intptr_t ___traceMessageLen3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___userData0;
	__d_args[1] = ___ctx1;
	__d_args[2] = ___traceMessage2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___traceMessageLen3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_trace_callback_EndInvoke_m7B34BE12F355DE949608742051B4F0E047D02487 (unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A (unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * __this, void* ___userData0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___userData0, ___data1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_write_callback__ctor_m4A3B6C97ADCDE640A6D51BEBF956FE89CE7FE06E (unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::Invoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_write_callback_Invoke_mE4D37080BCB02702B715781D34FD5EB30816E87E (unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * __this, void* ___userData0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___userData0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< intptr_t, void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___userData0, ___data1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___userData0, ___data1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___userData0, ___data1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___userData0, ___data1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___userData0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::BeginInvoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_write_callback_BeginInvoke_m56D8E3602D68CCF6F84B1241B4046230ECE9EB17 (unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * __this, void* ___userData0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___userData0;
	__d_args[1] = ___data1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_write_callback_EndInvoke_mF45640F3BD3B119F178FDDEAC7202B0084762C13 (unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC (unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * __this, void* ___userData0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___userData0, ___chain1, ___errorState2);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_x509verify_callback__ctor_mD102129FAC6B05E4B4454B322E0DE2E7BFB16B9F (unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_x509verify_callback_Invoke_mE24F745E1914200CEB53E4489DA7CD2072B46AEC (unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * __this, void* ___userData0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___userData0, ___chain1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___chain1, ___errorState2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< uint32_t, void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___userData0, ___chain1, ___errorState2);
					else
						result = GenericVirtFuncInvoker3< uint32_t, void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___userData0, ___chain1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< uint32_t, void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___userData0, ___chain1, ___errorState2);
					else
						result = VirtFuncInvoker3< uint32_t, void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___userData0, ___chain1, ___errorState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___userData0, ___chain1, ___errorState2, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___chain1, ___errorState2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_x509verify_callback_BeginInvoke_m96C1493D382DB98D0FDF62000704BA32B7C51F4B (unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * __this, void* ___userData0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___userData0;
	__d_args[1] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___chain1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_x509verify_callback_EndInvoke_mC445AA50EA5722909B9D24D543DB945654233729 (unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
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
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C (unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * __this, void* ___userData0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, uint32_t ___result2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint32_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___userData0, ___cert1, ___result2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_x509verify_callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509verify_callback__ctor_mCD4AE44980D156BAF7B292E03B17CEE73CBFA77A (unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_callback_Invoke_mE05631A7F1E2B1C94DE9D05468D1A399449BE3DB (unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * __this, void* ___userData0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, uint32_t ___result2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
			if (___parameterCount == 4)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint32_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___userData0, ___cert1, ___result2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint32_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___cert1, ___result2, ___errorState3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< uint32_t, void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint32_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___userData0, ___cert1, ___result2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< uint32_t, void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint32_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___userData0, ___cert1, ___result2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< uint32_t, void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint32_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___userData0, ___cert1, ___result2, ___errorState3);
					else
						result = VirtFuncInvoker4< uint32_t, void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint32_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___userData0, ___cert1, ___result2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint32_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___userData0, ___cert1, ___result2, ___errorState3, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint32_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___cert1, ___result2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_x509verify_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509verify_callback_BeginInvoke_m80B588AC361E881F6B9A6A4CB1249527B5EE2D82 (unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * __this, void* ___userData0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, uint32_t ___result2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___userData0;
	__d_args[1] = Box(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var, &___cert1);
	__d_args[2] = Box(unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84_il2cpp_TypeInfo_var, &___result2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_callback_EndInvoke_m4B9E4F34C79F1DB7EEBD8CD901402D21D9897DA5 (unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
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
// System.Security.SecureString System.Net.UnsafeNclNativeMethods/SecureStringHelper::CreateSecureString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94 * SecureStringHelper_CreateSecureString_mC09D746C7B8EB41AEE8C9AB8525FBCA7C3E63D1F (String_t* ___plainString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___plainString0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___plainString0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}

IL_000b:
	{
		SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94 * L_3 = (SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94 *)il2cpp_codegen_object_new(SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94_il2cpp_TypeInfo_var);
		SecureString__ctor_mF8E66ECEFAED82FEA8BA89D9C460BC8586A36574(L_3, /*hidden argument*/NULL);
		return L_3;
	}

IL_0011:
	{
		String_t* L_4 = ___plainString0;
		V_1 = L_4;
		String_t* L_5 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_5);
		Il2CppChar* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		Il2CppChar* L_7 = V_0;
		int32_t L_8;
		L_8 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8));
	}

IL_0021:
	{
		Il2CppChar* L_9 = V_0;
		String_t* L_10 = ___plainString0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94 * L_12 = (SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94 *)il2cpp_codegen_object_new(SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94_il2cpp_TypeInfo_var);
		SecureString__ctor_mEE9D2ACBD5D7C7BD4D6F544B75C2C1D8C52D2E20(L_12, (Il2CppChar*)(Il2CppChar*)L_9, L_11, /*hidden argument*/NULL);
		V_1 = (String_t*)NULL;
		return L_12;
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
// System.Void System.Uri/MoreInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoreInfo__ctor_mF8515B2BCCB5E7DC008164794946ADE7ADBCD2BD (MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Uri/UriInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriInfo__ctor_m990C9CA368096AFE12B92F3605FAA70EC0C69BB8 (UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * __this, const RuntimeMethod* method)
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
// System.Void System.UriParser/BuiltInUriParser::.ctor(System.String,System.Int32,System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * __this, String_t* ___lwrCaseScheme0, int32_t ___defaultPort1, int32_t ___syntaxFlags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___syntaxFlags2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser__ctor_m9A2C47C1F30EF65ADFBAEB0A569FB972F383825C(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0|(int32_t)((int32_t)131072)))|(int32_t)((int32_t)262144))), /*hidden argument*/NULL);
		String_t* L_1 = ___lwrCaseScheme0;
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)__this)->set_m_Scheme_8(L_1);
		int32_t L_2 = ___defaultPort1;
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)__this)->set_m_Port_7(L_2);
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
// System.Void System.Net.WebRequest/DesignerWebRequestCreate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerWebRequestCreate__ctor_mFDCC5B7F2462FAC2DB6E7C412FE894F1B00F65AA (DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * __this, const RuntimeMethod* method)
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
// System.Net.WebProxy System.Net.WebRequest/WebProxyWrapper::get_WebProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E * WebProxyWrapper_get_WebProxy_m64E0A52B9081B75ACED10724A2805F6ECE3C89AB (WebProxyWrapper_tEF5FEF9C3A75F32ABD48893D8B1029B6DB629CEB * __this, const RuntimeMethod* method)
{
	{
		WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E * L_0 = ((WebProxyWrapperOpaque_t06FAF957BFE393A0BB04B732DB4ADE60710DFFA2 *)__this)->get_webProxy_0();
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
// System.Uri System.Net.WebRequest/WebProxyWrapperOpaque::GetProxy(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * WebProxyWrapperOpaque_GetProxy_mF87834EC1C4105EC385C9A489FD2107777F206E5 (WebProxyWrapperOpaque_t06FAF957BFE393A0BB04B732DB4ADE60710DFFA2 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___destination0, const RuntimeMethod* method)
{
	{
		WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E * L_0 = __this->get_webProxy_0();
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___destination0;
		NullCheck(L_0);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_2;
		L_2 = WebProxy_GetProxy_m8FDE265E6B9973E022EA8970C9B1DAD0B2CCC25F(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Net.WebRequest/WebProxyWrapperOpaque::IsBypassed(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebProxyWrapperOpaque_IsBypassed_m8AFC7BB3B774D3C5E8E17A88AD09EC00BFE61E2D (WebProxyWrapperOpaque_t06FAF957BFE393A0BB04B732DB4ADE60710DFFA2 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___host0, const RuntimeMethod* method)
{
	{
		WebProxy_tC96F42021301BBF649AE2A2AF8A58920F5563B6E * L_0 = __this->get_webProxy_0();
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___host0;
		NullCheck(L_0);
		bool L_2;
		L_2 = WebProxy_IsBypassed_m8F90EF89CB55CAE69CA92B25A737849F0C2B6449(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m52095CF67A4A192364C30FF8B0E17FC89BB58640 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ___mappings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * L_0 = ___mappings0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_0);
		__this->set_enumerator_0(L_1);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553 * X509CertificateEnumerator_get_Current_m073AF75A4FCD3173200FF90AB6539B9D82C9EA90 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return ((X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553 *)CastclassClass((RuntimeObject*)L_1, X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_il2cpp_TypeInfo_var));
	}
}
// System.Object System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_mBE4F1A9CE8C97F506D8F7FDA6F9C18135BA9AE15 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m2B17A1E25AB322A73AFA8E8A368A5B1968F48F71 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m5A185825A08CCA0ED7D6419FA6F6E180061B9555 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_mD24E317796AFDCEE1C381C30AEC85B5B3A486F8C (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
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
// System.Void System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyNativeHelper__ctor_m3C33DA045EB050BE747AD1E3B10DA0C350678EA7 (MyNativeHelper_t9E78ECADEC33A3AFF81DEF8E43A27DDFD5187F6D * __this, const RuntimeMethod* method)
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
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDF074FAF7DCA143BFC6A7650BE9BE6BBC4F05BE7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * L_0 = (U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 *)il2cpp_codegen_object_new(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m33CB0ED421096418F623E21D1843F088ECAE8907(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33CB0ED421096418F623E21D1843F088ECAE8907 (U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::<Set>b__4_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CSetU3Eb__4_0_m51E1DA417A30BA042DE7A4DA249E0C13FB7E32BD (U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * __this, RuntimeObject * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___s0;
		NullCheck(((TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *)CastclassClass((RuntimeObject*)L_0, TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251(((TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *)CastclassClass((RuntimeObject*)L_0, TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var)), (bool)1, /*hidden argument*/TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  DelegatePInvokeWrapper_unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, const RuntimeMethod* method)
{
	typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_create_t__ctor_m502A58FB6B55E6F5A7C23A6D0BA9A57AD5C2FC8E (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  unitytls_errorstate_create_t_Invoke_m6DF09A1CC8C5C38D78CC2E510F318571202E7087 (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, const RuntimeMethod* method)
{
	unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 0)
			{
				// open
				typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_errorstate_create_t_BeginInvoke_m103F02317D04043A6F17DBA039AC7DE10720F2B4 (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  unitytls_errorstate_create_t_EndInvoke_m1129F7E0667ABDE028F644D2F6AE39659501283F (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, uint32_t ___errorCode1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___errorState0, ___errorCode1);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_raise_error_t__ctor_mBDF3F1DBB55EBC328D0EE9A14A544A20CD076EBA (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_raise_error_t_Invoke_mB92B8CF1876FF0C9467C82918E427EBD324D8D8A (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, uint32_t ___errorCode1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorState0, ___errorCode1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, ___errorCode1, targetMethod);
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
						GenericInterfaceActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(targetMethod, targetThis, ___errorState0, ___errorCode1);
					else
						GenericVirtActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(targetMethod, targetThis, ___errorState0, ___errorCode1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorState0, ___errorCode1);
					else
						VirtActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorState0, ___errorCode1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___errorState0, ___errorCode1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, ___errorCode1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_errorstate_raise_error_t_BeginInvoke_mABE9FA2B499289353E0B756509458BB432BFED51 (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, uint32_t ___errorCode1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___errorState0;
	__d_args[1] = Box(unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89_il2cpp_TypeInfo_var, &___errorCode1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_raise_error_t_EndInvoke_mDEBE29AF3E514929895AB7971B159BAB19E4BD5D (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___key0);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_free_t__ctor_m0233235C55B3ECFECA16F0A8346E97D6ADDEC040 (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::Invoke(Mono.Unity.UnityTls/unitytls_key*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_free_t_Invoke_m4DD025ECA7C3B5020EBF702BC4BAAE8D9B3C807B (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___key0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, targetMethod);
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
						GenericInterfaceActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(targetMethod, targetThis, ___key0);
					else
						GenericVirtActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(targetMethod, targetThis, ___key0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___key0);
					else
						VirtActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___key0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___key0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_free_t_BeginInvoke_m972ED483F0CC8F99724B66019E736094D326EE29 (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___key0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_free_t_EndInvoke_m47D280EFAE1EA7E16E6400B2F47A83C408410A24 (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  DelegatePInvokeWrapper_unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (CDECL *PInvokeFunc)(unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  returnValue = il2cppPInvokeFunc(___key0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_get_ref_t__ctor_mE569EA0229BC956FD332E398F4A6ED32902EFBE3 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  unitytls_key_get_ref_t_Invoke_mE487DAB011D7F5966E09A2245399B312C2EF9111 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  result;
	memset((&result), 0, sizeof(result));
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
				typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___key0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, ___errorState1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___key0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___key0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___key0, ___errorState1);
					else
						result = VirtFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___key0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___key0, ___errorState1, targetMethod);
				}
				else
				{
					typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_get_ref_t_BeginInvoke_m6E656A4FA9FC8D6BC473D707DAFC17DF861E8A95 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  unitytls_key_get_ref_t_EndInvoke_mBE91A77CA27DE41245B333EA0C8B93EAF0325DE2 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * DelegatePInvokeWrapper_unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (CDECL *PInvokeFunc)(uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * returnValue = il2cppPInvokeFunc(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_parse_der_t__ctor_m6E905C011D2077EE54DA350886C16B2BD1EE7681 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_der_t_Invoke_m108AFDBB38B2C1AD429E957CD5BEA93D23C152E6 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * result = NULL;
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
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
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
						result = GenericInterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_parse_der_t_BeginInvoke_mD0BF42B3B39E50702EC624F2A8596D3017D0F93B (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen1);
	__d_args[2] = ___password2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___passwordLen3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_der_t_EndInvoke_mEF249023FA9DD82850CB35FBF5691B44F8023A25 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * DelegatePInvokeWrapper_unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (CDECL *PInvokeFunc)(uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * returnValue = il2cppPInvokeFunc(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_parse_pem_t__ctor_m47E001D14C6F8F11E914B1126DE9516411A2AC06 (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_pem_t_Invoke_mD4D86D5A1C3E8E9BF2BB9CC8774EB3499ED598F4 (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * result = NULL;
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
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
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
						result = GenericInterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_parse_pem_t_BeginInvoke_m0AA005FBD3649ACA89E06C9664AC4B7BE062FD7B (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen1);
	__d_args[2] = ___password2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___passwordLen3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_pem_t_EndInvoke_m564A47C1A42623E189B4792E82B007B65D1BBEF7 (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___buffer0, ___bufferLen1, ___errorState2);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_random_generate_bytes_t__ctor_m55CC9979ADA003BEFF41370469BB0A82DFAC67E8 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::Invoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_random_generate_bytes_t_Invoke_mA5EFE8A5F4D068BEC771CE12BD5BD26F9A86BB84 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___errorState2, targetMethod);
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
						GenericInterfaceActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___errorState2);
					else
						GenericVirtActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___errorState2);
					else
						VirtActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___errorState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___errorState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___errorState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::BeginInvoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_random_generate_bytes_t_BeginInvoke_m27BF16ECBD2C66644B2626E3CFC61600491E7194 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_random_generate_bytes_t_EndInvoke_m74F081B09F91875EF4AC852F58AAD04BCAC1D205 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{


	typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (CDECL *PInvokeFunc)(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___callbacks1' to native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke ____callbacks1_marshaled = {};
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(___callbacks1, ____callbacks1_marshaled);

	// Native function invocation
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * returnValue = il2cppPInvokeFunc(___supportedProtocols0, ____callbacks1_marshaled, ___cn2, ___cnLen3, ___errorState4);

	// Marshaling cleanup of parameter '___callbacks1' native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(____callbacks1_marshaled);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_create_client_t__ctor_mBEAE100CA3144364E49C2468343428FE9E19F9B6 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_client_t_Invoke_m3BABCEA6ED54FD59886B7E8685BD7BDB6145079A (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * result = NULL;
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
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
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
						result = GenericInterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (RuntimeObject*, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___supportedProtocols0) - 1), ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_create_client_t_BeginInvoke_mAF50983B4C1D6DC77B6E7A644872A95E88769D95 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var, &___supportedProtocols0);
	__d_args[1] = Box(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var, &___callbacks1);
	__d_args[2] = ___cn2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_client_t_EndInvoke_mFFC92B25698A95310EB56B6C8B82661E75D348C4 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint64_t ___certChain2, uint64_t ___leafCertificateKey3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{


	typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (CDECL *PInvokeFunc)(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke, uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___callbacks1' to native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke ____callbacks1_marshaled = {};
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(___callbacks1, ____callbacks1_marshaled);

	// Native function invocation
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * returnValue = il2cppPInvokeFunc(___supportedProtocols0, ____callbacks1_marshaled, ___certChain2, ___leafCertificateKey3, ___errorState4);

	// Marshaling cleanup of parameter '___callbacks1' native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(____callbacks1_marshaled);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_create_server_t__ctor_m444E3E5CA424BD6649C48AA2724ECABE25A6ACA7 (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_server_t_Invoke_m9BAA6CD5D7D6646AFC00AFAF4128DF92428F0F44 (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint64_t ___certChain2, uint64_t ___leafCertificateKey3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * result = NULL;
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
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
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
						result = GenericInterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (RuntimeObject*, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___supportedProtocols0) - 1), ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_create_server_t_BeginInvoke_mB600A87E8909E5FBCA2FC92239A783E345BCB5D7 (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint64_t ___certChain2, uint64_t ___leafCertificateKey3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var, &___supportedProtocols0);
	__d_args[1] = Box(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var, &___callbacks1);
	__d_args[2] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___certChain2);
	__d_args[3] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___leafCertificateKey3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_server_t_EndInvoke_mE0ED7A6AE53A54CF3479E70917D0BB2F8EC2DE3A (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_free_t__ctor_mE457D4E43F47148D44E137E6C767DCD036DB34E9 (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_free_t_Invoke_m54B2D3A510B87650E7AF041CC60A9FF44ECA9437 (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
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
						GenericInterfaceActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(targetMethod, targetThis, ___ctx0);
					else
						GenericVirtActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(targetMethod, targetThis, ___ctx0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0);
					else
						VirtActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_free_t_BeginInvoke_m4709DCB59DEDE7C1500CA164F5E304318ACB9025 (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ctx0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_free_t_EndInvoke_m016FC930E1F5CD52FF74DD4FB462C9613813F39E (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___ctx0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_get_ciphersuite_t__ctor_mE7AEF274ACD666FBA2C02F14DA38014EAD75F8E0 (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_ciphersuite_t_Invoke_mDA134EC5BFA53F4985D9D10A8D4ACB971AE6D0A1 (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
				typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						result = VirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_mA110391B7158B9BDC4F0597317AD70CDF0DF017F (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m9A477430340005FD37AFC45C377F3FBB8F60FF7D (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___ctx0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_get_protocol_t__ctor_m42F49F551071AB0F91AB7810C8DC47A2A33F1384 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_protocol_t_Invoke_m756BD8E367A9BF2872A3A2183366B5C5098A634C (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
				typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						result = VirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_get_protocol_t_BeginInvoke_mEEAFA0B27A4655BA9729136FBB2A5383151E3169 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_protocol_t_EndInvoke_mAB8A83B00C32C256F56E255EB9A683AE7924CE94 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ___errorState1);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_notify_close_t__ctor_m9FBFA390FFA5F0E59EF1652BD1F8EC4BB579D787 (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_notify_close_t_Invoke_m1DF2F894CC7D1DAC1ED86AB643EF4D9482DBDBDD (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
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
						GenericInterfaceActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						GenericVirtActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						VirtActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_notify_close_t_BeginInvoke_m73742B8B1BC173EC206ADC3CA492E3BEED2A67A1 (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_notify_close_t_EndInvoke_mD5B659727C0CAD54F05D14BD3C1A554907695F1D (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___ctx0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_process_handshake_t__ctor_m5FCC62940BECF2001364EA925FF543E1F59EBC61 (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_process_handshake_t_Invoke_mB249F948100B2752B2A6BF79C7F9038523C1C89B (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
				typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						result = VirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_process_handshake_t_BeginInvoke_m8E4E264B100447C3590366B75F7C79E75D99EAA4 (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_process_handshake_t_EndInvoke_m3144D076D4C10224C8BFF05671EBDB5F0EFA6FBB (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___ctx0, ___buffer1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_read_t__ctor_m292F01CA56EC409E7CDA69BE0AA10B19B3E20F4E (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_read_t_Invoke_m142B61FBEE88603BE95202B62762E92008324935 (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_read_t_BeginInvoke_mDE6D1E5ED970FB74D58A7C9D849D5CEF0A80066F (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___buffer1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_read_t_EndInvoke_m3BCF50CAB32A1EFADEB497D3A50694C018E285C5 (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___clientAuthCAList1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ___clientAuthCAList1, ___errorState2);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_server_require_client_authentication_t__ctor_mA41774A651C25857A72D3694EBDE91E70A408D81 (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_server_require_client_authentication_t_Invoke_mC8E06902662956294CEC4AFCF8697671E7BA3639 (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___clientAuthCAList1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
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
						GenericInterfaceActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
					else
						GenericVirtActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
					else
						VirtActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_mF93542F5F7DC74FC5042D346C0956E694F4B2479 (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___clientAuthCAList1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___clientAuthCAList1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_m8F406760E0CA52C53B0C91D7A7862119F10E3B7C (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___cb1' to native representation
	Il2CppMethodPointer ____cb1_marshaled = NULL;
	____cb1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb1));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ____cb1_marshaled, ___userData2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_certificate_callback_t__ctor_mDC0A66278594A9B37EFA6FA3010AFD64DC3E81BE (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_certificate_callback_t_Invoke_m3F334D5FFB2B3C104C1E65A04B044138CE51DFAD (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
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
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_m69D89510CE1C44BF29C88E2025C42F1ACD29605C (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___cb1;
	__d_args[2] = ___userData2;
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_certificate_callback_t_EndInvoke_mC3508D12AB7792789623E2CFAA028D214200C244 (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint32_t* ___supportedCiphersuites1, intptr_t ___supportedCiphersuitesLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_supported_ciphersuites_t__ctor_m46A364914173C343267CFDC8B61D7DF4197C6448 (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_mE7E379E36B2B4719ECF97F375682CD0DBF407F1B (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint32_t* ___supportedCiphersuites1, intptr_t ___supportedCiphersuitesLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
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
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_m03D9AE30DA07EB020A31669DC158422A593329E9 (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint32_t* ___supportedCiphersuites1, intptr_t ___supportedCiphersuitesLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___supportedCiphersuites1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___supportedCiphersuitesLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mAB41900E507484AD23583DE18E853B9B6145EF4C (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___cb1' to native representation
	Il2CppMethodPointer ____cb1_marshaled = NULL;
	____cb1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb1));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ____cb1_marshaled, ___userData2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_trace_callback_t__ctor_mAA8F0A3B039F2A5DA4EA77F6DDA2573BB5FDA80B (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_trace_callback_t_Invoke_mFC61F57B75911E4A1B08221AB854D91F5F03D476 (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
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
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m03FCD2BF1AA2571CC4F2CFF59251EFA20421F156 (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___cb1;
	__d_args[2] = ___userData2;
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_trace_callback_t_EndInvoke_m07BE3163185F6B3B1D299589E648F7C571D324FE (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___cb1' to native representation
	Il2CppMethodPointer ____cb1_marshaled = NULL;
	____cb1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb1));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ____cb1_marshaled, ___userData2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_x509verify_callback_t__ctor_m78790E0190264955C6B51F3ACCAAA2C02FC1CB52 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_x509verify_callback_t_Invoke_m81E1B51C444B1074314AD55C22EC20E6AD8FA476 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
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
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mA488C207261DAA26D3D5A81F3549B9B058382DD2 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___cb1;
	__d_args[2] = ___userData2;
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_m8BDF1F043AA55E4FAA727E67B544440ED316ED18 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___ctx0, ___data1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_write_t__ctor_m300C5AEFDFE22C96322EABE38FD2CA962350D96B (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_write_t_Invoke_m4365C50B81B1904232514233B8252D15E3059416 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_write_t_BeginInvoke_m7DEACE7853FE244D613A77ABEC04AC821B31F503 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___data1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_write_t_EndInvoke_mE16B80B19C507E3EDF89DA7971AB267BACDC5E86 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___cert0, ___buffer1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509_export_der_t__ctor_m4514C241AC221F91BBB088FF1DC31B342DCA7397 (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_x509_export_der_t_Invoke_mFA1224BE85A73019C32C3CB0E8ABD7E5BFEFFA82 (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cert0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___cert0) - 1), ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509_export_der_t_BeginInvoke_m315A20FF03D9FD6B82A9A3997267A4E4B72B8D05 (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var, &___cert0);
	__d_args[1] = ___buffer1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_x509_export_der_t_EndInvoke_m660B809820CF47708B4DB7EBDF618AB34B70242E (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___list0, ___buffer1, ___bufferLen2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_der_t__ctor_m814A959A92E1D413C2AB5BE0E8920318D52C8F3F (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_der_t_Invoke_mA432486D4A73BB7FC4DFE3DD02205FE4C0AB9066 (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
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
						GenericInterfaceActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_append_der_t_BeginInvoke_mFC163657F9DBE3408CE9FBD94C0E0D672099618D (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___list0;
	__d_args[1] = ___buffer1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_der_t_EndInvoke_m6002A55859F4C9DCF95DEBADC867E85E33DEF36E (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___list0, ___cert1, ___errorState2);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_t__ctor_m264F31493E6C24EF19C6560237F1DFB0522195C2 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_t_Invoke_m85E010BA75CBBCC9B32C8A6C685E4F2CCFB69300 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___list0, ___cert1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___cert1, ___errorState2, targetMethod);
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
						GenericInterfaceActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___cert1, ___errorState2);
					else
						GenericVirtActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___cert1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___cert1, ___errorState2);
					else
						VirtActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___cert1, ___errorState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___list0, ___cert1, ___errorState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___cert1, ___errorState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_append_t_BeginInvoke_m3A87AAC9A120A76CEC99B52A91B43739A74D097F (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___list0;
	__d_args[1] = Box(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var, &___cert1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_t_EndInvoke_m06BB61716750C77C7D19DF3A10628680899382C9 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * DelegatePInvokeWrapper_unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, const RuntimeMethod* method)
{
	typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (CDECL *PInvokeFunc)(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * returnValue = il2cppPInvokeFunc(___errorState0);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_create_t__ctor_m396CBCF6F413041E9FB829BCF12DBB71160E0CC5 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * unitytls_x509list_create_t_Invoke_m3A52B8B8AC08AA77CEDD34817D2C15209130A1F1 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, const RuntimeMethod* method)
{
	unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * result = NULL;
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
				typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___errorState0, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___errorState0);
					else
						result = GenericVirtFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___errorState0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorState0);
					else
						result = VirtFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorState0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___errorState0, targetMethod);
				}
				else
				{
					typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_create_t_BeginInvoke_m85BD25215C3E215460E132F10110223FED5C7CA2 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___errorState0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * unitytls_x509list_create_t_EndInvoke_m4D70BD363D9EA21E21E73C6705E62955477CB3B0 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___list0);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_free_t__ctor_m360A7960A558BFF26B537EE2717CE4FF60612EBE (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_free_t_Invoke_m5F920A1A43E549E297391F2033A04AF8C05A3C4C (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___list0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, targetMethod);
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
						GenericInterfaceActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(targetMethod, targetThis, ___list0);
					else
						GenericVirtActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(targetMethod, targetThis, ___list0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0);
					else
						VirtActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___list0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_free_t_BeginInvoke_m43DF55CE129363751C545897CF317FAD1D7BFA1A (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___list0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_free_t_EndInvoke_m2EAAE00B58B3922A632D13E4DFA3DD737D971916 (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  returnValue = il2cppPInvokeFunc(___list0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_get_ref_t__ctor_m672FA9C9A5170D460A7D9839E786559819DB8459 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  unitytls_x509list_get_ref_t_Invoke_mFADB5F4BCB29A18DD0BD689EA8180D74CD9E4E63 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  result;
	memset((&result), 0, sizeof(result));
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
				typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___list0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___errorState1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___errorState1);
					else
						result = VirtFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___list0, ___errorState1, targetMethod);
				}
				else
				{
					typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_get_ref_t_BeginInvoke_m282E11FB630DFD9FAA07EE42FA460C10AD6A7915 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___list0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  unitytls_x509list_get_ref_t_EndInvoke_mF4CA76D68207C44E63DA55C4C4208576998D5AE0 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___list0, intptr_t ___index1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  returnValue = il2cppPInvokeFunc(___list0, ___index1, ___errorState2);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_get_x509_t__ctor_mE5676A42AAAE07337AB42C51E139736482AD3FCC (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  unitytls_x509list_get_x509_t_Invoke_m58A02DBC5C5C9A0C693DFDE3BEBCE8518C5BEDFE (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___list0, intptr_t ___index1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  result;
	memset((&result), 0, sizeof(result));
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
				typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___list0, ___index1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___index1, ___errorState2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___index1, ___errorState2);
					else
						result = GenericVirtFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___index1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___index1, ___errorState2);
					else
						result = VirtFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___index1, ___errorState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (RuntimeObject*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___list0) - 1), ___index1, ___errorState2, targetMethod);
				}
				else
				{
					typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___index1, ___errorState2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_get_x509_t_BeginInvoke_m5B76F36D52C182CFB7B62AA43C3E159E7E7DB468 (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___list0, intptr_t ___index1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___list0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  unitytls_x509list_get_x509_t_EndInvoke_m6AFA7951802ED216C9EB13AAA7A5C707F7289F41 (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___cb3' to native representation
	Il2CppMethodPointer ____cb3_marshaled = NULL;
	____cb3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb3));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___chain0, ___cn1, ___cnLen2, ____cb3_marshaled, ___userData4, ___errorState5);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509verify_default_ca_t__ctor_m87E8CBD1080B32E3E9B2085435089120EE8E7B51 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_default_ca_t_Invoke_m22C2DE021D3D750655FFEF54BE2B030596F1A82E (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
			if (___parameterCount == 6)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
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
						result = GenericInterfaceFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
					else
						result = GenericVirtFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
					else
						result = VirtFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___chain0) - 1), ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___chain0);
	__d_args[1] = ___cn1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen2);
	__d_args[3] = ___cb3;
	__d_args[4] = ___userData4;
	__d_args[5] = ___errorState5;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_default_ca_t_EndInvoke_m4D26A5425526F6A205596F7AE025620E74173282 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___cb4' to native representation
	Il2CppMethodPointer ____cb4_marshaled = NULL;
	____cb4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb4));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___chain0, ___trustCA1, ___cn2, ___cnLen3, ____cb4_marshaled, ___userData5, ___errorState6);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509verify_explicit_ca_t__ctor_m27337465175BADAB82BFF9333ADA82DCF2DFD2A3 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_explicit_ca_t_Invoke_m56F009ABDD7ED613CB6AC27AF8CAD6E6FB34555B (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
			if (___parameterCount == 7)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
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
						result = GenericInterfaceFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
					else
						result = GenericVirtFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
					else
						result = VirtFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___chain0) - 1), ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback7, RuntimeObject * ___object8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[8] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___chain0);
	__d_args[1] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___trustCA1);
	__d_args[2] = ___cn2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen3);
	__d_args[4] = ___cb4;
	__d_args[5] = ___userData5;
	__d_args[6] = ___errorState6;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_explicit_ca_t_EndInvoke_mC69D3C3E3F677940005907387BF6A51758A67968 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * IOAsyncResult_get_AsyncCallback_m28F2ACED98F5AA2F05882EAD17000A26FA3DD5BD_inline (IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9 * __this, const RuntimeMethod* method)
{
	{
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_0 = __this->get_async_callback_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * TimerNode_get_Next_m3960D4407C100E026C6F7EF316B07F8BB2C26517_inline (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, const RuntimeMethod* method)
{
	{
		TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_0 = __this->get_next_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * TimerNode_get_Prev_m6A2D3FA9F1ED71F25B05D72A81DB7A8B368AAA62_inline (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, const RuntimeMethod* method)
{
	{
		TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_0 = __this->get_prev_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimerNode_set_Prev_m3D69D7AED0406834FFFFBE21804DF522B8FB14B6_inline (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * ___value0, const RuntimeMethod* method)
{
	{
		TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_0 = ___value0;
		__this->set_prev_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimerNode_set_Next_m0C74401BC133D94AEDB40E1CB0A24F2C1F52FC68_inline (TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * __this, TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * ___value0, const RuntimeMethod* method)
{
	{
		TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * L_0 = ___value0;
		__this->set_next_6(L_0);
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
