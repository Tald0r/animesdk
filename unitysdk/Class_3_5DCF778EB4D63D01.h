#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_5DCF778EB4D63D01_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x6EEB5C0)
#define CLASS_3_5DCF778EB4D63D01_METHOD_3_AA6A73448047A840_OFFSET UNITYSDK_OFFSET(0x6EEB430)
#define CLASS_3_5DCF778EB4D63D01_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x6EEB660)
#define CLASS_3_5DCF778EB4D63D01__CTOR_OFFSET UNITYSDK_OFFSET(0x6EEB830)

inline static constexpr unsigned int Class_3_5DCF778EB4D63D01_TypeDefinitionIndex = 68146;

class Class_3_5DCF778EB4D63D01 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	::Class_2_60DDD9C206686F44* Field_3_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_3; // 0x30
	::MonoUITableScrollV2* Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DCF778EB4D63D01__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA6A73448047A840(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_5DCF778EB4D63D01_METHOD_3_AA6A73448047A840_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DCF778EB4D63D01_METHOD_3_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DCF778EB4D63D01_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}
};
