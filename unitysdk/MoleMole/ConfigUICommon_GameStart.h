#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Foundation { class Assets_ConfigHashSetTrim; }
namespace Foundation { class ConfigDiffPatcher; }
namespace MoleMole { class ConfigCurveDataInfo; }
namespace MoleMole { class ConfigDownloader; }
namespace MoleMole { class UIBlurConfigCurveDataInfo; }
namespace MoleMole { class UITextTypesettingLanSettings; }
namespace MoleMole { class UITextTypesettingSettings; }
namespace MoleMole { class UITokenDialogConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_CONFIGUICOMMON_GAMESTART_GET_CURVEDATAINFO_OFFSET UNITYSDK_OFFSET(0x17508CA0)
#define MOLEMOLE_CONFIGUICOMMON_GAMESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x17508F00)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_GameStart_TypeDefinitionIndex = 61846;

	class ConfigUICommon_GameStart : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::UnityEngine::Texture2D* cursorTexture; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::UITokenDialogConfig*>* UITokenDialogConfigs; // 0x60
		::System::Int32 MaxDelta; // 0x68
		::System::Single MinDelta; // 0x6C
		::System::Single AnimTime; // 0x70
		::UnityEngine::AnimationCurve* BiggerCurve; // 0x78
		::UnityEngine::AnimationCurve* SmallerCurve; // 0x80
		::UnityEngine::Color DefaultColor; // 0x88
		::System::Collections::Generic::List_1<::MoleMole::UIBlurConfigCurveDataInfo*>* UIBlurCurveDataInfos; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigCurveDataInfo*>* _CurveDataInfo; // 0xA0
		::MoleMole::UITextTypesettingSettings* GenericTypesetSettings; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::UITextTypesettingLanSettings*>* LangaugeTypesetSettings; // 0xB0
		::System::Collections::Generic::List_1<::MoleMole::LanguageType>* DisableNoWordBreakLanguages; // 0xB8
		::MoleMole::ConfigDownloader* DownloaderConfig; // 0xC0
		::Foundation::ConfigDiffPatcher* DiffPatcherConfig; // 0xC8
		::Foundation::Assets_ConfigHashSetTrim* HashSetTrimConfig; // 0xD0
		::UnityEngine::Vector2 DamageTextScreenSpaceRangeMin; // 0xD8
		::UnityEngine::Vector2 DamageTextScreenSpaceRangeMax; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_GAMESTART__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigCurveDataInfo*>* get_CurveDataInfo()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigCurveDataInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_GAMESTART_GET_CURVEDATAINFO_OFFSET))(this);
		}
	};
}
