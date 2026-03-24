#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UICommentInfoWidgetController; }
namespace MoleMole { class UICommentLevelWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_D77EAB658E5C94F9_METHOD_2_22001C50FA070A38_OFFSET UNITYSDK_OFFSET(0xAEA1C80)
#define CLASS_2_D77EAB658E5C94F9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAEA2170)
#define CLASS_2_D77EAB658E5C94F9_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xAEA1FC0)
#define CLASS_2_D77EAB658E5C94F9__CTOR_OFFSET UNITYSDK_OFFSET(0xAEA2160)

inline static constexpr unsigned int Class_2_D77EAB658E5C94F9_TypeDefinitionIndex = 42244;

class Class_2_D77EAB658E5C94F9 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_1; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x30
	::Class_3_647A206587033F4E<::MoleMole::UICommentLevelWidgetController*>* Field_2_2; // 0x38
	::Class_3_647A206587033F4E<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_0; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_4; // 0x48
	::Class_3_647A206587033F4E<::MoleMole::UICommentInfoWidgetController*>* Field_2_3; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D77EAB658E5C94F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_22001C50FA070A38(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D77EAB658E5C94F9_METHOD_2_22001C50FA070A38_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D77EAB658E5C94F9_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D77EAB658E5C94F9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
