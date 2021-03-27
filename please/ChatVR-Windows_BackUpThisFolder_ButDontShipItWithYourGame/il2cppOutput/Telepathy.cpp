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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.ArraySegment`1<System.Byte>>
struct Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>
struct Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState>
struct ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>
struct ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Func`1<System.Byte[]>
struct Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Telepathy.ConnectionState>>
struct IEnumerator_1_t74D7778F7B4047C4337500866378BB06C07F3608;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_tAB5DF652A36FB48E9530C4C341616C66F406C205;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0;
// Telepathy.Pool`1<System.Byte[]>
struct Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39;
// Telepathy.Pool`1<System.Object>
struct Pool_1_t1646BCD6AED1FA41AF8FE5A4B8A4D90D37617B93;
// System.Collections.Generic.Queue`1<System.ArraySegment`1<System.Byte>>
struct Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4;
// System.Collections.Generic.Queue`1<Telepathy.MagnificentReceivePipe/Entry>
struct Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C;
// System.Collections.Generic.Stack`1<System.Byte[]>
struct Stack_1_t425968BF1DC5BEA55A24F6C20C83EEBE8CD56D72;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Int32,Telepathy.ConnectionState>
struct Tables_t52A2CDA03BA9EE9E8D79FF749265908507460036;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2;
// System.ArraySegment`1<System.Byte>[]
struct ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1;
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
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// Telepathy.MagnificentReceivePipe/Entry[]
struct EntryU5BU5D_tB87FCAD197B23BD85BE99FDE058B915C9F9B3333;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Telepathy.Client
struct Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929;
// Telepathy.ClientConnectionState
struct ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A;
// Telepathy.Common
struct Common_t25B06616A1695440B39152B4C426E18441C11E0F;
// Telepathy.ConnectionState
struct ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.IOAsyncCallback
struct IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// Telepathy.MagnificentReceivePipe
struct MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A;
// Telepathy.MagnificentSendPipe
struct MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Telepathy.Server
struct Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.String
struct String_t;
// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE;
// System.Net.Sockets.TcpListener
struct TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Telepathy.Client/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0;
// Telepathy.Client/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000;
// Telepathy.MagnificentReceivePipe/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E;
// Telepathy.MagnificentSendPipe/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67;
// Telepathy.Server/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8;
// Telepathy.Server/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t74D7778F7B4047C4337500866378BB06C07F3608_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadInterruptedException_t79671BFC28D9946768F83A1CFE78A2D586FF02DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral21102DCAC41D97FC99CF6E7EB9947B2EBAEA391F;
IL2CPP_EXTERN_C String_t* _stringLiteral29EFA7B69EABF3CC848F04677350EBCCB484032A;
IL2CPP_EXTERN_C String_t* _stringLiteral2AE2ACB37456009F51EE9603197B18190A476313;
IL2CPP_EXTERN_C String_t* _stringLiteral31B976D9EE49F9283B64341353242A9A99DFBEEE;
IL2CPP_EXTERN_C String_t* _stringLiteral3ACF6FCEFF27E0E008244F2287C14419F3511FB0;
IL2CPP_EXTERN_C String_t* _stringLiteral40FE124641630DD87D55A00B1E3EAF61E8E7780A;
IL2CPP_EXTERN_C String_t* _stringLiteral484D794F5E31CB1BBFD2C636C2C877C245206317;
IL2CPP_EXTERN_C String_t* _stringLiteral4D87D9F561182AA5628B8C78869C5C1AE33F0A33;
IL2CPP_EXTERN_C String_t* _stringLiteral51535E9E0618B351605C1CDB183CE725D2F1B60E;
IL2CPP_EXTERN_C String_t* _stringLiteral626A3E746B6E32152C851059C39BAEC2F818FB3A;
IL2CPP_EXTERN_C String_t* _stringLiteral669E9BBF3EAA6140D2DBE7CB48975026F4D7CCBA;
IL2CPP_EXTERN_C String_t* _stringLiteral78BDF721B11718576BCF4DDEE144119DECDF4AE4;
IL2CPP_EXTERN_C String_t* _stringLiteral8020C7D6696CB083F06538A14CF53AFC87D4339B;
IL2CPP_EXTERN_C String_t* _stringLiteral813C2ECFD392D8A25AA9609C2EC1761E004EFE10;
IL2CPP_EXTERN_C String_t* _stringLiteral836FAE3C06390C4BBEF008C97F59F519B064497E;
IL2CPP_EXTERN_C String_t* _stringLiteral8CA3CC30341FE08793C351B1C0039EFB12120E14;
IL2CPP_EXTERN_C String_t* _stringLiteral98EE6E14CEF56B68F3183A39F05EC0777156FAF0;
IL2CPP_EXTERN_C String_t* _stringLiteral9E9CE304B35E2CD4EF8C65E2BBD168076BF916D5;
IL2CPP_EXTERN_C String_t* _stringLiteralA00A6ED1079D9BFA0747625B3DBAEAB49075A9D7;
IL2CPP_EXTERN_C String_t* _stringLiteralB6B2741769240CC9F111B4E04526A7EDDE77A6C0;
IL2CPP_EXTERN_C String_t* _stringLiteralCBF8BC4445DEB11C67334B09A3C41A9B4A645C23;
IL2CPP_EXTERN_C String_t* _stringLiteralD3A624088023A31556B10B57409D536C3E2A116C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE64F27DAAE1FDC81CF78186606BC10DE95BABDF6;
IL2CPP_EXTERN_C String_t* _stringLiteralF072B52AC71CF6BCF88EC9DF612A623689ACFB98;
IL2CPP_EXTERN_C String_t* _stringLiteralF2ED48CD8488ED3A461DA6ACAB12DDF5260E04C5;
IL2CPP_EXTERN_C String_t* _stringLiteralF3020C29380E843AD920758CE3613F4BE5BCFD87;
IL2CPP_EXTERN_C String_t* _stringLiteralF47863D6E0039D41ADF771D5253F35FCA7A40C28;
IL2CPP_EXTERN_C String_t* _stringLiteralF897DA240CE2C2852CEAB4B37E66C1E8CE1D8AD8;
IL2CPP_EXTERN_C String_t* _stringLiteralFDFC5CBF78D03E067790E29C6CC8F27728A30511;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7B19C839E4C4AD2BC5C8FAB158F1CF1D6418AA1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m3D02394ECBF316363B0F50E1E87C04D7528A3E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_op_Inequality_m2F90ABA72EF71FE141BF71C4F7C2F846ED2E731B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_Clear_m4196F44C1E797FD8491DD130AB9F725A16061072_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_GetEnumerator_m628A891D7FCF964651EA598577A19B1EFA1DA9BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryGetValue_mFEBC23184243F46C7667CA276CC64C9D47F32BF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryRemove_m46BF6604C7479BEB47BD7CA56C763CC81DB249E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_mB0C6B9E90794FD880C16BDE1ABA6F52C5B2A79B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_set_Item_mBD7D9EDD0293D5A4D2E77FF7B96A3F06CE7BFFDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mEAA586B68A7660037EF19DCF316D8FD5D4022F0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4F7BB11ED74CD6DF99B42C5C5484129FAF2F9775_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE4BEA0773ADA5A1CAB7977446BDC1E04CE6975C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9CA2D285192F3AF382389E262B7D5F6F77F99036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m75C930823750A53153FBC8864D8A23F358DCDD20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m107A9CFD0B121D3E893954D086D9F08B0DD4F5B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Count_m4940060DD24E59DD092158C641EF54F1476FF284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Take_mDC4AF2F4C3E9438AAAD417AD214D7C78D0BA48E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1__ctor_mC367B78EB39E8FF89828BD95C3BEF3C381414F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m05843BEC6CCB4AD88FD9A9F531DDD1B567B4F88B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m38F63C3D300A64F3CB91DED21522E2912E50BDDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m0220CD9EDED8E6F2081915E74EA5B9487C1D2F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m4D8253DFB768E660DC1837D52215DF4BB395E739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_mA6FBE44FE39BB9863857A199C57579B49243FF4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m799C1CD892CA37A6507A3AEC75EB5226B2026F79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m0212006746FE3014D720FE2A2DBBCE0A8F06CDC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m115E087F9E4EE8AA3564F7F7F3403044EBBA84E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Server_NextConnectionId_mF1604F268FEE0CC873D00C5F30E8BA6770DF8794_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CReceiveThreadFunctionU3Eb__0_mA1DC9043BF26BB120485CA7A0B050BED098803FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CConnectU3Eb__0_mDC4E2503DCD271D653F9610016D53B5A6F8B6BEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CListenU3Eb__0_m577EAE6F290DBAA34C42068DD7C8A7BF7F41852B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CListenU3Eb__1_mB10F77EA316724A661A95F91B429363953624CE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CStartU3Eb__0_m467C29EFA344D22A0604003AFF3645327282148C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m054A7D34BDA35D2A9B6B3D49E81AD7944A785D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m61D2B9F399559F6E86E0D6BB90951C9F28CA6A1A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t82EB68D7CC1069C1EB930D54D8D0388C6D063DA9 
{
public:

public:
};


// System.Object


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState>
struct  ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t52A2CDA03BA9EE9E8D79FF749265908507460036 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487, ____tables_0)); }
	inline Tables_t52A2CDA03BA9EE9E8D79FF749265908507460036 * get__tables_0() const { return ____tables_0; }
	inline Tables_t52A2CDA03BA9EE9E8D79FF749265908507460036 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t52A2CDA03BA9EE9E8D79FF749265908507460036 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_6;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_6() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487_StaticFields, ___s_isValueWriteAtomic_6)); }
	inline bool get_s_isValueWriteAtomic_6() const { return ___s_isValueWriteAtomic_6; }
	inline bool* get_address_of_s_isValueWriteAtomic_6() { return &___s_isValueWriteAtomic_6; }
	inline void set_s_isValueWriteAtomic_6(bool value)
	{
		___s_isValueWriteAtomic_6 = value;
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* ___entries_1;
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
	KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___entries_1)); }
	inline EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___keys_7)); }
	inline KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___values_8)); }
	inline ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// Telepathy.Pool`1<System.Byte[]>
struct  Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> Telepathy.Pool`1::objects
	Stack_1_t425968BF1DC5BEA55A24F6C20C83EEBE8CD56D72 * ___objects_0;
	// System.Func`1<T> Telepathy.Pool`1::objectGenerator
	Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * ___objectGenerator_1;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39, ___objects_0)); }
	inline Stack_1_t425968BF1DC5BEA55A24F6C20C83EEBE8CD56D72 * get_objects_0() const { return ___objects_0; }
	inline Stack_1_t425968BF1DC5BEA55A24F6C20C83EEBE8CD56D72 ** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(Stack_1_t425968BF1DC5BEA55A24F6C20C83EEBE8CD56D72 * value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_objectGenerator_1() { return static_cast<int32_t>(offsetof(Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39, ___objectGenerator_1)); }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * get_objectGenerator_1() const { return ___objectGenerator_1; }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 ** get_address_of_objectGenerator_1() { return &___objectGenerator_1; }
	inline void set_objectGenerator_1(Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * value)
	{
		___objectGenerator_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectGenerator_1), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.ArraySegment`1<System.Byte>>
struct  Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* ____array_0;
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
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4, ____array_0)); }
	inline ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* get__array_0() const { return ____array_0; }
	inline ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<Telepathy.MagnificentReceivePipe/Entry>
struct  Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	EntryU5BU5D_tB87FCAD197B23BD85BE99FDE058B915C9F9B3333* ____array_0;
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
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C, ____array_0)); }
	inline EntryU5BU5D_tB87FCAD197B23BD85BE99FDE058B915C9F9B3333* get__array_0() const { return ____array_0; }
	inline EntryU5BU5D_tB87FCAD197B23BD85BE99FDE058B915C9F9B3333** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(EntryU5BU5D_tB87FCAD197B23BD85BE99FDE058B915C9F9B3333* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// Telepathy.ConnectionState
struct  ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1  : public RuntimeObject
{
public:
	// System.Net.Sockets.TcpClient Telepathy.ConnectionState::client
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client_0;
	// Telepathy.MagnificentSendPipe Telepathy.ConnectionState::sendPipe
	MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * ___sendPipe_1;
	// System.Threading.ManualResetEvent Telepathy.ConnectionState::sendPending
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___sendPending_2;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1, ___client_0)); }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * get_client_0() const { return ___client_0; }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE ** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_sendPipe_1() { return static_cast<int32_t>(offsetof(ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1, ___sendPipe_1)); }
	inline MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * get_sendPipe_1() const { return ___sendPipe_1; }
	inline MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C ** get_address_of_sendPipe_1() { return &___sendPipe_1; }
	inline void set_sendPipe_1(MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * value)
	{
		___sendPipe_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendPipe_1), (void*)value);
	}

	inline static int32_t get_offset_of_sendPending_2() { return static_cast<int32_t>(offsetof(ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1, ___sendPending_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_sendPending_2() const { return ___sendPending_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_sendPending_2() { return &___sendPending_2; }
	inline void set_sendPending_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___sendPending_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendPending_2), (void*)value);
	}
};


// System.Console
struct  Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07  : public RuntimeObject
{
public:

public:
};

struct Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D * ___cancel_event_5;
	// System.Console/InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 * ___cancel_handler_6;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___stdout_0)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdout_0), (void*)value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___stderr_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stderr_1), (void*)value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___stdin_2)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdin_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___inputEncoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEncoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___outputEncoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputEncoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_event_5() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___cancel_event_5)); }
	inline ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D * get_cancel_event_5() const { return ___cancel_event_5; }
	inline ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D ** get_address_of_cancel_event_5() { return &___cancel_event_5; }
	inline void set_cancel_event_5(ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D * value)
	{
		___cancel_event_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_event_5), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_handler_6() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___cancel_handler_6)); }
	inline InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 * get_cancel_handler_6() const { return ___cancel_handler_6; }
	inline InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 ** get_address_of_cancel_handler_6() { return &___cancel_handler_6; }
	inline void set_cancel_handler_6(InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 * value)
	{
		___cancel_handler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_handler_6), (void*)value);
	}
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Net.EndPoint
struct  EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA  : public RuntimeObject
{
public:

public:
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


// Telepathy.MagnificentReceivePipe
struct  MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<Telepathy.MagnificentReceivePipe/Entry> Telepathy.MagnificentReceivePipe::queue
	Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * ___queue_0;
	// Telepathy.Pool`1<System.Byte[]> Telepathy.MagnificentReceivePipe::pool
	Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * ___pool_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Telepathy.MagnificentReceivePipe::queueCounter
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___queueCounter_2;

public:
	inline static int32_t get_offset_of_queue_0() { return static_cast<int32_t>(offsetof(MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A, ___queue_0)); }
	inline Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * get_queue_0() const { return ___queue_0; }
	inline Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C ** get_address_of_queue_0() { return &___queue_0; }
	inline void set_queue_0(Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * value)
	{
		___queue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_0), (void*)value);
	}

	inline static int32_t get_offset_of_pool_1() { return static_cast<int32_t>(offsetof(MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A, ___pool_1)); }
	inline Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * get_pool_1() const { return ___pool_1; }
	inline Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 ** get_address_of_pool_1() { return &___pool_1; }
	inline void set_pool_1(Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * value)
	{
		___pool_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_1), (void*)value);
	}

	inline static int32_t get_offset_of_queueCounter_2() { return static_cast<int32_t>(offsetof(MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A, ___queueCounter_2)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_queueCounter_2() const { return ___queueCounter_2; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_queueCounter_2() { return &___queueCounter_2; }
	inline void set_queueCounter_2(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___queueCounter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queueCounter_2), (void*)value);
	}
};


// Telepathy.MagnificentSendPipe
struct  MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<System.ArraySegment`1<System.Byte>> Telepathy.MagnificentSendPipe::queue
	Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * ___queue_0;
	// Telepathy.Pool`1<System.Byte[]> Telepathy.MagnificentSendPipe::pool
	Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * ___pool_1;

public:
	inline static int32_t get_offset_of_queue_0() { return static_cast<int32_t>(offsetof(MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C, ___queue_0)); }
	inline Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * get_queue_0() const { return ___queue_0; }
	inline Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 ** get_address_of_queue_0() { return &___queue_0; }
	inline void set_queue_0(Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * value)
	{
		___queue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_0), (void*)value);
	}

	inline static int32_t get_offset_of_pool_1() { return static_cast<int32_t>(offsetof(MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C, ___pool_1)); }
	inline Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * get_pool_1() const { return ___pool_1; }
	inline Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 ** get_address_of_pool_1() { return &___pool_1; }
	inline void set_pool_1(Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * value)
	{
		___pool_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_1), (void*)value);
	}
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

// Telepathy.NetworkStreamExtensions
struct  NetworkStreamExtensions_t75AE64583CB8942C3F2F65E5E72FCC814B183590  : public RuntimeObject
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


// Telepathy.ThreadFunctions
struct  ThreadFunctions_t23003EB63E82F383CEBFE2B64D626A66589AA8CC  : public RuntimeObject
{
public:

public:
};


// Telepathy.Utils
struct  Utils_tF9D629626AABDBBB0898F07CEF18F6D0E7CB060B  : public RuntimeObject
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

// Telepathy.Client/<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0  : public RuntimeObject
{
public:
	// Telepathy.ClientConnectionState Telepathy.Client/<>c__DisplayClass13_0::state
	ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0, ___state_0)); }
	inline ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * get_state_0() const { return ___state_0; }
	inline ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_0), (void*)value);
	}
};


// Telepathy.Client/<>c__DisplayClass14_0
struct  U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186  : public RuntimeObject
{
public:
	// Telepathy.Client Telepathy.Client/<>c__DisplayClass14_0::<>4__this
	Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * ___U3CU3E4__this_0;
	// System.String Telepathy.Client/<>c__DisplayClass14_0::ip
	String_t* ___ip_1;
	// System.Int32 Telepathy.Client/<>c__DisplayClass14_0::port
	int32_t ___port_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186, ___U3CU3E4__this_0)); }
	inline Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_ip_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186, ___ip_1)); }
	inline String_t* get_ip_1() const { return ___ip_1; }
	inline String_t** get_address_of_ip_1() { return &___ip_1; }
	inline void set_ip_1(String_t* value)
	{
		___ip_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ip_1), (void*)value);
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}
};


// Telepathy.MagnificentReceivePipe/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E  : public RuntimeObject
{
public:
	// System.Int32 Telepathy.MagnificentReceivePipe/<>c__DisplayClass4_0::MaxMessageSize
	int32_t ___MaxMessageSize_0;

public:
	inline static int32_t get_offset_of_MaxMessageSize_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E, ___MaxMessageSize_0)); }
	inline int32_t get_MaxMessageSize_0() const { return ___MaxMessageSize_0; }
	inline int32_t* get_address_of_MaxMessageSize_0() { return &___MaxMessageSize_0; }
	inline void set_MaxMessageSize_0(int32_t value)
	{
		___MaxMessageSize_0 = value;
	}
};


// Telepathy.MagnificentSendPipe/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67  : public RuntimeObject
{
public:
	// System.Int32 Telepathy.MagnificentSendPipe/<>c__DisplayClass2_0::MaxMessageSize
	int32_t ___MaxMessageSize_0;

public:
	inline static int32_t get_offset_of_MaxMessageSize_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67, ___MaxMessageSize_0)); }
	inline int32_t get_MaxMessageSize_0() const { return ___MaxMessageSize_0; }
	inline int32_t* get_address_of_MaxMessageSize_0() { return &___MaxMessageSize_0; }
	inline void set_MaxMessageSize_0(int32_t value)
	{
		___MaxMessageSize_0 = value;
	}
};


// Telepathy.Server/<>c__DisplayClass16_0
struct  U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8  : public RuntimeObject
{
public:
	// System.Int32 Telepathy.Server/<>c__DisplayClass16_0::connectionId
	int32_t ___connectionId_0;
	// System.Net.Sockets.TcpClient Telepathy.Server/<>c__DisplayClass16_0::client
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client_1;
	// Telepathy.ConnectionState Telepathy.Server/<>c__DisplayClass16_0::connection
	ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * ___connection_2;
	// System.Threading.Thread Telepathy.Server/<>c__DisplayClass16_0::sendThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___sendThread_3;
	// Telepathy.Server Telepathy.Server/<>c__DisplayClass16_0::<>4__this
	Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * ___U3CU3E4__this_4;

public:
	inline static int32_t get_offset_of_connectionId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8, ___connectionId_0)); }
	inline int32_t get_connectionId_0() const { return ___connectionId_0; }
	inline int32_t* get_address_of_connectionId_0() { return &___connectionId_0; }
	inline void set_connectionId_0(int32_t value)
	{
		___connectionId_0 = value;
	}

	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8, ___client_1)); }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * get_client_1() const { return ___client_1; }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE ** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}

	inline static int32_t get_offset_of_connection_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8, ___connection_2)); }
	inline ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * get_connection_2() const { return ___connection_2; }
	inline ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 ** get_address_of_connection_2() { return &___connection_2; }
	inline void set_connection_2(ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * value)
	{
		___connection_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connection_2), (void*)value);
	}

	inline static int32_t get_offset_of_sendThread_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8, ___sendThread_3)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_sendThread_3() const { return ___sendThread_3; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_sendThread_3() { return &___sendThread_3; }
	inline void set_sendThread_3(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___sendThread_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendThread_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8, ___U3CU3E4__this_4)); }
	inline Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}
};


// Telepathy.Server/<>c__DisplayClass17_0
struct  U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6  : public RuntimeObject
{
public:
	// Telepathy.Server Telepathy.Server/<>c__DisplayClass17_0::<>4__this
	Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * ___U3CU3E4__this_0;
	// System.Int32 Telepathy.Server/<>c__DisplayClass17_0::port
	int32_t ___port_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6, ___U3CU3E4__this_0)); }
	inline Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_port_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6, ___port_1)); }
	inline int32_t get_port_1() const { return ___port_1; }
	inline int32_t* get_address_of_port_1() { return &___port_1; }
	inline void set_port_1(int32_t value)
	{
		___port_1 = value;
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


// System.Collections.Generic.KeyValuePair`2<System.Int32,Telepathy.ConnectionState>
struct  KeyValuePair_2_t8EDD87A6EB3A2B9515C7F4C79078100243D01687 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8EDD87A6EB3A2B9515C7F4C79078100243D01687, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8EDD87A6EB3A2B9515C7F4C79078100243D01687, ___value_1)); }
	inline ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * get_value_1() const { return ___value_1; }
	inline ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * value)
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

// System.Net.IPEndPoint
struct  IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E  : public EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___m_Address_2;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_3;

public:
	inline static int32_t get_offset_of_m_Address_2() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Address_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_m_Address_2() const { return ___m_Address_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_m_Address_2() { return &___m_Address_2; }
	inline void set_m_Address_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___m_Address_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_3() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Port_3)); }
	inline int32_t get_m_Port_3() const { return ___m_Port_3; }
	inline int32_t* get_address_of_m_Port_3() { return &___m_Port_3; }
	inline void set_m_Port_3(int32_t value)
	{
		___m_Port_3 = value;
	}
};

struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___IPv6Any_6;

public:
	inline static int32_t get_offset_of_Any_5() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___Any_5)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_Any_5() const { return ___Any_5; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_Any_5() { return &___Any_5; }
	inline void set_Any_5(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___Any_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_5), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_6() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___IPv6Any_6)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_IPv6Any_6() const { return ___IPv6Any_6; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_IPv6Any_6() { return &___IPv6Any_6; }
	inline void set_IPv6Any_6(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___IPv6Any_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_6), (void*)value);
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


// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
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


// System.Collections.Generic.Queue`1/Enumerator<System.ArraySegment`1<System.Byte>>
struct  Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002 
{
public:
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ____currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002, ____q_0)); }
	inline Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * get__q_0() const { return ____q_0; }
	inline Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____q_0), (void*)value);
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002, ____version_1)); }
	inline int32_t get__version_1() const { return ____version_1; }
	inline int32_t* get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(int32_t value)
	{
		____version_1 = value;
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of__currentElement_3() { return static_cast<int32_t>(offsetof(Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002, ____currentElement_3)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get__currentElement_3() const { return ____currentElement_3; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of__currentElement_3() { return &____currentElement_3; }
	inline void set__currentElement_3(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		____currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentElement_3))->____array_0), (void*)NULL);
	}
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


// Telepathy.ClientConnectionState
struct  ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A  : public ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1
{
public:
	// System.Threading.Thread Telepathy.ClientConnectionState::receiveThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___receiveThread_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Telepathy.ClientConnectionState::Connecting
	bool ___Connecting_4;
	// Telepathy.MagnificentReceivePipe Telepathy.ClientConnectionState::receivePipe
	MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * ___receivePipe_5;

public:
	inline static int32_t get_offset_of_receiveThread_3() { return static_cast<int32_t>(offsetof(ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A, ___receiveThread_3)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_receiveThread_3() const { return ___receiveThread_3; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_receiveThread_3() { return &___receiveThread_3; }
	inline void set_receiveThread_3(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___receiveThread_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveThread_3), (void*)value);
	}

	inline static int32_t get_offset_of_Connecting_4() { return static_cast<int32_t>(offsetof(ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A, ___Connecting_4)); }
	inline bool get_Connecting_4() const { return ___Connecting_4; }
	inline bool* get_address_of_Connecting_4() { return &___Connecting_4; }
	inline void set_Connecting_4(bool value)
	{
		___Connecting_4 = value;
	}

	inline static int32_t get_offset_of_receivePipe_5() { return static_cast<int32_t>(offsetof(ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A, ___receivePipe_5)); }
	inline MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * get_receivePipe_5() const { return ___receivePipe_5; }
	inline MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A ** get_address_of_receivePipe_5() { return &___receivePipe_5; }
	inline void set_receivePipe_5(MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * value)
	{
		___receivePipe_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receivePipe_5), (void*)value);
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

// Telepathy.EventType
struct  EventType_tDEB586195D7496CB77D2D7A0CF1DAC7A493DC8F8 
{
public:
	// System.Int32 Telepathy.EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_tDEB586195D7496CB77D2D7A0CF1DAC7A493DC8F8, ___value___2)); }
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

// System.Net.Sockets.NetworkStream
struct  NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_StreamSocket_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_7;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_8;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_11;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_12;

public:
	inline static int32_t get_offset_of_m_StreamSocket_5() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_StreamSocket_5)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_StreamSocket_5() const { return ___m_StreamSocket_5; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_StreamSocket_5() { return &___m_StreamSocket_5; }
	inline void set_m_StreamSocket_5(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_StreamSocket_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamSocket_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Readable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Readable_6)); }
	inline bool get_m_Readable_6() const { return ___m_Readable_6; }
	inline bool* get_address_of_m_Readable_6() { return &___m_Readable_6; }
	inline void set_m_Readable_6(bool value)
	{
		___m_Readable_6 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_7() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Writeable_7)); }
	inline bool get_m_Writeable_7() const { return ___m_Writeable_7; }
	inline bool* get_address_of_m_Writeable_7() { return &___m_Writeable_7; }
	inline void set_m_Writeable_7(bool value)
	{
		___m_Writeable_7 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_8() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_OwnsSocket_8)); }
	inline bool get_m_OwnsSocket_8() const { return ___m_OwnsSocket_8; }
	inline bool* get_address_of_m_OwnsSocket_8() { return &___m_OwnsSocket_8; }
	inline void set_m_OwnsSocket_8(bool value)
	{
		___m_OwnsSocket_8 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_9() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CloseTimeout_9)); }
	inline int32_t get_m_CloseTimeout_9() const { return ___m_CloseTimeout_9; }
	inline int32_t* get_address_of_m_CloseTimeout_9() { return &___m_CloseTimeout_9; }
	inline void set_m_CloseTimeout_9(int32_t value)
	{
		___m_CloseTimeout_9 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_10() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CleanedUp_10)); }
	inline bool get_m_CleanedUp_10() const { return ___m_CleanedUp_10; }
	inline bool* get_address_of_m_CleanedUp_10() { return &___m_CleanedUp_10; }
	inline void set_m_CleanedUp_10(bool value)
	{
		___m_CleanedUp_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentReadTimeout_11)); }
	inline int32_t get_m_CurrentReadTimeout_11() const { return ___m_CurrentReadTimeout_11; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_11() { return &___m_CurrentReadTimeout_11; }
	inline void set_m_CurrentReadTimeout_11(int32_t value)
	{
		___m_CurrentReadTimeout_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_12() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentWriteTimeout_12)); }
	inline int32_t get_m_CurrentWriteTimeout_12() const { return ___m_CurrentWriteTimeout_12; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_12() { return &___m_CurrentWriteTimeout_12; }
	inline void set_m_CurrentWriteTimeout_12(int32_t value)
	{
		___m_CurrentWriteTimeout_12 = value;
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


// System.Threading.ThreadPriority
struct  ThreadPriority_tFF7AC5F91D1EE3843C4D91823D6BD8BDF7620098 
{
public:
	// System.Int32 System.Threading.ThreadPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadPriority_tFF7AC5F91D1EE3843C4D91823D6BD8BDF7620098, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.Net.IPAddress
struct  IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
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


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Net.Sockets.TcpClient
struct  TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_ClientSocket_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_DataStream_2() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_DataStream_2)); }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * get_m_DataStream_2() const { return ___m_DataStream_2; }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 ** get_address_of_m_DataStream_2() { return &___m_DataStream_2; }
	inline void set_m_DataStream_2(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * value)
	{
		___m_DataStream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataStream_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}
};


// Telepathy.MagnificentReceivePipe/Entry
struct  Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F 
{
public:
	// System.Int32 Telepathy.MagnificentReceivePipe/Entry::connectionId
	int32_t ___connectionId_0;
	// Telepathy.EventType Telepathy.MagnificentReceivePipe/Entry::eventType
	int32_t ___eventType_1;
	// System.ArraySegment`1<System.Byte> Telepathy.MagnificentReceivePipe/Entry::data
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___data_2;

public:
	inline static int32_t get_offset_of_connectionId_0() { return static_cast<int32_t>(offsetof(Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F, ___connectionId_0)); }
	inline int32_t get_connectionId_0() const { return ___connectionId_0; }
	inline int32_t* get_address_of_connectionId_0() { return &___connectionId_0; }
	inline void set_connectionId_0(int32_t value)
	{
		___connectionId_0 = value;
	}

	inline static int32_t get_offset_of_eventType_1() { return static_cast<int32_t>(offsetof(Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F, ___eventType_1)); }
	inline int32_t get_eventType_1() const { return ___eventType_1; }
	inline int32_t* get_address_of_eventType_1() { return &___eventType_1; }
	inline void set_eventType_1(int32_t value)
	{
		___eventType_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F, ___data_2)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_data_2() const { return ___data_2; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_2))->____array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Telepathy.MagnificentReceivePipe/Entry
struct Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshaled_pinvoke
{
	int32_t ___connectionId_0;
	int32_t ___eventType_1;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___data_2;
};
// Native definition for COM marshalling of Telepathy.MagnificentReceivePipe/Entry
struct Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshaled_com
{
	int32_t ___connectionId_0;
	int32_t ___eventType_1;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___data_2;
};

// System.Action`1<System.ArraySegment`1<System.Byte>>
struct  Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC  : public MulticastDelegate_t
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


// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>
struct  Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Byte[]>
struct  Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473  : public MulticastDelegate_t
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


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// System.IO.IOException
struct  IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
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


// System.Threading.ThreadAbortException
struct  ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ThreadInterruptedException
struct  ThreadInterruptedException_t79671BFC28D9946768F83A1CFE78A2D586FF02DD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ThreadStart
struct  ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687  : public MulticastDelegate_t
{
public:

public:
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m7B19C839E4C4AD2BC5C8FAB158F1CF1D6418AA1E_gshared (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Telepathy.MagnificentReceivePipe/Entry>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m0212006746FE3014D720FE2A2DBBCE0A8F06CDC6_gshared (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Telepathy.Pool`1<System.Object>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_1__ctor_m8862AAB6F601884C9C3941C3C4FF8FFB611F445F_gshared (Pool_1_t1646BCD6AED1FA41AF8FE5A4B8A4D90D37617B93 * __this, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___objectGenerator0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<Telepathy.MagnificentReceivePipe/Entry>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_gshared_inline (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * __this, const RuntimeMethod* method);
// System.Int32 Telepathy.Pool`1<System.Object>::Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pool_1_Count_m007798FA9C823C5324BB85F1113DABC11612A5ED_gshared (Pool_1_t1646BCD6AED1FA41AF8FE5A4B8A4D90D37617B93 * __this, const RuntimeMethod* method);
// System.Boolean System.ArraySegment`1<System.Byte>::op_Inequality(System.ArraySegment`1<!0>,System.ArraySegment`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArraySegment_1_op_Inequality_m2F90ABA72EF71FE141BF71C4F7C2F846ED2E731B_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___a0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___b1, const RuntimeMethod* method);
// T Telepathy.Pool`1<System.Object>::Take()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Pool_1_Take_mF16263FF517ACAC38D7A7421519371998EA5AF22_gshared (Pool_1_t1646BCD6AED1FA41AF8FE5A4B8A4D90D37617B93 * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Telepathy.MagnificentReceivePipe/Entry>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4D8253DFB768E660DC1837D52215DF4BB395E739_gshared (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * __this, Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<Telepathy.MagnificentReceivePipe/Entry>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  Queue_1_Peek_m799C1CD892CA37A6507A3AEC75EB5226B2026F79_gshared (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<Telepathy.MagnificentReceivePipe/Entry>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  Queue_1_Dequeue_m38F63C3D300A64F3CB91DED21522E2912E50BDDC_gshared (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * __this, const RuntimeMethod* method);
// System.Void Telepathy.Pool`1<System.Object>::Return(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_1_Return_mB404B88365CD14EB0CD313B35035F68B839FB4CC_gshared (Pool_1_t1646BCD6AED1FA41AF8FE5A4B8A4D90D37617B93 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mEAA586B68A7660037EF19DCF316D8FD5D4022F0C_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.ArraySegment`1<System.Byte>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m115E087F9E4EE8AA3564F7F7F3403044EBBA84E9_gshared (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.ArraySegment`1<System.Byte>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_gshared_inline (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.ArraySegment`1<System.Byte>>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m0220CD9EDED8E6F2081915E74EA5B9487C1D2F5C_gshared (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___item0, const RuntimeMethod* method);
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<System.ArraySegment`1<System.Byte>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002  Queue_1_GetEnumerator_mA6FBE44FE39BB9863857A199C57579B49243FF4B_gshared (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1/Enumerator<System.ArraySegment`1<System.Byte>>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  Enumerator_get_Current_m9CA2D285192F3AF382389E262B7D5F6F77F99036_gshared (Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.ArraySegment`1<System.Byte>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE4BEA0773ADA5A1CAB7977446BDC1E04CE6975C7_gshared (Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.ArraySegment`1<System.Byte>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4F7BB11ED74CD6DF99B42C5C5484129FAF2F9775_gshared (Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.ArraySegment`1<System.Byte>>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  Queue_1_Dequeue_m05843BEC6CCB4AD88FD9A9F531DDD1B567B4F88B_gshared (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m18D74EEFBDD7A019D6D6768A70DA59EE04183267_gshared (ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_m16149D0F42AC3926F818A0090B7E6D697929A0CA_gshared (ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<!0,!1>> System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m67FFACF481636F27C42A57B892088B9A7F8552E8_gshared (ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_Clear_mF36A7B51A94CD3E33FDBC509921567DB7824FEF7_gshared (ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_mBDD0D523BCABF8C1688E32497A1C48F1CD448944_gshared (ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m3D02394ECBF316363B0F50E1E87C04D7528A3E67_gshared (Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * __this, int32_t ___arg10, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___arg21, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::TryRemove(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m4429732D311DD15A8374B257B9DEC0D2D9E4CC96_gshared (ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);

// System.Boolean Telepathy.ClientConnectionState::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClientConnectionState_get_Connected_mE5A5C244730EEFD11B95734234ED2730D27E94FD (ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * __this, const RuntimeMethod* method);
// System.Int32 Telepathy.MagnificentReceivePipe::get_TotalCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MagnificentReceivePipe_get_TotalCount_mDF25AEA16B7A3F9ED7FF4F18AF1D1CFB33D7C9FD (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, const RuntimeMethod* method);
// System.Void Telepathy.Common::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common__ctor_mDA05534E3B2F1C55A63B8FB653D725C5709634A5 (Common_t25B06616A1695440B39152B4C426E18441C11E0F * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method);
// System.Void Telepathy.Client/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m3CC875EAAA52FE4096B41C3B1048C9F800949079 (U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Connect_m457A7B869D62CC9B54DE2914839B342DF0559003 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, String_t* ___hostname0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_NoDelay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_NoDelay_mCF4F17DD8164A69A38002349ED84F1394E16BC79 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_SendTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_SendTimeout_mD141EFE7E09D66239D16EEAF6C23DB904D809B73 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_ReceiveTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_ReceiveTimeout_m6072CA469991AE169ED42A07C18C6538E6FEAACB (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void Telepathy.ThreadFunctions::ReceiveLoop(System.Int32,System.Net.Sockets.TcpClient,System.Int32,Telepathy.MagnificentReceivePipe,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadFunctions_ReceiveLoop_mF5135EAB46E7696C471BE93E8B4F8BED1CA68B38 (int32_t ___connectionId0, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client1, int32_t ___MaxMessageSize2, MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * ___receivePipe3, int32_t ___QueueLimit4, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void Telepathy.MagnificentReceivePipe::Enqueue(System.Int32,Telepathy.EventType,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagnificentReceivePipe_Enqueue_m95D72C73ADFAB4EAE07DE9B1A8E4782824C57760 (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, int32_t ___connectionId0, int32_t ___eventType1, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___message2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Interrupt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Interrupt_m7FF241D0D2980F6427A0FD65928F4E28B4A8304C (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Void Telepathy.Client/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m2D6866775D01C18CA253E782B39176BCC54E45EF (U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::get_Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connecting_mAF631B73E29AF1F6BB75CD325F2326A4B2059106 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connected_mC86DE616D136C3556010E1CE19AC17F5B0A274C4 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method);
// System.Void Telepathy.ClientConnectionState::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientConnectionState__ctor_mEB0857EA671889F98A7FAFD8A8A18269C6068512 (ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_Client(System.Net.Sockets.Socket)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TcpClient_set_Client_m12167E7D3DEAEEF69AF8896152A54CE613C664FC_inline (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method);
// System.Void Telepathy.ClientConnectionState::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientConnectionState_Dispose_mE8B951AE9BCB3E11A5DFC8BA6DC50F81F8F9AF01 (ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline)(__this, method);
}
// System.Int32 Telepathy.MagnificentSendPipe::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MagnificentSendPipe_get_Count_m680B76C7D6A6D7A2FA8391613CFCCE7EA76F182C (MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * __this, const RuntimeMethod* method);
// System.Void Telepathy.MagnificentSendPipe::Enqueue(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagnificentSendPipe_Enqueue_m6FFBD60A0C0E9CD3936155A74F25ED54153AD47C (MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___message0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared)(__this, method);
}
// System.Boolean Telepathy.MagnificentReceivePipe::TryPeek(System.Int32&,Telepathy.EventType&,System.ArraySegment`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MagnificentReceivePipe_TryPeek_m1A6A1A883C67D583DCBB32657BA8BFBD7BC3D2D7 (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, int32_t* ___connectionId0, int32_t* ___eventType1, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * ___data2, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::Invoke(!0)
inline void Action_1_Invoke_m7B19C839E4C4AD2BC5C8FAB158F1CF1D6418AA1E (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC *, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , const RuntimeMethod*))Action_1_Invoke_m7B19C839E4C4AD2BC5C8FAB158F1CF1D6418AA1E_gshared)(__this, ___obj0, method);
}
// System.Boolean Telepathy.MagnificentReceivePipe::TryDequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MagnificentReceivePipe_TryDequeue_m31EC2ED8AD580964E56FD94C39FCA251C4E0CFF6 (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient__ctor_m04BD4EDA03D1AE7183FC99DB886BD93CF85D2F2C (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Void Telepathy.ConnectionState::.ctor(System.Net.Sockets.TcpClient,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionState__ctor_m45DB06B196E85F5602DB92A7482FA933344C7361 (ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * __this, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client0, int32_t ___MaxMessageSize1, const RuntimeMethod* method);
// System.Void Telepathy.MagnificentReceivePipe::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagnificentReceivePipe__ctor_m8EDE7C1C7F405D1930220D739C4A53681ED65434 (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method);
// System.Void Telepathy.MagnificentSendPipe::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagnificentSendPipe_Clear_mD73F190906FDE2651D2027620DFB11345CD11F3F (MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void Telepathy.MagnificentSendPipe::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagnificentSendPipe__ctor_mA98E85B0DD20260C38F3912383B3BCEF9F31C23E (MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.IO.TextWriter System.Console::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * Console_get_Error_m5AEEF41258FBC9771DABB271B89A0F8ED43DDA5E_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Telepathy.MagnificentReceivePipe/Entry>::.ctor()
inline void Queue_1__ctor_m0212006746FE3014D720FE2A2DBBCE0A8F06CDC6 (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C *, const RuntimeMethod*))Queue_1__ctor_m0212006746FE3014D720FE2A2DBBCE0A8F06CDC6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, const RuntimeMethod*))Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_gshared)(__this, method);
}
// System.Void Telepathy.MagnificentReceivePipe/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mB082FF8B98C634F48FE87AB9B8AE10B66935EF9E (U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m75C930823750A53153FBC8864D8A23F358DCDD20 (Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Telepathy.Pool`1<System.Byte[]>::.ctor(System.Func`1<T>)
inline void Pool_1__ctor_mC367B78EB39E8FF89828BD95C3BEF3C381414F7A (Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * __this, Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * ___objectGenerator0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 *, Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 *, const RuntimeMethod*))Pool_1__ctor_m8862AAB6F601884C9C3941C3C4FF8FFB611F445F_gshared)(__this, ___objectGenerator0, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<Telepathy.MagnificentReceivePipe/Entry>::get_Count()
inline int32_t Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_inline (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C *, const RuntimeMethod*))Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_gshared_inline)(__this, method);
}
// System.Int32 Telepathy.Pool`1<System.Byte[]>::Count()
inline int32_t Pool_1_Count_m4940060DD24E59DD092158C641EF54F1476FF284 (Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 *, const RuntimeMethod*))Pool_1_Count_m007798FA9C823C5324BB85F1113DABC11612A5ED_gshared)(__this, method);
}
// System.Boolean System.ArraySegment`1<System.Byte>::op_Inequality(System.ArraySegment`1<!0>,System.ArraySegment`1<!0>)
inline bool ArraySegment_1_op_Inequality_m2F90ABA72EF71FE141BF71C4F7C2F846ED2E731B (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___a0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___b1, const RuntimeMethod* method)
{
	return ((  bool (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , const RuntimeMethod*))ArraySegment_1_op_Inequality_m2F90ABA72EF71FE141BF71C4F7C2F846ED2E731B_gshared)(___a0, ___b1, method);
}
// T Telepathy.Pool`1<System.Byte[]>::Take()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Pool_1_Take_mDC4AF2F4C3E9438AAAD417AD214D7C78D0BA48E5 (Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 *, const RuntimeMethod*))Pool_1_Take_mF16263FF517ACAC38D7A7421519371998EA5AF22_gshared)(__this, method);
}
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
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Void Telepathy.MagnificentReceivePipe/Entry::.ctor(System.Int32,Telepathy.EventType,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m16D467EC396A94BEAC0906056580F62CFF4CA786 (Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F * __this, int32_t ___connectionId0, int32_t ___eventType1, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___data2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Telepathy.MagnificentReceivePipe/Entry>::Enqueue(!0)
inline void Queue_1_Enqueue_m4D8253DFB768E660DC1837D52215DF4BB395E739 (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * __this, Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C *, Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F , const RuntimeMethod*))Queue_1_Enqueue_m4D8253DFB768E660DC1837D52215DF4BB395E739_gshared)(__this, ___item0, method);
}
// System.Int32 Telepathy.MagnificentReceivePipe::Count(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MagnificentReceivePipe_Count_mDC2DCE20153C2386E28724EE93E76C7F426F95E1 (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, int32_t ___connectionId0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Collections.Generic.Queue`1<Telepathy.MagnificentReceivePipe/Entry>::Peek()
inline Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  Queue_1_Peek_m799C1CD892CA37A6507A3AEC75EB5226B2026F79 (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * __this, const RuntimeMethod* method)
{
	return ((  Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  (*) (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C *, const RuntimeMethod*))Queue_1_Peek_m799C1CD892CA37A6507A3AEC75EB5226B2026F79_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<Telepathy.MagnificentReceivePipe/Entry>::Dequeue()
inline Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  Queue_1_Dequeue_m38F63C3D300A64F3CB91DED21522E2912E50BDDC (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * __this, const RuntimeMethod* method)
{
	return ((  Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  (*) (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C *, const RuntimeMethod*))Queue_1_Dequeue_m38F63C3D300A64F3CB91DED21522E2912E50BDDC_gshared)(__this, method);
}
// System.Void Telepathy.Pool`1<System.Byte[]>::Return(T)
inline void Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1 (Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))Pool_1_Return_mB404B88365CD14EB0CD313B35035F68B839FB4CC_gshared)(__this, ___item0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(!0)
inline bool Dictionary_2_Remove_mEAA586B68A7660037EF19DCF316D8FD5D4022F0C (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mEAA586B68A7660037EF19DCF316D8FD5D4022F0C_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
inline void Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, const RuntimeMethod*))Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.ArraySegment`1<System.Byte>>::.ctor()
inline void Queue_1__ctor_m115E087F9E4EE8AA3564F7F7F3403044EBBA84E9 (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 *, const RuntimeMethod*))Queue_1__ctor_m115E087F9E4EE8AA3564F7F7F3403044EBBA84E9_gshared)(__this, method);
}
// System.Void Telepathy.MagnificentSendPipe/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m5DD870628C7E2B1F1482E1B6C52D150A3C619734 (U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.ArraySegment`1<System.Byte>>::get_Count()
inline int32_t Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_inline (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 *, const RuntimeMethod*))Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.ArraySegment`1<System.Byte>>::Enqueue(!0)
inline void Queue_1_Enqueue_m0220CD9EDED8E6F2081915E74EA5B9487C1D2F5C (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 *, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , const RuntimeMethod*))Queue_1_Enqueue_m0220CD9EDED8E6F2081915E74EA5B9487C1D2F5C_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<System.ArraySegment`1<System.Byte>>::GetEnumerator()
inline Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002  Queue_1_GetEnumerator_mA6FBE44FE39BB9863857A199C57579B49243FF4B (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002  (*) (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 *, const RuntimeMethod*))Queue_1_GetEnumerator_mA6FBE44FE39BB9863857A199C57579B49243FF4B_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1/Enumerator<System.ArraySegment`1<System.Byte>>::get_Current()
inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  Enumerator_get_Current_m9CA2D285192F3AF382389E262B7D5F6F77F99036 (Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002 * __this, const RuntimeMethod* method)
{
	return ((  ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  (*) (Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002 *, const RuntimeMethod*))Enumerator_get_Current_m9CA2D285192F3AF382389E262B7D5F6F77F99036_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.ArraySegment`1<System.Byte>>::MoveNext()
