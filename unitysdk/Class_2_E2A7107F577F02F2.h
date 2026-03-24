#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E2A7107F577F02F2_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x8B383E0)
#define CLASS_2_E2A7107F577F02F2_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x8B386C0)
#define CLASS_2_E2A7107F577F02F2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8B38840)
#define CLASS_2_E2A7107F577F02F2__CTOR_OFFSET UNITYSDK_OFFSET(0x8B38830)

inline static constexpr unsigned int Class_2_E2A7107F577F02F2_TypeDefinitionIndex = 72050;

class Class_2_E2A7107F577F02F2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_10; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_9; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_12; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x60
	::UnityEngine::RectTransform* Field_2_11; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_13; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x78
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2A7107F577F02F2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E2A7107F577F02F2_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E2A7107F577F02F2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2A7107F577F02F2_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
