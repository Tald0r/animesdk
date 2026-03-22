#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_4_93284E6BFCE7946F___C_METHOD_1_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x8C9C5B0)
#define CLASS_4_93284E6BFCE7946F___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x8C9C5A0)
#define CLASS_4_93284E6BFCE7946F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C9C550)
#define CLASS_4_93284E6BFCE7946F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8C9C590)

inline static constexpr unsigned int Class_4_93284E6BFCE7946F___c_TypeDefinitionIndex = 61822;

class Class_4_93284E6BFCE7946F___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__5_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_4_93284E6BFCE7946F___c_TypeDefinitionIndex)->GetStaticField(0x3E230);
	}
	static ::System::Action** StaticGet___9__8_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_4_93284E6BFCE7946F___c_TypeDefinitionIndex)->GetStaticField(0x3E238);
	}
	static ::Class_4_93284E6BFCE7946F___c** StaticGet___9()
	{
		return (::Class_4_93284E6BFCE7946F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_93284E6BFCE7946F___c_TypeDefinitionIndex)->GetStaticField(0x3E240);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_93284E6BFCE7946F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_93284E6BFCE7946F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_93284E6BFCE7946F___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_93284E6BFCE7946F___C_METHOD_1_1ABF1CBED7A4AF0A_OFFSET))(this);
	}
};
