#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GETGRIDSIZE_OFFSET UNITYSDK_OFFSET(0xC1DCDF0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GETGUIDEPOINTSTRATEGY_OFFSET UNITYSDK_OFFSET(0xC1DCC00)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC__CCTOR_OFFSET UNITYSDK_OFFSET(0xC1DCFB0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC__CTOR_OFFSET UNITYSDK_OFFSET(0xC1DCF80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectMisc_TypeDefinitionIndex = 71936;

	class ConfigViewObjectMisc : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::MoleMole::Config::GuidePoint_AutoGenStrategy* StaticGet_DefaultGuidePointAutoGenStrategy()
		{
			return (::MoleMole::Config::GuidePoint_AutoGenStrategy*)Il2CppClass::FromTypeDefinitionIndex(ConfigViewObjectMisc_TypeDefinitionIndex)->GetStaticField(0x43E50);
		}
		static ::System::Single* StaticGet_Debug_GridSize()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ConfigViewObjectMisc_TypeDefinitionIndex)->GetStaticField(0x112B0);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::GuidePoint_AutoGenStrategy>* GuidePoint_AutoGenStategies; // 0x58
		::System::Int32 obstacleCost; // 0x60
		::System::Boolean isDelayCreateEntityEnabled; // 0x64
		::System::Boolean isEntityGridDisabled; // 0x65
		::System::Single gridSize; // 0x68
		::System::Single createInterval; // 0x6C
		::System::Boolean OpenGroupOrderReadyEvent; // 0x70
		::System::Boolean OpenGroupOrderReadyEventAfterLoading; // 0x71
		::System::Single inactivateObservationTime; // 0x74
		::System::Single activateObservationTime; // 0x78
		::System::Single visibleCosHalfAngleThreshold; // 0x7C
		::System::Single bypassVisibleSqrDistanceThreshold; // 0x80
		::System::Collections::Generic::List_1<::System::String*>* MonsterNotCountingTag; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* voEventString; // 0x90
		::Foundation::AssetPath MPNavigationPointPrefabPath; // 0x98

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

		::System::Single GetGridSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GETGRIDSIZE_OFFSET))(this);
		}
	};
}
