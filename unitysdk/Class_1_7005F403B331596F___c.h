#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_85E76291A7596AC8;

#define CLASS_1_7005F403B331596F___C_METHOD_1_2D408172EB5053A9_OFFSET UNITYSDK_OFFSET(0xA46D8D0)
#define CLASS_1_7005F403B331596F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA46D880)
#define CLASS_1_7005F403B331596F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA46D8C0)

inline static constexpr unsigned int Class_1_7005F403B331596F___c_TypeDefinitionIndex = 42898;

class Class_1_7005F403B331596F___c : public ::System::Object
{
public:
	static ::Class_1_7005F403B331596F___c** StaticGet___9()
	{
		return (::Class_1_7005F403B331596F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7005F403B331596F___c_TypeDefinitionIndex)->GetStaticField(0x409A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7005F403B331596F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7005F403B331596F___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2D408172EB5053A9(::Class_1_85E76291A7596AC8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_85E76291A7596AC8*))((::PBYTE)hIl2Cpp + CLASS_1_7005F403B331596F___C_METHOD_1_2D408172EB5053A9_OFFSET))(this, a1);
	}
};
