#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_881C52611D18C31A_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x9EDC950)
#define CLASS_2_881C52611D18C31A_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x9EDCB60)
#define CLASS_2_881C52611D18C31A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9EDCCA0)
#define CLASS_2_881C52611D18C31A__CTOR_OFFSET UNITYSDK_OFFSET(0x9EDCC90)

inline static constexpr unsigned int Class_2_881C52611D18C31A_TypeDefinitionIndex = 43986;

class Class_2_881C52611D18C31A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x40

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
