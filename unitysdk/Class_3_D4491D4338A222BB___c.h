#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_2EC1FF8A4DE9E178;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_D4491D4338A222BB___C_METHOD_1_B3BCFE72DF2C5725_OFFSET UNITYSDK_OFFSET(0x76A4A50)
#define CLASS_3_D4491D4338A222BB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x76A4A00)
#define CLASS_3_D4491D4338A222BB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x76A4A40)

inline static constexpr unsigned int Class_3_D4491D4338A222BB___c_TypeDefinitionIndex = 72078;

class Class_3_D4491D4338A222BB___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_2EC1FF8A4DE9E178*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_2EC1FF8A4DE9E178*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D4491D4338A222BB___c_TypeDefinitionIndex)->GetStaticField(0x42660);
	}
	static ::Class_3_D4491D4338A222BB___c** StaticGet___9()
	{
		return (::Class_3_D4491D4338A222BB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D4491D4338A222BB___c_TypeDefinitionIndex)->GetStaticField(0x42668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D4491D4338A222BB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4491D4338A222BB___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B3BCFE72DF2C5725(::Class_3_2EC1FF8A4DE9E178* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_2EC1FF8A4DE9E178*))((::PBYTE)hIl2Cpp + CLASS_3_D4491D4338A222BB___C_METHOD_1_B3BCFE72DF2C5725_OFFSET))(this, a1);
	}
};
