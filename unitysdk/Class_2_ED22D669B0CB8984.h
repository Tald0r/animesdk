#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_ED22D669B0CB8984_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xA165790)
#define CLASS_2_ED22D669B0CB8984_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xA165500)
#define CLASS_2_ED22D669B0CB8984_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA1658B0)
#define CLASS_2_ED22D669B0CB8984__CTOR_OFFSET UNITYSDK_OFFSET(0xA1658A0)

inline static constexpr unsigned int Class_2_ED22D669B0CB8984_TypeDefinitionIndex = 77932;

class Class_2_ED22D669B0CB8984 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_9E3E3CDA608A4F58* Field_2_8; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::Class_2_9E3E3CDA608A4F58* Field_2_2; // 0x30
	::UnityEngine::CanvasGroup* Field_2_9; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x58
	::UnityEngine::RectTransform* Field_2_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED22D669B0CB8984__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ED22D669B0CB8984_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ED22D669B0CB8984_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED22D669B0CB8984_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
