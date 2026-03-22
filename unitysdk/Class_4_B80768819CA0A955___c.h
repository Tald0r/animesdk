#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F35B080B137ECC46;
class Class_4_E2880458FFC7DD8C;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_4_B80768819CA0A955___C_METHOD_1_CA708ECB3845E9C8_OFFSET UNITYSDK_OFFSET(0x6D85030)
#define CLASS_4_B80768819CA0A955___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6D84FE0)
#define CLASS_4_B80768819CA0A955___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6D85020)

inline static constexpr unsigned int Class_4_B80768819CA0A955___c_TypeDefinitionIndex = 58493;

class Class_4_B80768819CA0A955___c : public ::System::Object
{
public:
	static ::Class_4_B80768819CA0A955___c** StaticGet___9()
	{
		return (::Class_4_B80768819CA0A955___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_B80768819CA0A955___c_TypeDefinitionIndex)->GetStaticField(0x319B0);
	}
	static ::System::Action_2<::Class_4_E2880458FFC7DD8C*, ::Class_3_F35B080B137ECC46*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::Class_4_E2880458FFC7DD8C*, ::Class_3_F35B080B137ECC46*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_B80768819CA0A955___c_TypeDefinitionIndex)->GetStaticField(0x319B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA708ECB3845E9C8(::Class_4_E2880458FFC7DD8C* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_E2880458FFC7DD8C*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955___C_METHOD_1_CA708ECB3845E9C8_OFFSET))(this, a1, a2);
	}
};
