#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class InteractTraitData; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C_METHOD_1_33D1414004E21DAF_OFFSET UNITYSDK_OFFSET(0x89FF5B0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x89FF560)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x89FF5A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInteractTrait___c_TypeDefinitionIndex = 66934;

	class ConfigInteractTrait___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MoleMole::InteractTraitData*>** StaticGet___9__24_0()
		{
			return (::System::Action_1<::MoleMole::InteractTraitData*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInteractTrait___c_TypeDefinitionIndex)->GetStaticField(0x3A2A0);
		}
		static ::MoleMole::Config::ConfigInteractTrait___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigInteractTrait___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigInteractTrait___c_TypeDefinitionIndex)->GetStaticField(0x3A2A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_33D1414004E21DAF(::MoleMole::InteractTraitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InteractTraitData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C_METHOD_1_33D1414004E21DAF_OFFSET))(this, a1);
		}
	};
}
