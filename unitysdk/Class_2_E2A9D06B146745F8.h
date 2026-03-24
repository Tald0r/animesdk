#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E2A9D06B146745F8_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x15A95320)
#define CLASS_2_E2A9D06B146745F8_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x15A95570)
#define CLASS_2_E2A9D06B146745F8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15A95660)
#define CLASS_2_E2A9D06B146745F8__CTOR_OFFSET UNITYSDK_OFFSET(0x15A95650)

inline static constexpr unsigned int Class_2_E2A9D06B146745F8_TypeDefinitionIndex = 50029;

class Class_2_E2A9D06B146745F8 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadModule* Field_2_9; // 0x18
	::UnityEngine::UI::Text* Field_2_4; // 0x20
	::UnityEngine::UI::GridLayoutGroup* Field_2_8; // 0x28
	::UnityEngine::UI::Text* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_7; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x40
	::MonoUITableScrollV2* Field_2_2; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x50
	::UnityEngine::Transform* Field_2_3; // 0x58
	::MoleMole::MonoGamepadModule* Field_2_10; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2A9D06B146745F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E2A9D06B146745F8_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2A9D06B146745F8_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E2A9D06B146745F8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
