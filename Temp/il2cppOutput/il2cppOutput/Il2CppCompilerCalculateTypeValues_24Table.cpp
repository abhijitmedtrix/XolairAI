#include "il2cpp-config.h"

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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t537414295;
// System.Collections.Generic.List`1<UnityEngine.KeyCode>
struct List_1_t4071369019;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t881764471;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t2331243652;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t3630163547;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t107129948;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.ContentSizeFitter
struct ContentSizeFitter_t3850442145;
// UnityEngine.UI.Extensions.UIHighlightable/InteractableChangedEvent
struct InteractableChangedEvent_t1889027234;
// UnityEngine.UI.Extensions.UILineRenderer
struct UILineRenderer_t3861579578;
// UnityEngine.UI.Extensions.UISelectableExtension/UIButtonEvent
struct UIButtonEvent_t4276706895;
// UnityEngine.UI.Extensions.UI_TweenScale
struct UI_TweenScale_t1206981451;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t3046220461;
// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t2586782146;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t4137855814;
// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t923838031;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef UIEXTENSIONMETHODS_T3845875705_H
#define UIEXTENSIONMETHODS_T3845875705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UIExtensionMethods
struct  UIExtensionMethods_t3845875705  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIEXTENSIONMETHODS_T3845875705_H
#ifndef U3CTWEENU3EC__ITERATOR0_T2865217980_H
#define U3CTWEENU3EC__ITERATOR0_T2865217980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UI_TweenScale/<Tween>c__Iterator0
struct  U3CTweenU3Ec__Iterator0_t2865217980  : public RuntimeObject
{
public:
	// System.Single UnityEngine.UI.Extensions.UI_TweenScale/<Tween>c__Iterator0::<t>__0
	float ___U3CtU3E__0_0;
	// System.Single UnityEngine.UI.Extensions.UI_TweenScale/<Tween>c__Iterator0::<maxT>__0
	float ___U3CmaxTU3E__0_1;
	// UnityEngine.UI.Extensions.UI_TweenScale UnityEngine.UI.Extensions.UI_TweenScale/<Tween>c__Iterator0::$this
	UI_TweenScale_t1206981451 * ___U24this_2;
	// System.Object UnityEngine.UI.Extensions.UI_TweenScale/<Tween>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean UnityEngine.UI.Extensions.UI_TweenScale/<Tween>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 UnityEngine.UI.Extensions.UI_TweenScale/<Tween>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CtU3E__0_0() { return static_cast<int32_t>(offsetof(U3CTweenU3Ec__Iterator0_t2865217980, ___U3CtU3E__0_0)); }
	inline float get_U3CtU3E__0_0() const { return ___U3CtU3E__0_0; }
	inline float* get_address_of_U3CtU3E__0_0() { return &___U3CtU3E__0_0; }
	inline void set_U3CtU3E__0_0(float value)
	{
		___U3CtU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CmaxTU3E__0_1() { return static_cast<int32_t>(offsetof(U3CTweenU3Ec__Iterator0_t2865217980, ___U3CmaxTU3E__0_1)); }
	inline float get_U3CmaxTU3E__0_1() const { return ___U3CmaxTU3E__0_1; }
	inline float* get_address_of_U3CmaxTU3E__0_1() { return &___U3CmaxTU3E__0_1; }
	inline void set_U3CmaxTU3E__0_1(float value)
	{
		___U3CmaxTU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CTweenU3Ec__Iterator0_t2865217980, ___U24this_2)); }
	inline UI_TweenScale_t1206981451 * get_U24this_2() const { return ___U24this_2; }
	inline UI_TweenScale_t1206981451 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(UI_TweenScale_t1206981451 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CTweenU3Ec__Iterator0_t2865217980, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CTweenU3Ec__Iterator0_t2865217980, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CTweenU3Ec__Iterator0_t2865217980, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTWEENU3EC__ITERATOR0_T2865217980_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef UNITYEVENT_1_T978947469_H
#define UNITYEVENT_1_T978947469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_t978947469  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t978947469, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T978947469_H
#ifndef UNITYEVENT_1_T290703556_H
#define UNITYEVENT_1_T290703556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>
struct  UnityEvent_1_t290703556  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t290703556, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T290703556_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef INTERACTABLECHANGEDEVENT_T1889027234_H
#define INTERACTABLECHANGEDEVENT_T1889027234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UIHighlightable/InteractableChangedEvent
struct  InteractableChangedEvent_t1889027234  : public UnityEvent_1_t978947469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTABLECHANGEDEVENT_T1889027234_H
#ifndef SCROLLTYPE_T1077815876_H
#define SCROLLTYPE_T1077815876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UIScrollToSelection/ScrollType
struct  ScrollType_t1077815876 
{
public:
	// System.Int32 UnityEngine.UI.Extensions.UIScrollToSelection/ScrollType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScrollType_t1077815876, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLTYPE_T1077815876_H
#ifndef UIBUTTONEVENT_T4276706895_H
#define UIBUTTONEVENT_T4276706895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UISelectableExtension/UIButtonEvent
struct  UIButtonEvent_t4276706895  : public UnityEvent_1_t290703556
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBUTTONEVENT_T4276706895_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef UIHIGHLIGHTABLE_T1618005653_H
#define UIHIGHLIGHTABLE_T1618005653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UIHighlightable
struct  UIHighlightable_t1618005653  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.Extensions.UIHighlightable::m_Graphic
	Graphic_t1660335611 * ___m_Graphic_4;
	// System.Boolean UnityEngine.UI.Extensions.UIHighlightable::m_Highlighted
	bool ___m_Highlighted_5;
	// System.Boolean UnityEngine.UI.Extensions.UIHighlightable::m_Pressed
	bool ___m_Pressed_6;
	// System.Boolean UnityEngine.UI.Extensions.UIHighlightable::m_Interactable
	bool ___m_Interactable_7;
	// System.Boolean UnityEngine.UI.Extensions.UIHighlightable::m_ClickToHold
	bool ___m_ClickToHold_8;
	// UnityEngine.Color UnityEngine.UI.Extensions.UIHighlightable::NormalColor
	Color_t2555686324  ___NormalColor_9;
	// UnityEngine.Color UnityEngine.UI.Extensions.UIHighlightable::HighlightedColor
	Color_t2555686324  ___HighlightedColor_10;
	// UnityEngine.Color UnityEngine.UI.Extensions.UIHighlightable::PressedColor
	Color_t2555686324  ___PressedColor_11;
	// UnityEngine.Color UnityEngine.UI.Extensions.UIHighlightable::DisabledColor
	Color_t2555686324  ___DisabledColor_12;
	// UnityEngine.UI.Extensions.UIHighlightable/InteractableChangedEvent UnityEngine.UI.Extensions.UIHighlightable::OnInteractableChanged
	InteractableChangedEvent_t1889027234 * ___OnInteractableChanged_13;

public:
	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(UIHighlightable_t1618005653, ___m_Graphic_4)); }
	inline Graphic_t1660335611 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_t1660335611 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_t1660335611 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Graphic_4), value);
	}

	inline static int32_t get_offset_of_m_Highlighted_5() { return static_cast<int32_t>(offsetof(UIHighlightable_t1618005653, ___m_Highlighted_5)); }
	inline bool get_m_Highlighted_5() const { return ___m_Highlighted_5; }
	inline bool* get_address_of_m_Highlighted_5() { return &___m_Highlighted_5; }
	inline void set_m_Highlighted_5(bool value)
	{
		___m_Highlighted_5 = value;
	}

	inline static int32_t get_offset_of_m_Pressed_6() { return static_cast<int32_t>(offsetof(UIHighlightable_t1618005653, ___m_Pressed_6)); }
	inline bool get_m_Pressed_6() const { return ___m_Pressed_6; }
	inline bool* get_address_of_m_Pressed_6() { return &___m_Pressed_6; }
	inline void set_m_Pressed_6(bool value)
	{
		___m_Pressed_6 = value;
	}

	inline static int32_t get_offset_of_m_Interactable_7() { return static_cast<int32_t>(offsetof(UIHighlightable_t1618005653, ___m_Interactable_7)); }
	inline bool get_m_Interactable_7() const { return ___m_Interactable_7; }
	inline bool* get_address_of_m_Interactable_7() { return &___m_Interactable_7; }
	inline void set_m_Interactable_7(bool value)
	{
		___m_Interactable_7 = value;
	}

	inline static int32_t get_offset_of_m_ClickToHold_8() { return static_cast<int32_t>(offsetof(UIHighlightable_t1618005653, ___m_ClickToHold_8)); }
	inline bool get_m_ClickToHold_8() const { return ___m_ClickToHold_8; }
	inline bool* get_address_of_m_ClickToHold_8() { return &___m_ClickToHold_8; }
	inline void set_m_ClickToHold_8(bool value)
	{
		___m_ClickToHold_8 = value;
	}

	inline static int32_t get_offset_of_NormalColor_9() { return static_cast<int32_t>(offsetof(UIHighlightable_t1618005653, ___NormalColor_9)); }
	inline Color_t2555686324  get_NormalColor_9() const { return ___NormalColor_9; }
	inline Color_t2555686324 * get_address_of_NormalColor_9() { return &___NormalColor_9; }
	inline void set_NormalColor_9(Color_t2555686324  value)
	{
		___NormalColor_9 = value;
	}

	inline static int32_t get_offset_of_HighlightedColor_10() { return static_cast<int32_t>(offsetof(UIHighlightable_t1618005653, ___HighlightedColor_10)); }
	inline Color_t2555686324  get_HighlightedColor_10() const { return ___HighlightedColor_10; }
	inline Color_t2555686324 * get_address_of_HighlightedColor_10() { return &___HighlightedColor_10; }
	inline void set_HighlightedColor_10(Color_t2555686324  value)
	{
		___HighlightedColor_10 = value;
	}

	inline static int32_t get_offset_of_PressedColor_11() { return static_cast<int32_t>(offsetof(UIHighlightable_t1618005653, ___PressedColor_11)); }
	inline Color_t2555686324  get_PressedColor_11() const { return ___PressedColor_11; }
	inline Color_t2555686324 * get_address_of_PressedColor_11() { return &___PressedColor_11; }
	inline void set_PressedColor_11(Color_t2555686324  value)
	{
		___PressedColor_11 = value;
	}

	inline static int32_t get_offset_of_DisabledColor_12() { return static_cast<int32_t>(offsetof(UIHighlightable_t1618005653, ___DisabledColor_12)); }
	inline Color_t2555686324  get_DisabledColor_12() const { return ___DisabledColor_12; }
	inline Color_t2555686324 * get_address_of_DisabledColor_12() { return &___DisabledColor_12; }
	inline void set_DisabledColor_12(Color_t2555686324  value)
	{
		___DisabledColor_12 = value;
	}

	inline static int32_t get_offset_of_OnInteractableChanged_13() { return static_cast<int32_t>(offsetof(UIHighlightable_t1618005653, ___OnInteractableChanged_13)); }
	inline InteractableChangedEvent_t1889027234 * get_OnInteractableChanged_13() const { return ___OnInteractableChanged_13; }
	inline InteractableChangedEvent_t1889027234 ** get_address_of_OnInteractableChanged_13() { return &___OnInteractableChanged_13; }
	inline void set_OnInteractableChanged_13(InteractableChangedEvent_t1889027234 * value)
	{
		___OnInteractableChanged_13 = value;
		Il2CppCodeGenWriteBarrier((&___OnInteractableChanged_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIHIGHLIGHTABLE_T1618005653_H
#ifndef UILINECONNECTOR_T3834171106_H
#define UILINECONNECTOR_T3834171106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UILineConnector
struct  UILineConnector_t3834171106  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform[] UnityEngine.UI.Extensions.UILineConnector::transforms
	RectTransformU5BU5D_t107129948* ___transforms_4;
	// UnityEngine.Vector2[] UnityEngine.UI.Extensions.UILineConnector::previousPositions
	Vector2U5BU5D_t1457185986* ___previousPositions_5;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UILineConnector::canvas
	RectTransform_t3704657025 * ___canvas_6;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UILineConnector::rt
	RectTransform_t3704657025 * ___rt_7;
	// UnityEngine.UI.Extensions.UILineRenderer UnityEngine.UI.Extensions.UILineConnector::lr
	UILineRenderer_t3861579578 * ___lr_8;

public:
	inline static int32_t get_offset_of_transforms_4() { return static_cast<int32_t>(offsetof(UILineConnector_t3834171106, ___transforms_4)); }
	inline RectTransformU5BU5D_t107129948* get_transforms_4() const { return ___transforms_4; }
	inline RectTransformU5BU5D_t107129948** get_address_of_transforms_4() { return &___transforms_4; }
	inline void set_transforms_4(RectTransformU5BU5D_t107129948* value)
	{
		___transforms_4 = value;
		Il2CppCodeGenWriteBarrier((&___transforms_4), value);
	}

	inline static int32_t get_offset_of_previousPositions_5() { return static_cast<int32_t>(offsetof(UILineConnector_t3834171106, ___previousPositions_5)); }
	inline Vector2U5BU5D_t1457185986* get_previousPositions_5() const { return ___previousPositions_5; }
	inline Vector2U5BU5D_t1457185986** get_address_of_previousPositions_5() { return &___previousPositions_5; }
	inline void set_previousPositions_5(Vector2U5BU5D_t1457185986* value)
	{
		___previousPositions_5 = value;
		Il2CppCodeGenWriteBarrier((&___previousPositions_5), value);
	}

	inline static int32_t get_offset_of_canvas_6() { return static_cast<int32_t>(offsetof(UILineConnector_t3834171106, ___canvas_6)); }
	inline RectTransform_t3704657025 * get_canvas_6() const { return ___canvas_6; }
	inline RectTransform_t3704657025 ** get_address_of_canvas_6() { return &___canvas_6; }
	inline void set_canvas_6(RectTransform_t3704657025 * value)
	{
		___canvas_6 = value;
		Il2CppCodeGenWriteBarrier((&___canvas_6), value);
	}

	inline static int32_t get_offset_of_rt_7() { return static_cast<int32_t>(offsetof(UILineConnector_t3834171106, ___rt_7)); }
	inline RectTransform_t3704657025 * get_rt_7() const { return ___rt_7; }
	inline RectTransform_t3704657025 ** get_address_of_rt_7() { return &___rt_7; }
	inline void set_rt_7(RectTransform_t3704657025 * value)
	{
		___rt_7 = value;
		Il2CppCodeGenWriteBarrier((&___rt_7), value);
	}

	inline static int32_t get_offset_of_lr_8() { return static_cast<int32_t>(offsetof(UILineConnector_t3834171106, ___lr_8)); }
	inline UILineRenderer_t3861579578 * get_lr_8() const { return ___lr_8; }
	inline UILineRenderer_t3861579578 ** get_address_of_lr_8() { return &___lr_8; }
	inline void set_lr_8(UILineRenderer_t3861579578 * value)
	{
		___lr_8 = value;
		Il2CppCodeGenWriteBarrier((&___lr_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILINECONNECTOR_T3834171106_H
#ifndef UISCROLLTOSELECTION_T2562921685_H
#define UISCROLLTOSELECTION_T2562921685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UIScrollToSelection
struct  UIScrollToSelection_t2562921685  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Extensions.UIScrollToSelection/ScrollType UnityEngine.UI.Extensions.UIScrollToSelection::scrollDirection
	int32_t ___scrollDirection_4;
	// System.Single UnityEngine.UI.Extensions.UIScrollToSelection::scrollSpeed
	float ___scrollSpeed_5;
	// System.Boolean UnityEngine.UI.Extensions.UIScrollToSelection::cancelScrollOnInput
	bool ___cancelScrollOnInput_6;
	// System.Collections.Generic.List`1<UnityEngine.KeyCode> UnityEngine.UI.Extensions.UIScrollToSelection::cancelScrollKeycodes
	List_1_t4071369019 * ___cancelScrollKeycodes_7;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIScrollToSelection::<ScrollWindow>k__BackingField
	RectTransform_t3704657025 * ___U3CScrollWindowU3Ek__BackingField_8;
	// UnityEngine.UI.ScrollRect UnityEngine.UI.Extensions.UIScrollToSelection::<TargetScrollRect>k__BackingField
	ScrollRect_t4137855814 * ___U3CTargetScrollRectU3Ek__BackingField_9;
	// UnityEngine.GameObject UnityEngine.UI.Extensions.UIScrollToSelection::<LastCheckedGameObject>k__BackingField
	GameObject_t1113636619 * ___U3CLastCheckedGameObjectU3Ek__BackingField_10;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIScrollToSelection::<CurrentTargetRectTransform>k__BackingField
	RectTransform_t3704657025 * ___U3CCurrentTargetRectTransformU3Ek__BackingField_11;
	// System.Boolean UnityEngine.UI.Extensions.UIScrollToSelection::<IsManualScrollingAvailable>k__BackingField
	bool ___U3CIsManualScrollingAvailableU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_scrollDirection_4() { return static_cast<int32_t>(offsetof(UIScrollToSelection_t2562921685, ___scrollDirection_4)); }
	inline int32_t get_scrollDirection_4() const { return ___scrollDirection_4; }
	inline int32_t* get_address_of_scrollDirection_4() { return &___scrollDirection_4; }
	inline void set_scrollDirection_4(int32_t value)
	{
		___scrollDirection_4 = value;
	}

	inline static int32_t get_offset_of_scrollSpeed_5() { return static_cast<int32_t>(offsetof(UIScrollToSelection_t2562921685, ___scrollSpeed_5)); }
	inline float get_scrollSpeed_5() const { return ___scrollSpeed_5; }
	inline float* get_address_of_scrollSpeed_5() { return &___scrollSpeed_5; }
	inline void set_scrollSpeed_5(float value)
	{
		___scrollSpeed_5 = value;
	}

	inline static int32_t get_offset_of_cancelScrollOnInput_6() { return static_cast<int32_t>(offsetof(UIScrollToSelection_t2562921685, ___cancelScrollOnInput_6)); }
	inline bool get_cancelScrollOnInput_6() const { return ___cancelScrollOnInput_6; }
	inline bool* get_address_of_cancelScrollOnInput_6() { return &___cancelScrollOnInput_6; }
	inline void set_cancelScrollOnInput_6(bool value)
	{
		___cancelScrollOnInput_6 = value;
	}

	inline static int32_t get_offset_of_cancelScrollKeycodes_7() { return static_cast<int32_t>(offsetof(UIScrollToSelection_t2562921685, ___cancelScrollKeycodes_7)); }
	inline List_1_t4071369019 * get_cancelScrollKeycodes_7() const { return ___cancelScrollKeycodes_7; }
	inline List_1_t4071369019 ** get_address_of_cancelScrollKeycodes_7() { return &___cancelScrollKeycodes_7; }
	inline void set_cancelScrollKeycodes_7(List_1_t4071369019 * value)
	{
		___cancelScrollKeycodes_7 = value;
		Il2CppCodeGenWriteBarrier((&___cancelScrollKeycodes_7), value);
	}

	inline static int32_t get_offset_of_U3CScrollWindowU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(UIScrollToSelection_t2562921685, ___U3CScrollWindowU3Ek__BackingField_8)); }
	inline RectTransform_t3704657025 * get_U3CScrollWindowU3Ek__BackingField_8() const { return ___U3CScrollWindowU3Ek__BackingField_8; }
	inline RectTransform_t3704657025 ** get_address_of_U3CScrollWindowU3Ek__BackingField_8() { return &___U3CScrollWindowU3Ek__BackingField_8; }
	inline void set_U3CScrollWindowU3Ek__BackingField_8(RectTransform_t3704657025 * value)
	{
		___U3CScrollWindowU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CScrollWindowU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CTargetScrollRectU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(UIScrollToSelection_t2562921685, ___U3CTargetScrollRectU3Ek__BackingField_9)); }
	inline ScrollRect_t4137855814 * get_U3CTargetScrollRectU3Ek__BackingField_9() const { return ___U3CTargetScrollRectU3Ek__BackingField_9; }
	inline ScrollRect_t4137855814 ** get_address_of_U3CTargetScrollRectU3Ek__BackingField_9() { return &___U3CTargetScrollRectU3Ek__BackingField_9; }
	inline void set_U3CTargetScrollRectU3Ek__BackingField_9(ScrollRect_t4137855814 * value)
	{
		___U3CTargetScrollRectU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTargetScrollRectU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CLastCheckedGameObjectU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(UIScrollToSelection_t2562921685, ___U3CLastCheckedGameObjectU3Ek__BackingField_10)); }
	inline GameObject_t1113636619 * get_U3CLastCheckedGameObjectU3Ek__BackingField_10() const { return ___U3CLastCheckedGameObjectU3Ek__BackingField_10; }
	inline GameObject_t1113636619 ** get_address_of_U3CLastCheckedGameObjectU3Ek__BackingField_10() { return &___U3CLastCheckedGameObjectU3Ek__BackingField_10; }
	inline void set_U3CLastCheckedGameObjectU3Ek__BackingField_10(GameObject_t1113636619 * value)
	{
		___U3CLastCheckedGameObjectU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLastCheckedGameObjectU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CCurrentTargetRectTransformU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(UIScrollToSelection_t2562921685, ___U3CCurrentTargetRectTransformU3Ek__BackingField_11)); }
	inline RectTransform_t3704657025 * get_U3CCurrentTargetRectTransformU3Ek__BackingField_11() const { return ___U3CCurrentTargetRectTransformU3Ek__BackingField_11; }
	inline RectTransform_t3704657025 ** get_address_of_U3CCurrentTargetRectTransformU3Ek__BackingField_11() { return &___U3CCurrentTargetRectTransformU3Ek__BackingField_11; }
	inline void set_U3CCurrentTargetRectTransformU3Ek__BackingField_11(RectTransform_t3704657025 * value)
	{
		___U3CCurrentTargetRectTransformU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentTargetRectTransformU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CIsManualScrollingAvailableU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(UIScrollToSelection_t2562921685, ___U3CIsManualScrollingAvailableU3Ek__BackingField_12)); }
	inline bool get_U3CIsManualScrollingAvailableU3Ek__BackingField_12() const { return ___U3CIsManualScrollingAvailableU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CIsManualScrollingAvailableU3Ek__BackingField_12() { return &___U3CIsManualScrollingAvailableU3Ek__BackingField_12; }
	inline void set_U3CIsManualScrollingAvailableU3Ek__BackingField_12(bool value)
	{
		___U3CIsManualScrollingAvailableU3Ek__BackingField_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISCROLLTOSELECTION_T2562921685_H
#ifndef UISCROLLTOSELECTIONXY_T1454929589_H
#define UISCROLLTOSELECTIONXY_T1454929589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UIScrollToSelectionXY
struct  UIScrollToSelectionXY_t1454929589  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityEngine.UI.Extensions.UIScrollToSelectionXY::scrollSpeed
	float ___scrollSpeed_4;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIScrollToSelectionXY::layoutListGroup
	RectTransform_t3704657025 * ___layoutListGroup_5;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIScrollToSelectionXY::targetScrollObject
	RectTransform_t3704657025 * ___targetScrollObject_6;
	// System.Boolean UnityEngine.UI.Extensions.UIScrollToSelectionXY::scrollToSelection
	bool ___scrollToSelection_7;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIScrollToSelectionXY::scrollWindow
	RectTransform_t3704657025 * ___scrollWindow_8;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIScrollToSelectionXY::currentCanvas
	RectTransform_t3704657025 * ___currentCanvas_9;
	// UnityEngine.UI.ScrollRect UnityEngine.UI.Extensions.UIScrollToSelectionXY::targetScrollRect
	ScrollRect_t4137855814 * ___targetScrollRect_10;

public:
	inline static int32_t get_offset_of_scrollSpeed_4() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___scrollSpeed_4)); }
	inline float get_scrollSpeed_4() const { return ___scrollSpeed_4; }
	inline float* get_address_of_scrollSpeed_4() { return &___scrollSpeed_4; }
	inline void set_scrollSpeed_4(float value)
	{
		___scrollSpeed_4 = value;
	}

	inline static int32_t get_offset_of_layoutListGroup_5() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___layoutListGroup_5)); }
	inline RectTransform_t3704657025 * get_layoutListGroup_5() const { return ___layoutListGroup_5; }
	inline RectTransform_t3704657025 ** get_address_of_layoutListGroup_5() { return &___layoutListGroup_5; }
	inline void set_layoutListGroup_5(RectTransform_t3704657025 * value)
	{
		___layoutListGroup_5 = value;
		Il2CppCodeGenWriteBarrier((&___layoutListGroup_5), value);
	}

	inline static int32_t get_offset_of_targetScrollObject_6() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___targetScrollObject_6)); }
	inline RectTransform_t3704657025 * get_targetScrollObject_6() const { return ___targetScrollObject_6; }
	inline RectTransform_t3704657025 ** get_address_of_targetScrollObject_6() { return &___targetScrollObject_6; }
	inline void set_targetScrollObject_6(RectTransform_t3704657025 * value)
	{
		___targetScrollObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___targetScrollObject_6), value);
	}

	inline static int32_t get_offset_of_scrollToSelection_7() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___scrollToSelection_7)); }
	inline bool get_scrollToSelection_7() const { return ___scrollToSelection_7; }
	inline bool* get_address_of_scrollToSelection_7() { return &___scrollToSelection_7; }
	inline void set_scrollToSelection_7(bool value)
	{
		___scrollToSelection_7 = value;
	}

	inline static int32_t get_offset_of_scrollWindow_8() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___scrollWindow_8)); }
	inline RectTransform_t3704657025 * get_scrollWindow_8() const { return ___scrollWindow_8; }
	inline RectTransform_t3704657025 ** get_address_of_scrollWindow_8() { return &___scrollWindow_8; }
	inline void set_scrollWindow_8(RectTransform_t3704657025 * value)
	{
		___scrollWindow_8 = value;
		Il2CppCodeGenWriteBarrier((&___scrollWindow_8), value);
	}

	inline static int32_t get_offset_of_currentCanvas_9() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___currentCanvas_9)); }
	inline RectTransform_t3704657025 * get_currentCanvas_9() const { return ___currentCanvas_9; }
	inline RectTransform_t3704657025 ** get_address_of_currentCanvas_9() { return &___currentCanvas_9; }
	inline void set_currentCanvas_9(RectTransform_t3704657025 * value)
	{
		___currentCanvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___currentCanvas_9), value);
	}

	inline static int32_t get_offset_of_targetScrollRect_10() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___targetScrollRect_10)); }
	inline ScrollRect_t4137855814 * get_targetScrollRect_10() const { return ___targetScrollRect_10; }
	inline ScrollRect_t4137855814 ** get_address_of_targetScrollRect_10() { return &___targetScrollRect_10; }
	inline void set_targetScrollRect_10(ScrollRect_t4137855814 * value)
	{
		___targetScrollRect_10 = value;
		Il2CppCodeGenWriteBarrier((&___targetScrollRect_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISCROLLTOSELECTIONXY_T1454929589_H
#ifndef UISELECTABLEEXTENSION_T989851811_H
#define UISELECTABLEEXTENSION_T989851811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UISelectableExtension
struct  UISelectableExtension_t989851811  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Extensions.UISelectableExtension/UIButtonEvent UnityEngine.UI.Extensions.UISelectableExtension::OnButtonPress
	UIButtonEvent_t4276706895 * ___OnButtonPress_4;
	// UnityEngine.UI.Extensions.UISelectableExtension/UIButtonEvent UnityEngine.UI.Extensions.UISelectableExtension::OnButtonRelease
	UIButtonEvent_t4276706895 * ___OnButtonRelease_5;
	// UnityEngine.UI.Extensions.UISelectableExtension/UIButtonEvent UnityEngine.UI.Extensions.UISelectableExtension::OnButtonHeld
	UIButtonEvent_t4276706895 * ___OnButtonHeld_6;
	// System.Boolean UnityEngine.UI.Extensions.UISelectableExtension::_pressed
	bool ____pressed_7;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.UI.Extensions.UISelectableExtension::_heldEventData
	PointerEventData_t3807901092 * ____heldEventData_8;

public:
	inline static int32_t get_offset_of_OnButtonPress_4() { return static_cast<int32_t>(offsetof(UISelectableExtension_t989851811, ___OnButtonPress_4)); }
	inline UIButtonEvent_t4276706895 * get_OnButtonPress_4() const { return ___OnButtonPress_4; }
	inline UIButtonEvent_t4276706895 ** get_address_of_OnButtonPress_4() { return &___OnButtonPress_4; }
	inline void set_OnButtonPress_4(UIButtonEvent_t4276706895 * value)
	{
		___OnButtonPress_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnButtonPress_4), value);
	}

	inline static int32_t get_offset_of_OnButtonRelease_5() { return static_cast<int32_t>(offsetof(UISelectableExtension_t989851811, ___OnButtonRelease_5)); }
	inline UIButtonEvent_t4276706895 * get_OnButtonRelease_5() const { return ___OnButtonRelease_5; }
	inline UIButtonEvent_t4276706895 ** get_address_of_OnButtonRelease_5() { return &___OnButtonRelease_5; }
	inline void set_OnButtonRelease_5(UIButtonEvent_t4276706895 * value)
	{
		___OnButtonRelease_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnButtonRelease_5), value);
	}

	inline static int32_t get_offset_of_OnButtonHeld_6() { return static_cast<int32_t>(offsetof(UISelectableExtension_t989851811, ___OnButtonHeld_6)); }
	inline UIButtonEvent_t4276706895 * get_OnButtonHeld_6() const { return ___OnButtonHeld_6; }
	inline UIButtonEvent_t4276706895 ** get_address_of_OnButtonHeld_6() { return &___OnButtonHeld_6; }
	inline void set_OnButtonHeld_6(UIButtonEvent_t4276706895 * value)
	{
		___OnButtonHeld_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnButtonHeld_6), value);
	}

	inline static int32_t get_offset_of__pressed_7() { return static_cast<int32_t>(offsetof(UISelectableExtension_t989851811, ____pressed_7)); }
	inline bool get__pressed_7() const { return ____pressed_7; }
	inline bool* get_address_of__pressed_7() { return &____pressed_7; }
	inline void set__pressed_7(bool value)
	{
		____pressed_7 = value;
	}

	inline static int32_t get_offset_of__heldEventData_8() { return static_cast<int32_t>(offsetof(UISelectableExtension_t989851811, ____heldEventData_8)); }
	inline PointerEventData_t3807901092 * get__heldEventData_8() const { return ____heldEventData_8; }
	inline PointerEventData_t3807901092 ** get_address_of__heldEventData_8() { return &____heldEventData_8; }
	inline void set__heldEventData_8(PointerEventData_t3807901092 * value)
	{
		____heldEventData_8 = value;
		Il2CppCodeGenWriteBarrier((&____heldEventData_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISELECTABLEEXTENSION_T989851811_H
#ifndef UI_SCROLLRECTOCCLUSION_T2700427833_H
#define UI_SCROLLRECTOCCLUSION_T2700427833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UI_ScrollRectOcclusion
struct  UI_ScrollRectOcclusion_t2700427833  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::InitByUser
	bool ___InitByUser_4;
	// UnityEngine.UI.ScrollRect UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_scrollRect
	ScrollRect_t4137855814 * ____scrollRect_5;
	// UnityEngine.UI.ContentSizeFitter UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_contentSizeFitter
	ContentSizeFitter_t3850442145 * ____contentSizeFitter_6;
	// UnityEngine.UI.VerticalLayoutGroup UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_verticalLayoutGroup
	VerticalLayoutGroup_t923838031 * ____verticalLayoutGroup_7;
	// UnityEngine.UI.HorizontalLayoutGroup UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_horizontalLayoutGroup
	HorizontalLayoutGroup_t2586782146 * ____horizontalLayoutGroup_8;
	// UnityEngine.UI.GridLayoutGroup UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_gridLayoutGroup
	GridLayoutGroup_t3046220461 * ____gridLayoutGroup_9;
	// System.Boolean UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_isVertical
	bool ____isVertical_10;
	// System.Boolean UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_isHorizontal
	bool ____isHorizontal_11;
	// System.Single UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_disableMarginX
	float ____disableMarginX_12;
	// System.Single UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_disableMarginY
	float ____disableMarginY_13;
	// System.Boolean UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::hasDisabledGridComponents
	bool ___hasDisabledGridComponents_14;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::items
	List_1_t881764471 * ___items_15;

public:
	inline static int32_t get_offset_of_InitByUser_4() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ___InitByUser_4)); }
	inline bool get_InitByUser_4() const { return ___InitByUser_4; }
	inline bool* get_address_of_InitByUser_4() { return &___InitByUser_4; }
	inline void set_InitByUser_4(bool value)
	{
		___InitByUser_4 = value;
	}

	inline static int32_t get_offset_of__scrollRect_5() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____scrollRect_5)); }
	inline ScrollRect_t4137855814 * get__scrollRect_5() const { return ____scrollRect_5; }
	inline ScrollRect_t4137855814 ** get_address_of__scrollRect_5() { return &____scrollRect_5; }
	inline void set__scrollRect_5(ScrollRect_t4137855814 * value)
	{
		____scrollRect_5 = value;
		Il2CppCodeGenWriteBarrier((&____scrollRect_5), value);
	}

	inline static int32_t get_offset_of__contentSizeFitter_6() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____contentSizeFitter_6)); }
	inline ContentSizeFitter_t3850442145 * get__contentSizeFitter_6() const { return ____contentSizeFitter_6; }
	inline ContentSizeFitter_t3850442145 ** get_address_of__contentSizeFitter_6() { return &____contentSizeFitter_6; }
	inline void set__contentSizeFitter_6(ContentSizeFitter_t3850442145 * value)
	{
		____contentSizeFitter_6 = value;
		Il2CppCodeGenWriteBarrier((&____contentSizeFitter_6), value);
	}

	inline static int32_t get_offset_of__verticalLayoutGroup_7() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____verticalLayoutGroup_7)); }
	inline VerticalLayoutGroup_t923838031 * get__verticalLayoutGroup_7() const { return ____verticalLayoutGroup_7; }
	inline VerticalLayoutGroup_t923838031 ** get_address_of__verticalLayoutGroup_7() { return &____verticalLayoutGroup_7; }
	inline void set__verticalLayoutGroup_7(VerticalLayoutGroup_t923838031 * value)
	{
		____verticalLayoutGroup_7 = value;
		Il2CppCodeGenWriteBarrier((&____verticalLayoutGroup_7), value);
	}

	inline static int32_t get_offset_of__horizontalLayoutGroup_8() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____horizontalLayoutGroup_8)); }
	inline HorizontalLayoutGroup_t2586782146 * get__horizontalLayoutGroup_8() const { return ____horizontalLayoutGroup_8; }
	inline HorizontalLayoutGroup_t2586782146 ** get_address_of__horizontalLayoutGroup_8() { return &____horizontalLayoutGroup_8; }
	inline void set__horizontalLayoutGroup_8(HorizontalLayoutGroup_t2586782146 * value)
	{
		____horizontalLayoutGroup_8 = value;
		Il2CppCodeGenWriteBarrier((&____horizontalLayoutGroup_8), value);
	}

	inline static int32_t get_offset_of__gridLayoutGroup_9() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____gridLayoutGroup_9)); }
	inline GridLayoutGroup_t3046220461 * get__gridLayoutGroup_9() const { return ____gridLayoutGroup_9; }
	inline GridLayoutGroup_t3046220461 ** get_address_of__gridLayoutGroup_9() { return &____gridLayoutGroup_9; }
	inline void set__gridLayoutGroup_9(GridLayoutGroup_t3046220461 * value)
	{
		____gridLayoutGroup_9 = value;
		Il2CppCodeGenWriteBarrier((&____gridLayoutGroup_9), value);
	}

	inline static int32_t get_offset_of__isVertical_10() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____isVertical_10)); }
	inline bool get__isVertical_10() const { return ____isVertical_10; }
	inline bool* get_address_of__isVertical_10() { return &____isVertical_10; }
	inline void set__isVertical_10(bool value)
	{
		____isVertical_10 = value;
	}

	inline static int32_t get_offset_of__isHorizontal_11() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____isHorizontal_11)); }
	inline bool get__isHorizontal_11() const { return ____isHorizontal_11; }
	inline bool* get_address_of__isHorizontal_11() { return &____isHorizontal_11; }
	inline void set__isHorizontal_11(bool value)
	{
		____isHorizontal_11 = value;
	}

	inline static int32_t get_offset_of__disableMarginX_12() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____disableMarginX_12)); }
	inline float get__disableMarginX_12() const { return ____disableMarginX_12; }
	inline float* get_address_of__disableMarginX_12() { return &____disableMarginX_12; }
	inline void set__disableMarginX_12(float value)
	{
		____disableMarginX_12 = value;
	}

	inline static int32_t get_offset_of__disableMarginY_13() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____disableMarginY_13)); }
	inline float get__disableMarginY_13() const { return ____disableMarginY_13; }
	inline float* get_address_of__disableMarginY_13() { return &____disableMarginY_13; }
	inline void set__disableMarginY_13(float value)
	{
		____disableMarginY_13 = value;
	}

	inline static int32_t get_offset_of_hasDisabledGridComponents_14() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ___hasDisabledGridComponents_14)); }
	inline bool get_hasDisabledGridComponents_14() const { return ___hasDisabledGridComponents_14; }
	inline bool* get_address_of_hasDisabledGridComponents_14() { return &___hasDisabledGridComponents_14; }
	inline void set_hasDisabledGridComponents_14(bool value)
	{
		___hasDisabledGridComponents_14 = value;
	}

	inline static int32_t get_offset_of_items_15() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ___items_15)); }
	inline List_1_t881764471 * get_items_15() const { return ___items_15; }
	inline List_1_t881764471 ** get_address_of_items_15() { return &___items_15; }
	inline void set_items_15(List_1_t881764471 * value)
	{
		___items_15 = value;
		Il2CppCodeGenWriteBarrier((&___items_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UI_SCROLLRECTOCCLUSION_T2700427833_H
#ifndef UI_TWEENSCALE_T1206981451_H
#define UI_TWEENSCALE_T1206981451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UI_TweenScale
struct  UI_TweenScale_t1206981451  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AnimationCurve UnityEngine.UI.Extensions.UI_TweenScale::animCurve
	AnimationCurve_t3046754366 * ___animCurve_4;
	// System.Single UnityEngine.UI.Extensions.UI_TweenScale::speed
	float ___speed_5;
	// System.Boolean UnityEngine.UI.Extensions.UI_TweenScale::isLoop
	bool ___isLoop_6;
	// System.Boolean UnityEngine.UI.Extensions.UI_TweenScale::playAtAwake
	bool ___playAtAwake_7;
	// System.Boolean UnityEngine.UI.Extensions.UI_TweenScale::isUniform
	bool ___isUniform_8;
	// UnityEngine.AnimationCurve UnityEngine.UI.Extensions.UI_TweenScale::animCurveY
	AnimationCurve_t3046754366 * ___animCurveY_9;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.UI_TweenScale::initScale
	Vector3_t3722313464  ___initScale_10;
	// UnityEngine.Transform UnityEngine.UI.Extensions.UI_TweenScale::myTransform
	Transform_t3600365921 * ___myTransform_11;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.UI_TweenScale::newScale
	Vector3_t3722313464  ___newScale_12;

public:
	inline static int32_t get_offset_of_animCurve_4() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___animCurve_4)); }
	inline AnimationCurve_t3046754366 * get_animCurve_4() const { return ___animCurve_4; }
	inline AnimationCurve_t3046754366 ** get_address_of_animCurve_4() { return &___animCurve_4; }
	inline void set_animCurve_4(AnimationCurve_t3046754366 * value)
	{
		___animCurve_4 = value;
		Il2CppCodeGenWriteBarrier((&___animCurve_4), value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_isLoop_6() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___isLoop_6)); }
	inline bool get_isLoop_6() const { return ___isLoop_6; }
	inline bool* get_address_of_isLoop_6() { return &___isLoop_6; }
	inline void set_isLoop_6(bool value)
	{
		___isLoop_6 = value;
	}

	inline static int32_t get_offset_of_playAtAwake_7() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___playAtAwake_7)); }
	inline bool get_playAtAwake_7() const { return ___playAtAwake_7; }
	inline bool* get_address_of_playAtAwake_7() { return &___playAtAwake_7; }
	inline void set_playAtAwake_7(bool value)
	{
		___playAtAwake_7 = value;
	}

	inline static int32_t get_offset_of_isUniform_8() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___isUniform_8)); }
	inline bool get_isUniform_8() const { return ___isUniform_8; }
	inline bool* get_address_of_isUniform_8() { return &___isUniform_8; }
	inline void set_isUniform_8(bool value)
	{
		___isUniform_8 = value;
	}

	inline static int32_t get_offset_of_animCurveY_9() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___animCurveY_9)); }
	inline AnimationCurve_t3046754366 * get_animCurveY_9() const { return ___animCurveY_9; }
	inline AnimationCurve_t3046754366 ** get_address_of_animCurveY_9() { return &___animCurveY_9; }
	inline void set_animCurveY_9(AnimationCurve_t3046754366 * value)
	{
		___animCurveY_9 = value;
		Il2CppCodeGenWriteBarrier((&___animCurveY_9), value);
	}

	inline static int32_t get_offset_of_initScale_10() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___initScale_10)); }
	inline Vector3_t3722313464  get_initScale_10() const { return ___initScale_10; }
	inline Vector3_t3722313464 * get_address_of_initScale_10() { return &___initScale_10; }
	inline void set_initScale_10(Vector3_t3722313464  value)
	{
		___initScale_10 = value;
	}

	inline static int32_t get_offset_of_myTransform_11() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___myTransform_11)); }
	inline Transform_t3600365921 * get_myTransform_11() const { return ___myTransform_11; }
	inline Transform_t3600365921 ** get_address_of_myTransform_11() { return &___myTransform_11; }
	inline void set_myTransform_11(Transform_t3600365921 * value)
	{
		___myTransform_11 = value;
		Il2CppCodeGenWriteBarrier((&___myTransform_11), value);
	}

	inline static int32_t get_offset_of_newScale_12() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___newScale_12)); }
	inline Vector3_t3722313464  get_newScale_12() const { return ___newScale_12; }
	inline Vector3_t3722313464 * get_address_of_newScale_12() { return &___newScale_12; }
	inline void set_newScale_12(Vector3_t3722313464  value)
	{
		___newScale_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UI_TWEENSCALE_T1206981451_H
#ifndef VRCURSOR_T3235369382_H
#define VRCURSOR_T3235369382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.VRCursor
struct  VRCursor_t3235369382  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityEngine.UI.Extensions.VRCursor::xSens
	float ___xSens_4;
	// System.Single UnityEngine.UI.Extensions.VRCursor::ySens
	float ___ySens_5;
	// UnityEngine.Collider UnityEngine.UI.Extensions.VRCursor::currentCollider
	Collider_t1773347010 * ___currentCollider_6;

public:
	inline static int32_t get_offset_of_xSens_4() { return static_cast<int32_t>(offsetof(VRCursor_t3235369382, ___xSens_4)); }
	inline float get_xSens_4() const { return ___xSens_4; }
	inline float* get_address_of_xSens_4() { return &___xSens_4; }
	inline void set_xSens_4(float value)
	{
		___xSens_4 = value;
	}

	inline static int32_t get_offset_of_ySens_5() { return static_cast<int32_t>(offsetof(VRCursor_t3235369382, ___ySens_5)); }
	inline float get_ySens_5() const { return ___ySens_5; }
	inline float* get_address_of_ySens_5() { return &___ySens_5; }
	inline void set_ySens_5(float value)
	{
		___ySens_5 = value;
	}

	inline static int32_t get_offset_of_currentCollider_6() { return static_cast<int32_t>(offsetof(VRCursor_t3235369382, ___currentCollider_6)); }
	inline Collider_t1773347010 * get_currentCollider_6() const { return ___currentCollider_6; }
	inline Collider_t1773347010 ** get_address_of_currentCollider_6() { return &___currentCollider_6; }
	inline void set_currentCollider_6(Collider_t1773347010 * value)
	{
		___currentCollider_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentCollider_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRCURSOR_T3235369382_H
#ifndef BASEINPUTMODULE_T2019268878_H
#define BASEINPUTMODULE_T2019268878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t2019268878  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t537414295 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t2331243652 * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t3903027533 * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t3630163547 * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t3630163547 * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_RaycastResultCache_4)); }
	inline List_1_t537414295 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t537414295 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t537414295 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_RaycastResultCache_4), value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_AxisEventData_5)); }
	inline AxisEventData_t2331243652 * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t2331243652 ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t2331243652 * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_AxisEventData_5), value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_EventSystem_6)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_6), value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_BaseEventData_7)); }
	inline BaseEventData_t3903027533 * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t3903027533 ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t3903027533 * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_BaseEventData_7), value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_InputOverride_8)); }
	inline BaseInput_t3630163547 * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_t3630163547 ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_t3630163547 * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputOverride_8), value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_DefaultInput_9)); }
	inline BaseInput_t3630163547 * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_t3630163547 ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_t3630163547 * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefaultInput_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTMODULE_T2019268878_H
