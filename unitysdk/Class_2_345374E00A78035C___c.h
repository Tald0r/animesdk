#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_345374E00A78035C___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8DA9450)
#define CLASS_2_345374E00A78035C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DA9400)
#define CLASS_2_345374E00A78035C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8DA9440)

inline static constexpr unsigned int Class_2_345374E00A78035C___c_TypeDefinitionIndex = 51467;

class Class_2_345374E00A78035C___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__30_14()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_345374E00A78035C___c_TypeDefinitionIndex)->GetStaticField(0x331B0);
	}
	static ::Class_2_345374E00A78035C___c** StaticGet___9()
	{
		return (::Class_2_345374E00A78035C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_345374E00A78035C___c_TypeDefinitionIndex)->GetStaticField(0x331B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_345374E00A78035C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_345374E00A78035C___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_345374E00A78035C___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
