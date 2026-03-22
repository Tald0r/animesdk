#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_189;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_65C179179554FFB6___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x12F79430)
#define CLASS_1_65C179179554FFB6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F793E0)
#define CLASS_1_65C179179554FFB6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12F79420)

inline static constexpr unsigned int Class_1_65C179179554FFB6___c_TypeDefinitionIndex = 10545;

class Class_1_65C179179554FFB6___c : public ::System::Object
{
public:
	static ::Class_1_65C179179554FFB6___c** StaticGet___9()
	{
		return (::Class_1_65C179179554FFB6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65C179179554FFB6___c_TypeDefinitionIndex)->GetStaticField(0x8D10);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_189*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_189*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65C179179554FFB6___c_TypeDefinitionIndex)->GetStaticField(0x8D18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65C179179554FFB6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65C179179554FFB6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_189* a1, ::Class_2_208CC9941471731A_189* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_189*, ::Class_2_208CC9941471731A_189*))((::PBYTE)hIl2Cpp + CLASS_1_65C179179554FFB6___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
