#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_B7F35121A9A21E4A_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x1A4B8A10)
#define CLASS_2_B7F35121A9A21E4A_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x1A4B8740)
#define CLASS_2_B7F35121A9A21E4A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1A4B8B50)
#define CLASS_2_B7F35121A9A21E4A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B8B40)

inline static constexpr unsigned int Class_2_B7F35121A9A21E4A_TypeDefinitionIndex = 71132;

class Class_2_B7F35121A9A21E4A : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadgeEx* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_9; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x38
	::Class_2_9E3E3CDA608A4F58* Field_2_10; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x50
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_3; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x60
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x68
	::UnityEngine::RectTransform* Field_2_5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F35121A9A21E4A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B7F35121A9A21E4A_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B7F35121A9A21E4A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F35121A9A21E4A_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
