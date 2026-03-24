#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_A9355F642E257CD4;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_D6B982869FD18C4B___C_METHOD_1_D7917F24844E103A_OFFSET UNITYSDK_OFFSET(0x728B270)
#define CLASS_3_D6B982869FD18C4B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x728B220)
#define CLASS_3_D6B982869FD18C4B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x728B260)

inline static constexpr unsigned int Class_3_D6B982869FD18C4B___c_TypeDefinitionIndex = 55828;

class Class_3_D6B982869FD18C4B___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_A9355F642E257CD4*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_A9355F642E257CD4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6B982869FD18C4B___c_TypeDefinitionIndex)->GetStaticField(0x3E2A0);
	}
	static ::Class_3_D6B982869FD18C4B___c** StaticGet___9()
	{
		return (::Class_3_D6B982869FD18C4B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6B982869FD18C4B___c_TypeDefinitionIndex)->GetStaticField(0x3E2A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D6B982869FD18C4B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6B982869FD18C4B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D7917F24844E103A(::Class_3_A9355F642E257CD4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A9355F642E257CD4*))((::PBYTE)hIl2Cpp + CLASS_3_D6B982869FD18C4B___C_METHOD_1_D7917F24844E103A_OFFSET))(this, a1);
	}
};
