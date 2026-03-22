#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_374D688FD254861E_2_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x7CF5D90)
#define CLASS_2_374D688FD254861E_2_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x7CF6030)
#define CLASS_2_374D688FD254861E_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7CF61D0)
#define CLASS_2_374D688FD254861E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x7CF61C0)

inline static constexpr unsigned int Class_2_374D688FD254861E_2_TypeDefinitionIndex = 54564;

class Class_2_374D688FD254861E_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x18
	::MoleMole::MonoGamepadSelectable* Field_2_10; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0x28
	::UnityEngine::RectTransform* Field_2_2; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x58
	::UnityEngine::RectTransform* Field_2_3; // 0x60
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_374D688FD254861E_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_374D688FD254861E_2_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_374D688FD254861E_2_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_374D688FD254861E_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
