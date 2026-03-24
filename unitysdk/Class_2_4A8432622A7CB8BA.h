#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_4A8432622A7CB8BA_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xD6A3300)
#define CLASS_2_4A8432622A7CB8BA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD6A3460)
#define CLASS_2_4A8432622A7CB8BA_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0xD6A3080)
#define CLASS_2_4A8432622A7CB8BA__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A3450)

inline static constexpr unsigned int Class_2_4A8432622A7CB8BA_TypeDefinitionIndex = 67404;

class Class_2_4A8432622A7CB8BA : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_4; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::Class_3_647A206587033F4E<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_5; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x50
	::UnityEngine::RectTransform* Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A8432622A7CB8BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4A8432622A7CB8BA_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A8432622A7CB8BA_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4A8432622A7CB8BA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
