#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_94911C7709AE6562_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x6C28EE0)
#define CLASS_2_94911C7709AE6562_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6C28FB0)
#define CLASS_2_94911C7709AE6562_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x6C28D00)
#define CLASS_2_94911C7709AE6562__CTOR_OFFSET UNITYSDK_OFFSET(0x6C28FA0)

inline static constexpr unsigned int Class_2_94911C7709AE6562_TypeDefinitionIndex = 44860;

class Class_2_94911C7709AE6562 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_3; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94911C7709AE6562__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_94911C7709AE6562_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_94911C7709AE6562_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94911C7709AE6562_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
