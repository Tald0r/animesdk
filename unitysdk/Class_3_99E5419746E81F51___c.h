#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3068493346D129A9;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_99E5419746E81F51___C_METHOD_1_5B1F86CCB8579B26_OFFSET UNITYSDK_OFFSET(0x66F06D0)
#define CLASS_3_99E5419746E81F51___C_METHOD_1_754748ACD747E361_OFFSET UNITYSDK_OFFSET(0x66F06E0)
#define CLASS_3_99E5419746E81F51___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x66F0680)
#define CLASS_3_99E5419746E81F51___C__CTOR_OFFSET UNITYSDK_OFFSET(0x66F06C0)

inline static constexpr unsigned int Class_3_99E5419746E81F51___c_TypeDefinitionIndex = 78519;

class Class_3_99E5419746E81F51___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_3068493346D129A9*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_3068493346D129A9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_99E5419746E81F51___c_TypeDefinitionIndex)->GetStaticField(0x3E650);
	}
	static ::Class_3_99E5419746E81F51___c** StaticGet___9()
	{
		return (::Class_3_99E5419746E81F51___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_99E5419746E81F51___c_TypeDefinitionIndex)->GetStaticField(0x3E658);
	}
	static ::System::Action_1<::Class_3_3068493346D129A9*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_3068493346D129A9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_99E5419746E81F51___c_TypeDefinitionIndex)->GetStaticField(0x3E660);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_99E5419746E81F51___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E5419746E81F51___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5B1F86CCB8579B26(::Class_3_3068493346D129A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3068493346D129A9*))((::PBYTE)hIl2Cpp + CLASS_3_99E5419746E81F51___C_METHOD_1_5B1F86CCB8579B26_OFFSET))(this, a1);
	}

	::System::Void Method_1_754748ACD747E361(::Class_3_3068493346D129A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3068493346D129A9*))((::PBYTE)hIl2Cpp + CLASS_3_99E5419746E81F51___C_METHOD_1_754748ACD747E361_OFFSET))(this, a1);
	}
};
