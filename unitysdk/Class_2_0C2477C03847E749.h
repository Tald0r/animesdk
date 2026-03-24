#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_46FECA8E1D551D46_36.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_210.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_0C2477C03847E749_METHOD_2_FB0FF2E2CC82CC6B_OFFSET UNITYSDK_OFFSET(0x171B6F40)
#define CLASS_2_0C2477C03847E749__CTOR_OFFSET UNITYSDK_OFFSET(0x171B6EC0)

inline static constexpr unsigned int Class_2_0C2477C03847E749_TypeDefinitionIndex = 14016;

class Class_2_0C2477C03847E749 : public ::Class_1_46FECA8E1D551D46_36
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x38

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_210 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_210, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_0C2477C03847E749__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_FB0FF2E2CC82CC6B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C2477C03847E749_METHOD_2_FB0FF2E2CC82CC6B_OFFSET))(this);
	}
};
