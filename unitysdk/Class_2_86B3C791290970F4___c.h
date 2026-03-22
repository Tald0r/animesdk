#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6EF456A21AE85EEC_43;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_2_86B3C791290970F4___C_METHOD_1_67B901A57F7CC132_OFFSET UNITYSDK_OFFSET(0xD3457E0)
#define CLASS_2_86B3C791290970F4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD345790)
#define CLASS_2_86B3C791290970F4___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3457D0)

inline static constexpr unsigned int Class_2_86B3C791290970F4___c_TypeDefinitionIndex = 44170;

class Class_2_86B3C791290970F4___c : public ::System::Object
{
public:
	static ::Class_2_86B3C791290970F4___c** StaticGet___9()
	{
		return (::Class_2_86B3C791290970F4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_86B3C791290970F4___c_TypeDefinitionIndex)->GetStaticField(0x40BE0);
	}
	static ::System::Converter_2<::Class_3_6EF456A21AE85EEC_43*, ::System::Int32>** StaticGet___9__3_0()
	{
		return (::System::Converter_2<::Class_3_6EF456A21AE85EEC_43*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_86B3C791290970F4___c_TypeDefinitionIndex)->GetStaticField(0x40BE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_67B901A57F7CC132(::Class_3_6EF456A21AE85EEC_43* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_6EF456A21AE85EEC_43*))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4___C_METHOD_1_67B901A57F7CC132_OFFSET))(this, a1);
	}
};
