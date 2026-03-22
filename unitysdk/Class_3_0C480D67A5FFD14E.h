#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_0C480D67A5FFD14E_METHOD_3_A912A66879ABA861_OFFSET UNITYSDK_OFFSET(0x843D2B0)
#define CLASS_3_0C480D67A5FFD14E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x843D860)
#define CLASS_3_0C480D67A5FFD14E_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x843CFD0)
#define CLASS_3_0C480D67A5FFD14E__CTOR_OFFSET UNITYSDK_OFFSET(0x843D5E0)

inline static constexpr unsigned int Class_3_0C480D67A5FFD14E_TypeDefinitionIndex = 40117;

class Class_3_0C480D67A5FFD14E : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_2; // 0x18
	::Class_3_CF43FA1E89397A1C* Field_3_3; // 0x20
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_3_CF43FA1E89397A1C* Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C480D67A5FFD14E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C480D67A5FFD14E_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_A912A66879ABA861(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_0C480D67A5FFD14E_METHOD_3_A912A66879ABA861_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C480D67A5FFD14E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
