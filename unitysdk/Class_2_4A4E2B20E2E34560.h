#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_4A4E2B20E2E34560_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x88B5AD0)
#define CLASS_2_4A4E2B20E2E34560_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x88B5CC0)
#define CLASS_2_4A4E2B20E2E34560_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x88B5DB0)
#define CLASS_2_4A4E2B20E2E34560__CTOR_OFFSET UNITYSDK_OFFSET(0x88B5DA0)

inline static constexpr unsigned int Class_2_4A4E2B20E2E34560_TypeDefinitionIndex = 58308;

class Class_2_4A4E2B20E2E34560 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A4E2B20E2E34560__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4A4E2B20E2E34560_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A4E2B20E2E34560_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4A4E2B20E2E34560_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
