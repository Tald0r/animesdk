#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIImgText; }

#define CLASS_2_262823AAB7AC765E_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x9797D50)
#define CLASS_2_262823AAB7AC765E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9797E20)
#define CLASS_2_262823AAB7AC765E_METHOD_2_E2771629F876FF04_OFFSET UNITYSDK_OFFSET(0x9797B60)
#define CLASS_2_262823AAB7AC765E__CTOR_OFFSET UNITYSDK_OFFSET(0x9797E10)

inline static constexpr unsigned int Class_2_262823AAB7AC765E_TypeDefinitionIndex = 41553;

class Class_2_262823AAB7AC765E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIImgText* Field_2_2; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28
	::MonoUITableScrollV2* Field_2_5; // 0x30
	::MonoUITableScrollV2* Field_2_1; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x40
	::UnityEngine::UI::Text* Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_262823AAB7AC765E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E2771629F876FF04(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_262823AAB7AC765E_METHOD_2_E2771629F876FF04_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_262823AAB7AC765E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_262823AAB7AC765E_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
