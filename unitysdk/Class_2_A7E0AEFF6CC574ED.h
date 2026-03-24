#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class MonoLayoutElementProcessor;
namespace MoleMole { class GradientColor; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_A7E0AEFF6CC574ED_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x82E6830)
#define CLASS_2_A7E0AEFF6CC574ED_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x82E69D0)
#define CLASS_2_A7E0AEFF6CC574ED__CTOR_OFFSET UNITYSDK_OFFSET(0x82E69C0)

inline static constexpr unsigned int Class_2_A7E0AEFF6CC574ED_TypeDefinitionIndex = 64951;

class Class_2_A7E0AEFF6CC574ED : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::MonoLayoutElementProcessor* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::MoleMole::GradientColor* Field_2_4; // 0x30
	::Class_2_9E3E3CDA608A4F58* Field_2_0; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E0AEFF6CC574ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A7E0AEFF6CC574ED_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A7E0AEFF6CC574ED_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
