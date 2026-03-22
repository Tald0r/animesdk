#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_1A9274AFB90A5172_2_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x9023FD0)
#define CLASS_3_1A9274AFB90A5172_2_METHOD_3_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x9023F30)
#define CLASS_3_1A9274AFB90A5172_2_METHOD_3_6A3AD666D3CC56B6_OFFSET UNITYSDK_OFFSET(0x9024140)
#define CLASS_3_1A9274AFB90A5172_2_METHOD_3_D33F8087E6D98A2B_OFFSET UNITYSDK_OFFSET(0x9024150)
#define CLASS_3_1A9274AFB90A5172_2__CTOR_OFFSET UNITYSDK_OFFSET(0x90240C0)

inline static constexpr unsigned int Class_3_1A9274AFB90A5172_2_TypeDefinitionIndex = 57749;

class Class_3_1A9274AFB90A5172_2 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A9274AFB90A5172_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0E09E70D88F8EDD3(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_1A9274AFB90A5172_2_METHOD_3_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::UnityEngine::UI::Extension::UILocalizationText* Method_3_6A3AD666D3CC56B6()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A9274AFB90A5172_2_METHOD_3_6A3AD666D3CC56B6_OFFSET))(this);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A9274AFB90A5172_2_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_3_D33F8087E6D98A2B(::UnityEngine::UI::Extension::UILocalizationText* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_3_1A9274AFB90A5172_2_METHOD_3_D33F8087E6D98A2B_OFFSET))(this, a1);
	}
};
