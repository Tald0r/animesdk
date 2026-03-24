#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIActivityIconLiveBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_6671F8F50D5B97D2_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x7715910)
#define CLASS_2_6671F8F50D5B97D2_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x77156B0)
#define CLASS_2_6671F8F50D5B97D2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7715A50)
#define CLASS_2_6671F8F50D5B97D2__CTOR_OFFSET UNITYSDK_OFFSET(0x7715A40)

inline static constexpr unsigned int Class_2_6671F8F50D5B97D2_TypeDefinitionIndex = 43900;

class Class_2_6671F8F50D5B97D2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIActivityIconLiveBtnWidgetController*>* Field_2_3; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_5; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_2; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x30
	::Class_3_647A206587033F4E<::MoleMole::UIActivityIconLiveBtnWidgetController*>* Field_2_4; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_1; // 0x40
	::UnityEngine::RectTransform* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6671F8F50D5B97D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6671F8F50D5B97D2_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6671F8F50D5B97D2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6671F8F50D5B97D2_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
