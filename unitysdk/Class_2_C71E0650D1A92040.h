#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C71E0650D1A92040_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x889DAA0)
#define CLASS_2_C71E0650D1A92040_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x889DB90)
#define CLASS_2_C71E0650D1A92040_METHOD_2_EBA1DA59141868AB_OFFSET UNITYSDK_OFFSET(0x889D900)
#define CLASS_2_C71E0650D1A92040__CTOR_OFFSET UNITYSDK_OFFSET(0x889DB80)

inline static constexpr unsigned int Class_2_C71E0650D1A92040_TypeDefinitionIndex = 52167;

class Class_2_C71E0650D1A92040 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_2; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C71E0650D1A92040__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBA1DA59141868AB(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C71E0650D1A92040_METHOD_2_EBA1DA59141868AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C71E0650D1A92040_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C71E0650D1A92040_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
