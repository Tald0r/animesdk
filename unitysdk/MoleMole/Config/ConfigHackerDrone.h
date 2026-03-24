#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class HackerDroneConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94FF910)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94FF710)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE__CTOR_OFFSET UNITYSDK_OFFSET(0x94FFBC0)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94FFCD0)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94FFCE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHackerDrone_TypeDefinitionIndex = 37801;

	class ConfigHackerDrone : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HackerDroneConfig*>* Mappings; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::HackerDroneConfig*>* SerializedData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
