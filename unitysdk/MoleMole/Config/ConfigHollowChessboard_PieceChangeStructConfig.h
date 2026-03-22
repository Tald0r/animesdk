#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIG_GETANIMLISTVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x970AB70)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x970AC10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PieceChangeStructConfig_TypeDefinitionIndex = 59126;

	class ConfigHollowChessboard_PieceChangeStructConfig : public ::System::Object
	{
	public:
		::MoleMole::ConfigAnimationCurveGroup* TVAnim; // 0x10
		::UnityEngine::AnimationCurve* FlushWriteAlphaCurve; // 0x18
		::System::String* RefreshTextureSheetConfigKey; // 0x20
		::System::Single FlushWriteDuration; // 0x28
		::System::Single MaxFlushWriteValue; // 0x2C
		::System::Single protectTime; // 0x30
		::System::Single refreshViewDelayTime; // 0x34
		::System::Boolean hidePieceInPath; // 0x38
		::System::Boolean useOldConfig; // 0x39
		::System::Boolean isWrite; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Collections::IEnumerable* GetAnimListValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIG_GETANIMLISTVALUEDROPDOWN_OFFSET))();
		}
	};
}
