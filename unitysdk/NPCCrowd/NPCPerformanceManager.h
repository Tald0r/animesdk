#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/cfg/SceneSizeType.h"

namespace NPCCrowd { class NPCDevicePerformanceConfigSO; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCPERFORMANCEMANAGER_GETNPCCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x785D3D0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GETPOPULATIONRATIO_OFFSET UNITYSDK_OFFSET(0x785D5E0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x785CF80)
#define NPCCROWD_NPCPERFORMANCEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x785D2C0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x785D180)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x785D120)
#define NPCCROWD_NPCPERFORMANCEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x785D810)
#define NPCCROWD_NPCPERFORMANCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x785D800)
#define NPCCROWD_NPCPERFORMANCEMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x785D850)
#define NPCCROWD_NPCPERFORMANCEMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x785D8B0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPerformanceManager_TypeDefinitionIndex = 45524;

	class NPCPerformanceManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet__configAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x46240);
		}
		static ::NPCCrowd::NPCDevicePerformanceConfigSO** StaticGet__configSO()
		{
			return (::NPCCrowd::NPCDevicePerformanceConfigSO**)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x46260);
		}
		static ::System::String** StaticGet_SpawnConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x46268);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::NPCPerformanceManager* Get()
		{
			return ((::NPCCrowd::NPCPerformanceManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_OFFSET))();
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SHOULDTICK_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean GetNPCCountLimit(::cfg::SceneSizeType sectionType, ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel omitLevel, ::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::cfg::SceneSizeType, ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GETNPCCOUNTLIMIT_OFFSET))(this, sectionType, omitLevel, count);
		}

		::System::Boolean GetPopulationRatio(::cfg::SceneSizeType sectionType, ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel omitLevel, ::System::Single& ratio)
		{
			return ((::System::Boolean(*)(::PVOID, ::cfg::SceneSizeType, ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GETPOPULATIONRATIO_OFFSET))(this, sectionType, omitLevel, ratio);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
