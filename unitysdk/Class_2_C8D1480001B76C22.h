#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_C8D1480001B76C22_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x8E67180)
#define CLASS_2_C8D1480001B76C22_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8E67630)
#define CLASS_2_C8D1480001B76C22_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x8E67470)
#define CLASS_2_C8D1480001B76C22__CTOR_OFFSET UNITYSDK_OFFSET(0x8E67620)

inline static constexpr unsigned int Class_2_C8D1480001B76C22_TypeDefinitionIndex = 61924;

class Class_2_C8D1480001B76C22 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_10; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_13; // 0x30
	::UnityEngine::Transform* Field_2_12; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x50
	::UnityEngine::RectTransform* Field_2_5; // 0x58
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x60
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_4; // 0x68
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x78
	::UnityEngine::Transform* Field_2_11; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8D1480001B76C22__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C8D1480001B76C22_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8D1480001B76C22_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C8D1480001B76C22_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
