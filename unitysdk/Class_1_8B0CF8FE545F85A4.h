#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15A8EF2824547B27.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace DG::Tweening { class Sequence; }
namespace MoleMole { class HollowCardCombineConfig; }
namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace MoleMole { class UIHollowCardOptionsDialogV2PopWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_326667BB73F9EA49_OFFSET UNITYSDK_OFFSET(0x923C120)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_40BF8BFB24E091F4_OFFSET UNITYSDK_OFFSET(0x923B470)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x923B510)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x923DF60)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_5ED771C2A4E9E63E_OFFSET UNITYSDK_OFFSET(0x923BDA0)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x923D1F0)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_89C03AF435ED2C78_1_OFFSET UNITYSDK_OFFSET(0x923DCE0)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x923B830)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x923B3F0)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x923C1B0)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x923BAB0)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x923C1C0)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x923E240)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x923C0B0)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x923C0C0)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_E67FA6A042436B76_OFFSET UNITYSDK_OFFSET(0x923CE40)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x923B3E0)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x923B3D0)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x923C090)
#define CLASS_1_8B0CF8FE545F85A4_METHOD_1_F9D6101E33F9879D_OFFSET UNITYSDK_OFFSET(0x923B2F0)
#define CLASS_1_8B0CF8FE545F85A4__CTOR_OFFSET UNITYSDK_OFFSET(0x923B090)

inline static constexpr unsigned int Class_1_8B0CF8FE545F85A4_TypeDefinitionIndex = 71249;

class Class_1_8B0CF8FE545F85A4 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_2 = 0x28; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* Field_1_5; // 0x10
	::DG::Tweening::Sequence* Field_1_14; // 0x18
	::MoleMole::UIHollowCardOptionItemWidgetController* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_12; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_13; // 0x30
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_1_11; // 0x38
	::UnityEngine::UI::HorizontalLayoutGroup* Field_1_1; // 0x40
	::MoleMole::HollowCardCombineConfig* Field_1_18; // 0x48
	::UnityEngine::RectTransform* Field_1_17; // 0x50
	::Class_1_0D6706375CDAAE8C* Field_1_10; // 0x58
	::MoleMole::UIHollowCardOptionsDialogV2PopWindowController* Field_1_16; // 0x60
	::Enum_3_15A8EF2824547B27 Field_1_7; // 0x68
	::System::Single Field_1_4; // 0x6C
	::System::Int32 Field_1_15; // 0x70
	::System::Boolean Field_1_19; // 0x74
	::System::Boolean Field_1_9; // 0x75
	::System::Boolean Field_1_20; // 0x76
	::System::Boolean Field_1_8; // 0x77
	::System::Single Field_1_3; // 0x78

	::System::Void _ctor(::MoleMole::UIHollowCardOptionsDialogV2PopWindowController* a1, ::UnityEngine::Transform* a2, ::UnityEngine::UI::HorizontalLayoutGroup* a3, ::Enum_3_15A8EF2824547B27 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowCardOptionsDialogV2PopWindowController*, ::UnityEngine::Transform*, ::UnityEngine::UI::HorizontalLayoutGroup*, ::Enum_3_15A8EF2824547B27))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F9D6101E33F9879D(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_F9D6101E33F9879D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_40BF8BFB24E091F4(::UnityEngine::ParticleSystem* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_40BF8BFB24E091F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_1_5ED771C2A4E9E63E(::Class_1_0D6706375CDAAE8C* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_5ED771C2A4E9E63E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_326667BB73F9EA49()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_326667BB73F9EA49_OFFSET))(this);
	}

	::System::Void Method_1_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_1_E67FA6A042436B76()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_E67FA6A042436B76_OFFSET))(this);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_1_89C03AF435ED2C78_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_89C03AF435ED2C78_1_OFFSET))(this);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0CF8FE545F85A4_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}
};
