#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_DE693B43464569F3___C_METHOD_1_82ECC72D992D12DD_1_OFFSET UNITYSDK_OFFSET(0x17156A80)
#define CLASS_1_DE693B43464569F3___C_METHOD_1_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0x17156A70)
#define CLASS_1_DE693B43464569F3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17156A20)
#define CLASS_1_DE693B43464569F3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17156A60)

inline static constexpr unsigned int Class_1_DE693B43464569F3___c_TypeDefinitionIndex = 10828;

class Class_1_DE693B43464569F3___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE693B43464569F3___c_TypeDefinitionIndex)->GetStaticField(0x8E50);
	}
	static ::Class_1_DE693B43464569F3___c** StaticGet___9()
	{
		return (::Class_1_DE693B43464569F3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE693B43464569F3___c_TypeDefinitionIndex)->GetStaticField(0x8E58);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__19_1()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE693B43464569F3___c_TypeDefinitionIndex)->GetStaticField(0x8E60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE693B43464569F3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE693B43464569F3___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DE693B43464569F3___C_METHOD_1_82ECC72D992D12DD_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_82ECC72D992D12DD_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DE693B43464569F3___C_METHOD_1_82ECC72D992D12DD_1_OFFSET))(this, a1, a2);
	}
};
