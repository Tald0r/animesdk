#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_0C5A2D7C355AF6D1_1_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xD3EFB60)
#define CLASS_3_0C5A2D7C355AF6D1_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD3F0100)
#define CLASS_3_0C5A2D7C355AF6D1_1_METHOD_3_FD86C67947CE3065_OFFSET UNITYSDK_OFFSET(0xD3EFDC0)
#define CLASS_3_0C5A2D7C355AF6D1_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD3EFFA0)

inline static constexpr unsigned int Class_3_0C5A2D7C355AF6D1_1_TypeDefinitionIndex = 51647;

class Class_3_0C5A2D7C355AF6D1_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x18
	::Class_4_AF61EEC11F34483C<::System::Single>* Field_3_2; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_3_B537A0AA78803363* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C5A2D7C355AF6D1_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C5A2D7C355AF6D1_1_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_FD86C67947CE3065(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_0C5A2D7C355AF6D1_1_METHOD_3_FD86C67947CE3065_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C5A2D7C355AF6D1_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
