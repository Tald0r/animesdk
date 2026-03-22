#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_6F13DCA54447565A_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x9B8DFD0)
#define CLASS_2_6F13DCA54447565A_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x9B8DD30)
#define CLASS_2_6F13DCA54447565A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9B8E0F0)
#define CLASS_2_6F13DCA54447565A__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8E0E0)

inline static constexpr unsigned int Class_2_6F13DCA54447565A_TypeDefinitionIndex = 38382;

class Class_2_6F13DCA54447565A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x18
	::UnityEngine::GameObject* Field_2_4; // 0x20
	::UnityEngine::RectTransform* Field_2_1; // 0x28
	::MoleMole::NotificationBadgeEx* Field_2_10; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_12; // 0x48
	::UnityEngine::GameObject* Field_2_3; // 0x50
	::UnityEngine::GameObject* Field_2_11; // 0x58
	::UnityEngine::GameObject* Field_2_9; // 0x60
	::UnityEngine::GameObject* Field_2_5; // 0x68
	::UnityEngine::GameObject* Field_2_6; // 0x70
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F13DCA54447565A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6F13DCA54447565A_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F13DCA54447565A_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6F13DCA54447565A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
