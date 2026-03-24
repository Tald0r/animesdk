#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"

class Class_2_D8A9A175DA29EA90;
namespace System { template <typename T> class Func_1; }

#define CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_2B5077F1F7E1182E_OFFSET UNITYSDK_OFFSET(0x9664CF0)
#define CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_8DA2C45C7019FA48_OFFSET UNITYSDK_OFFSET(0x9664EB0)
#define CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x96649B0)
#define CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_E06ECA39EB16C571_OFFSET UNITYSDK_OFFSET(0x9664A10)
#define CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x9664B30)
#define CLASS_1_8AE7A2C15AA5D5A0__CTOR_OFFSET UNITYSDK_OFFSET(0x96649A0)

inline static constexpr unsigned int Class_1_8AE7A2C15AA5D5A0_TypeDefinitionIndex = 59116;

class Class_1_8AE7A2C15AA5D5A0 : public ::System::Object
{
public:
	static ::Class_2_D8A9A175DA29EA90** StaticGet_Field_1_0()
	{
		return (::Class_2_D8A9A175DA29EA90**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8AE7A2C15AA5D5A0_TypeDefinitionIndex)->GetStaticField(0x3A820);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE7A2C15AA5D5A0__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_1_E06ECA39EB16C571()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_E06ECA39EB16C571_OFFSET))(this);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Int32 Method_1_8DA2C45C7019FA48()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_8DA2C45C7019FA48_OFFSET))(this);
	}

	::System::Void Method_1_2B5077F1F7E1182E(::Share::ENotificationBadgeType a1, ::System::Func_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_2B5077F1F7E1182E_OFFSET))(this, a1, a2);
	}
};
