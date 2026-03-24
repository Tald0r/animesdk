#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D444D49F4DC3C4B7_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xAF31730)
#define CLASS_2_D444D49F4DC3C4B7_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0xAF31500)
#define CLASS_2_D444D49F4DC3C4B7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAF317E0)
#define CLASS_2_D444D49F4DC3C4B7__CTOR_OFFSET UNITYSDK_OFFSET(0xAF317D0)

inline static constexpr unsigned int Class_2_D444D49F4DC3C4B7_TypeDefinitionIndex = 39914;

class Class_2_D444D49F4DC3C4B7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x30
	::MoleMole::UIGeneralButtonController* Field_2_2; // 0x38
	::UnityEngine::GameObject* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x50
	::MoleMole::UIGeneralButtonController* Field_2_3; // 0x58
	::UnityEngine::GameObject* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D444D49F4DC3C4B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D444D49F4DC3C4B7_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D444D49F4DC3C4B7_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D444D49F4DC3C4B7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
