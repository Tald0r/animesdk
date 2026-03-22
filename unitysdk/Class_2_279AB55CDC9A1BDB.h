#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

namespace System { template <typename T> class Action_1; }
template <typename T> class Class_0_16E4307DCC419505_103;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define CLASS_2_279AB55CDC9A1BDB_METHOD_2_B991AA5072E9A99A_OFFSET UNITYSDK_OFFSET(0x6E615E0)
#define CLASS_2_279AB55CDC9A1BDB_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x6E613C0)
#define CLASS_2_279AB55CDC9A1BDB__CTOR_OFFSET UNITYSDK_OFFSET(0x6E61560)

inline static constexpr unsigned int Class_2_279AB55CDC9A1BDB_TypeDefinitionIndex = 52301;

class Class_2_279AB55CDC9A1BDB : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_103<::System::Int32>* Field_2_0; // 0x60
	::Class_0_16E4307DCC41950C_12<::System::Boolean>* Field_2_3; // 0x68
	::System::Action_1<::System::Int32>* Field_2_1; // 0x70
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_2; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_279AB55CDC9A1BDB__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_279AB55CDC9A1BDB_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean Method_2_B991AA5072E9A99A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_279AB55CDC9A1BDB_METHOD_2_B991AA5072E9A99A_OFFSET))(this);
	}
};
