#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Object.h"

class NPCAvatarMeshAssetsSO;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define NPCAVATARRUNTIMEDATA_CLEAN_OFFSET UNITYSDK_OFFSET(0x6092680)
#define NPCAVATARRUNTIMEDATA_GET_ISFIXTAG_OFFSET UNITYSDK_OFFSET(0x60925F0)
#define NPCAVATARRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x60927F0)

inline static constexpr unsigned int NPCAvatarRuntimeData_TypeDefinitionIndex = 48963;

class NPCAvatarRuntimeData : public ::System::Object
{
public:
	::Foundation::Unreal::FGameplayTagQuery* blackTagQuery; // 0x10
	::FNpcAvatarGenericParams avatarParams; // 0x18
	::Foundation::Unreal::FGameplayTagQuery* whiteTagQuery; // 0xB8
	::NPCCrowd::Avatar::NPCAvatarGOReference* avatarGoRef; // 0xC0
	::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos; // 0xC8
	::System::Collections::Generic::List_1<::System::Int32>* unionLogicTags; // 0xD0
	::NPCAvatarMeshAssetsSO* avatarAssetSo; // 0xD8
	::System::Threading::CancellationTokenSource* avatarCts; // 0xE0
	::System::Boolean collisionDither; // 0xE8
	::System::Boolean shouldFadeOutOnDestroy; // 0xE9
	::System::Boolean isPathNpc; // 0xEA
	::System::Boolean enableAudio; // 0xEB
	::System::Boolean startFadeOut; // 0xEC
	::System::Boolean shouldFadeInOnCreate; // 0xED
	::System::Int32 populationID; // 0xF0
	::System::Int32 avatarRandomLibID; // 0xF4
	::System::Int32 avatarParamsID; // 0xF8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA__CTOR_OFFSET))(this);
	}

	::System::Boolean get_isFixTag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_GET_ISFIXTAG_OFFSET))(this);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_CLEAN_OFFSET))(this);
	}
};
