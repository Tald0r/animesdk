#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class NapLodControllerGroup;
class ShaderAniHelp;
namespace MoleMole { class MonoBuddyStairAnimCorrector; }
namespace MoleMole { class MonoEffectPluginTransform; }
namespace MoleMole { class MonoSceneColliderWithAvatar; }
namespace MoleMole { class SceneObjectStateWidget; }
namespace MoleMole { class StaticSceneObjectWidget; }
namespace MoleMole { class UIButtonPosHandler; }
namespace MoleMole { class UIButtonSizeHandler; }
namespace MoleMole { class UIGeneralKeyPanelWidgetController; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D;

#define CLASS_2_23B35EAB7DC62A3F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF4559A0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xF455C70)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_10_OFFSET UNITYSDK_OFFSET(0xF456280)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_11_OFFSET UNITYSDK_OFFSET(0xF456310)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_12_OFFSET UNITYSDK_OFFSET(0xF4563A0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_13_OFFSET UNITYSDK_OFFSET(0xF456430)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_14_OFFSET UNITYSDK_OFFSET(0xF4564C0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_15_OFFSET UNITYSDK_OFFSET(0xF456550)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_16_OFFSET UNITYSDK_OFFSET(0xF4565E0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_17_OFFSET UNITYSDK_OFFSET(0xF456670)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_18_OFFSET UNITYSDK_OFFSET(0xF456700)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_19_OFFSET UNITYSDK_OFFSET(0xF456790)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_1_OFFSET UNITYSDK_OFFSET(0xF455D70)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_20_OFFSET UNITYSDK_OFFSET(0xF456820)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_21_OFFSET UNITYSDK_OFFSET(0xF4568B0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_22_OFFSET UNITYSDK_OFFSET(0xF456940)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_23_OFFSET UNITYSDK_OFFSET(0xF4569D0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_24_OFFSET UNITYSDK_OFFSET(0xF456A60)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_25_OFFSET UNITYSDK_OFFSET(0xF456AF0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_2_OFFSET UNITYSDK_OFFSET(0xF455E00)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_3_OFFSET UNITYSDK_OFFSET(0xF455E90)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_4_OFFSET UNITYSDK_OFFSET(0xF455F20)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_5_OFFSET UNITYSDK_OFFSET(0xF455FB0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_6_OFFSET UNITYSDK_OFFSET(0xF456040)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_7_OFFSET UNITYSDK_OFFSET(0xF4560D0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_8_OFFSET UNITYSDK_OFFSET(0xF456160)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_9_OFFSET UNITYSDK_OFFSET(0xF4561F0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_OFFSET UNITYSDK_OFFSET(0xF455CE0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_64865938ADBCB300_1_OFFSET UNITYSDK_OFFSET(0xF4557E0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_64865938ADBCB300_OFFSET UNITYSDK_OFFSET(0xF4555A0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xF455380)
#define CLASS_2_23B35EAB7DC62A3F_ONCREATE_OFFSET UNITYSDK_OFFSET(0xF455BD0)
#define CLASS_2_23B35EAB7DC62A3F_UPDATE_OFFSET UNITYSDK_OFFSET(0xF455010)
#define CLASS_2_23B35EAB7DC62A3F__CTOR_OFFSET UNITYSDK_OFFSET(0xF453E50)

inline static constexpr unsigned int Class_2_23B35EAB7DC62A3F_TypeDefinitionIndex = 78494;

class Class_2_23B35EAB7DC62A3F : public ::Foundation::SingletonDisposable_1<::Class_2_23B35EAB7DC62A3F*>
{
public:
	::Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D<::UnityEngine::UI::Extension::UILocalizationText*>* Field_2_4; // 0x10
	::Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D<::ShaderAniHelp*>* Field_2_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::UnityEngine::MonoBehaviour*>*>* Field_2_14; // 0x20
	::Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D<::MoleMole::MonoEffectPluginTransform*>* Field_2_12; // 0x28
	::Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D<::MoleMole::MonoSceneColliderWithAvatar*>* Field_2_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::UnityEngine::MonoBehaviour*>*>* Field_2_13; // 0x38
	::Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D<::MoleMole::UIButtonSizeHandler*>* Field_2_9; // 0x40
	::Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D<::UnityEngine::UI::Extension::UIButtonEx*>* Field_2_5; // 0x48
	::Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D<::MoleMole::EffectSimulate::NapEffectSimulatorMgr*>* Field_2_10; // 0x50
	::Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D<::MoleMole::MonoBuddyStairAnimCorrector*>* Field_2_0; // 0x58
	::Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D<::MoleMole::UIGeneralKeyPanelWidgetController*>* Field_2_6; // 0x60
	::Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D<::MoleMole::StaticSceneObjectWidget*>* Field_2_3; // 0x68
	::Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D<::NapLodControllerGroup*>* Field_2_11; // 0x70
	::Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D<::MoleMole::UIButtonPosHandler*>* Field_2_8; // 0x78
	::Class_2_23B35EAB7DC62A3F_Class_1_F5CA2513A214083D<::MoleMole::SceneObjectStateWidget*>* Field_2_1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F__CTOR_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_64865938ADBCB300(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_64865938ADBCB300_OFFSET))(this, a1);
	}

	::System::Void Method_2_64865938ADBCB300_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_64865938ADBCB300_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_1(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_2(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_3(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_4(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_5(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_6(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_7(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_8(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_9(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_9_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_10(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_10_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_11(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_11_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_12(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_12_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_13(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_13_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_14(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_14_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_15(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_15_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_16(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_16_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_17(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_17_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_18(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_18_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_19(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_19_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_20(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_20_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_21(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_21_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_22(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_22_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_23(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_23_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_24(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_24_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8A8EE0420FCA1_25(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_56E8A8EE0420FCA1_25_OFFSET))(this, a1);
	}
};
