#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x1AD61830)
#define CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0x1AD61630)
#define CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1AD61940)
#define CLASS_2_1DAC8AE00C47D12C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD61930)

inline static constexpr unsigned int Class_2_1DAC8AE00C47D12C_2_TypeDefinitionIndex = 83545;

class Class_2_1DAC8AE00C47D12C_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x38
	::UnityEngine::GameObject* Field_2_6; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_63BBC99244640EE0(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
