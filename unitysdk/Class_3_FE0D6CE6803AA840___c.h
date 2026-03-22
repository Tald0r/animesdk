#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_FE0D6CE6803AA840___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xDDC05B0)
#define CLASS_3_FE0D6CE6803AA840___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDDC0560)
#define CLASS_3_FE0D6CE6803AA840___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDDC05A0)

inline static constexpr unsigned int Class_3_FE0D6CE6803AA840___c_TypeDefinitionIndex = 54805;

class Class_3_FE0D6CE6803AA840___c : public ::System::Object
{
public:
	static ::Class_3_FE0D6CE6803AA840___c** StaticGet___9()
	{
		return (::Class_3_FE0D6CE6803AA840___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE0D6CE6803AA840___c_TypeDefinitionIndex)->GetStaticField(0x3C7D0);
	}
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE0D6CE6803AA840___c_TypeDefinitionIndex)->GetStaticField(0x3C7D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FE0D6CE6803AA840___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE0D6CE6803AA840___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE0D6CE6803AA840___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
