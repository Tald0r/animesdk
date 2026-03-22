#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_23F0887AA99DB8F4_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xB767B60)
#define CLASS_3_23F0887AA99DB8F4_METHOD_3_2467D0FE734D187E_OFFSET UNITYSDK_OFFSET(0xB767970)
#define CLASS_3_23F0887AA99DB8F4_METHOD_3_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0xB767C00)
#define CLASS_3_23F0887AA99DB8F4__CTOR_OFFSET UNITYSDK_OFFSET(0xB767F60)

inline static constexpr unsigned int Class_3_23F0887AA99DB8F4_TypeDefinitionIndex = 71746;

class Class_3_23F0887AA99DB8F4 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_10; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_3_8; // 0x30
	::UnityEngine::GameObject* Field_3_13; // 0x38
	::UnityEngine::GameObject* Field_3_7; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_9; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_11; // 0x50
	::UnityEngine::RectTransform* Field_3_12; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23F0887AA99DB8F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_2467D0FE734D187E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_23F0887AA99DB8F4_METHOD_3_2467D0FE734D187E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23F0887AA99DB8F4_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_3_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23F0887AA99DB8F4_METHOD_3_5176DC743E478510_OFFSET))(this);
	}
};
