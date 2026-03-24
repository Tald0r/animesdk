#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UIImgText; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_CA832D813F452AD6;

#define CLASS_2_AFA01A100E02E0CD_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x7093DD0)
#define CLASS_2_AFA01A100E02E0CD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7093E80)
#define CLASS_2_AFA01A100E02E0CD_METHOD_2_D575395A632A2293_OFFSET UNITYSDK_OFFSET(0x7093B50)
#define CLASS_2_AFA01A100E02E0CD__CTOR_OFFSET UNITYSDK_OFFSET(0x7093E70)

inline static constexpr unsigned int Class_2_AFA01A100E02E0CD_TypeDefinitionIndex = 78336;

class Class_2_AFA01A100E02E0CD : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_6; // 0x20
	::MoleMole::MonoGamepadModule* Field_2_4; // 0x28
	::Class_3_CA832D813F452AD6<::MoleMole::UIItemIconBtnWidgetController*>* Field_2_8; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::UnityEngine::Transform* Field_2_1; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x48
	::UnityEngine::RectTransform* Field_2_10; // 0x50
	::UnityEngine::UI::Extension::UIImgText* Field_2_11; // 0x58
	::MoleMole::NotificationBadgeEx* Field_2_9; // 0x60
	::UnityEngine::UI::Extension::UIImgText* Field_2_12; // 0x68
	::MonoUITableScrollV2* Field_2_5; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFA01A100E02E0CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D575395A632A2293(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AFA01A100E02E0CD_METHOD_2_D575395A632A2293_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFA01A100E02E0CD_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AFA01A100E02E0CD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
