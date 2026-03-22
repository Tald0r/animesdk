#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_5665340E076580D2_METHOD_2_6C6C02341A6C6B8A_OFFSET UNITYSDK_OFFSET(0xA977A50)
#define CLASS_2_5665340E076580D2_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xA977C10)
#define CLASS_2_5665340E076580D2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA977D00)
#define CLASS_2_5665340E076580D2__CTOR_OFFSET UNITYSDK_OFFSET(0xA977CF0)

inline static constexpr unsigned int Class_2_5665340E076580D2_TypeDefinitionIndex = 63219;

class Class_2_5665340E076580D2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5665340E076580D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C6C02341A6C6B8A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5665340E076580D2_METHOD_2_6C6C02341A6C6B8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5665340E076580D2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5665340E076580D2_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
