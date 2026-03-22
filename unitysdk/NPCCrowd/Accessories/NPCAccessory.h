#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Accessories/FNPCAccessoryAttachSlotInfo.h"
#include "unitysdk/NPCCrowd/FNPCAttachPointNameHandle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace NPCCrowd::Accessories { class NPCAccessoryAnimationRuntimeData; }
namespace NPCCrowd::Accessories { class NPCAccessoryAvatarAssetsSO; }
namespace NPCCrowd::Accessories { class NPCAccessoryLodMeshAssets; }
namespace NPCCrowd::Accessories { class NPCAccessoryReferenceComponentInfo; }
namespace NPCCrowd::Animation { class NPCAccessoryCPUAnimator; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORY_BUILDLAYERFLAGS_OFFSET UNITYSDK_OFFSET(0x7DFB0A0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORY_GETVALIDLAYERIDX_OFFSET UNITYSDK_OFFSET(0x7DFB3C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORY_SETATTACHEDLOCALPRS_OFFSET UNITYSDK_OFFSET(0x7DF9C20)
#define NPCCROWD_ACCESSORIES_NPCACCESSORY__CTOR_OFFSET UNITYSDK_OFFSET(0x7DFB470)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessory_TypeDefinitionIndex = 39158;

	class NPCAccessory : public ::System::Object
	{
	public:
		::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO* accessoryConfig; // 0x10
		::NPCCrowd::Animation::NPCAccessoryCPUAnimator* accessoryAnimator; // 0x18
		::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets* meshConfig; // 0x20
		::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData; // 0x28
		::NPCCrowd::Accessories::FNPCAccessoryAttachSlotInfo attachSlotInfo; // 0x30
		::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* accessoryGoInfo; // 0x68
		::NPCCrowd::Accessories::NPCAccessoryAnimationRuntimeData* accessoryRuntimeData; // 0x70
		::NPCCrowd::Animation::NPCUnionAnimator* attachedNPCAnimator; // 0x78
		::System::UInt32 ownerEntityID; // 0x80
		::System::Nullable_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>> SampleCache; // 0x84
		::NPCCrowd::FNPCAttachPointNameHandle attachedPoint; // 0x90
		::System::Byte layerFlags; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORY__CTOR_OFFSET))(this);
		}

		::System::Void SetAttachedLocalPRS(::NPCCrowd::Ability::FTransformFragment prs, ::NPCCrowd::Ability::FTransformFragment wprs)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FTransformFragment, ::NPCCrowd::Ability::FTransformFragment))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORY_SETATTACHEDLOCALPRS_OFFSET))(this, prs, wprs);
		}

		::System::Void BuildLayerFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORY_BUILDLAYERFLAGS_OFFSET))(this);
		}

		::System::Int32 GetValidLayerIdx()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORY_GETVALIDLAYERIDX_OFFSET))(this);
		}
	};
}
