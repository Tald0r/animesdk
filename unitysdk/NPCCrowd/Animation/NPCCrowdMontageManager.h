#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/NPCCrowd/Animation/ClipSequenceMontageData.h"
#include "unitysdk/NPCCrowd/Animation/MontageData.h"
#include "unitysdk/NPCCrowd/Animation/MontageLayerClipData.h"
#include "unitysdk/NPCCrowd/Animation/MontageRawData.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class NPCCPUAnimationGraphDataset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CHECKGENDERSIZE_OFFSET UNITYSDK_OFFSET(0x7230090)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x722E970)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETMONTAGELENGTH_OFFSET UNITYSDK_OFFSET(0x722EDC0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x722DFC0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x722E2B0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x722E1D0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGE_1_OFFSET UNITYSDK_OFFSET(0x72304D0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGE_OFFSET UNITYSDK_OFFSET(0x72302C0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x722E160)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERCLIPSEQUENCEMONTAGEDATA_OFFSET UNITYSDK_OFFSET(0x722FA00)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERCONFIG_OFFSET UNITYSDK_OFFSET(0x722E520)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERRUNTIMECLIPMONTAGEDATA_OFFSET UNITYSDK_OFFSET(0x722F190)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERRUNTIMELAYERCLIPMONTAGEDATA_OFFSET UNITYSDK_OFFSET(0x722F470)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERRUNTIMEMONTAGEDATA_OFFSET UNITYSDK_OFFSET(0x722EE90)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPMONTAGE_OFFSET UNITYSDK_OFFSET(0x7230630)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETDATA_OFFSET UNITYSDK_OFFSET(0x722ECA0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x7230B70)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x7230760)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7230BF0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x7230C50)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdMontageManager_TypeDefinitionIndex = 41868;

	class NPCCrowdMontageManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::String** StaticGet_TEMPLATE_ASSET_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdMontageManager_TypeDefinitionIndex)->GetStaticField(0x44D50);
		}
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_AssetRequests()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdMontageManager_TypeDefinitionIndex)->GetStaticField(0x44D58);
		}
		// static const ::System::Int32 InValidIndex = 0xFFFFFFFF; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* montageLength; // 0x18
		::System::Collections::Generic::HashSet_1<::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*>* registedAsset; // 0x20
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::MontageLayerClipData, ::System::Int32>* RuntimeLayerClipMontageDictionary; // 0x28
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::ClipSequenceMontageData, ::System::Int32>* RuntimeSequenceDataDictionary; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Animation::MontageData>* RuntimeMontageData; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* RuntimeClipMontageDictionary; // 0x40
		::NPCCrowd::NPCIDGeneratorInt* _idGen; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>>* MontageSizeData; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Animation::MontageData>* MontageTemplateData; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Animation::NPCCrowdMontageManager* Get()
		{
			return ((::NPCCrowd::Animation::NPCCrowdMontageManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GET_OFFSET))();
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterConfig(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERCONFIG_OFFSET))(this, asset);
		}

		::System::Single GetLength(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageRawData>*>* layerTrackData)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageRawData>*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETLENGTH_OFFSET))(this, layerTrackData);
		}

		::System::Boolean TryGetData(::System::Int32 montageKey, ::NPCCrowd::Animation::MontageData& montages)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::MontageData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETDATA_OFFSET))(this, montageKey, montages);
		}

		::System::Boolean GetMontageLength(::System::Int32 montageKey, ::System::Single& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETMONTAGELENGTH_OFFSET))(this, montageKey, length);
		}

		::System::Boolean RegisterRuntimeMontageData(::NPCCrowd::Animation::MontageData montages, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32& handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::MontageData, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERRUNTIMEMONTAGEDATA_OFFSET))(this, montages, instanceConfig, handler);
		}

		::System::Boolean RegisterRuntimeClipMontageData(::System::Int32 clipID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32& handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERRUNTIMECLIPMONTAGEDATA_OFFSET))(this, clipID, instanceConfig, handler);
		}

		::System::Boolean RegisterRuntimeLayerClipMontageData(::NPCCrowd::Animation::MontageLayerClipData clipData, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32& handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::MontageLayerClipData, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERRUNTIMELAYERCLIPMONTAGEDATA_OFFSET))(this, clipData, instanceConfig, handler);
		}

		::System::Boolean RegisterClipSequenceMontageData(::NPCCrowd::Animation::ClipSequenceMontageData sequenceData, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32& handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::ClipSequenceMontageData, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERCLIPSEQUENCEMONTAGEDATA_OFFSET))(this, sequenceData, instanceConfig, handler);
		}

		::System::Boolean CheckGenderSize(::System::Int32 montageKey, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CHECKGENDERSIZE_OFFSET))(this, montageKey, instanceConfig);
		}

		::System::Boolean PlayMontage(::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::System::Int32 handler, ::System::Single deltaTime, ::System::Boolean isLoop, ::System::Single fadeinTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGE_OFFSET))(this, montageData, handler, deltaTime, isLoop, fadeinTime);
		}

		::System::Boolean PlayMontage_1(::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::System::Int32 handler, ::System::Single deltaTime, ::System::Boolean isLoop)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGE_1_OFFSET))(this, montageData, handler, deltaTime, isLoop);
		}

		::System::Void StopMontage(::NPCCrowd::Ability::FNPCMontageDataFragment& montageData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCMontageDataFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPMONTAGE_OFFSET))(this, montageData);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}
	};
}
