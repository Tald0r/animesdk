#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_757DEB3BE5D42C3A;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_D6B982869FD18C4B___C_METHOD_1_D7917F24844E103A_OFFSET UNITYSDK_OFFSET(0xA237040)
#define CLASS_3_D6B982869FD18C4B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA236FF0)
#define CLASS_3_D6B982869FD18C4B___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA237030)

inline static constexpr unsigned int Class_3_D6B982869FD18C4B___c_TypeDefinitionIndex = 69439;

class Class_3_D6B982869FD18C4B___c : public ::System::Object
{
public:
	static ::Class_3_D6B982869FD18C4B___c** StaticGet___9()
	{
		return (::Class_3_D6B982869FD18C4B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6B982869FD18C4B___c_TypeDefinitionIndex)->GetStaticField(0x3F630);
	}
	static ::System::Action_1<::Class_3_757DEB3BE5D42C3A*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_757DEB3BE5D42C3A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6B982869FD18C4B___c_TypeDefinitionIndex)->GetStaticField(0x3F638);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D6B982869FD18C4B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6B982869FD18C4B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D7917F24844E103A(::Class_3_757DEB3BE5D42C3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_757DEB3BE5D42C3A*))((::PBYTE)hIl2Cpp + CLASS_3_D6B982869FD18C4B___C_METHOD_1_D7917F24844E103A_OFFSET))(this, a1);
	}
};
