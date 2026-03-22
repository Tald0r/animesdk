#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class CrowdConditionBase; }
namespace NPCCrowd::AI { class NPCIDItemRuntime; }
namespace NPCCrowd::AI { class NPCPoolConfigSO; }
namespace NPCCrowd::AI { class NPCPopulationConfigSO; }
namespace NPCCrowd::AI { class PopulationConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_POPULATIONRUNTIME_ADDAVATARID_OFFSET UNITYSDK_OFFSET(0xA103260)
#define NPCCROWD_AI_POPULATIONRUNTIME_ADDTAG_OFFSET UNITYSDK_OFFSET(0xA102FB0)
#define NPCCROWD_AI_POPULATIONRUNTIME_CHECKPOOLCONDITION_OFFSET UNITYSDK_OFFSET(0xA100FC0)
#define NPCCROWD_AI_POPULATIONRUNTIME_CLEARPOPULATIONRUNTIMES_OFFSET UNITYSDK_OFFSET(0xA100E90)
#define NPCCROWD_AI_POPULATIONRUNTIME_GETAVATARIDBYTAGID_OFFSET UNITYSDK_OFFSET(0xA1033B0)
#define NPCCROWD_AI_POPULATIONRUNTIME_GET_POPULATIONID_OFFSET UNITYSDK_OFFSET(0xA1034F0)
#define NPCCROWD_AI_POPULATIONRUNTIME_GLOBALADDAVATARID_OFFSET UNITYSDK_OFFSET(0xA103090)
#define NPCCROWD_AI_POPULATIONRUNTIME_GLOBALADDTAG_OFFSET UNITYSDK_OFFSET(0xA102E00)
#define NPCCROWD_AI_POPULATIONRUNTIME_GLOBALREMOVEAVATARID_OFFSET UNITYSDK_OFFSET(0xA102B60)
#define NPCCROWD_AI_POPULATIONRUNTIME_GLOBALREMOVETAG_OFFSET UNITYSDK_OFFSET(0xA102890)
#define NPCCROWD_AI_POPULATIONRUNTIME_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA101580)
#define NPCCROWD_AI_POPULATIONRUNTIME_INNERREMOVEAVATARID_OFFSET UNITYSDK_OFFSET(0xA103560)
#define NPCCROWD_AI_POPULATIONRUNTIME_ISVALID_OFFSET UNITYSDK_OFFSET(0xA103740)
#define NPCCROWD_AI_POPULATIONRUNTIME_LOADRESOURCE_OFFSET UNITYSDK_OFFSET(0xA1008C0)
#define NPCCROWD_AI_POPULATIONRUNTIME_ONNPCDESPAWN_OFFSET UNITYSDK_OFFSET(0xA103B30)
#define NPCCROWD_AI_POPULATIONRUNTIME_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xA100B60)
#define NPCCROWD_AI_POPULATIONRUNTIME_RANDOMGETID_OFFSET UNITYSDK_OFFSET(0xA1037C0)
#define NPCCROWD_AI_POPULATIONRUNTIME_REFRESHALLPOPULATIONDATA_OFFSET UNITYSDK_OFFSET(0xA102620)
#define NPCCROWD_AI_POPULATIONRUNTIME_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xA102820)
#define NPCCROWD_AI_POPULATIONRUNTIME_REGISTERPOPULATIONRUNTIME_OFFSET UNITYSDK_OFFSET(0xA100D30)
#define NPCCROWD_AI_POPULATIONRUNTIME_REMOVEAVATARID_OFFSET UNITYSDK_OFFSET(0xA102D90)
#define NPCCROWD_AI_POPULATIONRUNTIME_REMOVETAG_OFFSET UNITYSDK_OFFSET(0xA102A40)
#define NPCCROWD_AI_POPULATIONRUNTIME_TRYGETPOPULATIONRUNTIME_OFFSET UNITYSDK_OFFSET(0xA101170)
#define NPCCROWD_AI_POPULATIONRUNTIME_UNLOADRESOURCE_OFFSET UNITYSDK_OFFSET(0xA100A20)
#define NPCCROWD_AI_POPULATIONRUNTIME__CCTOR_OFFSET UNITYSDK_OFFSET(0xA103CE0)
#define NPCCROWD_AI_POPULATIONRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xA1012C0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationRuntime_TypeDefinitionIndex = 46816;

