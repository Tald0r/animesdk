#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_EB409772687773A2.h"
#include "unitysdk/System/Object.h"

class Class_3_D92ADC48CDFCC09B_2;

#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C_METHOD_1_86843C648953ACC3_OFFSET UNITYSDK_OFFSET(0xE2CBA20)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE2CB9D0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE2CBA10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterDefaultTrait___c_TypeDefinitionIndex = 44592;

	class ConfigMonsterDefaultTrait___c : public ::System::Object
	{
	public:
		static ::Class_3_D92ADC48CDFCC09B_2** StaticGet___9__20_0()
		{
			return (::Class_3_D92ADC48CDFCC09B_2**)Il2CppClass::FromTypeDefinitionIndex(ConfigMonsterDefaultTrait___c_TypeDefinitionIndex)->GetStaticField(0x33D60);
		}
		static ::MoleMole::Config::ConfigMonsterDefaultTrait___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigMonsterDefaultTrait___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigMonsterDefaultTrait___c_TypeDefinitionIndex)->GetStaticField(0x33D68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__CTOR_OFFSET))(this);
		}

		::Struct_2_45B62668F0BA5CF8 Method_1_86843C648953ACC3(::Struct_2_EB409772687773A2& a1)
		{
			return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C_METHOD_1_86843C648953ACC3_OFFSET))(this, a1);
		}
	};
}