inline bool Enumerator_MoveNext_mE4BEA0773ADA5A1CAB7977446BDC1E04CE6975C7 (Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002 *, const RuntimeMethod*))Enumerator_MoveNext_mE4BEA0773ADA5A1CAB7977446BDC1E04CE6975C7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.ArraySegment`1<System.Byte>>::Dispose()
inline void Enumerator_Dispose_m4F7BB11ED74CD6DF99B42C5C5484129FAF2F9775 (Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002 *, const RuntimeMethod*))Enumerator_Dispose_m4F7BB11ED74CD6DF99B42C5C5484129FAF2F9775_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<System.ArraySegment`1<System.Byte>>::Dequeue()
inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  Queue_1_Dequeue_m05843BEC6CCB4AD88FD9A9F531DDD1B567B4F88B (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * __this, const RuntimeMethod* method)
{
	return ((  ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  (*) (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 *, const RuntimeMethod*))Queue_1_Dequeue_m05843BEC6CCB4AD88FD9A9F531DDD1B567B4F88B_gshared)(__this, method);
}
// System.Void Telepathy.Utils::IntToBytesBigEndianNonAlloc(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_IntToBytesBigEndianNonAlloc_mF4E67C91FA766A66D63B83AB6108B052C4EAAA03 (int32_t ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, int32_t ___offset2, const RuntimeMethod* method);
// System.Int32 Telepathy.NetworkStreamExtensions::ReadSafely(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkStreamExtensions_ReadSafely_mB893276BBD1855945311D2857783DF1B847A608B (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, int32_t ___offset2, int32_t ___size3, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8 (int32_t* ___location0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Threading.Thread::get_IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thread_get_IsAlive_mFA0C1391D1A22D18A7D010F251D537530B04E015 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState>::.ctor()
inline void ConcurrentDictionary_2__ctor_mB0C6B9E90794FD880C16BDE1ABA6F52C5B2A79B8 (ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 *, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m18D74EEFBDD7A019D6D6768A70DA59EE04183267_gshared)(__this, method);
}
// System.Net.Sockets.TcpListener System.Net.Sockets.TcpListener::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * TcpListener_Create_m3649DD4158C295B4A568282B618C8DE629CE672F (int32_t ___port0, const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::get_Server()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * TcpListener_get_Server_mDFBCA0876377BA9FBF4B1937D5F41268D9AE7453_inline (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_NoDelay_m34DCB8BF5275A85E1687308D0D016E860F229732 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_SendTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_SendTimeout_mD92AF13D6A05318E6F892F0B145136138E2181E5 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_ReceiveTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_ReceiveTimeout_mF081C1A1416112CE1ED3609594F76062B4B4DB23 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener_Start_m95F4F504E8BF63D90E857AF6C794AC25EF971C68 (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, const RuntimeMethod* method);
// System.Void Telepathy.Server/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mA2D1EC3D5F333B34D8BDE390C39E17970E7499DE (U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * __this, const RuntimeMethod* method);
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::AcceptTcpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * TcpListener_AcceptTcpClient_m53BD54B8278B2288877965A92644FD84BCD9D4A5 (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, const RuntimeMethod* method);
// System.Int32 Telepathy.Server::NextConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_NextConnectionId_mF1604F268FEE0CC873D00C5F30E8BA6770DF8794 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState>::set_Item(!0,!1)
inline void ConcurrentDictionary_2_set_Item_mBD7D9EDD0293D5A4D2E77FF7B96A3F06CE7BFFDD (ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * __this, int32_t ___key0, ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 *, int32_t, ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_m16149D0F42AC3926F818A0090B7E6D697929A0CA_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Telepathy.Server/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mC756D174017F26127EE17D9658D128473CBFA338 (U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Server::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_get_Active_mE40759A4A854C0CF788380F7BFD303D6A99A09C5 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Priority(System.Threading.ThreadPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Priority_m8AAD823B41BAD106012A739876628BBFDB0E7F66 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener_Stop_m113CEAB447C6BCDBCF91CEF94DCA602E4530C033 (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<!0,!1>> System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState>::GetEnumerator()
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m628A891D7FCF964651EA598577A19B1EFA1DA9BE (ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 *, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m67FFACF481636F27C42A57B892088B9A7F8552E8_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Telepathy.ConnectionState>::get_Value()
inline ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * KeyValuePair_2_get_Value_m107A9CFD0B121D3E893954D086D9F08B0DD4F5B0_inline (KeyValuePair_2_t8EDD87A6EB3A2B9515C7F4C79078100243D01687 * __this, const RuntimeMethod* method)
{
	return ((  ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * (*) (KeyValuePair_2_t8EDD87A6EB3A2B9515C7F4C79078100243D01687 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState>::Clear()
inline void ConcurrentDictionary_2_Clear_m4196F44C1E797FD8491DD130AB9F725A16061072 (ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 *, const RuntimeMethod*))ConcurrentDictionary_2_Clear_mF36A7B51A94CD3E33FDBC509921567DB7824FEF7_gshared)(__this, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState>::TryGetValue(!0,!1&)
inline bool ConcurrentDictionary_2_TryGetValue_mFEBC23184243F46C7667CA276CC64C9D47F32BF0 (ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * __this, int32_t ___key0, ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 *, int32_t, ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 **, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_mBDD0D523BCABF8C1688E32497A1C48F1CD448944_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
inline void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, int32_t, const RuntimeMethod*))Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>::Invoke(!0,!1)
inline void Action_2_Invoke_m3D02394ECBF316363B0F50E1E87C04D7528A3E67 (Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * __this, int32_t ___arg10, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 *, int32_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , const RuntimeMethod*))Action_2_Invoke_m3D02394ECBF316363B0F50E1E87C04D7528A3E67_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState>::TryRemove(!0,!1&)
inline bool ConcurrentDictionary_2_TryRemove_m46BF6604C7479BEB47BD7CA56C763CC81DB249E6 (ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * __this, int32_t ___key0, ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 *, int32_t, ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 **, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m4429732D311DD15A8374B257B9DEC0D2D9E4CC96_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Telepathy.NetworkStreamExtensions::ReadExactly(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkStreamExtensions_ReadExactly_m0B7F210DEA57D5C3A1206F369EF3A6F2506C04E6 (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, int32_t ___amount2, const RuntimeMethod* method);
// System.Int32 Telepathy.Utils::BytesToIntBigEndian(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_BytesToIntBigEndian_mFBA75B217B98801987D3142AFC40BE3A25E91764 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean Telepathy.ThreadFunctions::ReadMessageBlocking(System.Net.Sockets.NetworkStream,System.Int32,System.Byte[],System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadFunctions_ReadMessageBlocking_m3032C4D5D39858541FF88710CD2356E7580B6C6B (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, int32_t ___MaxMessageSize1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___headerBuffer2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payloadBuffer3, int32_t* ___size4, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.MagnificentSendPipe::DequeueAndSerializeAll(System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MagnificentSendPipe_DequeueAndSerializeAll_mACDD88E0CEE4AD767F02352193F42B7FB64311DC (MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___payload0, int32_t* ___packetSize1, const RuntimeMethod* method);
// System.Boolean Telepathy.ThreadFunctions::SendMessagesBlocking(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadFunctions_SendMessagesBlocking_m4D1926B1F19209E0A81BF3A7AE9FEF45A9624E88 (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload1, int32_t ___packetSize2, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.TcpClient::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClient_get_Connected_m6F6E0D5E8CDF2D56756C34960B53D505640F481A (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Void Telepathy.ThreadFunctions::SendLoop(System.Int32,System.Net.Sockets.TcpClient,Telepathy.MagnificentSendPipe,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadFunctions_SendLoop_mE43DA5B64E6A6BFF7EEA5B967C9CFE83A9767FC1 (int32_t ___connectionId0, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client1, MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * ___sendPipe2, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___sendPending3, const RuntimeMethod* method);
// System.Void Telepathy.Client::ReceiveThreadFunction(Telepathy.ClientConnectionState,System.String,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ReceiveThreadFunction_m2FDBAC8FCE58277854DB184045CE2E9E02539713 (ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * ___state0, String_t* ___ip1, int32_t ___port2, int32_t ___MaxMessageSize3, bool ___NoDelay4, int32_t ___SendTimeout5, int32_t ___ReceiveTimeout6, int32_t ___ReceiveQueueLimit7, const RuntimeMethod* method);
// System.Void Telepathy.Server::Listen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Listen_mD18CE0EB1B3B66AD0B01DB22C7B3BB54AB3A3C33 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___port0, const RuntimeMethod* method);
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
// System.Boolean Telepathy.Client::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connected_mC86DE616D136C3556010E1CE19AC17F5B0A274C4 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method)
{
	{
		// public bool Connected => state != null && state.Connected;
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_0 = __this->get_state_9();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_1 = __this->get_state_9();
		NullCheck(L_1);
		bool L_2;
		L_2 = ClientConnectionState_get_Connected_mE5A5C244730EEFD11B95734234ED2730D27E94FD(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Telepathy.Client::get_Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connecting_mAF631B73E29AF1F6BB75CD325F2326A4B2059106 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method)
{
	{
		// public bool Connecting => state != null && state.Connecting;
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_0 = __this->get_state_9();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_1 = __this->get_state_9();
		NullCheck(L_1);
		bool L_2 = L_1->get_Connecting_4();
		il2cpp_codegen_memory_barrier();
		return L_2;
	}

IL_0016:
	{
		return (bool)0;
	}
}
// System.Int32 Telepathy.Client::get_ReceivePipeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Client_get_ReceivePipeCount_m64762F2D2B6135A772D10F0AB7DADB0768EF999F (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method)
{
	{
		// public int ReceivePipeCount => state != null ? state.receivePipe.TotalCount : 0;
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_0 = __this->get_state_9();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_1 = __this->get_state_9();
		NullCheck(L_1);
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_2 = L_1->get_receivePipe_5();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = MagnificentReceivePipe_get_TotalCount_mDF25AEA16B7A3F9ED7FF4F18AF1D1CFB33D7C9FD(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Telepathy.Client::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mD52457064B6A439EF08D6F061337E5ACD5E046C4 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method)
{
	{
		// public int SendQueueLimit = 10000;
		__this->set_SendQueueLimit_7(((int32_t)10000));
		// public int ReceiveQueueLimit = 10000;
		__this->set_ReceiveQueueLimit_8(((int32_t)10000));
		// public Client(int MaxMessageSize) : base(MaxMessageSize) {}
		int32_t L_0 = ___MaxMessageSize0;
		Common__ctor_mDA05534E3B2F1C55A63B8FB653D725C5709634A5(__this, L_0, /*hidden argument*/NULL);
		// public Client(int MaxMessageSize) : base(MaxMessageSize) {}
		return;
	}
}
// System.Void Telepathy.Client::ReceiveThreadFunction(Telepathy.ClientConnectionState,System.String,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ReceiveThreadFunction_m2FDBAC8FCE58277854DB184045CE2E9E02539713 (ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * ___state0, String_t* ___ip1, int32_t ___port2, int32_t ___MaxMessageSize3, bool ___NoDelay4, int32_t ___SendTimeout5, int32_t ___ReceiveTimeout6, int32_t ___ReceiveQueueLimit7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CReceiveThreadFunctionU3Eb__0_mA1DC9043BF26BB120485CA7A0B050BED098803FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * V_0 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * V_1 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_2 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B4_4 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B3_4 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B5_4 = NULL;
	Exception_t * G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B11_2 = NULL;
	Exception_t * G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B10_2 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B12_2 = NULL;
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * G_B17_0 = NULL;
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * G_B16_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * L_0 = (U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_0__ctor_m3CC875EAAA52FE4096B41C3B1048C9F800949079(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * L_1 = V_0;
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_2 = ___state0;
		NullCheck(L_1);
		L_1->set_state_0(L_2);
		// Thread sendThread = null;
		V_1 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)NULL;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		// state.client.Connect(ip, port);
		U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * L_3 = V_0;
		NullCheck(L_3);
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_4 = L_3->get_state_0();
		NullCheck(L_4);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_5 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_4)->get_client_0();
		String_t* L_6 = ___ip1;
		int32_t L_7 = ___port2;
		NullCheck(L_5);
		TcpClient_Connect_m457A7B869D62CC9B54DE2914839B342DF0559003(L_5, L_6, L_7, /*hidden argument*/NULL);
		// state.Connecting = false; // volatile!
		U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * L_8 = V_0;
		NullCheck(L_8);
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_9 = L_8->get_state_0();
		NullCheck(L_9);
		il2cpp_codegen_memory_barrier();
		L_9->set_Connecting_4(0);
		// state.client.NoDelay = NoDelay;
		U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * L_10 = V_0;
		NullCheck(L_10);
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_11 = L_10->get_state_0();
		NullCheck(L_11);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_12 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_11)->get_client_0();
		bool L_13 = ___NoDelay4;
		NullCheck(L_12);
		TcpClient_set_NoDelay_mCF4F17DD8164A69A38002349ED84F1394E16BC79(L_12, L_13, /*hidden argument*/NULL);
		// state.client.SendTimeout = SendTimeout;
		U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * L_14 = V_0;
		NullCheck(L_14);
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_15 = L_14->get_state_0();
		NullCheck(L_15);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_16 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_15)->get_client_0();
		int32_t L_17 = ___SendTimeout5;
		NullCheck(L_16);
		TcpClient_set_SendTimeout_mD141EFE7E09D66239D16EEAF6C23DB904D809B73(L_16, L_17, /*hidden argument*/NULL);
		// state.client.ReceiveTimeout = ReceiveTimeout;
		U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * L_18 = V_0;
		NullCheck(L_18);
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_19 = L_18->get_state_0();
		NullCheck(L_19);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_20 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_19)->get_client_0();
		int32_t L_21 = ___ReceiveTimeout6;
		NullCheck(L_20);
		TcpClient_set_ReceiveTimeout_m6072CA469991AE169ED42A07C18C6538E6FEAACB(L_20, L_21, /*hidden argument*/NULL);
		// sendThread = new Thread(() => { ThreadFunctions.SendLoop(0, state.client, state.sendPipe, state.sendPending); });
		U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * L_22 = V_0;
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_23 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_23, L_22, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CReceiveThreadFunctionU3Eb__0_mA1DC9043BF26BB120485CA7A0B050BED098803FC_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_24 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_24, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		// sendThread.IsBackground = true;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_25 = V_1;
		NullCheck(L_25);
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_25, (bool)1, /*hidden argument*/NULL);
		// sendThread.Start();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_26 = V_1;
		NullCheck(L_26);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_26, /*hidden argument*/NULL);
		// ThreadFunctions.ReceiveLoop(0, state.client, MaxMessageSize, state.receivePipe, ReceiveQueueLimit);
		U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * L_27 = V_0;
		NullCheck(L_27);
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_28 = L_27->get_state_0();
		NullCheck(L_28);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_29 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_28)->get_client_0();
		int32_t L_30 = ___MaxMessageSize3;
		U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * L_31 = V_0;
		NullCheck(L_31);
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_32 = L_31->get_state_0();
		NullCheck(L_32);
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_33 = L_32->get_receivePipe_5();
		int32_t L_34 = ___ReceiveQueueLimit7;
		ThreadFunctions_ReceiveLoop_mF5135EAB46E7696C471BE93E8B4F8BED1CA68B38(0, L_29, L_30, L_33, L_34, /*hidden argument*/NULL);
		// }
		goto IL_0140;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a8;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadInterruptedException_t79671BFC28D9946768F83A1CFE78A2D586FF02DD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0111;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0114;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0117;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_011a;
		}
		throw e;
	}

CATCH_00a8:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			// catch (SocketException exception)
			V_2 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
			// Log.Info("Client Recv: failed to connect to ip=" + ip + " port=" + port + " reason=" + exception);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var)));
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_35 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))))->get_Info_0();
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
			NullCheck(L_37);
			ArrayElementTypeCheck (L_37, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98EE6E14CEF56B68F3183A39F05EC0777156FAF0)));
			(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98EE6E14CEF56B68F3183A39F05EC0777156FAF0)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_37;
			String_t* L_39 = ___ip1;
			NullCheck(L_38);
			ArrayElementTypeCheck (L_38, L_39);
			(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_38;
			NullCheck(L_40);
			ArrayElementTypeCheck (L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31B976D9EE49F9283B64341353242A9A99DFBEEE)));
			(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31B976D9EE49F9283B64341353242A9A99DFBEEE)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_40;
			String_t* L_42;
			L_42 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___port2), /*hidden argument*/NULL);
			NullCheck(L_41);
			ArrayElementTypeCheck (L_41, L_42);
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_42);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = L_41;
			NullCheck(L_43);
			ArrayElementTypeCheck (L_43, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBF8BC4445DEB11C67334B09A3C41A9B4A645C23)));
			(L_43)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBF8BC4445DEB11C67334B09A3C41A9B4A645C23)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = L_43;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_45 = V_2;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_46 = L_45;
			G_B3_0 = L_46;
			G_B3_1 = 5;
			G_B3_2 = L_44;
			G_B3_3 = L_44;
			G_B3_4 = L_35;
			if (L_46)
			{
				G_B4_0 = L_46;
				G_B4_1 = 5;
				G_B4_2 = L_44;
				G_B4_3 = L_44;
				G_B4_4 = L_35;
				goto IL_00e4;
			}
		}

IL_00e0:
		{
			G_B5_0 = ((String_t*)(NULL));
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			G_B5_3 = G_B3_3;
			G_B5_4 = G_B3_4;
			goto IL_00e9;
		}

IL_00e4:
		{
			NullCheck(G_B4_0);
			String_t* L_47;
			L_47 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
			G_B5_0 = L_47;
			G_B5_1 = G_B4_1;
			G_B5_2 = G_B4_2;
			G_B5_3 = G_B4_3;
			G_B5_4 = G_B4_4;
		}

IL_00e9:
		{
			NullCheck(G_B5_2);
			ArrayElementTypeCheck (G_B5_2, G_B5_0);
			(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
			String_t* L_48;
			L_48 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B5_3, /*hidden argument*/NULL);
			NullCheck(G_B5_4);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B5_4, L_48, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var)));
			// state.receivePipe.Enqueue(0, EventType.Disconnected, default);
			U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * L_49 = V_0;
			NullCheck(L_49);
			ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_50 = L_49->get_state_0();
			NullCheck(L_50);
			MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_51 = L_50->get_receivePipe_5();
			il2cpp_codegen_initobj((&V_3), sizeof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE ));
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_52 = V_3;
			NullCheck(L_51);
			MagnificentReceivePipe_Enqueue_m95D72C73ADFAB4EAE07DE9B1A8E4782824C57760(L_51, 0, 2, L_52, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0140;
		}
	} // end catch (depth: 1)

CATCH_0111:
	{ // begin catch(System.Threading.ThreadInterruptedException)
		// catch (ThreadInterruptedException)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	} // end catch (depth: 1)

CATCH_0114:
	{ // begin catch(System.Threading.ThreadAbortException)
		// catch (ThreadAbortException)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	} // end catch (depth: 1)

CATCH_0117:
	{ // begin catch(System.ObjectDisposedException)
		// catch (ObjectDisposedException)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	} // end catch (depth: 1)

CATCH_011a:
	{ // begin catch(System.Exception)
		{
			// catch (Exception exception)
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Log.Error("Client Recv Exception: " + exception);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var)));
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_53 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))))->get_Error_2();
			Exception_t * L_54 = V_4;
			Exception_t * L_55 = L_54;
			G_B10_0 = L_55;
			G_B10_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral626A3E746B6E32152C851059C39BAEC2F818FB3A));
			G_B10_2 = L_53;
			if (L_55)
			{
				G_B11_0 = L_55;
				G_B11_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral626A3E746B6E32152C851059C39BAEC2F818FB3A));
				G_B11_2 = L_53;
				goto IL_012f;
			}
		}

IL_012b:
		{
			G_B12_0 = ((String_t*)(NULL));
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			goto IL_0134;
		}

IL_012f:
		{
			NullCheck(G_B11_0);
			String_t* L_56;
			L_56 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B11_0);
			G_B12_0 = L_56;
			G_B12_1 = G_B11_1;
			G_B12_2 = G_B11_2;
		}

IL_0134:
		{
			String_t* L_57;
			L_57 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B12_1, G_B12_0, /*hidden argument*/NULL);
			NullCheck(G_B12_2);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B12_2, L_57, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var)));
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0140;
		}
	} // end catch (depth: 1)

IL_0140:
	{
		// sendThread?.Interrupt();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_58 = V_1;
		if (!L_58)
		{
			goto IL_0149;
		}
	}
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_59 = V_1;
		NullCheck(L_59);
		Thread_Interrupt_m7FF241D0D2980F6427A0FD65928F4E28B4A8304C(L_59, /*hidden argument*/NULL);
	}

IL_0149:
	{
		// state.Connecting = false;
		U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * L_60 = V_0;
		NullCheck(L_60);
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_61 = L_60->get_state_0();
		NullCheck(L_61);
		il2cpp_codegen_memory_barrier();
		L_61->set_Connecting_4(0);
		// state.client?.Close();
		U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * L_62 = V_0;
		NullCheck(L_62);
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_63 = L_62->get_state_0();
		NullCheck(L_63);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_64 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_63)->get_client_0();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_65 = L_64;
		G_B16_0 = L_65;
		if (L_65)
		{
			G_B17_0 = L_65;
			goto IL_0167;
		}
	}
	{
		return;
	}

