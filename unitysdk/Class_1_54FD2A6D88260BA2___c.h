#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_233;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_54FD2A6D88260BA2___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x114DDDE0)
#define CLASS_1_54FD2A6D88260BA2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x114DDD90)
#define CLASS_1_54FD2A6D88260BA2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x114DDDD0)

inline static constexpr unsigned int Class_1_54FD2A6D88260BA2___c_TypeDefinitionIndex = 10718;

class Class_1_54FD2A6D88260BA2___c : public ::System::Object
{
public:
	static ::Class_1_54FD2A6D88260BA2___c** StaticGet___9()
	{
		return (::Class_1_54FD2A6D88260BA2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54FD2A6D88260BA2___c_TypeDefinitionIndex)->GetStaticField(0x8E10);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_233*>** StaticGet___9__18_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_233*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54FD2A6D88260BA2___c_TypeDefinitionIndex)->GetStaticField(0x8E18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54FD2A6D88260BA2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54FD2A6D88260BA2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_233* a1, ::Class_2_208CC9941471731A_233* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_233*, ::Class_2_208CC9941471731A_233*))((::PBYTE)hIl2Cpp + CLASS_1_54FD2A6D88260BA2___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
