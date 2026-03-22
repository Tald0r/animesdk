#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441_1.h"
#include "unitysdk/System/Object.h"

class Class_2_13ADC9176EE2A97C;
class Class_2_9218549D1694BC30;
class Class_3_32CD58E95ADFF8F5_57;
namespace System { class Action; }

#define CLASS_2_9218549D1694BC30_CLASS_1_CD212C67ED76DA78_METHOD_1_57B544C2DE5A264C_OFFSET UNITYSDK_OFFSET(0x9210340)
#define CLASS_2_9218549D1694BC30_CLASS_1_CD212C67ED76DA78__CTOR_OFFSET UNITYSDK_OFFSET(0x9210330)

inline static constexpr unsigned int Class_2_9218549D1694BC30_Class_1_CD212C67ED76DA78_TypeDefinitionIndex = 40411;

class Class_2_9218549D1694BC30_Class_1_CD212C67ED76DA78 : public ::System::Object
{
public:
	::Class_2_13ADC9176EE2A97C* Field_1_1; // 0x10
	::System::Action* Field_1_6; // 0x18
	::Class_2_9218549D1694BC30* Field_1_0; // 0x20
	::System::Action* Field_1_2; // 0x28
	::Enum_3_DFCB42601400F441_1 Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x34
	::System::Int32 Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30_CLASS_1_CD212C67ED76DA78__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_57B544C2DE5A264C(::Class_3_32CD58E95ADFF8F5_57* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_57*))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30_CLASS_1_CD212C67ED76DA78_METHOD_1_57B544C2DE5A264C_OFFSET))(this, a1);
	}
};
