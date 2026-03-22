#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_0BFFDADC45347991_METHOD_3_5251C007938786A9_OFFSET UNITYSDK_OFFSET(0xBCBCE60)
#define CLASS_3_0BFFDADC45347991_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBCBD3C0)
#define CLASS_3_0BFFDADC45347991_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xBCBCB80)
#define CLASS_3_0BFFDADC45347991__CTOR_OFFSET UNITYSDK_OFFSET(0xBCBD250)

inline static constexpr unsigned int Class_3_0BFFDADC45347991_TypeDefinitionIndex = 58514;

class Class_3_0BFFDADC45347991 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_4; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_1; // 0x20
	::Class_4_AF61EEC11F34483C<::System::Int32>* Field_3_3; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BFFDADC45347991__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BFFDADC45347991_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_5251C007938786A9(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_0BFFDADC45347991_METHOD_3_5251C007938786A9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BFFDADC45347991_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
