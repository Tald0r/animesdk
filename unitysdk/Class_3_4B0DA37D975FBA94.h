#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_E4DCFD174698F990;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_4B0DA37D975FBA94_METHOD_3_0D25BC74DF85E464_OFFSET UNITYSDK_OFFSET(0xCE37310)
#define CLASS_3_4B0DA37D975FBA94_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xCE36BA0)
#define CLASS_3_4B0DA37D975FBA94_METHOD_3_B7E3C3DAFBD8F4B2_OFFSET UNITYSDK_OFFSET(0xCE36A30)
#define CLASS_3_4B0DA37D975FBA94_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCE376F0)
#define CLASS_3_4B0DA37D975FBA94_METHOD_3_D8F007BBCA9CFCB2_OFFSET UNITYSDK_OFFSET(0xCE36F10)
#define CLASS_3_4B0DA37D975FBA94_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xCE37680)
#define CLASS_3_4B0DA37D975FBA94__CTOR_OFFSET UNITYSDK_OFFSET(0xCE374A0)

inline static constexpr unsigned int Class_3_4B0DA37D975FBA94_TypeDefinitionIndex = 75122;

class Class_3_4B0DA37D975FBA94 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_5; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x28
	::Class_4_179456445C225AB4<::System::Single>* Field_3_4; // 0x30
	::Class_4_179456445C225AB4<::System::String*>* Field_3_3; // 0x38
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_3_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_B7E3C3DAFBD8F4B2(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94_METHOD_3_B7E3C3DAFBD8F4B2_OFFSET))(this, a1);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_D8F007BBCA9CFCB2(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94_METHOD_3_D8F007BBCA9CFCB2_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0D25BC74DF85E464(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94_METHOD_3_0D25BC74DF85E464_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
