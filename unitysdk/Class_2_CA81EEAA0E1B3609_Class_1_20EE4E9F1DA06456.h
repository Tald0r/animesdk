#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CA81EEAA0E1B3609_CLASS_1_20EE4E9F1DA06456__CTOR_OFFSET UNITYSDK_OFFSET(0x5EA0BF0)

inline static constexpr unsigned int Class_2_CA81EEAA0E1B3609_Class_1_20EE4E9F1DA06456_TypeDefinitionIndex = 36470;

class Class_2_CA81EEAA0E1B3609_Class_1_20EE4E9F1DA06456 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA81EEAA0E1B3609_CLASS_1_20EE4E9F1DA06456__CTOR_OFFSET))(this);
	}
};
