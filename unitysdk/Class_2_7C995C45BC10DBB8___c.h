#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_7C995C45BC10DBB8___C_METHOD_1_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0xB1D3E40)
#define CLASS_2_7C995C45BC10DBB8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1D3DF0)
#define CLASS_2_7C995C45BC10DBB8___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB1D3E30)

inline static constexpr unsigned int Class_2_7C995C45BC10DBB8___c_TypeDefinitionIndex = 60548;

class Class_2_7C995C45BC10DBB8___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7C995C45BC10DBB8___c_TypeDefinitionIndex)->GetStaticField(0x39680);
	}
	static ::Class_2_7C995C45BC10DBB8___c** StaticGet___9()
	{
		return (::Class_2_7C995C45BC10DBB8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7C995C45BC10DBB8___c_TypeDefinitionIndex)->GetStaticField(0x39688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7C995C45BC10DBB8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C995C45BC10DBB8___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7C995C45BC10DBB8___C_METHOD_1_82ECC72D992D12DD_OFFSET))(this, a1, a2);
	}
};
