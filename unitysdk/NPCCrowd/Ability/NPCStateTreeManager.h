#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/NativeTypes/NativeList_1.h"
#include "unitysdk/StateTreeCore/StateTree.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x695B580)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x695B720)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_LOADORGETSTATETREE_OFFSET UNITYSDK_OFFSET(0x695B9F0)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x695B920)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x695B880)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x695BE30)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x695BDB0)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x695BE70)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x695BED0)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x695BF30)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCStateTreeManager_TypeDefinitionIndex = 71035;

	class NPCStateTreeManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Int32* StaticGet_MaxStateTreeNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCStateTreeManager_TypeDefinitionIndex)->GetStaticField(0xE2C0);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _mapStateTreeAssetPathToIndex; // 0x18
		::NativeTypes::NativeList_1<::StateTreeCore::StateTree> StateTrees; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Ability::NPCStateTreeManager* Get()
		{
			return ((::NPCCrowd::Ability::NPCStateTreeManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_SHOULDTICK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Int32 LoadOrGetStateTree(::System::String* path)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_LOADORGETSTATETREE_OFFSET))(this, path);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
