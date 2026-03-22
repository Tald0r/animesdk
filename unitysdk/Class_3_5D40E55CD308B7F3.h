#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_5D40E55CD308B7F3_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x91C4170)
#define CLASS_3_5D40E55CD308B7F3_METHOD_3_A8DBE61CE457F4F0_OFFSET UNITYSDK_OFFSET(0x91C43D0)
#define CLASS_3_5D40E55CD308B7F3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91C48B0)
#define CLASS_3_5D40E55CD308B7F3__CTOR_OFFSET UNITYSDK_OFFSET(0x91C46E0)

inline static constexpr unsigned int Class_3_5D40E55CD308B7F3_TypeDefinitionIndex = 58847;

class Class_3_5D40E55CD308B7F3 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_1; // 0x18
	::Class_3_CF43FA1E89397A1C* Field_3_3; // 0x20
	::Class_3_B537A0AA78803363* Field_3_2; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D40E55CD308B7F3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D40E55CD308B7F3_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_A8DBE61CE457F4F0(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_5D40E55CD308B7F3_METHOD_3_A8DBE61CE457F4F0_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D40E55CD308B7F3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
