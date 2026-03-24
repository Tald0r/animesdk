#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_B3BE3A775F46A81F_1___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB81BCD0)
#define CLASS_2_B3BE3A775F46A81F_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB81BC80)
#define CLASS_2_B3BE3A775F46A81F_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB81BCC0)

inline static constexpr unsigned int Class_2_B3BE3A775F46A81F_1___c_TypeDefinitionIndex = 45576;

class Class_2_B3BE3A775F46A81F_1___c : public ::System::Object
{
public:
	static ::Class_2_B3BE3A775F46A81F_1___c** StaticGet___9()
	{
		return (::Class_2_B3BE3A775F46A81F_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3BE3A775F46A81F_1___c_TypeDefinitionIndex)->GetStaticField(0x3A770);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__20_13()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3BE3A775F46A81F_1___c_TypeDefinitionIndex)->GetStaticField(0x3A778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B3BE3A775F46A81F_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BE3A775F46A81F_1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BE3A775F46A81F_1___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
