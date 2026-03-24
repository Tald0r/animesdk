#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_587;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_497D01873B70D0C2___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x16F6EE30)
#define CLASS_1_497D01873B70D0C2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F6EDE0)
#define CLASS_1_497D01873B70D0C2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6EE20)

inline static constexpr unsigned int Class_1_497D01873B70D0C2___c_TypeDefinitionIndex = 12597;

class Class_1_497D01873B70D0C2___c : public ::System::Object
{
public:
	static ::Class_1_497D01873B70D0C2___c** StaticGet___9()
	{
		return (::Class_1_497D01873B70D0C2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_497D01873B70D0C2___c_TypeDefinitionIndex)->GetStaticField(0x8E00);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_587*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_587*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_497D01873B70D0C2___c_TypeDefinitionIndex)->GetStaticField(0x8E08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_497D01873B70D0C2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_497D01873B70D0C2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_587* a1, ::Class_2_208CC9941471731A_587* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_587*, ::Class_2_208CC9941471731A_587*))((::PBYTE)hIl2Cpp + CLASS_1_497D01873B70D0C2___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
