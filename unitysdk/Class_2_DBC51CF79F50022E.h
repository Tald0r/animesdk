#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class LevelUpProgressWidget;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_DBC51CF79F50022E_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xB69C160)
#define CLASS_2_DBC51CF79F50022E_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0xB69BF30)
#define CLASS_2_DBC51CF79F50022E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB69C210)
#define CLASS_2_DBC51CF79F50022E__CTOR_OFFSET UNITYSDK_OFFSET(0xB69C200)

inline static constexpr unsigned int Class_2_DBC51CF79F50022E_TypeDefinitionIndex = 57017;

class Class_2_DBC51CF79F50022E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::LevelUpProgressWidget* Field_2_7; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::GameObject* Field_2_6; // 0x40
	::MoleMole::MonoInputKey* Field_2_8; // 0x48
	::MoleMole::MonoInputKey* Field_2_9; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x58
	::UnityEngine::Transform* Field_2_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBC51CF79F50022E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DBC51CF79F50022E_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBC51CF79F50022E_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DBC51CF79F50022E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
