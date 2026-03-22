#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_48E08C285FAAB899_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0xD2518F0)
#define CLASS_2_48E08C285FAAB899_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xD251B50)
#define CLASS_2_48E08C285FAAB899_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD251C20)
#define CLASS_2_48E08C285FAAB899__CTOR_OFFSET UNITYSDK_OFFSET(0xD251C10)

inline static constexpr unsigned int Class_2_48E08C285FAAB899_TypeDefinitionIndex = 78493;

class Class_2_48E08C285FAAB899 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_5; // 0x18
	::UnityEngine::RectTransform* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_1; // 0x48
	::UnityEngine::RectTransform* Field_2_11; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x60
	::UnityEngine::RectTransform* Field_2_8; // 0x68
	::MonoUITableScrollV2* Field_2_7; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48E08C285FAAB899__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_48E08C285FAAB899_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48E08C285FAAB899_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_48E08C285FAAB899_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
