#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AE02BC8285203464_22;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_92618EF6874DD24E___C_METHOD_1_3BC49695969C6816_OFFSET UNITYSDK_OFFSET(0x92E3110)
#define CLASS_2_92618EF6874DD24E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x92E30C0)
#define CLASS_2_92618EF6874DD24E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x92E3100)

inline static constexpr unsigned int Class_2_92618EF6874DD24E___c_TypeDefinitionIndex = 77061;

class Class_2_92618EF6874DD24E___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_3_AE02BC8285203464_22*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Class_3_AE02BC8285203464_22*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_92618EF6874DD24E___c_TypeDefinitionIndex)->GetStaticField(0x3C060);
	}
	static ::Class_2_92618EF6874DD24E___c** StaticGet___9()
	{
		return (::Class_2_92618EF6874DD24E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_92618EF6874DD24E___c_TypeDefinitionIndex)->GetStaticField(0x3C068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_92618EF6874DD24E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92618EF6874DD24E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_3BC49695969C6816(::Class_3_AE02BC8285203464_22* a1, ::Class_3_AE02BC8285203464_22* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_AE02BC8285203464_22*, ::Class_3_AE02BC8285203464_22*))((::PBYTE)hIl2Cpp + CLASS_2_92618EF6874DD24E___C_METHOD_1_3BC49695969C6816_OFFSET))(this, a1, a2);
	}
};
