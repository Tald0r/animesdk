#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_252.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_847.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_B465613E80DCD908_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x179A8740)
#define CLASS_2_B465613E80DCD908__CTOR_OFFSET UNITYSDK_OFFSET(0x179A8730)

inline static constexpr unsigned int Class_2_B465613E80DCD908_TypeDefinitionIndex = 15125;

class Class_2_B465613E80DCD908 : public ::Class_1_EBCA2A4357C4C8BF_252
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_847 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_847, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_B465613E80DCD908__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B465613E80DCD908_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}
};
