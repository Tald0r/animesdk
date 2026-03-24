#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_A0921FA1BA837194_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x6D2FF10)
#define CLASS_3_A0921FA1BA837194_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6D30510)
#define CLASS_3_A0921FA1BA837194_METHOD_3_D8F007BBCA9CFCB2_OFFSET UNITYSDK_OFFSET(0x6D30170)
#define CLASS_3_A0921FA1BA837194__CTOR_OFFSET UNITYSDK_OFFSET(0x6D303B0)

inline static constexpr unsigned int Class_3_A0921FA1BA837194_TypeDefinitionIndex = 76585;

class Class_3_A0921FA1BA837194 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x18
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_2; // 0x20
	::Class_3_B537A0AA78803363* Field_3_3; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0921FA1BA837194__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0921FA1BA837194_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_D8F007BBCA9CFCB2(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_A0921FA1BA837194_METHOD_3_D8F007BBCA9CFCB2_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0921FA1BA837194_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