#ifndef VRINPUTMODULE_T2321821966_H
#define VRINPUTMODULE_T2321821966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.VRInputModule
struct  VRInputModule_t2321821966  : public BaseInputModule_t2019268878
{
public:
	// System.Int32 UnityEngine.UI.Extensions.VRInputModule::counter
	int32_t ___counter_12;

public:
	inline static int32_t get_offset_of_counter_12() { return static_cast<int32_t>(offsetof(VRInputModule_t2321821966, ___counter_12)); }
	inline int32_t get_counter_12() const { return ___counter_12; }
	inline int32_t* get_address_of_counter_12() { return &___counter_12; }
	inline void set_counter_12(int32_t value)
	{
		___counter_12 = value;
	}
};

struct VRInputModule_t2321821966_StaticFields
{
public:
	// UnityEngine.GameObject UnityEngine.UI.Extensions.VRInputModule::targetObject
	GameObject_t1113636619 * ___targetObject_10;
	// UnityEngine.UI.Extensions.VRInputModule UnityEngine.UI.Extensions.VRInputModule::_singleton
	VRInputModule_t2321821966 * ____singleton_11;
	// System.Boolean UnityEngine.UI.Extensions.VRInputModule::mouseClicked
	bool ___mouseClicked_13;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.VRInputModule::cursorPosition
	Vector3_t3722313464  ___cursorPosition_14;

public:
	inline static int32_t get_offset_of_targetObject_10() { return static_cast<int32_t>(offsetof(VRInputModule_t2321821966_StaticFields, ___targetObject_10)); }
	inline GameObject_t1113636619 * get_targetObject_10() const { return ___targetObject_10; }
	inline GameObject_t1113636619 ** get_address_of_targetObject_10() { return &___targetObject_10; }
	inline void set_targetObject_10(GameObject_t1113636619 * value)
	{
		___targetObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___targetObject_10), value);
	}

	inline static int32_t get_offset_of__singleton_11() { return static_cast<int32_t>(offsetof(VRInputModule_t2321821966_StaticFields, ____singleton_11)); }
	inline VRInputModule_t2321821966 * get__singleton_11() const { return ____singleton_11; }
	inline VRInputModule_t2321821966 ** get_address_of__singleton_11() { return &____singleton_11; }
	inline void set__singleton_11(VRInputModule_t2321821966 * value)
	{
		____singleton_11 = value;
		Il2CppCodeGenWriteBarrier((&____singleton_11), value);
	}

	inline static int32_t get_offset_of_mouseClicked_13() { return static_cast<int32_t>(offsetof(VRInputModule_t2321821966_StaticFields, ___mouseClicked_13)); }
	inline bool get_mouseClicked_13() const { return ___mouseClicked_13; }
	inline bool* get_address_of_mouseClicked_13() { return &___mouseClicked_13; }
	inline void set_mouseClicked_13(bool value)
	{
		___mouseClicked_13 = value;
	}

	inline static int32_t get_offset_of_cursorPosition_14() { return static_cast<int32_t>(offsetof(VRInputModule_t2321821966_StaticFields, ___cursorPosition_14)); }
	inline Vector3_t3722313464  get_cursorPosition_14() const { return ___cursorPosition_14; }
	inline Vector3_t3722313464 * get_address_of_cursorPosition_14() { return &___cursorPosition_14; }
	inline void set_cursorPosition_14(Vector3_t3722313464  value)
	{
		___cursorPosition_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRINPUTMODULE_T2321821966_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2400 = { sizeof (UI_ScrollRectOcclusion_t2700427833), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2400[12] = 
{
	UI_ScrollRectOcclusion_t2700427833::get_offset_of_InitByUser_4(),
	UI_ScrollRectOcclusion_t2700427833::get_offset_of__scrollRect_5(),
	UI_ScrollRectOcclusion_t2700427833::get_offset_of__contentSizeFitter_6(),
	UI_ScrollRectOcclusion_t2700427833::get_offset_of__verticalLayoutGroup_7(),
	UI_ScrollRectOcclusion_t2700427833::get_offset_of__horizontalLayoutGroup_8(),
	UI_ScrollRectOcclusion_t2700427833::get_offset_of__gridLayoutGroup_9(),
	UI_ScrollRectOcclusion_t2700427833::get_offset_of__isVertical_10(),
	UI_ScrollRectOcclusion_t2700427833::get_offset_of__isHorizontal_11(),
	UI_ScrollRectOcclusion_t2700427833::get_offset_of__disableMarginX_12(),
	UI_ScrollRectOcclusion_t2700427833::get_offset_of__disableMarginY_13(),
	UI_ScrollRectOcclusion_t2700427833::get_offset_of_hasDisabledGridComponents_14(),
	UI_ScrollRectOcclusion_t2700427833::get_offset_of_items_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2401 = { sizeof (UI_TweenScale_t1206981451), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2401[9] = 
{
	UI_TweenScale_t1206981451::get_offset_of_animCurve_4(),
	UI_TweenScale_t1206981451::get_offset_of_speed_5(),
	UI_TweenScale_t1206981451::get_offset_of_isLoop_6(),
	UI_TweenScale_t1206981451::get_offset_of_playAtAwake_7(),
	UI_TweenScale_t1206981451::get_offset_of_isUniform_8(),
	UI_TweenScale_t1206981451::get_offset_of_animCurveY_9(),
	UI_TweenScale_t1206981451::get_offset_of_initScale_10(),
	UI_TweenScale_t1206981451::get_offset_of_myTransform_11(),
	UI_TweenScale_t1206981451::get_offset_of_newScale_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2402 = { sizeof (U3CTweenU3Ec__Iterator0_t2865217980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2402[6] = 
{
	U3CTweenU3Ec__Iterator0_t2865217980::get_offset_of_U3CtU3E__0_0(),
	U3CTweenU3Ec__Iterator0_t2865217980::get_offset_of_U3CmaxTU3E__0_1(),
	U3CTweenU3Ec__Iterator0_t2865217980::get_offset_of_U24this_2(),
	U3CTweenU3Ec__Iterator0_t2865217980::get_offset_of_U24current_3(),
	U3CTweenU3Ec__Iterator0_t2865217980::get_offset_of_U24disposing_4(),
	U3CTweenU3Ec__Iterator0_t2865217980::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2403 = { sizeof (UIExtensionMethods_t3845875705), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2404 = { sizeof (UIHighlightable_t1618005653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2404[10] = 
{
	UIHighlightable_t1618005653::get_offset_of_m_Graphic_4(),
	UIHighlightable_t1618005653::get_offset_of_m_Highlighted_5(),
	UIHighlightable_t1618005653::get_offset_of_m_Pressed_6(),
	UIHighlightable_t1618005653::get_offset_of_m_Interactable_7(),
	UIHighlightable_t1618005653::get_offset_of_m_ClickToHold_8(),
	UIHighlightable_t1618005653::get_offset_of_NormalColor_9(),
	UIHighlightable_t1618005653::get_offset_of_HighlightedColor_10(),
	UIHighlightable_t1618005653::get_offset_of_PressedColor_11(),
	UIHighlightable_t1618005653::get_offset_of_DisabledColor_12(),
	UIHighlightable_t1618005653::get_offset_of_OnInteractableChanged_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2405 = { sizeof (InteractableChangedEvent_t1889027234), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2406 = { sizeof (UILineConnector_t3834171106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2406[5] = 
{
	UILineConnector_t3834171106::get_offset_of_transforms_4(),
	UILineConnector_t3834171106::get_offset_of_previousPositions_5(),
	UILineConnector_t3834171106::get_offset_of_canvas_6(),
	UILineConnector_t3834171106::get_offset_of_rt_7(),
	UILineConnector_t3834171106::get_offset_of_lr_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2407 = { sizeof (UIScrollToSelection_t2562921685), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2407[9] = 
{
	UIScrollToSelection_t2562921685::get_offset_of_scrollDirection_4(),
	UIScrollToSelection_t2562921685::get_offset_of_scrollSpeed_5(),
	UIScrollToSelection_t2562921685::get_offset_of_cancelScrollOnInput_6(),
	UIScrollToSelection_t2562921685::get_offset_of_cancelScrollKeycodes_7(),
	UIScrollToSelection_t2562921685::get_offset_of_U3CScrollWindowU3Ek__BackingField_8(),
	UIScrollToSelection_t2562921685::get_offset_of_U3CTargetScrollRectU3Ek__BackingField_9(),
	UIScrollToSelection_t2562921685::get_offset_of_U3CLastCheckedGameObjectU3Ek__BackingField_10(),
	UIScrollToSelection_t2562921685::get_offset_of_U3CCurrentTargetRectTransformU3Ek__BackingField_11(),
	UIScrollToSelection_t2562921685::get_offset_of_U3CIsManualScrollingAvailableU3Ek__BackingField_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2408 = { sizeof (ScrollType_t1077815876)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2408[4] = 
{
	ScrollType_t1077815876::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2409 = { sizeof (UIScrollToSelectionXY_t1454929589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2409[7] = 
{
	UIScrollToSelectionXY_t1454929589::get_offset_of_scrollSpeed_4(),
	UIScrollToSelectionXY_t1454929589::get_offset_of_layoutListGroup_5(),
	UIScrollToSelectionXY_t1454929589::get_offset_of_targetScrollObject_6(),
	UIScrollToSelectionXY_t1454929589::get_offset_of_scrollToSelection_7(),
	UIScrollToSelectionXY_t1454929589::get_offset_of_scrollWindow_8(),
	UIScrollToSelectionXY_t1454929589::get_offset_of_currentCanvas_9(),
	UIScrollToSelectionXY_t1454929589::get_offset_of_targetScrollRect_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2410 = { sizeof (UISelectableExtension_t989851811), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2410[5] = 
{
	UISelectableExtension_t989851811::get_offset_of_OnButtonPress_4(),
	UISelectableExtension_t989851811::get_offset_of_OnButtonRelease_5(),
	UISelectableExtension_t989851811::get_offset_of_OnButtonHeld_6(),
	UISelectableExtension_t989851811::get_offset_of__pressed_7(),
	UISelectableExtension_t989851811::get_offset_of__heldEventData_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2411 = { sizeof (UIButtonEvent_t4276706895), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2412 = { sizeof (VRCursor_t3235369382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2412[3] = 
{
	VRCursor_t3235369382::get_offset_of_xSens_4(),
	VRCursor_t3235369382::get_offset_of_ySens_5(),
	VRCursor_t3235369382::get_offset_of_currentCollider_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2413 = { sizeof (VRInputModule_t2321821966), -1, sizeof(VRInputModule_t2321821966_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2413[5] = 
{
	VRInputModule_t2321821966_StaticFields::get_offset_of_targetObject_10(),
	VRInputModule_t2321821966_StaticFields::get_offset_of__singleton_11(),
	VRInputModule_t2321821966::get_offset_of_counter_12(),
	VRInputModule_t2321821966_StaticFields::get_offset_of_mouseClicked_13(),
	VRInputModule_t2321821966_StaticFields::get_offset_of_cursorPosition_14(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
