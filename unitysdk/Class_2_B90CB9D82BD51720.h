#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_B90CB9D82BD51720_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x1A4B18F0)
#define CLASS_2_B90CB9D82BD51720_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1A4B1A30)
#define CLASS_2_B90CB9D82BD51720__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B1A20)

inline static constexpr unsigned int Class_2_B90CB9D82BD51720_TypeDefinitionIndex = 50876;

class Class_2_B90CB9D82BD51720 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::MonoUITableScrollV2* Field_2_0; // 0x40
	::UnityEngine::GameObject* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B90CB9D82BD51720__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B90CB9D82BD51720_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B90CB9D82BD51720_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
