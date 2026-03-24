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

#define NPCAVATARRUNTIMEDATA_CLEAN_OFFSET UNITYSDK_OFFSET(0x1749E130)
#define NPCAVATARRUNTIMEDATA_GET_ISFIXTAG_OFFSET UNITYSDK_OFFSET(0x1749E0A0)
#define NPCAVATARRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1749E290)

inline static constexpr unsigned int NPCAvatarRuntimeData_TypeDefinitionIndex = 70779;

class NPCAvatarRuntimeData : public ::System::Object
{
public:
	::Foundation::Unreal::FGameplayTagQuery* whiteTagQuery; // 0x10
	::NPCAvatarMeshAssetsSO* avatarAssetSo; // 0x18
	::System::Threading::CancellationTokenSource* avatarCts; // 0x20
	::Foundation::Unreal::FGameplayTagQuery* blackTagQuery; // 0x28
	::NPCCrowd::Avatar::NPCAvatarGOReference* avatarGoRef; // 0x30
	::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* unionLogicTags; // 0x40
	::FNpcAvatarGenericParams avatarParams; // 0x48
	::System::Int32 avatarParamsID; // 0xE8
	::System::Int32 populationID; // 0xEC
	::System::Boolean isPathNpc; // 0xF0
	::System::Boolean collisionDither; // 0xF1
	::System::Boolean startFadeOut; // 0xF2
	::System::Boolean shouldFadeInOnCreate; // 0xF3
	::System::Boolean enableAudio; // 0xF4
	::System::Boolean shouldFadeOutOnDestroy; // 0xF5
	::System::Int32 avatarRandomLibID; // 0xF8

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
