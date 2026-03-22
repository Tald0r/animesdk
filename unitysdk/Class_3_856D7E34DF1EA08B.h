#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define CLASS_3_856D7E34DF1EA08B_METHOD_3_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x6C0FF10)
#define CLASS_3_856D7E34DF1EA08B_METHOD_3_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0x6C0FDE0)
#define CLASS_3_856D7E34DF1EA08B__CTOR_OFFSET UNITYSDK_OFFSET(0x6C101B0)

inline static constexpr unsigned int Class_3_856D7E34DF1EA08B_TypeDefinitionIndex = 42036;

class Class_3_856D7E34DF1EA08B : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	::UnityEngine::RectTransform* Field_3_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_7; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_6; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_8; // 0x40
	::UnityEngine::UI::Extension::UISlider* Field_3_9; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_856D7E34DF1EA08B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_79D44D69484C8F4A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_856D7E34DF1EA08B_METHOD_3_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_856D7E34DF1EA08B_METHOD_3_0076C796B2045359_OFFSET))(this);
	}
};
