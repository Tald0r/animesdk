#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_19E0EB203766E944_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x6FD1C30)
#define CLASS_3_19E0EB203766E944_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6FD25D0)
#define CLASS_3_19E0EB203766E944_METHOD_3_E7883D784175F545_OFFSET UNITYSDK_OFFSET(0x6FD1FA0)
#define CLASS_3_19E0EB203766E944__CTOR_OFFSET UNITYSDK_OFFSET(0x6FD23F0)

inline static constexpr unsigned int Class_3_19E0EB203766E944_TypeDefinitionIndex = 42568;

class Class_3_19E0EB203766E944 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_5; // 0x18
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_1; // 0x20
	::Class_4_179456445C225AB4<::System::Single>* Field_3_3; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_2; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38
	::Class_4_AF61EEC11F34483C<::System::Int32>* Field_3_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19E0EB203766E944__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19E0EB203766E944_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_E7883D784175F545(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_19E0EB203766E944_METHOD_3_E7883D784175F545_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19E0EB203766E944_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
