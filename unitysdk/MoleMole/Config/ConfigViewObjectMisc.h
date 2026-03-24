#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_EntityCreate.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GETGUIDEPOINTSTRATEGY_OFFSET UNITYSDK_OFFSET(0x81F2FA0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_CREATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x81F3600)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_GRIDSIZE_OFFSET UNITYSDK_OFFSET(0x81F3550)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_ISDELAYCREATEENTITYENABLED_OFFSET UNITYSDK_OFFSET(0x81F3430)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_ISENTITYGRIDDISABLED_OFFSET UNITYSDK_OFFSET(0x81F34C0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_HASVALIDPLATFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x81F3190)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC__CCTOR_OFFSET UNITYSDK_OFFSET(0x81F36C0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC__CTOR_OFFSET UNITYSDK_OFFSET(0x81F3690)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectMisc_TypeDefinitionIndex = 46828;

	class ConfigViewObjectMisc : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::MoleMole::Config::GuidePoint_AutoGenStrategy* StaticGet_DefaultGuidePointAutoGenStrategy()
		{
			return (::MoleMole::Config::GuidePoint_AutoGenStrategy*)Il2CppClass::FromTypeDefinitionIndex(ConfigViewObjectMisc_TypeDefinitionIndex)->GetStaticField(0x44F80);
		}
		static ::MoleMole::Config::ConfigViewObjectMisc_EntityCreate* StaticGet_debugCreate()
		{
			return (::MoleMole::Config::ConfigViewObjectMisc_EntityCreate*)Il2CppClass::FromTypeDefinitionIndex(ConfigViewObjectMisc_TypeDefinitionIndex)->GetStaticField(0x10F70);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::GuidePoint_AutoGenStrategy>* GuidePoint_AutoGenStategies; // 0x58
		::System::Int32 obstacleCost; // 0x60
		::MoleMole::Config::ConfigViewObjectMisc_EntityCreate defaultEntityCreate; // 0x64
		::System::Single inactivateObservationTime; // 0x70
		::System::Single activateObservationTime; // 0x74
		::System::Single visibleCosHalfAngleThreshold; // 0x78
		::System::Single bypassVisibleSqrDistanceThreshold; // 0x7C
		::System::Collections::Generic::List_1<::System::String*>* MonsterNotCountingTag; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* voEventString; // 0x88
		::Foundation::AssetPath MPNavigationPointPrefabPath; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC__CCTOR_OFFSET))();
		}

		::MoleMole::Config::GuidePoint_AutoGenStrategy GetGuidePointStrategy(::System::String* strategyID)
		{
			return ((::MoleMole::Config::GuidePoint_AutoGenStrategy(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GETGUIDEPOINTSTRATEGY_OFFSET))(this, strategyID);
		}

		::System::Boolean HasValidPlatformConfig(::MoleMole::Config::ConfigViewObjectMisc_EntityCreate& createInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectMisc_EntityCreate&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_HASVALIDPLATFORMCONFIG_OFFSET))(this, createInfo);
		}

		::System::Boolean Get_IsDelayCreateEntityEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_ISDELAYCREATEENTITYENABLED_OFFSET))(this);
		}

		::System::Boolean Get_IsEntityGridDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_ISENTITYGRIDDISABLED_OFFSET))(this);
		}

		::System::Single Get_GridSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_GRIDSIZE_OFFSET))(this);
		}

		::System::Single Get_CreateInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_CREATEINTERVAL_OFFSET))(this);
		}
	};
}
