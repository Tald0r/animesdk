#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/ParallelTimelineTimeScaleType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TLStartEndEntityAnimatorParamControl; }
namespace MoleMole { class TimelineTransformCalculatorBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TIMELINEDATAEXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F4D4E0)

namespace MoleMole
{
	inline static constexpr unsigned int TimelineDataExtra_TypeDefinitionIndex = 77914;

	class TimelineDataExtra : public ::System::Object
	{
	public:
		::System::Boolean EntityRenderVisible; // 0x10
		::System::Boolean IncludeAllEntities; // 0x11
		::System::Boolean IncludeAllLocalAvatar; // 0x12
		::System::Boolean IncludeAllServerEntities; // 0x13
		::System::Collections::Generic::List_1<::System::Int32>* ServerEntityTags; // 0x18
		::System::String* InvisibleTargetDataKey; // 0x20
		::System::Boolean NeedClearEffectOnStartEnd; // 0x28
		::System::String* EffectCasterTargetDataKey; // 0x30
		::System::Boolean NeedClearBulletEffectOnStart; // 0x38
		::System::Boolean DynamicObjectSwitchOpen; // 0x39
		::System::Boolean DynamicObjectActive; // 0x3A
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* TagList; // 0x40
		::MoleMole::GameplayTag TargetLayer; // 0x48
		::System::Boolean DisableHizCulling; // 0x58
		::System::Boolean ForceNPCLOD; // 0x59
		::System::Boolean ForceOpenDither; // 0x5A
		::System::Boolean muteCameraDither; // 0x5B
		::System::Boolean muteAllCameraDither; // 0x5C
		::System::Boolean muteLocalAvatarCameraDither; // 0x5D
		::System::Boolean muteAvatarCameraDither; // 0x5E
		::System::Boolean muteMonsterCameraDither; // 0x5F
		::System::Boolean muteBuddyCameraDither; // 0x60
		::System::Boolean muteCustomAbilityTarget; // 0x61
		::System::Collections::Generic::List_1<::System::String*>* CustomAbilityTargetKeyList; // 0x68
		::System::Boolean ForceSyncLoad; // 0x70
		::System::Boolean ForceDisableAllColliderInTimelinePrefab; // 0x71
		::System::Boolean muteBattleScreenEffect; // 0x72
		::System::Boolean disableLightDistanceCulling; // 0x73
		::System::Boolean ForceDisableRuntimeRebindEntityComp; // 0x74
		::System::Boolean ForceStopAllOngoingChat; // 0x75
		::System::String* ParentTransformEntityTag; // 0x78
		::System::String* ParentTransformSceneObjTag; // 0x80
		::MoleMole::TimelineTransformCalculatorBase* RootTransformCalculator; // 0x88
		::System::Boolean IsFollowParentTransform; // 0x90
		::System::Boolean CameraApplyOnTransitionYRatio; // 0x91
		::System::Single CameraOnTransitionYRatioValue; // 0x94
		::System::Single CameraOnTransitionPolarAngle; // 0x98
		::System::Boolean AutoCalRecoverPolarAngle; // 0x9C
		::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::MoleMole::TLStartEndEntityAnimatorParamControl*>* EntityAnimatorParamControlDict; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GameplayTag>* RuntimeTimelineBindingReplaceDict; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GameplayTag>* RuntimeTimelineSyncTransformDict; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GameplayTag>* RuntimeTimelineObjReplaceDict; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GameplayTag>* RuntimeTimelineObjTransformDict; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GameplayTag>* RootTransformEntityTagRebindDict; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GameplayTag>* RootTransformSceneObjTagRebindDict; // 0xD0
		::System::Boolean EnableSeamlessTimeline; // 0xD8
		::System::Boolean EnableSeamlessTimelineBlendIn; // 0xD9
		::Cinemachine::CinemachineBlendDefinition SeamlessTimelineCameraCustomBlendIn; // 0xE0
		::System::Boolean EnableSeamlessTimelineBlendOut; // 0xF0
		::Cinemachine::CinemachineBlendDefinition SeamlessTimelineCameraCustomBlendOut; // 0xF8
		::System::Boolean skipTimelineCutsceneFadeOut; // 0x108
		::MoleMole::ParallelTimelineTimeScaleType ParallelTimelineTickTimeScaleType; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINEDATAEXTRA__CTOR_OFFSET))(this);
		}
	};
}
