#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_516;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_DD8F94F585F1DD50___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x125A34E0)
#define CLASS_1_DD8F94F585F1DD50___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125A3490)
#define CLASS_1_DD8F94F585F1DD50___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125A34D0)

inline static constexpr unsigned int Class_1_DD8F94F585F1DD50___c_TypeDefinitionIndex = 15897;

class Class_1_DD8F94F585F1DD50___c : public ::System::Object
{
public:
	static ::Class_1_DD8F94F585F1DD50___c** StaticGet___9()
	{
		return (::Class_1_DD8F94F585F1DD50___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD8F94F585F1DD50___c_TypeDefinitionIndex)->GetStaticField(0x8C30);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_516*>** StaticGet___9__11_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_516*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD8F94F585F1DD50___c_TypeDefinitionIndex)->GetStaticField(0x8C38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD8F94F585F1DD50___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD8F94F585F1DD50___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_516* a1, ::Class_2_208CC9941471731A_516* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_516*, ::Class_2_208CC9941471731A_516*))((::PBYTE)hIl2Cpp + CLASS_1_DD8F94F585F1DD50___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
