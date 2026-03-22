#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_6FA0188978D80149_1_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x850B6E0)
#define CLASS_2_6FA0188978D80149_1_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x850B4B0)
#define CLASS_2_6FA0188978D80149_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x850B820)
#define CLASS_2_6FA0188978D80149_1__CTOR_OFFSET UNITYSDK_OFFSET(0x850B810)

inline static constexpr unsigned int Class_2_6FA0188978D80149_1_TypeDefinitionIndex = 49028;

class Class_2_6FA0188978D80149_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::MonoUITableScrollV2* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_4; // 0x30
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_1; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA0188978D80149_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6FA0188978D80149_1_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6FA0188978D80149_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA0188978D80149_1_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
