#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIBackFlowActivitySelectAvatarWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_6D5460742E9C0095_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xBC727B0)
#define CLASS_2_6D5460742E9C0095_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0xBC72380)
#define CLASS_2_6D5460742E9C0095_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBC728A0)
#define CLASS_2_6D5460742E9C0095_METHOD_2_CADE20366AA39505_OFFSET UNITYSDK_OFFSET(0xBC725B0)
#define CLASS_2_6D5460742E9C0095__CTOR_OFFSET UNITYSDK_OFFSET(0xBC72890)

inline static constexpr unsigned int Class_2_6D5460742E9C0095_TypeDefinitionIndex = 66943;

class Class_2_6D5460742E9C0095 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*>*>* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x30
	::MoleMole::MonoGamepadCustomList* Field_2_7; // 0x38
	::UnityEngine::Animation* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D5460742E9C0095__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6D5460742E9C0095_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D5460742E9C0095_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6D5460742E9C0095_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*>*>* Method_2_CADE20366AA39505(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6D5460742E9C0095_METHOD_2_CADE20366AA39505_OFFSET))(this, a1, a2);
	}
};
