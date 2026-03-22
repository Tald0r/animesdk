#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_38082A0AFC8105A8_1_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0xBB5E030)
#define CLASS_2_38082A0AFC8105A8_1_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xBB5E1C0)
#define CLASS_2_38082A0AFC8105A8_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBB5E2B0)
#define CLASS_2_38082A0AFC8105A8_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBB5E2A0)

inline static constexpr unsigned int Class_2_38082A0AFC8105A8_1_TypeDefinitionIndex = 52856;

class Class_2_38082A0AFC8105A8_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::UnityEngine::Animation* Field_2_2; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38082A0AFC8105A8_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_38082A0AFC8105A8_1_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38082A0AFC8105A8_1_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_38082A0AFC8105A8_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
