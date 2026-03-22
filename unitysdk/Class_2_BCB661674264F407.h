#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_BCB661674264F407_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x9093460)
#define CLASS_2_BCB661674264F407_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x9093690)
#define CLASS_2_BCB661674264F407_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x90937F0)
#define CLASS_2_BCB661674264F407__CTOR_OFFSET UNITYSDK_OFFSET(0x90937E0)

inline static constexpr unsigned int Class_2_BCB661674264F407_TypeDefinitionIndex = 44250;

class Class_2_BCB661674264F407 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::UnityEngine::CanvasGroup* Field_2_4; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCB661674264F407__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCB661674264F407_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCB661674264F407_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCB661674264F407_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
