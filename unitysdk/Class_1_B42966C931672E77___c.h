#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B3810BE455E7DF21;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_B42966C931672E77___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x6BC0700)
#define CLASS_1_B42966C931672E77___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6BC06B0)
#define CLASS_1_B42966C931672E77___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6BC06F0)

inline static constexpr unsigned int Class_1_B42966C931672E77___c_TypeDefinitionIndex = 53140;

class Class_1_B42966C931672E77___c : public ::System::Object
{
public:
	static ::Class_1_B42966C931672E77___c** StaticGet___9()
	{
		return (::Class_1_B42966C931672E77___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B42966C931672E77___c_TypeDefinitionIndex)->GetStaticField(0x361B0);
	}
	static ::System::Predicate_1<::Class_1_B3810BE455E7DF21*>** StaticGet___9__18_0()
	{
		return (::System::Predicate_1<::Class_1_B3810BE455E7DF21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B42966C931672E77___c_TypeDefinitionIndex)->GetStaticField(0x361B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B42966C931672E77___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B42966C931672E77___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_B3810BE455E7DF21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B3810BE455E7DF21*))((::PBYTE)hIl2Cpp + CLASS_1_B42966C931672E77___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
