#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_65F39A652D33AF8E_Class_2_0D5D8405826EE6F8_16;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class ImgTextParserBase; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_65F39A652D33AF8E_METHOD_2_47574FC129FD3CC7_OFFSET UNITYSDK_OFFSET(0xC5637E0)
#define CLASS_2_65F39A652D33AF8E_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xC5639A0)
#define CLASS_2_65F39A652D33AF8E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xC563A90)
#define CLASS_2_65F39A652D33AF8E__CTOR_OFFSET UNITYSDK_OFFSET(0xC563A80)

inline static constexpr unsigned int Class_2_65F39A652D33AF8E_TypeDefinitionIndex = 50060;

class Class_2_65F39A652D33AF8E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_65F39A652D33AF8E_Class_2_0D5D8405826EE6F8_16*>* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::MoleMole::ImgTextParserBase* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65F39A652D33AF8E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_47574FC129FD3CC7(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_65F39A652D33AF8E_METHOD_2_47574FC129FD3CC7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65F39A652D33AF8E_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_65F39A652D33AF8E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
