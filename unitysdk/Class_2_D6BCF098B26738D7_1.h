#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D6BCF098B26738D7_1_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x77C7190)
#define CLASS_2_D6BCF098B26738D7_1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x77C7380)
#define CLASS_2_D6BCF098B26738D7_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x77C7470)
#define CLASS_2_D6BCF098B26738D7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x77C7460)

inline static constexpr unsigned int Class_2_D6BCF098B26738D7_1_TypeDefinitionIndex = 51094;

class Class_2_D6BCF098B26738D7_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6BCF098B26738D7_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D6BCF098B26738D7_1_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6BCF098B26738D7_1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D6BCF098B26738D7_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
