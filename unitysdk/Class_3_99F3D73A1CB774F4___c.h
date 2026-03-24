#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_816015CAFD8353F7;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_99F3D73A1CB774F4___C_METHOD_1_F6C48622ED52A6DD_OFFSET UNITYSDK_OFFSET(0x8A1C430)
#define CLASS_3_99F3D73A1CB774F4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A1C3E0)
#define CLASS_3_99F3D73A1CB774F4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A1C420)

inline static constexpr unsigned int Class_3_99F3D73A1CB774F4___c_TypeDefinitionIndex = 47928;

class Class_3_99F3D73A1CB774F4___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_816015CAFD8353F7*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::Class_3_816015CAFD8353F7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_99F3D73A1CB774F4___c_TypeDefinitionIndex)->GetStaticField(0x2FB00);
	}
	static ::Class_3_99F3D73A1CB774F4___c** StaticGet___9()
	{
		return (::Class_3_99F3D73A1CB774F4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_99F3D73A1CB774F4___c_TypeDefinitionIndex)->GetStaticField(0x2FB08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_99F3D73A1CB774F4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99F3D73A1CB774F4___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F6C48622ED52A6DD(::Class_3_816015CAFD8353F7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_816015CAFD8353F7*))((::PBYTE)hIl2Cpp + CLASS_3_99F3D73A1CB774F4___C_METHOD_1_F6C48622ED52A6DD_OFFSET))(this, a1);
	}
};
