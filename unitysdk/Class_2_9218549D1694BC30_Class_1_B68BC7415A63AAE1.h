#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2C5A03A90BB5E900.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"

class Class_2_9218549D1694BC30;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_9218549D1694BC30_CLASS_1_B68BC7415A63AAE1__CTOR_OFFSET UNITYSDK_OFFSET(0x920F730)

inline static constexpr unsigned int Class_2_9218549D1694BC30_Class_1_B68BC7415A63AAE1_TypeDefinitionIndex = 40438;

class Class_2_9218549D1694BC30_Class_1_B68BC7415A63AAE1 : public ::System::Object
{
public:
	::Struct_2_76CCAEE20B3AE57C Field_1_2; // 0x10
	::System::Action_1<::Struct_2_2C5A03A90BB5E900>* Field_1_0; // 0x28
	::Class_2_9218549D1694BC30* Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30_CLASS_1_B68BC7415A63AAE1__CTOR_OFFSET))(this);
	}
};
