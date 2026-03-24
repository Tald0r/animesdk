#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class EffectPatternInfoConfig_PatternInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9D14450)
#define MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9D14650)
#define MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9D14860)
#define MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9D149D0)
#define MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9D149E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectPatternInfoConfig_TypeDefinitionIndex = 51188;

	class EffectPatternInfoConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*>* patternMap; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* patternMap_Keys; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*>* patternMap_Values; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
