#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_200.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_692.h"
#include "unitysdk/System/DayOfWeek.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_D2F45ADFF646BAFA_METHOD_2_20858C9C81269927_OFFSET UNITYSDK_OFFSET(0x1674A220)
#define CLASS_2_D2F45ADFF646BAFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1674A130)

inline static constexpr unsigned int Class_2_D2F45ADFF646BAFA_TypeDefinitionIndex = 12531;

class Class_2_D2F45ADFF646BAFA : public ::Class_1_5DA2E7556103D5A3_200
{
public:
	::System::Collections::Generic::HashSet_1<::System::DayOfWeek>* Field_2_0; // 0xC8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_692 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_692, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_D2F45ADFF646BAFA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::DayOfWeek>* Method_2_20858C9C81269927()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::DayOfWeek>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2F45ADFF646BAFA_METHOD_2_20858C9C81269927_OFFSET))(this);
	}
};
