#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B3810BE455E7DF21;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_29BBD019F6E58D37___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0xD6295C0)
#define CLASS_1_29BBD019F6E58D37___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD629570)
#define CLASS_1_29BBD019F6E58D37___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD6295B0)

inline static constexpr unsigned int Class_1_29BBD019F6E58D37___c_TypeDefinitionIndex = 69571;

class Class_1_29BBD019F6E58D37___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_B3810BE455E7DF21*>** StaticGet___9__18_0()
	{
		return (::System::Predicate_1<::Class_1_B3810BE455E7DF21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29BBD019F6E58D37___c_TypeDefinitionIndex)->GetStaticField(0x3A410);
	}
	static ::Class_1_29BBD019F6E58D37___c** StaticGet___9()
	{
		return (::Class_1_29BBD019F6E58D37___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29BBD019F6E58D37___c_TypeDefinitionIndex)->GetStaticField(0x3A418);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_29BBD019F6E58D37___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29BBD019F6E58D37___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_B3810BE455E7DF21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B3810BE455E7DF21*))((::PBYTE)hIl2Cpp + CLASS_1_29BBD019F6E58D37___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
