#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E361F896FA480D41_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1AABAA90)
#define CLASS_2_E361F896FA480D41_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x1AABA840)
#define CLASS_2_E361F896FA480D41_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1AABAB80)
#define CLASS_2_E361F896FA480D41__CTOR_OFFSET UNITYSDK_OFFSET(0x1AABAB70)

inline static constexpr unsigned int Class_2_E361F896FA480D41_TypeDefinitionIndex = 83538;

class Class_2_E361F896FA480D41 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::UnityEngine::GameObject* Field_2_1; // 0x28
	::UnityEngine::GameObject* Field_2_0; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x68
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E361F896FA480D41__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E361F896FA480D41_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E361F896FA480D41_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E361F896FA480D41_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
