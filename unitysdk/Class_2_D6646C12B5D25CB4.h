#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D6646C12B5D25CB4_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x8881130)
#define CLASS_2_D6646C12B5D25CB4_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x8881330)
#define CLASS_2_D6646C12B5D25CB4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8881420)
#define CLASS_2_D6646C12B5D25CB4__CTOR_OFFSET UNITYSDK_OFFSET(0x8881410)

inline static constexpr unsigned int Class_2_D6646C12B5D25CB4_TypeDefinitionIndex = 40269;

class Class_2_D6646C12B5D25CB4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_7; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x48
	::UnityEngine::Animation* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6646C12B5D25CB4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D6646C12B5D25CB4_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D6646C12B5D25CB4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6646C12B5D25CB4_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
