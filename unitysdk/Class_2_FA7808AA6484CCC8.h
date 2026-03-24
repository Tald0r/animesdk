#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_49D732397AF9BDB9.h"

class Class_1_D375C91CCE5D3999;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_FA7808AA6484CCC8_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x91F41A0)
#define CLASS_2_FA7808AA6484CCC8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91F4730)
#define CLASS_2_FA7808AA6484CCC8__CTOR_OFFSET UNITYSDK_OFFSET(0x91F4180)

inline static constexpr unsigned int Class_2_FA7808AA6484CCC8_TypeDefinitionIndex = 45679;

class Class_2_FA7808AA6484CCC8 : public ::Class_1_49D732397AF9BDB9
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_1; // 0x18
	::Class_1_D375C91CCE5D3999* Field_2_0; // 0x20

	::System::Void _ctor(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_2_FA7808AA6484CCC8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA7808AA6484CCC8_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA7808AA6484CCC8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
