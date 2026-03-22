#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_CDD09A78B46608BD_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x692AFD0)
#define CLASS_2_CDD09A78B46608BD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x692B140)
#define CLASS_2_CDD09A78B46608BD__CTOR_OFFSET UNITYSDK_OFFSET(0x692B130)

inline static constexpr unsigned int Class_2_CDD09A78B46608BD_TypeDefinitionIndex = 40628;

class Class_2_CDD09A78B46608BD : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_9E3E3CDA608A4F58* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::MoleMole::Config::UIAchievementAnimConfig* Field_2_2; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD09A78B46608BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CDD09A78B46608BD_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CDD09A78B46608BD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
