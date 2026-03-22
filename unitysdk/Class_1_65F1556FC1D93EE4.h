#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9F8F67A88F6C6036.h"
#include "unitysdk/Enum_3_E22F318A7F175FF4.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_65F1556FC1D93EE4__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC7CC0)

inline static constexpr unsigned int Class_1_65F1556FC1D93EE4_TypeDefinitionIndex = 79761;

class Class_1_65F1556FC1D93EE4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_6; // 0x10
	::Enum_3_E22F318A7F175FF4 Field_1_1; // 0x18
	::System::Int32 Field_1_8; // 0x1C
	::Enum_3_9F8F67A88F6C6036 Field_1_2; // 0x20
	::System::Int32 Field_1_7; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Int32 Field_1_5; // 0x2C
	::System::Int32 Field_1_12; // 0x30
	::System::Single Field_1_0; // 0x34
	::System::Boolean Field_1_10; // 0x38
	::System::Boolean Field_1_3; // 0x39
	::System::Boolean Field_1_11; // 0x3A
	::System::Boolean Field_1_13; // 0x3B
	::System::Int32 Field_1_9; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F1556FC1D93EE4__CTOR_OFFSET))(this);
	}
};
