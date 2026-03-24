#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_0F81C900BF7F52E0_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x67C4BB0)
#define CLASS_2_0F81C900BF7F52E0_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x67C4DC0)
#define CLASS_2_0F81C900BF7F52E0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x67C4F20)
#define CLASS_2_0F81C900BF7F52E0__CTOR_OFFSET UNITYSDK_OFFSET(0x67C4F10)

inline static constexpr unsigned int Class_2_0F81C900BF7F52E0_TypeDefinitionIndex = 38308;

class Class_2_0F81C900BF7F52E0 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_4; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x38
	::MonoUITableScrollV2* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F81C900BF7F52E0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0F81C900BF7F52E0_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F81C900BF7F52E0_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0F81C900BF7F52E0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
