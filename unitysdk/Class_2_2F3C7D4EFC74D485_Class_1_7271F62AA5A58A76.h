#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_82925E4A102A439B_1;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_7271F62AA5A58A76_METHOD_1_A6751F24578BF28B_OFFSET UNITYSDK_OFFSET(0x67603A0)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_7271F62AA5A58A76_METHOD_1_A6B7F52694CF856A_OFFSET UNITYSDK_OFFSET(0x6760340)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_7271F62AA5A58A76__CTOR_OFFSET UNITYSDK_OFFSET(0x6760330)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_7271F62AA5A58A76_TypeDefinitionIndex = 52248;

class Class_2_2F3C7D4EFC74D485_Class_1_7271F62AA5A58A76 : public ::System::Object
{
public:
	::System::Action_1<::Class_3_82925E4A102A439B_1*>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_7271F62AA5A58A76__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A6B7F52694CF856A(::Class_3_82925E4A102A439B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_82925E4A102A439B_1*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_7271F62AA5A58A76_METHOD_1_A6B7F52694CF856A_OFFSET))(this, a1);
	}

	::System::Void Method_1_A6751F24578BF28B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_7271F62AA5A58A76_METHOD_1_A6751F24578BF28B_OFFSET))(this, a1);
	}
};
