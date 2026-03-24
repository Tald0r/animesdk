#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_77BE8E29A0ADF0FA_METHOD_3_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x80CE000)
#define CLASS_3_77BE8E29A0ADF0FA_METHOD_3_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x80CE140)
#define CLASS_3_77BE8E29A0ADF0FA_METHOD_3_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x80CDD40)
#define CLASS_3_77BE8E29A0ADF0FA__CTOR_OFFSET UNITYSDK_OFFSET(0x80CE690)

inline static constexpr unsigned int Class_3_77BE8E29A0ADF0FA_TypeDefinitionIndex = 39620;

class Class_3_77BE8E29A0ADF0FA : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_3_4; // 0x28
	::UnityEngine::RectTransform* Field_3_11; // 0x30
	::UnityEngine::RectTransform* Field_3_6; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_8; // 0x40
	::Class_2_60DDD9C206686F44* Field_3_3; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_1; // 0x50
	::UnityEngine::RectTransform* Field_3_10; // 0x58
	::Class_2_A8F5ABF31E066ED4* Field_3_7; // 0x60
	::Class_2_A8F5ABF31E066ED4* Field_3_2; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_9; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_0; // 0x78
	::Class_2_A8F5ABF31E066ED4* Field_3_5; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77BE8E29A0ADF0FA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_77BE8E29A0ADF0FA_METHOD_3_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77BE8E29A0ADF0FA_METHOD_3_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_3_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77BE8E29A0ADF0FA_METHOD_3_5176DC743E478510_OFFSET))(this);
	}
};
