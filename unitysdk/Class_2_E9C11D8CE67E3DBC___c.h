#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_E9C11D8CE67E3DBC___C_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x8FD2180)
#define CLASS_2_E9C11D8CE67E3DBC___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x8FD23B0)
#define CLASS_2_E9C11D8CE67E3DBC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FD2130)
#define CLASS_2_E9C11D8CE67E3DBC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD2170)

inline static constexpr unsigned int Class_2_E9C11D8CE67E3DBC___c_TypeDefinitionIndex = 44083;

class Class_2_E9C11D8CE67E3DBC___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__26_5()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9C11D8CE67E3DBC___c_TypeDefinitionIndex)->GetStaticField(0x2C010);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__26_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9C11D8CE67E3DBC___c_TypeDefinitionIndex)->GetStaticField(0x2C018);
	}
	static ::Class_2_E9C11D8CE67E3DBC___c** StaticGet___9()
	{
		return (::Class_2_E9C11D8CE67E3DBC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9C11D8CE67E3DBC___c_TypeDefinitionIndex)->GetStaticField(0x2C020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9C11D8CE67E3DBC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9C11D8CE67E3DBC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9C11D8CE67E3DBC___C_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9C11D8CE67E3DBC___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
