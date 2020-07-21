﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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

// Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer
struct ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651;
// Microsoft.MixedReality.Toolkit.Input.HandBounds
struct HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142;
// Microsoft.MixedReality.Toolkit.Input.ICursorModifier
struct ICursorModifier_tCB8587BE2E9B29FEF18620BC7FC31027A3E69080;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor
struct IMixedRealityCursor_t1BB87D9CBE3F643770939A4D6C80C69687AF065F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_tBA4306B94B3A85E4954F4309E19E524C4644F737;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_t803B423409E1017B7B650987CCF3A6D366A7C840;
// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_tA2932F014F702C0C49A608B2486D423456CAF1A6;
// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_tDA1B69B64E926F444AA2A9580BEC8F09AC9379E8;
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_tCD1CE5D02607BA5FD6D2C499C92B2BE190BFC450;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider
struct BaseMixedRealityLineDataProvider_tC35878F4E52DC5B0995B39360258BD6613D3190A;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[]
struct BaseMixedRealityLineRendererU5BU5D_tC2D9120DE5D195B660C82B3B89F9D354E0AF1C0C;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder
struct ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint
struct HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__46
struct U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp
struct HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween
struct InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum
struct Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital
struct Orbital_t4E2C971B059A301433A2439374836A8866E4BA87;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct Overlap_t14605F26108B061874FE4594021CBF8BFEBB3CE1;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct Solver_t45BC4457D52541691149931505197834E2BCC506;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0;
// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>[]
struct EntryU5BU5D_tB8BC99E0FB9CAC3911ACC7DB3E10030E585FF254;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>
struct KeyCollection_tD283C5845FD759D3BDDF86F18E82E31758EF889B;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>
struct ValueCollection_t75F6D1A92D2D077B4E10AC51DC6263349A942D97;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>
struct Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>
struct Dictionary_2_t3A5FD15F1CA4E8B8943DFFB112420B6B2B19D760;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>[]
struct SlotU5BU5D_t311EF5F2E9C8F548B4ECB5B2185847C3F0862601;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IEnumerable_1_tEBBEEECCC64F4394D34C3EB16D2015228E9D291D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct IEqualityComparer_1_t87C960992C1DBCD9895AB9C5F577EA0C635D368E;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>
struct IEqualityComparer_1_t3215FA06CD6065B2DA94D6CEEBE670FEA452D104;
// System.Collections.Generic.IList`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IList_1_tDCDA57BA6678422638B9A1545F911C539CD5E44D;
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IReadOnlyCollection_1_t33B49C812263386AB882DC2DE405D40A3977AAB5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct ReadOnlyCollection_1_t6520265CBC8C7015FFEDC9384425CE41559F3B47;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.BoxCollider
struct BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Gradient
struct Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityControllerVisualizer_t9E81483FCAEC076EED74FDFBB3093033CED734B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCursor_t1BB87D9CBE3F643770939A4D6C80C69687AF065F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDataProviderAccess_t63F3E16981AF92E0A01138E618F95865C1185D1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityRaycaster_tDB7B639A2F467361366DB278D239006467490080_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E;
IL2CPP_EXTERN_C String_t* _stringLiteral8604633F91A5364A570785AE4355317FF69CAA79;
IL2CPP_EXTERN_C String_t* _stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B;
IL2CPP_EXTERN_C String_t* _stringLiteral9586A1C5F0FF1B8004E10FC372266DBFEA002EFE;
IL2CPP_EXTERN_C String_t* _stringLiteral9D08677538B56ECF9AED0A2EA9CEFADCE1634173;
IL2CPP_EXTERN_C String_t* _stringLiteralA5380AB232AE7FA9C64011F243B4FD1A1E094DB7;
IL2CPP_EXTERN_C String_t* _stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F;
IL2CPP_EXTERN_C String_t* _stringLiteralAEA2A24041B83C854AA97A8FFB2E549B15B679EF;
IL2CPP_EXTERN_C String_t* _stringLiteralCF5B58E13AC9E0BBDD8929CAC9A7A3EC3DACCCE9;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E8D8FA41CB0C1CCEB687AB4AE503CE4773E4AE;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionsExtensions_ToReadOnlyCollection_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mE09F07BC920E2458475DC81B745593CB4E97CB40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142_m42B545DDF8EA455254FEA33CC8D566C1C042C3C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mAFEA8C8850333AF32E380E9F11A4ABAE304879DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m0708321043CD71138F4AD1E7213F1FF980080C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mCD69ACF9348EAB5C6ED2D3D444270B105594B72D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Intersect_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mAB7C2BF3B368BE5F7B2E0D55A4DFFF7F9B407438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Union_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mD4DD2895AF940E38BC58CC0D94F8B525E2B2B45B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDCF28E57240A3751DA0E57A43D26EA4CF6A848D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2847864A8B6A4717D9D5C39BF3DF8A82A27CE61C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m54ADCC9789BA9923142B3275627884EEEB423202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mED82B88562CC22F180BF24172145DC74F2ACDCDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m5D03742BCEC065A9A76CBCFEBC067147B87E0B10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityDataProviderAccess_GetDataProvider_TisIMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_mBF9ED268B7EF95DEE2D336BF7F1E63CC23D70424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySourceStateHandler_t65DBC76B8097878EC12F2A1E149B326BFB4B2DFB_m23E2A815FB3AB43073C95DD72285E85EE13B230D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySourceStateHandler_t65DBC76B8097878EC12F2A1E149B326BFB4B2DFB_m9DA884364850112D78D45C6078B9B024E7435F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m924B454743565B7F44C195523B6F6C7A3D5F63D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m254F872CE951C6A33A478F6DBF71FB90322F0DBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_mD4205B7AF2036EBF7895B5DA2A739A0C53F749A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8A3CE552C8FF45E35C16DF3F5391FAF0CC2D44A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m6C575683BD3DF941FCAFD151FFFA438DA48FDD8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mB18E8650B6A63BAF9FD00C2BA6DF5AD396522CE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m69D5FDD7995BBDB460AE2B05A1602A5EDCD4585A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC623C5D743DDEF11727604B50A34E8ED4D7E8CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m92EB8CA52F5073B4BBAB7EA69C133AFA9A0B1D01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m1E24D72500E4660B60C7863C2B2E71CC4B04BF76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mC49E487DA974166A213AAD2726AE8F585D87C0CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m07D34EBB75E8509AA81981808D524D257090B84C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_mBD199630636E53779A34C0092DE8923693354C34_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ControllerFinder_AddControllerTransform_m4717E0975FC66D0BF44B07254851DE5BBF3589AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerFinder_OnDisable_mB2C0F53999DDBF5A4B9F638176E3A90EB6F29CF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerFinder_OnEnable_mC42F097A8894D00CC9967CAAF377D40CE979A533_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerFinder_OnSourceDetected_m286A206A8737AAB3D4CFBE3537D2599AD2FECA39_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerFinder_OnSourceLost_mE379B05FDA75FBEAF3F9A4C894F559BB125D634A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerFinder_RefreshControllerTransform_mEA26430DA4D4E38952C6DDF22D0C352A9A2DA842_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerFinder_RemoveControllerTransform_m66013B9652D52F302BA07441CF1C6B978C88209F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerFinder_TryAndAddControllerTransform_m28E7F95E147BEBB8048389859A4F38633286DBF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraintPalmUp_IsValidController_m2FD5108AA02B178532CDADEB64E7CEB205D105E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraint_CalculateGoalPosition_mCEBB61253B62C34C9E9F9B9DEE1AF912F96EF02E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraint_CalculateGoalRotation_mDED93EE2985983AEEB2DDF11724624FB39469894_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraint_CalculateProjectedSafeZoneRay_m67359E38B1D29607E32A3AAFB6829D352818F090_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraint_GetController_m78FF31249AB1ECC7B783AAC4A8054CBA6167B78B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraint_IsApplicableController_m714A68E6B2FEE19FD27BA17DA924EBAC6C4EC9E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraint_IsOppositeHandNear_m3CA1DA9483B51FF0E9A3F2690948D481D0532EEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraint_IsPalmFacingCamera_m8707CC2627EE8E7433DB49D62142C61AB57C870E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraint_IsValidController_mDB04EE2D1296D35D4CD64FFE5073A470870D1F80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraint_OnEnable_mE8C3C2E53F71845DDAE775664010F74E8E69B312_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraint_SolverUpdate_mFF112390C81F1F364C76AAD3B40F4C5204D64BE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraint_ToggleCursors_m129EF848FD94A7915ED11A96EEFD0CDF1714D630_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraint__ctor_m88DE81DF42CB3375F52122A3B0BF9BC72EDD030E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InBetween_AdjustPositionForOffset_mFED4545083C88A001E2ABB849F277CE0485C8FE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InBetween_SolverUpdate_m632EE0C3C4FE4992FD11421B8ECDB3BFCF5F7F2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InBetween_Start_m7A6DDA6AC81C3EA0161CB4CE800205AFAE2DF1AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InBetween_UpdateSecondSolverHandler_mB76F1142E4DB23B2B239CA938F48858AC9911AEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InBetween_set_PartwayOffset_mED747AB1DD66BBFB1325EB68159476534206E6AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InBetween_set_SecondTransformOverride_mFBD1E58E85086FA8DB610E36B35065142F77FD0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Momentum_OnEnable_m2B8CAC0F59E7A57AB929CEB3749E3F6949ACCAC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Momentum_SnapTo_mC5520E50C3BEC88EF97A411604861F7D14174A76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Momentum_SolverUpdate_mD3B24CAD26BABAFB3D613F692ADC4F17C96EB26B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Momentum_get_ReferencePosition_mFAACD502CAE0271F1F699462EE1991FA53FFCBB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital_CalculateDesiredRotation_m84574CDFA82C60EC5BDB9B5D2FABAFF224B2A6B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital_SolverUpdate_m642558C741B9B9235716BF5EF37CD1F9F5D013E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital__ctor_mEEB8115906EB6917C9D843D39C0ECCD5F9C23770_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital_set_TetherAngleSteps_m83D121C347FB50A341690EB941C1B7E270E3B215_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Overlap_SolverUpdate_m67C332E5673ECF6449055CC669548D7CBBCF0F48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_GetDesiredOrientation_DistanceOnly_mF40147CDB106D6C1D6B49FFD69B8A2BFB6237FA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_GetDesiredOrientation_m3370EEC78DB342C439D5B637969D51BB0EA62911_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_SolverUpdate_m490BEF73803649A803AF4F47BF791BC5432416F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_get_SolverReferenceDirection_mDBDAF39D8AE51E80779CB81C7FF8ACB6C7FBF7A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_get_UpReference_mC3FD9991B8047CC27A133B04EA08ECB3F906ABE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_AttachToNewTrackedObject_m78EE7F5D88CEFE1465A1FDD6EDC08F4DDE5AB6AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_Awake_m996AD5DB5712A9AFADF5E32FDE753E676699A23A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_DetachFromCurrentTrackedObject_m24F5A98D11439580531464DFACC1753B411DDF4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_GetControllerRay_m1057B68613BE517B273D5785DB3BF12BD6223587_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_IsInvalidTracking_m9B28A63B5A57D72097B3B1CCEC8B21AA8033835E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_LateUpdate_m4773D9DF6F248A4BE6E9CE7B52CE89974DAB6E2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_RegisterSolver_mCC7F39632346EDC3564F5D04424A433345374B0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_TrackTransform_m36871E4D6498D2DD8166CAB7E2B1354783617586_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_UnregisterSolver_m1011B5AEBA231BD826554AA2F9282A4717D533F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler__ctor_mCCB2CFDEA397250D78C5DD8F84AD185D69C07254_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_get_Solvers_mD9532AEA70FDA70708F58F43A13D6C9C5F18C32E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_AdditionalOffset_m597B9888235D89213C575E748D4150E19D7986FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_AdditionalRotation_m79A6E7368CD33D600CA0FF4F8C18FF3351F38983_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_Solvers_m4D056BA507C7FAAE150D5F0231D3FD96B6963120_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_TransformOverride_mA3A8090C85974D6349D759CD8582BA53C57F7B29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_AddOffset_m5A7DBD0F581E115D6B2F5D5CAAB8DBE40FBA4849_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_Awake_m11CF4F0E14151A62E033BF1942BF7D2ECA3CE4CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_OnDestroy_m6B809F3BBCC918C28B611E15E2C3AD513DD646E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_OnEnable_m30C8ADF771E48AFB08DAD8D71A24480D5EAFF6BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_SmoothTo_mE3B979FCC06C6AF64EA978E9B04E5563E73FEF2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_SmoothTo_mE7A293C5250C082C250F52949E303E051951A46D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_Start_m28612BA96CF6F0F52207675F6264069B661D83AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_BoxRaycastStepUpdate_m35784C8612AA57A336E488767035EA9747A5900C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_FindPlacementPlane_mFBEFF7DD7D0654E62ABC62A343743F0CF0763C89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_IsNormalVertical_mAFDE9526D60CB6B21DF3BCC035D722A656B9409D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_SimpleRaycastStepUpdate_m63419B3259123E9EB75180A0278C2221385755EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_SolverUpdate_m72AFF7D627FCCB576BF27EE5F6F469AADF0FEC33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_SphereRaycastStepUpdate_m3CDB29C2BB9FE94690D45E6C830C873826FF2EA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism__ctor_mDE879704077246B4811AEF379665C1D98B0D8049_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_get_RaycastDirection_mE88DC19EB8190571BCFEAEBFCC3EF7493F06C1AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_get_RaycastEndPoint_m11147C69A0F70DA6D28694B69D86D5B2EDCFC757_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileGridObjectCollection_GetListPosition_m901BA4E9BC9007CBD10E2D40FEAE95031C52AF5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileGridObjectCollection_Update_m4C2C7E74EAB1B08A9AF0013BA7BF2212784AA911_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileGridObjectCollection__ctor_m1074D16623E98ABEF6987FEA621BB301BAFDEDB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CToggleCursorsU3Ed__46_MoveNext_mDDA1FB4BCA3B9FA5EC8074D5CD2A439D905680E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_mBD199630636E53779A34C0092DE8923693354C34_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D;
struct SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27;
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46
struct  U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::controller
	RuntimeObject* ___controller_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<>4__this
	HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * ___U3CU3E4__this_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::frameDelay
	bool ___frameDelay_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::visible
	bool ___visible_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___controller_2)); }
	inline RuntimeObject* get_controller_2() const { return ___controller_2; }
	inline RuntimeObject** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(RuntimeObject* value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___U3CU3E4__this_3)); }
	inline HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_frameDelay_4() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___frameDelay_4)); }
	inline bool get_frameDelay_4() const { return ___frameDelay_4; }
	inline bool* get_address_of_frameDelay_4() { return &___frameDelay_4; }
	inline void set_frameDelay_4(bool value)
	{
		___frameDelay_4 = value;
	}

	inline static int32_t get_offset_of_visible_5() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___visible_5)); }
	inline bool get_visible_5() const { return ___visible_5; }
	inline bool* get_address_of_visible_5() { return &___visible_5; }
	inline void set_visible_5(bool value)
	{
		___visible_5 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>
struct  Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB8BC99E0FB9CAC3911ACC7DB3E10030E585FF254* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD283C5845FD759D3BDDF86F18E82E31758EF889B * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t75F6D1A92D2D077B4E10AC51DC6263349A942D97 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6, ___entries_1)); }
	inline EntryU5BU5D_tB8BC99E0FB9CAC3911ACC7DB3E10030E585FF254* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB8BC99E0FB9CAC3911ACC7DB3E10030E585FF254** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB8BC99E0FB9CAC3911ACC7DB3E10030E585FF254* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6, ___keys_7)); }
	inline KeyCollection_tD283C5845FD759D3BDDF86F18E82E31758EF889B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD283C5845FD759D3BDDF86F18E82E31758EF889B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD283C5845FD759D3BDDF86F18E82E31758EF889B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6, ___values_8)); }
	inline ValueCollection_t75F6D1A92D2D077B4E10AC51DC6263349A942D97 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t75F6D1A92D2D077B4E10AC51DC6263349A942D97 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t75F6D1A92D2D077B4E10AC51DC6263349A942D97 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct  HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t311EF5F2E9C8F548B4ECB5B2185847C3F0862601* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96, ____slots_8)); }
	inline SlotU5BU5D_t311EF5F2E9C8F548B4ECB5B2185847C3F0862601* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t311EF5F2E9C8F548B4ECB5B2185847C3F0862601** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t311EF5F2E9C8F548B4ECB5B2185847C3F0862601* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct  List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E, ____items_1)); }
	inline SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* get__items_1() const { return ____items_1; }
	inline SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E_StaticFields, ____emptyArray_5)); }
	inline SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct  ReadOnlyCollection_1_t6520265CBC8C7015FFEDC9384425CE41559F3B47  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t6520265CBC8C7015FFEDC9384425CE41559F3B47, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t6520265CBC8C7015FFEDC9384425CE41559F3B47, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1_Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct  Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1_Enumerator::_set
	HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1_Enumerator::_current
	RuntimeObject* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F, ____set_0)); }
	inline HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96 * get__set_0() const { return ____set_0; }
	inline HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F, ____current_3)); }
	inline RuntimeObject* get__current_3() const { return ____current_3; }
	inline RuntimeObject** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1_Enumerator<System.Object>
struct  Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1_Enumerator::_set
	HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1_Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019, ____set_0)); }
	inline HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * get__set_0() const { return ____set_0; }
	inline HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.RayStep
struct  RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Origin>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Terminus>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Direction>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dist
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dir
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::pos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C_StaticFields, ___dist_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dist_0() const { return ___dist_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C_StaticFields, ___dir_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dir_1() const { return ___dir_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C_StaticFields, ___pos_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_pos_2() const { return ___pos_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___pos_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType
struct  SceneQueryType_t9DD63ABD036A747D140A46CAEE4209F9920C01D9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_t9DD63ABD036A747D140A46CAEE4209F9920C01D9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct  TrackingState_tD0332F2AFF8035708A8141F7EFEF682A6F8D7B98 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tD0332F2AFF8035708A8141F7EFEF682A6F8D7B98, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct  MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection
struct  RadialViewReferenceDirection_t71DBA780443856162D5D7DCF660F79519069B4E7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RadialViewReferenceDirection_t71DBA780443856162D5D7DCF660F79519069B4E7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType
struct  SolverOrientationType_t3C2A7055226D420ADF55E91A81CCF445D719C5F2 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverOrientationType_t3C2A7055226D420ADF55E91A81CCF445D719C5F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior
struct  SolverRotationBehavior_tB3419908784E660A8C47BB75B73D3B59F735619F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverRotationBehavior_tB3419908784E660A8C47BB75B73D3B59F735619F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone
struct  SolverSafeZone_t0AE482D5BA0F8EE6E2B6E5D256472CD77DFE6711 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverSafeZone_t0AE482D5BA0F8EE6E2B6E5D256472CD77DFE6711, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode
struct  OrientationMode_t9CE70746B9C5B39A7FB987878C138795FC855DCD 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationMode_t9CE70746B9C5B39A7FB987878C138795FC855DCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode
struct  RaycastDirectionMode_t8CF98C2E96FE7B934225AE7AE001D16E944F21D9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RaycastDirectionMode_t8CF98C2E96FE7B934225AE7AE001D16E944F21D9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions
struct  GridDivisions_t86060E25BA35872AC7D309BD607CCEE87F6114A5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GridDivisions_t86060E25BA35872AC7D309BD607CCEE87F6114A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType
struct  TrackedObjectType_t110925E0B47321BDB33970F5772B9158B186C09A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedObjectType_t110925E0B47321BDB33970F5772B9158B186C09A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed
struct  Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Current>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Goal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E, ___U3CCurrentU3Ek__BackingField_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGoalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E, ___U3CGoalU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalU3Ek__BackingField_1() const { return ___U3CGoalU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalU3Ek__BackingField_1() { return &___U3CGoalU3Ek__BackingField_1; }
	inline void set_U3CGoalU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSmoothTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E, ___U3CSmoothTimeU3Ek__BackingField_2)); }
	inline float get_U3CSmoothTimeU3Ek__BackingField_2() const { return ___U3CSmoothTimeU3Ek__BackingField_2; }
	inline float* get_address_of_U3CSmoothTimeU3Ek__BackingField_2() { return &___U3CSmoothTimeU3Ek__BackingField_2; }
	inline void set_U3CSmoothTimeU3Ek__BackingField_2(float value)
	{
		___U3CSmoothTimeU3Ek__BackingField_2 = value;
	}
};


