#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Accessories { class NPCAccessoryAnimatorManager_AvatarLookupItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Avatar; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_CLEARNATIVECOLLECTIONS_OFFSET UNITYSDK_OFFSET(0x639B460)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_CONSUMESAMPLEDPOSE_OFFSET UNITYSDK_OFFSET(0x639B690)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_CREATEACCESSORYANIMATOR_OFFSET UNITYSDK_OFFSET(0x639D390)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_DISPATCHSAMPLEPOSEJOB_OFFSET UNITYSDK_OFFSET(0x639BA80)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x639AD80)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x639AEF0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_INSERTACCESSORY_OFFSET UNITYSDK_OFFSET(0x639CC30)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x639C910)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x639B040)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_REMOVEACCESSORYANIMATOR_OFFSET UNITYSDK_OFFSET(0x639DA50)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_REMOVEACCESSORY_OFFSET UNITYSDK_OFFSET(0x639D0E0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x639C480)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_WAIT_OFFSET UNITYSDK_OFFSET(0x639BA50)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x639DAF0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x639DB00)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x639DB60)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x639DBD0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x639DC30)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimatorManager_TypeDefinitionIndex = 40915;

	class NPCAccessoryAnimatorManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* _accessories; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Avatar*, ::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_AvatarLookupItem*>* _avatarLookupTable; // 0x20
		::Unity::Jobs::JobHandle _handle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Accessories::NPCAccessoryAnimatorManager* Get()
		{
			return ((::NPCCrowd::Accessories::NPCAccessoryAnimatorManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearNativeCollections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_CLEARNATIVECOLLECTIONS_OFFSET))(this);
		}

		::System::Void ConsumeSampledPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_CONSUMESAMPLEDPOSE_OFFSET))(this);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_WAIT_OFFSET))(this);
		}

		::System::Void DispatchSamplePoseJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_DISPATCHSAMPLEPOSEJOB_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void InsertAccessory(::NPCCrowd::Accessories::NPCAccessory* accessory, ::System::Boolean drivenInternal)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_INSERTACCESSORY_OFFSET))(this, accessory, drivenInternal);
		}

		::System::Void RemoveAccessory(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_REMOVEACCESSORY_OFFSET))(this, accessory);
		}

		::System::Void CreateAccessoryAnimator(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_CREATEACCESSORYANIMATOR_OFFSET))(this, acc);
		}

		::System::Void RemoveAccessoryAnimator(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_REMOVEACCESSORYANIMATOR_OFFSET))(this, acc);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
