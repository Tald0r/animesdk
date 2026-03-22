#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7140F4786C00178;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_168CE6BD23375D6E___C_METHOD_1_5E52FE9C6B9F1722_OFFSET UNITYSDK_OFFSET(0x87ADD40)
#define CLASS_2_168CE6BD23375D6E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x87ADCF0)
#define CLASS_2_168CE6BD23375D6E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x87ADD30)

inline static constexpr unsigned int Class_2_168CE6BD23375D6E___c_TypeDefinitionIndex = 77727;

class Class_2_168CE6BD23375D6E___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_E7140F4786C00178*>** StaticGet___9__25_0()
	{
		return (::System::Action_1<::Class_1_E7140F4786C00178*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_168CE6BD23375D6E___c_TypeDefinitionIndex)->GetStaticField(0x3CC90);
	}
	static ::Class_2_168CE6BD23375D6E___c** StaticGet___9()
	{
		return (::Class_2_168CE6BD23375D6E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_168CE6BD23375D6E___c_TypeDefinitionIndex)->GetStaticField(0x3CC98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_168CE6BD23375D6E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_168CE6BD23375D6E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5E52FE9C6B9F1722(::Class_1_E7140F4786C00178* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7140F4786C00178*))((::PBYTE)hIl2Cpp + CLASS_2_168CE6BD23375D6E___C_METHOD_1_5E52FE9C6B9F1722_OFFSET))(this, a1);
	}
};
