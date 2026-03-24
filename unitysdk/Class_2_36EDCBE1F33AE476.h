#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_36EDCBE1F33AE476_METHOD_2_2B52DBEEACA798D8_OFFSET UNITYSDK_OFFSET(0xAFC2530)
#define CLASS_2_36EDCBE1F33AE476_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xAFC2730)
#define CLASS_2_36EDCBE1F33AE476_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAFC2800)
#define CLASS_2_36EDCBE1F33AE476__CTOR_OFFSET UNITYSDK_OFFSET(0xAFC27F0)

inline static constexpr unsigned int Class_2_36EDCBE1F33AE476_TypeDefinitionIndex = 55315;

class Class_2_36EDCBE1F33AE476 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralHeadRowWidgetController*>* Field_2_2; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x20
	::UnityEngine::RectTransform* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36EDCBE1F33AE476__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2B52DBEEACA798D8(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_36EDCBE1F33AE476_METHOD_2_2B52DBEEACA798D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36EDCBE1F33AE476_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_36EDCBE1F33AE476_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
