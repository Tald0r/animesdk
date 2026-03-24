#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03154A06B7628F3C.h"
#include "unitysdk/Enum_3_C0FE5C5ECCA2F598.h"
#include "unitysdk/Struct_2_7548B21900B22902_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EA53FADF1F6871A2__CTOR_OFFSET UNITYSDK_OFFSET(0xAA59A20)

inline static constexpr unsigned int Class_1_EA53FADF1F6871A2_TypeDefinitionIndex = 71950;

class Class_1_EA53FADF1F6871A2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_7548B21900B22902_1>* Field_1_2; // 0x10
	::Enum_3_C0FE5C5ECCA2F598 Field_1_0; // 0x18
	::Enum_3_03154A06B7628F3C Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA53FADF1F6871A2__CTOR_OFFSET))(this);
	}
};
