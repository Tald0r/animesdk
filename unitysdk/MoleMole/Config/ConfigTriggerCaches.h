#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigTriggerCaches_KVData.h"

namespace MoleMole::Config { class ConfigTriggerCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTRIGGERCACHES_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xB478100)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCACHES_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xB478430)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCACHES__CTOR_OFFSET UNITYSDK_OFFSET(0xB478620)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCACHES___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xB478700)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCACHES___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xB478710)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriggerCaches_TypeDefinitionIndex = 49101;

	class ConfigTriggerCaches : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigTriggerCache*>*>* ConfigTriggerCachesGroup; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTriggerCaches_KVData>* KeyValueInfoList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCACHES__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCACHES_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCACHES_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCACHES___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCACHES___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
