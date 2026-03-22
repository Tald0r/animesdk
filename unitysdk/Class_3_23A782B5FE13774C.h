#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_23A782B5FE13774C_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x78296A0)
#define CLASS_3_23A782B5FE13774C_METHOD_3_BB5DFAE4FCEC0C51_OFFSET UNITYSDK_OFFSET(0x78297F0)
#define CLASS_3_23A782B5FE13774C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB0A4690)
#define CLASS_3_23A782B5FE13774C__CTOR_OFFSET UNITYSDK_OFFSET(0x78298B0)

inline static constexpr unsigned int Class_3_23A782B5FE13774C_TypeDefinitionIndex = 72979;

class Class_3_23A782B5FE13774C : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_3_1; // 0x18
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23A782B5FE13774C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23A782B5FE13774C_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_BB5DFAE4FCEC0C51(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_23A782B5FE13774C_METHOD_3_BB5DFAE4FCEC0C51_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23A782B5FE13774C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
