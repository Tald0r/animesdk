#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DF1AF84C24D8648D.h"
#include "unitysdk/Enum_3_4DE39DF26DB99449.h"

class Class_3_7A267C1006DF3527_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_9C39822136DA5684_METHOD_2_E42C0E0E6BF738D3_OFFSET UNITYSDK_OFFSET(0x60C2520)
#define CLASS_2_9C39822136DA5684_METHOD_2_E7E2131F74C8A70D_OFFSET UNITYSDK_OFFSET(0x60C2590)
#define CLASS_2_9C39822136DA5684__CTOR_OFFSET UNITYSDK_OFFSET(0x60C2580)

inline static constexpr unsigned int Class_2_9C39822136DA5684_TypeDefinitionIndex = 38846;

class Class_2_9C39822136DA5684 : public ::Class_1_DF1AF84C24D8648D
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_7A267C1006DF3527_1*>* Field_2_7; // 0x50
	::System::Boolean Field_2_5; // 0x58
	::System::UInt32 Field_2_3; // 0x5C
	::System::UInt32 Field_2_6; // 0x60
	::System::UInt32 Field_2_1; // 0x64
	::System::UInt32 Field_2_2; // 0x68
	::System::Single Field_2_4; // 0x6C
	::Enum_3_4DE39DF26DB99449 Field_2_8; // 0x70
	::System::Int32 Field_2_0; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C39822136DA5684__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_E42C0E0E6BF738D3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C39822136DA5684_METHOD_2_E42C0E0E6BF738D3_OFFSET))(this);
	}

	::System::Single Method_2_E7E2131F74C8A70D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C39822136DA5684_METHOD_2_E7E2131F74C8A70D_OFFSET))(this);
	}
};
