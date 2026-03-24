#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

class Class_2_13ADC9176EE2A97C;
class Class_2_E7199313189EE055;
class Class_3_32CD58E95ADFF8F5_28;
namespace System { class Action; }

#define CLASS_2_E7199313189EE055_CLASS_1_CD212C67ED76DA78_METHOD_1_57B544C2DE5A264C_OFFSET UNITYSDK_OFFSET(0xEB3D270)
#define CLASS_2_E7199313189EE055_CLASS_1_CD212C67ED76DA78__CTOR_OFFSET UNITYSDK_OFFSET(0xEB3D260)

inline static constexpr unsigned int Class_2_E7199313189EE055_Class_1_CD212C67ED76DA78_TypeDefinitionIndex = 76219;

class Class_2_E7199313189EE055_Class_1_CD212C67ED76DA78 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::Class_2_E7199313189EE055* Field_1_0; // 0x18
	::System::Action* Field_1_6; // 0x20
	::Class_2_13ADC9176EE2A97C* Field_1_1; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_3; // 0x34
	::Enum_3_DFCB42601400F441 Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055_CLASS_1_CD212C67ED76DA78__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_57B544C2DE5A264C(::Class_3_32CD58E95ADFF8F5_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_28*))((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055_CLASS_1_CD212C67ED76DA78_METHOD_1_57B544C2DE5A264C_OFFSET))(this, a1);
	}
};
