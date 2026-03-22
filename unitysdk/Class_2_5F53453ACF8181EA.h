#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class ShaderAniHelp;
namespace MoleMole { class MonoUIStyleColorConfig; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_5F53453ACF8181EA_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x70EF120)
#define CLASS_2_5F53453ACF8181EA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x70EF2B0)
#define CLASS_2_5F53453ACF8181EA__CTOR_OFFSET UNITYSDK_OFFSET(0x70EF2A0)

inline static constexpr unsigned int Class_2_5F53453ACF8181EA_TypeDefinitionIndex = 70776;

class Class_2_5F53453ACF8181EA : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_3; // 0x18
	::MoleMole::MonoUIStyleColorConfig* Field_2_2; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_4; // 0x28
	::ShaderAniHelp* Field_2_0; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::Class_2_9E3E3CDA608A4F58* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F53453ACF8181EA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5F53453ACF8181EA_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5F53453ACF8181EA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
