#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_575EE8E795F8CFE8_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xB4320F0)
#define CLASS_3_575EE8E795F8CFE8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4325E0)
#define CLASS_3_575EE8E795F8CFE8_METHOD_3_CD85CA27A9EDD188_OFFSET UNITYSDK_OFFSET(0xB432350)
#define CLASS_3_575EE8E795F8CFE8__CTOR_OFFSET UNITYSDK_OFFSET(0xB432480)

inline static constexpr unsigned int Class_3_575EE8E795F8CFE8_TypeDefinitionIndex = 40237;

class Class_3_575EE8E795F8CFE8 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_1; // 0x20
	::Class_4_AF61EEC11F34483C<::System::Int32>* Field_3_2; // 0x28
	::Class_3_B537A0AA78803363* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_575EE8E795F8CFE8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_575EE8E795F8CFE8_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_CD85CA27A9EDD188(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_575EE8E795F8CFE8_METHOD_3_CD85CA27A9EDD188_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_575EE8E795F8CFE8_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