	class PopulationRuntime : public ::System::Object
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet__populationHandle()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0x367B0);
		}
		static ::NPCCrowd::AI::NPCPopulationConfigSO** StaticGet__populationSo()
		{
			return (::NPCCrowd::AI::NPCPopulationConfigSO**)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0x367D0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_GlobalUsedAvatarParamIDs()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0x367D8);
		}
		static ::NPCCrowd::AI::NPCPoolConfigSO** StaticGet__poolSo()
		{
			return (::NPCCrowd::AI::NPCPoolConfigSO**)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0x367E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PopulationRuntime*>** StaticGet_GlobalPopulationRuntimes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PopulationRuntime*>**)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0x367E8);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__poolHandle()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0x367F0);
		}
		static ::System::Single* StaticGet_GlobalPopulationRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0xD990);
		}
		::NPCCrowd::AI::NPCPoolConfigSO* NpcPoolConfigSo; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* spawndIDsCache; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::AI::NPCIDItemRuntime*>* validIDList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::NPCIDItemRuntime*>* allNPCIDs; // 0x28
		::System::Collections::Generic::HashSet_1<::System::Int32>* curSpawnedIDs; // 0x30
		::NPCCrowd::AI::PopulationConfig* Config; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::NPCIDItemRuntime*>* disabledNPCIDs; // 0x40
		::System::Int32 maxCount; // 0x48
		::System::Int32 configMaxCount; // 0x4C
		::System::Single curValidWeight; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME__CCTOR_OFFSET))();
		}

		static ::System::Void LoadResource()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_LOADRESOURCE_OFFSET))();
		}

		static ::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_ONPRELOADFINISHED_OFFSET))();
		}

		static ::System::Void UnLoadResource()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_UNLOADRESOURCE_OFFSET))();
		}

		static ::System::Boolean CheckPoolCondition(::System::Collections::Generic::List_1<::NPCCrowd::AI::CrowdConditionBase*>* poolConditions)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::NPCCrowd::AI::CrowdConditionBase*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_CHECKPOOLCONDITION_OFFSET))(poolConditions);
		}

		static ::NPCCrowd::AI::PopulationRuntime* TryGetPopulationRuntime(::System::Int32 populationID)
		{
			return ((::NPCCrowd::AI::PopulationRuntime*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_TRYGETPOPULATIONRUNTIME_OFFSET))(populationID);
		}

		static ::System::Void RegisterPopulationRuntime(::NPCCrowd::AI::PopulationConfig* config, ::NPCCrowd::AI::NPCPoolConfigSO* npcPoolConfigSo)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::PopulationConfig*, ::NPCCrowd::AI::NPCPoolConfigSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_REGISTERPOPULATIONRUNTIME_OFFSET))(config, npcPoolConfigSo);
		}

		static ::System::Void RefreshAllPopulationData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_REFRESHALLPOPULATIONDATA_OFFSET))();
		}

		static ::System::Void ClearPopulationRuntimes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_CLEARPOPULATIONRUNTIMES_OFFSET))();
		}

		static ::System::Void GlobalRemoveTag(::System::Int32 tag)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GLOBALREMOVETAG_OFFSET))(tag);
		}

		static ::System::Void GlobalRemoveAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GLOBALREMOVEAVATARID_OFFSET))(avatarID);
		}

		static ::System::Void GlobalAddTag(::System::Int32 tag)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GLOBALADDTAG_OFFSET))(tag);
		}

		static ::System::Void GlobalAddAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GLOBALADDAVATARID_OFFSET))(avatarID);
		}

		static ::System::Boolean GetAvatarIDByTagID(::System::Int32 tag, ::System::Int32& avatarID)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GETAVATARIDBYTAGID_OFFSET))(tag, avatarID);
		}

		::System::Int32 get_populationID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GET_POPULATIONID_OFFSET))(this);
		}

		::System::Void RemoveTag(::System::Int32 tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_REMOVETAG_OFFSET))(this, tag);
		}

		::System::Void RemoveAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_REMOVEAVATARID_OFFSET))(this, avatarID);
		}

		::System::Void InnerRemoveAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_INNERREMOVEAVATARID_OFFSET))(this, avatarID);
		}

		::System::Void AddTag(::System::Int32 tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_ADDTAG_OFFSET))(this, tag);
		}

		::System::Void AddAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_ADDAVATARID_OFFSET))(this, avatarID);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_REFRESHDATA_OFFSET))(this);
		}

		::System::Void Initialize(::NPCCrowd::AI::PopulationConfig* config, ::NPCCrowd::AI::NPCPoolConfigSO* npcPoolConfigSo)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PopulationConfig*, ::NPCCrowd::AI::NPCPoolConfigSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_INITIALIZE_OFFSET))(this, config, npcPoolConfigSo);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_ISVALID_OFFSET))(this);
		}

		::System::Int32 RandomGetID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_RANDOMGETID_OFFSET))(this);
		}

		::System::Void OnNPCDespawn(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_ONNPCDESPAWN_OFFSET))(this, avatarID);
		}
	};
}
