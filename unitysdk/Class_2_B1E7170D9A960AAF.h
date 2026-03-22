#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_B1E7170D9A960AAF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7667040)
#define CLASS_2_B1E7170D9A960AAF_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x7666EB0)
#define CLASS_2_B1E7170D9A960AAF_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x7666C10)
#define CLASS_2_B1E7170D9A960AAF__CTOR_OFFSET UNITYSDK_OFFSET(0x7667030)

inline static constexpr unsigned int Class_2_B1E7170D9A960AAF_TypeDefinitionIndex = 49379;

class Class_2_B1E7170D9A960AAF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_3; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x28
	::UnityEngine::CanvasGroup* Field_2_7; // 0x30
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_8; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x48
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_0; // 0x50
	::UnityEngine::RectTransform* Field_2_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1E7170D9A960AAF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B1E7170D9A960AAF_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1E7170D9A960AAF_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B1E7170D9A960AAF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
