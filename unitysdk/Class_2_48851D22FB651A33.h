#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_48851D22FB651A33_METHOD_2_5DE301B3C0032BA5_OFFSET UNITYSDK_OFFSET(0x7B914E0)
#define CLASS_2_48851D22FB651A33_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7B91640)
#define CLASS_2_48851D22FB651A33__CTOR_OFFSET UNITYSDK_OFFSET(0x7B91630)

inline static constexpr unsigned int Class_2_48851D22FB651A33_TypeDefinitionIndex = 62207;

class Class_2_48851D22FB651A33 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_3; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48851D22FB651A33__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5DE301B3C0032BA5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_48851D22FB651A33_METHOD_2_5DE301B3C0032BA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_48851D22FB651A33_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
