#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_649BFC03DA5A5A69_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xABFDE50)
#define CLASS_2_649BFC03DA5A5A69_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0xABFDC10)
#define CLASS_2_649BFC03DA5A5A69_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xABFDF60)
#define CLASS_2_649BFC03DA5A5A69__CTOR_OFFSET UNITYSDK_OFFSET(0xABFDF50)

inline static constexpr unsigned int Class_2_649BFC03DA5A5A69_TypeDefinitionIndex = 61049;

class Class_2_649BFC03DA5A5A69 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x20
	::UnityEngine::RectTransform* Field_2_8; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x30
	::UnityEngine::RectTransform* Field_2_6; // 0x38
	::UnityEngine::RectTransform* Field_2_7; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x50
	::MonoUITableScrollV2* Field_2_0; // 0x58
	::MoleMole::MonoGamepadRegion* Field_2_9; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_649BFC03DA5A5A69__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_649BFC03DA5A5A69_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_649BFC03DA5A5A69_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_649BFC03DA5A5A69_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
