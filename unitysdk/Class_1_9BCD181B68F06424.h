#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1F93795695BED6C4.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9BCD181B68F06424__CTOR_OFFSET UNITYSDK_OFFSET(0x9E37200)

inline static constexpr unsigned int Class_1_9BCD181B68F06424_TypeDefinitionIndex = 52521;

class Class_1_9BCD181B68F06424 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_1F93795695BED6C4>* Field_1_1; // 0x10
	::Struct_2_1F93795695BED6C4 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BCD181B68F06424__CTOR_OFFSET))(this);
	}
};
