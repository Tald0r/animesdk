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
template <typename T> class Class_3_95EF0285C16C5E7C;

#define CLASS_2_AFA01A100E02E0CD_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x691ED30)
#define CLASS_2_AFA01A100E02E0CD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x691EDE0)
#define CLASS_2_AFA01A100E02E0CD_METHOD_2_D575395A632A2293_OFFSET UNITYSDK_OFFSET(0x691EAB0)
#define CLASS_2_AFA01A100E02E0CD__CTOR_OFFSET UNITYSDK_OFFSET(0x691EDD0)

inline static constexpr unsigned int Class_2_AFA01A100E02E0CD_TypeDefinitionIndex = 37701;

class Class_2_AFA01A100E02E0CD : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UIImgText* Field_2_12; // 0x20
	::UnityEngine::RectTransform* Field_2_10; // 0x28
	::MonoUITableScrollV2* Field_2_5; // 0x30
	::MoleMole::UIGeneralButtonController* Field_2_6; // 0x38
	::MoleMole::MonoGamepadModule* Field_2_4; // 0x40
	::UnityEngine::UI::Extension::UIImgText* Field_2_11; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x50
	::UnityEngine::Transform* Field_2_0; // 0x58
	::UnityEngine::Transform* Field_2_1; // 0x60
	::Class_3_95EF0285C16C5E7C<::MoleMole::UIItemIconBtnWidgetController*>* Field_2_8; // 0x68
	::MoleMole::NotificationBadgeEx* Field_2_9; // 0x70
	::UnityEngine::RectTransform* Field_2_7; // 0x78

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
