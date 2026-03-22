#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_B581F8F00E92A65C_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x9C60BF0)
#define CLASS_2_B581F8F00E92A65C_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x9C609B0)
#define CLASS_2_B581F8F00E92A65C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9C60D00)
#define CLASS_2_B581F8F00E92A65C__CTOR_OFFSET UNITYSDK_OFFSET(0x9C60CF0)

inline static constexpr unsigned int Class_2_B581F8F00E92A65C_TypeDefinitionIndex = 43431;

class Class_2_B581F8F00E92A65C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x38
	::UnityEngine::RectTransform* Field_2_0; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x48
	::UnityEngine::RectTransform* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B581F8F00E92A65C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B581F8F00E92A65C_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B581F8F00E92A65C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B581F8F00E92A65C_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
