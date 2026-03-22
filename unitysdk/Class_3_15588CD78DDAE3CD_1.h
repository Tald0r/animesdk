#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_15588CD78DDAE3CD_1_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xD416190)
#define CLASS_3_15588CD78DDAE3CD_1_METHOD_3_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0xD416230)
#define CLASS_3_15588CD78DDAE3CD_1_METHOD_3_496565A3E7357507_OFFSET UNITYSDK_OFFSET(0xD415FE0)
#define CLASS_3_15588CD78DDAE3CD_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD416460)

inline static constexpr unsigned int Class_3_15588CD78DDAE3CD_1_TypeDefinitionIndex = 60679;

class Class_3_15588CD78DDAE3CD_1 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	::Class_2_A8F5ABF31E066ED4* Field_3_4; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_5; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_7; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15588CD78DDAE3CD_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_496565A3E7357507(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_15588CD78DDAE3CD_1_METHOD_3_496565A3E7357507_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15588CD78DDAE3CD_1_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_3_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15588CD78DDAE3CD_1_METHOD_3_21886A8411E71157_OFFSET))(this);
	}
};
