#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B0086FB8290FDB79.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_211;
class Class_1_A312CF7E24F3D126;

#define STRUCT_2_6659645E143D6266_METHOD_2_23E3B3870FFE035D_OFFSET UNITYSDK_OFFSET(0x359ED0)
#define STRUCT_2_6659645E143D6266__CTOR_OFFSET UNITYSDK_OFFSET(0x359EA0)

inline static constexpr unsigned int Struct_2_6659645E143D6266_TypeDefinitionIndex = 39668;

struct alignas(8) Struct_2_6659645E143D6266
{
	::Struct_2_B0086FB8290FDB79 Field_2_0; // 0x10

	::System::Void _ctor(::Class_1_A312CF7E24F3D126* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A312CF7E24F3D126*))((::PBYTE)hIl2Cpp + STRUCT_2_6659645E143D6266__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_211* Method_2_23E3B3870FFE035D()
	{
		return ((::Class_0_16E4307DCC419505_211*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6659645E143D6266_METHOD_2_23E3B3870FFE035D_OFFSET))(this);
	}
};
