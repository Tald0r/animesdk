#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A16B249216FA488;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_DD2E0D8B9B474532___C_METHOD_1_3E8B70ACE16B51A8_OFFSET UNITYSDK_OFFSET(0x9999BD0)
#define CLASS_2_DD2E0D8B9B474532___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9999B80)
#define CLASS_2_DD2E0D8B9B474532___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9999BC0)

inline static constexpr unsigned int Class_2_DD2E0D8B9B474532___c_TypeDefinitionIndex = 65033;

class Class_2_DD2E0D8B9B474532___c : public ::System::Object
{
public:
	static ::Class_2_DD2E0D8B9B474532___c** StaticGet___9()
	{
		return (::Class_2_DD2E0D8B9B474532___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DD2E0D8B9B474532___c_TypeDefinitionIndex)->GetStaticField(0x3F720);
	}
	static ::System::Comparison_1<::Class_1_0A16B249216FA488*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::Class_1_0A16B249216FA488*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DD2E0D8B9B474532___c_TypeDefinitionIndex)->GetStaticField(0x3F728);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DD2E0D8B9B474532___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD2E0D8B9B474532___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_3E8B70ACE16B51A8(::Class_1_0A16B249216FA488* a1, ::Class_1_0A16B249216FA488* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_0A16B249216FA488*, ::Class_1_0A16B249216FA488*))((::PBYTE)hIl2Cpp + CLASS_2_DD2E0D8B9B474532___C_METHOD_1_3E8B70ACE16B51A8_OFFSET))(this, a1, a2);
	}
};
