#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_5EDE103BB9292AAA___C_METHOD_1_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xB7B4CF0)
#define CLASS_2_5EDE103BB9292AAA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7B4CA0)
#define CLASS_2_5EDE103BB9292AAA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB7B4CE0)

inline static constexpr unsigned int Class_2_5EDE103BB9292AAA___c_TypeDefinitionIndex = 37822;

class Class_2_5EDE103BB9292AAA___c : public ::System::Object
{
public:
	static ::Class_2_5EDE103BB9292AAA___c** StaticGet___9()
	{
		return (::Class_2_5EDE103BB9292AAA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5EDE103BB9292AAA___c_TypeDefinitionIndex)->GetStaticField(0x291F0);
	}
	static ::System::Action_1<::System::Object*>** StaticGet___9__11_0()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5EDE103BB9292AAA___c_TypeDefinitionIndex)->GetStaticField(0x291F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5EDE103BB9292AAA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EDE103BB9292AAA___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5EDE103BB9292AAA___C_METHOD_1_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}
};
