#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_EDC72F3121620ECE___C_METHOD_1_CF43A435A04B3E6D_OFFSET UNITYSDK_OFFSET(0x828F810)
#define CLASS_3_EDC72F3121620ECE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x828F7C0)
#define CLASS_3_EDC72F3121620ECE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x828F800)

inline static constexpr unsigned int Class_3_EDC72F3121620ECE___c_TypeDefinitionIndex = 44052;

class Class_3_EDC72F3121620ECE___c : public ::System::Object
{
public:
	static ::Class_3_EDC72F3121620ECE___c** StaticGet___9()
	{
		return (::Class_3_EDC72F3121620ECE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EDC72F3121620ECE___c_TypeDefinitionIndex)->GetStaticField(0x3E300);
	}
	static ::System::Action** StaticGet___9__6_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EDC72F3121620ECE___c_TypeDefinitionIndex)->GetStaticField(0x3E308);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EDC72F3121620ECE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EDC72F3121620ECE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CF43A435A04B3E6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EDC72F3121620ECE___C_METHOD_1_CF43A435A04B3E6D_OFFSET))(this);
	}
};
