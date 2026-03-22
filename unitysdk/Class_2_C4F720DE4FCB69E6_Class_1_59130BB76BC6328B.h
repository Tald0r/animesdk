#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeListenEntry.h"
#include "unitysdk/System/Object.h"

class Class_2_C4F720DE4FCB69E6_Class_1_456A9D29EFE2BEA6;
class Class_3_911B0703E26D048E;

#define CLASS_2_C4F720DE4FCB69E6_CLASS_1_59130BB76BC6328B_METHOD_1_A86356FC9D5199D1_OFFSET UNITYSDK_OFFSET(0x6DAD480)
#define CLASS_2_C4F720DE4FCB69E6_CLASS_1_59130BB76BC6328B__CTOR_OFFSET UNITYSDK_OFFSET(0x6DAD470)

inline static constexpr unsigned int Class_2_C4F720DE4FCB69E6_Class_1_59130BB76BC6328B_TypeDefinitionIndex = 79056;

class Class_2_C4F720DE4FCB69E6_Class_1_59130BB76BC6328B : public ::System::Object
{
public:
	::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry Field_1_0; // 0x10
	::Class_2_C4F720DE4FCB69E6_Class_1_456A9D29EFE2BEA6* Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_CLASS_1_59130BB76BC6328B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A86356FC9D5199D1(::System::Boolean a1, ::Class_3_911B0703E26D048E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_911B0703E26D048E*))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_CLASS_1_59130BB76BC6328B_METHOD_1_A86356FC9D5199D1_OFFSET))(this, a1, a2);
	}
};
