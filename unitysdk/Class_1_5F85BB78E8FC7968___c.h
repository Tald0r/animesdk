#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_5F85BB78E8FC7968___C_METHOD_1_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0xBD092C0)
#define CLASS_1_5F85BB78E8FC7968___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD09270)
#define CLASS_1_5F85BB78E8FC7968___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBD092B0)

inline static constexpr unsigned int Class_1_5F85BB78E8FC7968___c_TypeDefinitionIndex = 66070;

class Class_1_5F85BB78E8FC7968___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F85BB78E8FC7968___c_TypeDefinitionIndex)->GetStaticField(0x37F50);
	}
	static ::Class_1_5F85BB78E8FC7968___c** StaticGet___9()
	{
		return (::Class_1_5F85BB78E8FC7968___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F85BB78E8FC7968___c_TypeDefinitionIndex)->GetStaticField(0x37F58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F85BB78E8FC7968___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F85BB78E8FC7968___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F85BB78E8FC7968___C_METHOD_1_82ECC72D992D12DD_OFFSET))(this, a1, a2);
	}
};
