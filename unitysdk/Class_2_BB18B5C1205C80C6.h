#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_BB18B5C1205C80C6_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x92DCD70)
#define CLASS_2_BB18B5C1205C80C6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x92DD200)
#define CLASS_2_BB18B5C1205C80C6_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x92DD010)
#define CLASS_2_BB18B5C1205C80C6__CTOR_OFFSET UNITYSDK_OFFSET(0x92DD1F0)

inline static constexpr unsigned int Class_2_BB18B5C1205C80C6_TypeDefinitionIndex = 49434;

class Class_2_BB18B5C1205C80C6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x58
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB18B5C1205C80C6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB18B5C1205C80C6_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB18B5C1205C80C6_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB18B5C1205C80C6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
