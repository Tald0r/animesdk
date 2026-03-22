#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_90D56F88EBAF454B;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_C5B027EA642B266E_1___C_METHOD_1_8AC175EE11DDE09E_OFFSET UNITYSDK_OFFSET(0xC5261D0)
#define CLASS_3_C5B027EA642B266E_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC526180)
#define CLASS_3_C5B027EA642B266E_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC5261C0)

inline static constexpr unsigned int Class_3_C5B027EA642B266E_1___c_TypeDefinitionIndex = 51326;

class Class_3_C5B027EA642B266E_1___c : public ::System::Object
{
public:
	static ::Class_3_C5B027EA642B266E_1___c** StaticGet___9()
	{
		return (::Class_3_C5B027EA642B266E_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C5B027EA642B266E_1___c_TypeDefinitionIndex)->GetStaticField(0x3CED0);
	}
	static ::System::Action_1<::Class_3_90D56F88EBAF454B*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_90D56F88EBAF454B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C5B027EA642B266E_1___c_TypeDefinitionIndex)->GetStaticField(0x3CED8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C5B027EA642B266E_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5B027EA642B266E_1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8AC175EE11DDE09E(::Class_3_90D56F88EBAF454B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_90D56F88EBAF454B*))((::PBYTE)hIl2Cpp + CLASS_3_C5B027EA642B266E_1___C_METHOD_1_8AC175EE11DDE09E_OFFSET))(this, a1);
	}
};
