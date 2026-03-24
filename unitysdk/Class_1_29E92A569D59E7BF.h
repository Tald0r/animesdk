#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_20;
class Class_1_D9FAA3DCCFE14DB8_37;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_29E92A569D59E7BF_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xAF39BF0)
#define CLASS_1_29E92A569D59E7BF__CTOR_OFFSET UNITYSDK_OFFSET(0xAF39A10)

inline static constexpr unsigned int Class_1_29E92A569D59E7BF_TypeDefinitionIndex = 48510;

class Class_1_29E92A569D59E7BF : public ::System::Object
{
public:
	::Class_1_D9FAA3DCCFE14DB8_37* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_20*>* Field_1_1; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::System::Boolean Field_1_4; // 0x24
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29E92A569D59E7BF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_29E92A569D59E7BF_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