// System.ByteEnum
struct  ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.HideFlags
struct  HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct  Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Normal_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.Nullable`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>
struct  Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.ByteEnum>
struct  Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct  BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___U3CMixedRealityInputActionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531, ___U3CSourceIdU3Ek__BackingField_4)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_4() const { return ___U3CSourceIdU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_4() { return &___U3CSourceIdU3Ek__BackingField_4; }
	inline void set_U3CSourceIdU3Ek__BackingField_4(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531, ___U3CMixedRealityInputActionU3Ek__BackingField_5)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_U3CMixedRealityInputActionU3Ek__BackingField_5() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return &___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_5(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_5))->___description_2), (void*)NULL);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct  SourceStateEventData_tA2932F014F702C0C49A608B2486D423456CAF1A6  : public BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.SourceStateEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourceStateEventData_tA2932F014F702C0C49A608B2486D423456CAF1A6, ___U3CControllerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_6() const { return ___U3CControllerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_6() { return &___U3CControllerU3Ek__BackingField_6; }
	inline void set_U3CControllerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_6), (void*)value);
	}
};


// UnityEngine.BoxCollider
struct  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.HandBounds
struct  HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds> Microsoft.MixedReality.Toolkit.Input.HandBounds::<Bounds>k__BackingField
	Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6 * ___U3CBoundsU3Ek__BackingField_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.HandBounds::drawBoundsGizmo
	bool ___drawBoundsGizmo_5;

public:
	inline static int32_t get_offset_of_U3CBoundsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142, ___U3CBoundsU3Ek__BackingField_4)); }
	inline Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6 * get_U3CBoundsU3Ek__BackingField_4() const { return ___U3CBoundsU3Ek__BackingField_4; }
	inline Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6 ** get_address_of_U3CBoundsU3Ek__BackingField_4() { return &___U3CBoundsU3Ek__BackingField_4; }
	inline void set_U3CBoundsU3Ek__BackingField_4(Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6 * value)
	{
		___U3CBoundsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_drawBoundsGizmo_5() { return static_cast<int32_t>(offsetof(HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142, ___drawBoundsGizmo_5)); }
	inline bool get_drawBoundsGizmo_5() const { return ___drawBoundsGizmo_5; }
	inline bool* get_address_of_drawBoundsGizmo_5() { return &___drawBoundsGizmo_5; }
	inline void set_drawBoundsGizmo_5(bool value)
	{
		___drawBoundsGizmo_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct  InputSystemGlobalHandlerListener_t0A638320E7C263ED03BF16AFC52F6A2084FFC207  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_t0A638320E7C263ED03BF16AFC52F6A2084FFC207, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder
struct  ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::handedness
	uint8_t ___handedness_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::ControllerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___ControllerTransform_5;

public:
	inline static int32_t get_offset_of_handedness_4() { return static_cast<int32_t>(offsetof(ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11, ___handedness_4)); }
	inline uint8_t get_handedness_4() const { return ___handedness_4; }
	inline uint8_t* get_address_of_handedness_4() { return &___handedness_4; }
	inline void set_handedness_4(uint8_t value)
	{
		___handedness_4 = value;
	}

	inline static int32_t get_offset_of_ControllerTransform_5() { return static_cast<int32_t>(offsetof(ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11, ___ControllerTransform_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_ControllerTransform_5() const { return ___ControllerTransform_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_ControllerTransform_5() { return &___ControllerTransform_5; }
	inline void set_ControllerTransform_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___ControllerTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ControllerTransform_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct  Solver_t45BC4457D52541691149931505197834E2BCC506  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::updateLinkedTransform
	bool ___updateLinkedTransform_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::moveLerpTime
	float ___moveLerpTime_5;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::rotateLerpTime
	float ___rotateLerpTime_6;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::scaleLerpTime
	float ___scaleLerpTime_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::maintainScale
	bool ___maintainScale_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::smoothing
	bool ___smoothing_9;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::lifetime
	float ___lifetime_10;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::currentLifetime
	float ___currentLifetime_11;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverHandler
	SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * ___SolverHandler_12;

public:
	inline static int32_t get_offset_of_updateLinkedTransform_4() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___updateLinkedTransform_4)); }
	inline bool get_updateLinkedTransform_4() const { return ___updateLinkedTransform_4; }
	inline bool* get_address_of_updateLinkedTransform_4() { return &___updateLinkedTransform_4; }
	inline void set_updateLinkedTransform_4(bool value)
	{
		___updateLinkedTransform_4 = value;
	}

	inline static int32_t get_offset_of_moveLerpTime_5() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___moveLerpTime_5)); }
	inline float get_moveLerpTime_5() const { return ___moveLerpTime_5; }
	inline float* get_address_of_moveLerpTime_5() { return &___moveLerpTime_5; }
	inline void set_moveLerpTime_5(float value)
	{
		___moveLerpTime_5 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_6() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___rotateLerpTime_6)); }
	inline float get_rotateLerpTime_6() const { return ___rotateLerpTime_6; }
	inline float* get_address_of_rotateLerpTime_6() { return &___rotateLerpTime_6; }
	inline void set_rotateLerpTime_6(float value)
	{
		___rotateLerpTime_6 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_7() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___scaleLerpTime_7)); }
	inline float get_scaleLerpTime_7() const { return ___scaleLerpTime_7; }
	inline float* get_address_of_scaleLerpTime_7() { return &___scaleLerpTime_7; }
	inline void set_scaleLerpTime_7(float value)
	{
		___scaleLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_maintainScale_8() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___maintainScale_8)); }
	inline bool get_maintainScale_8() const { return ___maintainScale_8; }
	inline bool* get_address_of_maintainScale_8() { return &___maintainScale_8; }
	inline void set_maintainScale_8(bool value)
	{
		___maintainScale_8 = value;
	}

	inline static int32_t get_offset_of_smoothing_9() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___smoothing_9)); }
	inline bool get_smoothing_9() const { return ___smoothing_9; }
	inline bool* get_address_of_smoothing_9() { return &___smoothing_9; }
	inline void set_smoothing_9(bool value)
	{
		___smoothing_9 = value;
	}

	inline static int32_t get_offset_of_lifetime_10() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___lifetime_10)); }
	inline float get_lifetime_10() const { return ___lifetime_10; }
	inline float* get_address_of_lifetime_10() { return &___lifetime_10; }
	inline void set_lifetime_10(float value)
	{
		___lifetime_10 = value;
	}

	inline static int32_t get_offset_of_currentLifetime_11() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___currentLifetime_11)); }
	inline float get_currentLifetime_11() const { return ___currentLifetime_11; }
	inline float* get_address_of_currentLifetime_11() { return &___currentLifetime_11; }
	inline void set_currentLifetime_11(float value)
	{
		___currentLifetime_11 = value;
	}

	inline static int32_t get_offset_of_SolverHandler_12() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___SolverHandler_12)); }
	inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * get_SolverHandler_12() const { return ___SolverHandler_12; }
	inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 ** get_address_of_SolverHandler_12() { return &___SolverHandler_12; }
	inline void set_SolverHandler_12(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * value)
	{
		___SolverHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SolverHandler_12), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct  SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedTargetType
	int32_t ___trackedTargetType_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandness
	uint8_t ___trackedHandness_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandJoint
	int32_t ___trackedHandJoint_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::transformOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transformOverride_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalOffset_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalRotation_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolvers
	bool ___updateSolvers_10;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::solvers
	List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * ___solvers_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolversList
	bool ___updateSolversList_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalPositionU3Ek__BackingField_13;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CGoalRotationU3Ek__BackingField_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalScale>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalScaleU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<AltScale>k__BackingField
	Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  ___U3CAltScaleU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::currentTrackedHandedness
	uint8_t ___currentTrackedHandedness_18;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::preferredTrackedHandedness
	uint8_t ___preferredTrackedHandedness_19;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackingTarget
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___trackingTarget_20;
	// Microsoft.MixedReality.Toolkit.Input.LinePointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::controllerRay
	LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * ___controllerRay_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::lastUpdateTime
	float ___lastUpdateTime_22;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::handJointService
	RuntimeObject* ___handJointService_23;

public:
	inline static int32_t get_offset_of_trackedTargetType_4() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___trackedTargetType_4)); }
	inline int32_t get_trackedTargetType_4() const { return ___trackedTargetType_4; }
	inline int32_t* get_address_of_trackedTargetType_4() { return &___trackedTargetType_4; }
	inline void set_trackedTargetType_4(int32_t value)
	{
		___trackedTargetType_4 = value;
	}

	inline static int32_t get_offset_of_trackedHandness_5() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___trackedHandness_5)); }
	inline uint8_t get_trackedHandness_5() const { return ___trackedHandness_5; }
	inline uint8_t* get_address_of_trackedHandness_5() { return &___trackedHandness_5; }
	inline void set_trackedHandness_5(uint8_t value)
	{
		___trackedHandness_5 = value;
	}

	inline static int32_t get_offset_of_trackedHandJoint_6() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___trackedHandJoint_6)); }
	inline int32_t get_trackedHandJoint_6() const { return ___trackedHandJoint_6; }
	inline int32_t* get_address_of_trackedHandJoint_6() { return &___trackedHandJoint_6; }
	inline void set_trackedHandJoint_6(int32_t value)
	{
		___trackedHandJoint_6 = value;
	}

	inline static int32_t get_offset_of_transformOverride_7() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___transformOverride_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_transformOverride_7() const { return ___transformOverride_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_transformOverride_7() { return &___transformOverride_7; }
	inline void set_transformOverride_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___transformOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_additionalOffset_8() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___additionalOffset_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalOffset_8() const { return ___additionalOffset_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalOffset_8() { return &___additionalOffset_8; }
	inline void set_additionalOffset_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalOffset_8 = value;
	}

	inline static int32_t get_offset_of_additionalRotation_9() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___additionalRotation_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalRotation_9() const { return ___additionalRotation_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalRotation_9() { return &___additionalRotation_9; }
	inline void set_additionalRotation_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalRotation_9 = value;
	}

	inline static int32_t get_offset_of_updateSolvers_10() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___updateSolvers_10)); }
	inline bool get_updateSolvers_10() const { return ___updateSolvers_10; }
	inline bool* get_address_of_updateSolvers_10() { return &___updateSolvers_10; }
	inline void set_updateSolvers_10(bool value)
	{
		___updateSolvers_10 = value;
	}

	inline static int32_t get_offset_of_solvers_11() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___solvers_11)); }
	inline List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * get_solvers_11() const { return ___solvers_11; }
	inline List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E ** get_address_of_solvers_11() { return &___solvers_11; }
	inline void set_solvers_11(List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * value)
	{
		___solvers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___solvers_11), (void*)value);
	}

	inline static int32_t get_offset_of_updateSolversList_12() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___updateSolversList_12)); }
	inline bool get_updateSolversList_12() const { return ___updateSolversList_12; }
	inline bool* get_address_of_updateSolversList_12() { return &___updateSolversList_12; }
	inline void set_updateSolversList_12(bool value)
	{
		___updateSolversList_12 = value;
	}

	inline static int32_t get_offset_of_U3CGoalPositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CGoalPositionU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalPositionU3Ek__BackingField_13() const { return ___U3CGoalPositionU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalPositionU3Ek__BackingField_13() { return &___U3CGoalPositionU3Ek__BackingField_13; }
	inline void set_U3CGoalPositionU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalPositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CGoalRotationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CGoalRotationU3Ek__BackingField_14)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CGoalRotationU3Ek__BackingField_14() const { return ___U3CGoalRotationU3Ek__BackingField_14; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CGoalRotationU3Ek__BackingField_14() { return &___U3CGoalRotationU3Ek__BackingField_14; }
	inline void set_U3CGoalRotationU3Ek__BackingField_14(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CGoalRotationU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CGoalScaleU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CGoalScaleU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalScaleU3Ek__BackingField_15() const { return ___U3CGoalScaleU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalScaleU3Ek__BackingField_15() { return &___U3CGoalScaleU3Ek__BackingField_15; }
	inline void set_U3CGoalScaleU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalScaleU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CAltScaleU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CAltScaleU3Ek__BackingField_16)); }
	inline Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  get_U3CAltScaleU3Ek__BackingField_16() const { return ___U3CAltScaleU3Ek__BackingField_16; }
	inline Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E * get_address_of_U3CAltScaleU3Ek__BackingField_16() { return &___U3CAltScaleU3Ek__BackingField_16; }
	inline void set_U3CAltScaleU3Ek__BackingField_16(Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  value)
	{
		___U3CAltScaleU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CDeltaTimeU3Ek__BackingField_17)); }
	inline float get_U3CDeltaTimeU3Ek__BackingField_17() const { return ___U3CDeltaTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CDeltaTimeU3Ek__BackingField_17() { return &___U3CDeltaTimeU3Ek__BackingField_17; }
	inline void set_U3CDeltaTimeU3Ek__BackingField_17(float value)
	{
		___U3CDeltaTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_currentTrackedHandedness_18() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___currentTrackedHandedness_18)); }
	inline uint8_t get_currentTrackedHandedness_18() const { return ___currentTrackedHandedness_18; }
	inline uint8_t* get_address_of_currentTrackedHandedness_18() { return &___currentTrackedHandedness_18; }
	inline void set_currentTrackedHandedness_18(uint8_t value)
	{
		___currentTrackedHandedness_18 = value;
	}

	inline static int32_t get_offset_of_preferredTrackedHandedness_19() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___preferredTrackedHandedness_19)); }
	inline uint8_t get_preferredTrackedHandedness_19() const { return ___preferredTrackedHandedness_19; }
	inline uint8_t* get_address_of_preferredTrackedHandedness_19() { return &___preferredTrackedHandedness_19; }
	inline void set_preferredTrackedHandedness_19(uint8_t value)
	{
		___preferredTrackedHandedness_19 = value;
	}

	inline static int32_t get_offset_of_trackingTarget_20() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___trackingTarget_20)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_trackingTarget_20() const { return ___trackingTarget_20; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_trackingTarget_20() { return &___trackingTarget_20; }
	inline void set_trackingTarget_20(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___trackingTarget_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingTarget_20), (void*)value);
	}

	inline static int32_t get_offset_of_controllerRay_21() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___controllerRay_21)); }
	inline LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * get_controllerRay_21() const { return ___controllerRay_21; }
	inline LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 ** get_address_of_controllerRay_21() { return &___controllerRay_21; }
	inline void set_controllerRay_21(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * value)
	{
		___controllerRay_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerRay_21), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdateTime_22() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___lastUpdateTime_22)); }
	inline float get_lastUpdateTime_22() const { return ___lastUpdateTime_22; }
	inline float* get_address_of_lastUpdateTime_22() { return &___lastUpdateTime_22; }
	inline void set_lastUpdateTime_22(float value)
	{
		___lastUpdateTime_22 = value;
	}

	inline static int32_t get_offset_of_handJointService_23() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___handJointService_23)); }
	inline RuntimeObject* get_handJointService_23() const { return ___handJointService_23; }
	inline RuntimeObject** get_address_of_handJointService_23() { return &___handJointService_23; }
	inline void set_handJointService_23(RuntimeObject* value)
	{
		___handJointService_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJointService_23), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct  TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Columns
	int32_t ___Columns_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::TileSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___TileSize_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Gutters
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Gutters_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::LayoutDireciton
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___LayoutDireciton_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::StartPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___StartPosition_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Centered
	bool ___Centered_9;
	// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::DepthCalculatedBy
	int32_t ___DepthCalculatedBy_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnlyInEditMode
	bool ___OnlyInEditMode_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::offSet
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offSet_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::editorUpdated
	bool ___editorUpdated_13;

public:
	inline static int32_t get_offset_of_Columns_4() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___Columns_4)); }
	inline int32_t get_Columns_4() const { return ___Columns_4; }
	inline int32_t* get_address_of_Columns_4() { return &___Columns_4; }
	inline void set_Columns_4(int32_t value)
	{
		___Columns_4 = value;
	}

	inline static int32_t get_offset_of_TileSize_5() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___TileSize_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_TileSize_5() const { return ___TileSize_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_TileSize_5() { return &___TileSize_5; }
	inline void set_TileSize_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___TileSize_5 = value;
	}

	inline static int32_t get_offset_of_Gutters_6() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___Gutters_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Gutters_6() const { return ___Gutters_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Gutters_6() { return &___Gutters_6; }
	inline void set_Gutters_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Gutters_6 = value;
	}

	inline static int32_t get_offset_of_LayoutDireciton_7() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___LayoutDireciton_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_LayoutDireciton_7() const { return ___LayoutDireciton_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_LayoutDireciton_7() { return &___LayoutDireciton_7; }
	inline void set_LayoutDireciton_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___LayoutDireciton_7 = value;
	}

	inline static int32_t get_offset_of_StartPosition_8() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___StartPosition_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_StartPosition_8() const { return ___StartPosition_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_StartPosition_8() { return &___StartPosition_8; }
	inline void set_StartPosition_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___StartPosition_8 = value;
	}

	inline static int32_t get_offset_of_Centered_9() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___Centered_9)); }
	inline bool get_Centered_9() const { return ___Centered_9; }
	inline bool* get_address_of_Centered_9() { return &___Centered_9; }
	inline void set_Centered_9(bool value)
	{
		___Centered_9 = value;
	}

	inline static int32_t get_offset_of_DepthCalculatedBy_10() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___DepthCalculatedBy_10)); }
	inline int32_t get_DepthCalculatedBy_10() const { return ___DepthCalculatedBy_10; }
	inline int32_t* get_address_of_DepthCalculatedBy_10() { return &___DepthCalculatedBy_10; }
	inline void set_DepthCalculatedBy_10(int32_t value)
	{
		___DepthCalculatedBy_10 = value;
	}

	inline static int32_t get_offset_of_OnlyInEditMode_11() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___OnlyInEditMode_11)); }
	inline bool get_OnlyInEditMode_11() const { return ___OnlyInEditMode_11; }
	inline bool* get_address_of_OnlyInEditMode_11() { return &___OnlyInEditMode_11; }
	inline void set_OnlyInEditMode_11(bool value)
	{
		___OnlyInEditMode_11 = value;
	}

	inline static int32_t get_offset_of_offSet_12() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___offSet_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offSet_12() const { return ___offSet_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offSet_12() { return &___offSet_12; }
	inline void set_offSet_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offSet_12 = value;
	}

	inline static int32_t get_offset_of_editorUpdated_13() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___editorUpdated_13)); }
	inline bool get_editorUpdated_13() const { return ___editorUpdated_13; }
	inline bool* get_address_of_editorUpdated_13() { return &___editorUpdated_13; }
	inline void set_editorUpdated_13(bool value)
	{
		___editorUpdated_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer
struct  ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651  : public InputSystemGlobalHandlerListener_t0A638320E7C263ED03BF16AFC52F6A2084FFC207
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::destroyOnSourceLost
	bool ___destroyOnSourceLost_5;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::TrackingState
	int32_t ___TrackingState_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::controller
	RuntimeObject* ___controller_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::useSourcePoseData
	bool ___useSourcePoseData_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::poseAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___poseAction_9;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::handedness
	uint8_t ___handedness_10;

public:
	inline static int32_t get_offset_of_destroyOnSourceLost_5() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651, ___destroyOnSourceLost_5)); }
	inline bool get_destroyOnSourceLost_5() const { return ___destroyOnSourceLost_5; }
	inline bool* get_address_of_destroyOnSourceLost_5() { return &___destroyOnSourceLost_5; }
	inline void set_destroyOnSourceLost_5(bool value)
	{
		___destroyOnSourceLost_5 = value;
	}

	inline static int32_t get_offset_of_TrackingState_6() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651, ___TrackingState_6)); }
	inline int32_t get_TrackingState_6() const { return ___TrackingState_6; }
	inline int32_t* get_address_of_TrackingState_6() { return &___TrackingState_6; }
	inline void set_TrackingState_6(int32_t value)
	{
		___TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_controller_7() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651, ___controller_7)); }
	inline RuntimeObject* get_controller_7() const { return ___controller_7; }
	inline RuntimeObject** get_address_of_controller_7() { return &___controller_7; }
	inline void set_controller_7(RuntimeObject* value)
	{
		___controller_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_7), (void*)value);
	}

	inline static int32_t get_offset_of_useSourcePoseData_8() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651, ___useSourcePoseData_8)); }
	inline bool get_useSourcePoseData_8() const { return ___useSourcePoseData_8; }
	inline bool* get_address_of_useSourcePoseData_8() { return &___useSourcePoseData_8; }
	inline void set_useSourcePoseData_8(bool value)
	{
		___useSourcePoseData_8 = value;
	}

	inline static int32_t get_offset_of_poseAction_9() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651, ___poseAction_9)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_poseAction_9() const { return ___poseAction_9; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_poseAction_9() { return &___poseAction_9; }
	inline void set_poseAction_9(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___poseAction_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___poseAction_9))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_handedness_10() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651, ___handedness_10)); }
	inline uint8_t get_handedness_10() const { return ___handedness_10; }
	inline uint8_t* get_address_of_handedness_10() { return &___handedness_10; }
	inline void set_handedness_10(uint8_t value)
	{
		___handedness_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint
struct  HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::safeZone
	int32_t ___safeZone_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::safeZoneBuffer
	float ___safeZoneBuffer_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::updateWhenOppositeHandNear
	bool ___updateWhenOppositeHandNear_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::hideHandCursorsOnActivate
	bool ___hideHandCursorsOnActivate_16;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::rotationBehavior
	int32_t ___rotationBehavior_17;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onHandActivate
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onHandActivate_18;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onHandDeactivate
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onHandDeactivate_19;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onFirstHandDetected
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onFirstHandDetected_20;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onLastHandLost
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onLastHandLost_21;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::previousHandedness
	uint8_t ___previousHandedness_22;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::trackedController
	RuntimeObject* ___trackedController_23;
	// Microsoft.MixedReality.Toolkit.Input.HandBounds Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::handBounds
	HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * ___handBounds_24;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::handToWorldRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___handToWorldRotation_25;

public:
	inline static int32_t get_offset_of_safeZone_13() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___safeZone_13)); }
	inline int32_t get_safeZone_13() const { return ___safeZone_13; }
	inline int32_t* get_address_of_safeZone_13() { return &___safeZone_13; }
	inline void set_safeZone_13(int32_t value)
	{
		___safeZone_13 = value;
	}

	inline static int32_t get_offset_of_safeZoneBuffer_14() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___safeZoneBuffer_14)); }
	inline float get_safeZoneBuffer_14() const { return ___safeZoneBuffer_14; }
	inline float* get_address_of_safeZoneBuffer_14() { return &___safeZoneBuffer_14; }
	inline void set_safeZoneBuffer_14(float value)
	{
		___safeZoneBuffer_14 = value;
	}

	inline static int32_t get_offset_of_updateWhenOppositeHandNear_15() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___updateWhenOppositeHandNear_15)); }
	inline bool get_updateWhenOppositeHandNear_15() const { return ___updateWhenOppositeHandNear_15; }
	inline bool* get_address_of_updateWhenOppositeHandNear_15() { return &___updateWhenOppositeHandNear_15; }
	inline void set_updateWhenOppositeHandNear_15(bool value)
	{
		___updateWhenOppositeHandNear_15 = value;
	}

	inline static int32_t get_offset_of_hideHandCursorsOnActivate_16() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___hideHandCursorsOnActivate_16)); }
	inline bool get_hideHandCursorsOnActivate_16() const { return ___hideHandCursorsOnActivate_16; }
	inline bool* get_address_of_hideHandCursorsOnActivate_16() { return &___hideHandCursorsOnActivate_16; }
	inline void set_hideHandCursorsOnActivate_16(bool value)
	{
		___hideHandCursorsOnActivate_16 = value;
	}

	inline static int32_t get_offset_of_rotationBehavior_17() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___rotationBehavior_17)); }
	inline int32_t get_rotationBehavior_17() const { return ___rotationBehavior_17; }
	inline int32_t* get_address_of_rotationBehavior_17() { return &___rotationBehavior_17; }
	inline void set_rotationBehavior_17(int32_t value)
	{
		___rotationBehavior_17 = value;
	}

	inline static int32_t get_offset_of_onHandActivate_18() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___onHandActivate_18)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onHandActivate_18() const { return ___onHandActivate_18; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onHandActivate_18() { return &___onHandActivate_18; }
	inline void set_onHandActivate_18(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onHandActivate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHandActivate_18), (void*)value);
	}

	inline static int32_t get_offset_of_onHandDeactivate_19() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___onHandDeactivate_19)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onHandDeactivate_19() const { return ___onHandDeactivate_19; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onHandDeactivate_19() { return &___onHandDeactivate_19; }
	inline void set_onHandDeactivate_19(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onHandDeactivate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHandDeactivate_19), (void*)value);
	}

	inline static int32_t get_offset_of_onFirstHandDetected_20() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___onFirstHandDetected_20)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onFirstHandDetected_20() const { return ___onFirstHandDetected_20; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onFirstHandDetected_20() { return &___onFirstHandDetected_20; }
	inline void set_onFirstHandDetected_20(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onFirstHandDetected_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFirstHandDetected_20), (void*)value);
	}

	inline static int32_t get_offset_of_onLastHandLost_21() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___onLastHandLost_21)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onLastHandLost_21() const { return ___onLastHandLost_21; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onLastHandLost_21() { return &___onLastHandLost_21; }
	inline void set_onLastHandLost_21(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onLastHandLost_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onLastHandLost_21), (void*)value);
	}

	inline static int32_t get_offset_of_previousHandedness_22() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___previousHandedness_22)); }
	inline uint8_t get_previousHandedness_22() const { return ___previousHandedness_22; }
	inline uint8_t* get_address_of_previousHandedness_22() { return &___previousHandedness_22; }
	inline void set_previousHandedness_22(uint8_t value)
	{
		___previousHandedness_22 = value;
	}

	inline static int32_t get_offset_of_trackedController_23() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___trackedController_23)); }
	inline RuntimeObject* get_trackedController_23() const { return ___trackedController_23; }
	inline RuntimeObject** get_address_of_trackedController_23() { return &___trackedController_23; }
	inline void set_trackedController_23(RuntimeObject* value)
	{
		___trackedController_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedController_23), (void*)value);
	}

	inline static int32_t get_offset_of_handBounds_24() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___handBounds_24)); }
	inline HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * get_handBounds_24() const { return ___handBounds_24; }
	inline HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 ** get_address_of_handBounds_24() { return &___handBounds_24; }
	inline void set_handBounds_24(HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * value)
	{
		___handBounds_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handBounds_24), (void*)value);
	}

	inline static int32_t get_offset_of_handToWorldRotation_25() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___handToWorldRotation_25)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_handToWorldRotation_25() const { return ___handToWorldRotation_25; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_handToWorldRotation_25() { return &___handToWorldRotation_25; }
	inline void set_handToWorldRotation_25(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___handToWorldRotation_25 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween
struct  InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::partwayOffset
	float ___partwayOffset_13;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondTrackedObjectType
	int32_t ___secondTrackedObjectType_14;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondTransformOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransformOverride_15;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondSolverHandler
	SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * ___secondSolverHandler_16;

public:
	inline static int32_t get_offset_of_partwayOffset_13() { return static_cast<int32_t>(offsetof(InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542, ___partwayOffset_13)); }
	inline float get_partwayOffset_13() const { return ___partwayOffset_13; }
	inline float* get_address_of_partwayOffset_13() { return &___partwayOffset_13; }
	inline void set_partwayOffset_13(float value)
	{
		___partwayOffset_13 = value;
	}

	inline static int32_t get_offset_of_secondTrackedObjectType_14() { return static_cast<int32_t>(offsetof(InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542, ___secondTrackedObjectType_14)); }
	inline int32_t get_secondTrackedObjectType_14() const { return ___secondTrackedObjectType_14; }
	inline int32_t* get_address_of_secondTrackedObjectType_14() { return &___secondTrackedObjectType_14; }
	inline void set_secondTrackedObjectType_14(int32_t value)
	{
		___secondTrackedObjectType_14 = value;
	}

	inline static int32_t get_offset_of_secondTransformOverride_15() { return static_cast<int32_t>(offsetof(InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542, ___secondTransformOverride_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_secondTransformOverride_15() const { return ___secondTransformOverride_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_secondTransformOverride_15() { return &___secondTransformOverride_15; }
	inline void set_secondTransformOverride_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___secondTransformOverride_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondTransformOverride_15), (void*)value);
	}

	inline static int32_t get_offset_of_secondSolverHandler_16() { return static_cast<int32_t>(offsetof(InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542, ___secondSolverHandler_16)); }
	inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * get_secondSolverHandler_16() const { return ___secondSolverHandler_16; }
	inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 ** get_address_of_secondSolverHandler_16() { return &___secondSolverHandler_16; }
	inline void set_secondSolverHandler_16(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * value)
	{
		___secondSolverHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondSolverHandler_16), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum
struct  Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::resistance
	float ___resistance_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::resistanceVelocityPower
	float ___resistanceVelocityPower_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::accelerationRate
	float ___accelerationRate_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::springiness
	float ___springiness_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::snapZ
	bool ___snapZ_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocity_18;

public:
	inline static int32_t get_offset_of_resistance_13() { return static_cast<int32_t>(offsetof(Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4, ___resistance_13)); }
	inline float get_resistance_13() const { return ___resistance_13; }
	inline float* get_address_of_resistance_13() { return &___resistance_13; }
	inline void set_resistance_13(float value)
	{
		___resistance_13 = value;
	}

	inline static int32_t get_offset_of_resistanceVelocityPower_14() { return static_cast<int32_t>(offsetof(Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4, ___resistanceVelocityPower_14)); }
	inline float get_resistanceVelocityPower_14() const { return ___resistanceVelocityPower_14; }
	inline float* get_address_of_resistanceVelocityPower_14() { return &___resistanceVelocityPower_14; }
	inline void set_resistanceVelocityPower_14(float value)
	{
		___resistanceVelocityPower_14 = value;
	}

	inline static int32_t get_offset_of_accelerationRate_15() { return static_cast<int32_t>(offsetof(Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4, ___accelerationRate_15)); }
	inline float get_accelerationRate_15() const { return ___accelerationRate_15; }
	inline float* get_address_of_accelerationRate_15() { return &___accelerationRate_15; }
	inline void set_accelerationRate_15(float value)
	{
		___accelerationRate_15 = value;
	}

	inline static int32_t get_offset_of_springiness_16() { return static_cast<int32_t>(offsetof(Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4, ___springiness_16)); }
	inline float get_springiness_16() const { return ___springiness_16; }
	inline float* get_address_of_springiness_16() { return &___springiness_16; }
	inline void set_springiness_16(float value)
	{
		___springiness_16 = value;
	}

	inline static int32_t get_offset_of_snapZ_17() { return static_cast<int32_t>(offsetof(Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4, ___snapZ_17)); }
	inline bool get_snapZ_17() const { return ___snapZ_17; }
	inline bool* get_address_of_snapZ_17() { return &___snapZ_17; }
	inline void set_snapZ_17(bool value)
	{
		___snapZ_17 = value;
	}

	inline static int32_t get_offset_of_velocity_18() { return static_cast<int32_t>(offsetof(Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4, ___velocity_18)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocity_18() const { return ___velocity_18; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocity_18() { return &___velocity_18; }
	inline void set_velocity_18(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocity_18 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital
struct  Orbital_t4E2C971B059A301433A2439374836A8866E4BA87  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::orientationType
	int32_t ___orientationType_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::localOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localOffset_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::worldOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldOffset_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::useAngleStepping
	bool ___useAngleStepping_16;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::tetherAngleSteps
	int32_t ___tetherAngleSteps_17;

public:
	inline static int32_t get_offset_of_orientationType_13() { return static_cast<int32_t>(offsetof(Orbital_t4E2C971B059A301433A2439374836A8866E4BA87, ___orientationType_13)); }
	inline int32_t get_orientationType_13() const { return ___orientationType_13; }
	inline int32_t* get_address_of_orientationType_13() { return &___orientationType_13; }
	inline void set_orientationType_13(int32_t value)
	{
		___orientationType_13 = value;
	}

	inline static int32_t get_offset_of_localOffset_14() { return static_cast<int32_t>(offsetof(Orbital_t4E2C971B059A301433A2439374836A8866E4BA87, ___localOffset_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_localOffset_14() const { return ___localOffset_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_localOffset_14() { return &___localOffset_14; }
	inline void set_localOffset_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___localOffset_14 = value;
	}

	inline static int32_t get_offset_of_worldOffset_15() { return static_cast<int32_t>(offsetof(Orbital_t4E2C971B059A301433A2439374836A8866E4BA87, ___worldOffset_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldOffset_15() const { return ___worldOffset_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldOffset_15() { return &___worldOffset_15; }
	inline void set_worldOffset_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldOffset_15 = value;
	}

	inline static int32_t get_offset_of_useAngleStepping_16() { return static_cast<int32_t>(offsetof(Orbital_t4E2C971B059A301433A2439374836A8866E4BA87, ___useAngleStepping_16)); }
	inline bool get_useAngleStepping_16() const { return ___useAngleStepping_16; }
	inline bool* get_address_of_useAngleStepping_16() { return &___useAngleStepping_16; }
	inline void set_useAngleStepping_16(bool value)
	{
		___useAngleStepping_16 = value;
	}

	inline static int32_t get_offset_of_tetherAngleSteps_17() { return static_cast<int32_t>(offsetof(Orbital_t4E2C971B059A301433A2439374836A8866E4BA87, ___tetherAngleSteps_17)); }
	inline int32_t get_tetherAngleSteps_17() const { return ___tetherAngleSteps_17; }
	inline int32_t* get_address_of_tetherAngleSteps_17() { return &___tetherAngleSteps_17; }
	inline void set_tetherAngleSteps_17(int32_t value)
	{
		___tetherAngleSteps_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct  Overlap_t14605F26108B061874FE4594021CBF8BFEBB3CE1  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct  RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::referenceDirection
	int32_t ___referenceDirection_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minDistance
	float ___minDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxDistance
	float ___maxDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minViewDegrees
	float ___minViewDegrees_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxViewDegrees
	float ___maxViewDegrees_17;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::aspectV
	float ___aspectV_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreAngleClamp
	bool ___ignoreAngleClamp_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreDistanceClamp
	bool ___ignoreDistanceClamp_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::useFixedVerticalPosition
	bool ___useFixedVerticalPosition_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::fixedVerticalPosition
	float ___fixedVerticalPosition_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::orientToReferenceDirection
	bool ___orientToReferenceDirection_23;

public:
	inline static int32_t get_offset_of_referenceDirection_13() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___referenceDirection_13)); }
	inline int32_t get_referenceDirection_13() const { return ___referenceDirection_13; }
	inline int32_t* get_address_of_referenceDirection_13() { return &___referenceDirection_13; }
	inline void set_referenceDirection_13(int32_t value)
	{
		___referenceDirection_13 = value;
	}

	inline static int32_t get_offset_of_minDistance_14() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___minDistance_14)); }
	inline float get_minDistance_14() const { return ___minDistance_14; }
	inline float* get_address_of_minDistance_14() { return &___minDistance_14; }
	inline void set_minDistance_14(float value)
	{
		___minDistance_14 = value;
	}

	inline static int32_t get_offset_of_maxDistance_15() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___maxDistance_15)); }
	inline float get_maxDistance_15() const { return ___maxDistance_15; }
	inline float* get_address_of_maxDistance_15() { return &___maxDistance_15; }
	inline void set_maxDistance_15(float value)
	{
		___maxDistance_15 = value;
	}

	inline static int32_t get_offset_of_minViewDegrees_16() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___minViewDegrees_16)); }
	inline float get_minViewDegrees_16() const { return ___minViewDegrees_16; }
	inline float* get_address_of_minViewDegrees_16() { return &___minViewDegrees_16; }
	inline void set_minViewDegrees_16(float value)
	{
		___minViewDegrees_16 = value;
	}

	inline static int32_t get_offset_of_maxViewDegrees_17() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___maxViewDegrees_17)); }
	inline float get_maxViewDegrees_17() const { return ___maxViewDegrees_17; }
	inline float* get_address_of_maxViewDegrees_17() { return &___maxViewDegrees_17; }
	inline void set_maxViewDegrees_17(float value)
	{
		___maxViewDegrees_17 = value;
	}

	inline static int32_t get_offset_of_aspectV_18() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___aspectV_18)); }
	inline float get_aspectV_18() const { return ___aspectV_18; }
	inline float* get_address_of_aspectV_18() { return &___aspectV_18; }
	inline void set_aspectV_18(float value)
	{
		___aspectV_18 = value;
	}

	inline static int32_t get_offset_of_ignoreAngleClamp_19() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___ignoreAngleClamp_19)); }
	inline bool get_ignoreAngleClamp_19() const { return ___ignoreAngleClamp_19; }
	inline bool* get_address_of_ignoreAngleClamp_19() { return &___ignoreAngleClamp_19; }
	inline void set_ignoreAngleClamp_19(bool value)
	{
		___ignoreAngleClamp_19 = value;
	}

	inline static int32_t get_offset_of_ignoreDistanceClamp_20() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___ignoreDistanceClamp_20)); }
	inline bool get_ignoreDistanceClamp_20() const { return ___ignoreDistanceClamp_20; }
	inline bool* get_address_of_ignoreDistanceClamp_20() { return &___ignoreDistanceClamp_20; }
	inline void set_ignoreDistanceClamp_20(bool value)
	{
		___ignoreDistanceClamp_20 = value;
	}

	inline static int32_t get_offset_of_useFixedVerticalPosition_21() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___useFixedVerticalPosition_21)); }
	inline bool get_useFixedVerticalPosition_21() const { return ___useFixedVerticalPosition_21; }
	inline bool* get_address_of_useFixedVerticalPosition_21() { return &___useFixedVerticalPosition_21; }
	inline void set_useFixedVerticalPosition_21(bool value)
	{
		___useFixedVerticalPosition_21 = value;
	}

	inline static int32_t get_offset_of_fixedVerticalPosition_22() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___fixedVerticalPosition_22)); }
	inline float get_fixedVerticalPosition_22() const { return ___fixedVerticalPosition_22; }
	inline float* get_address_of_fixedVerticalPosition_22() { return &___fixedVerticalPosition_22; }
	inline void set_fixedVerticalPosition_22(float value)
	{
		___fixedVerticalPosition_22 = value;
	}

	inline static int32_t get_offset_of_orientToReferenceDirection_23() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___orientToReferenceDirection_23)); }
	inline bool get_orientToReferenceDirection_23() const { return ___orientToReferenceDirection_23; }
	inline bool* get_address_of_orientToReferenceDirection_23() { return &___orientToReferenceDirection_23; }
	inline void set_orientToReferenceDirection_23(bool value)
	{
		___orientToReferenceDirection_23 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct  SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::magneticSurfaces
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___magneticSurfaces_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maxRaycastDistance
	float ___maxRaycastDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::closestDistance
	float ___closestDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceNormalOffset
	float ___surfaceNormalOffset_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceRayOffset
	float ___surfaceRayOffset_17;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::raycastMode
	int32_t ___raycastMode_18;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxRaysPerEdge
	int32_t ___boxRaysPerEdge_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orthographicBoxCast
	bool ___orthographicBoxCast_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maximumNormalVariance
	float ___maximumNormalVariance_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::sphereSize
	float ___sphereSize_22;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::volumeCastSizeOverride
	float ___volumeCastSizeOverride_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::useLinkedAltScaleOverride
	bool ___useLinkedAltScaleOverride_24;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::currentRaycastDirectionMode
	int32_t ___currentRaycastDirectionMode_25;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationMode
	int32_t ___orientationMode_26;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationBlend
	float ___orientationBlend_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::keepOrientationVertical
	bool ___keepOrientationVertical_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::debugEnabled
	bool ___debugEnabled_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::<OnSurface>k__BackingField
	bool ___U3COnSurfaceU3Ek__BackingField_30;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::currentRayStep
	RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  ___currentRayStep_32;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxCollider
	BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___boxCollider_33;

public:
	inline static int32_t get_offset_of_magneticSurfaces_13() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___magneticSurfaces_13)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_magneticSurfaces_13() const { return ___magneticSurfaces_13; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_magneticSurfaces_13() { return &___magneticSurfaces_13; }
	inline void set_magneticSurfaces_13(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___magneticSurfaces_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___magneticSurfaces_13), (void*)value);
	}

	inline static int32_t get_offset_of_maxRaycastDistance_14() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___maxRaycastDistance_14)); }
	inline float get_maxRaycastDistance_14() const { return ___maxRaycastDistance_14; }
	inline float* get_address_of_maxRaycastDistance_14() { return &___maxRaycastDistance_14; }
	inline void set_maxRaycastDistance_14(float value)
	{
		___maxRaycastDistance_14 = value;
	}

	inline static int32_t get_offset_of_closestDistance_15() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___closestDistance_15)); }
	inline float get_closestDistance_15() const { return ___closestDistance_15; }
	inline float* get_address_of_closestDistance_15() { return &___closestDistance_15; }
	inline void set_closestDistance_15(float value)
	{
		___closestDistance_15 = value;
	}

	inline static int32_t get_offset_of_surfaceNormalOffset_16() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___surfaceNormalOffset_16)); }
	inline float get_surfaceNormalOffset_16() const { return ___surfaceNormalOffset_16; }
	inline float* get_address_of_surfaceNormalOffset_16() { return &___surfaceNormalOffset_16; }
	inline void set_surfaceNormalOffset_16(float value)
	{
		___surfaceNormalOffset_16 = value;
	}

	inline static int32_t get_offset_of_surfaceRayOffset_17() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___surfaceRayOffset_17)); }
	inline float get_surfaceRayOffset_17() const { return ___surfaceRayOffset_17; }
	inline float* get_address_of_surfaceRayOffset_17() { return &___surfaceRayOffset_17; }
	inline void set_surfaceRayOffset_17(float value)
	{
		___surfaceRayOffset_17 = value;
	}

	inline static int32_t get_offset_of_raycastMode_18() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___raycastMode_18)); }
	inline int32_t get_raycastMode_18() const { return ___raycastMode_18; }
	inline int32_t* get_address_of_raycastMode_18() { return &___raycastMode_18; }
	inline void set_raycastMode_18(int32_t value)
	{
		___raycastMode_18 = value;
	}

	inline static int32_t get_offset_of_boxRaysPerEdge_19() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___boxRaysPerEdge_19)); }
	inline int32_t get_boxRaysPerEdge_19() const { return ___boxRaysPerEdge_19; }
	inline int32_t* get_address_of_boxRaysPerEdge_19() { return &___boxRaysPerEdge_19; }
	inline void set_boxRaysPerEdge_19(int32_t value)
	{
		___boxRaysPerEdge_19 = value;
	}

	inline static int32_t get_offset_of_orthographicBoxCast_20() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___orthographicBoxCast_20)); }
	inline bool get_orthographicBoxCast_20() const { return ___orthographicBoxCast_20; }
	inline bool* get_address_of_orthographicBoxCast_20() { return &___orthographicBoxCast_20; }
	inline void set_orthographicBoxCast_20(bool value)
	{
		___orthographicBoxCast_20 = value;
	}

	inline static int32_t get_offset_of_maximumNormalVariance_21() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___maximumNormalVariance_21)); }
	inline float get_maximumNormalVariance_21() const { return ___maximumNormalVariance_21; }
	inline float* get_address_of_maximumNormalVariance_21() { return &___maximumNormalVariance_21; }
	inline void set_maximumNormalVariance_21(float value)
	{
		___maximumNormalVariance_21 = value;
	}

	inline static int32_t get_offset_of_sphereSize_22() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___sphereSize_22)); }
	inline float get_sphereSize_22() const { return ___sphereSize_22; }
	inline float* get_address_of_sphereSize_22() { return &___sphereSize_22; }
	inline void set_sphereSize_22(float value)
	{
		___sphereSize_22 = value;
	}

	inline static int32_t get_offset_of_volumeCastSizeOverride_23() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___volumeCastSizeOverride_23)); }
	inline float get_volumeCastSizeOverride_23() const { return ___volumeCastSizeOverride_23; }
	inline float* get_address_of_volumeCastSizeOverride_23() { return &___volumeCastSizeOverride_23; }
	inline void set_volumeCastSizeOverride_23(float value)
	{
		___volumeCastSizeOverride_23 = value;
	}

	inline static int32_t get_offset_of_useLinkedAltScaleOverride_24() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___useLinkedAltScaleOverride_24)); }
	inline bool get_useLinkedAltScaleOverride_24() const { return ___useLinkedAltScaleOverride_24; }
	inline bool* get_address_of_useLinkedAltScaleOverride_24() { return &___useLinkedAltScaleOverride_24; }
	inline void set_useLinkedAltScaleOverride_24(bool value)
	{
		___useLinkedAltScaleOverride_24 = value;
	}

	inline static int32_t get_offset_of_currentRaycastDirectionMode_25() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___currentRaycastDirectionMode_25)); }
	inline int32_t get_currentRaycastDirectionMode_25() const { return ___currentRaycastDirectionMode_25; }
	inline int32_t* get_address_of_currentRaycastDirectionMode_25() { return &___currentRaycastDirectionMode_25; }
	inline void set_currentRaycastDirectionMode_25(int32_t value)
	{
		___currentRaycastDirectionMode_25 = value;
	}

	inline static int32_t get_offset_of_orientationMode_26() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___orientationMode_26)); }
	inline int32_t get_orientationMode_26() const { return ___orientationMode_26; }
	inline int32_t* get_address_of_orientationMode_26() { return &___orientationMode_26; }
	inline void set_orientationMode_26(int32_t value)
	{
		___orientationMode_26 = value;
	}

	inline static int32_t get_offset_of_orientationBlend_27() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___orientationBlend_27)); }
	inline float get_orientationBlend_27() const { return ___orientationBlend_27; }
	inline float* get_address_of_orientationBlend_27() { return &___orientationBlend_27; }
	inline void set_orientationBlend_27(float value)
	{
		___orientationBlend_27 = value;
	}

	inline static int32_t get_offset_of_keepOrientationVertical_28() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___keepOrientationVertical_28)); }
	inline bool get_keepOrientationVertical_28() const { return ___keepOrientationVertical_28; }
	inline bool* get_address_of_keepOrientationVertical_28() { return &___keepOrientationVertical_28; }
	inline void set_keepOrientationVertical_28(bool value)
	{
		___keepOrientationVertical_28 = value;
	}

	inline static int32_t get_offset_of_debugEnabled_29() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___debugEnabled_29)); }
	inline bool get_debugEnabled_29() const { return ___debugEnabled_29; }
	inline bool* get_address_of_debugEnabled_29() { return &___debugEnabled_29; }
	inline void set_debugEnabled_29(bool value)
	{
		___debugEnabled_29 = value;
	}

	inline static int32_t get_offset_of_U3COnSurfaceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___U3COnSurfaceU3Ek__BackingField_30)); }
	inline bool get_U3COnSurfaceU3Ek__BackingField_30() const { return ___U3COnSurfaceU3Ek__BackingField_30; }
	inline bool* get_address_of_U3COnSurfaceU3Ek__BackingField_30() { return &___U3COnSurfaceU3Ek__BackingField_30; }
	inline void set_U3COnSurfaceU3Ek__BackingField_30(bool value)
	{
		___U3COnSurfaceU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_currentRayStep_32() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___currentRayStep_32)); }
	inline RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  get_currentRayStep_32() const { return ___currentRayStep_32; }
	inline RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * get_address_of_currentRayStep_32() { return &___currentRayStep_32; }
	inline void set_currentRayStep_32(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  value)
	{
		___currentRayStep_32 = value;
	}

	inline static int32_t get_offset_of_boxCollider_33() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___boxCollider_33)); }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * get_boxCollider_33() const { return ___boxCollider_33; }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA ** get_address_of_boxCollider_33() { return &___boxCollider_33; }
	inline void set_boxCollider_33(BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * value)
	{
		___boxCollider_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxCollider_33), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer
struct  BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9  : public ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cursorPrefab_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::disableCursorOnStart
	bool ___disableCursorOnStart_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::setCursorVisibilityOnSourceDetected
	bool ___setCursorVisibilityOnSourceDetected_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorInstance
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cursorInstance_14;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::raycastOrigin
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___raycastOrigin_15;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::activeHoldAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___activeHoldAction_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___pointerAction_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresHoldAction
	bool ___requiresHoldAction_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresActionBeforeEnabling
	bool ___requiresActionBeforeEnabling_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsSelectPressed
	bool ___IsSelectPressed_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::HasSelectPressedOnce
	bool ___HasSelectPressedOnce_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsHoldPressed
	bool ___IsHoldPressed_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::isCursorInstantiatedFromPrefab
	bool ___isCursorInstantiatedFromPrefab_23;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerId
	uint32_t ___pointerId_24;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerName
	String_t* ___pointerName_25;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<InputSourceParent>k__BackingField
	RuntimeObject* ___U3CInputSourceParentU3Ek__BackingField_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_27;
	// Microsoft.MixedReality.Toolkit.Input.ICursorModifier Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsTargetPositionLockedOnFocusLock>k__BackingField
	bool ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::overrideGlobalPointerExtent
	bool ___overrideGlobalPointerExtent_32;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerExtent
	float ___pointerExtent_33;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::defaultPointerExtent
	float ___defaultPointerExtent_34;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Rays>k__BackingField
	RayStepU5BU5D_tCD1CE5D02607BA5FD6D2C499C92B2BE190BFC450* ___U3CRaysU3Ek__BackingField_35;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_37;
	// Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_38;
	// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_39;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<SceneQueryType>k__BackingField
	int32_t ___U3CSceneQueryTypeU3Ek__BackingField_40;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::sphereCastRadius
	float ___sphereCastRadius_41;

public:
	inline static int32_t get_offset_of_cursorPrefab_11() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___cursorPrefab_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cursorPrefab_11() const { return ___cursorPrefab_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cursorPrefab_11() { return &___cursorPrefab_11; }
	inline void set_cursorPrefab_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cursorPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cursorPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of_disableCursorOnStart_12() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___disableCursorOnStart_12)); }
	inline bool get_disableCursorOnStart_12() const { return ___disableCursorOnStart_12; }
	inline bool* get_address_of_disableCursorOnStart_12() { return &___disableCursorOnStart_12; }
	inline void set_disableCursorOnStart_12(bool value)
	{
		___disableCursorOnStart_12 = value;
	}

	inline static int32_t get_offset_of_setCursorVisibilityOnSourceDetected_13() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___setCursorVisibilityOnSourceDetected_13)); }
	inline bool get_setCursorVisibilityOnSourceDetected_13() const { return ___setCursorVisibilityOnSourceDetected_13; }
	inline bool* get_address_of_setCursorVisibilityOnSourceDetected_13() { return &___setCursorVisibilityOnSourceDetected_13; }
	inline void set_setCursorVisibilityOnSourceDetected_13(bool value)
	{
		___setCursorVisibilityOnSourceDetected_13 = value;
	}

	inline static int32_t get_offset_of_cursorInstance_14() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___cursorInstance_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cursorInstance_14() const { return ___cursorInstance_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cursorInstance_14() { return &___cursorInstance_14; }
	inline void set_cursorInstance_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cursorInstance_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cursorInstance_14), (void*)value);
	}

	inline static int32_t get_offset_of_raycastOrigin_15() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___raycastOrigin_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_raycastOrigin_15() const { return ___raycastOrigin_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_raycastOrigin_15() { return &___raycastOrigin_15; }
	inline void set_raycastOrigin_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___raycastOrigin_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastOrigin_15), (void*)value);
	}

	inline static int32_t get_offset_of_activeHoldAction_16() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___activeHoldAction_16)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_activeHoldAction_16() const { return ___activeHoldAction_16; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_activeHoldAction_16() { return &___activeHoldAction_16; }
	inline void set_activeHoldAction_16(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___activeHoldAction_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___activeHoldAction_16))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_pointerAction_17() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___pointerAction_17)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_pointerAction_17() const { return ___pointerAction_17; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_pointerAction_17() { return &___pointerAction_17; }
	inline void set_pointerAction_17(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___pointerAction_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pointerAction_17))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_requiresHoldAction_18() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___requiresHoldAction_18)); }
	inline bool get_requiresHoldAction_18() const { return ___requiresHoldAction_18; }
	inline bool* get_address_of_requiresHoldAction_18() { return &___requiresHoldAction_18; }
	inline void set_requiresHoldAction_18(bool value)
	{
		___requiresHoldAction_18 = value;
	}

	inline static int32_t get_offset_of_requiresActionBeforeEnabling_19() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___requiresActionBeforeEnabling_19)); }
	inline bool get_requiresActionBeforeEnabling_19() const { return ___requiresActionBeforeEnabling_19; }
	inline bool* get_address_of_requiresActionBeforeEnabling_19() { return &___requiresActionBeforeEnabling_19; }
	inline void set_requiresActionBeforeEnabling_19(bool value)
	{
		___requiresActionBeforeEnabling_19 = value;
	}

	inline static int32_t get_offset_of_IsSelectPressed_20() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___IsSelectPressed_20)); }
	inline bool get_IsSelectPressed_20() const { return ___IsSelectPressed_20; }
	inline bool* get_address_of_IsSelectPressed_20() { return &___IsSelectPressed_20; }
	inline void set_IsSelectPressed_20(bool value)
	{
		___IsSelectPressed_20 = value;
	}

	inline static int32_t get_offset_of_HasSelectPressedOnce_21() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___HasSelectPressedOnce_21)); }
	inline bool get_HasSelectPressedOnce_21() const { return ___HasSelectPressedOnce_21; }
	inline bool* get_address_of_HasSelectPressedOnce_21() { return &___HasSelectPressedOnce_21; }
	inline void set_HasSelectPressedOnce_21(bool value)
	{
		___HasSelectPressedOnce_21 = value;
	}

	inline static int32_t get_offset_of_IsHoldPressed_22() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___IsHoldPressed_22)); }
	inline bool get_IsHoldPressed_22() const { return ___IsHoldPressed_22; }
	inline bool* get_address_of_IsHoldPressed_22() { return &___IsHoldPressed_22; }
	inline void set_IsHoldPressed_22(bool value)
	{
		___IsHoldPressed_22 = value;
	}

	inline static int32_t get_offset_of_isCursorInstantiatedFromPrefab_23() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___isCursorInstantiatedFromPrefab_23)); }
	inline bool get_isCursorInstantiatedFromPrefab_23() const { return ___isCursorInstantiatedFromPrefab_23; }
	inline bool* get_address_of_isCursorInstantiatedFromPrefab_23() { return &___isCursorInstantiatedFromPrefab_23; }
	inline void set_isCursorInstantiatedFromPrefab_23(bool value)
	{
		___isCursorInstantiatedFromPrefab_23 = value;
	}

	inline static int32_t get_offset_of_pointerId_24() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___pointerId_24)); }
	inline uint32_t get_pointerId_24() const { return ___pointerId_24; }
	inline uint32_t* get_address_of_pointerId_24() { return &___pointerId_24; }
	inline void set_pointerId_24(uint32_t value)
	{
		___pointerId_24 = value;
	}

	inline static int32_t get_offset_of_pointerName_25() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___pointerName_25)); }
	inline String_t* get_pointerName_25() const { return ___pointerName_25; }
	inline String_t** get_address_of_pointerName_25() { return &___pointerName_25; }
	inline void set_pointerName_25(String_t* value)
	{
		___pointerName_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerName_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInputSourceParentU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CInputSourceParentU3Ek__BackingField_26)); }
	inline RuntimeObject* get_U3CInputSourceParentU3Ek__BackingField_26() const { return ___U3CInputSourceParentU3Ek__BackingField_26; }
	inline RuntimeObject** get_address_of_U3CInputSourceParentU3Ek__BackingField_26() { return &___U3CInputSourceParentU3Ek__BackingField_26; }
	inline void set_U3CInputSourceParentU3Ek__BackingField_26(RuntimeObject* value)
	{
		___U3CInputSourceParentU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceParentU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CBaseCursorU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_27() const { return ___U3CBaseCursorU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_27() { return &___U3CBaseCursorU3Ek__BackingField_27; }
	inline void set_U3CBaseCursorU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseCursorU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CCursorModifierU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_28() const { return ___U3CCursorModifierU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_28() { return &___U3CCursorModifierU3Ek__BackingField_28; }
	inline void set_U3CCursorModifierU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCursorModifierU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CIsActiveU3Ek__BackingField_29)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_29() const { return ___U3CIsActiveU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_29() { return &___U3CIsActiveU3Ek__BackingField_29; }
	inline void set_U3CIsActiveU3Ek__BackingField_29(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CIsFocusLockedU3Ek__BackingField_30)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_30() const { return ___U3CIsFocusLockedU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_30() { return &___U3CIsFocusLockedU3Ek__BackingField_30; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_30(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31)); }
	inline bool get_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31() const { return ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31() { return &___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31; }
	inline void set_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31(bool value)
	{
		___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_overrideGlobalPointerExtent_32() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___overrideGlobalPointerExtent_32)); }
	inline bool get_overrideGlobalPointerExtent_32() const { return ___overrideGlobalPointerExtent_32; }
	inline bool* get_address_of_overrideGlobalPointerExtent_32() { return &___overrideGlobalPointerExtent_32; }
	inline void set_overrideGlobalPointerExtent_32(bool value)
	{
		___overrideGlobalPointerExtent_32 = value;
	}

	inline static int32_t get_offset_of_pointerExtent_33() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___pointerExtent_33)); }
	inline float get_pointerExtent_33() const { return ___pointerExtent_33; }
	inline float* get_address_of_pointerExtent_33() { return &___pointerExtent_33; }
	inline void set_pointerExtent_33(float value)
	{
		___pointerExtent_33 = value;
	}

	inline static int32_t get_offset_of_defaultPointerExtent_34() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___defaultPointerExtent_34)); }
	inline float get_defaultPointerExtent_34() const { return ___defaultPointerExtent_34; }
	inline float* get_address_of_defaultPointerExtent_34() { return &___defaultPointerExtent_34; }
	inline void set_defaultPointerExtent_34(float value)
	{
		___defaultPointerExtent_34 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CRaysU3Ek__BackingField_35)); }
	inline RayStepU5BU5D_tCD1CE5D02607BA5FD6D2C499C92B2BE190BFC450* get_U3CRaysU3Ek__BackingField_35() const { return ___U3CRaysU3Ek__BackingField_35; }
	inline RayStepU5BU5D_tCD1CE5D02607BA5FD6D2C499C92B2BE190BFC450** get_address_of_U3CRaysU3Ek__BackingField_35() { return &___U3CRaysU3Ek__BackingField_35; }
	inline void set_U3CRaysU3Ek__BackingField_35(RayStepU5BU5D_tCD1CE5D02607BA5FD6D2C499C92B2BE190BFC450* value)
	{
		___U3CRaysU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaysU3Ek__BackingField_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CFocusTargetU3Ek__BackingField_37)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_37() const { return ___U3CFocusTargetU3Ek__BackingField_37; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_37() { return &___U3CFocusTargetU3Ek__BackingField_37; }
	inline void set_U3CFocusTargetU3Ek__BackingField_37(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusTargetU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CResultU3Ek__BackingField_38)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_38() const { return ___U3CResultU3Ek__BackingField_38; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_38() { return &___U3CResultU3Ek__BackingField_38; }
	inline void set_U3CResultU3Ek__BackingField_38(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CRayStabilizerU3Ek__BackingField_39)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_39() const { return ___U3CRayStabilizerU3Ek__BackingField_39; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_39() { return &___U3CRayStabilizerU3Ek__BackingField_39; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_39(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRayStabilizerU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneQueryTypeU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CSceneQueryTypeU3Ek__BackingField_40)); }
	inline int32_t get_U3CSceneQueryTypeU3Ek__BackingField_40() const { return ___U3CSceneQueryTypeU3Ek__BackingField_40; }
	inline int32_t* get_address_of_U3CSceneQueryTypeU3Ek__BackingField_40() { return &___U3CSceneQueryTypeU3Ek__BackingField_40; }
	inline void set_U3CSceneQueryTypeU3Ek__BackingField_40(int32_t value)
	{
		___U3CSceneQueryTypeU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_sphereCastRadius_41() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___sphereCastRadius_41)); }
	inline float get_sphereCastRadius_41() const { return ___sphereCastRadius_41; }
	inline float* get_address_of_sphereCastRadius_41() { return &___sphereCastRadius_41; }
	inline void set_sphereCastRadius_41(float value)
	{
		___sphereCastRadius_41 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp
struct  HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB  : public HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::facingThreshold
	float ___facingThreshold_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::requireFlatHand
	bool ___requireFlatHand_27;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::flatHandThreshold
	float ___flatHandThreshold_28;

public:
	inline static int32_t get_offset_of_facingThreshold_26() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB, ___facingThreshold_26)); }
	inline float get_facingThreshold_26() const { return ___facingThreshold_26; }
	inline float* get_address_of_facingThreshold_26() { return &___facingThreshold_26; }
	inline void set_facingThreshold_26(float value)
	{
		___facingThreshold_26 = value;
	}

	inline static int32_t get_offset_of_requireFlatHand_27() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB, ___requireFlatHand_27)); }
	inline bool get_requireFlatHand_27() const { return ___requireFlatHand_27; }
	inline bool* get_address_of_requireFlatHand_27() { return &___requireFlatHand_27; }
	inline void set_requireFlatHand_27(bool value)
	{
		___requireFlatHand_27 = value;
	}

	inline static int32_t get_offset_of_flatHandThreshold_28() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB, ___flatHandThreshold_28)); }
	inline float get_flatHandThreshold_28() const { return ___flatHandThreshold_28; }
	inline float* get_address_of_flatHandThreshold_28() { return &___flatHandThreshold_28; }
	inline void set_flatHandThreshold_28(float value)
	{
		___flatHandThreshold_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct  LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87  : public BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9
{
public:
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorSelected
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorSelected_42;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorValid
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorValid_43;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorInvalid
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorInvalid_44;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorNoTarget
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorNoTarget_45;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorLockFocus
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorLockFocus_46;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider Microsoft.MixedReality.Toolkit.Input.LinePointer::lineBase
	BaseMixedRealityLineDataProvider_tC35878F4E52DC5B0995B39360258BD6613D3190A * ___lineBase_47;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[] Microsoft.MixedReality.Toolkit.Input.LinePointer::lineRenderers
	BaseMixedRealityLineRendererU5BU5D_tC2D9120DE5D195B660C82B3B89F9D354E0AF1C0C* ___lineRenderers_48;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.LinePointer::lineStartPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lineStartPoint_49;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.LinePointer::lineEndPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lineEndPoint_50;

public:
	inline static int32_t get_offset_of_LineColorSelected_42() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___LineColorSelected_42)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorSelected_42() const { return ___LineColorSelected_42; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorSelected_42() { return &___LineColorSelected_42; }
	inline void set_LineColorSelected_42(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorSelected_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorSelected_42), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorValid_43() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___LineColorValid_43)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorValid_43() const { return ___LineColorValid_43; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorValid_43() { return &___LineColorValid_43; }
	inline void set_LineColorValid_43(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorValid_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorValid_43), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorInvalid_44() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___LineColorInvalid_44)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorInvalid_44() const { return ___LineColorInvalid_44; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorInvalid_44() { return &___LineColorInvalid_44; }
	inline void set_LineColorInvalid_44(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorInvalid_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorInvalid_44), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorNoTarget_45() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___LineColorNoTarget_45)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorNoTarget_45() const { return ___LineColorNoTarget_45; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorNoTarget_45() { return &___LineColorNoTarget_45; }
	inline void set_LineColorNoTarget_45(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorNoTarget_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorNoTarget_45), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorLockFocus_46() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___LineColorLockFocus_46)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorLockFocus_46() const { return ___LineColorLockFocus_46; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorLockFocus_46() { return &___LineColorLockFocus_46; }
	inline void set_LineColorLockFocus_46(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorLockFocus_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorLockFocus_46), (void*)value);
	}

	inline static int32_t get_offset_of_lineBase_47() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___lineBase_47)); }
	inline BaseMixedRealityLineDataProvider_tC35878F4E52DC5B0995B39360258BD6613D3190A * get_lineBase_47() const { return ___lineBase_47; }
	inline BaseMixedRealityLineDataProvider_tC35878F4E52DC5B0995B39360258BD6613D3190A ** get_address_of_lineBase_47() { return &___lineBase_47; }
	inline void set_lineBase_47(BaseMixedRealityLineDataProvider_tC35878F4E52DC5B0995B39360258BD6613D3190A * value)
	{
		___lineBase_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineBase_47), (void*)value);
	}

	inline static int32_t get_offset_of_lineRenderers_48() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___lineRenderers_48)); }
	inline BaseMixedRealityLineRendererU5BU5D_tC2D9120DE5D195B660C82B3B89F9D354E0AF1C0C* get_lineRenderers_48() const { return ___lineRenderers_48; }
	inline BaseMixedRealityLineRendererU5BU5D_tC2D9120DE5D195B660C82B3B89F9D354E0AF1C0C** get_address_of_lineRenderers_48() { return &___lineRenderers_48; }
	inline void set_lineRenderers_48(BaseMixedRealityLineRendererU5BU5D_tC2D9120DE5D195B660C82B3B89F9D354E0AF1C0C* value)
	{
		___lineRenderers_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineRenderers_48), (void*)value);
	}

	inline static int32_t get_offset_of_lineStartPoint_49() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___lineStartPoint_49)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lineStartPoint_49() const { return ___lineStartPoint_49; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lineStartPoint_49() { return &___lineStartPoint_49; }
	inline void set_lineStartPoint_49(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lineStartPoint_49 = value;
	}

	inline static int32_t get_offset_of_lineEndPoint_50() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___lineEndPoint_50)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lineEndPoint_50() const { return ___lineEndPoint_50; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lineEndPoint_50() { return &___lineEndPoint_50; }
	inline void set_lineEndPoint_50(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lineEndPoint_50 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Solver_t45BC4457D52541691149931505197834E2BCC506 * m_Items[1];

public:
	inline Solver_t45BC4457D52541691149931505197834E2BCC506 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Solver_t45BC4457D52541691149931505197834E2BCC506 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Solver_t45BC4457D52541691149931505197834E2BCC506 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Solver_t45BC4457D52541691149931505197834E2BCC506 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Solver_t45BC4457D52541691149931505197834E2BCC506 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Solver_t45BC4457D52541691149931505197834E2BCC506 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  m_Items[1];

public:
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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


// System.Void System.Nullable`1<System.ByteEnum>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m44D27F63DAF1C43A660719DB881DA8A5E29B2D73_gshared (Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 * __this, uint8_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.ByteEnum>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint8_t Nullable_1_GetValueOrDefault_mC706E0B49F17806542309300BC07261B874493E5_gshared_inline (Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.ByteEnum>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m607BE3CCAB8B8E849918279E8689F9C5990F4DC1_gshared_inline (Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019  HashSet_1_GetEnumerator_mD1B476BCFC9C6327ECC5D44D9F486F7428282E0C_gshared (HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC3970F1E5BE45ECFACEA6AE72E1C97D4A0B090A8_gshared_inline (Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8399E4F6F4D740927A7D184ED284EC5CA849904F_gshared (Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m919CC4AE9973A17B21C1CD43532ECA177DC657EF_gshared (Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m06C92DB71DA80671948EA8E2A04706AA121BA6F1_gshared (Dictionary_2_t3A5FD15F1CA4E8B8943DFFB112420B6B2B19D760 * __this, uint8_t ___key0, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * List_1_AsReadOnly_m2C0E45B8E34C5E58ACFC6AB138FEDD9F309B4E92_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_mDC1D023FE07F73E1E8433D1E896D5F1250180C10_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Intersect_TisRuntimeObject_m6083096F7BC1B5CACE78EBE053ECB4A1E585617B_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Union_TisRuntimeObject_m6BE1E46A450C5DFEBE0F417EDBAA3691F9DFBEF5_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * CollectionsExtensions_ToReadOnlyCollection_TisRuntimeObject_mC1ED8BBA91BDF60A905CAA8A8DDECB426666FD39_gshared (RuntimeObject* ___elements0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// T Microsoft.MixedReality.Toolkit.Input.PointerUtils::GetPointer<System.Object>(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointerUtils_GetPointer_TisRuntimeObject_m2C18898BF5F1D6794C36AD89D246D314248BA9BB_gshared (uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.SourceStateEventData::get_Controller()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* SourceStateEventData_get_Controller_m7BF48EF5CD2C818A7DF20C40134F3980042D69C4_inline (SourceStateEventData_tA2932F014F702C0C49A608B2486D423456CAF1A6 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>::.ctor(!0)
inline void Nullable_1__ctor_mC49E487DA974166A213AAD2726AE8F585D87C0CF (Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1 *, uint8_t, const RuntimeMethod*))Nullable_1__ctor_m44D27F63DAF1C43A660719DB881DA8A5E29B2D73_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>::GetValueOrDefault()
inline uint8_t Nullable_1_GetValueOrDefault_m1E24D72500E4660B60C7863C2B2E71CC4B04BF76_inline (Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1 * __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC706E0B49F17806542309300BC07261B874493E5_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>::get_HasValue()
inline bool Nullable_1_get_HasValue_m07D34EBB75E8509AA81981808D524D257090B84C_inline (Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1 *, const RuntimeMethod*))Nullable_1_get_HasValue_m607BE3CCAB8B8E849918279E8689F9C5990F4DC1_gshared_inline)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::GetEnumerator()
inline Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F  HashSet_1_GetEnumerator_m5D03742BCEC065A9A76CBCFEBC067147B87E0B10 (HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F  (*) (HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96 *, const RuntimeMethod*))HashSet_1_GetEnumerator_mD1B476BCFC9C6327ECC5D44D9F486F7428282E0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m54ADCC9789BA9923142B3275627884EEEB423202_inline (Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F *, const RuntimeMethod*))Enumerator_get_Current_mC3970F1E5BE45ECFACEA6AE72E1C97D4A0B090A8_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::MoveNext()
inline bool Enumerator_MoveNext_m2847864A8B6A4717D9D5C39BF3DF8A82A27CE61C (Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F *, const RuntimeMethod*))Enumerator_MoveNext_m8399E4F6F4D740927A7D184ED284EC5CA849904F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::Dispose()
inline void Enumerator_Dispose_mDCF28E57240A3751DA0E57A43D26EA4CF6A848D9 (Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F *, const RuntimeMethod*))Enumerator_Dispose_m919CC4AE9973A17B21C1CD43532ECA177DC657EF_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedTargetType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_CurrentTrackedHandedness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_CurrentTrackedHandedness_m70661B218AD90282C13F96F1D052C1177428B430_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::GetController(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandConstraint_GetController_m78FF31249AB1ECC7B783AAC4A8054CBA6167B78B (uint8_t ___handedness0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.HandednessExtensions::GetOppositeHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t HandednessExtensions_GetOppositeHandedness_m352C35AC1E2A63E32DC1283CCA866209A2B657E3 (uint8_t ___current0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_PreferredTrackedHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_PreferredTrackedHandedness_mB296A36535A70B7226F76241673481C521DDE708 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_m2CB65E180E979ED0BDE8FF455A7B788806D9A133 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_mEC8C53FC1EB7D66765ECA104FB7EF3956405FCA2 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsNone(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsNone_mE6A5F6B086E41597305829036D5917749647DEEF (uint8_t ___current0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnFirstHandDetected()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnFirstHandDetected_mDFE374405D00C9E957C76F667C93716297BB4A15_inline (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnHandActivate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnHandActivate_mE368AA7CADFE60DDB3324BF58A58E3541C8644EA_inline (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnLastHandLost()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnLastHandLost_m59346AC24F61226EAB8D57AE2B7B0F79B95775A0_inline (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnHandDeactivate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnHandDeactivate_mF0C66A989EAF088BE1D7A6227EF5AE041F1740A0_inline (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m0877CE338F66AE7354E42FA94DBFD4FD78D61466 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_m1E3618AD1B1738342BF68F058024DAF97D8F437D (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds> Microsoft.MixedReality.Toolkit.Input.HandBounds::get_Bounds()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6 * HandBounds_get_Bounds_m278748BE0578B354C155E6ACB585F665E95A53F2_inline (HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mCD69ACF9348EAB5C6ED2D3D444270B105594B72D (Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6 * __this, uint8_t ___key0, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6 *, uint8_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m06C92DB71DA80671948EA8E2A04706AA121BA6F1_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::CalculateProjectedSafeZoneRay(UnityEngine.Vector3,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/SolverSafeZone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  HandConstraint_CalculateProjectedSafeZoneRay_m67359E38B1D29607E32A3AAFB6829D352818F090 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, RuntimeObject* ___hand1, int32_t ___handSafeZone2, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::Expand(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Expand_m3FB9436F88DFE0FB57ECF6B1C4B2EDF9589346DA (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, float ___amount0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_IntersectRay_m11E700B1AE0EAE3568379B999D1FBFEDEEB56EC7 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray0, float* ___distance1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_m688CF9BFD91713E05AC1F12E0E53F994BF972060_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsRight(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsRight_m01817CB0F7FD9D25F2C63BB910892E84F0D8D89F (uint8_t ___current0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__46::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__46__ctor_m25844EAF838B06A5D6C999D894001C574B3B1D61 (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Expand_mB181AD8DCDE6A018DFC196528CC5002CA7EBCF0A (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___amount0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Intersects_m7B1398FDAC8ECA19677D0956E67FF92EB0BADA9E (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsPalmFacingCamera(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraint_IsPalmFacingCamera_m8707CC2627EE8E7433DB49D62142C61AB57C870E (RuntimeObject* ___hand0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsLeft(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsLeft_m28C9129DD4ECEF74909F17D267DD9FF8C1AF8D77 (uint8_t ___current0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Up_m020CCADDD4C0057B6AE11ECB28F203AD2D0508C5 (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsMatch(Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsMatch_mE9709387575B3ACD5D927EA109A2EE16867DC933 (uint8_t ___current0, uint8_t ___compare1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnEnable_m30C8ADF771E48AFB08DAD8D71A24480D5EAFF6BC (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Input.HandBounds>()
inline HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * Component_GetComponent_TisHandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142_m42B545DDF8EA455254FEA33CC8D566C1C042C3C4 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver__ctor_mAF66923F2EB0C229B5ED3B2A1807B0500D9776D4 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraint_IsValidController_mDB04EE2D1296D35D4CD64FFE5073A470870D1F80 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, RuntimeObject* ___controller0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318_inline (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___from0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint__ctor_m88DE81DF42CB3375F52122A3B0BF9BC72EDD030E (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::UpdateSecondSolverHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_UpdateSecondSolverHandler_mB76F1142E4DB23B2B239CA938F48858AC9911AEF (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Start_m28612BA96CF6F0F52207675F6264069B661D83AE (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler>()
inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * GameObject_AddComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mED82B88562CC22F180BF24172145DC74F2ACDCDE (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m71627901924EA3C2FA3F88E1346D5B6C96CE4BC9_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::AdjustPositionForOffset(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_AdjustPositionForOffset_mFED4545083C88A001E2ABB849F277CE0485C8FE1 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___targetTransform0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransform1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_mF7E623A4E1DA27883BD2050C120E1EBC74486721 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TransformOverride(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TransformOverride_mA3A8090C85974D6349D759CD8582BA53C57F7B29 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_SnapZ()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Momentum_get_SnapZ_mC9198F80575BD4DA31C961413746DA7E229A5084_inline (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ReferencePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Momentum_get_ReferencePosition_mFAACD502CAE0271F1F699462EE1991FA53FFCBB4 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_mBC993B50E8189431844A276EF16B7AE97A518E8A_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_mCDF9AC407AEDEB61DCE17B756E70A9A11C1BC779_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_AccelerationRate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Momentum_get_AccelerationRate_m7275BF29D9A0076AE57185FD8C54933CC4AE882B_inline (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Springiness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Momentum_get_Springiness_mEB73E476E71B8CC3BA383CAB0D4DED4087A45E60_inline (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ResistanceVelocityPower()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Momentum_get_ResistanceVelocityPower_mB3FD8F9FA83430AE3B2CF7EBFBD59C6D91A8C7CD_inline (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Resistance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Momentum_get_Resistance_m6AF85CE5A093AF19654A6588F6A5E1E81BDA923F_inline (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapTo_m141A40A3F00A721C19297C9E5342E3FC7AEDC553 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389 (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationToSnap0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_LocalOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_LocalOffset_m3CCEC047C1F30289C8BB9E330C7B7B1626CFEBCE_inline (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_WorldOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_WorldOffset_mD12EDAC61BFE70094993AD183172E0D0746F98A3_inline (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_CalculateDesiredRotation_m84574CDFA82C60EC5BDB9B5D2FABAFF224B2A6B9 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredPos0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_UseAngleStepping()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_m20DE85BC6F72BD6743586083455E48271DCDAE88_inline (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041 (float ___f0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_m984DF97DAF9E18DB1E2A8795531BB1737419057D (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_mF40147CDB106D6C1D6B49FFD69B8A2BFB6237FA2 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_m3370EEC78DB342C439D5B637969D51BB0EA62911 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_mC3FD9991B8047CC27A133B04EA08ECB3F906ABE0 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_mDBDAF39D8AE51E80779CB81C7FF8ACB6C7FBF7A5 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upwards1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UseFixedVerticalPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mA864E4BF679B99A5647735F51FB7461327933676_inline (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_FixedVerticalPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m1FFA0DF35264BB90BE99AB4C90C4FFF532BA5846_inline (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7 (float* __this, float ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float ___d0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m8191CFD21D920E1C6486207A7F9E38F2E4C42ABF_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_m81A56576A3666F6A39912235A4686585AAD73F70_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m90213F18EDA1F56994EDF65A0D24EB4499432BF1_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_m832C11F620D6F80FC85284CDB619EAC97F53A871_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_mA7524961D7EFD428ADD4B542492855C98ACFC763_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalScale_m293394193E7CDFE066A1E84A1862C1827DE21A1D (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler>()
inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * Component_GetComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mAFEA8C8850333AF32E380E9F11A4ABAE304879DB (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_mCC7F39632346EDC3564F5D04424A433345374B0A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * ___solver0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_m1011B5AEBA231BD826554AA2F9282A4717D533F6 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * ___solver0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_mEA4964B576B11AE92ABAFC4E9D57494B6BF08A7E (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_mA23A6936ECEF3D444561229782679516AA9A2074 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_mCC5D73C3CA4A511BB55F28D607AA0C44D2E6F4EC (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_mF1CF3C2658C4C3EDD20FA7EC3B8B7A3867701DF3 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_mE7A293C5250C082C250F52949E303E051951A46D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_mE3B979FCC06C6AF64EA978E9B04E5563E73FEF2D (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_mB33E5B386F523A8B77EC655FDDD824C485AFA1E1 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_mA0DF75FE07A2305CD0CEDC66F419DB84CD4D687E (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_m030D3A7E8F7ACC13A26D6DD5D6163C8B9CF37A13 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m8D02055DBEDB94460C2F425579D2CC88A5CF1253 (int32_t ___type0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_mA04F47A8ACC359F0511F29647BF2C2C6B6FCC8A8 (uint8_t ___hand0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::AsReadOnly()
inline ReadOnlyCollection_1_t6520265CBC8C7015FFEDC9384425CE41559F3B47 * List_1_AsReadOnly_mD4205B7AF2036EBF7895B5DA2A739A0C53F749A9 (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t6520265CBC8C7015FFEDC9384425CE41559F3B47 * (*) (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E *, const RuntimeMethod*))List_1_AsReadOnly_m2C0E45B8E34C5E58ACFC6AB138FEDD9F309B4E92_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Clear()
inline void List_1_Clear_m8A3CE552C8FF45E35C16DF3F5391FAF0CC2D44A6 (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m924B454743565B7F44C195523B6F6C7A3D5F63D7 (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsInvalidTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m9B28A63B5A57D72097B3B1CCEC8B21AA8033835E (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_m1A8EB083BA23821E0FCA03A1E12BD238FDE9043C (Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, float ___smoothingTime1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_mD040B51407338017EA371B1EE7F4C9CD9E09C7FB_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mDE2CC0770D2F1FA09D6775E68EDE0CE6EA8C9D47_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandness_m503253A279D833E1905B0B6ED2D32E3147AB11D3 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, uint8_t ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>()
inline SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* Component_GetComponents_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m0708321043CD71138F4AD1E7213F1FF980080C9D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mDC1D023FE07F73E1E8433D1E896D5F1250180C10_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Intersect_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mAB7C2BF3B368BE5F7B2E0D55A4DFFF7F9B407438 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Intersect_TisRuntimeObject_m6083096F7BC1B5CACE78EBE053ECB4A1E585617B_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_Solvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_mD9532AEA70FDA70708F58F43A13D6C9C5F18C32E (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Union_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mD4DD2895AF940E38BC58CC0D94F8B525E2B2B45B (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisRuntimeObject_m6BE1E46A450C5DFEBE0F417EDBAA3691F9DFBEF5_gshared)(___first0, ___second1, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ReadOnlyCollection_1_t6520265CBC8C7015FFEDC9384425CE41559F3B47 * CollectionsExtensions_ToReadOnlyCollection_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mE09F07BC920E2458475DC81B745593CB4E97CB40 (RuntimeObject* ___elements0, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t6520265CBC8C7015FFEDC9384425CE41559F3B47 * (*) (RuntimeObject*, const RuntimeMethod*))CollectionsExtensions_ToReadOnlyCollection_TisRuntimeObject_mC1ED8BBA91BDF60A905CAA8A8DDECB426666FD39_gshared)(___elements0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_m4D056BA507C7FAAE150D5F0231D3FD96B6963120 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m6275BB399C9173BC8DA81FD5A82EE235996DB490_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Item(System.Int32)
inline Solver_t45BC4457D52541691149931505197834E2BCC506 * List_1_get_Item_m92EB8CA52F5073B4BBAB7EA69C133AFA9A0B1D01_inline (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Solver_t45BC4457D52541691149931505197834E2BCC506 * (*) (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdateEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_m60AA706BBA85DAF728640F884F86E230EF4A96F4 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Count()
inline int32_t List_1_get_Count_mC623C5D743DDEF11727604B50A34E8ED4D7E8CFB_inline (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Contains(!0)
inline bool List_1_Contains_m6C575683BD3DF941FCAFD151FFFA438DA48FDD8D (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E *, Solver_t45BC4457D52541691149931505197834E2BCC506 *, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Add(!0)
inline void List_1_Add_m254F872CE951C6A33A478F6DBF71FB90322F0DBA (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E *, Solver_t45BC4457D52541691149931505197834E2BCC506 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Remove(!0)
inline bool List_1_Remove_mB18E8650B6A63BAF9FD00C2BA6DF5AD396522CE7 (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E *, Solver_t45BC4457D52541691149931505197834E2BCC506 *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_mDBDFCC53139248895EACD23DAC0CECF413395240_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_PreferredTrackedHandedness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// T Microsoft.MixedReality.Toolkit.Input.PointerUtils::GetPointer<Microsoft.MixedReality.Toolkit.Input.LinePointer>(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
inline LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E (uint8_t ___handedness0, const RuntimeMethod* method)
{
	return ((  LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * (*) (uint8_t, const RuntimeMethod*))PointerUtils_GetPointer_TisRuntimeObject_m2C18898BF5F1D6794C36AD89D246D314248BA9BB_gshared)(___handedness0, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandJoint()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m8B1E21E12B5443D96F237F51E02EEBBA6FCEC314_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_m36871E4D6498D2DD8166CAB7E2B1354783617586 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_mE9EF9A4AB0F79696FF5E1CF40FC9D2FFFB37C46A_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::get_IsTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerPoseSynchronizer_get_IsTracked_mFD1AB7FB750D5909E36B04D34E232AC566885EAC (ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::.ctor()
inline void List_1__ctor_m69D5FDD7995BBDB460AE2B05A1602A5EDCD4585A (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_mD7DF10E425BAC3843E2822239C753C8097DD738F_inline (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_m11147C69A0F70DA6D28694B69D86D5B2EDCFC757 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  SolverHandler_get_AltScale_mF08002B58E90D39D9DD419BB48B9418E428666C2_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::get_Current()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3Smoothed_get_Current_m30862D6ABC7579C6BDD1AE400557D8E64455E214_inline (Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m52FBBBBE217959DD0589C9A2104E5B614DFAA61B_inline (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_mF489171602EF39E66D4D907B24638ED040557FBE_inline (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_m683CD0B1AF317201E05F75ACE33F326AAED97A6E (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___terminus1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Direction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m4E6677C1421A768C9E2FC75C5661D44383A35982_inline (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Origin()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092_inline (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Terminus()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Terminus_m7D0BC5431DB86CD4C64F310D184E28457D182A03_inline (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_magenta_m04E2DDB63AA6288C701A93E248643A06EBD2D7AD (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___end1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mD29FC2BB2D9E2C629AF8D6E468274651DB9E5F01_inline (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_m63419B3259123E9EB75180A0278C2221385755EF (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_m35784C8612AA57A336E488767035EA9747A5900C (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_m3CDB29C2BB9FE94690D45E6C830C873826FF2EA2 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * ___rayStep0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSimplePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSimplePhysicsStep_m90B7B22D15BBEF06E1B7D297DFB8DFC8FFFA2645 (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  ___step0, float ___maxDistance1, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___prioritizedLayerMasks2, bool ___focusIndividualCompoundCollider3, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___physicsHit4, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m82EDC9306C4ED355E9CCBF3B370C873287D540B2_inline (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RaycastHit::set_point(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_mDFF31FB92F9CE384AD65423272D9C54BD53D2CDC (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSpherePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSpherePhysicsStep_m67CF1A116596B7A880BE38A7A66B3B5B394C52C8 (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  ___step0, float ___radius1, float ___maxDistance2, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___prioritizedLayerMasks3, bool ___focusIndividualCompoundCollider4, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___physicsHit5, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastBoxPhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Matrix4x4,System.Single,UnityEngine.LayerMask[],System.Int32,System.Boolean,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector3[]&,System.Boolean[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastBoxPhysicsStep_mC029A1AA0C6177853BC6EC3ADAF8CA7294FD2094 (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  ___step0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___matrix3, float ___maxDistance4, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___prioritizedLayerMasks5, int32_t ___raysPerEdge6, bool ___isOrthographic7, bool ___focusIndividualCompoundCollider8, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** ___points9, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** ___normals10, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** ___hits11, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_mFBEFF7DD7D0654E62ABC62A343743F0CF0763C89 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_mAFDE9526D60CB6B21DF3BCC035D722A656B9409D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___inNormal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___inPoint1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dir1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray0, float* ___enter1, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300 (int32_t ___intVal0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C (float ___f0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B (float ___f0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::get_Handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ControllerFinder_get_Handedness_m7CE435C297370B141A19D9CE24BFEEE14F5AFA05 (ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11 * __this, const RuntimeMethod* method)
{
	{
		// get { return handedness; }
		uint8_t L_0 = __this->get_handedness_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::set_Handedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerFinder_set_Handedness_m1859BACA9BB2A2B7406DD52273FA3D4732147F14 (ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// if (handedness != value)
		uint8_t L_0 = __this->get_handedness_4();
		uint8_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// handedness = value;
		uint8_t L_2 = ___value0;
		__this->set_handedness_4(L_2);
		// RefreshControllerTransform();
		VirtActionInvoker0::Invoke(11 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RefreshControllerTransform() */, __this);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerFinder_OnEnable_mC42F097A8894D00CC9967CAAF377D40CE979A533 (ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_OnEnable_mC42F097A8894D00CC9967CAAF377D40CE979A533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.RegisterHandler<IMixedRealitySourceStateHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySourceStateHandler_t65DBC76B8097878EC12F2A1E149B326BFB4B2DFB_m23E2A815FB3AB43073C95DD72285E85EE13B230D_RuntimeMethod_var, G_B2_0, __this);
	}

IL_0011:
	{
		// RefreshControllerTransform();
		VirtActionInvoker0::Invoke(11 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RefreshControllerTransform() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerFinder_OnDisable_mB2C0F53999DDBF5A4B9F638176E3A90EB6F29CF0 (ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_OnDisable_mB2C0F53999DDBF5A4B9F638176E3A90EB6F29CF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealitySourceStateHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySourceStateHandler_t65DBC76B8097878EC12F2A1E149B326BFB4B2DFB_m9DA884364850112D78D45C6078B9B024E7435F54_RuntimeMethod_var, G_B2_0, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnSourceDetected(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerFinder_OnSourceDetected_m286A206A8737AAB3D4CFBE3537D2599AD2FECA39 (ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11 * __this, SourceStateEventData_tA2932F014F702C0C49A608B2486D423456CAF1A6 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_OnSourceDetected_m286A206A8737AAB3D4CFBE3537D2599AD2FECA39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// if (eventData.Controller?.ControllerHandedness == handedness)
		SourceStateEventData_tA2932F014F702C0C49A608B2486D423456CAF1A6 * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1 = SourceStateEventData_get_Controller_m7BF48EF5CD2C818A7DF20C40134F3980042D69C4_inline(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1 ));
		Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1  L_3 = V_2;
		G_B3_0 = L_3;
		goto IL_001f;
	}

IL_0015:
	{
		NullCheck(G_B2_0);
		uint8_t L_4 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, G_B2_0);
		Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_mC49E487DA974166A213AAD2726AE8F585D87C0CF((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_mC49E487DA974166A213AAD2726AE8F585D87C0CF_RuntimeMethod_var);
		G_B3_0 = L_5;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		uint8_t L_6 = __this->get_handedness_4();
		V_1 = L_6;
		uint8_t L_7 = Nullable_1_GetValueOrDefault_m1E24D72500E4660B60C7863C2B2E71CC4B04BF76_inline((Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m1E24D72500E4660B60C7863C2B2E71CC4B04BF76_RuntimeMethod_var);
		uint8_t L_8 = V_1;
		bool L_9 = Nullable_1_get_HasValue_m07D34EBB75E8509AA81981808D524D257090B84C_inline((Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m07D34EBB75E8509AA81981808D524D257090B84C_RuntimeMethod_var);
		if (!((int32_t)((int32_t)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0054;
		}
	}
	{
		// if (eventData.Controller is IMixedRealityHand)
		SourceStateEventData_tA2932F014F702C0C49A608B2486D423456CAF1A6 * L_10 = ___eventData0;
		NullCheck(L_10);
		RuntimeObject* L_11 = SourceStateEventData_get_Controller_m7BF48EF5CD2C818A7DF20C40134F3980042D69C4_inline(L_10, /*hidden argument*/NULL);
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_11, IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		// AddControllerTransform(eventData.Controller);
		SourceStateEventData_tA2932F014F702C0C49A608B2486D423456CAF1A6 * L_12 = ___eventData0;
		NullCheck(L_12);
		RuntimeObject* L_13 = SourceStateEventData_get_Controller_m7BF48EF5CD2C818A7DF20C40134F3980042D69C4_inline(L_12, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::AddControllerTransform(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, L_13);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnSourceLost(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerFinder_OnSourceLost_mE379B05FDA75FBEAF3F9A4C894F559BB125D634A (ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11 * __this, SourceStateEventData_tA2932F014F702C0C49A608B2486D423456CAF1A6 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_OnSourceLost_mE379B05FDA75FBEAF3F9A4C894F559BB125D634A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// if (eventData.Controller?.ControllerHandedness == handedness)
		SourceStateEventData_tA2932F014F702C0C49A608B2486D423456CAF1A6 * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1 = SourceStateEventData_get_Controller_m7BF48EF5CD2C818A7DF20C40134F3980042D69C4_inline(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1 ));
		Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1  L_3 = V_2;
		G_B3_0 = L_3;
		goto IL_001f;
	}

IL_0015:
	{
		NullCheck(G_B2_0);
		uint8_t L_4 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, G_B2_0);
		Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_mC49E487DA974166A213AAD2726AE8F585D87C0CF((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_mC49E487DA974166A213AAD2726AE8F585D87C0CF_RuntimeMethod_var);
		G_B3_0 = L_5;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		uint8_t L_6 = __this->get_handedness_4();
		V_1 = L_6;
		uint8_t L_7 = Nullable_1_GetValueOrDefault_m1E24D72500E4660B60C7863C2B2E71CC4B04BF76_inline((Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m1E24D72500E4660B60C7863C2B2E71CC4B04BF76_RuntimeMethod_var);
		uint8_t L_8 = V_1;
		bool L_9 = Nullable_1_get_HasValue_m07D34EBB75E8509AA81981808D524D257090B84C_inline((Nullable_1_t685A58E4BA0AA46E4F6A9F8DF9BDB50995AE67E1 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m07D34EBB75E8509AA81981808D524D257090B84C_RuntimeMethod_var);
		if (!((int32_t)((int32_t)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0041;
		}
	}
	{
		// RemoveControllerTransform();
		VirtActionInvoker0::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RemoveControllerTransform() */, __this);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::TryAndAddControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerFinder_TryAndAddControllerTransform_m28E7F95E147BEBB8048389859A4F38633286DBF0 (ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_TryAndAddControllerTransform_m28E7F95E147BEBB8048389859A4F38633286DBF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (CoreServices.InputSystem == null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// foreach (IMixedRealityController controller in CoreServices.InputSystem.DetectedControllers)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		NullCheck(L_1);
		HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96 * L_2 = InterfaceFuncInvoker0< HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96 * >::Invoke(5 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedControllers() */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F  L_3 = HashSet_1_GetEnumerator_m5D03742BCEC065A9A76CBCFEBC067147B87E0B10(L_2, /*hidden argument*/HashSet_1_GetEnumerator_m5D03742BCEC065A9A76CBCFEBC067147B87E0B10_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_001a:
		{
			// foreach (IMixedRealityController controller in CoreServices.InputSystem.DetectedControllers)
			RuntimeObject* L_4 = Enumerator_get_Current_m54ADCC9789BA9923142B3275627884EEEB423202_inline((Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m54ADCC9789BA9923142B3275627884EEEB423202_RuntimeMethod_var);
			V_1 = L_4;
			// if (controller.ControllerHandedness == handedness)
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			uint8_t L_6 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_5);
			uint8_t L_7 = __this->get_handedness_4();
			if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
			{
				goto IL_0039;
			}
		}

IL_0030:
		{
			// AddControllerTransform(controller);
			RuntimeObject* L_8 = V_1;
			VirtActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::AddControllerTransform(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, L_8);
			// return;
			IL2CPP_LEAVE(0x52, FINALLY_0044);
		}

IL_0039:
		{
			// foreach (IMixedRealityController controller in CoreServices.InputSystem.DetectedControllers)
			bool L_9 = Enumerator_MoveNext_m2847864A8B6A4717D9D5C39BF3DF8A82A27CE61C((Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2847864A8B6A4717D9D5C39BF3DF8A82A27CE61C_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001a;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mDCF28E57240A3751DA0E57A43D26EA4CF6A848D9((Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F *)(&V_0), /*hidden argument*/Enumerator_Dispose_mDCF28E57240A3751DA0E57A43D26EA4CF6A848D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::AddControllerTransform(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerFinder_AddControllerTransform_m4717E0975FC66D0BF44B07254851DE5BBF3589AA (ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11 * __this, RuntimeObject* ___newController0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_AddControllerTransform_m4717E0975FC66D0BF44B07254851DE5BBF3589AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (newController == null ||
		//     newController.Visualizer == null ||
		//     newController.Visualizer.GameObjectProxy == null ||
		//     newController.Visualizer.GameObjectProxy.transform == null)
		RuntimeObject* L_0 = ___newController0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_1 = ___newController0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_3 = ___newController0;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t9E81483FCAEC076EED74FDFBB3093033CED734B3_il2cpp_TypeInfo_var, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_7 = ___newController0;
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t9E81483FCAEC076EED74FDFBB3093033CED734B3_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		// return;
		return;
	}

IL_0037:
	{
		// if (newController.ControllerHandedness == handedness &&
		//     !newController.Visualizer.GameObjectProxy.transform.Equals(ControllerTransform))
		RuntimeObject* L_12 = ___newController0;
		NullCheck(L_12);
		uint8_t L_13 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_12);
		uint8_t L_14 = __this->get_handedness_4();
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007e;
		}
	}
	{
		RuntimeObject* L_15 = ___newController0;
		NullCheck(L_15);
		RuntimeObject* L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t9E81483FCAEC076EED74FDFBB3093033CED734B3_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_17, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = __this->get_ControllerTransform_5();
		NullCheck(L_18);
		bool L_20 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_18, L_19);
		if (L_20)
		{
			goto IL_007e;
		}
	}
	{
		// ControllerTransform = newController.Visualizer.GameObjectProxy.transform;
		RuntimeObject* L_21 = ___newController0;
		NullCheck(L_21);
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t9E81483FCAEC076EED74FDFBB3093033CED734B3_il2cpp_TypeInfo_var, L_22);
		NullCheck(L_23);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_23, /*hidden argument*/NULL);
		__this->set_ControllerTransform_5(L_24);
		// OnControllerFound();
		VirtActionInvoker0::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnControllerFound() */, __this);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RemoveControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerFinder_RemoveControllerTransform_m66013B9652D52F302BA07441CF1C6B978C88209F (ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_RemoveControllerTransform_m66013B9652D52F302BA07441CF1C6B978C88209F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ControllerTransform != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_ControllerTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// OnControllerLost();
		VirtActionInvoker0::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnControllerLost() */, __this);
		// ControllerTransform = null;
		__this->set_ControllerTransform_5((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RefreshControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerFinder_RefreshControllerTransform_mEA26430DA4D4E38952C6DDF22D0C352A9A2DA842 (ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_RefreshControllerTransform_mEA26430DA4D4E38952C6DDF22D0C352A9A2DA842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ControllerTransform != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_ControllerTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// RemoveControllerTransform();
		VirtActionInvoker0::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RemoveControllerTransform() */, __this);
	}

IL_0014:
	{
		// TryAndAddControllerTransform();
		VirtActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::TryAndAddControllerTransform() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnControllerFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerFinder_OnControllerFound_mEDDABECB829D58059B5AB60EB705E43FA9A05B23 (ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11 * __this, const RuntimeMethod* method)
{
	{
		// protected virtual void OnControllerFound() { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnControllerLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerFinder_OnControllerLost_m4DF00047208D139C9E42181E424B77337A271FC9 (ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11 * __this, const RuntimeMethod* method)
{
	{
		// protected virtual void OnControllerLost() { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerFinder__ctor_m834D2EF6C16F778CE0D83ABF7AA1753803E10D39 (ControllerFinder_t677311075130A0C7AC0F213A047B985E8B54BC11 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_SafeZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandConstraint_get_SafeZone_m01A473C27B8259F7560104B4221A27DBD4338BD6 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return safeZone; }
		int32_t L_0 = __this->get_safeZone_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_SafeZone(Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint_set_SafeZone_m97FD03440A86251AC9C5DAFFF1AFC41E7250E204 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { safeZone = value; }
		int32_t L_0 = ___value0;
		__this->set_safeZone_13(L_0);
		// set { safeZone = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_SafeZoneBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandConstraint_get_SafeZoneBuffer_m9EB07BF9C775C7192302D365C7406A81ADBF2436 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return safeZoneBuffer; }
		float L_0 = __this->get_safeZoneBuffer_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_SafeZoneBuffer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint_set_SafeZoneBuffer_m1E3A78DEF64F5A27C0AD1B83EE455051FFCB0F8B (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { safeZoneBuffer = value; }
		float L_0 = ___value0;
		__this->set_safeZoneBuffer_14(L_0);
		// set { safeZoneBuffer = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_UpdateWhenOppositeHandNear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraint_get_UpdateWhenOppositeHandNear_m5362413D2DC57EBB1E3536A0DDEBCA69C6183F6C (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return updateWhenOppositeHandNear; }
		bool L_0 = __this->get_updateWhenOppositeHandNear_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_UpdateWhenOppositeHandNear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint_set_UpdateWhenOppositeHandNear_m068C4C2B9A05BCBAD3F04D96C8B63E64B5804F30 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { updateWhenOppositeHandNear = value; }
		bool L_0 = ___value0;
		__this->set_updateWhenOppositeHandNear_15(L_0);
		// set { updateWhenOppositeHandNear = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_HideHandCursorsOnActivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraint_get_HideHandCursorsOnActivate_mD8A971340DFB1E88A2246F32FE9DC09011E16824 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return hideHandCursorsOnActivate; }
		bool L_0 = __this->get_hideHandCursorsOnActivate_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_HideHandCursorsOnActivate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint_set_HideHandCursorsOnActivate_m6F9B5FB474DD54CF33194108759839330CA0A01E (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { hideHandCursorsOnActivate = value; }
		bool L_0 = ___value0;
		__this->set_hideHandCursorsOnActivate_16(L_0);
		// set { hideHandCursorsOnActivate = value; }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_RotationBehavior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandConstraint_get_RotationBehavior_mFFBF6F05CEFDF6F7359E917324E0D3102908386F (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return rotationBehavior; }
		int32_t L_0 = __this->get_rotationBehavior_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_RotationBehavior(Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint_set_RotationBehavior_m4BEE571A9F759E44D34684A0B359AA343944C2F5 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { rotationBehavior = value; }
		int32_t L_0 = ___value0;
		__this->set_rotationBehavior_17(L_0);
		// set { rotationBehavior = value; }
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnHandActivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnHandActivate_mE368AA7CADFE60DDB3324BF58A58E3541C8644EA (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return onHandActivate; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onHandActivate_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_OnHandActivate(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint_set_OnHandActivate_m4C9A424E76141C0D3BD4068430AC405869F73A8D (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set { onHandActivate = value; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onHandActivate_18(L_0);
		// set { onHandActivate = value; }
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnHandDeactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnHandDeactivate_mF0C66A989EAF088BE1D7A6227EF5AE041F1740A0 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return onHandDeactivate; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onHandDeactivate_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_OnHandDeactivate(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint_set_OnHandDeactivate_mBA6EAEF6E5901A2FF9DF8FE1E6BF2863C127DEDC (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set { onHandDeactivate = value; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onHandDeactivate_19(L_0);
		// set { onHandDeactivate = value; }
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnFirstHandDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnFirstHandDetected_mDFE374405D00C9E957C76F667C93716297BB4A15 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return onFirstHandDetected; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onFirstHandDetected_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_OnFirstHandDetected(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint_set_OnFirstHandDetected_mB2A4C5F7A0F70D696CC82EB090217D64730D6B44 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set { onFirstHandDetected = value; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onFirstHandDetected_20(L_0);
		// set { onFirstHandDetected = value; }
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnLastHandLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnLastHandLost_m59346AC24F61226EAB8D57AE2B7B0F79B95775A0 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return onLastHandLost; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onLastHandLost_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_OnLastHandLost(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint_set_OnLastHandLost_m13EB1375F33FA1931D78823AEDA4B26B7374C2AD (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set { onLastHandLost = value; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onLastHandLost_21(L_0);
		// set { onLastHandLost = value; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint_SolverUpdate_mFF112390C81F1F364C76AAD3B40F4C5204D64BE8 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_SolverUpdate_mFF112390C81F1F364C76AAD3B40F4C5204D64BE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint8_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B16_0 = 0;
	{
		// if (SolverHandler.TrackedTargetType != TrackedObjectType.HandJoint &&
		//     SolverHandler.TrackedTargetType != TrackedObjectType.ControllerRay)
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		int32_t L_1 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701_inline(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_0027;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		int32_t L_3 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_0027;
		}
	}
	{
		// Debug.LogWarning("Solver HandConstraint requires TrackedObjectType of type HandJoint or ControllerRay");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralAEA2A24041B83C854AA97A8FFB2E549B15B679EF, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0027:
	{
		// var prevTrackedController = trackedController;
		RuntimeObject* L_4 = __this->get_trackedController_23();
		V_0 = L_4;
		// if (SolverHandler.CurrentTrackedHandedness != Handedness.None)
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_5 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_5);
		uint8_t L_6 = SolverHandler_get_CurrentTrackedHandedness_m70661B218AD90282C13F96F1D052C1177428B430_inline(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00fd;
		}
	}
	{
		// trackedController = GetController(SolverHandler.CurrentTrackedHandedness);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_7 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		uint8_t L_8 = SolverHandler_get_CurrentTrackedHandedness_m70661B218AD90282C13F96F1D052C1177428B430_inline(L_7, /*hidden argument*/NULL);
		RuntimeObject* L_9 = HandConstraint_GetController_m78FF31249AB1ECC7B783AAC4A8054CBA6167B78B(L_8, /*hidden argument*/NULL);
		__this->set_trackedController_23(L_9);
		// bool isValidController = IsValidController(trackedController);
		RuntimeObject* L_10 = __this->get_trackedController_23();
		bool L_11 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(14 /* System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, L_10);
		V_2 = L_11;
		// if (!isValidController)
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_00b7;
		}
	}
	{
		// SolverHandler.PreferredTrackedHandedness = SolverHandler.CurrentTrackedHandedness.GetOppositeHandedness();
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_13 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_14 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_14);
		uint8_t L_15 = SolverHandler_get_CurrentTrackedHandedness_m70661B218AD90282C13F96F1D052C1177428B430_inline(L_14, /*hidden argument*/NULL);
		uint8_t L_16 = HandednessExtensions_GetOppositeHandedness_m352C35AC1E2A63E32DC1283CCA866209A2B657E3(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		SolverHandler_set_PreferredTrackedHandedness_mB296A36535A70B7226F76241673481C521DDE708(L_13, L_16, /*hidden argument*/NULL);
		// SolverHandler.RefreshTrackedObject();
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_17 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_17);
		SolverHandler_RefreshTrackedObject_m2CB65E180E979ED0BDE8FF455A7B788806D9A133(L_17, /*hidden argument*/NULL);
		// trackedController = GetController(SolverHandler.CurrentTrackedHandedness);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_18 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_18);
		uint8_t L_19 = SolverHandler_get_CurrentTrackedHandedness_m70661B218AD90282C13F96F1D052C1177428B430_inline(L_18, /*hidden argument*/NULL);
		RuntimeObject* L_20 = HandConstraint_GetController_m78FF31249AB1ECC7B783AAC4A8054CBA6167B78B(L_19, /*hidden argument*/NULL);
		__this->set_trackedController_23(L_20);
		// isValidController = IsValidController(trackedController);
		RuntimeObject* L_21 = __this->get_trackedController_23();
		bool L_22 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(14 /* System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, L_21);
		V_2 = L_22;
		// if (!isValidController)
		bool L_23 = V_2;
		if (L_23)
		{
			goto IL_00b7;
		}
	}
	{
		// trackedController = null;
		__this->set_trackedController_23((RuntimeObject*)NULL);
	}

IL_00b7:
	{
		// if (isValidController && SolverHandler.TransformTarget != null)
		bool L_24 = V_2;
		if (!L_24)
		{
			goto IL_0104;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_25 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_25);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_27 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_26, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0104;
		}
	}
	{
		// if (updateWhenOppositeHandNear || !IsOppositeHandNear(trackedController))
		bool L_28 = __this->get_updateWhenOppositeHandNear_15();
		if (L_28)
		{
			goto IL_00e3;
		}
	}
	{
		RuntimeObject* L_29 = __this->get_trackedController_23();
		bool L_30 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(18 /* System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsOppositeHandNear(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, L_29);
		if (L_30)
		{
			goto IL_0104;
		}
	}

IL_00e3:
	{
		// GoalPosition = CalculateGoalPosition();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = VirtFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(15 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::CalculateGoalPosition() */, __this);
		Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475(__this, L_31, /*hidden argument*/NULL);
		// GoalRotation = CalculateGoalRotation();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = VirtFuncInvoker0< Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(16 /* UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::CalculateGoalRotation() */, __this);
		Solver_set_GoalRotation_mEC8C53FC1EB7D66765ECA104FB7EF3956405FCA2(__this, L_32, /*hidden argument*/NULL);
		// }
		goto IL_0104;
	}

IL_00fd:
	{
		// trackedController = null;
		__this->set_trackedController_23((RuntimeObject*)NULL);
	}

IL_0104:
	{
		// var newHandedness = trackedController == null ? Handedness.None : trackedController.ControllerHandedness;
		RuntimeObject* L_33 = __this->get_trackedController_23();
		if (!L_33)
		{
			goto IL_0119;
		}
	}
	{
		RuntimeObject* L_34 = __this->get_trackedController_23();
		NullCheck(L_34);
		uint8_t L_35 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_34);
		G_B16_0 = ((int32_t)(L_35));
		goto IL_011a;
	}

IL_0119:
	{
		G_B16_0 = 0;
	}

IL_011a:
	{
		V_1 = G_B16_0;
		// if (previousHandedness.IsNone() && !newHandedness.IsNone())
		uint8_t L_36 = __this->get_previousHandedness_22();
		bool L_37 = HandednessExtensions_IsNone_mE6A5F6B086E41597305829036D5917749647DEEF(L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0160;
		}
	}
	{
		uint8_t L_38 = V_1;
		bool L_39 = HandednessExtensions_IsNone_mE6A5F6B086E41597305829036D5917749647DEEF(L_38, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0160;
		}
	}
	{
		// StartCoroutine(ToggleCursors(trackedController, false, true));
		RuntimeObject* L_40 = __this->get_trackedController_23();
		RuntimeObject* L_41 = VirtFuncInvoker3< RuntimeObject*, RuntimeObject*, bool, bool >::Invoke(17 /* System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::ToggleCursors(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,System.Boolean,System.Boolean) */, __this, L_40, (bool)0, (bool)1);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_41, /*hidden argument*/NULL);
		// OnFirstHandDetected.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_42 = HandConstraint_get_OnFirstHandDetected_mDFE374405D00C9E957C76F667C93716297BB4A15_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_42, /*hidden argument*/NULL);
		// OnHandActivate.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_43 = HandConstraint_get_OnHandActivate_mE368AA7CADFE60DDB3324BF58A58E3541C8644EA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_43);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_43, /*hidden argument*/NULL);
		// }
		goto IL_01e1;
	}

IL_0160:
	{
		// else if (!previousHandedness.IsNone() && newHandedness.IsNone())
		uint8_t L_44 = __this->get_previousHandedness_22();
		bool L_45 = HandednessExtensions_IsNone_mE6A5F6B086E41597305829036D5917749647DEEF(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_019d;
		}
	}
	{
		uint8_t L_46 = V_1;
		bool L_47 = HandednessExtensions_IsNone_mE6A5F6B086E41597305829036D5917749647DEEF(L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_019d;
		}
	}
	{
		// StartCoroutine(ToggleCursors(prevTrackedController, true));
		RuntimeObject* L_48 = V_0;
		RuntimeObject* L_49 = VirtFuncInvoker3< RuntimeObject*, RuntimeObject*, bool, bool >::Invoke(17 /* System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::ToggleCursors(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,System.Boolean,System.Boolean) */, __this, L_48, (bool)1, (bool)0);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_49, /*hidden argument*/NULL);
		// OnLastHandLost.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_50 = HandConstraint_get_OnLastHandLost_m59346AC24F61226EAB8D57AE2B7B0F79B95775A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_50, /*hidden argument*/NULL);
		// OnHandDeactivate.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_51 = HandConstraint_get_OnHandDeactivate_mF0C66A989EAF088BE1D7A6227EF5AE041F1740A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_51);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_51, /*hidden argument*/NULL);
		// }
		goto IL_01e1;
	}

IL_019d:
	{
		// else if (previousHandedness != newHandedness)
		uint8_t L_52 = __this->get_previousHandedness_22();
		uint8_t L_53 = V_1;
		if ((((int32_t)L_52) == ((int32_t)L_53)))
		{
			goto IL_01e1;
		}
	}
	{
		// StartCoroutine(ToggleCursors(prevTrackedController, true));
		RuntimeObject* L_54 = V_0;
		RuntimeObject* L_55 = VirtFuncInvoker3< RuntimeObject*, RuntimeObject*, bool, bool >::Invoke(17 /* System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::ToggleCursors(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,System.Boolean,System.Boolean) */, __this, L_54, (bool)1, (bool)0);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_55, /*hidden argument*/NULL);
		// StartCoroutine(ToggleCursors(trackedController, false, true));
		RuntimeObject* L_56 = __this->get_trackedController_23();
		RuntimeObject* L_57 = VirtFuncInvoker3< RuntimeObject*, RuntimeObject*, bool, bool >::Invoke(17 /* System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::ToggleCursors(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,System.Boolean,System.Boolean) */, __this, L_56, (bool)0, (bool)1);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_57, /*hidden argument*/NULL);
		// OnHandDeactivate.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_58 = HandConstraint_get_OnHandDeactivate_mF0C66A989EAF088BE1D7A6227EF5AE041F1740A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_58, /*hidden argument*/NULL);
		// OnHandActivate.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_59 = HandConstraint_get_OnHandActivate_mE368AA7CADFE60DDB3324BF58A58E3541C8644EA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_59);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_59, /*hidden argument*/NULL);
	}

IL_01e1:
	{
		// previousHandedness = newHandedness;
		uint8_t L_60 = V_1;
		__this->set_previousHandedness_22(L_60);
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_m0877CE338F66AE7354E42FA94DBFD4FD78D61466(__this, /*hidden argument*/NULL);
		// UpdateWorkingRotationToGoal();
		Solver_UpdateWorkingRotationToGoal_m1E3618AD1B1738342BF68F058024DAF97D8F437D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraint_IsValidController_mDB04EE2D1296D35D4CD64FFE5073A470870D1F80 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, RuntimeObject* ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_IsValidController_mDB04EE2D1296D35D4CD64FFE5073A470870D1F80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (controller == null)
		RuntimeObject* L_0 = ___controller0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// foreach (var pointer in controller.InputSource.Pointers)
		RuntimeObject* L_1 = ___controller0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_3 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0025;
	}

IL_0015:
	{
		// foreach (var pointer in controller.InputSource.Pointers)
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// if (pointer.IsFocusLocked)
		NullCheck(L_7);
		bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(13 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_IsFocusLocked() */, IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4_il2cpp_TypeInfo_var, L_7);
		if (!L_8)
		{
			goto IL_0021;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0021:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0025:
	{
		// foreach (var pointer in controller.InputSource.Pointers)
		int32_t L_10 = V_1;
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))
		{
			goto IL_0015;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::CalculateGoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  HandConstraint_CalculateGoalPosition_mCEBB61253B62C34C9E9F9B9DEE1AF912F96EF02E (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_CalculateGoalPosition_mCEBB61253B62C34C9E9F9B9DEE1AF912F96EF02E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var goalPosition = SolverHandler.TransformTarget.position;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (trackedController != null &&
		//     handBounds.Bounds.TryGetValue(trackedController.ControllerHandedness, out trackedHandBounds))
		RuntimeObject* L_3 = __this->get_trackedController_23();
		if (!L_3)
		{
			goto IL_007e;
		}
	}
	{
		HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * L_4 = __this->get_handBounds_24();
		NullCheck(L_4);
		Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6 * L_5 = HandBounds_get_Bounds_m278748BE0578B354C155E6ACB585F665E95A53F2_inline(L_4, /*hidden argument*/NULL);
		RuntimeObject* L_6 = __this->get_trackedController_23();
		NullCheck(L_6);
		uint8_t L_7 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		bool L_8 = Dictionary_2_TryGetValue_mCD69ACF9348EAB5C6ED2D3D444270B105594B72D(L_5, L_7, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mCD69ACF9348EAB5C6ED2D3D444270B105594B72D_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_007e;
		}
	}
	{
		// Ray ray = CalculateProjectedSafeZoneRay(goalPosition, trackedController, safeZone);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		RuntimeObject* L_10 = __this->get_trackedController_23();
		int32_t L_11 = __this->get_safeZone_13();
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_12 = HandConstraint_CalculateProjectedSafeZoneRay_m67359E38B1D29607E32A3AAFB6829D352818F090(L_9, L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		// trackedHandBounds.Expand(safeZoneBuffer);
		float L_13 = __this->get_safeZoneBuffer_14();
		Bounds_Expand_m3FB9436F88DFE0FB57ECF6B1C4B2EDF9589346DA((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), L_13, /*hidden argument*/NULL);
		// if (trackedHandBounds.IntersectRay(ray, out distance))
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_14 = V_3;
		bool L_15 = Bounds_IntersectRay_m11E700B1AE0EAE3568379B999D1FBFEDEEB56EC7((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), L_14, (float*)(&V_2), /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// goalPosition = ray.origin + ray.direction * distance;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_3), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_3), /*hidden argument*/NULL);
		float L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_17, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_16, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
	}

IL_007e:
	{
		// return goalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::CalculateGoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  HandConstraint_CalculateGoalRotation_mDED93EE2985983AEEB2DDF11724624FB39469894 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_CalculateGoalRotation_mDED93EE2985983AEEB2DDF11724624FB39469894_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var goalRotation = SolverHandler.TransformTarget.rotation;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// switch (rotationBehavior)
		int32_t L_3 = __this->get_rotationBehavior_17();
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0051;
	}

IL_0022:
	{
		// goalRotation = Quaternion.LookRotation(GoalPosition - CameraCache.Main.transform.position);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_7 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// break;
		goto IL_0051;
	}

IL_0044:
	{
		// goalRotation *= handToWorldRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = __this->get_handToWorldRotation_25();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0051:
	{
		// if (rotationBehavior != SolverRotationBehavior.None)
		int32_t L_15 = __this->get_rotationBehavior_17();
		if (!L_15)
		{
			goto IL_00a5;
		}
	}
	{
		// var additionalRotation = SolverHandler.AdditionalRotation;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_16 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = SolverHandler_get_AdditionalRotation_m688CF9BFD91713E05AC1F12E0E53F994BF972060_inline(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// if (trackedController.ControllerHandedness.IsRight())
		RuntimeObject* L_18 = __this->get_trackedController_23();
		NullCheck(L_18);
		uint8_t L_19 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_18);
		bool L_20 = HandednessExtensions_IsRight_m01817CB0F7FD9D25F2C63BB910892E84F0D8D89F(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		// additionalRotation.y *= -1.0f;
		float* L_21 = (&V_2)->get_address_of_y_3();
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		*((float*)L_22) = (float)((float)il2cpp_codegen_multiply((float)L_23, (float)(-1.0f)));
	}

IL_0087:
	{
		// goalRotation *= Quaternion.Euler(additionalRotation.x, additionalRotation.y, additionalRotation.z);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_2;
		float L_26 = L_25.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_2;
		float L_28 = L_27.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_2;
		float L_30 = L_29.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_26, L_28, L_30, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_24, L_31, /*hidden argument*/NULL);
		V_0 = L_32;
	}

IL_00a5:
	{
		// return goalRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = V_0;
		return L_33;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::ToggleCursors(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandConstraint_ToggleCursors_m129EF848FD94A7915ED11A96EEFD0CDF1714D630 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, RuntimeObject* ___controller0, bool ___visible1, bool ___frameDelay2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_ToggleCursors_m129EF848FD94A7915ED11A96EEFD0CDF1714D630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * L_0 = (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB *)il2cpp_codegen_object_new(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB_il2cpp_TypeInfo_var);
		U3CToggleCursorsU3Ed__46__ctor_m25844EAF838B06A5D6C999D894001C574B3B1D61(L_0, 0, /*hidden argument*/NULL);
		U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * L_2 = L_1;
		RuntimeObject* L_3 = ___controller0;
		NullCheck(L_2);
		L_2->set_controller_2(L_3);
		U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * L_4 = L_2;
		bool L_5 = ___visible1;
		NullCheck(L_4);
		L_4->set_visible_5(L_5);
		U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * L_6 = L_4;
		bool L_7 = ___frameDelay2;
		NullCheck(L_6);
		L_6->set_frameDelay_4(L_7);
		return L_6;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsOppositeHandNear(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraint_IsOppositeHandNear_m3CA1DA9483B51FF0E9A3F2690948D481D0532EEB (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, RuntimeObject* ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_IsOppositeHandNear_m3CA1DA9483B51FF0E9A3F2690948D481D0532EEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (controller != null)
		RuntimeObject* L_0 = ___controller0;
		if (!L_0)
		{
			goto IL_0064;
		}
	}
	{
		// if (handBounds.Bounds.TryGetValue(controller.ControllerHandedness.GetOppositeHandedness(), out Bounds oppositeHandBounds) &&
		//     handBounds.Bounds.TryGetValue(controller.ControllerHandedness, out Bounds trackedHandBounds))
		HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * L_1 = __this->get_handBounds_24();
		NullCheck(L_1);
		Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6 * L_2 = HandBounds_get_Bounds_m278748BE0578B354C155E6ACB585F665E95A53F2_inline(L_1, /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___controller0;
		NullCheck(L_3);
		uint8_t L_4 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_3);
		uint8_t L_5 = HandednessExtensions_GetOppositeHandedness_m352C35AC1E2A63E32DC1283CCA866209A2B657E3(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_6 = Dictionary_2_TryGetValue_mCD69ACF9348EAB5C6ED2D3D444270B105594B72D(L_2, L_5, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mCD69ACF9348EAB5C6ED2D3D444270B105594B72D_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * L_7 = __this->get_handBounds_24();
		NullCheck(L_7);
		Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6 * L_8 = HandBounds_get_Bounds_m278748BE0578B354C155E6ACB585F665E95A53F2_inline(L_7, /*hidden argument*/NULL);
		RuntimeObject* L_9 = ___controller0;
		NullCheck(L_9);
		uint8_t L_10 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_8);
		bool L_11 = Dictionary_2_TryGetValue_mCD69ACF9348EAB5C6ED2D3D444270B105594B72D(L_8, L_10, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mCD69ACF9348EAB5C6ED2D3D444270B105594B72D_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// trackedHandBounds.Expand(trackedHandBounds.extents);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/NULL);
		Bounds_Expand_mB181AD8DCDE6A018DFC196528CC5002CA7EBCF0A((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), L_12, /*hidden argument*/NULL);
		// oppositeHandBounds.Expand(oppositeHandBounds.extents);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/NULL);
		Bounds_Expand_mB181AD8DCDE6A018DFC196528CC5002CA7EBCF0A((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), L_13, /*hidden argument*/NULL);
		// if (trackedHandBounds.Intersects(oppositeHandBounds))
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_14 = V_0;
		bool L_15 = Bounds_Intersects_m7B1398FDAC8ECA19677D0956E67FF92EB0BADA9E((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0064;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0064:
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::CalculateProjectedSafeZoneRay(UnityEngine.Vector3,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  HandConstraint_CalculateProjectedSafeZoneRay_m67359E38B1D29607E32A3AAFB6829D352818F090 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, RuntimeObject* ___hand1, int32_t ___handSafeZone2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_CalculateProjectedSafeZoneRay_m67359E38B1D29607E32A3AAFB6829D352818F090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	{
		// switch (handSafeZone)
		int32_t L_0 = ___handSafeZone2;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0016;
			}
			case 1:
			{
				goto IL_0058;
			}
			case 2:
			{
				goto IL_0096;
			}
			case 3:
			{
				goto IL_00a8;
			}
		}
	}

IL_0016:
	{
		// direction = Vector3.Cross(CameraCache.Main.transform.forward, Vector3.up);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// direction = IsPalmFacingCamera(hand) ? direction : -direction;
		RuntimeObject* L_6 = ___hand1;
		bool L_7 = HandConstraint_IsPalmFacingCamera_m8707CC2627EE8E7433DB49D62142C61AB57C870E(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0040;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
		goto IL_0041;
	}

IL_0040:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		G_B4_0 = L_10;
	}

IL_0041:
	{
		V_0 = G_B4_0;
		// if (hand.ControllerHandedness.IsLeft())
		RuntimeObject* L_11 = ___hand1;
		NullCheck(L_11);
		uint8_t L_12 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_11);
		bool L_13 = HandednessExtensions_IsLeft_m28C9129DD4ECEF74909F17D267DD9FF8C1AF8D77(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00bd;
		}
	}
	{
		// direction = -direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// break;
		goto IL_00bd;
	}

IL_0058:
	{
		// direction = Vector3.Cross(CameraCache.Main.transform.forward, Vector3.up);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_16 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		// direction = IsPalmFacingCamera(hand) ? direction : -direction;
		RuntimeObject* L_21 = ___hand1;
		bool L_22 = HandConstraint_IsPalmFacingCamera_m8707CC2627EE8E7433DB49D62142C61AB57C870E(L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0082;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_23, /*hidden argument*/NULL);
		G_B9_0 = L_24;
		goto IL_0083;
	}

IL_0082:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_0;
		G_B9_0 = L_25;
	}

IL_0083:
	{
		V_0 = G_B9_0;
		// if (hand.ControllerHandedness == Handedness.Right)
		RuntimeObject* L_26 = ___hand1;
		NullCheck(L_26);
		uint8_t L_27 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_26);
		if ((!(((uint32_t)L_27) == ((uint32_t)2))))
		{
			goto IL_00bd;
		}
	}
	{
		// direction = -direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		// break;
		goto IL_00bd;
	}

IL_0096:
	{
		// direction = CameraCache.Main.transform.up;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_30 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_31, /*hidden argument*/NULL);
		V_0 = L_32;
		// break;
		goto IL_00bd;
	}

IL_00a8:
	{
		// direction = -CameraCache.Main.transform.up;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_33 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_35, /*hidden argument*/NULL);
		V_0 = L_36;
	}

IL_00bd:
	{
		// return new Ray(origin + direction, -direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = ___origin0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_37, L_38, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_40, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_42), L_39, L_41, /*hidden argument*/NULL);
		return L_42;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsPalmFacingCamera(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraint_IsPalmFacingCamera_m8707CC2627EE8E7433DB49D62142C61AB57C870E (RuntimeObject* ___hand0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_IsPalmFacingCamera_m8707CC2627EE8E7433DB49D62142C61AB57C870E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var jointedHand = hand as IMixedRealityHand;
		RuntimeObject* L_0 = ___hand0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var));
		// if ((jointedHand != null) && jointedHand.TryGetJoint(TrackedHandJoint.Palm, out palmPose))
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var, L_2, 2, (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0));
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// return (Vector3.Dot(palmPose.Up, CameraCache.Main.transform.forward) > 0.0f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = MixedRealityPose_get_Up_m020CCADDD4C0057B6AE11ECB28F203AD2D0508C5((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0), /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_8 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_4, L_7, /*hidden argument*/NULL);
		return (bool)((((float)L_8) > ((float)(0.0f)))? 1 : 0);
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsApplicableController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraint_IsApplicableController_m714A68E6B2FEE19FD27BA17DA924EBAC6C4EC9E8 (RuntimeObject* ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_IsApplicableController_m714A68E6B2FEE19FD27BA17DA924EBAC6C4EC9E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return controller.ControllerHandedness != Handedness.None;
		RuntimeObject* L_0 = ___controller0;
		NullCheck(L_0);
		uint8_t L_1 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_0);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::GetController(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandConstraint_GetController_m78FF31249AB1ECC7B783AAC4A8054CBA6167B78B (uint8_t ___handedness0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_GetController_m78FF31249AB1ECC7B783AAC4A8054CBA6167B78B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (IMixedRealityController c in CoreServices.InputSystem.DetectedControllers)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		NullCheck(L_0);
		HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96 * L_1 = InterfaceFuncInvoker0< HashSet_1_tF6C7D90EC3626261213DF2C1370D5136C6764F96 * >::Invoke(5 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedControllers() */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F  L_2 = HashSet_1_GetEnumerator_m5D03742BCEC065A9A76CBCFEBC067147B87E0B10(L_1, /*hidden argument*/HashSet_1_GetEnumerator_m5D03742BCEC065A9A76CBCFEBC067147B87E0B10_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0012:
		{
			// foreach (IMixedRealityController c in CoreServices.InputSystem.DetectedControllers)
			RuntimeObject* L_3 = Enumerator_get_Current_m54ADCC9789BA9923142B3275627884EEEB423202_inline((Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m54ADCC9789BA9923142B3275627884EEEB423202_RuntimeMethod_var);
			V_1 = L_3;
			// if (c.ControllerHandedness.IsMatch(handedness))
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			uint8_t L_5 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_4);
			uint8_t L_6 = ___handedness0;
			bool L_7 = HandednessExtensions_IsMatch_mE9709387575B3ACD5D927EA109A2EE16867DC933(L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_002c;
			}
		}

IL_0028:
		{
			// return c;
			RuntimeObject* L_8 = V_1;
			V_2 = L_8;
			IL2CPP_LEAVE(0x47, FINALLY_0037);
		}

IL_002c:
		{
			// foreach (IMixedRealityController c in CoreServices.InputSystem.DetectedControllers)
			bool L_9 = Enumerator_MoveNext_m2847864A8B6A4717D9D5C39BF3DF8A82A27CE61C((Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2847864A8B6A4717D9D5C39BF3DF8A82A27CE61C_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0012;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mDCF28E57240A3751DA0E57A43D26EA4CF6A848D9((Enumerator_tEB4576062759B5014B85017F3CDBF7F9B15DDD3F *)(&V_0), /*hidden argument*/Enumerator_Dispose_mDCF28E57240A3751DA0E57A43D26EA4CF6A848D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0045:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}

IL_0047:
	{
		// }
		RuntimeObject* L_10 = V_2;
		return L_10;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint_OnEnable_mE8C3C2E53F71845DDAE775664010F74E8E69B312 (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_OnEnable_mE8C3C2E53F71845DDAE775664010F74E8E69B312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		Solver_OnEnable_m30C8ADF771E48AFB08DAD8D71A24480D5EAFF6BC(__this, /*hidden argument*/NULL);
		// handBounds = GetComponent<HandBounds>();
		HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * L_0 = Component_GetComponent_TisHandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142_m42B545DDF8EA455254FEA33CC8D566C1C042C3C4(__this, /*hidden argument*/Component_GetComponent_TisHandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142_m42B545DDF8EA455254FEA33CC8D566C1C042C3C4_RuntimeMethod_var);
		__this->set_handBounds_24(L_0);
		// trackedController = null;
		__this->set_trackedController_23((RuntimeObject*)NULL);
		// OnLastHandLost.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_1 = HandConstraint_get_OnLastHandLost_m59346AC24F61226EAB8D57AE2B7B0F79B95775A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_1, /*hidden argument*/NULL);
		// OnHandDeactivate.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_2 = HandConstraint_get_OnHandDeactivate_mF0C66A989EAF088BE1D7A6227EF5AE041F1740A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint__ctor_m88DE81DF42CB3375F52122A3B0BF9BC72EDD030E (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint__ctor_m88DE81DF42CB3375F52122A3B0BF9BC72EDD030E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float safeZoneBuffer = 0.15f;
		__this->set_safeZoneBuffer_14((0.15f));
		// private bool hideHandCursorsOnActivate = true;
		__this->set_hideHandCursorsOnActivate_16((bool)1);
		// private SolverRotationBehavior rotationBehavior = SolverRotationBehavior.LookAtMainCamera;
		__this->set_rotationBehavior_17(2);
		// private UnityEvent onHandActivate = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_0, /*hidden argument*/NULL);
		__this->set_onHandActivate_18(L_0);
		// private UnityEvent onHandDeactivate = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_1 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_1, /*hidden argument*/NULL);
		__this->set_onHandDeactivate_19(L_1);
		// private UnityEvent onFirstHandDetected = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_2 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_2, /*hidden argument*/NULL);
		__this->set_onFirstHandDetected_20(L_2);
		// private UnityEvent onLastHandLost = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_3 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_3, /*hidden argument*/NULL);
		__this->set_onLastHandLost_21(L_3);
		// private readonly Quaternion handToWorldRotation = Quaternion.Euler(-90.0f, 0.0f, 180.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((-90.0f), (0.0f), (180.0f), /*hidden argument*/NULL);
		__this->set_handToWorldRotation_25(L_4);
		Solver__ctor_mAF66923F2EB0C229B5ED3B2A1807B0500D9776D4(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__46__ctor_m25844EAF838B06A5D6C999D894001C574B3B1D61 (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__46_System_IDisposable_Dispose_mED13E8E30B4E56EC18B5EEAA74D3DA944A213020 (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CToggleCursorsU3Ed__46_MoveNext_mDDA1FB4BCA3B9FA5EC8074D5CD2A439D905680E6 (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CToggleCursorsU3Ed__46_MoveNext_mDDA1FB4BCA3B9FA5EC8074D5CD2A439D905680E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * V_1 = NULL;
	IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* G_B12_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (controller == null)
		RuntimeObject* L_4 = __this->get_controller_2();
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0028:
	{
		// if (hideHandCursorsOnActivate)
		HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->get_hideHandCursorsOnActivate_16();
		if (!L_6)
		{
			goto IL_0094;
		}
	}
	{
		// if (frameDelay)
		bool L_7 = __this->get_frameDelay_4();
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0048:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004f:
	{
		// foreach (var pointer in controller?.InputSource.Pointers)
		RuntimeObject* L_8 = __this->get_controller_2();
		RuntimeObject* L_9 = L_8;
		G_B10_0 = L_9;
		if (L_9)
		{
			G_B11_0 = L_9;
			goto IL_005c;
		}
	}
	{
		G_B12_0 = ((IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D*)(NULL));
		goto IL_0066;
	}

IL_005c:
	{
		NullCheck(G_B11_0);
		RuntimeObject* L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, G_B11_0);
		NullCheck(L_10);
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_11 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D_il2cpp_TypeInfo_var, L_10);
		G_B12_0 = L_11;
	}

IL_0066:
	{
		V_2 = G_B12_0;
		V_3 = 0;
		goto IL_008e;
	}

IL_006b:
	{
		// foreach (var pointer in controller?.InputSource.Pointers)
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		// pointer?.BaseCursor?.SetVisibility(visible);
		RuntimeObject* L_16 = L_15;
		G_B14_0 = L_16;
		if (L_16)
		{
			G_B15_0 = L_16;
			goto IL_0074;
		}
	}
	{
		goto IL_008a;
	}

IL_0074:
	{
		NullCheck(G_B15_0);
		RuntimeObject* L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_BaseCursor() */, IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4_il2cpp_TypeInfo_var, G_B15_0);
		RuntimeObject* L_18 = L_17;
		G_B16_0 = L_18;
		if (L_18)
		{
			G_B17_0 = L_18;
			goto IL_007f;
		}
	}
	{
		goto IL_008a;
	}

IL_007f:
	{
		bool L_19 = __this->get_visible_5();
		NullCheck(G_B17_0);
		InterfaceActionInvoker1< bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t1BB87D9CBE3F643770939A4D6C80C69687AF065F_il2cpp_TypeInfo_var, G_B17_0, L_19);
	}

IL_008a:
	{
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_008e:
	{
		// foreach (var pointer in controller?.InputSource.Pointers)
		int32_t L_21 = V_3;
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_22 = V_2;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_006b;
		}
	}

IL_0094:
	{
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CToggleCursorsU3Ed__46_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCB7E20077E65E2F55F26126A1112C87A2E49543F (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_mBD199630636E53779A34C0092DE8923693354C34 (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_mBD199630636E53779A34C0092DE8923693354C34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_mBD199630636E53779A34C0092DE8923693354C34_RuntimeMethod_var);
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_get_Current_mC4447F8283961B7404AE3A6AF1007F5247F22199 (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * __this, const RuntimeMethod* method)
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
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_FacingThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_FacingThreshold_m98663CD937301D09F8DFAD538896A3FFE0BECB3E (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, const RuntimeMethod* method)
{
	{
		// get { return facingThreshold; }
		float L_0 = __this->get_facingThreshold_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_FacingThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_FacingThreshold_mD276A0CFDEB7593C6BD41DF495AFFBB6EF3086DB (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { facingThreshold = value; }
		float L_0 = ___value0;
		__this->set_facingThreshold_26(L_0);
		// set { facingThreshold = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_RequireFlatHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_get_RequireFlatHand_mB4F781D61C453F27D07E01BC18656B331FAC0FD7 (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, const RuntimeMethod* method)
{
	{
		// get { return requireFlatHand; }
		bool L_0 = __this->get_requireFlatHand_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_RequireFlatHand(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_RequireFlatHand_m1727C340CA0030CAC91D30C2173065DCD2F2FA15 (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { requireFlatHand = value; }
		bool L_0 = ___value0;
		__this->set_requireFlatHand_27(L_0);
		// set { requireFlatHand = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_FlatHandThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_FlatHandThreshold_m046022FF33D6EEA2D955C40DE16D10F37413149E (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, const RuntimeMethod* method)
{
	{
		// get { return flatHandThreshold; }
		float L_0 = __this->get_flatHandThreshold_28();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_FlatHandThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_FlatHandThreshold_m583FBB2EE096655B7116769B155FC7D87816A212 (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { flatHandThreshold = value; }
		float L_0 = ___value0;
		__this->set_flatHandThreshold_28(L_0);
		// set { flatHandThreshold = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_IsValidController_m2FD5108AA02B178532CDADEB64E7CEB205D105E1 (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, RuntimeObject* ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraintPalmUp_IsValidController_m2FD5108AA02B178532CDADEB64E7CEB205D105E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_2;
	memset((&V_2), 0, sizeof(V_2));
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	float G_B10_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B10_1;
	memset((&G_B10_1), 0, sizeof(G_B10_1));
	{
		// if (!base.IsValidController(controller))
		RuntimeObject* L_0 = ___controller0;
		bool L_1 = HandConstraint_IsValidController_mDB04EE2D1296D35D4CD64FFE5073A470870D1F80(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// var jointedHand = controller as IMixedRealityHand;
		RuntimeObject* L_2 = ___controller0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var));
		// if (jointedHand != null)
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_00e6;
		}
	}
	{
		// if (jointedHand.TryGetJoint(TrackedHandJoint.Palm, out palmPose))
		RuntimeObject* L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var, L_4, 2, (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0));
		if (!L_5)
		{
			goto IL_00b8;
		}
	}
	{
		// if (requireFlatHand)
		bool L_6 = __this->get_requireFlatHand_27();
		if (!L_6)
		{
			goto IL_00c2;
		}
	}
	{
		// if (jointedHand.TryGetJoint(TrackedHandJoint.IndexTip, out indexTipPose) &&
		//     jointedHand.TryGetJoint(TrackedHandJoint.RingTip, out ringTipPose))
		RuntimeObject* L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var, L_7, ((int32_t)11), (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_2));
		if (!L_8)
		{
			goto IL_00c2;
		}
	}
	{
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var, L_9, ((int32_t)21), (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_3));
		if (!L_10)
		{
			goto IL_00c2;
		}
	}
	{
		// var handNormal = Vector3.Cross(indexTipPose.Position - palmPose.Position,
		//                                ringTipPose.Position - indexTipPose.Position).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318_inline((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_2), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318_inline((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_11, L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318_inline((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_3), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318_inline((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_2), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_14, L_15, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_13, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_5), /*hidden argument*/NULL);
		V_4 = L_18;
		// handNormal *= (jointedHand.ControllerHandedness == Handedness.Right) ? 1.0f : -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_4;
		RuntimeObject* L_20 = V_1;
		NullCheck(L_20);
		uint8_t L_21 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_20);
		G_B8_0 = L_19;
		if ((((int32_t)L_21) == ((int32_t)2)))
		{
			G_B9_0 = L_19;
			goto IL_0094;
		}
	}
	{
		G_B10_0 = (-1.0f);
		G_B10_1 = G_B8_0;
		goto IL_0099;
	}

IL_0094:
	{
		G_B10_0 = (1.0f);
		G_B10_1 = G_B9_0;
	}

IL_0099:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		V_4 = L_22;
		// if (Vector3.Angle(palmPose.Up, handNormal) > flatHandThreshold)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = MixedRealityPose_get_Up_m020CCADDD4C0057B6AE11ECB28F203AD2D0508C5((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_4;
		float L_25 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_23, L_24, /*hidden argument*/NULL);
		float L_26 = __this->get_flatHandThreshold_28();
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_00c2;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00b8:
	{
		// Debug.LogError("HandConstraintPalmUp requires controllers of type IMixedRealityHand to perform hand activation tests.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral9D08677538B56ECF9AED0A2EA9CEFADCE1634173, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		// return Vector3.Angle(palmPose.Up, CameraCache.Main.transform.forward) < facingThreshold;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = MixedRealityPose_get_Up_m020CCADDD4C0057B6AE11ECB28F203AD2D0508C5((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0), /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_28 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_31 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_27, L_30, /*hidden argument*/NULL);
		float L_32 = __this->get_facingThreshold_26();
		return (bool)((((float)L_31) < ((float)L_32))? 1 : 0);
	}

IL_00e6:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp__ctor_mE4DF9EE811CD452913E303DAEAFD427263CC8BB8 (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, const RuntimeMethod* method)
{
	{
		// private float facingThreshold = 80.0f;
		__this->set_facingThreshold_26((80.0f));
		// private float flatHandThreshold = 45.0f;
		__this->set_flatHandThreshold_28((45.0f));
		HandConstraint__ctor_m88DE81DF42CB3375F52122A3B0BF9BC72EDD030E(__this, /*hidden argument*/NULL);
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
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_PartwayOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InBetween_get_PartwayOffset_mE61CCB745A3C8F7379B4E8AA6D253B5F36ACCC7A (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	{
		// get { return partwayOffset; }
		float L_0 = __this->get_partwayOffset_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_PartwayOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_set_PartwayOffset_mED747AB1DD66BBFB1325EB68159476534206E6AB (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_set_PartwayOffset_mED747AB1DD66BBFB1325EB68159476534206E6AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { partwayOffset = Mathf.Clamp(value, 0.0f, 1.0f); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_partwayOffset_13(L_1);
		// set { partwayOffset = Mathf.Clamp(value, 0.0f, 1.0f); }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_SecondTrackedObjectType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InBetween_get_SecondTrackedObjectType_mD62D9B5F47DB57ADA65FFEDE77CF291F183A8A74 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	{
		// get { return secondTrackedObjectType; }
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_SecondTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_set_SecondTrackedObjectType_mBE31AE4FFD63B6EA226BED8A716B08CAF3B2F665 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (secondTrackedObjectType != value)
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// secondTrackedObjectType = value;
		int32_t L_2 = ___value0;
		__this->set_secondTrackedObjectType_14(L_2);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_mB76F1142E4DB23B2B239CA938F48858AC9911AEF(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_TrackedObjectForSecondTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InBetween_get_TrackedObjectForSecondTransform_mB84766938FDFA419D0981C34C97395C9D0CF4915 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	{
		// get { return secondTrackedObjectType; }
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_TrackedObjectForSecondTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_set_TrackedObjectForSecondTransform_m2E3B4BC5AA750248C4C2EE2416C515042421DC5C (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (secondTrackedObjectType != value)
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// secondTrackedObjectType = value;
		int32_t L_2 = ___value0;
		__this->set_secondTrackedObjectType_14(L_2);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_mB76F1142E4DB23B2B239CA938F48858AC9911AEF(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_SecondTransformOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * InBetween_get_SecondTransformOverride_m002115C6FA5ED1E64A0D1EB0ED15CF5E6DBEFFD8 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	{
		// get { return secondTransformOverride; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_secondTransformOverride_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_SecondTransformOverride(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_set_SecondTransformOverride_mFBD1E58E85086FA8DB610E36B35065142F77FD0B (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_set_SecondTransformOverride_mFBD1E58E85086FA8DB610E36B35065142F77FD0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (secondTransformOverride != value)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_secondTransformOverride_15();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// secondTransformOverride = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___value0;
		__this->set_secondTransformOverride_15(L_3);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_mB76F1142E4DB23B2B239CA938F48858AC9911AEF(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_OnValidate_mB753F3911D630B6243FDF7D582719DBA1A0DC70D (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	{
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_mB76F1142E4DB23B2B239CA938F48858AC9911AEF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_Start_m7A6DDA6AC81C3EA0161CB4CE800205AFAE2DF1AC (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_Start_m7A6DDA6AC81C3EA0161CB4CE800205AFAE2DF1AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		Solver_Start_m28612BA96CF6F0F52207675F6264069B661D83AE(__this, /*hidden argument*/NULL);
		// secondSolverHandler = gameObject.AddComponent<SolverHandler>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_1 = GameObject_AddComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mED82B88562CC22F180BF24172145DC74F2ACDCDE(L_0, /*hidden argument*/GameObject_AddComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mED82B88562CC22F180BF24172145DC74F2ACDCDE_RuntimeMethod_var);
		__this->set_secondSolverHandler_16(L_1);
		// secondSolverHandler.UpdateSolvers = false;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = __this->get_secondSolverHandler_16();
		NullCheck(L_2);
		SolverHandler_set_UpdateSolvers_m71627901924EA3C2FA3F88E1346D5B6C96CE4BC9_inline(L_2, (bool)0, /*hidden argument*/NULL);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_mB76F1142E4DB23B2B239CA938F48858AC9911AEF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_SolverUpdate_m632EE0C3C4FE4992FD11421B8ECDB3BFCF5F7F2E (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_SolverUpdate_m632EE0C3C4FE4992FD11421B8ECDB3BFCF5F7F2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler != null && secondSolverHandler != null)
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005e;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = __this->get_secondSolverHandler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		// if (SolverHandler.TransformTarget != null && secondSolverHandler.TransformTarget != null)
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_7 = __this->get_secondSolverHandler_16();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		// AdjustPositionForOffset(SolverHandler.TransformTarget, secondSolverHandler.TransformTarget);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_10 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_10, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_12 = __this->get_secondSolverHandler_16();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_12, /*hidden argument*/NULL);
		InBetween_AdjustPositionForOffset_mFED4545083C88A001E2ABB849F277CE0485C8FE1(__this, L_11, L_13, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::AdjustPositionForOffset(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_AdjustPositionForOffset_mFED4545083C88A001E2ABB849F277CE0485C8FE1 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___targetTransform0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransform1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_AdjustPositionForOffset_mFED4545083C88A001E2ABB849F277CE0485C8FE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (targetTransform != null && secondTransform != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___targetTransform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___secondTransform1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// Vector3 centerline = targetTransform.position - secondTransform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___targetTransform0;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___secondTransform1;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// GoalPosition = secondTransform.position + (centerline * partwayOffset);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = ___secondTransform1;
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		float L_12 = __this->get_partwayOffset_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_11, L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_10, L_13, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475(__this, L_14, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::UpdateSecondSolverHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_UpdateSecondSolverHandler_mB76F1142E4DB23B2B239CA938F48858AC9911AEF (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_UpdateSecondSolverHandler_mB76F1142E4DB23B2B239CA938F48858AC9911AEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (secondSolverHandler != null)
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_secondSolverHandler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		// secondSolverHandler.TrackedTargetType = secondTrackedObjectType;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = __this->get_secondSolverHandler_16();
		int32_t L_3 = __this->get_secondTrackedObjectType_14();
		NullCheck(L_2);
		SolverHandler_set_TrackedTargetType_mF7E623A4E1DA27883BD2050C120E1EBC74486721(L_2, L_3, /*hidden argument*/NULL);
		// if (secondTrackedObjectType == TrackedObjectType.CustomOverride && secondTransformOverride != null)
		int32_t L_4 = __this->get_secondTrackedObjectType_14();
		if ((!(((uint32_t)L_4) == ((uint32_t)7))))
		{
			goto IL_0047;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = __this->get_secondTransformOverride_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// secondSolverHandler.TransformOverride = secondTransformOverride;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_7 = __this->get_secondSolverHandler_16();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = __this->get_secondTransformOverride_15();
		NullCheck(L_7);
		SolverHandler_set_TransformOverride_mA3A8090C85974D6349D759CD8582BA53C57F7B29(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween__ctor_m24F5372D717FC29DB5CC4D736CDB8AE616458BF1 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	{
		// private float partwayOffset = 0.5f;
		__this->set_partwayOffset_13((0.5f));
		Solver__ctor_mAF66923F2EB0C229B5ED3B2A1807B0500D9776D4(__this, /*hidden argument*/NULL);
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
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Resistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_Resistance_m6AF85CE5A093AF19654A6588F6A5E1E81BDA923F (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	{
		// get { return resistance; }
		float L_0 = __this->get_resistance_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_Resistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_Resistance_mD0F2200F3B16695C7A5624023257440EB863FD3D (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { resistance = value; }
		float L_0 = ___value0;
		__this->set_resistance_13(L_0);
		// set { resistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ResistanceVelocityPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_ResistanceVelocityPower_mB3FD8F9FA83430AE3B2CF7EBFBD59C6D91A8C7CD (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	{
		// get { return resistanceVelocityPower; }
		float L_0 = __this->get_resistanceVelocityPower_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_ResistanceVelocityPower(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_ResistanceVelocityPower_mD678D956F7B8AE022DB902F3750089D1095A7645 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { resistanceVelocityPower = value; }
		float L_0 = ___value0;
		__this->set_resistanceVelocityPower_14(L_0);
		// set { resistanceVelocityPower = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_AccelerationRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_AccelerationRate_m7275BF29D9A0076AE57185FD8C54933CC4AE882B (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	{
		// get { return accelerationRate; }
		float L_0 = __this->get_accelerationRate_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_AccelerationRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_AccelerationRate_mFCC397F5082E0F2C8624AD96FC90C22CA458438B (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { accelerationRate = value; }
		float L_0 = ___value0;
		__this->set_accelerationRate_15(L_0);
		// set { accelerationRate = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Springiness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_Springiness_mEB73E476E71B8CC3BA383CAB0D4DED4087A45E60 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	{
		// get { return springiness; }
		float L_0 = __this->get_springiness_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_Springiness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_Springiness_m4CF414A81B807C155357ABBE460F66B80F48CA2A (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { springiness = value; }
		float L_0 = ___value0;
		__this->set_springiness_16(L_0);
		// set { springiness = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_SnapZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Momentum_get_SnapZ_mC9198F80575BD4DA31C961413746DA7E229A5084 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	{
		// get { return snapZ; }
		bool L_0 = __this->get_snapZ_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_SnapZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_SnapZ_m371AB43284967218874D70B1F291650048D1B34B (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { snapZ = value; }
		bool L_0 = ___value0;
		__this->set_snapZ_17(L_0);
		// set { snapZ = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ReferencePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Momentum_get_ReferencePosition_mFAACD502CAE0271F1F699462EE1991FA53FFCBB4 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_get_ReferencePosition_mFAACD502CAE0271F1F699462EE1991FA53FFCBB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 ReferencePosition => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_OnEnable_m2B8CAC0F59E7A57AB929CEB3749E3F6949ACCAC1 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_OnEnable_m2B8CAC0F59E7A57AB929CEB3749E3F6949ACCAC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		Solver_OnEnable_m30C8ADF771E48AFB08DAD8D71A24480D5EAFF6BC(__this, /*hidden argument*/NULL);
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_SolverUpdate_mD3B24CAD26BABAFB3D613F692ADC4F17C96EB26B (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_SolverUpdate_mD3B24CAD26BABAFB3D613F692ADC4F17C96EB26B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float G_B9_0 = 0.0f;
	{
		// if (SnapZ)
		bool L_0 = Momentum_get_SnapZ_mC9198F80575BD4DA31C961413746DA7E229A5084_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0082;
		}
	}
	{
		// var referencePosition = ReferencePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Momentum_get_ReferencePosition_mFAACD502CAE0271F1F699462EE1991FA53FFCBB4(__this, /*hidden argument*/NULL);
		V_3 = L_1;
		// float goalDepth = (SolverHandler.GoalPosition - referencePosition).magnitude;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SolverHandler_get_GoalPosition_mBC993B50E8189431844A276EF16B7AE97A518E8A_inline(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_3, L_4, /*hidden argument*/NULL);
		V_7 = L_5;
		float L_6 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_4 = L_6;
		// Vector3 currentDelta = transform.position - referencePosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_8, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		// float currentDeltaMagnitude = currentDelta.magnitude;
		float L_11 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_5), /*hidden argument*/NULL);
		V_6 = L_11;
		// if (!Mathf.Approximately(currentDeltaMagnitude, 0))
		float L_12 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_13 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_12, (0.0f), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0082;
		}
	}
	{
		// Vector3 currentDeltaNorm = currentDelta / currentDeltaMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_5;
		float L_15 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_14, L_15, /*hidden argument*/NULL);
		V_8 = L_16;
		// transform.position += currentDeltaNorm * (goalDepth - currentDeltaMagnitude);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = L_17;
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_8;
		float L_21 = V_4;
		float L_22 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_20, ((float)il2cpp_codegen_subtract((float)L_21, (float)L_22)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_19, L_23, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_18, L_24, /*hidden argument*/NULL);
	}

IL_0082:
	{
		// Vector3 delta = SolverHandler.GoalPosition - transform.position;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_25 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = SolverHandler_get_GoalPosition_mBC993B50E8189431844A276EF16B7AE97A518E8A_inline(L_25, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_26, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		// float deltaMagnitude = delta.magnitude;
		float L_30 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_30;
		// if (deltaMagnitude > 0.01f)
		float L_31 = V_1;
		if ((!(((float)L_31) > ((float)(0.01f)))))
		{
			goto IL_00ea;
		}
	}
	{
		// Vector3 deltaNorm = delta / deltaMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_0;
		float L_33 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_32, L_33, /*hidden argument*/NULL);
		V_9 = L_34;
		// velocity += deltaNorm * (SolverHandler.DeltaTime * (AccelerationRate + Springiness * deltaMagnitude));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = __this->get_velocity_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = V_9;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_37 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_37);
		float L_38 = SolverHandler_get_DeltaTime_mCDF9AC407AEDEB61DCE17B756E70A9A11C1BC779_inline(L_37, /*hidden argument*/NULL);
		float L_39 = Momentum_get_AccelerationRate_m7275BF29D9A0076AE57185FD8C54933CC4AE882B_inline(__this, /*hidden argument*/NULL);
		float L_40 = Momentum_get_Springiness_mEB73E476E71B8CC3BA383CAB0D4DED4087A45E60_inline(__this, /*hidden argument*/NULL);
		float L_41 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_36, ((float)il2cpp_codegen_multiply((float)L_38, (float)((float)il2cpp_codegen_add((float)L_39, (float)((float)il2cpp_codegen_multiply((float)L_40, (float)L_41)))))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_35, L_42, /*hidden argument*/NULL);
		__this->set_velocity_18(L_43);
	}

IL_00ea:
	{
		// float velocityMagnitude = velocity.magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_44 = __this->get_address_of_velocity_18();
		float L_45 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_44, /*hidden argument*/NULL);
		V_2 = L_45;
		// if (!Mathf.Approximately(velocityMagnitude, 0))
		float L_46 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_47 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_46, (0.0f), /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_0157;
		}
	}
	{
		// Vector3 velocityNormal = velocity / velocityMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = __this->get_velocity_18();
		float L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_48, L_49, /*hidden argument*/NULL);
		V_10 = L_50;
		// float powFactor = velocityMagnitude > 1f ? Mathf.Pow(velocityMagnitude, ResistanceVelocityPower) : velocityMagnitude;
		float L_51 = V_2;
		if ((((float)L_51) > ((float)(1.0f))))
		{
			goto IL_011c;
		}
	}
	{
		float L_52 = V_2;
		G_B9_0 = L_52;
		goto IL_0128;
	}

IL_011c:
	{
		float L_53 = V_2;
		float L_54 = Momentum_get_ResistanceVelocityPower_mB3FD8F9FA83430AE3B2CF7EBFBD59C6D91A8C7CD_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_55 = powf(L_53, L_54);
		G_B9_0 = L_55;
	}

IL_0128:
	{
		V_11 = G_B9_0;
		// velocity -= velocityNormal * (powFactor * Resistance * SolverHandler.DeltaTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = __this->get_velocity_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = V_10;
		float L_58 = V_11;
		float L_59 = Momentum_get_Resistance_m6AF85CE5A093AF19654A6588F6A5E1E81BDA923F_inline(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_60 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_60);
		float L_61 = SolverHandler_get_DeltaTime_mCDF9AC407AEDEB61DCE17B756E70A9A11C1BC779_inline(L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_57, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_58, (float)L_59)), (float)L_61)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_56, L_62, /*hidden argument*/NULL);
		__this->set_velocity_18(L_63);
	}

IL_0157:
	{
		// if (velocity.sqrMagnitude < 0.001f)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_64 = __this->get_address_of_velocity_18();
		float L_65 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_64, /*hidden argument*/NULL);
		if ((!(((float)L_65) < ((float)(0.001f)))))
		{
			goto IL_0174;
		}
	}
	{
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_66);
	}

IL_0174:
	{
		// transform.position += velocity * SolverHandler.DeltaTime;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_67 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_68 = L_67;
		NullCheck(L_68);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_68, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_70 = __this->get_velocity_18();
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_71 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_71);
		float L_72 = SolverHandler_get_DeltaTime_mCDF9AC407AEDEB61DCE17B756E70A9A11C1BC779_inline(L_71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_70, L_72, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_69, L_73, /*hidden argument*/NULL);
		NullCheck(L_68);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_68, L_74, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_SnapTo_mC5520E50C3BEC88EF97A411604861F7D14174A76 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_SnapTo_mC5520E50C3BEC88EF97A411604861F7D14174A76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.SnapTo(position, rotation, scale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		Solver_SnapTo_m141A40A3F00A721C19297C9E5342E3FC7AEDC553(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum__ctor_m4A734DCA82B608F0012D6F45F04CD0E8FA4C1278 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	{
		// private float resistance = 0.99f;
		__this->set_resistance_13((0.99f));
		// private float resistanceVelocityPower = 1.5f;
		__this->set_resistanceVelocityPower_14((1.5f));
		// private float accelerationRate = 10f;
		__this->set_accelerationRate_15((10.0f));
		// private bool snapZ = true;
		__this->set_snapZ_17((bool)1);
		Solver__ctor_mAF66923F2EB0C229B5ED3B2A1807B0500D9776D4(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_OrientationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Orbital_get_OrientationType_mAAEEF763BBE5DB16B41DB41E1608C7D5F49C4F53 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	{
		// get { return orientationType; }
		int32_t L_0 = __this->get_orientationType_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_OrientationType(Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_OrientationType_m77E75E132FEB415484FA78A8EED107E265074E61 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { orientationType = value; }
		int32_t L_0 = ___value0;
		__this->set_orientationType_13(L_0);
		// set { orientationType = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_LocalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_LocalOffset_m3CCEC047C1F30289C8BB9E330C7B7B1626CFEBCE (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	{
		// get { return localOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localOffset_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_LocalOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_LocalOffset_mCBAC303BFAC9725A691F05B82DB320DD9CF4B60B (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { localOffset = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_localOffset_14(L_0);
		// set { localOffset = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_WorldOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_WorldOffset_mD12EDAC61BFE70094993AD183172E0D0746F98A3 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	{
		// get { return worldOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_worldOffset_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_WorldOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_WorldOffset_m77AD0E284280D4C0E342D147D208E24D15066F6B (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { worldOffset = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_worldOffset_15(L_0);
		// set { worldOffset = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_UseAngleStepping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_m20DE85BC6F72BD6743586083455E48271DCDAE88 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	{
		// get { return useAngleStepping; }
		bool L_0 = __this->get_useAngleStepping_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_UseAngleStepping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_UseAngleStepping_m677F9D9C8297BB16A55BBFF49472B0B7445793D8 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { useAngleStepping = value; }
		bool L_0 = ___value0;
		__this->set_useAngleStepping_16(L_0);
		// set { useAngleStepping = value; }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_TetherAngleSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Orbital_get_TetherAngleSteps_m37CDD8C4C54920E5D124B11777386497380CAC1D (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	{
		// get { return tetherAngleSteps; }
		int32_t L_0 = __this->get_tetherAngleSteps_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_TetherAngleSteps(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_TetherAngleSteps_m83D121C347FB50A341690EB941C1B7E270E3B215 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_set_TetherAngleSteps_m83D121C347FB50A341690EB941C1B7E270E3B215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tetherAngleSteps =  Mathf.Clamp(value, 2, 24);
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389(L_0, 2, ((int32_t)24), /*hidden argument*/NULL);
		__this->set_tetherAngleSteps_17(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_SolverUpdate_m642558C741B9B9235716BF5EF37CD1F9F5D013E7 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_SolverUpdate_m642558C741B9B9235716BF5EF37CD1F9F5D013E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// Vector3 desiredPos = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002a;
	}

IL_001a:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		V_0 = G_B3_0;
		// Quaternion targetRot = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.rotation : Quaternion.Euler(0, 1, 0);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_7 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		goto IL_0064;
	}

IL_0054:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_11 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		G_B6_0 = L_13;
	}

IL_0064:
	{
		V_1 = G_B6_0;
		// Quaternion yawOnlyRot = Quaternion.Euler(0, targetRot.eulerAngles.y, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_15, (0.0f), /*hidden argument*/NULL);
		V_2 = L_16;
		// desiredPos = desiredPos + (SnapToTetherAngleSteps(targetRot) * LocalOffset);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA(__this, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Orbital_get_LocalOffset_m3CCEC047C1F30289C8BB9E330C7B7B1626CFEBCE_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_17, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		// desiredPos = desiredPos + (SnapToTetherAngleSteps(yawOnlyRot) * WorldOffset);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA(__this, L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Orbital_get_WorldOffset_mD12EDAC61BFE70094993AD183172E0D0746F98A3_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_25, L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_23, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// Quaternion desiredRot = CalculateDesiredRotation(desiredPos);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Orbital_CalculateDesiredRotation_m84574CDFA82C60EC5BDB9B5D2FABAFF224B2A6B9(__this, L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		// GoalPosition = desiredPos;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_0;
		Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475(__this, L_31, /*hidden argument*/NULL);
		// GoalRotation = desiredRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = V_3;
		Solver_set_GoalRotation_mEC8C53FC1EB7D66765ECA104FB7EF3956405FCA2(__this, L_32, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationToSnap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// if (!UseAngleStepping || SolverHandler.TransformTarget == null)
		bool L_0 = Orbital_get_UseAngleStepping_m20DE85BC6F72BD6743586083455E48271DCDAE88_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_1 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		// return rotationToSnap;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___rotationToSnap0;
		return L_4;
	}

IL_001d:
	{
		// float stepAngle = 360f / tetherAngleSteps;
		int32_t L_5 = __this->get_tetherAngleSteps_17();
		V_0 = ((float)((float)(360.0f)/(float)(((float)((float)L_5)))));
		// int numberOfSteps = Mathf.RoundToInt(SolverHandler.TransformTarget.transform.eulerAngles.y / stepAngle);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_6 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		float L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_12 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041(((float)((float)L_10/(float)L_11)), /*hidden argument*/NULL);
		V_1 = L_12;
		// float newAngle = stepAngle * numberOfSteps;
		float L_13 = V_0;
		int32_t L_14 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_14)))));
		// return Quaternion.Euler(rotationToSnap.eulerAngles.x, newAngle, rotationToSnap.eulerAngles.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotationToSnap0), /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		float L_17 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotationToSnap0), /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_16, L_17, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_CalculateDesiredRotation_m84574CDFA82C60EC5BDB9B5D2FABAFF224B2A6B9 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_CalculateDesiredRotation_m84574CDFA82C60EC5BDB9B5D2FABAFF224B2A6B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float G_B5_0 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	{
		// Quaternion desiredRot = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		V_0 = L_0;
		// switch (orientationType)
		int32_t L_1 = __this->get_orientationType_13();
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_010b;
			}
			case 1:
			{
				goto IL_009c;
			}
			case 2:
			{
				goto IL_0030;
			}
			case 3:
			{
				goto IL_0076;
			}
			case 4:
			{
				goto IL_00d4;
			}
			case 5:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_0138;
	}

IL_0030:
	{
		// float targetYRotation = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.eulerAngles.y : 0.0f;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		G_B5_0 = (0.0f);
		goto IL_005f;
	}

IL_004a:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_6 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		G_B5_0 = L_9;
	}

IL_005f:
	{
		V_2 = G_B5_0;
		// desiredRot = Quaternion.Euler(0f, targetYRotation, 0f);
		float L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_10, (0.0f), /*hidden argument*/NULL);
		V_0 = L_11;
		// break;
		goto IL_0152;
	}

IL_0076:
	{
		// desiredRot = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// break;
		goto IL_0152;
	}

IL_0087:
	{
		// desiredRot = CameraCache.Main.transform.rotation;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_14 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// break;
		goto IL_0152;
	}

IL_009c:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? Quaternion.LookRotation(SolverHandler.TransformTarget.position - desiredPos) : Quaternion.identity;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_17 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_18, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00b6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B11_0 = L_20;
		goto IL_00d1;
	}

IL_00b6:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_21 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = ___desiredPos0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_25, /*hidden argument*/NULL);
		G_B11_0 = L_26;
	}

IL_00d1:
	{
		V_0 = G_B11_0;
		// break;
		goto IL_0152;
	}

IL_00d4:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? Quaternion.LookRotation(CameraCache.Main.transform.position - desiredPos) : Quaternion.identity;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_27 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_27);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_28, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00ee;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B15_0 = L_30;
		goto IL_0108;
	}

IL_00ee:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_31 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = ___desiredPos0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_35, /*hidden argument*/NULL);
		G_B15_0 = L_36;
	}

IL_0108:
	{
		V_0 = G_B15_0;
		// break;
		goto IL_0152;
	}

IL_010b:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.rotation : Quaternion.identity;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_37 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_37);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_39 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_38, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0125;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B19_0 = L_40;
		goto IL_0135;
	}

IL_0125:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_41 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_41);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_42, /*hidden argument*/NULL);
		G_B19_0 = L_43;
	}

IL_0135:
	{
		V_0 = G_B19_0;
		// break;
		goto IL_0152;
	}

IL_0138:
	{
		// Debug.LogError($"Invalid OrientationType for Orbital Solver on {gameObject.name}");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_44, /*hidden argument*/NULL);
		String_t* L_46 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF7E8D8FA41CB0C1CCEB687AB4AE503CE4773E4AE, L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_46, /*hidden argument*/NULL);
	}

IL_0152:
	{
		// if (UseAngleStepping)
		bool L_47 = Orbital_get_UseAngleStepping_m20DE85BC6F72BD6743586083455E48271DCDAE88_inline(__this, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0162;
		}
	}
	{
		// desiredRot = SnapToTetherAngleSteps(desiredRot);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_48 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_49 = Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA(__this, L_48, /*hidden argument*/NULL);
		V_0 = L_49;
	}

IL_0162:
	{
		// return desiredRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = V_0;
		return L_50;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital__ctor_mEEB8115906EB6917C9D843D39C0ECCD5F9C23770 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital__ctor_mEEB8115906EB6917C9D843D39C0ECCD5F9C23770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 localOffset = new Vector3(0, -1, 1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_localOffset_14(L_0);
		// private Vector3 worldOffset = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_worldOffset_15(L_1);
		// private int tetherAngleSteps = 6;
		__this->set_tetherAngleSteps_17(6);
		Solver__ctor_mAF66923F2EB0C229B5ED3B2A1807B0500D9776D4(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overlap_SolverUpdate_m67C332E5673ECF6449055CC669548D7CBBCF0F48 (Overlap_t14605F26108B061874FE4594021CBF8BFEBB3CE1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Overlap_SolverUpdate_m67C332E5673ECF6449055CC669548D7CBBCF0F48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// var target = SolverHandler.TransformTarget;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (target != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// GoalPosition = target.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475(__this, L_5, /*hidden argument*/NULL);
		// GoalRotation = target.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = V_0;
		NullCheck(L_6);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_6, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mEC8C53FC1EB7D66765ECA104FB7EF3956405FCA2(__this, L_7, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overlap__ctor_m10CC57A8F347D975A7420722E8D93EAF817F897D (Overlap_t14605F26108B061874FE4594021CBF8BFEBB3CE1 * __this, const RuntimeMethod* method)
{
	{
		Solver__ctor_mAF66923F2EB0C229B5ED3B2A1807B0500D9776D4(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RadialView_get_ReferenceDirection_mF09CDA85EE8F2EA7CBF89479587ED8F4F82EC3F0 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return referenceDirection; }
		int32_t L_0 = __this->get_referenceDirection_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_ReferenceDirection(Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_ReferenceDirection_mBC0E7851168DDC44E9592D515F77BAAD19CFB304 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { referenceDirection = value; }
		int32_t L_0 = ___value0;
		__this->set_referenceDirection_13(L_0);
		// set { referenceDirection = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MinDistance_mB0A75B8F0543B0B419F1A03589E514A511488AEC (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return minDistance; }
		float L_0 = __this->get_minDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MinDistance_m3D058A9992EEF6AFD713F617F6672E46819F4E54 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { minDistance = value; }
		float L_0 = ___value0;
		__this->set_minDistance_14(L_0);
		// set { minDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MaxDistance_m91CC44F9F65BD09374F0DFA9745024B7D5298C7E (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return maxDistance; }
		float L_0 = __this->get_maxDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MaxDistance_m5B63B63C8563AF1C51DCD9B270E198BD143CEEA5 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maxDistance = value; }
		float L_0 = ___value0;
		__this->set_maxDistance_15(L_0);
		// set { maxDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinViewDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MinViewDegrees_m02586EAF3AF772AB908EE435AF550AADB10A9B81 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return minViewDegrees; }
		float L_0 = __this->get_minViewDegrees_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinViewDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MinViewDegrees_m5626F4ECAF5ECF666BDCC379FCDB1513F549FCAA (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { minViewDegrees = value; }
		float L_0 = ___value0;
		__this->set_minViewDegrees_16(L_0);
		// set { minViewDegrees = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxViewDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MaxViewDegrees_m211A99810449FA13B17C26F3D7D1215A2480A13A (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return maxViewDegrees; }
		float L_0 = __this->get_maxViewDegrees_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxViewDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MaxViewDegrees_m871966DD755FA64C20AD3F27AA898AF27AB4D740 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maxViewDegrees = value; }
		float L_0 = ___value0;
		__this->set_maxViewDegrees_17(L_0);
		// set { maxViewDegrees = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_AspectV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_AspectV_m919C307DFC8F49ABBB3195A7E4AEC1CABB5FA832 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return aspectV; }
		float L_0 = __this->get_aspectV_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_AspectV(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_AspectV_m4B84F8A48FEE39A780EA8245A6771FEF381727E8 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { aspectV = value; }
		float L_0 = ___value0;
		__this->set_aspectV_18(L_0);
		// set { aspectV = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreAngleClamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreAngleClamp_m40BC53039720DF648E9ABCD0468F938F8EBE4851 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return ignoreAngleClamp; }
		bool L_0 = __this->get_ignoreAngleClamp_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreAngleClamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_IgnoreAngleClamp_m04D78425E711FEFDE20081B4240D4AC1F8BACF27 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { ignoreAngleClamp = value; }
		bool L_0 = ___value0;
		__this->set_ignoreAngleClamp_19(L_0);
		// set { ignoreAngleClamp = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreDistanceClamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreDistanceClamp_m7B291162C023A000D9C726843E831BD84B2210CF (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return ignoreDistanceClamp; }
		bool L_0 = __this->get_ignoreDistanceClamp_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreDistanceClamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_IgnoreDistanceClamp_mB95A58324CBD3C7D63DC64F587E598EB9E1101D6 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { ignoreDistanceClamp = value; }
		bool L_0 = ___value0;
		__this->set_ignoreDistanceClamp_20(L_0);
		// set { ignoreDistanceClamp = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UseFixedVerticalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mA864E4BF679B99A5647735F51FB7461327933676 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return useFixedVerticalPosition; }
		bool L_0 = __this->get_useFixedVerticalPosition_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_UseFixedVerticalPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_UseFixedVerticalPosition_m0A34DDA54E198E8234FAF482F316F16D9E93D4B2 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { useFixedVerticalPosition = value; }
		bool L_0 = ___value0;
		__this->set_useFixedVerticalPosition_21(L_0);
		// set { useFixedVerticalPosition = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_FixedVerticalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m1FFA0DF35264BB90BE99AB4C90C4FFF532BA5846 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return fixedVerticalPosition; }
		float L_0 = __this->get_fixedVerticalPosition_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_FixedVerticalPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_FixedVerticalPosition_m8B1D9E9DF51B5E452FCD6BFF5169A5560517C238 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { fixedVerticalPosition = value; }
		float L_0 = ___value0;
		__this->set_fixedVerticalPosition_22(L_0);
		// set { fixedVerticalPosition = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_OrientToReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_OrientToReferenceDirection_mA97F3877D39C63E0B057BBB2B2495146352E3ACE (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return orientToReferenceDirection; }
		bool L_0 = __this->get_orientToReferenceDirection_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_OrientToReferenceDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_OrientToReferenceDirection_m0A251511988E9682461411519864F57562A8E2D8 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { orientToReferenceDirection = value; }
		bool L_0 = ___value0;
		__this->set_orientToReferenceDirection_23(L_0);
		// set { orientToReferenceDirection = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_mDBDAF39D8AE51E80779CB81C7FF8ACB6C7FBF7A5 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_SolverReferenceDirection_mDBDAF39D8AE51E80779CB81C7FF8ACB6C7FBF7A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 SolverReferenceDirection => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.forward : Vector3.forward;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		return L_3;
	}

IL_0019:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_mC3FD9991B8047CC27A133B04EA08ECB3F906ABE0 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_UpReference_mC3FD9991B8047CC27A133B04EA08ECB3F906ABE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// Vector3 upReference = Vector3.up;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (referenceDirection == RadialViewReferenceDirection.ObjectOriented)
		int32_t L_1 = __this->get_referenceDirection_13();
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		// upReference = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.up : Vector3.up;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B4_0 = L_5;
		goto IL_0038;
	}

IL_0028:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_6 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_7, /*hidden argument*/NULL);
		G_B4_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B4_0;
	}

IL_0039:
	{
		// return upReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 ReferencePoint => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_3;
	}

IL_0019:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_SolverUpdate_m490BEF73803649A803AF4F47BF791BC5432416F1 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_SolverUpdate_m490BEF73803649A803AF4F47BF791BC5432416F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// Vector3 goalPosition = WorkingPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_m984DF97DAF9E18DB1E2A8795531BB1737419057D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (ignoreAngleClamp)
		bool L_1 = __this->get_ignoreAngleClamp_19();
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// if (ignoreDistanceClamp)
		bool L_2 = __this->get_ignoreDistanceClamp_20();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// goalPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// }
		goto IL_0037;
	}

IL_0025:
	{
		// GetDesiredOrientation_DistanceOnly(ref goalPosition);
		RadialView_GetDesiredOrientation_DistanceOnly_mF40147CDB106D6C1D6B49FFD69B8A2BFB6237FA2(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		// }
		goto IL_0037;
	}

IL_002f:
	{
		// GetDesiredOrientation(ref goalPosition);
		RadialView_GetDesiredOrientation_m3370EEC78DB342C439D5B637969D51BB0EA62911(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
	}

IL_0037:
	{
		// Vector3 refDirUp = UpReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = RadialView_get_UpReference_mC3FD9991B8047CC27A133B04EA08ECB3F906ABE0(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (orientToReferenceDirection)
		bool L_6 = __this->get_orientToReferenceDirection_23();
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// goalRotation = Quaternion.LookRotation(SolverReferenceDirection, refDirUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = RadialView_get_SolverReferenceDirection_mDBDAF39D8AE51E80779CB81C7FF8ACB6C7FBF7A5(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// }
		goto IL_0068;
	}

IL_0055:
	{
		// goalRotation = Quaternion.LookRotation(goalPosition - ReferencePoint, refDirUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_10, L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
	}

IL_0068:
	{
		// if (referenceDirection == RadialViewReferenceDirection.GravityAligned)
		int32_t L_15 = __this->get_referenceDirection_13();
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_0087;
		}
	}
	{
		// goalRotation.x = goalRotation.z = 0f;
		float L_16 = (0.0f);
		V_3 = L_16;
		(&V_2)->set_z_2(L_16);
		float L_17 = V_3;
		(&V_2)->set_x_0(L_17);
	}

IL_0087:
	{
		// if (UseFixedVerticalPosition)
		bool L_18 = RadialView_get_UseFixedVerticalPosition_mA864E4BF679B99A5647735F51FB7461327933676_inline(__this, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a8;
		}
	}
	{
		// goalPosition.y = ReferencePoint.y + FixedVerticalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310(__this, /*hidden argument*/NULL);
		float L_20 = L_19.get_y_3();
		float L_21 = RadialView_get_FixedVerticalPosition_m1FFA0DF35264BB90BE99AB4C90C4FFF532BA5846_inline(__this, /*hidden argument*/NULL);
		(&V_0)->set_y_3(((float)il2cpp_codegen_add((float)L_20, (float)L_21)));
	}

IL_00a8:
	{
		// GoalPosition = goalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_0;
		Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475(__this, L_22, /*hidden argument*/NULL);
		// GoalRotation = goalRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = V_2;
		Solver_set_GoalRotation_mEC8C53FC1EB7D66765ECA104FB7EF3956405FCA2(__this, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_mF40147CDB106D6C1D6B49FFD69B8A2BFB6237FA2 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_DistanceOnly_mF40147CDB106D6C1D6B49FFD69B8A2BFB6237FA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Vector3 refPoint = ReferencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 elementPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		// Vector3 elementDelta = elementPoint - refPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// float elementDist = elementDelta.magnitude;
		float L_5 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_5;
		// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
		float L_6 = V_2;
		if ((((float)L_6) > ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_7;
		goto IL_0037;
	}

IL_0030:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_1;
		float L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_8, L_9, /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0037:
	{
		V_3 = G_B3_0;
		// float clampedDistance = Mathf.Clamp(elementDist, minDistance, maxDistance);
		float L_11 = V_2;
		float L_12 = __this->get_minDistance_14();
		float L_13 = __this->get_maxDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_14 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_11, L_12, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		// if (!clampedDistance.Equals(elementDist))
		float L_15 = V_2;
		bool L_16 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_4), L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_006a;
		}
	}
	{
		// desiredPos = refPoint + clampedDistance * elementDir;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_17 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		float L_19 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_19, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_18, L_21, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_17 = L_22;
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_m3370EEC78DB342C439D5B637969D51BB0EA62911 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_m3370EEC78DB342C439D5B637969D51BB0EA62911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	{
		// Vector3 direction = SolverReferenceDirection;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_SolverReferenceDirection_mDBDAF39D8AE51E80779CB81C7FF8ACB6C7FBF7A5(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 upDirection = UpReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = RadialView_get_UpReference_mC3FD9991B8047CC27A133B04EA08ECB3F906ABE0(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// Vector3 referencePoint = ReferencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		// Vector3 elementPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		// Vector3 elementDelta = elementPoint - referencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		// float elementDist = elementDelta.magnitude;
		float L_7 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_7;
		// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
		float L_8 = V_4;
		if ((((float)L_8) > ((float)(0.0f))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_9;
		goto IL_0048;
	}

IL_0040:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_3;
		float L_11 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_10, L_11, /*hidden argument*/NULL);
		G_B3_0 = L_12;
	}

IL_0048:
	{
		V_5 = G_B3_0;
		// Vector3 perpendicularDirection = (elementDir - direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_14, /*hidden argument*/NULL);
		V_6 = L_15;
		// perpendicularDirection -= direction * Vector3.Dot(perpendicularDirection, direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		float L_20 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_18, L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_17, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_16, L_21, /*hidden argument*/NULL);
		V_6 = L_22;
		// perpendicularDirection.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_6), /*hidden argument*/NULL);
		// float heightToViewAngle = Vector3.Angle(perpendicularDirection, upDirection);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_1;
		float L_25 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_23, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		// float verticalAspectScale = Mathf.Lerp(aspectV, 1f, Mathf.Abs(Mathf.Sin(heightToViewAngle * Mathf.Deg2Rad)));
		float L_26 = __this->get_aspectV_18();
		float L_27 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_28 = sinf(((float)il2cpp_codegen_multiply((float)L_27, (float)(0.0174532924f))));
		float L_29 = fabsf(L_28);
		float L_30 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_26, (1.0f), L_29, /*hidden argument*/NULL);
		V_8 = L_30;
		// float currentAngle = Vector3.Angle(elementDir, direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_0;
		float L_33 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_31, L_32, /*hidden argument*/NULL);
		// float currentAngleClamped = Mathf.Clamp(currentAngle, minViewDegrees * verticalAspectScale, maxViewDegrees * verticalAspectScale);
		float L_34 = L_33;
		float L_35 = __this->get_minViewDegrees_16();
		float L_36 = V_8;
		float L_37 = __this->get_maxViewDegrees_17();
		float L_38 = V_8;
		float L_39 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_34, ((float)il2cpp_codegen_multiply((float)L_35, (float)L_36)), ((float)il2cpp_codegen_multiply((float)L_37, (float)L_38)), /*hidden argument*/NULL);
		V_9 = L_39;
		// float clampedDistance = ignoreDistanceClamp ? elementDist : Mathf.Clamp(elementDist, minDistance, maxDistance);
		bool L_40 = __this->get_ignoreDistanceClamp_20();
		G_B4_0 = L_34;
		if (L_40)
		{
			G_B5_0 = L_34;
			goto IL_00df;
		}
	}
	{
		float L_41 = V_4;
		float L_42 = __this->get_minDistance_14();
		float L_43 = __this->get_maxDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_44 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_41, L_42, L_43, /*hidden argument*/NULL);
		G_B6_0 = L_44;
		G_B6_1 = G_B4_0;
		goto IL_00e1;
	}

IL_00df:
	{
		float L_45 = V_4;
		G_B6_0 = L_45;
		G_B6_1 = G_B5_0;
	}

IL_00e1:
	{
		V_10 = G_B6_0;
		// if (currentAngle != currentAngleClamped)
		float L_46 = V_9;
		if ((((float)G_B6_1) == ((float)L_46)))
		{
			goto IL_0125;
		}
	}
	{
		// float angRad = currentAngleClamped * Mathf.Deg2Rad;
		float L_47 = V_9;
		V_11 = ((float)il2cpp_codegen_multiply((float)L_47, (float)(0.0174532924f)));
		// desiredPos = referencePoint + clampedDistance * (direction * Mathf.Cos(angRad) + perpendicularDirection * Mathf.Sin(angRad));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_48 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = V_2;
		float L_50 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = V_0;
		float L_52 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_53 = cosf(L_52);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_51, L_53, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = V_6;
		float L_56 = V_11;
		float L_57 = sinf(L_56);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_55, L_57, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_54, L_58, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_50, L_59, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_49, L_60, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_48 = L_61;
		// }
		return;
	}

IL_0125:
	{
		// else if (!clampedDistance.Equals(elementDist))
		float L_62 = V_4;
		bool L_63 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_10), L_62, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_0145;
		}
	}
	{
		// desiredPos = referencePoint + clampedDistance * elementDir;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_64 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = V_2;
		float L_66 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_66, L_67, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_65, L_68, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_64 = L_69;
	}

IL_0145:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView__ctor_mC45D4EEDF72C1C14CCA80161D824690080A9E8D0 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// private RadialViewReferenceDirection referenceDirection = RadialViewReferenceDirection.FacingWorldUp;
		__this->set_referenceDirection_13(1);
		// private float minDistance = 1f;
		__this->set_minDistance_14((1.0f));
		// private float maxDistance = 2f;
		__this->set_maxDistance_15((2.0f));
		// private float maxViewDegrees = 30f;
		__this->set_maxViewDegrees_17((30.0f));
		// private float aspectV = 1f;
		__this->set_aspectV_18((1.0f));
		// private float fixedVerticalPosition = -0.4f;
		__this->set_fixedVerticalPosition_22((-0.4f));
		Solver__ctor_mAF66923F2EB0C229B5ED3B2A1807B0500D9776D4(__this, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_UpdateLinkedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver_get_UpdateLinkedTransform_m0CB44B96E20FE912B2784B00DC4B5D028B15639B (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// get => updateLinkedTransform;
		bool L_0 = __this->get_updateLinkedTransform_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_UpdateLinkedTransform(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_UpdateLinkedTransform_mA7F1975E06F3B84887E8452C99F1565430F29058 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateLinkedTransform = value;
		bool L_0 = ___value0;
		__this->set_updateLinkedTransform_4(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_MoveLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_MoveLerpTime_m4B00B50ADDA517FED28941B9C532A8BFD26E1DCE (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// get => moveLerpTime;
		float L_0 = __this->get_moveLerpTime_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_MoveLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_MoveLerpTime_m45AEDD9CF59DE8C57A41AA44E8B10DBDCFB84A87 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => moveLerpTime = value;
		float L_0 = ___value0;
		__this->set_moveLerpTime_5(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_RotateLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_RotateLerpTime_mC1BB5FDA429AAEC0C3E57E41364609191B82D710 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// get => rotateLerpTime;
		float L_0 = __this->get_rotateLerpTime_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_RotateLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_RotateLerpTime_m4EF9E4D0313A99DEE24DAF3AF645B60CEE07238A (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => rotateLerpTime = value;
		float L_0 = ___value0;
		__this->set_rotateLerpTime_6(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_ScaleLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_ScaleLerpTime_m9A2A30D396F0E539FEC892D27202F1F16B799D9B (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// get => scaleLerpTime;
		float L_0 = __this->get_scaleLerpTime_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_ScaleLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_ScaleLerpTime_mE18C9C4DC6711FF530DEA046AE96A7CC4506FA0F (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => scaleLerpTime = value;
		float L_0 = ___value0;
		__this->set_scaleLerpTime_7(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_Smoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver_get_Smoothing_m64725350F5C085E471C6AAB60C5B460D766D1C11 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// get => smoothing;
		bool L_0 = __this->get_smoothing_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_Smoothing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_Smoothing_m7331622FB06940CCCD6E520FABB9915469384898 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => smoothing = value;
		bool L_0 = ___value0;
		__this->set_smoothing_9(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// get { return SolverHandler.GoalPosition; }
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SolverHandler_get_GoalPosition_mBC993B50E8189431844A276EF16B7AE97A518E8A_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalPosition = value; }
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalPosition_m8191CFD21D920E1C6486207A7F9E38F2E4C42ABF_inline(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalPosition = value; }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// get { return SolverHandler.GoalRotation; }
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = SolverHandler_get_GoalRotation_m81A56576A3666F6A39912235A4686585AAD73F70_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_mEC8C53FC1EB7D66765ECA104FB7EF3956405FCA2 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalRotation = value; }
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalRotation_m90213F18EDA1F56994EDF65A0D24EB4499432BF1_inline(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalRotation = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// get { return SolverHandler.GoalScale; }
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SolverHandler_get_GoalScale_m832C11F620D6F80FC85284CDB619EAC97F53A871_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalScale_m293394193E7CDFE066A1E84A1862C1827DE21A1D (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalScale = value; }
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalScale_mA7524961D7EFD428ADD4B542492855C98ACFC763_inline(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalScale = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_m984DF97DAF9E18DB1E2A8795531BB1737419057D (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// return updateLinkedTransform ? GoalPosition : transform.position;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_mA23A6936ECEF3D444561229782679516AA9A2074 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// GoalPosition = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0010:
	{
		// transform.position = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___value0;
		NullCheck(L_2);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_mA0DF75FE07A2305CD0CEDC66F419DB84CD4D687E (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// return updateLinkedTransform ? GoalRotation : transform.rotation;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED(__this, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_mCC5D73C3CA4A511BB55F28D607AA0C44D2E6F4EC (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// GoalRotation = value;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___value0;
		Solver_set_GoalRotation_mEC8C53FC1EB7D66765ECA104FB7EF3956405FCA2(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0010:
	{
		// transform.rotation = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___value0;
		NullCheck(L_2);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_m030D3A7E8F7ACC13A26D6DD5D6163C8B9CF37A13 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// return updateLinkedTransform ? GoalScale : transform.localScale;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47(__this, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_mF1CF3C2658C4C3EDD20FA7EC3B8B7A3867701DF3 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// GoalScale = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		Solver_set_GoalScale_m293394193E7CDFE066A1E84A1862C1827DE21A1D(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0010:
	{
		// transform.localScale = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___value0;
		NullCheck(L_2);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Awake_m11CF4F0E14151A62E033BF1942BF7D2ECA3CE4CC (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_Awake_m11CF4F0E14151A62E033BF1942BF7D2ECA3CE4CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B7_0 = NULL;
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B6_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B8_1 = NULL;
	{
		// if (SolverHandler == null)
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// SolverHandler = GetComponent<SolverHandler>();
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = Component_GetComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mAFEA8C8850333AF32E380E9F11A4ABAE304879DB(__this, /*hidden argument*/Component_GetComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mAFEA8C8850333AF32E380E9F11A4ABAE304879DB_RuntimeMethod_var);
		__this->set_SolverHandler_12(L_2);
	}

IL_001a:
	{
		// if (updateLinkedTransform && SolverHandler == null)
		bool L_3 = __this->get_updateLinkedTransform_4();
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.LogError("No SolverHandler component found on " + name + " when UpdateLinkedTransform was set to true! Disabling UpdateLinkedTransform.");
		String_t* L_6 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B, L_6, _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_7, /*hidden argument*/NULL);
		// updateLinkedTransform = false;
		__this->set_updateLinkedTransform_4((bool)0);
	}

IL_0051:
	{
		// GoalScale = maintainScale ? transform.localScale : Vector3.one;
		bool L_8 = __this->get_maintainScale_8();
		G_B6_0 = __this;
		if (L_8)
		{
			G_B7_0 = __this;
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B8_0 = L_9;
		G_B8_1 = G_B6_0;
		goto IL_006c;
	}

IL_0061:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_10, /*hidden argument*/NULL);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_0;
	}

IL_006c:
	{
		NullCheck(G_B8_1);
		Solver_set_GoalScale_m293394193E7CDFE066A1E84A1862C1827DE21A1D(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnEnable_m30C8ADF771E48AFB08DAD8D71A24480D5EAFF6BC (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnEnable_m30C8ADF771E48AFB08DAD8D71A24480D5EAFF6BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler != null)
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// SnapGoalTo(GoalPosition, GoalRotation, GoalScale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47(__this, /*hidden argument*/NULL);
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_2, L_3, L_4);
	}

IL_0026:
	{
		// currentLifetime = 0;
		__this->set_currentLifetime_11((0.0f));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Start_m28612BA96CF6F0F52207675F6264069B661D83AE (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_Start_m28612BA96CF6F0F52207675F6264069B661D83AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler != null)
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// SolverHandler.RegisterSolver(this);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = __this->get_SolverHandler_12();
		NullCheck(L_2);
		SolverHandler_RegisterSolver_mCC7F39632346EDC3564F5D04424A433345374B0A(L_2, __this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnDestroy_m6B809F3BBCC918C28B611E15E2C3AD513DD646E0 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnDestroy_m6B809F3BBCC918C28B611E15E2C3AD513DD646E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler != null)
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// SolverHandler.UnregisterSolver(this);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = __this->get_SolverHandler_12();
		NullCheck(L_2);
		SolverHandler_UnregisterSolver_m1011B5AEBA231BD826554AA2F9282A4717D533F6(L_2, __this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdateEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_m60AA706BBA85DAF728640F884F86E230EF4A96F4 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// currentLifetime += SolverHandler.DeltaTime;
		float L_0 = __this->get_currentLifetime_11();
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_1 = __this->get_SolverHandler_12();
		NullCheck(L_1);
		float L_2 = SolverHandler_get_DeltaTime_mCDF9AC407AEDEB61DCE17B756E70A9A11C1BC779_inline(L_1, /*hidden argument*/NULL);
		__this->set_currentLifetime_11(((float)il2cpp_codegen_add((float)L_0, (float)L_2)));
		// if (lifetime > 0 && currentLifetime >= lifetime)
		float L_3 = __this->get_lifetime_10();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		float L_4 = __this->get_currentLifetime_11();
		float L_5 = __this->get_lifetime_10();
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_003b:
	{
		// SolverUpdate();
		VirtActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdate() */, __this);
		// UpdateWorkingToGoal();
		Solver_UpdateWorkingToGoal_mEA4964B576B11AE92ABAFC4E9D57494B6BF08A7E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapTo_m141A40A3F00A721C19297C9E5342E3FC7AEDC553 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	{
		// SnapGoalTo(position, rotation, scale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_0, L_1, L_2);
		// WorkingPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___position0;
		Solver_set_WorkingPosition_mA23A6936ECEF3D444561229782679516AA9A2074(__this, L_3, /*hidden argument*/NULL);
		// WorkingRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___rotation1;
		Solver_set_WorkingRotation_mCC5D73C3CA4A511BB55F28D607AA0C44D2E6F4EC(__this, L_4, /*hidden argument*/NULL);
		// WorkingScale = scale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___scale2;
		Solver_set_WorkingScale_mF1CF3C2658C4C3EDD20FA7EC3B8B7A3867701DF3(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_mB67552AB69E3B7579781E1FA8C8B4192D29D3CB5 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	{
		// GoalPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Solver_set_GoalRotation_mEC8C53FC1EB7D66765ECA104FB7EF3956405FCA2(__this, L_1, /*hidden argument*/NULL);
		// GoalScale = scale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		Solver_set_GoalScale_m293394193E7CDFE066A1E84A1862C1827DE21A1D(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapTo_mF962946960ED836476171AA92AA8089970696478 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		// SnapGoalTo(position, rotation);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		VirtActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_0, L_1);
		// WorkingPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___position0;
		Solver_set_WorkingPosition_mA23A6936ECEF3D444561229782679516AA9A2074(__this, L_2, /*hidden argument*/NULL);
		// WorkingRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___rotation1;
		Solver_set_WorkingRotation_mCC5D73C3CA4A511BB55F28D607AA0C44D2E6F4EC(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_m388015A98DE2C84845976F423E1BDA9508DEA112 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		// GoalPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Solver_set_GoalRotation_mEC8C53FC1EB7D66765ECA104FB7EF3956405FCA2(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::AddOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_AddOffset_m5A7DBD0F581E115D6B2F5D5CAAB8DBE40FBA4849 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_AddOffset_m5A7DBD0F581E115D6B2F5D5CAAB8DBE40FBA4849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoalPosition += offset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___offset0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_0, L_1, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_mE7A293C5250C082C250F52949E303E051951A46D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_mE7A293C5250C082C250F52949E303E051951A46D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return Vector3.Lerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___source0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_mE3B979FCC06C6AF64EA978E9B04E5563E73FEF2D (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_mE3B979FCC06C6AF64EA978E9B04E5563E73FEF2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return Quaternion.Slerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___source0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateTransformToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateTransformToGoal_mD1B900229FEF362C75A01490A11B7CBD2560FFDD (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (smoothing)
		bool L_0 = __this->get_smoothing_9();
		if (!L_0)
		{
			goto IL_00ae;
		}
	}
	{
		// Vector3 pos = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Quaternion rot = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// Vector3 scale = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// pos = SmoothTo(pos, GoalPosition, SolverHandler.DeltaTime, moveLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_9 = __this->get_SolverHandler_12();
		NullCheck(L_9);
		float L_10 = SolverHandler_get_DeltaTime_mCDF9AC407AEDEB61DCE17B756E70A9A11C1BC779_inline(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Solver_SmoothTo_mE7A293C5250C082C250F52949E303E051951A46D(L_7, L_8, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// rot = SmoothTo(rot, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_15 = __this->get_SolverHandler_12();
		NullCheck(L_15);
		float L_16 = SolverHandler_get_DeltaTime_mCDF9AC407AEDEB61DCE17B756E70A9A11C1BC779_inline(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = Solver_SmoothTo_mE3B979FCC06C6AF64EA978E9B04E5563E73FEF2D(L_13, L_14, L_16, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// scale = SmoothTo(scale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_21 = __this->get_SolverHandler_12();
		NullCheck(L_21);
		float L_22 = SolverHandler_get_DeltaTime_mCDF9AC407AEDEB61DCE17B756E70A9A11C1BC779_inline(L_21, /*hidden argument*/NULL);
		float L_23 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Solver_SmoothTo_mE7A293C5250C082C250F52949E303E051951A46D(L_19, L_20, L_22, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		// transform.position = pos;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_0;
		NullCheck(L_25);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_25, L_26, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = V_1;
		NullCheck(L_27);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_27, L_28, /*hidden argument*/NULL);
		// transform.localScale = scale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_2;
		NullCheck(L_29);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_29, L_30, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ae:
	{
		// transform.position = GoalPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_31, L_32, /*hidden argument*/NULL);
		// transform.rotation = GoalRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_34 = Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_33, L_34, /*hidden argument*/NULL);
		// transform.localScale = GoalScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_35, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_mEA4964B576B11AE92ABAFC4E9D57494B6BF08A7E (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_m0877CE338F66AE7354E42FA94DBFD4FD78D61466(__this, /*hidden argument*/NULL);
		// UpdateWorkingRotationToGoal();
		Solver_UpdateWorkingRotationToGoal_m1E3618AD1B1738342BF68F058024DAF97D8F437D(__this, /*hidden argument*/NULL);
		// UpdateWorkingScaleToGoal();
		Solver_UpdateWorkingScaleToGoal_mB33E5B386F523A8B77EC655FDDD824C485AFA1E1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m0877CE338F66AE7354E42FA94DBFD4FD78D61466 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B2_0 = NULL;
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B3_1 = NULL;
	{
		// WorkingPosition = smoothing ? SmoothTo(WorkingPosition, GoalPosition, SolverHandler.DeltaTime, moveLerpTime) : GoalPosition;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingPosition_m984DF97DAF9E18DB1E2A8795531BB1737419057D(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_mCDF9AC407AEDEB61DCE17B756E70A9A11C1BC779_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_mE7A293C5250C082C250F52949E303E051951A46D(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingPosition_mA23A6936ECEF3D444561229782679516AA9A2074(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_m1E3618AD1B1738342BF68F058024DAF97D8F437D (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B2_0 = NULL;
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B1_0 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B3_1 = NULL;
	{
		// WorkingRotation = smoothing ? SmoothTo(WorkingRotation, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime) : GoalRotation;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Solver_get_WorkingRotation_mA0DF75FE07A2305CD0CEDC66F419DB84CD4D687E(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_mCDF9AC407AEDEB61DCE17B756E70A9A11C1BC779_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Solver_SmoothTo_mE3B979FCC06C6AF64EA978E9B04E5563E73FEF2D(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingRotation_mCC5D73C3CA4A511BB55F28D607AA0C44D2E6F4EC(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_mB33E5B386F523A8B77EC655FDDD824C485AFA1E1 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B2_0 = NULL;
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B3_1 = NULL;
	{
		// WorkingScale = smoothing ? SmoothTo(WorkingScale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime) : GoalScale;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingScale_m030D3A7E8F7ACC13A26D6DD5D6163C8B9CF37A13(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_mCDF9AC407AEDEB61DCE17B756E70A9A11C1BC779_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_mE7A293C5250C082C250F52949E303E051951A46D(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingScale_mF1CF3C2658C4C3EDD20FA7EC3B8B7A3867701DF3(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver__ctor_mAF66923F2EB0C229B5ED3B2A1807B0500D9776D4 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		// private float moveLerpTime = 0.1f;
		__this->set_moveLerpTime_5((0.1f));
		// private float rotateLerpTime = 0.1f;
		__this->set_rotateLerpTime_6((0.1f));
		// private bool maintainScale = true;
		__this->set_maintainScale_8((bool)1);
		// private bool smoothing = true;
		__this->set_smoothing_9((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedTargetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_mF7E623A4E1DA27883BD2050C120E1EBC74486721 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (trackedTargetType != value && IsValidTrackedObjectType(value))
		int32_t L_0 = __this->get_trackedTargetType_4();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___value0;
		bool L_3 = SolverHandler_IsValidTrackedObjectType_m8D02055DBEDB94460C2F425579D2CC88A5CF1253(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// trackedTargetType = value;
		int32_t L_4 = ___value0;
		__this->set_trackedTargetType_4(L_4);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m2CB65E180E979ED0BDE8FF455A7B788806D9A133(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_mDBDFCC53139248895EACD23DAC0CECF413395240 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandness;
		uint8_t L_0 = __this->get_trackedHandness_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandness_m503253A279D833E1905B0B6ED2D32E3147AB11D3 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// if (trackedHandness != value && IsValidHandedness(value))
		uint8_t L_0 = __this->get_trackedHandness_5();
		uint8_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		uint8_t L_2 = ___value0;
		bool L_3 = SolverHandler_IsValidHandedness_mA04F47A8ACC359F0511F29647BF2C2C6B6FCC8A8(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// trackedHandness = value;
		uint8_t L_4 = ___value0;
		__this->set_trackedHandness_5(L_4);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m2CB65E180E979ED0BDE8FF455A7B788806D9A133(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandJoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m8B1E21E12B5443D96F237F51E02EEBBA6FCEC314 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandJoint;
		int32_t L_0 = __this->get_trackedHandJoint_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandJoint_m42F511CB6AB143D787016D6C710425E9814D0661 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (trackedHandJoint != value)
		int32_t L_0 = __this->get_trackedHandJoint_6();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// trackedHandJoint = value;
		int32_t L_2 = ___value0;
		__this->set_trackedHandJoint_6(L_2);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m2CB65E180E979ED0BDE8FF455A7B788806D9A133(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TransformOverride(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TransformOverride_mA3A8090C85974D6349D759CD8582BA53C57F7B29 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_TransformOverride_mA3A8090C85974D6349D759CD8582BA53C57F7B29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != null && transformOverride != value)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_transformOverride_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// transformOverride = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___value0;
		__this->set_transformOverride_7(L_5);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m2CB65E180E979ED0BDE8FF455A7B788806D9A133(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_mE9EF9A4AB0F79696FF5E1CF40FC9D2FFFB37C46A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => additionalOffset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalOffset_m597B9888235D89213C575E748D4150E19D7986FB (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_AdditionalOffset_m597B9888235D89213C575E748D4150E19D7986FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (additionalOffset != value)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// additionalOffset = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___value0;
		__this->set_additionalOffset_8(L_3);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m2CB65E180E979ED0BDE8FF455A7B788806D9A133(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_m688CF9BFD91713E05AC1F12E0E53F994BF972060 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => additionalRotation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalRotation_m79A6E7368CD33D600CA0FF4F8C18FF3351F38983 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_AdditionalRotation_m79A6E7368CD33D600CA0FF4F8C18FF3351F38983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (additionalRotation != value)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// additionalRotation = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___value0;
		__this->set_additionalRotation_9(L_3);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m2CB65E180E979ED0BDE8FF455A7B788806D9A133(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m6275BB399C9173BC8DA81FD5A82EE235996DB490 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => updateSolvers;
		bool L_0 = __this->get_updateSolvers_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m71627901924EA3C2FA3F88E1346D5B6C96CE4BC9 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateSolvers = value;
		bool L_0 = ___value0;
		__this->set_updateSolvers_10(L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_Solvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_mD9532AEA70FDA70708F58F43A13D6C9C5F18C32E (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_Solvers_mD9532AEA70FDA70708F58F43A13D6C9C5F18C32E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => solvers.AsReadOnly();
		List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * L_0 = __this->get_solvers_11();
		NullCheck(L_0);
		ReadOnlyCollection_1_t6520265CBC8C7015FFEDC9384425CE41559F3B47 * L_1 = List_1_AsReadOnly_mD4205B7AF2036EBF7895B5DA2A739A0C53F749A9(L_0, /*hidden argument*/List_1_AsReadOnly_mD4205B7AF2036EBF7895B5DA2A739A0C53F749A9_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_m4D056BA507C7FAAE150D5F0231D3FD96B6963120 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_Solvers_m4D056BA507C7FAAE150D5F0231D3FD96B6963120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != null)
		RuntimeObject* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// solvers.Clear();
		List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * L_1 = __this->get_solvers_11();
		NullCheck(L_1);
		List_1_Clear_m8A3CE552C8FF45E35C16DF3F5391FAF0CC2D44A6(L_1, /*hidden argument*/List_1_Clear_m8A3CE552C8FF45E35C16DF3F5391FAF0CC2D44A6_RuntimeMethod_var);
		// solvers.AddRange(value);
		List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * L_2 = __this->get_solvers_11();
		RuntimeObject* L_3 = ___value0;
		NullCheck(L_2);
		List_1_AddRange_m924B454743565B7F44C195523B6F6C7A3D5F63D7(L_2, L_3, /*hidden argument*/List_1_AddRange_m924B454743565B7F44C195523B6F6C7A3D5F63D7_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_mBC993B50E8189431844A276EF16B7AE97A518E8A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalPositionU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m8191CFD21D920E1C6486207A7F9E38F2E4C42ABF (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalPositionU3Ek__BackingField_13(L_0);
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_m81A56576A3666F6A39912235A4686585AAD73F70 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CGoalRotationU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m90213F18EDA1F56994EDF65A0D24EB4499432BF1 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CGoalRotationU3Ek__BackingField_14(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_m832C11F620D6F80FC85284CDB619EAC97F53A871 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalScaleU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_mA7524961D7EFD428ADD4B542492855C98ACFC763 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalScaleU3Ek__BackingField_15(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  SolverHandler_get_AltScale_mF08002B58E90D39D9DD419BB48B9418E428666C2 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  L_0 = __this->get_U3CAltScaleU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_mD040B51407338017EA371B1EE7F4C9CD9E09C7FB (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  L_0 = ___value0;
		__this->set_U3CAltScaleU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_mCDF9AC407AEDEB61DCE17B756E70A9A11C1BC779 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->get_U3CDeltaTimeU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mDE2CC0770D2F1FA09D6775E68EDE0CE6EA8C9D47 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CDeltaTimeU3Ek__BackingField_17(L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsInvalidTracking())
		bool L_0 = SolverHandler_IsInvalidTracking_m9B28A63B5A57D72097B3B1CCEC8B21AA8033835E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m2CB65E180E979ED0BDE8FF455A7B788806D9A133(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// return trackingTarget != null ? trackingTarget.transform : null;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		return (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL;
	}

IL_001e:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_trackingTarget_20();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_CurrentTrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_CurrentTrackedHandedness_m70661B218AD90282C13F96F1D052C1177428B430 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness CurrentTrackedHandedness => currentTrackedHandedness;
		uint8_t L_0 = __this->get_currentTrackedHandedness_18();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_PreferredTrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => preferredTrackedHandedness;
		uint8_t L_0 = __this->get_preferredTrackedHandedness_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_PreferredTrackedHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_PreferredTrackedHandedness_mB296A36535A70B7226F76241673481C521DDE708 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// if ((value.IsLeft() || value.IsRight())
		//     && preferredTrackedHandedness != value)
		uint8_t L_0 = ___value0;
		bool L_1 = HandednessExtensions_IsLeft_m28C9129DD4ECEF74909F17D267DD9FF8C1AF8D77(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		uint8_t L_2 = ___value0;
		bool L_3 = HandednessExtensions_IsRight_m01817CB0F7FD9D25F2C63BB910892E84F0D8D89F(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		uint8_t L_4 = __this->get_preferredTrackedHandedness_19();
		uint8_t L_5 = ___value0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		// preferredTrackedHandedness = value;
		uint8_t L_6 = ___value0;
		__this->set_preferredTrackedHandedness_19(L_6);
	}

IL_0020:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * G_B3_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * G_B2_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * G_B4_1 = NULL;
	{
		// private IMixedRealityHandJointService HandJointService => handJointService ?? (handJointService = (CoreServices.InputSystem as IMixedRealityDataProviderAccess)?.GetDataProvider<IMixedRealityHandJointService>());
		RuntimeObject* L_0 = __this->get_handJointService_23();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B5_0 = L_1;
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityDataProviderAccess_t63F3E16981AF92E0A01138E618F95865C1185D1E_il2cpp_TypeInfo_var));
		G_B2_0 = L_3;
		G_B2_1 = __this;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = __this;
			goto IL_001c;
		}
	}
	{
		G_B4_0 = ((RuntimeObject*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_0022;
	}

IL_001c:
	{
		NullCheck(G_B3_0);
		RuntimeObject* L_4 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(IMixedRealityDataProviderAccess_GetDataProvider_TisIMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_mBF9ED268B7EF95DEE2D336BF7F1E63CC23D70424_RuntimeMethod_var, G_B3_0, (String_t*)NULL);
		G_B4_0 = L_4;
		G_B4_1 = G_B3_1;
	}

IL_0022:
	{
		RuntimeObject* L_5 = G_B4_0;
		V_0 = L_5;
		NullCheck(G_B4_1);
		G_B4_1->set_handJointService_23(L_5);
		RuntimeObject* L_6 = V_0;
		G_B5_0 = L_6;
	}

IL_002a:
	{
		return G_B5_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Awake_m996AD5DB5712A9AFADF5E32FDE753E676699A23A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_Awake_m996AD5DB5712A9AFADF5E32FDE753E676699A23A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoalScale = Vector3.one;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		SolverHandler_set_GoalScale_mA7524961D7EFD428ADD4B542492855C98ACFC763_inline(__this, L_0, /*hidden argument*/NULL);
		// AltScale = new Vector3Smoothed(Vector3.one, 0.1f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3Smoothed__ctor_m1A8EB083BA23821E0FCA03A1E12BD238FDE9043C((&L_2), L_1, (0.1f), /*hidden argument*/NULL);
		SolverHandler_set_AltScale_mD040B51407338017EA371B1EE7F4C9CD9E09C7FB_inline(__this, L_2, /*hidden argument*/NULL);
		// DeltaTime = Time.deltaTime;
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		SolverHandler_set_DeltaTime_mDE2CC0770D2F1FA09D6775E68EDE0CE6EA8C9D47_inline(__this, L_3, /*hidden argument*/NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_22(L_4);
		// if (!IsValidHandedness(trackedHandness))
		uint8_t L_5 = __this->get_trackedHandness_5();
		bool L_6 = SolverHandler_IsValidHandedness_mA04F47A8ACC359F0511F29647BF2C2C6B6FCC8A8(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		// Debug.LogError("Using invalid SolverHandler.TrackedHandness value. Defaulting to Handedness.Both");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral9586A1C5F0FF1B8004E10FC372266DBFEA002EFE, /*hidden argument*/NULL);
		// TrackedHandness = Handedness.Both;
		SolverHandler_set_TrackedHandness_m503253A279D833E1905B0B6ED2D32E3147AB11D3(__this, 3, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// if (!IsValidTrackedObjectType(trackedTargetType))
		int32_t L_7 = __this->get_trackedTargetType_4();
		bool L_8 = SolverHandler_IsValidTrackedObjectType_m8D02055DBEDB94460C2F425579D2CC88A5CF1253(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0072;
		}
	}
	{
		// Debug.LogError("Using Obsolete SolverHandler.TrackedTargetType. Defaulting to type Head");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralA5380AB232AE7FA9C64011F243B4FD1A1E094DB7, /*hidden argument*/NULL);
		// TrackedTargetType = TrackedObjectType.Head;
		SolverHandler_set_TrackedTargetType_mF7E623A4E1DA27883BD2050C120E1EBC74486721(__this, 0, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Start_mFE1BB462687ED3200A5B4513C1C7D84E96C17419 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m2CB65E180E979ED0BDE8FF455A7B788806D9A133(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Update_mDFCE1E3DF724C6D6E7232BE3AD1ED88483871986 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// if (IsInvalidTracking())
		bool L_0 = SolverHandler_IsInvalidTracking_m9B28A63B5A57D72097B3B1CCEC8B21AA8033835E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m2CB65E180E979ED0BDE8FF455A7B788806D9A133(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// DeltaTime = Time.realtimeSinceStartup - lastUpdateTime;
		float L_1 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_2 = __this->get_lastUpdateTime_22();
		SolverHandler_set_DeltaTime_mDE2CC0770D2F1FA09D6775E68EDE0CE6EA8C9D47_inline(__this, ((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)), /*hidden argument*/NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_3 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_22(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_LateUpdate_m4773D9DF6F248A4BE6E9CE7B52CE89974DAB6E2A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_LateUpdate_m4773D9DF6F248A4BE6E9CE7B52CE89974DAB6E2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	Solver_t45BC4457D52541691149931505197834E2BCC506 * V_2 = NULL;
	{
		// if (updateSolversList)
		bool L_0 = __this->get_updateSolversList_12();
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// IEnumerable<Solver> inspectorOrderedSolvers = GetComponents<Solver>().Intersect(solvers);
		SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* L_1 = Component_GetComponents_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m0708321043CD71138F4AD1E7213F1FF980080C9D(__this, /*hidden argument*/Component_GetComponents_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m0708321043CD71138F4AD1E7213F1FF980080C9D_RuntimeMethod_var);
		List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * L_2 = __this->get_solvers_11();
		RuntimeObject* L_3 = Enumerable_Intersect_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mAB7C2BF3B368BE5F7B2E0D55A4DFFF7F9B407438((RuntimeObject*)(RuntimeObject*)L_1, L_2, /*hidden argument*/Enumerable_Intersect_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mAB7C2BF3B368BE5F7B2E0D55A4DFFF7F9B407438_RuntimeMethod_var);
		V_0 = L_3;
		// Solvers = inspectorOrderedSolvers.Union(Solvers).ToReadOnlyCollection();
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5 = SolverHandler_get_Solvers_mD9532AEA70FDA70708F58F43A13D6C9C5F18C32E(__this, /*hidden argument*/NULL);
		RuntimeObject* L_6 = Enumerable_Union_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mD4DD2895AF940E38BC58CC0D94F8B525E2B2B45B(L_4, L_5, /*hidden argument*/Enumerable_Union_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mD4DD2895AF940E38BC58CC0D94F8B525E2B2B45B_RuntimeMethod_var);
		ReadOnlyCollection_1_t6520265CBC8C7015FFEDC9384425CE41559F3B47 * L_7 = CollectionsExtensions_ToReadOnlyCollection_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mE09F07BC920E2458475DC81B745593CB4E97CB40(L_6, /*hidden argument*/CollectionsExtensions_ToReadOnlyCollection_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mE09F07BC920E2458475DC81B745593CB4E97CB40_RuntimeMethod_var);
		SolverHandler_set_Solvers_m4D056BA507C7FAAE150D5F0231D3FD96B6963120(__this, L_7, /*hidden argument*/NULL);
		// updateSolversList = false;
		__this->set_updateSolversList_12((bool)0);
	}

IL_0038:
	{
		// if (UpdateSolvers)
		bool L_8 = SolverHandler_get_UpdateSolvers_m6275BB399C9173BC8DA81FD5A82EE235996DB490_inline(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00ad;
		}
	}
	{
		// GoalPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		SolverHandler_set_GoalPosition_m8191CFD21D920E1C6486207A7F9E38F2E4C42ABF_inline(__this, L_10, /*hidden argument*/NULL);
		// GoalRotation = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_11, /*hidden argument*/NULL);
		SolverHandler_set_GoalRotation_m90213F18EDA1F56994EDF65A0D24EB4499432BF1_inline(__this, L_12, /*hidden argument*/NULL);
		// GoalScale = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_13, /*hidden argument*/NULL);
		SolverHandler_set_GoalScale_mA7524961D7EFD428ADD4B542492855C98ACFC763_inline(__this, L_14, /*hidden argument*/NULL);
		// for (int i = 0; i < solvers.Count; ++i)
		V_1 = 0;
		goto IL_009f;
	}

IL_0077:
	{
		// Solver solver = solvers[i];
		List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * L_15 = __this->get_solvers_11();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_17 = List_1_get_Item_m92EB8CA52F5073B4BBAB7EA69C133AFA9A0B1D01_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m92EB8CA52F5073B4BBAB7EA69C133AFA9A0B1D01_RuntimeMethod_var);
		V_2 = L_17;
		// if (solver != null && solver.enabled)
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_18, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_009b;
		}
	}
	{
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_20 = V_2;
		NullCheck(L_20);
		bool L_21 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_009b;
		}
	}
	{
		// solver.SolverUpdateEntry();
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_22 = V_2;
		NullCheck(L_22);
		Solver_SolverUpdateEntry_m60AA706BBA85DAF728640F884F86E230EF4A96F4(L_22, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_009f:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_24 = V_1;
		List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * L_25 = __this->get_solvers_11();
		NullCheck(L_25);
		int32_t L_26 = List_1_get_Count_mC623C5D743DDEF11727604B50A34E8ED4D7E8CFB_inline(L_25, /*hidden argument*/List_1_get_Count_mC623C5D743DDEF11727604B50A34E8ED4D7E8CFB_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0077;
		}
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_OnDestroy_mA7BF614328FE4DA8E057110BF5579409CB766453 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// DetachFromCurrentTrackedObject();
		VirtActionInvoker0::Invoke(6 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_m2CB65E180E979ED0BDE8FF455A7B788806D9A133 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// DetachFromCurrentTrackedObject();
		VirtActionInvoker0::Invoke(6 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		// AttachToNewTrackedObject();
		VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_mCC7F39632346EDC3564F5D04424A433345374B0A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_RegisterSolver_mCC7F39632346EDC3564F5D04424A433345374B0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!solvers.Contains(solver))
		List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * L_0 = __this->get_solvers_11();
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_1 = ___solver0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m6C575683BD3DF941FCAFD151FFFA438DA48FDD8D(L_0, L_1, /*hidden argument*/List_1_Contains_m6C575683BD3DF941FCAFD151FFFA438DA48FDD8D_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// solvers.Add(solver);
		List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * L_3 = __this->get_solvers_11();
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_4 = ___solver0;
		NullCheck(L_3);
		List_1_Add_m254F872CE951C6A33A478F6DBF71FB90322F0DBA(L_3, L_4, /*hidden argument*/List_1_Add_m254F872CE951C6A33A478F6DBF71FB90322F0DBA_RuntimeMethod_var);
		// updateSolversList = true;
		__this->set_updateSolversList_12((bool)1);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_m1011B5AEBA231BD826554AA2F9282A4717D533F6 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_UnregisterSolver_m1011B5AEBA231BD826554AA2F9282A4717D533F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// solvers.Remove(solver);
		List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * L_0 = __this->get_solvers_11();
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_1 = ___solver0;
		NullCheck(L_0);
		List_1_Remove_mB18E8650B6A63BAF9FD00C2BA6DF5AD396522CE7(L_0, L_1, /*hidden argument*/List_1_Remove_mB18E8650B6A63BAF9FD00C2BA6DF5AD396522CE7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_DetachFromCurrentTrackedObject_m24F5A98D11439580531464DFACC1753B411DDF4A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_DetachFromCurrentTrackedObject_m24F5A98D11439580531464DFACC1753B411DDF4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackingTarget != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Destroy(trackingTarget);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
		// trackingTarget = null;
		__this->set_trackingTarget_20((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_AttachToNewTrackedObject_m78EE7F5D88CEFE1465A1FDD6EDC08F4DDE5AB6AF (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_AttachToNewTrackedObject_m78EE7F5D88CEFE1465A1FDD6EDC08F4DDE5AB6AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
		// controllerRay = null;
		__this->set_controllerRay_21((LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 *)NULL);
		// Transform target = null;
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL;
		// if (TrackedTargetType == TrackedObjectType.Head)
		int32_t L_0 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// target = CameraCache.Main.transform;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// }
		goto IL_017d;
	}

IL_0028:
	{
		// else if (TrackedTargetType == TrackedObjectType.ControllerRay)
		int32_t L_3 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_00d4;
		}
	}
	{
		// if (TrackedHandness == Handedness.Both)
		uint8_t L_4 = SolverHandler_get_TrackedHandness_mDBDFCC53139248895EACD23DAC0CECF413395240_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_008c;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness;
		uint8_t L_5 = SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_5);
		// controllerRay = PointerUtils.GetPointer<LinePointer>(currentTrackedHandedness);
		uint8_t L_6 = __this->get_currentTrackedHandedness_18();
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_7 = PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E(L_6, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E_RuntimeMethod_var);
		__this->set_controllerRay_21(L_7);
		// if (controllerRay == null)
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_8 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00a9;
		}
	}
	{
		// currentTrackedHandedness = currentTrackedHandedness.GetOppositeHandedness();
		uint8_t L_10 = __this->get_currentTrackedHandedness_18();
		uint8_t L_11 = HandednessExtensions_GetOppositeHandedness_m352C35AC1E2A63E32DC1283CCA866209A2B657E3(L_10, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_11);
		// controllerRay = PointerUtils.GetPointer<LinePointer>(currentTrackedHandedness);
		uint8_t L_12 = __this->get_currentTrackedHandedness_18();
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_13 = PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E(L_12, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E_RuntimeMethod_var);
		__this->set_controllerRay_21(L_13);
		// }
		goto IL_00a9;
	}

IL_008c:
	{
		// currentTrackedHandedness = TrackedHandness;
		uint8_t L_14 = SolverHandler_get_TrackedHandness_mDBDFCC53139248895EACD23DAC0CECF413395240_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_14);
		// controllerRay = PointerUtils.GetPointer<LinePointer>(currentTrackedHandedness);
		uint8_t L_15 = __this->get_currentTrackedHandedness_18();
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_16 = PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E(L_15, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E_RuntimeMethod_var);
		__this->set_controllerRay_21(L_16);
	}

IL_00a9:
	{
		// if (controllerRay != null)
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_17 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00c8;
		}
	}
	{
		// target = controllerRay.transform;
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_19 = __this->get_controllerRay_21();
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		// }
		goto IL_017d;
	}

IL_00c8:
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
		// }
		goto IL_017d;
	}

IL_00d4:
	{
		// else if (TrackedTargetType == TrackedObjectType.HandJoint)
		int32_t L_21 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)6))))
		{
			goto IL_016d;
		}
	}
	{
		// if (HandJointService != null)
		RuntimeObject* L_22 = SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319(__this, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_017d;
		}
	}
	{
		// currentTrackedHandedness = TrackedHandness;
		uint8_t L_23 = SolverHandler_get_TrackedHandness_mDBDFCC53139248895EACD23DAC0CECF413395240_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_23);
		// if (currentTrackedHandedness == Handedness.Both)
		uint8_t L_24 = __this->get_currentTrackedHandedness_18();
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_0153;
		}
	}
	{
		// if (HandJointService.IsHandTracked(PreferredTrackedHandedness))
		RuntimeObject* L_25 = SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319(__this, /*hidden argument*/NULL);
		uint8_t L_26 = SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		bool L_27 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_il2cpp_TypeInfo_var, L_25, L_26);
		if (!L_27)
		{
			goto IL_0121;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness;
		uint8_t L_28 = SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_28);
		// }
		goto IL_0153;
	}

IL_0121:
	{
		// else if (HandJointService.IsHandTracked(PreferredTrackedHandedness.GetOppositeHandedness()))
		RuntimeObject* L_29 = SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319(__this, /*hidden argument*/NULL);
		uint8_t L_30 = SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B_inline(__this, /*hidden argument*/NULL);
		uint8_t L_31 = HandednessExtensions_GetOppositeHandedness_m352C35AC1E2A63E32DC1283CCA866209A2B657E3(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_32 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_il2cpp_TypeInfo_var, L_29, L_31);
		if (!L_32)
		{
			goto IL_014c;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness.GetOppositeHandedness();
		uint8_t L_33 = SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B_inline(__this, /*hidden argument*/NULL);
		uint8_t L_34 = HandednessExtensions_GetOppositeHandedness_m352C35AC1E2A63E32DC1283CCA866209A2B657E3(L_33, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_34);
		// }
		goto IL_0153;
	}

IL_014c:
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
	}

IL_0153:
	{
		// target = HandJointService.RequestJointTransform(this.TrackedHandJoint, currentTrackedHandedness);
		RuntimeObject* L_35 = SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319(__this, /*hidden argument*/NULL);
		int32_t L_36 = SolverHandler_get_TrackedHandJoint_m8B1E21E12B5443D96F237F51E02EEBBA6FCEC314_inline(__this, /*hidden argument*/NULL);
		uint8_t L_37 = __this->get_currentTrackedHandedness_18();
		NullCheck(L_35);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = InterfaceFuncInvoker2< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, int32_t, uint8_t >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::RequestJointTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_il2cpp_TypeInfo_var, L_35, L_36, L_37);
		V_0 = L_38;
		// }
		goto IL_017d;
	}

IL_016d:
	{
		// else if (TrackedTargetType == TrackedObjectType.CustomOverride)
		int32_t L_39 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)7))))
		{
			goto IL_017d;
		}
	}
	{
		// target = this.transformOverride;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = __this->get_transformOverride_7();
		V_0 = L_40;
	}

IL_017d:
	{
		// TrackTransform(target);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = V_0;
		SolverHandler_TrackTransform_m36871E4D6498D2DD8166CAB7E2B1354783617586(__this, L_41, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_m36871E4D6498D2DD8166CAB7E2B1354783617586 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_TrackTransform_m36871E4D6498D2DD8166CAB7E2B1354783617586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (trackingTarget != null || target == null) return;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		// if (trackingTarget != null || target == null) return;
		return;
	}

IL_0018:
	{
		// string name = string.Format("SolverHandler Target on {0} with offset {1}, {2}", target.gameObject.name, AdditionalOffset, AdditionalRotation);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___target0;
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = SolverHandler_get_AdditionalOffset_mE9EF9A4AB0F79696FF5E1CF40FC9D2FFFB37C46A_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = L_7;
		RuntimeObject * L_9 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = SolverHandler_get_AdditionalRotation_m688CF9BFD91713E05AC1F12E0E53F994BF972060_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = L_10;
		RuntimeObject * L_12 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral8604633F91A5364A570785AE4355317FF69CAA79, L_6, L_9, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// trackingTarget = new GameObject(name);
		String_t* L_14 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_15, L_14, /*hidden argument*/NULL);
		__this->set_trackingTarget_20(L_15);
		// trackingTarget.hideFlags = HideFlags.HideInHierarchy;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_trackingTarget_20();
		NullCheck(L_16);
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0(L_16, 1, /*hidden argument*/NULL);
		// trackingTarget.transform.parent = target;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_trackingTarget_20();
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_17, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = ___target0;
		NullCheck(L_18);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_18, L_19, /*hidden argument*/NULL);
		// trackingTarget.transform.localPosition = Vector3.Scale(AdditionalOffset, trackingTarget.transform.localScale);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = __this->get_trackingTarget_20();
		NullCheck(L_20);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = SolverHandler_get_AdditionalOffset_mE9EF9A4AB0F79696FF5E1CF40FC9D2FFFB37C46A_inline(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = __this->get_trackingTarget_20();
		NullCheck(L_23);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_22, L_25, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_21, L_26, /*hidden argument*/NULL);
		// trackingTarget.transform.localRotation = Quaternion.Euler(AdditionalRotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = __this->get_trackingTarget_20();
		NullCheck(L_27);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_27, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = SolverHandler_get_AdditionalRotation_m688CF9BFD91713E05AC1F12E0E53F994BF972060_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_28, L_30, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.LinePointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::GetControllerRay(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * SolverHandler_GetControllerRay_m1057B68613BE517B273D5785DB3BF12BD6223587 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_GetControllerRay_m1057B68613BE517B273D5785DB3BF12BD6223587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PointerUtils.GetPointer<LinePointer>(handedness);
		uint8_t L_0 = ___handedness0;
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_1 = PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E(L_0, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsInvalidTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m9B28A63B5A57D72097B3B1CCEC8B21AA8033835E (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_IsInvalidTracking_m9B28A63B5A57D72097B3B1CCEC8B21AA8033835E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (trackingTarget == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0010:
	{
		// if (TrackedTargetType == TrackedObjectType.ControllerRay &&
		//     (controllerRay == null || !controllerRay.IsTracked))
		int32_t L_2 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)5))))
		{
			goto IL_0036;
		}
	}
	{
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_3 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_5 = __this->get_controllerRay_21();
		NullCheck(L_5);
		bool L_6 = ControllerPoseSynchronizer_get_IsTracked_mFD1AB7FB750D5909E36B04D34E232AC566885EAC(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0036;
		}
	}

IL_0034:
	{
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (TrackedTargetType == TrackedObjectType.HandJoint && !currentTrackedHandedness.IsNone())
		int32_t L_7 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)6))))
		{
			goto IL_008c;
		}
	}
	{
		uint8_t L_8 = __this->get_currentTrackedHandedness_18();
		bool L_9 = HandednessExtensions_IsNone_mE6A5F6B086E41597305829036D5917749647DEEF(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_008c;
		}
	}
	{
		// bool trackingLeft = HandJointService.IsHandTracked(Handedness.Left);
		RuntimeObject* L_10 = SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_il2cpp_TypeInfo_var, L_10, 1);
		V_0 = L_11;
		// bool trackingRight = HandJointService.IsHandTracked(Handedness.Right);
		RuntimeObject* L_12 = SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_il2cpp_TypeInfo_var, L_12, 2);
		V_1 = L_13;
		// return (currentTrackedHandedness.IsLeft() && !trackingLeft) ||
		//        (currentTrackedHandedness.IsRight() && !trackingRight);
		uint8_t L_14 = __this->get_currentTrackedHandedness_18();
		bool L_15 = HandednessExtensions_IsLeft_m28C9129DD4ECEF74909F17D267DD9FF8C1AF8D77(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0076;
		}
	}
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_008a;
		}
	}

IL_0076:
	{
		uint8_t L_17 = __this->get_currentTrackedHandedness_18();
		bool L_18 = HandednessExtensions_IsRight_m01817CB0F7FD9D25F2C63BB910892E84F0D8D89F(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0088;
		}
	}
	{
		bool L_19 = V_1;
		return (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
	}

IL_0088:
	{
		return (bool)0;
	}

IL_008a:
	{
		return (bool)1;
	}

IL_008c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_mA04F47A8ACC359F0511F29647BF2C2C6B6FCC8A8 (uint8_t ___hand0, const RuntimeMethod* method)
{
	{
		// return hand <= Handedness.Both;
		uint8_t L_0 = ___hand0;
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m8D02055DBEDB94460C2F425579D2CC88A5CF1253 (int32_t ___type0, const RuntimeMethod* method)
{
	{
		// return type == TrackedObjectType.Head || type >= TrackedObjectType.ControllerRay;
		int32_t L_0 = ___type0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___type0;
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_000b:
	{
		return (bool)1;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedObjectToReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedObjectToReference_m254A2A149E43EE8C4945DA662092B53AE67C4707 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedObjectToReference(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedObjectToReference_m71854547B6B3562BABFF91E53B8B2BB60BE32C6F (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (trackedTargetType != value)
		int32_t L_0 = __this->get_trackedTargetType_4();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// trackedTargetType = value;
		int32_t L_2 = ___value0;
		__this->set_trackedTargetType_4(L_2);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m2CB65E180E979ED0BDE8FF455A7B788806D9A133(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler__ctor_mCCB2CFDEA397250D78C5DD8F84AD185D69C07254 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler__ctor_mCCB2CFDEA397250D78C5DD8F84AD185D69C07254_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Handedness trackedHandness = Handedness.Both;
		__this->set_trackedHandness_5(3);
		// private TrackedHandJoint trackedHandJoint = TrackedHandJoint.Palm;
		__this->set_trackedHandJoint_6(2);
		// private bool updateSolvers = true;
		__this->set_updateSolvers_10((bool)1);
		// protected readonly List<Solver> solvers = new List<Solver>();
		List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E * L_0 = (List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E *)il2cpp_codegen_object_new(List_1_tCEC0AFEDD1213AE43201AAD55D8887EA3AE2BE1E_il2cpp_TypeInfo_var);
		List_1__ctor_m69D5FDD7995BBDB460AE2B05A1602A5EDCD4585A(L_0, /*hidden argument*/List_1__ctor_m69D5FDD7995BBDB460AE2B05A1602A5EDCD4585A_RuntimeMethod_var);
		__this->set_solvers_11(L_0);
		// protected Handedness preferredTrackedHandedness = Handedness.Left;
		__this->set_preferredTrackedHandedness_19(1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MagneticSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* SurfaceMagnetism_get_MagneticSurfaces_m0A93DD527028600FEDEB04C36EE2346744D3225C (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return magneticSurfaces; }
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = __this->get_magneticSurfaces_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MagneticSurfaces(UnityEngine.LayerMask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MagneticSurfaces_mB031F43D3D65B85D061CAE40F19FE420146055C0 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___value0, const RuntimeMethod* method)
{
	{
		// set { magneticSurfaces = value; }
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = ___value0;
		__this->set_magneticSurfaces_13(L_0);
		// set { magneticSurfaces = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaxRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxRaycastDistance_m4CD41E0FA6AEEF4E23730CE20FCCFE6228495BBC (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return maxRaycastDistance; }
		float L_0 = __this->get_maxRaycastDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaxRaycastDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxRaycastDistance_m43714CC80F579F8ED4A78DB0C4580FCBFA82FE20 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maxRaycastDistance = value; }
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_14(L_0);
		// set { maxRaycastDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxDistance_mABA716544DAC47DADC553BD72ECBAC5F7F913F7E (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return maxRaycastDistance; }
		float L_0 = __this->get_maxRaycastDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxDistance_mCEE6CDDB7E1D71819213D63DCC898425F2BF37A4 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maxRaycastDistance = value; }
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_14(L_0);
		// set { maxRaycastDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ClosestDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ClosestDistance_m87592441A9886116B7460939F2C3D81E11D4AB3F (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return closestDistance; }
		float L_0 = __this->get_closestDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_ClosestDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_ClosestDistance_m6917F61D914A33BC5B571C2375665149FC1DDE94 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { closestDistance = value; }
		float L_0 = ___value0;
		__this->set_closestDistance_15(L_0);
		// set { closestDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CloseDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_CloseDistance_m3DEB532D65D4B405844C33A643A03AF5C4F0C064 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return closestDistance; }
		float L_0 = __this->get_closestDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CloseDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CloseDistance_mC74C4BC92517E649AB1A3D7BF33D4F088AE99AA4 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { closestDistance = value; }
		float L_0 = ___value0;
		__this->set_closestDistance_15(L_0);
		// set { closestDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceNormalOffset_m7F4E0402AD825066C4983B3263B4C3A29581FB4C (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return surfaceNormalOffset; }
		float L_0 = __this->get_surfaceNormalOffset_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceNormalOffset_m7F745157FDD7C84677F7FFD009605E5E8924F851 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { surfaceNormalOffset = value; }
		float L_0 = ___value0;
		__this->set_surfaceNormalOffset_16(L_0);
		// set { surfaceNormalOffset = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SurfaceRayOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceRayOffset_m2639A80EBD92CC3DC9E00723ACE8469A3175900C (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return surfaceRayOffset; }
		float L_0 = __this->get_surfaceRayOffset_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SurfaceRayOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceRayOffset_m80E7A8648AED0B9A3215DCFB720F2D356A2DAD68 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { surfaceRayOffset = value; }
		float L_0 = ___value0;
		__this->set_surfaceRayOffset_17(L_0);
		// set { surfaceRayOffset = value; }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mD29FC2BB2D9E2C629AF8D6E468274651DB9E5F01 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return raycastMode; }
		int32_t L_0 = __this->get_raycastMode_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_RaycastMode(Microsoft.MixedReality.Toolkit.Physics.SceneQueryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_RaycastMode_m66DC90D3C1D68805A5EBD18C3408D2EF85BE8254 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { raycastMode = value; }
		int32_t L_0 = ___value0;
		__this->set_raycastMode_18(L_0);
		// set { raycastMode = value; }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_BoxRaysPerEdge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_BoxRaysPerEdge_m16359474F5F5E81485C8567BD15DEC24B3A0E4B5 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return boxRaysPerEdge; }
		int32_t L_0 = __this->get_boxRaysPerEdge_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_BoxRaysPerEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_BoxRaysPerEdge_mE93EE4F19DA985D933B3E485CF080789A26FCCFF (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { boxRaysPerEdge = value; }
		int32_t L_0 = ___value0;
		__this->set_boxRaysPerEdge_19(L_0);
		// set { boxRaysPerEdge = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OrthographicBoxCast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OrthographicBoxCast_m26C89CF6932EA9FFC5C8A2B0B755696D2B3C17F8 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return orthographicBoxCast; }
		bool L_0 = __this->get_orthographicBoxCast_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OrthographicBoxCast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrthographicBoxCast_mE8E338DE1565DBCBD9E9734F3F80D346EA52EDD1 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { orthographicBoxCast = value; }
		bool L_0 = ___value0;
		__this->set_orthographicBoxCast_20(L_0);
		// set { orthographicBoxCast = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaximumNormalVariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaximumNormalVariance_mF36461F7FE0FE72A752D162A46997D07B872D5C9 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return maximumNormalVariance; }
		float L_0 = __this->get_maximumNormalVariance_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaximumNormalVariance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaximumNormalVariance_m0732197A9FA151469EDD8006C7A0076D0E8F3A01 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maximumNormalVariance = value; }
		float L_0 = ___value0;
		__this->set_maximumNormalVariance_21(L_0);
		// set { maximumNormalVariance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SphereSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SphereSize_mAA7CDBB45CE53F0B3571754E7A34F4CB64D3220B (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return sphereSize; }
		float L_0 = __this->get_sphereSize_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SphereSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SphereSize_m73177985252B1CD66E9F9AD4ABCC9F71C77C3FA7 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { sphereSize = value; }
		float L_0 = ___value0;
		__this->set_sphereSize_22(L_0);
		// set { sphereSize = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_VolumeCastSizeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_VolumeCastSizeOverride_m782FDD9A1C6AC896029875A8C83EE805002DD6B6 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return volumeCastSizeOverride; }
		float L_0 = __this->get_volumeCastSizeOverride_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_VolumeCastSizeOverride(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_VolumeCastSizeOverride_mA0EB4404906777A92A6247D808EA1F07DA7315E6 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { volumeCastSizeOverride = value; }
		float L_0 = ___value0;
		__this->set_volumeCastSizeOverride_23(L_0);
		// set { volumeCastSizeOverride = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_UseLinkedAltScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_UseLinkedAltScaleOverride_m292356B517CDD6250EA89406B80F68A9D3F3C540 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return useLinkedAltScaleOverride; }
		bool L_0 = __this->get_useLinkedAltScaleOverride_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_UseLinkedAltScaleOverride(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_UseLinkedAltScaleOverride_m7A745D5F27CA07AE54022A74477E8E31FFA34726 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { useLinkedAltScaleOverride = value; }
		bool L_0 = ___value0;
		__this->set_useLinkedAltScaleOverride_24(L_0);
		// set { useLinkedAltScaleOverride = value; }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_mD7DF10E425BAC3843E2822239C753C8097DD738F (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return currentRaycastDirectionMode; }
		int32_t L_0 = __this->get_currentRaycastDirectionMode_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CurrentRaycastDirectionMode(Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentRaycastDirectionMode_m252B49C29F5E3C3C93BA7F25CB591571D6CD5353 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { currentRaycastDirectionMode = value; }
		int32_t L_0 = ___value0;
		__this->set_currentRaycastDirectionMode_25(L_0);
		// set { currentRaycastDirectionMode = value; }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_mF489171602EF39E66D4D907B24638ED040557FBE (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return orientationMode; }
		int32_t L_0 = __this->get_orientationMode_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CurrentOrientationMode(Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentOrientationMode_mDF27B795BB2FD10558023336074E61244F179B7E (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { orientationMode = value; }
		int32_t L_0 = ___value0;
		__this->set_orientationMode_26(L_0);
		// set { orientationMode = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OrientationBlend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_OrientationBlend_m65E4C814A584E77D1A79302D431FEA96870859E6 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return orientationBlend; }
		float L_0 = __this->get_orientationBlend_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OrientationBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrientationBlend_m8FAC855E34599006D9FC0D124BFB21347481C11A (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { orientationBlend = value; }
		float L_0 = ___value0;
		__this->set_orientationBlend_27(L_0);
		// set { orientationBlend = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m52FBBBBE217959DD0589C9A2104E5B614DFAA61B (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return keepOrientationVertical; }
		bool L_0 = __this->get_keepOrientationVertical_28();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_KeepOrientationVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_KeepOrientationVertical_mEBB75934A50C9A1D0E90190AA8ACB97A1D8A9BEF (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { keepOrientationVertical = value; }
		bool L_0 = ___value0;
		__this->set_keepOrientationVertical_28(L_0);
		// set { keepOrientationVertical = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m4E6677C1421A768C9E2FC75C5661D44383A35982 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return debugEnabled; }
		bool L_0 = __this->get_debugEnabled_29();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_DebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_DebugEnabled_mC2C2EEC0D9089BCFF0A9FDB18E5A89537DE62D10 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { debugEnabled = value; }
		bool L_0 = ___value0;
		__this->set_debugEnabled_29(L_0);
		// set { debugEnabled = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OnSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_mC02C2DD85142BECE80BDB70D6CA086F3DF62A05F (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = __this->get_U3COnSurfaceU3Ek__BackingField_30();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m82EDC9306C4ED355E9CCBF3B370C873287D540B2 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3COnSurfaceU3Ek__BackingField_30(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 RaycastOrigin => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_m11147C69A0F70DA6D28694B69D86D5B2EDCFC757 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastEndPoint_m11147C69A0F70DA6D28694B69D86D5B2EDCFC757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 origin = RaycastOrigin;
		SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC(__this, /*hidden argument*/NULL);
		// Vector3 endPoint = Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_0 = L_0;
		// switch (CurrentRaycastDirectionMode)
		int32_t L_1 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_mD7DF10E425BAC3843E2822239C753C8097DD738F_inline(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_008b;
	}

IL_0028:
	{
		// if (SolverHandler != null && SolverHandler.TransformTarget != null)
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_008b;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_5 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_008b;
		}
	}
	{
		// endPoint = SolverHandler.TransformTarget.position + SolverHandler.TransformTarget.forward;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_8 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_11 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_10, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// break;
		goto IL_008b;
	}

IL_0071:
	{
		// endPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// break;
		goto IL_008b;
	}

IL_007f:
	{
		// endPoint = SolverHandler.GoalPosition;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_17 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = SolverHandler_get_GoalPosition_mBC993B50E8189431844A276EF16B7AE97A518E8A_inline(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
	}

IL_008b:
	{
		// return endPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		return L_19;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastDirection_mE88DC19EB8190571BCFEAEBFCC3EF7493F06C1AF (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastDirection_mE88DC19EB8190571BCFEAEBFCC3EF7493F06C1AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direction = Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (CurrentRaycastDirectionMode == RaycastDirectionMode.TrackedTargetForward)
		int32_t L_1 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_mD7DF10E425BAC3843E2822239C753C8097DD738F_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		// if (SolverHandler.TransformTarget != null)
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// direction = SolverHandler.TransformTarget.forward;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_5 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// }
		goto IL_004e;
	}

IL_0034:
	{
		// direction = (RaycastEndPoint - RaycastOrigin).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = SurfaceMagnetism_get_RaycastEndPoint_m11147C69A0F70DA6D28694B69D86D5B2EDCFC757(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_004e:
	{
		// return direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_0;
		return L_12;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_mDFF31FB92F9CE384AD65423272D9C54BD53D2CDC (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// private float ScaleOverride => useLinkedAltScaleOverride ? SolverHandler.AltScale.Current.magnitude : volumeCastSizeOverride;
		bool L_0 = __this->get_useLinkedAltScaleOverride_24();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		float L_1 = __this->get_volumeCastSizeOverride_23();
		return L_1;
	}

IL_000f:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  L_3 = SolverHandler_get_AltScale_mF08002B58E90D39D9DD419BB48B9418E428666C2_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3Smoothed_get_Current_m30862D6ABC7579C6BDD1AE400557D8E64455E214_inline((Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// if (KeepOrientationVertical)
		bool L_0 = SurfaceMagnetism_get_KeepOrientationVertical_m52FBBBBE217959DD0589C9A2104E5B614DFAA61B_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// direction.y = 0;
		(&___direction0)->set_y_3((0.0f));
		// surfaceNormal.y = 0;
		(&___surfaceNormal1)->set_y_3((0.0f));
	}

IL_0020:
	{
		// var trackedReferenceRotation = Quaternion.LookRotation(-direction, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var surfaceReferenceRotation = Quaternion.LookRotation(-surfaceNormal, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___surfaceNormal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// switch (CurrentOrientationMode)
		int32_t L_9 = SurfaceMagnetism_get_CurrentOrientationMode_mF489171602EF39E66D4D907B24638ED040557FBE_inline(__this, /*hidden argument*/NULL);
		V_2 = L_9;
		int32_t L_10 = V_2;
		switch (L_10)
		{
			case 0:
			{
				goto IL_0061;
			}
			case 1:
			{
				goto IL_006d;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0071;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0061:
	{
		// return SolverHandler.GoalRotation;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_11 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_11);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = SolverHandler_get_GoalRotation_m81A56576A3666F6A39912235A4686585AAD73F70_inline(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_006d:
	{
		// return trackedReferenceRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = V_0;
		return L_13;
	}

IL_006f:
	{
		// return surfaceReferenceRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_1;
		return L_14;
	}

IL_0071:
	{
		// return Quaternion.Slerp(trackedReferenceRotation, surfaceReferenceRotation, orientationBlend);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = V_1;
		float L_17 = __this->get_orientationBlend_27();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_15, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_007f:
	{
		// return Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		return L_19;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SolverUpdate_m72AFF7D627FCCB576BF27EE5F6F469AADF0FEC33 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SolverUpdate_m72AFF7D627FCCB576BF27EE5F6F469AADF0FEC33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// GoalPosition = WorkingPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_m984DF97DAF9E18DB1E2A8795531BB1737419057D(__this, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = WorkingRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Solver_get_WorkingRotation_mA0DF75FE07A2305CD0CEDC66F419DB84CD4D687E(__this, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mEC8C53FC1EB7D66765ECA104FB7EF3956405FCA2(__this, L_1, /*hidden argument*/NULL);
		// Vector3 origin = RaycastOrigin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 endpoint = RaycastEndPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SurfaceMagnetism_get_RaycastEndPoint_m11147C69A0F70DA6D28694B69D86D5B2EDCFC757(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		// currentRayStep.UpdateRayStep(ref origin, ref endpoint);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_4 = __this->get_address_of_currentRayStep_32();
		RayStep_UpdateRayStep_m683CD0B1AF317201E05F75ACE33F326AAED97A6E((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_4, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		// if (currentRayStep.Direction == Vector3.zero)
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_5 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_8 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// return;
		return;
	}

IL_004d:
	{
		// if (DebugEnabled)
		bool L_9 = SurfaceMagnetism_get_DebugEnabled_m4E6677C1421A768C9E2FC75C5661D44383A35982_inline(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		// Debug.DrawLine(currentRayStep.Origin, currentRayStep.Terminus, Color.magenta);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_10 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_10, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_12 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RayStep_get_Terminus_m7D0BC5431DB86CD4C64F310D184E28457D182A03_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_12, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14 = Color_get_magenta_m04E2DDB63AA6288C701A93E248643A06EBD2D7AD(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_11, L_13, L_14, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// switch (RaycastMode)
		int32_t L_15 = SurfaceMagnetism_get_RaycastMode_mD29FC2BB2D9E2C629AF8D6E468274651DB9E5F01_inline(__this, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = V_2;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0093;
			}
			case 1:
			{
				goto IL_00a0;
			}
			case 2:
			{
				goto IL_00ad;
			}
			case 3:
			{
				goto IL_00ba;
			}
		}
	}
	{
		return;
	}

IL_0093:
	{
		// SimpleRaycastStepUpdate(ref this.currentRayStep);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_17 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_SimpleRaycastStepUpdate_m63419B3259123E9EB75180A0278C2221385755EF(__this, (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_17, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00a0:
	{
		// BoxRaycastStepUpdate(ref this.currentRayStep);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_18 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_BoxRaycastStepUpdate_m35784C8612AA57A336E488767035EA9747A5900C(__this, (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_18, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00ad:
	{
		// SphereRaycastStepUpdate(ref this.currentRayStep);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_19 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_SphereRaycastStepUpdate_m3CDB29C2BB9FE94690D45E6C830C873826FF2EA2(__this, (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_19, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00ba:
	{
		// Debug.LogError("Raycast mode set to SphereOverlap which is not valid for SurfaceMagnetism component. Disabling update solvers...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralCF5B58E13AC9E0BBDD8929CAC9A7A3EC3DACCCE9, /*hidden argument*/NULL);
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_20 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_20);
		SolverHandler_set_UpdateSolvers_m71627901924EA3C2FA3F88E1346D5B6C96CE4BC9_inline(L_20, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_m63419B3259123E9EB75180A0278C2221385755EF (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SimpleRaycastStepUpdate_m63419B3259123E9EB75180A0278C2221385755EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// isHit = MixedRealityRaycaster.RaycastSimplePhysicsStep(rayStep, maxRaycastDistance, magneticSurfaces, false, out result);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_0 = ___rayStep0;
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  L_1 = (*(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_0);
		float L_2 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_3 = __this->get_magneticSurfaces_13();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_tDB7B639A2F467361366DB278D239006467490080_il2cpp_TypeInfo_var);
		bool L_4 = MixedRealityRaycaster_RaycastSimplePhysicsStep_m90B7B22D15BBEF06E1B7D297DFB8DFC8FFFA2645(L_1, L_2, L_3, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
		// OnSurface = isHit;
		bool L_5 = V_0;
		SurfaceMagnetism_set_OnSurface_m82EDC9306C4ED355E9CCBF3B370C873287D540B2_inline(__this, L_5, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_7 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// float length = hitDelta.magnitude;
		float L_10 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		// if (length < closestDistance)
		float L_11 = __this->get_closestDistance_15();
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_0067;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_12 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_12, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_14 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_14, /*hidden argument*/NULL);
		float L_16 = __this->get_closestDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_15, L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_17, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_18, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// if (isHit)
		bool L_19 = V_0;
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_21 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_21, L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_20, L_23, /*hidden argument*/NULL);
		float L_25 = __this->get_surfaceRayOffset_17();
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_26 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_25, L_27, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_24, L_28, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475(__this, L_29, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_30 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9(__this, L_31, L_32, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mEC8C53FC1EB7D66765ECA104FB7EF3956405FCA2(__this, L_33, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_m3CDB29C2BB9FE94690D45E6C830C873826FF2EA2 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SphereRaycastStepUpdate_m3CDB29C2BB9FE94690D45E6C830C873826FF2EA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float G_B3_0 = 0.0f;
	{
		// float size = ScaleOverride > 0 ? ScaleOverride : transform.lossyScale.x * sphereSize;
		float L_0 = SurfaceMagnetism_get_ScaleOverride_mDFF31FB92F9CE384AD65423272D9C54BD53D2CDC(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_0026;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_sphereSize_22();
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		goto IL_002c;
	}

IL_0026:
	{
		float L_5 = SurfaceMagnetism_get_ScaleOverride_mDFF31FB92F9CE384AD65423272D9C54BD53D2CDC(__this, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002c:
	{
		V_2 = G_B3_0;
		// isHit = MixedRealityRaycaster.RaycastSpherePhysicsStep(rayStep, size, maxRaycastDistance, magneticSurfaces, false, out result);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_6 = ___rayStep0;
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  L_7 = (*(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_6);
		float L_8 = V_2;
		float L_9 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_10 = __this->get_magneticSurfaces_13();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_tDB7B639A2F467361366DB278D239006467490080_il2cpp_TypeInfo_var);
		bool L_11 = MixedRealityRaycaster_RaycastSpherePhysicsStep_m67CF1A116596B7A880BE38A7A66B3B5B394C52C8(L_7, L_8, L_9, L_10, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_11;
		// OnSurface = isHit;
		bool L_12 = V_0;
		SurfaceMagnetism_set_OnSurface_m82EDC9306C4ED355E9CCBF3B370C873287D540B2_inline(__this, L_12, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_14 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// float length = hitDelta.magnitude;
		float L_17 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		// if (length < closestDistance)
		float L_18 = __this->get_closestDistance_15();
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_0095;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_19 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_19, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_21 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_21, /*hidden argument*/NULL);
		float L_23 = __this->get_closestDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_22, L_23, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_20, L_24, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_25, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// if (isHit)
		bool L_26 = V_0;
		if (!L_26)
		{
			goto IL_00eb;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_28 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_28, L_29, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_27, L_30, /*hidden argument*/NULL);
		float L_32 = __this->get_surfaceRayOffset_17();
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_33 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_33, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_32, L_34, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_35, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475(__this, L_36, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_37 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9(__this, L_38, L_39, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mEC8C53FC1EB7D66765ECA104FB7EF3956405FCA2(__this, L_40, /*hidden argument*/NULL);
	}

IL_00eb:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_m35784C8612AA57A336E488767035EA9747A5900C (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_BoxRaycastStepUpdate_m35784C8612AA57A336E488767035EA9747A5900C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_4 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_5 = NULL;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_6 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// Vector3 scale = ScaleOverride > 0 ? transform.lossyScale.normalized * ScaleOverride : transform.lossyScale;
		float L_0 = SurfaceMagnetism_get_ScaleOverride_mDFF31FB92F9CE384AD65423272D9C54BD53D2CDC(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_001a;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0039;
	}

IL_001a:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_3, /*hidden argument*/NULL);
		V_7 = L_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		float L_6 = SurfaceMagnetism_get_ScaleOverride_mDFF31FB92F9CE384AD65423272D9C54BD53D2CDC(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
	}

IL_0039:
	{
		V_0 = G_B3_0;
		// Quaternion orientation = orientationMode == OrientationMode.None ?
		//     Quaternion.LookRotation(rayStep.Direction, Vector3.up) :
		//     CalculateMagnetismOrientation(rayStep.Direction, Vector3.up);
		int32_t L_8 = __this->get_orientationMode_26();
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_9 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9(__this, L_10, L_11, /*hidden argument*/NULL);
		G_B6_0 = L_12;
		goto IL_0065;
	}

IL_0055:
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_13 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_14, L_15, /*hidden argument*/NULL);
		G_B6_0 = L_16;
	}

IL_0065:
	{
		V_1 = G_B6_0;
		// Matrix4x4 targetMatrix = Matrix4x4.TRS(Vector3.zero, orientation, scale);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_20 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_17, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		// if (this.boxCollider == null)
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_21 = __this->get_boxCollider_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_008d;
		}
	}
	{
		// this.boxCollider = GetComponent<BoxCollider>();
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_23 = Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var);
		__this->set_boxCollider_33(L_23);
	}

IL_008d:
	{
		// Vector3 extents = boxCollider.size;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_24 = __this->get_boxCollider_33();
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		// if (MixedRealityRaycaster.RaycastBoxPhysicsStep(rayStep, extents, transform.position, targetMatrix, maxRaycastDistance, magneticSurfaces, boxRaysPerEdge, orthographicBoxCast, false, out positions, out normals, out hits))
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_26 = ___rayStep0;
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  L_27 = (*(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = V_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_31 = V_2;
		float L_32 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_33 = __this->get_magneticSurfaces_13();
		int32_t L_34 = __this->get_boxRaysPerEdge_19();
		bool L_35 = __this->get_orthographicBoxCast_20();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_tDB7B639A2F467361366DB278D239006467490080_il2cpp_TypeInfo_var);
		bool L_36 = MixedRealityRaycaster_RaycastBoxPhysicsStep_mC029A1AA0C6177853BC6EC3ADAF8CA7294FD2094(L_27, L_28, L_30, L_31, L_32, L_33, L_34, L_35, (bool)0, (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_4), (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_5), (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040**)(&V_6), /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0233;
		}
	}
	{
		// FindPlacementPlane(rayStep.Origin, rayStep.Direction, positions, normals, hits, boxCollider.size.x, maximumNormalVariance, false, orientationMode == OrientationMode.None, out plane, out distance);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_37 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_37, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_39 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_39, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_41 = V_4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_42 = V_5;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_43 = V_6;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_44 = __this->get_boxCollider_33();
		NullCheck(L_44);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_x_2();
		float L_47 = __this->get_maximumNormalVariance_21();
		int32_t L_48 = __this->get_orientationMode_26();
		SurfaceMagnetism_FindPlacementPlane_mFBEFF7DD7D0654E62ABC62A343743F0CF0763C89(__this, L_38, L_40, L_41, L_42, L_43, L_46, L_47, (bool)0, (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0), (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_8), (float*)(&V_9), /*hidden argument*/NULL);
		// float verticalCorrectionOffset = 0;
		V_10 = (0.0f);
		// if (IsNormalVertical(plane.normal) && !Mathf.Approximately(rayStep.Direction.y, 0))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_8), /*hidden argument*/NULL);
		bool L_50 = SurfaceMagnetism_IsNormalVertical_mAFDE9526D60CB6B21DF3BCC035D722A656B9409D(L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_018f;
		}
	}
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_51 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_51, /*hidden argument*/NULL);
		float L_53 = L_52.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_54 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_53, (0.0f), /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_018f;
		}
	}
	{
		// float boxSurfaceVerticalOffset = targetMatrix.MultiplyVector(new Vector3(0, extents.y * 0.5f, 0)).magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = V_3;
		float L_56 = L_55.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_57), (0.0f), ((float)il2cpp_codegen_multiply((float)L_56, (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_57, /*hidden argument*/NULL);
		V_7 = L_58;
		float L_59 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		// Vector3 correctionVector = boxSurfaceVerticalOffset * (rayStep.Direction / rayStep.Direction.y);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_60 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_60, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_62 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_62, /*hidden argument*/NULL);
		float L_64 = L_63.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_61, L_64, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_59, L_65, /*hidden argument*/NULL);
		V_12 = L_66;
		// verticalCorrectionOffset = -correctionVector.magnitude;
		float L_67 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_12), /*hidden argument*/NULL);
		V_10 = ((-L_67));
	}

IL_018f:
	{
		// float boxSurfaceOffset = targetMatrix.MultiplyVector(new Vector3(0, 0, extents.z * 0.5f)).magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = V_3;
		float L_69 = L_68.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_70), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_69, (float)(0.5f))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_70, /*hidden argument*/NULL);
		V_7 = L_71;
		float L_72 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_11 = L_72;
		// GoalPosition = rayStep.Origin + rayStep.Direction * Mathf.Max(closestDistance, distance + surfaceRayOffset + boxSurfaceOffset + verticalCorrectionOffset) + plane.normal * (0 * boxSurfaceOffset + surfaceNormalOffset);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_73 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_73, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_75 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_75, /*hidden argument*/NULL);
		float L_77 = __this->get_closestDistance_15();
		float L_78 = V_9;
		float L_79 = __this->get_surfaceRayOffset_17();
		float L_80 = V_11;
		float L_81 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_82 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_77, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_78, (float)L_79)), (float)L_80)), (float)L_81)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_83 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_76, L_82, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_74, L_83, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_85 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_8), /*hidden argument*/NULL);
		float L_86 = V_11;
		float L_87 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_85, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(0.0f), (float)L_86)), (float)L_87)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_84, L_88, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mCF33458B8AF246C703AC569E7DBF52E676A3F475(__this, L_89, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, plane.normal);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_90 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_90, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_92 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_8), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_93 = SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9(__this, L_91, L_92, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mEC8C53FC1EB7D66765ECA104FB7EF3956405FCA2(__this, L_93, /*hidden argument*/NULL);
		// OnSurface = true;
		SurfaceMagnetism_set_OnSurface_m82EDC9306C4ED355E9CCBF3B370C873287D540B2_inline(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0233:
	{
		// OnSurface = false;
		SurfaceMagnetism_set_OnSurface_m82EDC9306C4ED355E9CCBF3B370C873287D540B2_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_mFBEFF7DD7D0654E62ABC62A343743F0CF0763C89 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_FindPlacementPlane_mFBEFF7DD7D0654E62ABC62A343743F0CF0763C89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_18;
	memset((&V_18), 0, sizeof(V_18));
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	float V_21 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_22;
	memset((&V_22), 0, sizeof(V_22));
	float V_23 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B48_0;
	memset((&G_B48_0), 0, sizeof(G_B48_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B47_0;
	memset((&G_B47_0), 0, sizeof(G_B47_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B49_0;
	memset((&G_B49_0), 0, sizeof(G_B49_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B49_1;
	memset((&G_B49_1), 0, sizeof(G_B49_1));
	{
		// int rayCount = positions.Length;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___positions2;
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		// Vector3 originalDirection = direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___direction1;
		V_1 = L_1;
		// if (constrainVertical)
		bool L_2 = ___constrainVertical7;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// direction.y = 0.0f;
		(&___direction1)->set_y_3((0.0f));
		// direction = direction.normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___direction1), /*hidden argument*/NULL);
		___direction1 = L_3;
	}

IL_001f:
	{
		// closestDistance = float.PositiveInfinity;
		float* L_4 = ___closestDistance10;
		*((float*)L_4) = (float)(std::numeric_limits<float>::infinity());
		// int numHits = 0;
		V_2 = 0;
		// int closestPointIdx = -1;
		V_3 = (-1);
		// float farthestDistance = 0f;
		V_4 = (0.0f);
		// var averageNormal = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_5 = L_5;
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_13 = 0;
		goto IL_0090;
	}

IL_003e:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_6 = ___hits4;
		int32_t L_7 = V_13;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		// float distance = Vector3.Dot(direction, positions[hitIndex] - origin);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = ___positions2;
		int32_t L_12 = V_13;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = ___origin0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_14, L_15, /*hidden argument*/NULL);
		float L_17 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_10, L_16, /*hidden argument*/NULL);
		V_14 = L_17;
		// if (distance < closestDistance)
		float L_18 = V_14;
		float* L_19 = ___closestDistance10;
		float L_20 = *((float*)L_19);
		if ((!(((float)L_18) < ((float)L_20))))
		{
			goto IL_006a;
		}
	}
	{
		// closestPointIdx = hitIndex;
		int32_t L_21 = V_13;
		V_3 = L_21;
		// closestDistance = distance;
		float* L_22 = ___closestDistance10;
		float L_23 = V_14;
		*((float*)L_22) = (float)L_23;
	}

IL_006a:
	{
		// if (distance > farthestDistance)
		float L_24 = V_14;
		float L_25 = V_4;
		if ((!(((float)L_24) > ((float)L_25))))
		{
			goto IL_0074;
		}
	}
	{
		// farthestDistance = distance;
		float L_26 = V_14;
		V_4 = L_26;
	}

IL_0074:
	{
		// averageNormal += normals[hitIndex];
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_28 = ___normals3;
		int32_t L_29 = V_13;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_27, L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		// ++numHits;
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_008a:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_34 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0090:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_35 = V_13;
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_003e;
		}
	}
	{
		// Vector3 closestPoint = positions[closestPointIdx];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_37 = ___positions2;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_6 = L_40;
		// averageNormal /= numHits;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = V_5;
		int32_t L_42 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_41, (((float)((float)L_42))), /*hidden argument*/NULL);
		V_5 = L_43;
		// float variance = 0;
		V_7 = (0.0f);
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		V_15 = 0;
		goto IL_00e0;
	}

IL_00b5:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_44 = ___hits4;
		int32_t L_45 = V_15;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		uint8_t L_47 = (uint8_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		if (!L_47)
		{
			goto IL_00da;
		}
	}
	{
		// variance += (normals[hitIndex] - averageNormal).magnitude;
		float L_48 = V_7;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_49 = ___normals3;
		int32_t L_50 = V_15;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_52, L_53, /*hidden argument*/NULL);
		V_16 = L_54;
		float L_55 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_add((float)L_48, (float)L_55));
	}

IL_00da:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_56 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_00e0:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_57 = V_15;
		int32_t L_58 = V_0;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00b5;
		}
	}
	{
		// variance /= numHits;
		float L_59 = V_7;
		int32_t L_60 = V_2;
		V_7 = ((float)((float)L_59/(float)(((float)((float)L_60)))));
		// if (variance > maxNormalVariance || numHits < rayCount * 0.25f)
		float L_61 = V_7;
		float L_62 = ___maxNormalVariance6;
		if ((((float)L_61) > ((float)L_62)))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_63 = V_2;
		int32_t L_64 = V_0;
		if ((!(((float)(((float)((float)L_63)))) < ((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_64))), (float)(0.25f)))))))
		{
			goto IL_0113;
		}
	}

IL_00fe:
	{
		// plane = new Plane(-direction, closestPoint);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_65 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_66, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = V_6;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_69), L_67, L_68, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_65 = L_69;
		// return;
		return;
	}

IL_0113:
	{
		// var lowAngle = float.PositiveInfinity;
		V_8 = (std::numeric_limits<float>::infinity());
		// var highAngle = float.NegativeInfinity;
		V_9 = (-std::numeric_limits<float>::infinity());
		// int lowIndex = -1;
		V_10 = (-1);
		// int highIndex = -1;
		V_11 = (-1);
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_17 = 0;
		goto IL_0193;
	}

IL_012c:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx)
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_70 = ___hits4;
		int32_t L_71 = V_17;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		uint8_t L_73 = (uint8_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		if (!L_73)
		{
			goto IL_018d;
		}
	}
	{
		int32_t L_74 = V_17;
		int32_t L_75 = V_3;
		if ((((int32_t)L_74) == ((int32_t)L_75)))
		{
			goto IL_018d;
		}
	}
	{
		// Vector3 difference = positions[hitIndex] - closestPoint;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_76 = ___positions2;
		int32_t L_77 = V_17;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_80 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_81 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_79, L_80, /*hidden argument*/NULL);
		V_18 = L_81;
		// if (constrainVertical)
		bool L_82 = ___constrainVertical7;
		if (!L_82)
		{
			goto IL_016e;
		}
	}
	{
		// difference.y = 0.0f;
		(&V_18)->set_y_3((0.0f));
		// difference.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_18), /*hidden argument*/NULL);
		// if (difference == Vector3.zero)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_83 = V_18;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_85 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_83, L_84, /*hidden argument*/NULL);
		if (L_85)
		{
			goto IL_018d;
		}
	}

IL_016e:
	{
		// difference.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_18), /*hidden argument*/NULL);
		// float angle = Vector3.Dot(direction, difference);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_86 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = V_18;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_88 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_86, L_87, /*hidden argument*/NULL);
		V_19 = L_88;
		// if (angle < lowAngle)
		float L_89 = V_19;
		float L_90 = V_8;
		if ((!(((float)L_89) < ((float)L_90))))
		{
			goto IL_018d;
		}
	}
	{
		// lowAngle = angle;
		float L_91 = V_19;
		V_8 = L_91;
		// lowIndex = hitIndex;
		int32_t L_92 = V_17;
		V_10 = L_92;
	}

IL_018d:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_93 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_0193:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_94 = V_17;
		int32_t L_95 = V_0;
		if ((((int32_t)L_94) < ((int32_t)L_95)))
		{
			goto IL_012c;
		}
	}
	{
		// if (!constrainVertical && lowIndex != -1)
		bool L_96 = ___constrainVertical7;
		if (L_96)
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_97 = V_10;
		if ((((int32_t)L_97) == ((int32_t)(-1))))
		{
			goto IL_0260;
		}
	}
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_20 = 0;
		goto IL_0258;
	}

IL_01af:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx || hitIndex == lowIndex)
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_98 = ___hits4;
		int32_t L_99 = V_20;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		uint8_t L_101 = (uint8_t)(L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		if (!L_101)
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_102 = V_20;
		int32_t L_103 = V_3;
		if ((((int32_t)L_102) == ((int32_t)L_103)))
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_104 = V_20;
		int32_t L_105 = V_10;
		if ((((int32_t)L_104) == ((int32_t)L_105)))
		{
			goto IL_0252;
		}
	}
	{
		// float dot = Mathf.Abs(Vector3.Dot((positions[hitIndex] - closestPoint).normalized, (positions[lowIndex] - closestPoint).normalized));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_106 = ___positions2;
		int32_t L_107 = V_20;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_110 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_111 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_109, L_110, /*hidden argument*/NULL);
		V_16 = L_111;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_112 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_113 = ___positions2;
		int32_t L_114 = V_10;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_117 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_118 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_116, L_117, /*hidden argument*/NULL);
		V_16 = L_118;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_119 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		float L_120 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_112, L_119, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_121 = fabsf(L_120);
		// if (dot > MaxDot)
		if ((((float)L_121) > ((float)(0.97f))))
		{
			goto IL_0252;
		}
	}
	{
		// float nextAngle = Mathf.Abs(Vector3.Dot(direction, Vector3.Cross(positions[lowIndex] - closestPoint, positions[hitIndex] - closestPoint).normalized));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_122 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_123 = ___positions2;
		int32_t L_124 = V_10;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_127 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_128 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_126, L_127, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_129 = ___positions2;
		int32_t L_130 = V_20;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_133 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_134 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_132, L_133, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_135 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_128, L_134, /*hidden argument*/NULL);
		V_16 = L_135;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_136 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		float L_137 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_122, L_136, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_138 = fabsf(L_137);
		V_21 = L_138;
		// if (nextAngle > highAngle)
		float L_139 = V_21;
		float L_140 = V_9;
		if ((!(((float)L_139) > ((float)L_140))))
		{
			goto IL_0252;
		}
	}
	{
		// highAngle = nextAngle;
		float L_141 = V_21;
		V_9 = L_141;
		// highIndex = hitIndex;
		int32_t L_142 = V_20;
		V_11 = L_142;
	}

IL_0252:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_143 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)1));
	}

IL_0258:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_144 = V_20;
		int32_t L_145 = V_0;
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_01af;
		}
	}

IL_0260:
	{
		// if (lowIndex != -1)
		int32_t L_146 = V_10;
		if ((((int32_t)L_146) == ((int32_t)(-1))))
		{
			goto IL_0337;
		}
	}
	{
		// if (debugEnabled)
		bool L_147 = __this->get_debugEnabled_29();
		if (!L_147)
		{
			goto IL_0284;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[lowIndex], Color.red);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_148 = V_6;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_149 = ___positions2;
		int32_t L_150 = V_10;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_153 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_148, L_152, L_153, /*hidden argument*/NULL);
	}

IL_0284:
	{
		// if (highIndex != -1)
		int32_t L_154 = V_11;
		if ((((int32_t)L_154) == ((int32_t)(-1))))
		{
			goto IL_02d5;
		}
	}
	{
		// if (debugEnabled)
		bool L_155 = __this->get_debugEnabled_29();
		if (!L_155)
		{
			goto IL_02a5;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[highIndex], Color.green);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_156 = V_6;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_157 = ___positions2;
		int32_t L_158 = V_11;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_161 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_156, L_160, L_161, /*hidden argument*/NULL);
	}

IL_02a5:
	{
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, positions[highIndex] - closestPoint).normalized;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_162 = ___positions2;
		int32_t L_163 = V_10;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_166 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_167 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_165, L_166, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_168 = ___positions2;
		int32_t L_169 = V_11;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_172 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_173 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_171, L_172, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_174 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_167, L_173, /*hidden argument*/NULL);
		V_16 = L_174;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_175 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		V_12 = L_175;
		// }
		goto IL_0318;
	}

IL_02d5:
	{
		// Vector3 planeUp = Vector3.Cross(positions[lowIndex] - closestPoint, direction);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_176 = ___positions2;
		int32_t L_177 = V_10;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_180 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_181 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_179, L_180, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_182 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_183 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_181, L_182, /*hidden argument*/NULL);
		V_22 = L_183;
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, constrainVertical ? Vector3.up : planeUp).normalized;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_184 = ___positions2;
		int32_t L_185 = V_10;
		NullCheck(L_184);
		int32_t L_186 = L_185;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_188 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_189 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_187, L_188, /*hidden argument*/NULL);
		bool L_190 = ___constrainVertical7;
		G_B47_0 = L_189;
		if (L_190)
		{
			G_B48_0 = L_189;
			goto IL_0303;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_191 = V_22;
		G_B49_0 = L_191;
		G_B49_1 = G_B47_0;
		goto IL_0308;
	}

IL_0303:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_192 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B49_0 = L_192;
		G_B49_1 = G_B48_0;
	}

IL_0308:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_193 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(G_B49_1, G_B49_0, /*hidden argument*/NULL);
		V_16 = L_193;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_194 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		V_12 = L_194;
	}

IL_0318:
	{
		// if (debugEnabled)
		bool L_195 = __this->get_debugEnabled_29();
		if (!L_195)
		{
			goto IL_0344;
		}
	}
	{
		// Debug.DrawLine(closestPoint, closestPoint + placementNormal, Color.blue);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_196 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_197 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_198 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_199 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_197, L_198, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_200 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_196, L_199, L_200, /*hidden argument*/NULL);
		// }
		goto IL_0344;
	}

IL_0337:
	{
		// placementNormal = direction * -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_201 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_202 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_201, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_202;
	}

IL_0344:
	{
		// if (Vector3.Dot(placementNormal, direction) > 0.0f)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_203 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_204 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_205 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_203, L_204, /*hidden argument*/NULL);
		if ((!(((float)L_205) > ((float)(0.0f)))))
		{
			goto IL_0361;
		}
	}
	{
		// placementNormal *= -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_206 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_207 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_206, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_207;
	}

IL_0361:
	{
		// plane = new Plane(placementNormal, closestPoint);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_208 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_209 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_210 = V_6;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_211;
		memset((&L_211), 0, sizeof(L_211));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_211), L_209, L_210, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_208 = L_211;
		// if (debugEnabled)
		bool L_212 = __this->get_debugEnabled_29();
		if (!L_212)
		{
			goto IL_0387;
		}
	}
	{
		// Debug.DrawRay(closestPoint, placementNormal, Color.cyan);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_213 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_214 = V_12;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_215 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3(L_213, L_214, L_215, /*hidden argument*/NULL);
	}

IL_0387:
	{
		// if (!useClosestDistance && closestPointIdx >= 0)
		bool L_216 = ___useClosestDistance8;
		if (L_216)
		{
			goto IL_03d2;
		}
	}
	{
		int32_t L_217 = V_3;
		if ((((int32_t)L_217) < ((int32_t)0)))
		{
			goto IL_03d2;
		}
	}
	{
		// if (plane.Raycast(new Ray(origin, originalDirection), out centerPlaneDistance) || !centerPlaneDistance.Equals(0.0f))
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_218 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_219 = ___origin0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_220 = V_1;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_221;
		memset((&L_221), 0, sizeof(L_221));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_221), L_219, L_220, /*hidden argument*/NULL);
		bool L_222 = Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_218, L_221, (float*)(&V_23), /*hidden argument*/NULL);
		if (L_222)
		{
			goto IL_03af;
		}
	}
	{
		bool L_223 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_23), (0.0f), /*hidden argument*/NULL);
		if (L_223)
		{
			goto IL_03c8;
		}
	}

IL_03af:
	{
		// closestDistance = Mathf.Clamp(centerPlaneDistance, closestDistance, farthestDistance + assetWidth * 0.5f);
		float* L_224 = ___closestDistance10;
		float L_225 = V_23;
		float* L_226 = ___closestDistance10;
		float L_227 = *((float*)L_226);
		float L_228 = V_4;
		float L_229 = ___assetWidth5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_230 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_225, L_227, ((float)il2cpp_codegen_add((float)L_228, (float)((float)il2cpp_codegen_multiply((float)L_229, (float)(0.5f))))), /*hidden argument*/NULL);
		*((float*)L_224) = (float)L_230;
		// }
		return;
	}

IL_03c8:
	{
		// Debug.LogError("FindPlacementPlane: Not expected to have the center point not intersect the plane.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F, /*hidden argument*/NULL);
	}

IL_03d2:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_mAFDE9526D60CB6B21DF3BCC035D722A656B9409D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_IsNormalVertical_mAFDE9526D60CB6B21DF3BCC035D722A656B9409D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool IsNormalVertical(Vector3 normal) => 1f - Mathf.Abs(normal.y) < 0.01f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___normal0;
		float L_1 = L_0.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		return (bool)((((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2))) < ((float)(0.01f)))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism__ctor_mDE879704077246B4811AEF379665C1D98B0D8049 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism__ctor_mDE879704077246B4811AEF379665C1D98B0D8049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = (LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)SZArrayNew(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_1 = L_0;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_2 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 )L_2);
		__this->set_magneticSurfaces_13(L_1);
		// private float maxRaycastDistance = 50.0f;
		__this->set_maxRaycastDistance_14((50.0f));
		// private float closestDistance = 0.5f;
		__this->set_closestDistance_15((0.5f));
		// private float surfaceNormalOffset = 0.5f;
		__this->set_surfaceNormalOffset_16((0.5f));
		// private int boxRaysPerEdge = 3;
		__this->set_boxRaysPerEdge_19(3);
		// private float maximumNormalVariance = 0.5f;
		__this->set_maximumNormalVariance_21((0.5f));
		// private float sphereSize = 1.0f;
		__this->set_sphereSize_22((1.0f));
		// private OrientationMode orientationMode = OrientationMode.TrackedTarget;
		__this->set_orientationMode_26(1);
		// private float orientationBlend = 0.65f;
		__this->set_orientationBlend_27((0.65f));
		// private bool keepOrientationVertical = true;
		__this->set_keepOrientationVertical_28((bool)1);
		Solver__ctor_mAF66923F2EB0C229B5ED3B2A1807B0500D9776D4(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::ConfigureGrid(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_ConfigureGrid_m7CEBD8A07E804C202DA17417C1ABFC1FF00B4667 (TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E * __this, int32_t ___columns0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___tileSize1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___gutters2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___layouDirection3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPosition4, bool ___centered5, const RuntimeMethod* method)
{
	{
		// Columns = columns;
		int32_t L_0 = ___columns0;
		__this->set_Columns_4(L_0);
		// TileSize = tileSize;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___tileSize1;
		__this->set_TileSize_5(L_1);
		// Gutters = gutters;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___gutters2;
		__this->set_Gutters_6(L_2);
		// LayoutDireciton = layouDirection;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___layouDirection3;
		__this->set_LayoutDireciton_7(L_3);
		// StartPosition = startPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___startPosition4;
		__this->set_StartPosition_8(L_4);
		// Centered = centered;
		bool L_5 = ___centered5;
		__this->set_Centered_9(L_5);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_OnValidate_m2A81C30434E083E89C6A059F2CD34895E149E1B3 (TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E * __this, const RuntimeMethod* method)
{
	{
		// editorUpdated = true;
		__this->set_editorUpdated_13((bool)1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_Start_mD5800DCB46ACED1F36AEF96D8799364FE7FC352C (TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E * __this, const RuntimeMethod* method)
{
	{
		// editorUpdated = true;
		__this->set_editorUpdated_13((bool)1);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TileGridObjectCollection_GetListPosition_m901BA4E9BC9007CBD10E2D40FEAE95031C52AF5E (TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_GetListPosition_m901BA4E9BC9007CBD10E2D40FEAE95031C52AF5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B3_0 = 0;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	{
		// int column = index % Columns;
		int32_t L_0 = ___index0;
		int32_t L_1 = __this->get_Columns_4();
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)L_1));
		// int row = Columns > 0 ? Mathf.FloorToInt(index / Columns) : index;
		int32_t L_2 = __this->get_Columns_4();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___index0;
		G_B3_0 = L_3;
		goto IL_0023;
	}

IL_0015:
	{
		int32_t L_4 = ___index0;
		int32_t L_5 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_6 = Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C((((float)((float)((int32_t)((int32_t)L_4/(int32_t)L_5))))), /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0023:
	{
		V_1 = G_B3_0;
		// Vector3 size = Vector3.Scale(TileSize + Gutters, LayoutDireciton);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_Gutters_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// float xPos = size.x * column;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_2;
		float L_13 = L_12.get_x_2();
		int32_t L_14 = V_0;
		// float yPos = size.y * row;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_2;
		float L_16 = L_15.get_y_3();
		int32_t L_17 = V_1;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_16, (float)(((float)((float)L_17)))));
		// float zPos = DepthCalculatedBy == GridDivisions.Rows ? size.z * row : size.z * column;
		int32_t L_18 = __this->get_DepthCalculatedBy_10();
		G_B4_0 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_14)))));
		if (!L_18)
		{
			G_B5_0 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_14)))));
			goto IL_0067;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		float L_20 = L_19.get_z_4();
		int32_t L_21 = V_0;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_20, (float)(((float)((float)L_21)))));
		G_B6_1 = G_B4_0;
		goto IL_0070;
	}

IL_0067:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_2;
		float L_23 = L_22.get_z_4();
		int32_t L_24 = V_1;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_23, (float)(((float)((float)L_24)))));
		G_B6_1 = G_B5_0;
	}

IL_0070:
	{
		V_4 = G_B6_0;
		// return new Vector3(xPos, yPos, zPos);
		float L_25 = V_3;
		float L_26 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_27), G_B6_1, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_Update_m4C2C7E74EAB1B08A9AF0013BA7BF2212784AA911 (TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_Update_m4C2C7E74EAB1B08A9AF0013BA7BF2212784AA911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if ((Application.isPlaying || !OnlyInEditMode) || editorUpdated)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1 = __this->get_OnlyInEditMode_11();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		bool L_2 = __this->get_editorUpdated_13();
		if (!L_2)
		{
			goto IL_00e9;
		}
	}

IL_001a:
	{
		// int childCount = transform.childCount;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (Centered)
		bool L_5 = __this->get_Centered_9();
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// offSet = GetListPosition(Mathf.CeilToInt(childCount / Columns) * Columns - 1) * -0.5f + Vector3.Scale(TileSize, LayoutDireciton) * -0.5f;
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_8 = Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B((((float)((float)((int32_t)((int32_t)L_6/(int32_t)L_7))))), /*hidden argument*/NULL);
		int32_t L_9 = __this->get_Columns_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_9)), (int32_t)1)));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_10, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_12, L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_14, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_11, L_15, /*hidden argument*/NULL);
		__this->set_offSet_12(L_16);
		// }
		goto IL_0088;
	}

IL_007d:
	{
		// offSet = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_offSet_12(L_17);
	}

IL_0088:
	{
		// for (int i = 0; i < childCount; i++)
		V_1 = 0;
		goto IL_00de;
	}

IL_008c:
	{
		// Transform item = transform.GetChild(i);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_18, L_19, /*hidden argument*/NULL);
		// item.localPosition = StartPosition + offSet + (Vector3.Scale(TileSize, LayoutDireciton) * 0.5f) + GetListPosition(i);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = __this->get_StartPosition_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = __this->get_offSet_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_26, (0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_23, L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_28, L_30, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_20, L_31, /*hidden argument*/NULL);
		// for (int i = 0; i < childCount; i++)
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00de:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_33 = V_1;
		int32_t L_34 = V_0;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_008c;
		}
	}
	{
		// editorUpdated = false;
		__this->set_editorUpdated_13((bool)0);
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection__ctor_m1074D16623E98ABEF6987FEA621BB301BAFDEDB6 (TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection__ctor_m1074D16623E98ABEF6987FEA621BB301BAFDEDB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected int Columns = 4;
		__this->set_Columns_4(4);
		// protected Vector3 TileSize = new Vector3(0.1f, 0.1f, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.1f), (0.1f), (0.0f), /*hidden argument*/NULL);
		__this->set_TileSize_5(L_0);
		// protected Vector3 Gutters = new Vector3(0.005f, 0.005f, 0.005f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.005f), (0.005f), (0.005f), /*hidden argument*/NULL);
		__this->set_Gutters_6(L_1);
		// protected Vector3 LayoutDireciton = new Vector3(1, -1, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_2), (1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_LayoutDireciton_7(L_2);
		// protected Vector3 StartPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_StartPosition_8(L_3);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* SourceStateEventData_get_Controller_m7BF48EF5CD2C818A7DF20C40134F3980042D69C4_inline (SourceStateEventData_tA2932F014F702C0C49A608B2486D423456CAF1A6 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityController Controller { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CControllerU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_CurrentTrackedHandedness_m70661B218AD90282C13F96F1D052C1177428B430_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness CurrentTrackedHandedness => currentTrackedHandedness;
		uint8_t L_0 = __this->get_currentTrackedHandedness_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnFirstHandDetected_mDFE374405D00C9E957C76F667C93716297BB4A15_inline (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return onFirstHandDetected; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onFirstHandDetected_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnHandActivate_mE368AA7CADFE60DDB3324BF58A58E3541C8644EA_inline (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return onHandActivate; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onHandActivate_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnLastHandLost_m59346AC24F61226EAB8D57AE2B7B0F79B95775A0_inline (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return onLastHandLost; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onLastHandLost_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnHandDeactivate_mF0C66A989EAF088BE1D7A6227EF5AE041F1740A0_inline (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return onHandDeactivate; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onHandDeactivate_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6 * HandBounds_get_Bounds_m278748BE0578B354C155E6ACB585F665E95A53F2_inline (HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<Handedness, Bounds> Bounds { get; private set; } = new Dictionary<Handedness, Bounds>();
		Dictionary_2_t25177B9A2210520B3AE93E75892991661B6700C6 * L_0 = __this->get_U3CBoundsU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_m688CF9BFD91713E05AC1F12E0E53F994BF972060_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => additionalRotation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318_inline (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_position_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m71627901924EA3C2FA3F88E1346D5B6C96CE4BC9_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateSolvers = value;
		bool L_0 = ___value0;
		__this->set_updateSolvers_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Momentum_get_SnapZ_mC9198F80575BD4DA31C961413746DA7E229A5084_inline (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	{
		// get { return snapZ; }
		bool L_0 = __this->get_snapZ_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_mBC993B50E8189431844A276EF16B7AE97A518E8A_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalPositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_mCDF9AC407AEDEB61DCE17B756E70A9A11C1BC779_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->get_U3CDeltaTimeU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Momentum_get_AccelerationRate_m7275BF29D9A0076AE57185FD8C54933CC4AE882B_inline (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	{
		// get { return accelerationRate; }
		float L_0 = __this->get_accelerationRate_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Momentum_get_Springiness_mEB73E476E71B8CC3BA383CAB0D4DED4087A45E60_inline (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	{
		// get { return springiness; }
		float L_0 = __this->get_springiness_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Momentum_get_ResistanceVelocityPower_mB3FD8F9FA83430AE3B2CF7EBFBD59C6D91A8C7CD_inline (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	{
		// get { return resistanceVelocityPower; }
		float L_0 = __this->get_resistanceVelocityPower_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Momentum_get_Resistance_m6AF85CE5A093AF19654A6588F6A5E1E81BDA923F_inline (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	{
		// get { return resistance; }
		float L_0 = __this->get_resistance_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_LocalOffset_m3CCEC047C1F30289C8BB9E330C7B7B1626CFEBCE_inline (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	{
		// get { return localOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localOffset_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_WorldOffset_mD12EDAC61BFE70094993AD183172E0D0746F98A3_inline (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	{
		// get { return worldOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_worldOffset_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_m20DE85BC6F72BD6743586083455E48271DCDAE88_inline (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	{
		// get { return useAngleStepping; }
		bool L_0 = __this->get_useAngleStepping_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mA864E4BF679B99A5647735F51FB7461327933676_inline (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return useFixedVerticalPosition; }
		bool L_0 = __this->get_useFixedVerticalPosition_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m1FFA0DF35264BB90BE99AB4C90C4FFF532BA5846_inline (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return fixedVerticalPosition; }
		float L_0 = __this->get_fixedVerticalPosition_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m8191CFD21D920E1C6486207A7F9E38F2E4C42ABF_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalPositionU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_m81A56576A3666F6A39912235A4686585AAD73F70_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CGoalRotationU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m90213F18EDA1F56994EDF65A0D24EB4499432BF1_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CGoalRotationU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_m832C11F620D6F80FC85284CDB619EAC97F53A871_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalScaleU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_mA7524961D7EFD428ADD4B542492855C98ACFC763_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalScaleU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_mD040B51407338017EA371B1EE7F4C9CD9E09C7FB_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  L_0 = ___value0;
		__this->set_U3CAltScaleU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mDE2CC0770D2F1FA09D6775E68EDE0CE6EA8C9D47_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CDeltaTimeU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m6275BB399C9173BC8DA81FD5A82EE235996DB490_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => updateSolvers;
		bool L_0 = __this->get_updateSolvers_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_mDBDFCC53139248895EACD23DAC0CECF413395240_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandness;
		uint8_t L_0 = __this->get_trackedHandness_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => preferredTrackedHandedness;
		uint8_t L_0 = __this->get_preferredTrackedHandedness_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m8B1E21E12B5443D96F237F51E02EEBBA6FCEC314_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandJoint;
		int32_t L_0 = __this->get_trackedHandJoint_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_mE9EF9A4AB0F79696FF5E1CF40FC9D2FFFB37C46A_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// get => additionalOffset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_mD7DF10E425BAC3843E2822239C753C8097DD738F_inline (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return currentRaycastDirectionMode; }
		int32_t L_0 = __this->get_currentRaycastDirectionMode_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  SolverHandler_get_AltScale_mF08002B58E90D39D9DD419BB48B9418E428666C2_inline (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  L_0 = __this->get_U3CAltScaleU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3Smoothed_get_Current_m30862D6ABC7579C6BDD1AE400557D8E64455E214_inline (Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Current { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CCurrentU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m52FBBBBE217959DD0589C9A2104E5B614DFAA61B_inline (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return keepOrientationVertical; }
		bool L_0 = __this->get_keepOrientationVertical_28();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_mF489171602EF39E66D4D907B24638ED040557FBE_inline (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return orientationMode; }
		int32_t L_0 = __this->get_orientationMode_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B_inline (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Direction { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CDirectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m4E6677C1421A768C9E2FC75C5661D44383A35982_inline (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return debugEnabled; }
		bool L_0 = __this->get_debugEnabled_29();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092_inline (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Origin { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3COriginU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Terminus_m7D0BC5431DB86CD4C64F310D184E28457D182A03_inline (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Terminus { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CTerminusU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mD29FC2BB2D9E2C629AF8D6E468274651DB9E5F01_inline (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return raycastMode; }
		int32_t L_0 = __this->get_raycastMode_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m82EDC9306C4ED355E9CCBF3B370C873287D540B2_inline (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3COnSurfaceU3Ek__BackingField_30(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint8_t Nullable_1_GetValueOrDefault_mC706E0B49F17806542309300BC07261B874493E5_gshared_inline (Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_value_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m607BE3CCAB8B8E849918279E8689F9C5990F4DC1_gshared_inline (Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC3970F1E5BE45ECFACEA6AE72E1C97D4A0B090A8_gshared_inline (Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}