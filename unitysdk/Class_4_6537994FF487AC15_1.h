#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C6CB00B19F1FE9BC.h"

class Class_3_D08FF04B4CDA6625;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_4_6537994FF487AC15_1_METHOD_4_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x117DDAB0)
#define CLASS_4_6537994FF487AC15_1_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x117DDA70)
#define CLASS_4_6537994FF487AC15_1_METHOD_4_673C71724813F13B_OFFSET UNITYSDK_OFFSET(0x117DDAF0)
#define CLASS_4_6537994FF487AC15_1__CTOR_OFFSET UNITYSDK_OFFSET(0x117DDB90)

inline static constexpr unsigned int Class_4_6537994FF487AC15_1_TypeDefinitionIndex = 11174;

class Class_4_6537994FF487AC15_1 : public ::Class_3_C6CB00B19F1FE9BC<::Class_3_D08FF04B4CDA6625*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6537994FF487AC15_1__CTOR_OFFSET))(this);
	}

	::System::String* Method_4_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6537994FF487AC15_1_METHOD_4_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_4_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6537994FF487AC15_1_METHOD_4_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_4_673C71724813F13B(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_4_6537994FF487AC15_1_METHOD_4_673C71724813F13B_OFFSET))(this, a1);
	}
};
