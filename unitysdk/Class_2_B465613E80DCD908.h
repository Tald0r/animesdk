#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_199.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_684.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_B465613E80DCD908_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x18315CC0)
#define CLASS_2_B465613E80DCD908__CTOR_OFFSET UNITYSDK_OFFSET(0x18315CB0)

inline static constexpr unsigned int Class_2_B465613E80DCD908_TypeDefinitionIndex = 13193;

class Class_2_B465613E80DCD908 : public ::Class_1_EBCA2A4357C4C8BF_199
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_684 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_684, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_B465613E80DCD908__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B465613E80DCD908_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}
};
