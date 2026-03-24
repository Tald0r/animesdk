#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4C4745FFCF04854A;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_BA10C6A0F47DD582___C_METHOD_1_763D1EB848A9B89F_OFFSET UNITYSDK_OFFSET(0x64BBD50)
#define CLASS_3_BA10C6A0F47DD582___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x64BBD00)
#define CLASS_3_BA10C6A0F47DD582___C__CTOR_OFFSET UNITYSDK_OFFSET(0x64BBD40)

inline static constexpr unsigned int Class_3_BA10C6A0F47DD582___c_TypeDefinitionIndex = 53183;

class Class_3_BA10C6A0F47DD582___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_4C4745FFCF04854A*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_4C4745FFCF04854A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_BA10C6A0F47DD582___c_TypeDefinitionIndex)->GetStaticField(0x428E0);
	}
	static ::Class_3_BA10C6A0F47DD582___c** StaticGet___9()
	{
		return (::Class_3_BA10C6A0F47DD582___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_BA10C6A0F47DD582___c_TypeDefinitionIndex)->GetStaticField(0x428E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_763D1EB848A9B89F(::Class_3_4C4745FFCF04854A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4C4745FFCF04854A*))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582___C_METHOD_1_763D1EB848A9B89F_OFFSET))(this, a1);
	}
};
