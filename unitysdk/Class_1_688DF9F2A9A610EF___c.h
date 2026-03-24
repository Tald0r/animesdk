#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_484;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_688DF9F2A9A610EF___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x13838930)
#define CLASS_1_688DF9F2A9A610EF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x138388E0)
#define CLASS_1_688DF9F2A9A610EF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13838920)

inline static constexpr unsigned int Class_1_688DF9F2A9A610EF___c_TypeDefinitionIndex = 15758;

class Class_1_688DF9F2A9A610EF___c : public ::System::Object
{
public:
	static ::Class_1_688DF9F2A9A610EF___c** StaticGet___9()
	{
		return (::Class_1_688DF9F2A9A610EF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_688DF9F2A9A610EF___c_TypeDefinitionIndex)->GetStaticField(0x8E30);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_484*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_484*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_688DF9F2A9A610EF___c_TypeDefinitionIndex)->GetStaticField(0x8E38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_688DF9F2A9A610EF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DF9F2A9A610EF___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_484* a1, ::Class_2_208CC9941471731A_484* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_484*, ::Class_2_208CC9941471731A_484*))((::PBYTE)hIl2Cpp + CLASS_1_688DF9F2A9A610EF___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
