#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_101.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_708.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_73B2E9D4AEFC9F01__CTOR_OFFSET UNITYSDK_OFFSET(0x18341050)

inline static constexpr unsigned int Class_2_73B2E9D4AEFC9F01_TypeDefinitionIndex = 14947;

class Class_2_73B2E9D4AEFC9F01 : public ::Class_1_D9FAA3DCCFE14DB8_101
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x50

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_708 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_708, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_73B2E9D4AEFC9F01__CTOR_OFFSET))(this, a1, a2);
	}
};
