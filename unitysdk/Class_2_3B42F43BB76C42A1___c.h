#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FD31E4216DD30F97;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_3B42F43BB76C42A1___C_METHOD_1_908180B8F1022CC2_OFFSET UNITYSDK_OFFSET(0x9021860)
#define CLASS_2_3B42F43BB76C42A1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9021810)
#define CLASS_2_3B42F43BB76C42A1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9021850)

inline static constexpr unsigned int Class_2_3B42F43BB76C42A1___c_TypeDefinitionIndex = 44647;

class Class_2_3B42F43BB76C42A1___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_FD31E4216DD30F97*>** StaticGet___9__5_1()
	{
		return (::System::Predicate_1<::Class_1_FD31E4216DD30F97*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3B42F43BB76C42A1___c_TypeDefinitionIndex)->GetStaticField(0x3B050);
	}
	static ::Class_2_3B42F43BB76C42A1___c** StaticGet___9()
	{
		return (::Class_2_3B42F43BB76C42A1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3B42F43BB76C42A1___c_TypeDefinitionIndex)->GetStaticField(0x3B058);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3B42F43BB76C42A1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B42F43BB76C42A1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_908180B8F1022CC2(::Class_1_FD31E4216DD30F97* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD31E4216DD30F97*))((::PBYTE)hIl2Cpp + CLASS_2_3B42F43BB76C42A1___C_METHOD_1_908180B8F1022CC2_OFFSET))(this, a1);
	}
};
