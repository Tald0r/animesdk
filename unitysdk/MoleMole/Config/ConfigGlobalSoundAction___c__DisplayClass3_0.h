#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x89F7230)
#define MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION___C__DISPLAYCLASS3_0__ONAFTERDESERIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x89F7240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGlobalSoundAction___c__DisplayClass3_0_TypeDefinitionIndex = 51128;

	class ConfigGlobalSoundAction___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* __9__0; // 0x10
		::System::Int32 count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAfterDeserialize_b__0(::MoleMole::Config::ConfigSoundActionGeneral* subAction)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundActionGeneral*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION___C__DISPLAYCLASS3_0__ONAFTERDESERIALIZE_B__0_OFFSET))(this, subAction);
		}
	};
}
