#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadModule; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_CB35AEC6EC44C02E_CLASS_1_98E9E44F5E493458__CTOR_OFFSET UNITYSDK_OFFSET(0x9E11930)

inline static constexpr unsigned int Class_2_CB35AEC6EC44C02E_Class_1_98E9E44F5E493458_TypeDefinitionIndex = 58897;

class Class_2_CB35AEC6EC44C02E_Class_1_98E9E44F5E493458 : public ::System::Object
{
public:
	::MoleMole::MonoGamepadModule* Field_1_0; // 0x10
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor(::MoleMole::MonoGamepadModule* a1, ::System::Int32 a2, ::UnityEngine::UI::Extension::UILocalizationText* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_2_CB35AEC6EC44C02E_CLASS_1_98E9E44F5E493458__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
