#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_305;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_D8823C3ED80E1BD7___C_METHOD_1_CD1020B1B659233E_OFFSET UNITYSDK_OFFSET(0x12251270)
#define CLASS_1_D8823C3ED80E1BD7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12251220)
#define CLASS_1_D8823C3ED80E1BD7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12251260)

inline static constexpr unsigned int Class_1_D8823C3ED80E1BD7___c_TypeDefinitionIndex = 13744;

class Class_1_D8823C3ED80E1BD7___c : public ::System::Object
{
public:
	static ::Class_1_D8823C3ED80E1BD7___c** StaticGet___9()
	{
		return (::Class_1_D8823C3ED80E1BD7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8823C3ED80E1BD7___c_TypeDefinitionIndex)->GetStaticField(0x8CE0);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_305*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_305*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8823C3ED80E1BD7___c_TypeDefinitionIndex)->GetStaticField(0x8CE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8823C3ED80E1BD7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8823C3ED80E1BD7___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CD1020B1B659233E(::Class_2_208CC9941471731A_305* a1, ::Class_2_208CC9941471731A_305* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_305*, ::Class_2_208CC9941471731A_305*))((::PBYTE)hIl2Cpp + CLASS_1_D8823C3ED80E1BD7___C_METHOD_1_CD1020B1B659233E_OFFSET))(this, a1, a2);
	}
};
