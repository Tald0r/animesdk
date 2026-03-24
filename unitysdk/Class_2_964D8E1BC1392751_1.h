#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_964D8E1BC1392751_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x676F5F0)
#define CLASS_2_964D8E1BC1392751_1_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x676F3B0)
#define CLASS_2_964D8E1BC1392751_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x676F6C0)
#define CLASS_2_964D8E1BC1392751_1__CTOR_OFFSET UNITYSDK_OFFSET(0x676F6B0)

inline static constexpr unsigned int Class_2_964D8E1BC1392751_1_TypeDefinitionIndex = 74520;

class Class_2_964D8E1BC1392751_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x18
	::UnityEngine::GameObject* Field_2_8; // 0x20
	::UnityEngine::GameObject* Field_2_7; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x48
	::UnityEngine::RectTransform* Field_2_0; // 0x50
	::MoleMole::NotificationBadgeEx* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_964D8E1BC1392751_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_964D8E1BC1392751_1_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_964D8E1BC1392751_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_964D8E1BC1392751_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
