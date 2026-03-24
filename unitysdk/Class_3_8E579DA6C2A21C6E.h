#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_8E579DA6C2A21C6E_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xEB34260)
#define CLASS_3_8E579DA6C2A21C6E_METHOD_3_BB5DFAE4FCEC0C51_OFFSET UNITYSDK_OFFSET(0xEB343B0)
#define CLASS_3_8E579DA6C2A21C6E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xEB34560)
#define CLASS_3_8E579DA6C2A21C6E__CTOR_OFFSET UNITYSDK_OFFSET(0xEB34470)

inline static constexpr unsigned int Class_3_8E579DA6C2A21C6E_TypeDefinitionIndex = 53634;

class Class_3_8E579DA6C2A21C6E : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_0; // 0x18
	::Class_4_D0B094D0B900A9F0<::System::Int32>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E579DA6C2A21C6E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E579DA6C2A21C6E_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_BB5DFAE4FCEC0C51(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_8E579DA6C2A21C6E_METHOD_3_BB5DFAE4FCEC0C51_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E579DA6C2A21C6E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
