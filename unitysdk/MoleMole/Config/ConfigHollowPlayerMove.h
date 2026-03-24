#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DirectionStringConfigGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_GET_AUTOCANCELLOCALFOLLOW_OFFSET UNITYSDK_OFFSET(0xB099D50)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_SET_AUTOCANCELLOCALFOLLOW_OFFSET UNITYSDK_OFFSET(0xB099E50)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0xB099F50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowPlayerMove_TypeDefinitionIndex = 74062;

	class ConfigHollowPlayerMove : public ::System::Object
	{
	public:
		::MoleMole::Config::DirectionStringConfigGroup MoveFailTextureSheetKeyGroup; // 0x10
		::MoleMole::Config::DirectionStringConfigGroup MoveFailEffectKeyGroup; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* GlobalFindPathIntervalDic; // 0x50
		::System::String* MoveFailStrechKey; // 0x58
		::MoleMole::Config::DirectionStringConfigGroup MoveFailTextureSheetKeyGroupNoMove; // 0x60
		::System::Single clickProtectedTimeFirst; // 0x80
		::UnityEngine::Vector4 CancelLocalFollowZone; // 0x84
		::System::Boolean AllowPathTagGlobalConitinueMove; // 0x94
		::System::Boolean FinishNeedSync; // 0x95
		::System::Boolean StepPathLenCheckToggle; // 0x96
		::System::Boolean AutoCancelLocalFollowMobileConsole; // 0x97
		::System::Single leavingAnimInterval; // 0x98
		::System::Boolean AutoCancelLocalFollowConsole; // 0x9C
		::System::Boolean AutoCancelLocalFollowPC; // 0x9D
		::System::Boolean MoveV2; // 0x9E
		::System::Boolean PlayerMoveUseCenterCamera; // 0x9F
		::System::Int32 MoveFailNoMoveAudioId; // 0xA0
		::System::Int32 MoveFailAudioId; // 0xA4
		::System::Boolean AllowUnstableGlobalConitinueMove; // 0xA8
		::System::Boolean MovePrePerformance; // 0xA9
		::System::Boolean AutoCancelLocalFollowMobile; // 0xAA
		::System::Single clickProtectedTime; // 0xAC
		::System::Single pushBoxClickProtectedTime; // 0xB0
		::System::Single pushBoxClickProtectedTimeFirst; // 0xB4

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
