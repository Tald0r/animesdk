#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B6FECDA67F0DB5C3;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_FD382C753AFE8157___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x68F9490)
#define CLASS_2_FD382C753AFE8157___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x68F9440)
#define CLASS_2_FD382C753AFE8157___C__CTOR_OFFSET UNITYSDK_OFFSET(0x68F9480)

inline static constexpr unsigned int Class_2_FD382C753AFE8157___c_TypeDefinitionIndex = 76589;

class Class_2_FD382C753AFE8157___c : public ::System::Object
{
public:
	static ::Class_2_FD382C753AFE8157___c** StaticGet___9()
	{
		return (::Class_2_FD382C753AFE8157___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD382C753AFE8157___c_TypeDefinitionIndex)->GetStaticField(0x35AB0);
	}
	static ::System::Predicate_1<::Class_1_B6FECDA67F0DB5C3*>** StaticGet___9__143_0()
	{
		return (::System::Predicate_1<::Class_1_B6FECDA67F0DB5C3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD382C753AFE8157___c_TypeDefinitionIndex)->GetStaticField(0x35AB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD382C753AFE8157___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD382C753AFE8157___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_B6FECDA67F0DB5C3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B6FECDA67F0DB5C3*))((::PBYTE)hIl2Cpp + CLASS_2_FD382C753AFE8157___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
