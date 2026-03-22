#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_72.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_218.h"
#include "unitysdk/System/DateTime.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_2_B19769B3B0092EA9_METHOD_2_F3FE4B1C21DCE6C1_OFFSET UNITYSDK_OFFSET(0x16AE90A0)
#define CLASS_2_B19769B3B0092EA9__CTOR_OFFSET UNITYSDK_OFFSET(0x16AE9090)

inline static constexpr unsigned int Class_2_B19769B3B0092EA9_TypeDefinitionIndex = 14134;

class Class_2_B19769B3B0092EA9 : public ::Class_1_D9FAA3DCCFE14DB8_72
{
public:
	::System::DateTime Field_2_1; // 0x50
	::System::DateTime Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_218 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_218, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_B19769B3B0092EA9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F3FE4B1C21DCE6C1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B19769B3B0092EA9_METHOD_2_F3FE4B1C21DCE6C1_OFFSET))(this);
	}
};
