#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_447546814EA5BBED_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xDEB9520)
#define CLASS_2_447546814EA5BBED_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xDEB95F0)
#define CLASS_2_447546814EA5BBED_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0xDEB9360)
#define CLASS_2_447546814EA5BBED__CTOR_OFFSET UNITYSDK_OFFSET(0xDEB95E0)

inline static constexpr unsigned int Class_2_447546814EA5BBED_TypeDefinitionIndex = 56607;

class Class_2_447546814EA5BBED : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_2; // 0x20
	::UnityEngine::RectTransform* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_447546814EA5BBED__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_447546814EA5BBED_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_447546814EA5BBED_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_447546814EA5BBED_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
