#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_15D211EB7129E545_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0xA8A5C80)
#define CLASS_2_15D211EB7129E545_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xA8A5E10)
#define CLASS_2_15D211EB7129E545_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA8A5F00)
#define CLASS_2_15D211EB7129E545__CTOR_OFFSET UNITYSDK_OFFSET(0xA8A5EF0)

inline static constexpr unsigned int Class_2_15D211EB7129E545_TypeDefinitionIndex = 72673;

class Class_2_15D211EB7129E545 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_1; // 0x18
	::MonoUITableScrollV2* Field_2_2; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15D211EB7129E545__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_15D211EB7129E545_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15D211EB7129E545_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_15D211EB7129E545_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
