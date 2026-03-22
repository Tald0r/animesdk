#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_5FF68AA1D87AA878_1_METHOD_3_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xC3068D0)
#define CLASS_3_5FF68AA1D87AA878_1_METHOD_3_AA6A73448047A840_OFFSET UNITYSDK_OFFSET(0xC306710)
#define CLASS_3_5FF68AA1D87AA878_1_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xC306990)
#define CLASS_3_5FF68AA1D87AA878_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC306B60)

inline static constexpr unsigned int Class_3_5FF68AA1D87AA878_1_TypeDefinitionIndex = 57974;

class Class_3_5FF68AA1D87AA878_1 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	::Class_2_A8F5ABF31E066ED4* Field_3_3; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_5; // 0x30
	::Class_2_60DDD9C206686F44* Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FF68AA1D87AA878_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA6A73448047A840(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_5FF68AA1D87AA878_1_METHOD_3_AA6A73448047A840_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FF68AA1D87AA878_1_METHOD_3_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_3_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FF68AA1D87AA878_1_METHOD_3_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
