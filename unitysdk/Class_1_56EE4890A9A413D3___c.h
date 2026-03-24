#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_503;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_56EE4890A9A413D3___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x17999D90)
#define CLASS_1_56EE4890A9A413D3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17999D40)
#define CLASS_1_56EE4890A9A413D3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17999D80)

inline static constexpr unsigned int Class_1_56EE4890A9A413D3___c_TypeDefinitionIndex = 12673;

class Class_1_56EE4890A9A413D3___c : public ::System::Object
{
public:
	static ::Class_1_56EE4890A9A413D3___c** StaticGet___9()
	{
		return (::Class_1_56EE4890A9A413D3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56EE4890A9A413D3___c_TypeDefinitionIndex)->GetStaticField(0x8C60);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_503*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_503*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56EE4890A9A413D3___c_TypeDefinitionIndex)->GetStaticField(0x8C68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_503* a1, ::Class_2_208CC9941471731A_503* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_503*, ::Class_2_208CC9941471731A_503*))((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
