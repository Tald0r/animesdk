#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_FF911613CAE0358C_Class_2_94954BD3E6DB0168;
class Class_2_FF911613CAE0358C_Class_2_C843BD4406843552;
class Class_2_FF911613CAE0358C_Class_2_CC33D5BAB2D01E5F;
class MonoUITableScrollGroup;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_FF911613CAE0358C_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x7CFBF90)
#define CLASS_2_FF911613CAE0358C_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x7CFC250)
#define CLASS_2_FF911613CAE0358C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7CFC3B0)
#define CLASS_2_FF911613CAE0358C__CTOR_OFFSET UNITYSDK_OFFSET(0x7CFC3A0)

inline static constexpr unsigned int Class_2_FF911613CAE0358C_TypeDefinitionIndex = 48083;

class Class_2_FF911613CAE0358C : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollGroup* Field_2_8; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_FF911613CAE0358C_Class_2_CC33D5BAB2D01E5F*>* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_5; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_FF911613CAE0358C_Class_2_94954BD3E6DB0168*>* Field_2_2; // 0x30
	::UnityEngine::CanvasGroup* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_4; // 0x40
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralBtn03WidgetController*>* Field_2_1; // 0x48
	::Class_2_0D31A1661D004892<::Class_2_FF911613CAE0358C_Class_2_C843BD4406843552*>* Field_2_7; // 0x50
	::MonoUITableScrollV2* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF911613CAE0358C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF911613CAE0358C_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF911613CAE0358C_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF911613CAE0358C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
