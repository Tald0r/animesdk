#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A969C4A108E8A78F_Class_2_E3085A286707C63B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_A969C4A108E8A78F_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x8319C30)
#define CLASS_2_A969C4A108E8A78F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8319CE0)
#define CLASS_2_A969C4A108E8A78F_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x8319A70)
#define CLASS_2_A969C4A108E8A78F__CTOR_OFFSET UNITYSDK_OFFSET(0x8319CD0)

inline static constexpr unsigned int Class_2_A969C4A108E8A78F_TypeDefinitionIndex = 53168;

class Class_2_A969C4A108E8A78F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_A969C4A108E8A78F_Class_2_E3085A286707C63B*>* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A969C4A108E8A78F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A969C4A108E8A78F_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A969C4A108E8A78F_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A969C4A108E8A78F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
