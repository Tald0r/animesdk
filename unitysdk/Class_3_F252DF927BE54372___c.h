#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_846182BC37DE078E;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F252DF927BE54372___C_METHOD_1_2751686E3FC51762_OFFSET UNITYSDK_OFFSET(0xBF92D70)
#define CLASS_3_F252DF927BE54372___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF92D20)
#define CLASS_3_F252DF927BE54372___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBF92D60)

inline static constexpr unsigned int Class_3_F252DF927BE54372___c_TypeDefinitionIndex = 44276;

class Class_3_F252DF927BE54372___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_846182BC37DE078E*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_846182BC37DE078E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F252DF927BE54372___c_TypeDefinitionIndex)->GetStaticField(0x35F00);
	}
	static ::Class_3_F252DF927BE54372___c** StaticGet___9()
	{
		return (::Class_3_F252DF927BE54372___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F252DF927BE54372___c_TypeDefinitionIndex)->GetStaticField(0x35F08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2751686E3FC51762(::Class_3_846182BC37DE078E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_846182BC37DE078E*))((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372___C_METHOD_1_2751686E3FC51762_OFFSET))(this, a1);
	}
};
