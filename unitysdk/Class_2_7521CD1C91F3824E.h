#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_7521CD1C91F3824E_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0xD08CD10)
#define CLASS_2_7521CD1C91F3824E_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xD08CF70)
#define CLASS_2_7521CD1C91F3824E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD08D060)
#define CLASS_2_7521CD1C91F3824E__CTOR_OFFSET UNITYSDK_OFFSET(0xD08D050)

inline static constexpr unsigned int Class_2_7521CD1C91F3824E_TypeDefinitionIndex = 59207;

class Class_2_7521CD1C91F3824E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x20
	::UnityEngine::RectTransform* Field_2_9; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_0; // 0x38
	::UnityEngine::RectTransform* Field_2_10; // 0x40
	::UnityEngine::GameObject* Field_2_5; // 0x48
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x50
	::UnityEngine::RectTransform* Field_2_6; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x60
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7521CD1C91F3824E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7521CD1C91F3824E_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7521CD1C91F3824E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7521CD1C91F3824E_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
