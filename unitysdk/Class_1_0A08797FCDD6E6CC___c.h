#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_0A08797FCDD6E6CC___C_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x6088C10)
#define CLASS_1_0A08797FCDD6E6CC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6088BC0)
#define CLASS_1_0A08797FCDD6E6CC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6088C00)

inline static constexpr unsigned int Class_1_0A08797FCDD6E6CC___c_TypeDefinitionIndex = 39008;

class Class_1_0A08797FCDD6E6CC___c : public ::System::Object
{
public:
	static ::Class_1_0A08797FCDD6E6CC___c** StaticGet___9()
	{
		return (::Class_1_0A08797FCDD6E6CC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A08797FCDD6E6CC___c_TypeDefinitionIndex)->GetStaticField(0x35020);
	}
	static ::System::Action** StaticGet___9__7_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A08797FCDD6E6CC___c_TypeDefinitionIndex)->GetStaticField(0x35028);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A08797FCDD6E6CC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A08797FCDD6E6CC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A08797FCDD6E6CC___C_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}
};
