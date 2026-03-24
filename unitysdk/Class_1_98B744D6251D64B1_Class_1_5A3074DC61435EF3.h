#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Buffers { template <typename T> class ArrayPool_1; }

#define CLASS_1_98B744D6251D64B1_CLASS_1_5A3074DC61435EF3_METHOD_1_A6EA7B899860F000_OFFSET UNITYSDK_OFFSET(0x1A0EB710)
#define CLASS_1_98B744D6251D64B1_CLASS_1_5A3074DC61435EF3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0EB6B0)

inline static constexpr unsigned int Class_1_98B744D6251D64B1_Class_1_5A3074DC61435EF3_TypeDefinitionIndex = 31855;

class Class_1_98B744D6251D64B1_Class_1_5A3074DC61435EF3 : public ::System::Object
{
public:
	::System::Buffers::ArrayPool_1<::System::Byte>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B744D6251D64B1_CLASS_1_5A3074DC61435EF3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A6EA7B899860F000(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_98B744D6251D64B1_CLASS_1_5A3074DC61435EF3_METHOD_1_A6EA7B899860F000_OFFSET))(this, a1);
	}
};
