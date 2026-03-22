#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_6799DB8DC5EF3EFE_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x64EC520)
#define CLASS_2_6799DB8DC5EF3EFE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x64EC690)
#define CLASS_2_6799DB8DC5EF3EFE__CTOR_OFFSET UNITYSDK_OFFSET(0x64EC680)

inline static constexpr unsigned int Class_2_6799DB8DC5EF3EFE_TypeDefinitionIndex = 56379;

class Class_2_6799DB8DC5EF3EFE : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_3; // 0x18
	::UnityEngine::Transform* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30
	::UnityEngine::GameObject* Field_2_8; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::UnityEngine::GameObject* Field_2_4; // 0x48
	::UnityEngine::RectTransform* Field_2_1; // 0x50
	::UnityEngine::RectTransform* Field_2_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6799DB8DC5EF3EFE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6799DB8DC5EF3EFE_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6799DB8DC5EF3EFE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
