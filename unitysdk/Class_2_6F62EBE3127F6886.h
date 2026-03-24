#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_6F62EBE3127F6886_METHOD_2_2B52DBEEACA798D8_OFFSET UNITYSDK_OFFSET(0xBDE1DA0)
#define CLASS_2_6F62EBE3127F6886_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xBDE1FA0)
#define CLASS_2_6F62EBE3127F6886_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBDE2070)
#define CLASS_2_6F62EBE3127F6886__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE2060)

inline static constexpr unsigned int Class_2_6F62EBE3127F6886_TypeDefinitionIndex = 64558;

class Class_2_6F62EBE3127F6886 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x18
	::UnityEngine::RectTransform* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x38
	::UnityEngine::RectTransform* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F62EBE3127F6886__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2B52DBEEACA798D8(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6F62EBE3127F6886_METHOD_2_2B52DBEEACA798D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6F62EBE3127F6886_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F62EBE3127F6886_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
