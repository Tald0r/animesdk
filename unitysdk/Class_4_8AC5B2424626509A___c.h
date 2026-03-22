#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_4307C973EE89761A;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_8AC5B2424626509A___C_METHOD_1_33903CC6836F4169_OFFSET UNITYSDK_OFFSET(0xA2BC200)
#define CLASS_4_8AC5B2424626509A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2BC1B0)
#define CLASS_4_8AC5B2424626509A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA2BC1F0)

inline static constexpr unsigned int Class_4_8AC5B2424626509A___c_TypeDefinitionIndex = 59561;

class Class_4_8AC5B2424626509A___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_4_4307C973EE89761A*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_4_4307C973EE89761A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_8AC5B2424626509A___c_TypeDefinitionIndex)->GetStaticField(0x3B1A0);
	}
	static ::Class_4_8AC5B2424626509A___c** StaticGet___9()
	{
		return (::Class_4_8AC5B2424626509A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_8AC5B2424626509A___c_TypeDefinitionIndex)->GetStaticField(0x3B1A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_8AC5B2424626509A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8AC5B2424626509A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_33903CC6836F4169(::Class_4_4307C973EE89761A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_4307C973EE89761A*))((::PBYTE)hIl2Cpp + CLASS_4_8AC5B2424626509A___C_METHOD_1_33903CC6836F4169_OFFSET))(this, a1);
	}
};
