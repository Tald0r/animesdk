#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_972;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_6_280307501D5E8A30___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x9212F90)
#define CLASS_6_280307501D5E8A30___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9212F40)
#define CLASS_6_280307501D5E8A30___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9212F80)

inline static constexpr unsigned int Class_6_280307501D5E8A30___c_TypeDefinitionIndex = 58177;

class Class_6_280307501D5E8A30___c : public ::System::Object
{
public:
	static ::Class_6_280307501D5E8A30___c** StaticGet___9()
	{
		return (::Class_6_280307501D5E8A30___c**)Il2CppClass::FromTypeDefinitionIndex(Class_6_280307501D5E8A30___c_TypeDefinitionIndex)->GetStaticField(0x3E410);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_972*>** StaticGet___9__34_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_972*>**)Il2CppClass::FromTypeDefinitionIndex(Class_6_280307501D5E8A30___c_TypeDefinitionIndex)->GetStaticField(0x3E418);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_6_280307501D5E8A30___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_280307501D5E8A30___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_972* a1, ::Class_2_208CC9941471731A_972* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_972*, ::Class_2_208CC9941471731A_972*))((::PBYTE)hIl2Cpp + CLASS_6_280307501D5E8A30___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
