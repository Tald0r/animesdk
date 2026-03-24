#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9BCF200BF25B9BEF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_B76BFE3908E63520_METHOD_1_5D0387964FCFFB35_OFFSET UNITYSDK_OFFSET(0x6475A80)
#define CLASS_1_B76BFE3908E63520_METHOD_1_9732EE3027BECDCF_OFFSET UNITYSDK_OFFSET(0x6475B30)
#define CLASS_1_B76BFE3908E63520_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x64759D0)
#define CLASS_1_B76BFE3908E63520_METHOD_1_C03DFABF81B3E6E7_OFFSET UNITYSDK_OFFSET(0x6475D00)
#define CLASS_1_B76BFE3908E63520_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6475950)
#define CLASS_1_B76BFE3908E63520_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x64758F0)
#define CLASS_1_B76BFE3908E63520__CTOR_OFFSET UNITYSDK_OFFSET(0x64759C0)

inline static constexpr unsigned int Class_1_B76BFE3908E63520_TypeDefinitionIndex = 46127;

class Class_1_B76BFE3908E63520 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B76BFE3908E63520__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B76BFE3908E63520_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B76BFE3908E63520_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B76BFE3908E63520_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Int32 Method_1_5D0387964FCFFB35(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B76BFE3908E63520_METHOD_1_5D0387964FCFFB35_OFFSET))(this, a1);
	}

	::System::Void Method_1_9732EE3027BECDCF(::Class_3_9BCF200BF25B9BEF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9BCF200BF25B9BEF*))((::PBYTE)hIl2Cpp + CLASS_1_B76BFE3908E63520_METHOD_1_9732EE3027BECDCF_OFFSET))(this, a1);
	}

	::System::Void Method_1_C03DFABF81B3E6E7(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B76BFE3908E63520_METHOD_1_C03DFABF81B3E6E7_OFFSET))(this, a1, a2, a3);
	}
};