IL_0167:
	{
		NullCheck(G_B17_0);
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(G_B17_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Telepathy.Client::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Connect_mDB197946B2907CF0830208C4A3B8B5E967B04401 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CConnectU3Eb__0_mDC4E2503DCD271D653F9610016D53B5A6F8B6BEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51535E9E0618B351605C1CDB183CE725D2F1B60E);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186 * L_0 = (U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass14_0__ctor_m2D6866775D01C18CA253E782B39176BCC54E45EF(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186 * L_2 = V_0;
		String_t* L_3 = ___ip0;
		NullCheck(L_2);
		L_2->set_ip_1(L_3);
		U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186 * L_4 = V_0;
		int32_t L_5 = ___port1;
		NullCheck(L_4);
		L_4->set_port_2(L_5);
		// if (Connecting || Connected)
		bool L_6;
		L_6 = Client_get_Connecting_mAF631B73E29AF1F6BB75CD325F2326A4B2059106(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		bool L_7;
		L_7 = Client_get_Connected_mC86DE616D136C3556010E1CE19AC17F5B0A274C4(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}

IL_002b:
	{
		// Log.Warning("Telepathy Client can not create connection because an existing connection is connecting or connected");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_8 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->get_Warning_1();
		NullCheck(L_8);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_8, _stringLiteral51535E9E0618B351605C1CDB183CE725D2F1B60E, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return;
		return;
	}

IL_003b:
	{
		// state = new ClientConnectionState(MaxMessageSize);
		int32_t L_9 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_MaxMessageSize_1();
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_10 = (ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A *)il2cpp_codegen_object_new(ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A_il2cpp_TypeInfo_var);
		ClientConnectionState__ctor_mEB0857EA671889F98A7FAFD8A8A18269C6068512(L_10, L_9, /*hidden argument*/NULL);
		__this->set_state_9(L_10);
		// state.Connecting = true;
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_11 = __this->get_state_9();
		NullCheck(L_11);
		il2cpp_codegen_memory_barrier();
		L_11->set_Connecting_4(1);
		// state.client.Client = null; // clear internal IPv4 socket until Connect()
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_12 = __this->get_state_9();
		NullCheck(L_12);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_13 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_12)->get_client_0();
		NullCheck(L_13);
		TcpClient_set_Client_m12167E7D3DEAEEF69AF8896152A54CE613C664FC_inline(L_13, (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL, /*hidden argument*/NULL);
		// state.receiveThread = new Thread(() => {
		//     ReceiveThreadFunction(state, ip, port, MaxMessageSize, NoDelay, SendTimeout, ReceiveTimeout, ReceiveQueueLimit);
		// });
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_14 = __this->get_state_9();
		U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186 * L_15 = V_0;
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_16 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass14_0_U3CConnectU3Eb__0_mDC4E2503DCD271D653F9610016D53B5A6F8B6BEB_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_17 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_17, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_receiveThread_3(L_17);
		// state.receiveThread.IsBackground = true;
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_18 = __this->get_state_9();
		NullCheck(L_18);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_19 = L_18->get_receiveThread_3();
		NullCheck(L_19);
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_19, (bool)1, /*hidden argument*/NULL);
		// state.receiveThread.Start();
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_20 = __this->get_state_9();
		NullCheck(L_20);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_21 = L_20->get_receiveThread_3();
		NullCheck(L_21);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Telepathy.Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_mAE664B949506BF0D4F3698B644416E7A95B35614 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method)
{
	{
		// if (Connecting || Connected)
		bool L_0;
		L_0 = Client_get_Connecting_mAF631B73E29AF1F6BB75CD325F2326A4B2059106(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = Client_get_Connected_mC86DE616D136C3556010E1CE19AC17F5B0A274C4(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		// state.Dispose();
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_2 = __this->get_state_9();
		NullCheck(L_2);
		ClientConnectionState_Dispose_mE8B951AE9BCB3E11A5DFC8BA6DC50F81F8F9AF01(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Boolean Telepathy.Client::Send(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_Send_m93CD3EB70EF1DCD964713359C91298850C323500 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral669E9BBF3EAA6140D2DBE7CB48975026F4D7CCBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA00A6ED1079D9BFA0747625B3DBAEAB49075A9D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3A624088023A31556B10B57409D536C3E2A116C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2ED48CD8488ED3A461DA6ACAB12DDF5260E04C5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Connected)
		bool L_0;
		L_0 = Client_get_Connected_mC86DE616D136C3556010E1CE19AC17F5B0A274C4(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00bf;
		}
	}
	{
		// if (message.Count <= MaxMessageSize)
		int32_t L_1;
		L_1 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message0), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		int32_t L_2 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_MaxMessageSize_1();
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_0087;
		}
	}
	{
		// if (state.sendPipe.Count < SendQueueLimit)
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_3 = __this->get_state_9();
		NullCheck(L_3);
		MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_4 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_3)->get_sendPipe_1();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = MagnificentSendPipe_get_Count_m680B76C7D6A6D7A2FA8391613CFCCE7EA76F182C(L_4, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_SendQueueLimit_7();
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		// state.sendPipe.Enqueue(message);
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_7 = __this->get_state_9();
		NullCheck(L_7);
		MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_8 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_7)->get_sendPipe_1();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_9 = ___message0;
		NullCheck(L_8);
		MagnificentSendPipe_Enqueue_m6FFBD60A0C0E9CD3936155A74F25ED54153AD47C(L_8, L_9, /*hidden argument*/NULL);
		// state.sendPending.Set(); // interrupt SendThread WaitOne()
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_10 = __this->get_state_9();
		NullCheck(L_10);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_11 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_10)->get_sendPending_2();
		NullCheck(L_11);
		bool L_12;
		L_12 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_11, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0056:
	{
		// Log.Warning($"Client.Send: sendPipe reached limit of {SendQueueLimit}. This can happen if we call send faster than the network can process messages. Disconnecting to avoid ever growing memory & latency.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_13 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->get_Warning_1();
		int32_t L_14 = __this->get_SendQueueLimit_7();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD3A624088023A31556B10B57409D536C3E2A116C, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_13, L_17, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// state.client.Close();
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_18 = __this->get_state_9();
		NullCheck(L_18);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_19 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_18)->get_client_0();
		NullCheck(L_19);
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_19, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0087:
	{
		// Log.Error("Client.Send: message too big: " + message.Count + ". Limit: " + MaxMessageSize);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_20 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->get_Error_2();
		int32_t L_21;
		L_21 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message0), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		V_0 = L_21;
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_23 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_MaxMessageSize_1();
		V_0 = L_23;
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralF2ED48CD8488ED3A461DA6ACAB12DDF5260E04C5, L_22, _stringLiteralA00A6ED1079D9BFA0747625B3DBAEAB49075A9D7, L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_20, L_25, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}

IL_00bf:
	{
		// Log.Warning("Client.Send: not connected!");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_26 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->get_Warning_1();
		NullCheck(L_26);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_26, _stringLiteral669E9BBF3EAA6140D2DBE7CB48975026F4D7CCBA, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}
}
// System.Int32 Telepathy.Client::Tick(System.Int32,System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Client_Tick_mFE8F6ECFFEEF98B6D2D19F7FF5B8665489BC58AA (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, int32_t ___processLimit0, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___checkEnabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7B19C839E4C4AD2BC5C8FAB158F1CF1D6418AA1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B10_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B9_0 = NULL;
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * G_B13_0 = NULL;
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * G_B12_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B16_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B15_0 = NULL;
	{
		// if (state == null)
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_0 = __this->get_state_9();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_000a:
	{
		// for (int i = 0; i < processLimit; ++i)
		V_0 = 0;
		goto IL_0098;
	}

IL_0011:
	{
		// if (checkEnabled != null && !checkEnabled())
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = ___checkEnabled1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = ___checkEnabled1;
		NullCheck(L_2);
		bool L_3;
		L_3 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4(L_2, /*hidden argument*/Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_009f;
		}
	}

IL_001f:
	{
		// if (state.receivePipe.TryPeek(out int _, out EventType eventType, out ArraySegment<byte> message))
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_4 = __this->get_state_9();
		NullCheck(L_4);
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_5 = L_4->get_receivePipe_5();
		NullCheck(L_5);
		bool L_6;
		L_6 = MagnificentReceivePipe_TryPeek_m1A6A1A883C67D583DCBB32657BA8BFBD7BC3D2D7(L_5, (int32_t*)(&V_3), (int32_t*)(&V_1), (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_2), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_7 = V_1;
		switch (L_7)
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_0072;
			}
		}
	}
	{
		goto IL_0083;
	}

IL_004b:
	{
		// OnConnected?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = __this->get_OnConnected_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = L_8;
		G_B9_0 = L_9;
		if (L_9)
		{
			G_B10_0 = L_9;
			goto IL_0057;
		}
	}
	{
		goto IL_0083;
	}

IL_0057:
	{
		NullCheck(G_B10_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B10_0, /*hidden argument*/NULL);
		// break;
		goto IL_0083;
	}

IL_005e:
	{
		// OnData?.Invoke(message);
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_10 = __this->get_OnData_5();
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_11 = L_10;
		G_B12_0 = L_11;
		if (L_11)
		{
			G_B13_0 = L_11;
			goto IL_006a;
		}
	}
	{
		goto IL_0083;
	}

IL_006a:
	{
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_12 = V_2;
		NullCheck(G_B13_0);
		Action_1_Invoke_m7B19C839E4C4AD2BC5C8FAB158F1CF1D6418AA1E(G_B13_0, L_12, /*hidden argument*/Action_1_Invoke_m7B19C839E4C4AD2BC5C8FAB158F1CF1D6418AA1E_RuntimeMethod_var);
		// break;
		goto IL_0083;
	}

IL_0072:
	{
		// OnDisconnected?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = __this->get_OnDisconnected_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = L_13;
		G_B15_0 = L_14;
		if (L_14)
		{
			G_B16_0 = L_14;
			goto IL_007e;
		}
	}
	{
		goto IL_0083;
	}

IL_007e:
	{
		NullCheck(G_B16_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B16_0, /*hidden argument*/NULL);
	}

IL_0083:
	{
		// state.receivePipe.TryDequeue();
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_15 = __this->get_state_9();
		NullCheck(L_15);
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_16 = L_15->get_receivePipe_5();
		NullCheck(L_16);
		bool L_17;
		L_17 = MagnificentReceivePipe_TryDequeue_m31EC2ED8AD580964E56FD94C39FCA251C4E0CFF6(L_16, /*hidden argument*/NULL);
		// for (int i = 0; i < processLimit; ++i)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0098:
	{
		// for (int i = 0; i < processLimit; ++i)
		int32_t L_19 = V_0;
		int32_t L_20 = ___processLimit0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0011;
		}
	}

IL_009f:
	{
		// return state.receivePipe.TotalCount;
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_21 = __this->get_state_9();
		NullCheck(L_21);
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_22 = L_21->get_receivePipe_5();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = MagnificentReceivePipe_get_TotalCount_mDF25AEA16B7A3F9ED7FF4F18AF1D1CFB33D7C9FD(L_22, /*hidden argument*/NULL);
		return L_23;
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
// System.Boolean Telepathy.ClientConnectionState::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClientConnectionState_get_Connected_mE5A5C244730EEFD11B95734234ED2730D27E94FD (ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * __this, const RuntimeMethod* method)
{
	{
		// public bool Connected => client != null &&
		//                          client.Client != null &&
		//                          client.Client.Connected;
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)__this)->get_client_0();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_1 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)__this)->get_client_0();
		NullCheck(L_1);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2;
		L_2 = TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_3 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)__this)->get_client_0();
		NullCheck(L_3);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_4;
		L_4 = TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// System.Void Telepathy.ClientConnectionState::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientConnectionState__ctor_mEB0857EA671889F98A7FAFD8A8A18269C6068512 (ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ClientConnectionState(int MaxMessageSize) : base(new TcpClient(), MaxMessageSize)
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE *)il2cpp_codegen_object_new(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE_il2cpp_TypeInfo_var);
		TcpClient__ctor_m04BD4EDA03D1AE7183FC99DB886BD93CF85D2F2C(L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___MaxMessageSize0;
		ConnectionState__ctor_m45DB06B196E85F5602DB92A7482FA933344C7361(__this, L_0, L_1, /*hidden argument*/NULL);
		// receivePipe = new MagnificentReceivePipe(MaxMessageSize);
		int32_t L_2 = ___MaxMessageSize0;
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_3 = (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A *)il2cpp_codegen_object_new(MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A_il2cpp_TypeInfo_var);
		MagnificentReceivePipe__ctor_m8EDE7C1C7F405D1930220D739C4A53681ED65434(L_3, L_2, /*hidden argument*/NULL);
		__this->set_receivePipe_5(L_3);
		// }
		return;
	}
}
// System.Void Telepathy.ClientConnectionState::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientConnectionState_Dispose_mE8B951AE9BCB3E11A5DFC8BA6DC50F81F8F9AF01 (ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * __this, const RuntimeMethod* method)
{
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * G_B2_0 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * G_B1_0 = NULL;
	{
		// client.Close();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)__this)->get_client_0();
		NullCheck(L_0);
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_0, /*hidden argument*/NULL);
		// receiveThread?.Interrupt();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1 = __this->get_receiveThread_3();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0017;
		}
	}
	{
		goto IL_001c;
	}

IL_0017:
	{
		NullCheck(G_B2_0);
		Thread_Interrupt_m7FF241D0D2980F6427A0FD65928F4E28B4A8304C(G_B2_0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// Connecting = false;
		il2cpp_codegen_memory_barrier();
		__this->set_Connecting_4(0);
		// sendPipe.Clear();
		MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_3 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)__this)->get_sendPipe_1();
		NullCheck(L_3);
		MagnificentSendPipe_Clear_mD73F190906FDE2651D2027620DFB11345CD11F3F(L_3, /*hidden argument*/NULL);
		// client = null;
		((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)__this)->set_client_0((TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE *)NULL);
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
// System.Void Telepathy.Common::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common__ctor_mDA05534E3B2F1C55A63B8FB653D725C5709634A5 (Common_t25B06616A1695440B39152B4C426E18441C11E0F * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method)
{
	{
		// public bool NoDelay = true;
		__this->set_NoDelay_0((bool)1);
		// public int SendTimeout = 5000;
		__this->set_SendTimeout_2(((int32_t)5000));
		// protected Common(int MaxMessageSize)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.MaxMessageSize = MaxMessageSize;
		int32_t L_0 = ___MaxMessageSize0;
		__this->set_MaxMessageSize_1(L_0);
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
// System.Void Telepathy.ConnectionState::.ctor(System.Net.Sockets.TcpClient,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionState__ctor_m45DB06B196E85F5602DB92A7482FA933344C7361 (ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * __this, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client0, int32_t ___MaxMessageSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ManualResetEvent sendPending = new ManualResetEvent(false);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_0 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_0, (bool)0, /*hidden argument*/NULL);
		__this->set_sendPending_2(L_0);
		// public ConnectionState(TcpClient client, int MaxMessageSize)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.client = client;
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_1 = ___client0;
		__this->set_client_0(L_1);
		// sendPipe = new MagnificentSendPipe(MaxMessageSize);
		int32_t L_2 = ___MaxMessageSize1;
		MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_3 = (MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C *)il2cpp_codegen_object_new(MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C_il2cpp_TypeInfo_var);
		MagnificentSendPipe__ctor_mA98E85B0DD20260C38F3912383B3BCEF9F31C23E(L_3, L_2, /*hidden argument*/NULL);
		__this->set_sendPipe_1(L_3);
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
// System.Void Telepathy.Log::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__cctor_m3737E6C4C1DB0A1334E5049A6C5B7F107A609660 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action<string> Info = Console.WriteLine;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_0, NULL, (intptr_t)((intptr_t)Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->set_Info_0(L_0);
		// public static Action<string> Warning = Console.WriteLine;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_1, NULL, (intptr_t)((intptr_t)Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->set_Warning_1(L_1);
		// public static Action<string> Error = Console.Error.WriteLine;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2;
		L_2 = Console_get_Error_m5AEEF41258FBC9771DABB271B89A0F8ED43DDA5E_inline(/*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_3 = L_2;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_4 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_4, L_3, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_3, 18)), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->set_Error_2(L_4);
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
// System.Void Telepathy.MagnificentReceivePipe::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagnificentReceivePipe__ctor_m8EDE7C1C7F405D1930220D739C4A53681ED65434 (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m75C930823750A53153FBC8864D8A23F358DCDD20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1__ctor_mC367B78EB39E8FF89828BD95C3BEF3C381414F7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m0212006746FE3014D720FE2A2DBBCE0A8F06CDC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m61D2B9F399559F6E86E0D6BB90951C9F28CA6A1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E * V_0 = NULL;
	{
		// readonly Queue<Entry> queue = new Queue<Entry>();
		Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * L_0 = (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C *)il2cpp_codegen_object_new(Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C_il2cpp_TypeInfo_var);
		Queue_1__ctor_m0212006746FE3014D720FE2A2DBBCE0A8F06CDC6(L_0, /*hidden argument*/Queue_1__ctor_m0212006746FE3014D720FE2A2DBBCE0A8F06CDC6_RuntimeMethod_var);
		__this->set_queue_0(L_0);
		// Dictionary<int, int> queueCounter = new Dictionary<int, int>();
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_1 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)il2cpp_codegen_object_new(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1(L_1, /*hidden argument*/Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_RuntimeMethod_var);
		__this->set_queueCounter_2(L_1);
		U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E * L_2 = (U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_mB082FF8B98C634F48FE87AB9B8AE10B66935EF9E(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E * L_3 = V_0;
		int32_t L_4 = ___MaxMessageSize0;
		NullCheck(L_3);
		L_3->set_MaxMessageSize_0(L_4);
		// public MagnificentReceivePipe(int MaxMessageSize)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// pool = new Pool<byte[]>(() => new byte[MaxMessageSize]);
		U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E * L_5 = V_0;
		Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * L_6 = (Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 *)il2cpp_codegen_object_new(Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473_il2cpp_TypeInfo_var);
		Func_1__ctor_m75C930823750A53153FBC8864D8A23F358DCDD20(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m61D2B9F399559F6E86E0D6BB90951C9F28CA6A1A_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m75C930823750A53153FBC8864D8A23F358DCDD20_RuntimeMethod_var);
		Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * L_7 = (Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 *)il2cpp_codegen_object_new(Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39_il2cpp_TypeInfo_var);
		Pool_1__ctor_mC367B78EB39E8FF89828BD95C3BEF3C381414F7A(L_7, L_6, /*hidden argument*/Pool_1__ctor_mC367B78EB39E8FF89828BD95C3BEF3C381414F7A_RuntimeMethod_var);
		__this->set_pool_1(L_7);
		// }
		return;
	}
}
// System.Int32 Telepathy.MagnificentReceivePipe::Count(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MagnificentReceivePipe_Count_mDC2DCE20153C2386E28724EE93E76C7F426F95E1 (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		{
			MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_0 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			// return queueCounter.TryGetValue(connectionId, out int count)
			//        ? count
			//        : 0;
			Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_1 = __this->get_queueCounter_2();
			int32_t L_2 = ___connectionId0;
			NullCheck(L_1);
			bool L_3;
			L_3 = Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026(L_1, L_2, (int32_t*)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_001f;
			}
		}

IL_001c:
		{
			G_B4_0 = 0;
			goto IL_0020;
		}

IL_001f:
		{
			int32_t L_4 = V_2;
			G_B4_0 = L_4;
		}

IL_0020:
		{
			V_3 = G_B4_0;
			IL2CPP_LEAVE(0x2D, FINALLY_0023);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(35)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
		// }
		int32_t L_7 = V_3;
		return L_7;
	}
}
// System.Int32 Telepathy.MagnificentReceivePipe::get_TotalCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MagnificentReceivePipe_get_TotalCount_mDF25AEA16B7A3F9ED7FF4F18AF1D1CFB33D7C9FD (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// get { lock (this) { return queue.Count; } }
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_0 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// get { lock (this) { return queue.Count; } }
		Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * L_1 = __this->get_queue_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_inline(L_1, /*hidden argument*/Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_RuntimeMethod_var);
		V_2 = L_2;
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_4 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		// get { lock (this) { return queue.Count; } }
		int32_t L_5 = V_2;
		return L_5;
	}
}
// System.Int32 Telepathy.MagnificentReceivePipe::get_PoolCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MagnificentReceivePipe_get_PoolCount_mF199A7E4EE4275EC4BF12F1BF9CD1267388D2F84 (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Count_m4940060DD24E59DD092158C641EF54F1476FF284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// get { lock (this) { return pool.Count(); } }
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_0 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// get { lock (this) { return pool.Count(); } }
		Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * L_1 = __this->get_pool_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Pool_1_Count_m4940060DD24E59DD092158C641EF54F1476FF284(L_1, /*hidden argument*/Pool_1_Count_m4940060DD24E59DD092158C641EF54F1476FF284_RuntimeMethod_var);
		V_2 = L_2;
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_4 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		// get { lock (this) { return pool.Count(); } }
		int32_t L_5 = V_2;
		return L_5;
	}
}
// System.Void Telepathy.MagnificentReceivePipe::Enqueue(System.Int32,Telepathy.EventType,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagnificentReceivePipe_Enqueue_m95D72C73ADFAB4EAE07DE9B1A8E4782824C57760 (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, int32_t ___connectionId0, int32_t ___eventType1, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_op_Inequality_m2F90ABA72EF71FE141BF71C4F7C2F846ED2E731B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Take_mDC4AF2F4C3E9438AAAD417AD214D7C78D0BA48E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4D8253DFB768E660DC1837D52215DF4BB395E739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * V_0 = NULL;
	bool V_1 = false;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		{
			MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_0 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			// ArraySegment<byte> segment = default;
			il2cpp_codegen_initobj((&V_2), sizeof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE ));
			// if (message != default)
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_1 = ___message2;
			il2cpp_codegen_initobj((&V_5), sizeof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE ));
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_2 = V_5;
			bool L_3;
			L_3 = ArraySegment_1_op_Inequality_m2F90ABA72EF71FE141BF71C4F7C2F846ED2E731B(L_1, L_2, /*hidden argument*/ArraySegment_1_op_Inequality_m2F90ABA72EF71FE141BF71C4F7C2F846ED2E731B_RuntimeMethod_var);
			if (!L_3)
			{
				goto IL_0061;
			}
		}

IL_0026:
		{
			// byte[] bytes = pool.Take();
			Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * L_4 = __this->get_pool_1();
			NullCheck(L_4);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
			L_5 = Pool_1_Take_mDC4AF2F4C3E9438AAAD417AD214D7C78D0BA48E5(L_4, /*hidden argument*/Pool_1_Take_mDC4AF2F4C3E9438AAAD417AD214D7C78D0BA48E5_RuntimeMethod_var);
			V_6 = L_5;
			// Buffer.BlockCopy(message.Array, message.Offset, bytes, 0, message.Count);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
			L_6 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message2), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
			int32_t L_7;
			L_7 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message2), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_6;
			int32_t L_9;
			L_9 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message2), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
			Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_6, L_7, (RuntimeArray *)(RuntimeArray *)L_8, 0, L_9, /*hidden argument*/NULL);
			// segment = new ArraySegment<byte>(bytes, 0, message.Count);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_6;
			int32_t L_11;
			L_11 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message2), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
			ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_2), L_10, 0, L_11, /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		}

IL_0061:
		{
			// Entry entry = new Entry(connectionId, eventType, segment);
			int32_t L_12 = ___connectionId0;
			int32_t L_13 = ___eventType1;
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_14 = V_2;
			Entry__ctor_m16D467EC396A94BEAC0906056580F62CFF4CA786((Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F *)(&V_3), L_12, L_13, L_14, /*hidden argument*/NULL);
			// queue.Enqueue(entry);
			Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * L_15 = __this->get_queue_0();
			Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  L_16 = V_3;
			NullCheck(L_15);
			Queue_1_Enqueue_m4D8253DFB768E660DC1837D52215DF4BB395E739(L_15, L_16, /*hidden argument*/Queue_1_Enqueue_m4D8253DFB768E660DC1837D52215DF4BB395E739_RuntimeMethod_var);
			// int oldCount = Count(connectionId);
			int32_t L_17 = ___connectionId0;
			int32_t L_18;
			L_18 = MagnificentReceivePipe_Count_mDC2DCE20153C2386E28724EE93E76C7F426F95E1(__this, L_17, /*hidden argument*/NULL);
			V_4 = L_18;
			// queueCounter[connectionId] = oldCount + 1;
			Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_19 = __this->get_queueCounter_2();
			int32_t L_20 = ___connectionId0;
			int32_t L_21 = V_4;
			NullCheck(L_19);
			Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1(L_19, L_20, ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), /*hidden argument*/Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x9C, FINALLY_0092);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0092;
	}

FINALLY_0092:
	{ // begin finally (depth: 1)
		{
			bool L_22 = V_1;
			if (!L_22)
			{
				goto IL_009b;
			}
		}

IL_0095:
		{
			MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_23 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_23, /*hidden argument*/NULL);
		}

