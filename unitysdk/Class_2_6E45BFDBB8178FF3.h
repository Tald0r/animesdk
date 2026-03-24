#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F4A404A08692BE_89.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_97.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6E45BFDBB8178FF3__CTOR_OFFSET UNITYSDK_OFFSET(0x12227D70)

inline static constexpr unsigned int Class_2_6E45BFDBB8178FF3_TypeDefinitionIndex = 12373;

class Class_2_6E45BFDBB8178FF3 : public ::Class_1_48F4A404A08692BE_89
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_2_0; // 0x38

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_97 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_97, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_6E45BFDBB8178FF3__CTOR_OFFSET))(this, a1, a2);
	}
};
