#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_DA02E6BABB5F027E_PublicVariable_Enum_3_7369BCE591BCAF7F.h"
#include "unitysdk/System/ValueType.h"

class Class_3_5E31FCED14647517;
namespace System { class String; }

#define CLASS_3_DA02E6BABB5F027E_PUBLICVARIABLE_GET_VARBOOL_OFFSET UNITYSDK_OFFSET(0x780D00)
#define CLASS_3_DA02E6BABB5F027E_PUBLICVARIABLE_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x780DA0)
#define CLASS_3_DA02E6BABB5F027E_PUBLICVARIABLE_METHOD_2_90E3589F473A16A7_OFFSET UNITYSDK_OFFSET(0x780E20)
#define CLASS_3_DA02E6BABB5F027E_PUBLICVARIABLE_SET_VARBOOL_OFFSET UNITYSDK_OFFSET(0x780D10)
#define CLASS_3_DA02E6BABB5F027E_PUBLICVARIABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x780D90)

inline static constexpr unsigned int Class_3_DA02E6BABB5F027E_PublicVariable_TypeDefinitionIndex = 52506;

struct alignas(8) Class_3_DA02E6BABB5F027E_PublicVariable
{
	::Class_3_DA02E6BABB5F027E_PublicVariable_Enum_3_7369BCE591BCAF7F varType; // 0x10
	::System::String* varKey; // 0x18
	::System::String* varStr; // 0x20
	::System::Single varNumber; // 0x28
	::System::Int32 varInt; // 0x2C

	::System::Boolean get_varBool()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA02E6BABB5F027E_PUBLICVARIABLE_GET_VARBOOL_OFFSET))(this);
	}

	::System::Void set_varBool(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DA02E6BABB5F027E_PUBLICVARIABLE_SET_VARBOOL_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA02E6BABB5F027E_PUBLICVARIABLE_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA02E6BABB5F027E_PUBLICVARIABLE_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::Class_3_5E31FCED14647517* Method_2_90E3589F473A16A7()
	{
		return ((::Class_3_5E31FCED14647517*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA02E6BABB5F027E_PUBLICVARIABLE_METHOD_2_90E3589F473A16A7_OFFSET))(this);
	}
};
