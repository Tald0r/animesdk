#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_179.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_186.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_A8C8D7024898E3D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5CBE70)

inline static constexpr unsigned int Class_2_A8C8D7024898E3D1_TypeDefinitionIndex = 81734;

class Class_2_A8C8D7024898E3D1 : public ::Class_1_5DA2E7556103D5A3_179
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x60
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_1; // 0x68

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_186 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_186, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_A8C8D7024898E3D1__CTOR_OFFSET))(this, a1, a2);
	}
};
