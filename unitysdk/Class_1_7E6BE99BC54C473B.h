#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_7E6BE99BC54C473B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x83A8E70)
#define CLASS_1_7E6BE99BC54C473B_METHOD_1_F4BE962E72F8D312_OFFSET UNITYSDK_OFFSET(0x83A8F80)
#define CLASS_1_7E6BE99BC54C473B__CTOR_OFFSET UNITYSDK_OFFSET(0x83A8F70)

inline static constexpr unsigned int Class_1_7E6BE99BC54C473B_TypeDefinitionIndex = 67434;

class Class_1_7E6BE99BC54C473B : public ::System::Object
{
public:
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::Enum_3_DFCB42601400F441 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E6BE99BC54C473B__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E6BE99BC54C473B_DISPOSE_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_F4BE962E72F8D312()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E6BE99BC54C473B_METHOD_1_F4BE962E72F8D312_OFFSET))(this);
	}
};
