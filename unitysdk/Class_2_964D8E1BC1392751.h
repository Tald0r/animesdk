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

#define CLASS_2_964D8E1BC1392751_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x88A1CF0)
#define CLASS_2_964D8E1BC1392751_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x88A1AB0)
#define CLASS_2_964D8E1BC1392751_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x88A1DE0)
#define CLASS_2_964D8E1BC1392751__CTOR_OFFSET UNITYSDK_OFFSET(0x88A1DD0)

inline static constexpr unsigned int Class_2_964D8E1BC1392751_TypeDefinitionIndex = 52754;

class Class_2_964D8E1BC1392751 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_7; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_964D8E1BC1392751__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_964D8E1BC1392751_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_964D8E1BC1392751_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_964D8E1BC1392751_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
