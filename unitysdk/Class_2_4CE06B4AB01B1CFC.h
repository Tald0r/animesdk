#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_4CE06B4AB01B1CFC_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x7530620)
#define CLASS_2_4CE06B4AB01B1CFC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7530790)
#define CLASS_2_4CE06B4AB01B1CFC_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x7530360)
#define CLASS_2_4CE06B4AB01B1CFC__CTOR_OFFSET UNITYSDK_OFFSET(0x7530780)

inline static constexpr unsigned int Class_2_4CE06B4AB01B1CFC_TypeDefinitionIndex = 38961;

class Class_2_4CE06B4AB01B1CFC : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_10; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x30
	::UnityEngine::RectTransform* Field_2_4; // 0x38
	::UnityEngine::RectTransform* Field_2_3; // 0x40
	::Class_3_647A206587033F4E<::MoleMole::UIActivityCompRewardBtnGroupWidgetController*>* Field_2_8; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x50
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_9; // 0x58
	::MoleMole::UIGeneralButtonController* Field_2_2; // 0x60
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CE06B4AB01B1CFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4CE06B4AB01B1CFC_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4CE06B4AB01B1CFC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CE06B4AB01B1CFC_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
