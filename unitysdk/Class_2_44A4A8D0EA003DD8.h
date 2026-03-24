#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_679286007DE1DCF6.h"

class Class_2_44A4A8D0EA003DD8_Class_2_1C4D884EEDABE24B;
class Class_2_60DDD9C206686F44;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_44A4A8D0EA003DD8_METHOD_2_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x8A28A10)
#define CLASS_2_44A4A8D0EA003DD8_METHOD_2_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x8A28A20)
#define CLASS_2_44A4A8D0EA003DD8__CTOR_OFFSET UNITYSDK_OFFSET(0x8A28990)

inline static constexpr unsigned int Class_2_44A4A8D0EA003DD8_TypeDefinitionIndex = 40523;

class Class_2_44A4A8D0EA003DD8 : public ::Class_1_679286007DE1DCF6
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_2_44A4A8D0EA003DD8_Class_2_1C4D884EEDABE24B*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44A4A8D0EA003DD8__CTOR_OFFSET))(this);
	}

	::Class_2_60DDD9C206686F44* Method_2_43A46E5F9FAC62B8()
	{
		return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44A4A8D0EA003DD8_METHOD_2_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_2_58BA0C8308C8127F(::Class_2_60DDD9C206686F44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_60DDD9C206686F44*))((::PBYTE)hIl2Cpp + CLASS_2_44A4A8D0EA003DD8_METHOD_2_58BA0C8308C8127F_OFFSET))(this, a1);
	}
};
