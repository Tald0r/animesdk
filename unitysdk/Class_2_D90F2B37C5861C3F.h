#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgText; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D90F2B37C5861C3F_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x8612120)
#define CLASS_2_D90F2B37C5861C3F_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x8611F60)
#define CLASS_2_D90F2B37C5861C3F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x86121D0)
#define CLASS_2_D90F2B37C5861C3F__CTOR_OFFSET UNITYSDK_OFFSET(0x86121C0)

inline static constexpr unsigned int Class_2_D90F2B37C5861C3F_TypeDefinitionIndex = 66520;

class Class_2_D90F2B37C5861C3F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIImgText* Field_2_0; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D90F2B37C5861C3F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D90F2B37C5861C3F_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D90F2B37C5861C3F_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D90F2B37C5861C3F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
