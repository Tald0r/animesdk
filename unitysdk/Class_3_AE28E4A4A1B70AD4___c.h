#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F35B080B137ECC46;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_AE28E4A4A1B70AD4___C_METHOD_1_4BDCD8817E21E5A1_OFFSET UNITYSDK_OFFSET(0xA4046E0)
#define CLASS_3_AE28E4A4A1B70AD4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA404690)
#define CLASS_3_AE28E4A4A1B70AD4___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA4046D0)

inline static constexpr unsigned int Class_3_AE28E4A4A1B70AD4___c_TypeDefinitionIndex = 78540;

class Class_3_AE28E4A4A1B70AD4___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_F35B080B137ECC46*>** StaticGet___9__13_0()
	{
		return (::System::Action_1<::Class_3_F35B080B137ECC46*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AE28E4A4A1B70AD4___c_TypeDefinitionIndex)->GetStaticField(0x33570);
	}
	static ::Class_3_AE28E4A4A1B70AD4___c** StaticGet___9()
	{
		return (::Class_3_AE28E4A4A1B70AD4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AE28E4A4A1B70AD4___c_TypeDefinitionIndex)->GetStaticField(0x33578);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AE28E4A4A1B70AD4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE28E4A4A1B70AD4___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4BDCD8817E21E5A1(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_AE28E4A4A1B70AD4___C_METHOD_1_4BDCD8817E21E5A1_OFFSET))(this, a1);
	}
};
