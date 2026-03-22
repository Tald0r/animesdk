#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_7A13F49B9930F473___C_METHOD_1_FF8DFFDCCAB9F666_OFFSET UNITYSDK_OFFSET(0x7186B30)
#define CLASS_2_7A13F49B9930F473___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7186AE0)
#define CLASS_2_7A13F49B9930F473___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7186B20)

inline static constexpr unsigned int Class_2_7A13F49B9930F473___c_TypeDefinitionIndex = 69610;

class Class_2_7A13F49B9930F473___c : public ::System::Object
{
public:
	static ::Class_2_7A13F49B9930F473___c** StaticGet___9()
	{
		return (::Class_2_7A13F49B9930F473___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A13F49B9930F473___c_TypeDefinitionIndex)->GetStaticField(0x319C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF8DFFDCCAB9F666(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473___C_METHOD_1_FF8DFFDCCAB9F666_OFFSET))(this, a1);
	}
};
