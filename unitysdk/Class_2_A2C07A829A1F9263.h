#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_A2C07A829A1F9263_METHOD_2_4FCC8881976741C7_OFFSET UNITYSDK_OFFSET(0x67C24C0)
#define CLASS_2_A2C07A829A1F9263_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x67C2710)
#define CLASS_2_A2C07A829A1F9263_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x67C2800)
#define CLASS_2_A2C07A829A1F9263__CTOR_OFFSET UNITYSDK_OFFSET(0x67C27F0)

inline static constexpr unsigned int Class_2_A2C07A829A1F9263_TypeDefinitionIndex = 69289;

class Class_2_A2C07A829A1F9263 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadge* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_12; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28
	::UnityEngine::Transform* Field_2_5; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x38
	::UnityEngine::Transform* Field_2_11; // 0x40
	::UnityEngine::Transform* Field_2_6; // 0x48
	::MoleMole::NotificationBadge* Field_2_8; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x60
	::UnityEngine::Transform* Field_2_9; // 0x68
	::UnityEngine::Transform* Field_2_10; // 0x70
	::MoleMole::UIGeneralButtonController* Field_2_1; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C07A829A1F9263__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4FCC8881976741C7(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A2C07A829A1F9263_METHOD_2_4FCC8881976741C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A2C07A829A1F9263_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C07A829A1F9263_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
