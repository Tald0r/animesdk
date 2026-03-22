#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3F98947A20FC799A_METHOD_1_0F8D6364B34C7195_1_OFFSET UNITYSDK_OFFSET(0x7471420)
#define CLASS_1_3F98947A20FC799A_METHOD_1_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0x7471370)
#define CLASS_1_3F98947A20FC799A_METHOD_1_35D2E84278E299F3_OFFSET UNITYSDK_OFFSET(0x7471280)
#define CLASS_1_3F98947A20FC799A_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x7471020)
#define CLASS_1_3F98947A20FC799A_METHOD_1_614076B3F71F4A3E_OFFSET UNITYSDK_OFFSET(0x7471160)
#define CLASS_1_3F98947A20FC799A__CTOR_OFFSET UNITYSDK_OFFSET(0x7470F70)

inline static constexpr unsigned int Class_1_3F98947A20FC799A_TypeDefinitionIndex = 70054;

class Class_1_3F98947A20FC799A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F98947A20FC799A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F98947A20FC799A_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_614076B3F71F4A3E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F98947A20FC799A_METHOD_1_614076B3F71F4A3E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_35D2E84278E299F3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F98947A20FC799A_METHOD_1_35D2E84278E299F3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F98947A20FC799A_METHOD_1_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_0F8D6364B34C7195_1(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F98947A20FC799A_METHOD_1_0F8D6364B34C7195_1_OFFSET))(this, a1);
	}
};
