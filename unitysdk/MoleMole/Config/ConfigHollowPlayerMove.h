#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DirectionStringConfigGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_GET_AUTOCANCELLOCALFOLLOW_OFFSET UNITYSDK_OFFSET(0x970B2F0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_SET_AUTOCANCELLOCALFOLLOW_OFFSET UNITYSDK_OFFSET(0x970B3F0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x970B4F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowPlayerMove_TypeDefinitionIndex = 46928;

	class ConfigHollowPlayerMove : public ::System::Object
	{
	public:
		::MoleMole::Config::DirectionStringConfigGroup MoveFailTextureSheetKeyGroupNoMove; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* GlobalFindPathIntervalDic; // 0x30
		::System::String* MoveFailStrechKey; // 0x38
		::MoleMole::Config::DirectionStringConfigGroup MoveFailEffectKeyGroup; // 0x40
		::MoleMole::Config::DirectionStringConfigGroup MoveFailTextureSheetKeyGroup; // 0x60
		::UnityEngine::Vector4 CancelLocalFollowZone; // 0x80
		::System::Boolean AutoCancelLocalFollowPC; // 0x90
		::System::Boolean FinishNeedSync; // 0x91
		::System::Boolean StepPathLenCheckToggle; // 0x92
		::System::Boolean AllowUnstableGlobalConitinueMove; // 0x93
		::System::Boolean MovePrePerformance; // 0x94
		::System::Boolean MoveV2; // 0x95
		::System::Boolean AutoCancelLocalFollowMobileConsole; // 0x96
		::System::Int32 MoveFailNoMoveAudioId; // 0x98
		::System::Single leavingAnimInterval; // 0x9C
		::System::Int32 MoveFailAudioId; // 0xA0
		::System::Single clickProtectedTime; // 0xA4
		::System::Boolean AutoCancelLocalFollowMobile; // 0xA8
		::System::Boolean AutoCancelLocalFollowConsole; // 0xA9
		::System::Boolean PlayerMoveUseCenterCamera; // 0xAA
		::System::Boolean AllowPathTagGlobalConitinueMove; // 0xAB
		::System::Single pushBoxClickProtectedTimeFirst; // 0xAC
		::System::Single pushBoxClickProtectedTime; // 0xB0
		::System::Single clickProtectedTimeFirst; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AutoCancelLocalFollow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_GET_AUTOCANCELLOCALFOLLOW_OFFSET))(this);
		}

		::System::Void set_AutoCancelLocalFollow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_SET_AUTOCANCELLOCALFOLLOW_OFFSET))(this, value);
		}
	};
}