IL_009b:
		{
			IL2CPP_END_FINALLY(146)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(146)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9C, IL_009c)
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Boolean Telepathy.MagnificentReceivePipe::TryPeek(System.Int32&,Telepathy.EventType&,System.ArraySegment`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MagnificentReceivePipe_TryPeek_m1A6A1A883C67D583DCBB32657BA8BFBD7BC3D2D7 (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, int32_t* ___connectionId0, int32_t* ___eventType1, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m799C1CD892CA37A6507A3AEC75EB5226B2026F79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * V_0 = NULL;
	bool V_1 = false;
	Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// connectionId = 0;
		int32_t* L_0 = ___connectionId0;
		*((int32_t*)L_0) = (int32_t)0;
		// eventType = EventType.Disconnected;
		int32_t* L_1 = ___eventType1;
		*((int32_t*)L_1) = (int32_t)2;
		// data = default;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_2 = ___data2;
		il2cpp_codegen_initobj(L_2, sizeof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE ));
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_3 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (queue.Count > 0)
			Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * L_4 = __this->get_queue_0();
			NullCheck(L_4);
			int32_t L_5;
			L_5 = Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_inline(L_4, /*hidden argument*/Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_RuntimeMethod_var);
			if ((((int32_t)L_5) <= ((int32_t)0)))
			{
				goto IL_0053;
			}
		}

IL_0027:
		{
			// Entry entry = queue.Peek();
			Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * L_6 = __this->get_queue_0();
			NullCheck(L_6);
			Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  L_7;
			L_7 = Queue_1_Peek_m799C1CD892CA37A6507A3AEC75EB5226B2026F79(L_6, /*hidden argument*/Queue_1_Peek_m799C1CD892CA37A6507A3AEC75EB5226B2026F79_RuntimeMethod_var);
			V_2 = L_7;
			// connectionId = entry.connectionId;
			int32_t* L_8 = ___connectionId0;
			Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  L_9 = V_2;
			int32_t L_10 = L_9.get_connectionId_0();
			*((int32_t*)L_8) = (int32_t)L_10;
			// eventType = entry.eventType;
			int32_t* L_11 = ___eventType1;
			Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  L_12 = V_2;
			int32_t L_13 = L_12.get_eventType_1();
			*((int32_t*)L_11) = (int32_t)L_13;
			// data = entry.data;
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_14 = ___data2;
			Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  L_15 = V_2;
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_16 = L_15.get_data_2();
			*(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_14 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_14)->____array_0), (void*)NULL);
			// return true;
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x61, FINALLY_0057);
		}

IL_0053:
		{
			// return false;
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x61, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		{
			bool L_17 = V_1;
			if (!L_17)
			{
				goto IL_0060;
			}
		}

IL_005a:
		{
			MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_18 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_18, /*hidden argument*/NULL);
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(87)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x61, IL_0061)
	}

IL_0061:
	{
		// }
		bool L_19 = V_3;
		return L_19;
	}
}
// System.Boolean Telepathy.MagnificentReceivePipe::TryDequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MagnificentReceivePipe_TryDequeue_m31EC2ED8AD580964E56FD94C39FCA251C4E0CFF6 (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_op_Inequality_m2F90ABA72EF71FE141BF71C4F7C2F846ED2E731B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mEAA586B68A7660037EF19DCF316D8FD5D4022F0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m38F63C3D300A64F3CB91DED21522E2912E50BDDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * V_0 = NULL;
	bool V_1 = false;
	Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		{
			MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_0 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (queue.Count > 0)
			Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * L_1 = __this->get_queue_0();
			NullCheck(L_1);
			int32_t L_2;
			L_2 = Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_inline(L_1, /*hidden argument*/Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_RuntimeMethod_var);
			if ((((int32_t)L_2) <= ((int32_t)0)))
			{
				goto IL_00a3;
			}
		}

IL_001d:
		{
			// Entry entry = queue.Dequeue();
			Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * L_3 = __this->get_queue_0();
			NullCheck(L_3);
			Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  L_4;
			L_4 = Queue_1_Dequeue_m38F63C3D300A64F3CB91DED21522E2912E50BDDC(L_3, /*hidden argument*/Queue_1_Dequeue_m38F63C3D300A64F3CB91DED21522E2912E50BDDC_RuntimeMethod_var);
			V_2 = L_4;
			// if (entry.data != default)
			Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  L_5 = V_2;
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_6 = L_5.get_data_2();
			il2cpp_codegen_initobj((&V_3), sizeof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE ));
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7 = V_3;
			bool L_8;
			L_8 = ArraySegment_1_op_Inequality_m2F90ABA72EF71FE141BF71C4F7C2F846ED2E731B(L_6, L_7, /*hidden argument*/ArraySegment_1_op_Inequality_m2F90ABA72EF71FE141BF71C4F7C2F846ED2E731B_RuntimeMethod_var);
			if (!L_8)
			{
				goto IL_0056;
			}
		}

IL_003f:
		{
			// pool.Return(entry.data.Array);
			Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * L_9 = __this->get_pool_1();
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_10 = (&V_2)->get_address_of_data_2();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
			L_11 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_10, /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
			NullCheck(L_9);
			Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1(L_9, L_11, /*hidden argument*/Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1_RuntimeMethod_var);
		}

IL_0056:
		{
			// queueCounter[entry.connectionId]--;
			Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_12 = __this->get_queueCounter_2();
			Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  L_13 = V_2;
			int32_t L_14 = L_13.get_connectionId_0();
			V_4 = L_14;
			Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_15 = L_12;
			int32_t L_16 = V_4;
			NullCheck(L_15);
			int32_t L_17;
			L_17 = Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1(L_15, L_16, /*hidden argument*/Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_RuntimeMethod_var);
			V_5 = L_17;
			int32_t L_18 = V_4;
			int32_t L_19 = V_5;
			NullCheck(L_15);
			Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1(L_15, L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_RuntimeMethod_var);
			// if (queueCounter[entry.connectionId] == 0)
			Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_20 = __this->get_queueCounter_2();
			Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  L_21 = V_2;
			int32_t L_22 = L_21.get_connectionId_0();
			NullCheck(L_20);
			int32_t L_23;
			L_23 = Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1(L_20, L_22, /*hidden argument*/Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_009e;
			}
		}

IL_008c:
		{
			// queueCounter.Remove(entry.connectionId);
			Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_24 = __this->get_queueCounter_2();
			Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  L_25 = V_2;
			int32_t L_26 = L_25.get_connectionId_0();
			NullCheck(L_24);
			bool L_27;
			L_27 = Dictionary_2_Remove_mEAA586B68A7660037EF19DCF316D8FD5D4022F0C(L_24, L_26, /*hidden argument*/Dictionary_2_Remove_mEAA586B68A7660037EF19DCF316D8FD5D4022F0C_RuntimeMethod_var);
		}

IL_009e:
		{
			// return true;
			V_6 = (bool)1;
			IL2CPP_LEAVE(0xB2, FINALLY_00a8);
		}

IL_00a3:
		{
			// return false;
			V_6 = (bool)0;
			IL2CPP_LEAVE(0xB2, FINALLY_00a8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a8;
	}

FINALLY_00a8:
	{ // begin finally (depth: 1)
		{
			bool L_28 = V_1;
			if (!L_28)
			{
				goto IL_00b1;
			}
		}

IL_00ab:
		{
			MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_29 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_29, /*hidden argument*/NULL);
		}

IL_00b1:
		{
			IL2CPP_END_FINALLY(168)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(168)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB2, IL_00b2)
	}

IL_00b2:
	{
		// }
		bool L_30 = V_6;
		return L_30;
	}
}
// System.Void Telepathy.MagnificentReceivePipe::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagnificentReceivePipe_Clear_mB24ADC9687EB459DCFC9D2E08D78409BBB5B2720 (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_op_Inequality_m2F90ABA72EF71FE141BF71C4F7C2F846ED2E731B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m38F63C3D300A64F3CB91DED21522E2912E50BDDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * V_0 = NULL;
	bool V_1 = false;
	Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		{
			MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_0 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			goto IL_0047;
		}

IL_000e:
		{
			// Entry entry = queue.Dequeue();
			Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * L_1 = __this->get_queue_0();
			NullCheck(L_1);
			Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  L_2;
			L_2 = Queue_1_Dequeue_m38F63C3D300A64F3CB91DED21522E2912E50BDDC(L_1, /*hidden argument*/Queue_1_Dequeue_m38F63C3D300A64F3CB91DED21522E2912E50BDDC_RuntimeMethod_var);
			V_2 = L_2;
			// if (entry.data != default)
			Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F  L_3 = V_2;
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_4 = L_3.get_data_2();
			il2cpp_codegen_initobj((&V_3), sizeof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE ));
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_5 = V_3;
			bool L_6;
			L_6 = ArraySegment_1_op_Inequality_m2F90ABA72EF71FE141BF71C4F7C2F846ED2E731B(L_4, L_5, /*hidden argument*/ArraySegment_1_op_Inequality_m2F90ABA72EF71FE141BF71C4F7C2F846ED2E731B_RuntimeMethod_var);
			if (!L_6)
			{
				goto IL_0047;
			}
		}

IL_0030:
		{
			// pool.Return(entry.data.Array);
			Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * L_7 = __this->get_pool_1();
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_8 = (&V_2)->get_address_of_data_2();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
			L_9 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_8, /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
			NullCheck(L_7);
			Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1(L_7, L_9, /*hidden argument*/Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1_RuntimeMethod_var);
		}

IL_0047:
		{
			// while (queue.Count > 0)
			Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * L_10 = __this->get_queue_0();
			NullCheck(L_10);
			int32_t L_11;
			L_11 = Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_inline(L_10, /*hidden argument*/Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_RuntimeMethod_var);
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_000e;
			}
		}

IL_0055:
		{
			// queueCounter.Clear();
			Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_12 = __this->get_queueCounter_2();
			NullCheck(L_12);
			Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7(L_12, /*hidden argument*/Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x6C, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_006b;
			}
		}

IL_0065:
		{
			MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_14 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_14, /*hidden argument*/NULL);
		}

IL_006b:
		{
			IL2CPP_END_FINALLY(98)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
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
// System.Void Telepathy.MagnificentSendPipe::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagnificentSendPipe__ctor_mA98E85B0DD20260C38F3912383B3BCEF9F31C23E (MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m75C930823750A53153FBC8864D8A23F358DCDD20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1__ctor_mC367B78EB39E8FF89828BD95C3BEF3C381414F7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m115E087F9E4EE8AA3564F7F7F3403044EBBA84E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m054A7D34BDA35D2A9B6B3D49E81AD7944A785D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67 * V_0 = NULL;
	{
		// readonly Queue<ArraySegment<byte>> queue = new Queue<ArraySegment<byte>>();
		Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * L_0 = (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 *)il2cpp_codegen_object_new(Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4_il2cpp_TypeInfo_var);
		Queue_1__ctor_m115E087F9E4EE8AA3564F7F7F3403044EBBA84E9(L_0, /*hidden argument*/Queue_1__ctor_m115E087F9E4EE8AA3564F7F7F3403044EBBA84E9_RuntimeMethod_var);
		__this->set_queue_0(L_0);
		U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67 * L_1 = (U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_m5DD870628C7E2B1F1482E1B6C52D150A3C619734(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67 * L_2 = V_0;
		int32_t L_3 = ___MaxMessageSize0;
		NullCheck(L_2);
		L_2->set_MaxMessageSize_0(L_3);
		// public MagnificentSendPipe(int MaxMessageSize)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// pool = new Pool<byte[]>(() => new byte[MaxMessageSize]);
		U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67 * L_4 = V_0;
		Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * L_5 = (Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 *)il2cpp_codegen_object_new(Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473_il2cpp_TypeInfo_var);
		Func_1__ctor_m75C930823750A53153FBC8864D8A23F358DCDD20(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m054A7D34BDA35D2A9B6B3D49E81AD7944A785D8D_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m75C930823750A53153FBC8864D8A23F358DCDD20_RuntimeMethod_var);
		Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * L_6 = (Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 *)il2cpp_codegen_object_new(Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39_il2cpp_TypeInfo_var);
		Pool_1__ctor_mC367B78EB39E8FF89828BD95C3BEF3C381414F7A(L_6, L_5, /*hidden argument*/Pool_1__ctor_mC367B78EB39E8FF89828BD95C3BEF3C381414F7A_RuntimeMethod_var);
		__this->set_pool_1(L_6);
		// }
		return;
	}
}
// System.Int32 Telepathy.MagnificentSendPipe::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MagnificentSendPipe_get_Count_m680B76C7D6A6D7A2FA8391613CFCCE7EA76F182C (MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// get { lock (this) { return queue.Count; } }
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_0 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// get { lock (this) { return queue.Count; } }
		Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * L_1 = __this->get_queue_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_inline(L_1, /*hidden argument*/Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_RuntimeMethod_var);
		V_2 = L_2;
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_4 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		// get { lock (this) { return queue.Count; } }
		int32_t L_5 = V_2;
		return L_5;
	}
}
// System.Int32 Telepathy.MagnificentSendPipe::get_PoolCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MagnificentSendPipe_get_PoolCount_mF5BDFCACEB87B68297F0EA08054D991888541F7B (MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Count_m4940060DD24E59DD092158C641EF54F1476FF284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// get { lock (this) { return pool.Count(); } }
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_0 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// get { lock (this) { return pool.Count(); } }
		Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * L_1 = __this->get_pool_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Pool_1_Count_m4940060DD24E59DD092158C641EF54F1476FF284(L_1, /*hidden argument*/Pool_1_Count_m4940060DD24E59DD092158C641EF54F1476FF284_RuntimeMethod_var);
		V_2 = L_2;
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_4 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		// get { lock (this) { return pool.Count(); } }
		int32_t L_5 = V_2;
		return L_5;
	}
}
// System.Void Telepathy.MagnificentSendPipe::Enqueue(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagnificentSendPipe_Enqueue_m6FFBD60A0C0E9CD3936155A74F25ED54153AD47C (MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Take_mDC4AF2F4C3E9438AAAD417AD214D7C78D0BA48E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m0220CD9EDED8E6F2081915E74EA5B9487C1D2F5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_0 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// byte[] bytes = pool.Take();
		Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * L_1 = __this->get_pool_1();
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = Pool_1_Take_mDC4AF2F4C3E9438AAAD417AD214D7C78D0BA48E5(L_1, /*hidden argument*/Pool_1_Take_mDC4AF2F4C3E9438AAAD417AD214D7C78D0BA48E5_RuntimeMethod_var);
		V_2 = L_2;
		// Buffer.BlockCopy(message.Array, message.Offset, bytes, 0, message.Count);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message0), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_4;
		L_4 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message0), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_2;
		int32_t L_6;
		L_6 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message0), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_3, L_4, (RuntimeArray *)(RuntimeArray *)L_5, 0, L_6, /*hidden argument*/NULL);
		// ArraySegment<byte> segment = new ArraySegment<byte>(bytes, 0, message.Count);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_2;
		int32_t L_8;
		L_8 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message0), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_3), L_7, 0, L_8, /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		// queue.Enqueue(segment);
		Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * L_9 = __this->get_queue_0();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_10 = V_3;
		NullCheck(L_9);
		Queue_1_Enqueue_m0220CD9EDED8E6F2081915E74EA5B9487C1D2F5C(L_9, L_10, /*hidden argument*/Queue_1_Enqueue_m0220CD9EDED8E6F2081915E74EA5B9487C1D2F5C_RuntimeMethod_var);
		// }
		IL2CPP_LEAVE(0x5C, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_005b;
			}
		}

IL_0055:
		{
			MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_12 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_12, /*hidden argument*/NULL);
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Boolean Telepathy.MagnificentSendPipe::DequeueAndSerializeAll(System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MagnificentSendPipe_DequeueAndSerializeAll_mACDD88E0CEE4AD767F02352193F42B7FB64311DC (MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___payload0, int32_t* ___packetSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4F7BB11ED74CD6DF99B42C5C5484129FAF2F9775_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE4BEA0773ADA5A1CAB7977446BDC1E04CE6975C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9CA2D285192F3AF382389E262B7D5F6F77F99036_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m05843BEC6CCB4AD88FD9A9F531DDD1B567B4F88B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_GetEnumerator_mA6FBE44FE39BB9863857A199C57579B49243FF4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		{
			MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_0 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			// packetSize = 0;
			int32_t* L_1 = ___packetSize1;
			*((int32_t*)L_1) = (int32_t)0;
			// if (queue.Count == 0)
			Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * L_2 = __this->get_queue_0();
			NullCheck(L_2);
			int32_t L_3;
			L_3 = Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_inline(L_2, /*hidden argument*/Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_0023;
			}
		}

IL_001c:
		{
			// return false;
			V_3 = (bool)0;
			IL2CPP_LEAVE(0xF3, FINALLY_00e9);
		}

IL_0023:
		{
			// packetSize = 0;
			int32_t* L_4 = ___packetSize1;
			*((int32_t*)L_4) = (int32_t)0;
			// foreach (ArraySegment<byte> message in queue)
			Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * L_5 = __this->get_queue_0();
			NullCheck(L_5);
			Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002  L_6;
			L_6 = Queue_1_GetEnumerator_mA6FBE44FE39BB9863857A199C57579B49243FF4B(L_5, /*hidden argument*/Queue_1_GetEnumerator_mA6FBE44FE39BB9863857A199C57579B49243FF4B_RuntimeMethod_var);
			V_4 = L_6;
		}

IL_0033:
		try
		{ // begin try (depth: 2)
			{
				goto IL_004c;
			}

IL_0035:
			{
				// foreach (ArraySegment<byte> message in queue)
				ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7;
				L_7 = Enumerator_get_Current_m9CA2D285192F3AF382389E262B7D5F6F77F99036((Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m9CA2D285192F3AF382389E262B7D5F6F77F99036_RuntimeMethod_var);
				V_5 = L_7;
				// packetSize += 4 + message.Count; // header + content
				int32_t* L_8 = ___packetSize1;
				int32_t* L_9 = ___packetSize1;
				int32_t L_10 = *((int32_t*)L_9);
				int32_t L_11;
				L_11 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_5), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
				*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)L_11))));
			}

IL_004c:
			{
				// foreach (ArraySegment<byte> message in queue)
				bool L_12;
				L_12 = Enumerator_MoveNext_mE4BEA0773ADA5A1CAB7977446BDC1E04CE6975C7((Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mE4BEA0773ADA5A1CAB7977446BDC1E04CE6975C7_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0035;
				}
			}

IL_0055:
			{
				IL2CPP_LEAVE(0x65, FINALLY_0057);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0057;
		}

FINALLY_0057:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m4F7BB11ED74CD6DF99B42C5C5484129FAF2F9775((Enumerator_t9EBA91593DE788D5BDECDCA9BE03F710BDE13002 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m4F7BB11ED74CD6DF99B42C5C5484129FAF2F9775_RuntimeMethod_var);
			IL2CPP_END_FINALLY(87)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(87)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x65, IL_0065)
		}

IL_0065:
		{
			// if (payload == null || payload.Length < packetSize)
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_13 = ___payload0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = *((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_13);
			if (!L_14)
			{
				goto IL_0071;
			}
		}

IL_0069:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_15 = ___payload0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = *((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_15);
			NullCheck(L_16);
			int32_t* L_17 = ___packetSize1;
			int32_t L_18 = *((int32_t*)L_17);
			if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))) >= ((int32_t)L_18)))
			{
				goto IL_007a;
			}
		}

IL_0071:
		{
			// payload = new byte[packetSize];
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_19 = ___payload0;
			int32_t* L_20 = ___packetSize1;
			int32_t L_21 = *((int32_t*)L_20);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_21);
			*((RuntimeObject **)L_19) = (RuntimeObject *)L_22;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_19, (void*)(RuntimeObject *)L_22);
		}

IL_007a:
		{
			// int position = 0;
			V_2 = 0;
			goto IL_00d7;
		}

IL_007e:
		{
			// ArraySegment<byte> message = queue.Dequeue();
			Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * L_23 = __this->get_queue_0();
			NullCheck(L_23);
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_24;
			L_24 = Queue_1_Dequeue_m05843BEC6CCB4AD88FD9A9F531DDD1B567B4F88B(L_23, /*hidden argument*/Queue_1_Dequeue_m05843BEC6CCB4AD88FD9A9F531DDD1B567B4F88B_RuntimeMethod_var);
			V_6 = L_24;
			// Utils.IntToBytesBigEndianNonAlloc(message.Count, payload, position);
			int32_t L_25;
			L_25 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_6), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_26 = ___payload0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = *((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_26);
			int32_t L_28 = V_2;
			Utils_IntToBytesBigEndianNonAlloc_mF4E67C91FA766A66D63B83AB6108B052C4EAAA03(L_25, L_27, L_28, /*hidden argument*/NULL);
			// position += 4;
			int32_t L_29 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)4));
			// Buffer.BlockCopy(message.Array, message.Offset, payload, position, message.Count);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30;
			L_30 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_6), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
			int32_t L_31;
			L_31 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_6), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_32 = ___payload0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = *((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_32);
			int32_t L_34 = V_2;
			int32_t L_35;
			L_35 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_6), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
			Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_30, L_31, (RuntimeArray *)(RuntimeArray *)L_33, L_34, L_35, /*hidden argument*/NULL);
			// position += message.Count;
			int32_t L_36 = V_2;
			int32_t L_37;
			L_37 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_6), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_37));
			// pool.Return(message.Array);
			Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * L_38 = __this->get_pool_1();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39;
			L_39 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_6), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
			NullCheck(L_38);
			Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1(L_38, L_39, /*hidden argument*/Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1_RuntimeMethod_var);
		}

IL_00d7:
		{
			// while (queue.Count > 0)
			Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * L_40 = __this->get_queue_0();
			NullCheck(L_40);
			int32_t L_41;
			L_41 = Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_inline(L_40, /*hidden argument*/Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_RuntimeMethod_var);
			if ((((int32_t)L_41) > ((int32_t)0)))
			{
				goto IL_007e;
			}
		}

IL_00e5:
		{
			// return true;
			V_3 = (bool)1;
			IL2CPP_LEAVE(0xF3, FINALLY_00e9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e9;
	}

FINALLY_00e9:
	{ // begin finally (depth: 1)
		{
			bool L_42 = V_1;
			if (!L_42)
			{
				goto IL_00f2;
			}
		}

IL_00ec:
		{
			MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_43 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_43, /*hidden argument*/NULL);
		}

IL_00f2:
		{
			IL2CPP_END_FINALLY(233)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(233)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF3, IL_00f3)
	}

IL_00f3:
	{
		// }
		bool L_44 = V_3;
		return L_44;
	}
}
// System.Void Telepathy.MagnificentSendPipe::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagnificentSendPipe_Clear_mD73F190906FDE2651D2027620DFB11345CD11F3F (MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m05843BEC6CCB4AD88FD9A9F531DDD1B567B4F88B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * V_0 = NULL;
	bool V_1 = false;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		{
			MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_0 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			goto IL_002c;
		}

IL_000e:
		{
			// pool.Return(queue.Dequeue().Array);
			Pool_1_t0B74FCC50B58CFDAFF9EF8EDD6343EA4DAC71C39 * L_1 = __this->get_pool_1();
			Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * L_2 = __this->get_queue_0();
			NullCheck(L_2);
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_3;
			L_3 = Queue_1_Dequeue_m05843BEC6CCB4AD88FD9A9F531DDD1B567B4F88B(L_2, /*hidden argument*/Queue_1_Dequeue_m05843BEC6CCB4AD88FD9A9F531DDD1B567B4F88B_RuntimeMethod_var);
			V_2 = L_3;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
			L_4 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_2), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
			NullCheck(L_1);
			Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1(L_1, L_4, /*hidden argument*/Pool_1_Return_mD09F55AFBFDE9FB62D277B369D1F7AE6215A7AA1_RuntimeMethod_var);
		}

IL_002c:
		{
			// while (queue.Count > 0)
			Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * L_5 = __this->get_queue_0();
			NullCheck(L_5);
			int32_t L_6;
			L_6 = Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_inline(L_5, /*hidden argument*/Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_RuntimeMethod_var);
			if ((((int32_t)L_6) > ((int32_t)0)))
			{
				goto IL_000e;
			}
		}

IL_003a:
		{
			// }
			IL2CPP_LEAVE(0x46, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0045;
			}
		}

IL_003f:
		{
			MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0045:
		{
			IL2CPP_END_FINALLY(60)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x46, IL_0046)
	}

IL_0046:
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
// System.Int32 Telepathy.NetworkStreamExtensions::ReadSafely(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkStreamExtensions_ReadSafely_mB893276BBD1855945311D2857783DF1B847A608B (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, int32_t ___offset2, int32_t ___size3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// return stream.Read(buffer, offset, size);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_0 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer1;
		int32_t L_2 = ___offset2;
		int32_t L_3 = ___size3;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(24 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_0011;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000c;
		}
		throw e;
	}

CATCH_000c:
	{ // begin catch(System.IO.IOException)
		// catch (IOException)
		// return 0;
		V_0 = 0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0011;
	} // end catch (depth: 1)

IL_0011:
	{
		// }
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Telepathy.NetworkStreamExtensions::ReadExactly(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkStreamExtensions_ReadExactly_m0B7F210DEA57D5C3A1206F369EF3A6F2506C04E6 (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, int32_t ___amount2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int bytesRead = 0;
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		// int remaining = amount - bytesRead;
		int32_t L_0 = ___amount2;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		// int result = stream.ReadSafely(buffer, bytesRead, remaining);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_2 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer1;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6;
		L_6 = NetworkStreamExtensions_ReadSafely_mB893276BBD1855945311D2857783DF1B847A608B(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// if (result == 0)
		int32_t L_7 = V_2;
		if (L_7)
		{
			goto IL_0017;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// bytesRead += result;
		int32_t L_8 = V_0;
		int32_t L_9 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
	}

IL_001b:
	{
		// while (bytesRead < amount)
		int32_t L_10 = V_0;
		int32_t L_11 = ___amount2;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
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
// System.Int32 Telepathy.Server::get_ReceivePipeTotalCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_get_ReceivePipeTotalCount_mF76F5B2DF98C4B5CA3B88350F2EE54C0287511BC (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method)
{
	{
		// public int ReceivePipeTotalCount => receivePipe.TotalCount;
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_0 = __this->get_receivePipe_11();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = MagnificentReceivePipe_get_TotalCount_mDF25AEA16B7A3F9ED7FF4F18AF1D1CFB33D7C9FD(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Telepathy.Server::NextConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_NextConnectionId_mF1604F268FEE0CC873D00C5F30E8BA6770DF8794 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int id = Interlocked.Increment(ref counter);
		int32_t* L_0 = __this->get_address_of_counter_13();
		int32_t L_1;
		L_1 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (id == int.MaxValue)
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_002b;
		}
	}
	{
		// throw new Exception("connection id limit reached: " + id);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D87D9F561182AA5628B8C78869C5C1AE33F0A33)), L_3, /*hidden argument*/NULL);
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Server_NextConnectionId_mF1604F268FEE0CC873D00C5F30E8BA6770DF8794_RuntimeMethod_var)));
	}

IL_002b:
	{
		// return id;
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Telepathy.Server::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_get_Active_mE40759A4A854C0CF788380F7BFD303D6A99A09C5 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method)
{
	{
		// public bool Active => listenerThread != null && listenerThread.IsAlive;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0 = __this->get_listenerThread_8();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1 = __this->get_listenerThread_8();
		NullCheck(L_1);
		bool L_2;
		L_2 = Thread_get_IsAlive_mFA0C1391D1A22D18A7D010F251D537530B04E015(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Telepathy.Server::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server__ctor_m2B64EC33BE7222CEA9D9DC5BE390B82C94D2EAC0 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_mB0C6B9E90794FD880C16BDE1ABA6F52C5B2A79B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int SendQueueLimit = 10000;
		__this->set_SendQueueLimit_9(((int32_t)10000));
		// public int ReceiveQueueLimit = 10000;
		__this->set_ReceiveQueueLimit_10(((int32_t)10000));
		// readonly ConcurrentDictionary<int, ConnectionState> clients = new ConcurrentDictionary<int, ConnectionState>();
		ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * L_0 = (ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 *)il2cpp_codegen_object_new(ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2__ctor_mB0C6B9E90794FD880C16BDE1ABA6F52C5B2A79B8(L_0, /*hidden argument*/ConcurrentDictionary_2__ctor_mB0C6B9E90794FD880C16BDE1ABA6F52C5B2A79B8_RuntimeMethod_var);
		__this->set_clients_12(L_0);
		// public Server(int MaxMessageSize) : base(MaxMessageSize) {}
		int32_t L_1 = ___MaxMessageSize0;
		Common__ctor_mDA05534E3B2F1C55A63B8FB653D725C5709634A5(__this, L_1, /*hidden argument*/NULL);
		// public Server(int MaxMessageSize) : base(MaxMessageSize) {}
		return;
	}
}
// System.Void Telepathy.Server::Listen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Listen_mD18CE0EB1B3B66AD0B01DB22C7B3BB54AB3A3C33 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___port0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_mBD7D9EDD0293D5A4D2E77FF7B96A3F06CE7BFFDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CListenU3Eb__0_m577EAE6F290DBAA34C42068DD7C8A7BF7F41852B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CListenU3Eb__1_mB10F77EA316724A661A95F91B429363953624CE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF897DA240CE2C2852CEAB4B37E66C1E8CE1D8AD8);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * V_0 = NULL;
	ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153 * V_1 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153 * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B4_2 = NULL;
	ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153 * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B5_2 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B8_2 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B7_2 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B9_2 = NULL;
	Exception_t * G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B12_2 = NULL;
	Exception_t * G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B11_2 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B13_2 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// listener = TcpListener.Create(port);
			int32_t L_0 = ___port0;
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_1;
			L_1 = TcpListener_Create_m3649DD4158C295B4A568282B618C8DE629CE672F(L_0, /*hidden argument*/NULL);
			__this->set_listener_7(L_1);
			// listener.Server.NoDelay = NoDelay;
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_2 = __this->get_listener_7();
			NullCheck(L_2);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_3;
			L_3 = TcpListener_get_Server_mDFBCA0876377BA9FBF4B1937D5F41268D9AE7453_inline(L_2, /*hidden argument*/NULL);
			bool L_4 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_NoDelay_0();
			NullCheck(L_3);
			Socket_set_NoDelay_m34DCB8BF5275A85E1687308D0D016E860F229732(L_3, L_4, /*hidden argument*/NULL);
			// listener.Server.SendTimeout = SendTimeout;
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_5 = __this->get_listener_7();
			NullCheck(L_5);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_6;
			L_6 = TcpListener_get_Server_mDFBCA0876377BA9FBF4B1937D5F41268D9AE7453_inline(L_5, /*hidden argument*/NULL);
			int32_t L_7 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_SendTimeout_2();
			NullCheck(L_6);
			Socket_set_SendTimeout_mD92AF13D6A05318E6F892F0B145136138E2181E5(L_6, L_7, /*hidden argument*/NULL);
			// listener.Server.ReceiveTimeout = ReceiveTimeout;
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_8 = __this->get_listener_7();
			NullCheck(L_8);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_9;
			L_9 = TcpListener_get_Server_mDFBCA0876377BA9FBF4B1937D5F41268D9AE7453_inline(L_8, /*hidden argument*/NULL);
			int32_t L_10 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_ReceiveTimeout_3();
			NullCheck(L_9);
			Socket_set_ReceiveTimeout_mF081C1A1416112CE1ED3609594F76062B4B4DB23(L_9, L_10, /*hidden argument*/NULL);
			// listener.Start();
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_11 = __this->get_listener_7();
			NullCheck(L_11);
			TcpListener_Start_m95F4F504E8BF63D90E857AF6C794AC25EF971C68(L_11, /*hidden argument*/NULL);
			// Log.Info("Server: listening port=" + port);
			IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_12 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->get_Info_0();
			String_t* L_13;
			L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___port0), /*hidden argument*/NULL);
			String_t* L_14;
			L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF897DA240CE2C2852CEAB4B37E66C1E8CE1D8AD8, L_13, /*hidden argument*/NULL);
			NullCheck(L_12);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_12, L_14, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		}

IL_0074:
		{
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_15 = (U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass16_0__ctor_mA2D1EC3D5F333B34D8BDE390C39E17970E7499DE(L_15, /*hidden argument*/NULL);
			V_0 = L_15;
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_16 = V_0;
			NullCheck(L_16);
			L_16->set_U3CU3E4__this_4(__this);
			// TcpClient client = listener.AcceptTcpClient();
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_17 = V_0;
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_18 = __this->get_listener_7();
			NullCheck(L_18);
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_19;
			L_19 = TcpListener_AcceptTcpClient_m53BD54B8278B2288877965A92644FD84BCD9D4A5(L_18, /*hidden argument*/NULL);
			NullCheck(L_17);
			L_17->set_client_1(L_19);
			// client.NoDelay = NoDelay;
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_20 = V_0;
			NullCheck(L_20);
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_21 = L_20->get_client_1();
			bool L_22 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_NoDelay_0();
			NullCheck(L_21);
			TcpClient_set_NoDelay_mCF4F17DD8164A69A38002349ED84F1394E16BC79(L_21, L_22, /*hidden argument*/NULL);
			// client.SendTimeout = SendTimeout;
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_23 = V_0;
			NullCheck(L_23);
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_24 = L_23->get_client_1();
			int32_t L_25 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_SendTimeout_2();
			NullCheck(L_24);
			TcpClient_set_SendTimeout_mD141EFE7E09D66239D16EEAF6C23DB904D809B73(L_24, L_25, /*hidden argument*/NULL);
			// client.ReceiveTimeout = ReceiveTimeout;
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_26 = V_0;
			NullCheck(L_26);
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_27 = L_26->get_client_1();
			int32_t L_28 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_ReceiveTimeout_3();
			NullCheck(L_27);
			TcpClient_set_ReceiveTimeout_m6072CA469991AE169ED42A07C18C6538E6FEAACB(L_27, L_28, /*hidden argument*/NULL);
			// int connectionId = NextConnectionId();
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_29 = V_0;
			int32_t L_30;
			L_30 = Server_NextConnectionId_mF1604F268FEE0CC873D00C5F30E8BA6770DF8794(__this, /*hidden argument*/NULL);
			NullCheck(L_29);
			L_29->set_connectionId_0(L_30);
			// ConnectionState connection = new ConnectionState(client, MaxMessageSize);
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_31 = V_0;
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_32 = V_0;
			NullCheck(L_32);
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_33 = L_32->get_client_1();
			int32_t L_34 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_MaxMessageSize_1();
			ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * L_35 = (ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)il2cpp_codegen_object_new(ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1_il2cpp_TypeInfo_var);
			ConnectionState__ctor_m45DB06B196E85F5602DB92A7482FA933344C7361(L_35, L_33, L_34, /*hidden argument*/NULL);
			NullCheck(L_31);
			L_31->set_connection_2(L_35);
			// clients[connectionId] = connection;
			ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * L_36 = __this->get_clients_12();
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_37 = V_0;
			NullCheck(L_37);
			int32_t L_38 = L_37->get_connectionId_0();
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_39 = V_0;
			NullCheck(L_39);
			ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * L_40 = L_39->get_connection_2();
			NullCheck(L_36);
			ConcurrentDictionary_2_set_Item_mBD7D9EDD0293D5A4D2E77FF7B96A3F06CE7BFFDD(L_36, L_38, L_40, /*hidden argument*/ConcurrentDictionary_2_set_Item_mBD7D9EDD0293D5A4D2E77FF7B96A3F06CE7BFFDD_RuntimeMethod_var);
			// Thread sendThread = new Thread(() =>
			// {
			//     // wrap in try-catch, otherwise Thread exceptions
			//     // are silent
			//     try
			//     {
			//         // run the send loop
			//         // IMPORTANT: DO NOT SHARE STATE ACROSS MULTIPLE THREADS!
			//         ThreadFunctions.SendLoop(connectionId, client, connection.sendPipe, connection.sendPending);
			//     }
			//     catch (ThreadAbortException)
			//     {
			//         // happens on stop. don't log anything.
			//         // (we catch it in SendLoop too, but it still gets
			//         //  through to here when aborting. don't show an
			//         //  error.)
			//     }
			//     catch (Exception exception)
			//     {
			//         Log.Error("Server send thread exception: " + exception);
			//     }
			// });
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_41 = V_0;
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_42 = V_0;
			ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_43 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
			ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_43, L_42, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass16_0_U3CListenU3Eb__0_m577EAE6F290DBAA34C42068DD7C8A7BF7F41852B_RuntimeMethod_var), /*hidden argument*/NULL);
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_44 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
			Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_44, L_43, /*hidden argument*/NULL);
			NullCheck(L_41);
			L_41->set_sendThread_3(L_44);
			// sendThread.IsBackground = true;
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_45 = V_0;
			NullCheck(L_45);
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_46 = L_45->get_sendThread_3();
			NullCheck(L_46);
			Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_46, (bool)1, /*hidden argument*/NULL);
			// sendThread.Start();
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_47 = V_0;
			NullCheck(L_47);
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_48 = L_47->get_sendThread_3();
			NullCheck(L_48);
			Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_48, /*hidden argument*/NULL);
			// Thread receiveThread = new Thread(() =>
			// {
			//     // wrap in try-catch, otherwise Thread exceptions
			//     // are silent
			//     try
			//     {
			//         // run the receive loop
			//         // (receive pipe is shared across all loops)
			//         ThreadFunctions.ReceiveLoop(connectionId, client, MaxMessageSize, receivePipe, ReceiveQueueLimit);
			// 
			//         // IMPORTANT: do NOT remove from clients after the
			//         // thread ends. need to do it in Tick() so that the
			//         // disconnect event in the pipe is still processed.
			//         // (removing client immediately would mean that the
			//         //  pipe is lost and the disconnect event is never
			//         //  processed)
			// 
			//         // sendthread might be waiting on ManualResetEvent,
			//         // so let's make sure to end it if the connection
			//         // closed.
			//         // otherwise the send thread would only end if it's
			//         // actually sending data while the connection is
			//         // closed.
			//         sendThread.Interrupt();
			//     }
			//     catch (Exception exception)
			//     {
			//         Log.Error("Server client thread exception: " + exception);
			//     }
			// });
			U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * L_49 = V_0;
			ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_50 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
			ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_50, L_49, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass16_0_U3CListenU3Eb__1_mB10F77EA316724A661A95F91B429363953624CE8_RuntimeMethod_var), /*hidden argument*/NULL);
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_51 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
			Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_51, L_50, /*hidden argument*/NULL);
			// receiveThread.IsBackground = true;
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_52 = L_51;
			NullCheck(L_52);
			Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_52, (bool)1, /*hidden argument*/NULL);
			// receiveThread.Start();
			NullCheck(L_52);
			Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_52, /*hidden argument*/NULL);
			// while (true)
			goto IL_0074;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_014f;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0173;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0197;
		}
		throw e;
	}

CATCH_014f:
	{ // begin catch(System.Threading.ThreadAbortException)
		{
			// catch (ThreadAbortException exception)
			V_1 = ((ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153 *)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153 *));
			// Log.Info("Server thread aborted. That's okay. " + exception);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var)));
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_53 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))))->get_Info_0();
			ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153 * L_54 = V_1;
			ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153 * L_55 = L_54;
			G_B3_0 = L_55;
			G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3020C29380E843AD920758CE3613F4BE5BCFD87));
			G_B3_2 = L_53;
			if (L_55)
			{
				G_B4_0 = L_55;
				G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3020C29380E843AD920758CE3613F4BE5BCFD87));
				G_B4_2 = L_53;
				goto IL_0162;
			}
		}

IL_015e:
		{
			G_B5_0 = ((String_t*)(NULL));
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_0167;
		}

IL_0162:
		{
			NullCheck(G_B4_0);
			String_t* L_56;
			L_56 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
			G_B5_0 = L_56;
			G_B5_1 = G_B4_1;
			G_B5_2 = G_B4_2;
		}

IL_0167:
		{
			String_t* L_57;
			L_57 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B5_1, G_B5_0, /*hidden argument*/NULL);
			NullCheck(G_B5_2);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B5_2, L_57, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var)));
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01bb;
		}
	} // end catch (depth: 1)

CATCH_0173:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			// catch (SocketException exception)
			V_2 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
			// Log.Info("Server Thread stopped. That's okay. " + exception);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var)));
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_58 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))))->get_Info_0();
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_59 = V_2;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_60 = L_59;
			G_B7_0 = L_60;
			G_B7_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral836FAE3C06390C4BBEF008C97F59F519B064497E));
			G_B7_2 = L_58;
			if (L_60)
			{
				G_B8_0 = L_60;
				G_B8_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral836FAE3C06390C4BBEF008C97F59F519B064497E));
				G_B8_2 = L_58;
				goto IL_0186;
			}
		}

IL_0182:
		{
			G_B9_0 = ((String_t*)(NULL));
			G_B9_1 = G_B7_1;
			G_B9_2 = G_B7_2;
			goto IL_018b;
		}

IL_0186:
		{
			NullCheck(G_B8_0);
			String_t* L_61;
			L_61 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
			G_B9_0 = L_61;
			G_B9_1 = G_B8_1;
			G_B9_2 = G_B8_2;
		}

IL_018b:
		{
			String_t* L_62;
			L_62 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B9_1, G_B9_0, /*hidden argument*/NULL);
			NullCheck(G_B9_2);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B9_2, L_62, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var)));
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01bb;
		}
	} // end catch (depth: 1)

CATCH_0197:
	{ // begin catch(System.Exception)
		{
			// catch (Exception exception)
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Log.Error("Server Exception: " + exception);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var)));
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_63 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))))->get_Error_2();
			Exception_t * L_64 = V_3;
			Exception_t * L_65 = L_64;
			G_B11_0 = L_65;
			G_B11_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29EFA7B69EABF3CC848F04677350EBCCB484032A));
			G_B11_2 = L_63;
			if (L_65)
			{
				G_B12_0 = L_65;
				G_B12_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29EFA7B69EABF3CC848F04677350EBCCB484032A));
				G_B12_2 = L_63;
				goto IL_01aa;
			}
		}

IL_01a6:
		{
			G_B13_0 = ((String_t*)(NULL));
			G_B13_1 = G_B11_1;
			G_B13_2 = G_B11_2;
			goto IL_01af;
		}

IL_01aa:
		{
			NullCheck(G_B12_0);
			String_t* L_66;
			L_66 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B12_0);
			G_B13_0 = L_66;
			G_B13_1 = G_B12_1;
			G_B13_2 = G_B12_2;
		}

IL_01af:
		{
			String_t* L_67;
			L_67 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B13_1, G_B13_0, /*hidden argument*/NULL);
			NullCheck(G_B13_2);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B13_2, L_67, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var)));
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01bb;
		}
	} // end catch (depth: 1)

IL_01bb:
	{
		// }
		return;
	}
}
// System.Boolean Telepathy.Server::Start(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Start_mA3609AF20E968EBDF19F8DC77776B69CA9E7A7EE (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___port0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CStartU3Eb__0_m467C29EFA344D22A0604003AFF3645327282148C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral484D794F5E31CB1BBFD2C636C2C877C245206317);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6 * L_0 = (U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass17_0__ctor_mC756D174017F26127EE17D9658D128473CBFA338(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6 * L_2 = V_0;
		int32_t L_3 = ___port0;
		NullCheck(L_2);
		L_2->set_port_1(L_3);
		// if (Active) return false;
		bool L_4;
		L_4 = Server_get_Active_mE40759A4A854C0CF788380F7BFD303D6A99A09C5(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// if (Active) return false;
		return (bool)0;
	}

IL_001e:
	{
		// receivePipe = new MagnificentReceivePipe(MaxMessageSize);
		int32_t L_5 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_MaxMessageSize_1();
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_6 = (MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A *)il2cpp_codegen_object_new(MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A_il2cpp_TypeInfo_var);
		MagnificentReceivePipe__ctor_m8EDE7C1C7F405D1930220D739C4A53681ED65434(L_6, L_5, /*hidden argument*/NULL);
		__this->set_receivePipe_11(L_6);
		// Log.Info("Server: Start port=" + port);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_7 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->get_Info_0();
		U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6 * L_8 = V_0;
		NullCheck(L_8);
		int32_t* L_9 = L_8->get_address_of_port_1();
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral484D794F5E31CB1BBFD2C636C2C877C245206317, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_7, L_11, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// listenerThread = new Thread(() => { Listen(port); });
		U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6 * L_12 = V_0;
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_13 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass17_0_U3CStartU3Eb__0_m467C29EFA344D22A0604003AFF3645327282148C_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_14 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_14, L_13, /*hidden argument*/NULL);
		__this->set_listenerThread_8(L_14);
		// listenerThread.IsBackground = true;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_15 = __this->get_listenerThread_8();
		NullCheck(L_15);
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_15, (bool)1, /*hidden argument*/NULL);
		// listenerThread.Priority = ThreadPriority.BelowNormal;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_16 = __this->get_listenerThread_8();
		NullCheck(L_16);
		Thread_set_Priority_m8AAD823B41BAD106012A739876628BBFDB0E7F66(L_16, 1, /*hidden argument*/NULL);
		// listenerThread.Start();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_17 = __this->get_listenerThread_8();
		NullCheck(L_17);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_17, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void Telepathy.Server::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Stop_m5D7C534FDE0D25A15B8498FF0A979FE856364C02 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_Clear_m4196F44C1E797FD8491DD130AB9F725A16061072_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_GetEnumerator_m628A891D7FCF964651EA598577A19B1EFA1DA9BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t74D7778F7B4047C4337500866378BB06C07F3608_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m107A9CFD0B121D3E893954D086D9F08B0DD4F5B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6B2741769240CC9F111B4E04526A7EDDE77A6C0);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t8EDD87A6EB3A2B9515C7F4C79078100243D01687  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * G_B4_0 = NULL;
	TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * G_B3_0 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * G_B7_0 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * G_B6_0 = NULL;
	{
		// if (!Active) return;
		bool L_0;
		L_0 = Server_get_Active_mE40759A4A854C0CF788380F7BFD303D6A99A09C5(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Active) return;
		return;
	}

IL_0009:
	{
		// Log.Info("Server: stopping...");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->get_Info_0();
		NullCheck(L_1);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_1, _stringLiteralB6B2741769240CC9F111B4E04526A7EDDE77A6C0, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// listener?.Stop();
		TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_2 = __this->get_listener_7();
		TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0024;
		}
	}
	{
		goto IL_0029;
	}

IL_0024:
	{
		NullCheck(G_B4_0);
		TcpListener_Stop_m113CEAB447C6BCDBCF91CEF94DCA602E4530C033(G_B4_0, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// listenerThread?.Interrupt();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_4 = __this->get_listenerThread_8();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_5 = L_4;
		G_B6_0 = L_5;
		if (L_5)
		{
			G_B7_0 = L_5;
			goto IL_0035;
		}
	}
	{
		goto IL_003a;
	}

IL_0035:
	{
		NullCheck(G_B7_0);
		Thread_Interrupt_m7FF241D0D2980F6427A0FD65928F4E28B4A8304C(G_B7_0, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// listenerThread = null;
		__this->set_listenerThread_8((Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)NULL);
		// foreach (KeyValuePair<int, ConnectionState> kvp in clients)
		ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * L_6 = __this->get_clients_12();
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ConcurrentDictionary_2_GetEnumerator_m628A891D7FCF964651EA598577A19B1EFA1DA9BE(L_6, /*hidden argument*/ConcurrentDictionary_2_GetEnumerator_m628A891D7FCF964651EA598577A19B1EFA1DA9BE_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0079;
		}

IL_004f:
		{
			// foreach (KeyValuePair<int, ConnectionState> kvp in clients)
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			KeyValuePair_2_t8EDD87A6EB3A2B9515C7F4C79078100243D01687  L_9;
			L_9 = InterfaceFuncInvoker0< KeyValuePair_2_t8EDD87A6EB3A2B9515C7F4C79078100243D01687  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Telepathy.ConnectionState>>::get_Current() */, IEnumerator_1_t74D7778F7B4047C4337500866378BB06C07F3608_il2cpp_TypeInfo_var, L_8);
			V_1 = L_9;
			// TcpClient client = kvp.Value.client;
			ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * L_10;
			L_10 = KeyValuePair_2_get_Value_m107A9CFD0B121D3E893954D086D9F08B0DD4F5B0_inline((KeyValuePair_2_t8EDD87A6EB3A2B9515C7F4C79078100243D01687 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m107A9CFD0B121D3E893954D086D9F08B0DD4F5B0_RuntimeMethod_var);
			NullCheck(L_10);
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_11 = L_10->get_client_0();
			V_2 = L_11;
		}

IL_0063:
		try
		{ // begin try (depth: 2)
			// try { client.GetStream().Close(); } catch {}
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_12 = V_2;
			NullCheck(L_12);
			NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_13;
			L_13 = TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_13);
			// try { client.GetStream().Close(); } catch {}
			goto IL_0073;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0070;
			}
			throw e;
		}

CATCH_0070:
		{ // begin catch(System.Object)
			// try { client.GetStream().Close(); } catch {}
			// try { client.GetStream().Close(); } catch {}
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0073;
		} // end catch (depth: 2)

IL_0073:
		{
			// client.Close();
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_14 = V_2;
			NullCheck(L_14);
			TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_14, /*hidden argument*/NULL);
		}

IL_0079:
		{
			// foreach (KeyValuePair<int, ConnectionState> kvp in clients)
			RuntimeObject* L_15 = V_0;
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_004f;
			}
		}

IL_0081:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_0;
			if (!L_17)
			{
				goto IL_008c;
			}
		}

IL_0086:
		{
			RuntimeObject* L_18 = V_0;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(131)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
	}

IL_008d:
	{
		// clients.Clear();
		ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * L_19 = __this->get_clients_12();
		NullCheck(L_19);
		ConcurrentDictionary_2_Clear_m4196F44C1E797FD8491DD130AB9F725A16061072(L_19, /*hidden argument*/ConcurrentDictionary_2_Clear_m4196F44C1E797FD8491DD130AB9F725A16061072_RuntimeMethod_var);
		// counter = 0;
		__this->set_counter_13(0);
		// }
		return;
	}
}
// System.Boolean Telepathy.Server::Send(System.Int32,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Send_mC665F2B285DD3F5276ADBBFEA708123214A23B94 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___connectionId0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_mFEBC23184243F46C7667CA276CC64C9D47F32BF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA00A6ED1079D9BFA0747625B3DBAEAB49075A9D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF072B52AC71CF6BCF88EC9DF612A623689ACFB98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDFC5CBF78D03E067790E29C6CC8F27728A30511);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (message.Count <= MaxMessageSize)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		int32_t L_1 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_MaxMessageSize_1();
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0080;
		}
	}
	{
		// if (clients.TryGetValue(connectionId, out ConnectionState connection))
		ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * L_2 = __this->get_clients_12();
		int32_t L_3 = ___connectionId0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ConcurrentDictionary_2_TryGetValue_mFEBC23184243F46C7667CA276CC64C9D47F32BF0(L_2, L_3, (ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 **)(&V_0), /*hidden argument*/ConcurrentDictionary_2_TryGetValue_mFEBC23184243F46C7667CA276CC64C9D47F32BF0_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_007e;
		}
	}
	{
		// if (connection.sendPipe.Count < SendQueueLimit)
		ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * L_5 = V_0;
		NullCheck(L_5);
		MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_6 = L_5->get_sendPipe_1();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = MagnificentSendPipe_get_Count_m680B76C7D6A6D7A2FA8391613CFCCE7EA76F182C(L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_SendQueueLimit_9();
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_004c;
		}
	}
	{
		// connection.sendPipe.Enqueue(message);
		ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * L_9 = V_0;
		NullCheck(L_9);
		MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_10 = L_9->get_sendPipe_1();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_11 = ___message1;
		NullCheck(L_10);
		MagnificentSendPipe_Enqueue_m6FFBD60A0C0E9CD3936155A74F25ED54153AD47C(L_10, L_11, /*hidden argument*/NULL);
		// connection.sendPending.Set(); // interrupt SendThread WaitOne()
		ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * L_12 = V_0;
		NullCheck(L_12);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_13 = L_12->get_sendPending_2();
		NullCheck(L_13);
		bool L_14;
		L_14 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_13, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_004c:
	{
		// Log.Warning($"Server.Send: sendPipe for connection {connectionId} reached limit of {SendQueueLimit}. This can happen if we call send faster than the network can process messages. Disconnecting this connection for load balancing.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_15 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->get_Warning_1();
		int32_t L_16 = ___connectionId0;
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		int32_t L_19 = __this->get_SendQueueLimit_9();
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22;
		L_22 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralF072B52AC71CF6BCF88EC9DF612A623689ACFB98, L_18, L_21, /*hidden argument*/NULL);
		NullCheck(L_15);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_15, L_22, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// connection.client.Close();
		ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * L_23 = V_0;
		NullCheck(L_23);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_24 = L_23->get_client_0();
		NullCheck(L_24);
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_24, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_007e:
	{
		// return false;
		return (bool)0;
	}

IL_0080:
	{
		// Log.Error("Server.Send: message too big: " + message.Count + ". Limit: " + MaxMessageSize);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_25 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->get_Error_2();
		int32_t L_26;
		L_26 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		V_1 = L_26;
		String_t* L_27;
		L_27 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_28 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_MaxMessageSize_1();
		V_1 = L_28;
		String_t* L_29;
		L_29 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralFDFC5CBF78D03E067790E29C6CC8F27728A30511, L_27, _stringLiteralA00A6ED1079D9BFA0747625B3DBAEAB49075A9D7, L_29, /*hidden argument*/NULL);
		NullCheck(L_25);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_25, L_30, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}
}
// System.String Telepathy.Server::GetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Server_GetClientAddress_m9574ABDC812B05BDC6F04647C5E757400E1FCDC4 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_mFEBC23184243F46C7667CA276CC64C9D47F32BF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * V_0 = NULL;
	{
		// if (clients.TryGetValue(connectionId, out ConnectionState connection))
		ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * L_0 = __this->get_clients_12();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryGetValue_mFEBC23184243F46C7667CA276CC64C9D47F32BF0(L_0, L_1, (ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 **)(&V_0), /*hidden argument*/ConcurrentDictionary_2_TryGetValue_mFEBC23184243F46C7667CA276CC64C9D47F32BF0_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// return ((IPEndPoint)connection.client.Client.RemoteEndPoint).Address.ToString();
		ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * L_3 = V_0;
		NullCheck(L_3);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_4 = L_3->get_client_0();
		NullCheck(L_4);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_5;
		L_5 = TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_6;
		L_6 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_5, /*hidden argument*/NULL);
		NullCheck(((IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)CastclassClass((RuntimeObject*)L_6, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var)));
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_7;
		L_7 = IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline(((IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)CastclassClass((RuntimeObject*)L_6, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}

IL_0030:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Boolean Telepathy.Server::Disconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Disconnect_m81A37C7BA9C9D87CE54FF2886D018C7AA140AC5C (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_mFEBC23184243F46C7667CA276CC64C9D47F32BF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AE2ACB37456009F51EE9603197B18190A476313);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * V_0 = NULL;
	{
		// if (clients.TryGetValue(connectionId, out ConnectionState connection))
		ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * L_0 = __this->get_clients_12();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryGetValue_mFEBC23184243F46C7667CA276CC64C9D47F32BF0(L_0, L_1, (ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 **)(&V_0), /*hidden argument*/ConcurrentDictionary_2_TryGetValue_mFEBC23184243F46C7667CA276CC64C9D47F32BF0_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// connection.client.Close();
		ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * L_3 = V_0;
		NullCheck(L_3);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_4 = L_3->get_client_0();
		NullCheck(L_4);
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_4, /*hidden argument*/NULL);
		// Log.Info("Server.Disconnect connectionId:" + connectionId);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_5 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->get_Info_0();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___connectionId0), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2AE2ACB37456009F51EE9603197B18190A476313, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_5, L_7, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Telepathy.Server::Tick(System.Int32,System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_Tick_m299CC47DD1947941F019C321311EDCD1986A7A6A (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___processLimit0, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___checkEnabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m3D02394ECBF316363B0F50E1E87C04D7528A3E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryRemove_m46BF6604C7479BEB47BD7CA56C763CC81DB249E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * V_4 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B10_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B9_0 = NULL;
	Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * G_B13_0 = NULL;
	Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * G_B12_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B16_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B15_0 = NULL;
	{
		// if (receivePipe == null)
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_0 = __this->get_receivePipe_11();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_000a:
	{
		// for (int i = 0; i < processLimit; ++i)
		V_0 = 0;
		goto IL_00a0;
	}

IL_0011:
	{
		// if (checkEnabled != null && !checkEnabled())
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = ___checkEnabled1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = ___checkEnabled1;
		NullCheck(L_2);
		bool L_3;
		L_3 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4(L_2, /*hidden argument*/Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_00a7;
		}
	}

IL_001f:
	{
		// if (receivePipe.TryPeek(out int connectionId, out EventType eventType, out ArraySegment<byte> message))
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_4 = __this->get_receivePipe_11();
		NullCheck(L_4);
		bool L_5;
		L_5 = MagnificentReceivePipe_TryPeek_m1A6A1A883C67D583DCBB32657BA8BFBD7BC3D2D7(L_4, (int32_t*)(&V_1), (int32_t*)(&V_2), (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_3), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_6 = V_2;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_006f;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_0046:
	{
		// OnConnected?.Invoke(connectionId);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7 = __this->get_OnConnected_4();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8 = L_7;
		G_B9_0 = L_8;
		if (L_8)
		{
			G_B10_0 = L_8;
			goto IL_0052;
		}
	}
	{
		goto IL_0090;
	}

IL_0052:
	{
		int32_t L_9 = V_1;
		NullCheck(G_B10_0);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(G_B10_0, L_9, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		// break;
		goto IL_0090;
	}

IL_005a:
	{
		// OnData?.Invoke(connectionId, message);
		Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * L_10 = __this->get_OnData_5();
		Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * L_11 = L_10;
		G_B12_0 = L_11;
		if (L_11)
		{
			G_B13_0 = L_11;
			goto IL_0066;
		}
	}
	{
		goto IL_0090;
	}

IL_0066:
	{
		int32_t L_12 = V_1;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_13 = V_3;
		NullCheck(G_B13_0);
		Action_2_Invoke_m3D02394ECBF316363B0F50E1E87C04D7528A3E67(G_B13_0, L_12, L_13, /*hidden argument*/Action_2_Invoke_m3D02394ECBF316363B0F50E1E87C04D7528A3E67_RuntimeMethod_var);
		// break;
		goto IL_0090;
	}

IL_006f:
	{
		// OnDisconnected?.Invoke(connectionId);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_14 = __this->get_OnDisconnected_6();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_15 = L_14;
		G_B15_0 = L_15;
		if (L_15)
		{
			G_B16_0 = L_15;
			goto IL_007b;
		}
	}
	{
		goto IL_0081;
	}

IL_007b:
	{
		int32_t L_16 = V_1;
		NullCheck(G_B16_0);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(G_B16_0, L_16, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
	}

IL_0081:
	{
		// clients.TryRemove(connectionId, out ConnectionState _);
		ConcurrentDictionary_2_t5149D8989860F0B77BC5607F9E2530B8133C7487 * L_17 = __this->get_clients_12();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		bool L_19;
		L_19 = ConcurrentDictionary_2_TryRemove_m46BF6604C7479BEB47BD7CA56C763CC81DB249E6(L_17, L_18, (ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 **)(&V_4), /*hidden argument*/ConcurrentDictionary_2_TryRemove_m46BF6604C7479BEB47BD7CA56C763CC81DB249E6_RuntimeMethod_var);
	}

IL_0090:
	{
		// receivePipe.TryDequeue();
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_20 = __this->get_receivePipe_11();
		NullCheck(L_20);
		bool L_21;
		L_21 = MagnificentReceivePipe_TryDequeue_m31EC2ED8AD580964E56FD94C39FCA251C4E0CFF6(L_20, /*hidden argument*/NULL);
		// for (int i = 0; i < processLimit; ++i)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_00a0:
	{
		// for (int i = 0; i < processLimit; ++i)
		int32_t L_23 = V_0;
		int32_t L_24 = ___processLimit0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0011;
		}
	}

IL_00a7:
	{
		// return receivePipe.TotalCount;
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_25 = __this->get_receivePipe_11();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = MagnificentReceivePipe_get_TotalCount_mDF25AEA16B7A3F9ED7FF4F18AF1D1CFB33D7C9FD(L_25, /*hidden argument*/NULL);
		return L_26;
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
// System.Boolean Telepathy.ThreadFunctions::SendMessagesBlocking(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadFunctions_SendMessagesBlocking_m4D1926B1F19209E0A81BF3A7AE9FEF45A9624E88 (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload1, int32_t ___packetSize2, const RuntimeMethod* method)
{
	bool V_0 = false;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Exception_t * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B3_2 = NULL;
	Exception_t * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_2 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B4_2 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		// stream.Write(payload, 0, packetSize);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_0 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___payload1;
		int32_t L_2 = ___packetSize2;
		NullCheck(L_0);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(26 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, L_2);
		// return true;
		V_0 = (bool)1;
		goto IL_0033;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000d;
		}
		throw e;
	}

CATCH_000d:
	{ // begin catch(System.Exception)
		{
			// catch (Exception exception)
			V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Log.Info("Send: stream.Write exception: " + exception);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var)));
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_3 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))))->get_Info_0();
			Exception_t * L_4 = V_1;
			Exception_t * L_5 = L_4;
			G_B2_0 = L_5;
			G_B2_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8CA3CC30341FE08793C351B1C0039EFB12120E14));
			G_B2_2 = L_3;
			if (L_5)
			{
				G_B3_0 = L_5;
				G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8CA3CC30341FE08793C351B1C0039EFB12120E14));
				G_B3_2 = L_3;
				goto IL_0020;
			}
		}

IL_001c:
		{
			G_B4_0 = ((String_t*)(NULL));
			G_B4_1 = G_B2_1;
			G_B4_2 = G_B2_2;
			goto IL_0025;
		}

IL_0020:
		{
			NullCheck(G_B3_0);
			String_t* L_6;
			L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
			G_B4_0 = L_6;
			G_B4_1 = G_B3_1;
			G_B4_2 = G_B3_2;
		}

IL_0025:
		{
			String_t* L_7;
			L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B4_1, G_B4_0, /*hidden argument*/NULL);
			NullCheck(G_B4_2);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B4_2, L_7, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var)));
			// return false;
			V_0 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0033;
		}
	} // end catch (depth: 1)

IL_0033:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Boolean Telepathy.ThreadFunctions::ReadMessageBlocking(System.Net.Sockets.NetworkStream,System.Int32,System.Byte[],System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadFunctions_ReadMessageBlocking_m3032C4D5D39858541FF88710CD2356E7580B6C6B (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, int32_t ___MaxMessageSize1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___headerBuffer2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payloadBuffer3, int32_t* ___size4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8020C7D6696CB083F06538A14CF53AFC87D4339B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E9CE304B35E2CD4EF8C65E2BBD168076BF916D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE64F27DAAE1FDC81CF78186606BC10DE95BABDF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// size = 0;
		int32_t* L_0 = ___size4;
		*((int32_t*)L_0) = (int32_t)0;
		// if (payloadBuffer.Length != 4 + MaxMessageSize)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___payloadBuffer3;
		NullCheck(L_1);
		int32_t L_2 = ___MaxMessageSize1;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)L_2)))))
		{
			goto IL_0032;
		}
	}
	{
		// Log.Error($"ReadMessageBlocking: payloadBuffer needs to be of size 4 + MaxMessageSize = {4 + MaxMessageSize} instead of {payloadBuffer.Length}");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_3 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->get_Error_2();
		int32_t L_4 = ___MaxMessageSize1;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)L_4));
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___payloadBuffer3;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)));
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralE64F27DAAE1FDC81CF78186606BC10DE95BABDF6, L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_3);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_3, L_10, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}

IL_0032:
	{
		// if (!stream.ReadExactly(headerBuffer, 4))
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_11 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___headerBuffer2;
		bool L_13;
		L_13 = NetworkStreamExtensions_ReadExactly_m0B7F210DEA57D5C3A1206F369EF3A6F2506C04E6(L_11, L_12, 4, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_003e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003e:
	{
		// size = Utils.BytesToIntBigEndian(headerBuffer);
		int32_t* L_14 = ___size4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___headerBuffer2;
		int32_t L_16;
		L_16 = Utils_BytesToIntBigEndian_mFBA75B217B98801987D3142AFC40BE3A25E91764(L_15, /*hidden argument*/NULL);
		*((int32_t*)L_14) = (int32_t)L_16;
		// if (size > 0 && size <= MaxMessageSize)
		int32_t* L_17 = ___size4;
		int32_t L_18 = *((int32_t*)L_17);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t* L_19 = ___size4;
		int32_t L_20 = *((int32_t*)L_19);
		int32_t L_21 = ___MaxMessageSize1;
		if ((((int32_t)L_20) > ((int32_t)L_21)))
		{
			goto IL_005e;
		}
	}
	{
		// return stream.ReadExactly(payloadBuffer, size);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_22 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = ___payloadBuffer3;
		int32_t* L_24 = ___size4;
		int32_t L_25 = *((int32_t*)L_24);
		bool L_26;
		L_26 = NetworkStreamExtensions_ReadExactly_m0B7F210DEA57D5C3A1206F369EF3A6F2506C04E6(L_22, L_23, L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_005e:
	{
		// Log.Warning("ReadMessageBlocking: possible header attack with a header of: " + size + " bytes.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_27 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->get_Warning_1();
		int32_t* L_28 = ___size4;
		String_t* L_29;
		L_29 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_28, /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral9E9CE304B35E2CD4EF8C65E2BBD168076BF916D5, L_29, _stringLiteral8020C7D6696CB083F06538A14CF53AFC87D4339B, /*hidden argument*/NULL);
		NullCheck(L_27);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_27, L_30, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}
}
// System.Void Telepathy.ThreadFunctions::ReceiveLoop(System.Int32,System.Net.Sockets.TcpClient,System.Int32,Telepathy.MagnificentReceivePipe,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadFunctions_ReceiveLoop_mF5135EAB46E7696C471BE93E8B4F8BED1CA68B38 (int32_t ___connectionId0, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client1, int32_t ___MaxMessageSize2, MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * ___receivePipe3, int32_t ___QueueLimit4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ACF6FCEFF27E0E008244F2287C14419F3511FB0);
		s_Il2CppMethodInitialized = true;
	}
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Exception_t * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B8_2 = NULL;
	String_t* G_B8_3 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B8_4 = NULL;
	Exception_t * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	String_t* G_B7_3 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B7_4 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	String_t* G_B9_2 = NULL;
	String_t* G_B9_3 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B9_4 = NULL;
	{
		// NetworkStream stream = client.GetStream();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = ___client1;
		NullCheck(L_0);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_1;
		L_1 = TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// byte[] receiveBuffer = new byte[4 + MaxMessageSize];
		int32_t L_2 = ___MaxMessageSize2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)L_2)));
		V_1 = L_3;
		// byte[] headerBuffer = new byte[4];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		V_2 = L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// receivePipe.Enqueue(connectionId, EventType.Connected, default);
				MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_5 = ___receivePipe3;
				int32_t L_6 = ___connectionId0;
				il2cpp_codegen_initobj((&V_3), sizeof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE ));
				ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7 = V_3;
				NullCheck(L_5);
				MagnificentReceivePipe_Enqueue_m95D72C73ADFAB4EAE07DE9B1A8E4782824C57760(L_5, L_6, 0, L_7, /*hidden argument*/NULL);
			}

IL_0028:
			{
				// if (!ReadMessageBlocking(stream, MaxMessageSize, headerBuffer, receiveBuffer, out int size))
				NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_8 = V_0;
				int32_t L_9 = ___MaxMessageSize2;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_2;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_1;
				bool L_12;
				L_12 = ThreadFunctions_ReadMessageBlocking_m3032C4D5D39858541FF88710CD2356E7580B6C6B(L_8, L_9, L_10, L_11, (int32_t*)(&V_4), /*hidden argument*/NULL);
				if (!L_12)
				{
					goto IL_0076;
				}
			}

IL_0035:
			{
				// ArraySegment<byte> message = new ArraySegment<byte>(receiveBuffer, 0, size);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_1;
				int32_t L_14 = V_4;
				ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_5), L_13, 0, L_14, /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
				// receivePipe.Enqueue(connectionId, EventType.Data, message);
				MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_15 = ___receivePipe3;
				int32_t L_16 = ___connectionId0;
				ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_17 = V_5;
				NullCheck(L_15);
				MagnificentReceivePipe_Enqueue_m95D72C73ADFAB4EAE07DE9B1A8E4782824C57760(L_15, L_16, 1, L_17, /*hidden argument*/NULL);
				// if (receivePipe.Count(connectionId) >= QueueLimit)
				MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_18 = ___receivePipe3;
				int32_t L_19 = ___connectionId0;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = MagnificentReceivePipe_Count_mDC2DCE20153C2386E28724EE93E76C7F426F95E1(L_18, L_19, /*hidden argument*/NULL);
				int32_t L_21 = ___QueueLimit4;
				if ((((int32_t)L_20) < ((int32_t)L_21)))
				{
					goto IL_0028;
				}
			}

IL_0055:
			{
				// Log.Warning($"receivePipe reached limit of {QueueLimit} for connectionId {connectionId}. This can happen if network messages come in way faster than we manage to process them. Disconnecting this connection for load balancing.");
				IL2CPP_RUNTIME_CLASS_INIT(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var);
				Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_22 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))->get_Warning_1();
				int32_t L_23 = ___QueueLimit4;
				int32_t L_24 = L_23;
				RuntimeObject * L_25 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_24);
				int32_t L_26 = ___connectionId0;
				int32_t L_27 = L_26;
				RuntimeObject * L_28 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_27);
				String_t* L_29;
				L_29 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral3ACF6FCEFF27E0E008244F2287C14419F3511FB0, L_25, L_28, /*hidden argument*/NULL);
				NullCheck(L_22);
				Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_22, L_29, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
			}

IL_0076:
			{
				// }
				IL2CPP_LEAVE(0xC8, FINALLY_00aa);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0078;
			}
			throw e;
		}

CATCH_0078:
		{ // begin catch(System.Exception)
			{
				// catch (Exception exception)
				V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				// Log.Info("ReceiveLoop: finished receive function for connectionId=" + connectionId + " reason: " + exception);
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var)));
				Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_30 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))))->get_Info_0();
				String_t* L_31;
				L_31 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___connectionId0), /*hidden argument*/NULL);
				Exception_t * L_32 = V_6;
				Exception_t * L_33 = L_32;
				G_B7_0 = L_33;
				G_B7_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78BDF721B11718576BCF4DDEE144119DECDF4AE4));
				G_B7_2 = L_31;
				G_B7_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral40FE124641630DD87D55A00B1E3EAF61E8E7780A));
				G_B7_4 = L_30;
				if (L_33)
				{
					G_B8_0 = L_33;
					G_B8_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78BDF721B11718576BCF4DDEE144119DECDF4AE4));
					G_B8_2 = L_31;
					G_B8_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral40FE124641630DD87D55A00B1E3EAF61E8E7780A));
					G_B8_4 = L_30;
					goto IL_0099;
				}
			}

IL_0095:
			{
				G_B9_0 = ((String_t*)(NULL));
				G_B9_1 = G_B7_1;
				G_B9_2 = G_B7_2;
				G_B9_3 = G_B7_3;
				G_B9_4 = G_B7_4;
				goto IL_009e;
			}

IL_0099:
			{
				NullCheck(G_B8_0);
				String_t* L_34;
				L_34 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
				G_B9_0 = L_34;
				G_B9_1 = G_B8_1;
				G_B9_2 = G_B8_2;
				G_B9_3 = G_B8_3;
				G_B9_4 = G_B8_4;
			}

IL_009e:
			{
				String_t* L_35;
				L_35 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B9_3, G_B9_2, G_B9_1, G_B9_0, /*hidden argument*/NULL);
				NullCheck(G_B9_4);
				Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B9_4, L_35, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var)));
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				IL2CPP_LEAVE(0xC8, FINALLY_00aa);
			}
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00aa;
	}

FINALLY_00aa:
	{ // begin finally (depth: 1)
		// stream.Close();
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_36 = V_0;
		NullCheck(L_36);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_36);
		// client.Close();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_37 = ___client1;
		NullCheck(L_37);
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_37, /*hidden argument*/NULL);
		// receivePipe.Enqueue(connectionId, EventType.Disconnected, default);
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_38 = ___receivePipe3;
		int32_t L_39 = ___connectionId0;
		il2cpp_codegen_initobj((&V_3), sizeof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE ));
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_40 = V_3;
		NullCheck(L_38);
		MagnificentReceivePipe_Enqueue_m95D72C73ADFAB4EAE07DE9B1A8E4782824C57760(L_38, L_39, 2, L_40, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(170)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(170)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC8, IL_00c8)
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void Telepathy.ThreadFunctions::SendLoop(System.Int32,System.Net.Sockets.TcpClient,Telepathy.MagnificentSendPipe,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadFunctions_SendLoop_mE43DA5B64E6A6BFF7EEA5B967C9CFE83A9767FC1 (int32_t ___connectionId0, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client1, MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * ___sendPipe2, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___sendPending3, const RuntimeMethod* method)
{
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	Exception_t * G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B11_2 = NULL;
	String_t* G_B11_3 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B11_4 = NULL;
	Exception_t * G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	String_t* G_B10_2 = NULL;
	String_t* G_B10_3 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B10_4 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	String_t* G_B12_2 = NULL;
	String_t* G_B12_3 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B12_4 = NULL;
	{
		// NetworkStream stream = client.GetStream();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = ___client1;
		NullCheck(L_0);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_1;
		L_1 = TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// byte[] payload = null;
		V_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				goto IL_002f;
			}

IL_000b:
			{
				// sendPending.Reset(); // WaitOne() blocks until .Set() again
				ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_2 = ___sendPending3;
				NullCheck(L_2);
				bool L_3;
				L_3 = EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30(L_2, /*hidden argument*/NULL);
				// if (sendPipe.DequeueAndSerializeAll(ref payload, out int packetSize))
				MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_4 = ___sendPipe2;
				NullCheck(L_4);
				bool L_5;
				L_5 = MagnificentSendPipe_DequeueAndSerializeAll_mACDD88E0CEE4AD767F02352193F42B7FB64311DC(L_4, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
				if (!L_5)
				{
					goto IL_0028;
				}
			}

IL_001e:
			{
				// if (!SendMessagesBlocking(stream, payload, packetSize))
				NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_6 = V_0;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_1;
				int32_t L_8 = V_2;
				bool L_9;
				L_9 = ThreadFunctions_SendMessagesBlocking_m4D1926B1F19209E0A81BF3A7AE9FEF45A9624E88(L_6, L_7, L_8, /*hidden argument*/NULL);
				if (!L_9)
				{
					goto IL_0037;
				}
			}

IL_0028:
			{
				// sendPending.WaitOne();
				ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_10 = ___sendPending3;
				NullCheck(L_10);
				bool L_11;
				L_11 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_10);
			}

IL_002f:
			{
				// while (client.Connected) // try this. client will get closed eventually.
				TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_12 = ___client1;
				NullCheck(L_12);
				bool L_13;
				L_13 = TcpClient_get_Connected_m6F6E0D5E8CDF2D56756C34960B53D505640F481A(L_12, /*hidden argument*/NULL);
				if (L_13)
				{
					goto IL_000b;
				}
			}

IL_0037:
			{
				// }
				IL2CPP_LEAVE(0x7C, FINALLY_006f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0039;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadInterruptedException_t79671BFC28D9946768F83A1CFE78A2D586FF02DD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_003c;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_003f;
			}
			throw e;
		}

CATCH_0039:
		{ // begin catch(System.Threading.ThreadAbortException)
			// catch (ThreadAbortException)
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0x7C, FINALLY_006f);
		} // end catch (depth: 2)

CATCH_003c:
		{ // begin catch(System.Threading.ThreadInterruptedException)
			// catch (ThreadInterruptedException)
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0x7C, FINALLY_006f);
		} // end catch (depth: 2)

CATCH_003f:
		{ // begin catch(System.Exception)
			{
				// catch (Exception exception)
				V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				// Log.Info("SendLoop Exception: connectionId=" + connectionId + " reason: " + exception);
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var)));
				Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_14 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))))->get_Info_0();
				String_t* L_15;
				L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___connectionId0), /*hidden argument*/NULL);
				Exception_t * L_16 = V_3;
				Exception_t * L_17 = L_16;
				G_B10_0 = L_17;
				G_B10_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78BDF721B11718576BCF4DDEE144119DECDF4AE4));
				G_B10_2 = L_15;
				G_B10_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral813C2ECFD392D8A25AA9609C2EC1761E004EFE10));
				G_B10_4 = L_14;
				if (L_17)
				{
					G_B11_0 = L_17;
					G_B11_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78BDF721B11718576BCF4DDEE144119DECDF4AE4));
					G_B11_2 = L_15;
					G_B11_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral813C2ECFD392D8A25AA9609C2EC1761E004EFE10));
					G_B11_4 = L_14;
					goto IL_005e;
				}
			}

IL_005a:
			{
				G_B12_0 = ((String_t*)(NULL));
				G_B12_1 = G_B10_1;
				G_B12_2 = G_B10_2;
				G_B12_3 = G_B10_3;
				G_B12_4 = G_B10_4;
				goto IL_0063;
			}

IL_005e:
			{
				NullCheck(G_B11_0);
				String_t* L_18;
				L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B11_0);
				G_B12_0 = L_18;
				G_B12_1 = G_B11_1;
				G_B12_2 = G_B11_2;
				G_B12_3 = G_B11_3;
				G_B12_4 = G_B11_4;
			}

IL_0063:
			{
				String_t* L_19;
				L_19 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B12_3, G_B12_2, G_B12_1, G_B12_0, /*hidden argument*/NULL);
				NullCheck(G_B12_4);
				Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B12_4, L_19, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var)));
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				IL2CPP_LEAVE(0x7C, FINALLY_006f);
			}
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{ // begin finally (depth: 1)
		// stream.Close();
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_20 = V_0;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_20);
		// client.Close();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_21 = ___client1;
		NullCheck(L_21);
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_21, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(111)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
	}

IL_007c:
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
// System.Void Telepathy.Utils::IntToBytesBigEndianNonAlloc(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_IntToBytesBigEndianNonAlloc_mF4E67C91FA766A66D63B83AB6108B052C4EAAA03 (int32_t ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, int32_t ___offset2, const RuntimeMethod* method)
{
	{
		// bytes[offset + 0] = (byte)(value >> 24);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes1;
		int32_t L_1 = ___offset2;
		int32_t L_2 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_2>>(int32_t)((int32_t)24))))));
		// bytes[offset + 1] = (byte)(value >> 16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes1;
		int32_t L_4 = ___offset2;
		int32_t L_5 = ___value0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)((int32_t)16))))));
		// bytes[offset + 2] = (byte)(value >> 8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes1;
		int32_t L_7 = ___offset2;
		int32_t L_8 = ___value0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_8>>(int32_t)8)))));
		// bytes[offset + 3] = (byte)value;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___bytes1;
		int32_t L_10 = ___offset2;
		int32_t L_11 = ___value0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)3))), (uint8_t)((int32_t)((uint8_t)L_11)));
		// }
		return;
	}
}
// System.Int32 Telepathy.Utils::BytesToIntBigEndian(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_BytesToIntBigEndian_mFBA75B217B98801987D3142AFC40BE3A25E91764 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	{
		// return (bytes[0] << 24) |
		//        (bytes[1] << 16) |
		//        (bytes[2] << 8) |
		//         bytes[3];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___bytes0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)8))))|(int32_t)L_11));
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
// System.Void Telepathy.Client/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m3CC875EAAA52FE4096B41C3B1048C9F800949079 (U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Client/<>c__DisplayClass13_0::<ReceiveThreadFunction>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CReceiveThreadFunctionU3Eb__0_mA1DC9043BF26BB120485CA7A0B050BED098803FC (U3CU3Ec__DisplayClass13_0_tAAB5F73139B6AFE39BE3FE298079E1B45B022EE0 * __this, const RuntimeMethod* method)
{
	{
		// sendThread = new Thread(() => { ThreadFunctions.SendLoop(0, state.client, state.sendPipe, state.sendPending); });
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_0 = __this->get_state_0();
		NullCheck(L_0);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_1 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_0)->get_client_0();
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_2 = __this->get_state_0();
		NullCheck(L_2);
		MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_3 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_2)->get_sendPipe_1();
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_4 = __this->get_state_0();
		NullCheck(L_4);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_5 = ((ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 *)L_4)->get_sendPending_2();
		ThreadFunctions_SendLoop_mE43DA5B64E6A6BFF7EEA5B967C9CFE83A9767FC1(0, L_1, L_3, L_5, /*hidden argument*/NULL);
		// sendThread = new Thread(() => { ThreadFunctions.SendLoop(0, state.client, state.sendPipe, state.sendPending); });
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
// System.Void Telepathy.Client/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m2D6866775D01C18CA253E782B39176BCC54E45EF (U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Client/<>c__DisplayClass14_0::<Connect>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CConnectU3Eb__0_mDC4E2503DCD271D653F9610016D53B5A6F8B6BEB (U3CU3Ec__DisplayClass14_0_tBBA8D14040CA80D1B5D7558C2CD6770C915A1186 * __this, const RuntimeMethod* method)
{
	{
		// ReceiveThreadFunction(state, ip, port, MaxMessageSize, NoDelay, SendTimeout, ReceiveTimeout, ReceiveQueueLimit);
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		ClientConnectionState_tA7EC5A0CC954C4DBC8AF955B16ED79FF05D59A0A * L_1 = L_0->get_state_9();
		String_t* L_2 = __this->get_ip_1();
		int32_t L_3 = __this->get_port_2();
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_4 = __this->get_U3CU3E4__this_0();
		NullCheck(L_4);
		int32_t L_5 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)L_4)->get_MaxMessageSize_1();
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_6 = __this->get_U3CU3E4__this_0();
		NullCheck(L_6);
		bool L_7 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)L_6)->get_NoDelay_0();
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_8 = __this->get_U3CU3E4__this_0();
		NullCheck(L_8);
		int32_t L_9 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)L_8)->get_SendTimeout_2();
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_10 = __this->get_U3CU3E4__this_0();
		NullCheck(L_10);
		int32_t L_11 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)L_10)->get_ReceiveTimeout_3();
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_12 = __this->get_U3CU3E4__this_0();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_ReceiveQueueLimit_8();
		Client_ReceiveThreadFunction_m2FDBAC8FCE58277854DB184045CE2E9E02539713(L_1, L_2, L_3, L_5, L_7, L_9, L_11, L_13, /*hidden argument*/NULL);
		// });
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
// System.Void Telepathy.MagnificentReceivePipe/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mB082FF8B98C634F48FE87AB9B8AE10B66935EF9E (U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Telepathy.MagnificentReceivePipe/<>c__DisplayClass4_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m61D2B9F399559F6E86E0D6BB90951C9F28CA6A1A (U3CU3Ec__DisplayClass4_0_t5810F183A34DAA4D37D3B72E909BE6BD6BBD7D2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pool = new Pool<byte[]>(() => new byte[MaxMessageSize]);
		int32_t L_0 = __this->get_MaxMessageSize_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
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
// Conversion methods for marshalling of: Telepathy.MagnificentReceivePipe/Entry
IL2CPP_EXTERN_C void Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshal_pinvoke(const Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F& unmarshaled, Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___data_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'data' of type 'Entry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___data_2Exception, NULL);
}
IL2CPP_EXTERN_C void Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshal_pinvoke_back(const Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshaled_pinvoke& marshaled, Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F& unmarshaled)
{
	Exception_t* ___data_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'data' of type 'Entry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___data_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Telepathy.MagnificentReceivePipe/Entry
IL2CPP_EXTERN_C void Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshal_pinvoke_cleanup(Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Telepathy.MagnificentReceivePipe/Entry
IL2CPP_EXTERN_C void Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshal_com(const Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F& unmarshaled, Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshaled_com& marshaled)
{
	Exception_t* ___data_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'data' of type 'Entry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___data_2Exception, NULL);
}
IL2CPP_EXTERN_C void Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshal_com_back(const Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshaled_com& marshaled, Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F& unmarshaled)
{
	Exception_t* ___data_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'data' of type 'Entry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___data_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Telepathy.MagnificentReceivePipe/Entry
IL2CPP_EXTERN_C void Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshal_com_cleanup(Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F_marshaled_com& marshaled)
{
}
// System.Void Telepathy.MagnificentReceivePipe/Entry::.ctor(System.Int32,Telepathy.EventType,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m16D467EC396A94BEAC0906056580F62CFF4CA786 (Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F * __this, int32_t ___connectionId0, int32_t ___eventType1, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___data2, const RuntimeMethod* method)
{
	{
		// this.connectionId = connectionId;
		int32_t L_0 = ___connectionId0;
		__this->set_connectionId_0(L_0);
		// this.eventType = eventType;
		int32_t L_1 = ___eventType1;
		__this->set_eventType_1(L_1);
		// this.data = data;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_2 = ___data2;
		__this->set_data_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Entry__ctor_m16D467EC396A94BEAC0906056580F62CFF4CA786_AdjustorThunk (RuntimeObject * __this, int32_t ___connectionId0, int32_t ___eventType1, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___data2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F * _thisAdjusted = reinterpret_cast<Entry_tCCF7FA67FC14DC402242EA30FD51C39C51C2C08F *>(__this + _offset);
	Entry__ctor_m16D467EC396A94BEAC0906056580F62CFF4CA786(_thisAdjusted, ___connectionId0, ___eventType1, ___data2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Telepathy.MagnificentSendPipe/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m5DD870628C7E2B1F1482E1B6C52D150A3C619734 (U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Telepathy.MagnificentSendPipe/<>c__DisplayClass2_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m054A7D34BDA35D2A9B6B3D49E81AD7944A785D8D (U3CU3Ec__DisplayClass2_0_t3D934FB696C3379CDA870116E570984DA5D45D67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pool = new Pool<byte[]>(() => new byte[MaxMessageSize]);
		int32_t L_0 = __this->get_MaxMessageSize_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
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
// System.Void Telepathy.Server/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mA2D1EC3D5F333B34D8BDE390C39E17970E7499DE (U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Server/<>c__DisplayClass16_0::<Listen>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CListenU3Eb__0_m577EAE6F290DBAA34C42068DD7C8A7BF7F41852B (U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * __this, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Exception_t * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B4_2 = NULL;
	Exception_t * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B5_2 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		// ThreadFunctions.SendLoop(connectionId, client, connection.sendPipe, connection.sendPending);
		int32_t L_0 = __this->get_connectionId_0();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_1 = __this->get_client_1();
		ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * L_2 = __this->get_connection_2();
		NullCheck(L_2);
		MagnificentSendPipe_t8BCB044B4C011B5CAA2B9AE5AF615F893FF2E32C * L_3 = L_2->get_sendPipe_1();
		ConnectionState_t9578175BC2A2C0741263F3DB2A42BF88B8456FF1 * L_4 = __this->get_connection_2();
		NullCheck(L_4);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_5 = L_4->get_sendPending_2();
		ThreadFunctions_SendLoop_mE43DA5B64E6A6BFF7EEA5B967C9CFE83A9767FC1(L_0, L_1, L_3, L_5, /*hidden argument*/NULL);
		// }
		goto IL_0050;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		throw e;
	}

CATCH_0029:
	{ // begin catch(System.Threading.ThreadAbortException)
		// catch (ThreadAbortException)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0050;
	} // end catch (depth: 1)

CATCH_002c:
	{ // begin catch(System.Exception)
		{
			// catch (Exception exception)
			V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Log.Error("Server send thread exception: " + exception);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var)));
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))))->get_Error_2();
			Exception_t * L_7 = V_0;
			Exception_t * L_8 = L_7;
			G_B3_0 = L_8;
			G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral21102DCAC41D97FC99CF6E7EB9947B2EBAEA391F));
			G_B3_2 = L_6;
			if (L_8)
			{
				G_B4_0 = L_8;
				G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral21102DCAC41D97FC99CF6E7EB9947B2EBAEA391F));
				G_B4_2 = L_6;
				goto IL_003f;
			}
		}

IL_003b:
		{
			G_B5_0 = ((String_t*)(NULL));
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_0044;
		}

IL_003f:
		{
			NullCheck(G_B4_0);
			String_t* L_9;
			L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
			G_B5_0 = L_9;
			G_B5_1 = G_B4_1;
			G_B5_2 = G_B4_2;
		}

IL_0044:
		{
			String_t* L_10;
			L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B5_1, G_B5_0, /*hidden argument*/NULL);
			NullCheck(G_B5_2);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B5_2, L_10, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var)));
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0050;
		}
	} // end catch (depth: 1)

IL_0050:
	{
		// });
		return;
	}
}
// System.Void Telepathy.Server/<>c__DisplayClass16_0::<Listen>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CListenU3Eb__1_mB10F77EA316724A661A95F91B429363953624CE8 (U3CU3Ec__DisplayClass16_0_t0FFE02B86CC1F8B19347CBC2CB9771EB407612D8 * __this, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Exception_t * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B3_2 = NULL;
	Exception_t * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_2 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B4_2 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		// ThreadFunctions.ReceiveLoop(connectionId, client, MaxMessageSize, receivePipe, ReceiveQueueLimit);
		int32_t L_0 = __this->get_connectionId_0();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_1 = __this->get_client_1();
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_2 = __this->get_U3CU3E4__this_4();
		NullCheck(L_2);
		int32_t L_3 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)L_2)->get_MaxMessageSize_1();
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_4 = __this->get_U3CU3E4__this_4();
		NullCheck(L_4);
		MagnificentReceivePipe_t1B91AB4BC4DEDBEDE86510590048D2589739BD7A * L_5 = L_4->get_receivePipe_11();
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_6 = __this->get_U3CU3E4__this_4();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_ReceiveQueueLimit_10();
		ThreadFunctions_ReceiveLoop_mF5135EAB46E7696C471BE93E8B4F8BED1CA68B38(L_0, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		// sendThread.Interrupt();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_8 = __this->get_sendThread_3();
		NullCheck(L_8);
		Thread_Interrupt_m7FF241D0D2980F6427A0FD65928F4E28B4A8304C(L_8, /*hidden argument*/NULL);
		// }
		goto IL_0063;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003f;
		}
		throw e;
	}

CATCH_003f:
	{ // begin catch(System.Exception)
		{
			// catch (Exception exception)
			V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Log.Error("Server client thread exception: " + exception);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var)));
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_9 = ((Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t11806ADF017E3F8D19574664C239BA5A7BB235AC_il2cpp_TypeInfo_var))))->get_Error_2();
			Exception_t * L_10 = V_0;
			Exception_t * L_11 = L_10;
			G_B2_0 = L_11;
			G_B2_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47863D6E0039D41ADF771D5253F35FCA7A40C28));
			G_B2_2 = L_9;
			if (L_11)
			{
				G_B3_0 = L_11;
				G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47863D6E0039D41ADF771D5253F35FCA7A40C28));
				G_B3_2 = L_9;
				goto IL_0052;
			}
		}

IL_004e:
		{
			G_B4_0 = ((String_t*)(NULL));
			G_B4_1 = G_B2_1;
			G_B4_2 = G_B2_2;
			goto IL_0057;
		}

IL_0052:
		{
			NullCheck(G_B3_0);
			String_t* L_12;
			L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
			G_B4_0 = L_12;
			G_B4_1 = G_B3_1;
			G_B4_2 = G_B3_2;
		}

IL_0057:
		{
			String_t* L_13;
			L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B4_1, G_B4_0, /*hidden argument*/NULL);
			NullCheck(G_B4_2);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B4_2, L_13, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var)));
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0063;
		}
	} // end catch (depth: 1)

IL_0063:
	{
		// });
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
// System.Void Telepathy.Server/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mC756D174017F26127EE17D9658D128473CBFA338 (U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Server/<>c__DisplayClass17_0::<Start>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CStartU3Eb__0_m467C29EFA344D22A0604003AFF3645327282148C (U3CU3Ec__DisplayClass17_0_t661F139CA5250BB1C151CE7F331FDFB8E9C815F6 * __this, const RuntimeMethod* method)
{
	{
		// listenerThread = new Thread(() => { Listen(port); });
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_0 = __this->get_U3CU3E4__this_0();
		int32_t L_1 = __this->get_port_1();
		NullCheck(L_0);
		Server_Listen_mD18CE0EB1B3B66AD0B01DB22C7B3BB54AB3A3C33(L_0, L_1, /*hidden argument*/NULL);
		// listenerThread = new Thread(() => { Listen(port); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TcpClient_set_Client_m12167E7D3DEAEEF69AF8896152A54CE613C664FC_inline (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ___value0;
		__this->set_m_ClientSocket_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_m_ClientSocket_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_connected_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * Console_get_Error_m5AEEF41258FBC9771DABB271B89A0F8ED43DDA5E_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = ((Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields*)il2cpp_codegen_static_fields_for(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var))->get_stderr_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * TcpListener_get_Server_mDFBCA0876377BA9FBF4B1937D5F41268D9AE7453_inline (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_m_ServerSocket_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method)
{
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_0 = __this->get_m_Address_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m63E89A0CE69CCF81BA28281EE4B2874DB3365D2F_gshared_inline (Queue_1_t5EF80690E10F18FEFF3608E0439324337A8C1E1C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC15B1F8C0A5160E1B4A580DB19B3705D851D727B_gshared_inline (Queue_1_t56E1056276756C398A903F22C302D92FF31BE9B4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
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
