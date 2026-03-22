#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_97;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_346FA627E4EE2E9C___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x122C61C0)
#define CLASS_1_346FA627E4EE2E9C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x122C6170)
#define CLASS_1_346FA627E4EE2E9C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x122C61B0)

inline static constexpr unsigned int Class_1_346FA627E4EE2E9C___c_TypeDefinitionIndex = 14267;

class Class_1_346FA627E4EE2E9C___c : public ::System::Object
{
public:
	static ::Class_1_346FA627E4EE2E9C___c** StaticGet___9()
	{
		return (::Class_1_346FA627E4EE2E9C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_346FA627E4EE2E9C___c_TypeDefinitionIndex)->GetStaticField(0x8DF0);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_97*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_97*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_346FA627E4EE2E9C___c_TypeDefinitionIndex)->GetStaticField(0x8DF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_346FA627E4EE2E9C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346FA627E4EE2E9C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_97* a1, ::Class_2_208CC9941471731A_97* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_97*, ::Class_2_208CC9941471731A_97*))((::PBYTE)hIl2Cpp + CLASS_1_346FA627E4EE2E9C___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
