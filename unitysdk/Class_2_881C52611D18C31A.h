#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_881C52611D18C31A_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x90B5DC0)
#define CLASS_2_881C52611D18C31A_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x90B5F90)
#define CLASS_2_881C52611D18C31A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x90B60D0)
#define CLASS_2_881C52611D18C31A__CTOR_OFFSET UNITYSDK_OFFSET(0x90B60C0)

inline static constexpr unsigned int Class_2_881C52611D18C31A_TypeDefinitionIndex = 54299;

class Class_2_881C52611D18C31A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881C52611D18C31A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_881C52611D18C31A_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_881C52611D18C31A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881C52611D18C31A_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
