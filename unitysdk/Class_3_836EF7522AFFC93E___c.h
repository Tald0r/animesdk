#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6884E3357C624746_1;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_836EF7522AFFC93E___C_METHOD_1_5A7FAC6AD4A6D872_OFFSET UNITYSDK_OFFSET(0xAF27E60)
#define CLASS_3_836EF7522AFFC93E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF27E10)
#define CLASS_3_836EF7522AFFC93E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAF27E50)

inline static constexpr unsigned int Class_3_836EF7522AFFC93E___c_TypeDefinitionIndex = 58356;

class Class_3_836EF7522AFFC93E___c : public ::System::Object
{
public:
	static ::Class_3_836EF7522AFFC93E___c** StaticGet___9()
	{
		return (::Class_3_836EF7522AFFC93E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_836EF7522AFFC93E___c_TypeDefinitionIndex)->GetStaticField(0x46650);
	}
	static ::System::Action_1<::Class_3_6884E3357C624746_1*>** StaticGet___9__10_0()
	{
		return (::System::Action_1<::Class_3_6884E3357C624746_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_836EF7522AFFC93E___c_TypeDefinitionIndex)->GetStaticField(0x46658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_836EF7522AFFC93E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836EF7522AFFC93E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5A7FAC6AD4A6D872(::Class_3_6884E3357C624746_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6884E3357C624746_1*))((::PBYTE)hIl2Cpp + CLASS_3_836EF7522AFFC93E___C_METHOD_1_5A7FAC6AD4A6D872_OFFSET))(this, a1);
	}
};
