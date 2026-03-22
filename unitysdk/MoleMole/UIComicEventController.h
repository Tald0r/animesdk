#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Timeline { class ComicEventBase; }

#define MOLEMOLE_UICOMICEVENTCONTROLLER_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x95D6700)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0x95D66A0)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_GETFADEOUTANIMTIME_OFFSET UNITYSDK_OFFSET(0x95D67C0)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x95D6040)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x95D5BE0)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_ISDELAYING_OFFSET UNITYSDK_OFFSET(0x95D6460)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x95D6560)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x95D64E0)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95D5D70)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95D5B30)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x95D6640)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x95D6760)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x95D6890)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x95D62E0)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_SETBELONGPART_OFFSET UNITYSDK_OFFSET(0x95D5FD0)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_SETFINALSTATEPARAMS_OFFSET UNITYSDK_OFFSET(0x95D6820)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_SETKEY_OFFSET UNITYSDK_OFFSET(0x95D5F60)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_SETPARENT_OFFSET UNITYSDK_OFFSET(0x95D61D0)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_SETPREFABPARAMS_OFFSET UNITYSDK_OFFSET(0x95D5E30)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x95D65E0)
#define MOLEMOLE_UICOMICEVENTCONTROLLER_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x95D63F0)
#define MOLEMOLE_UICOMICEVENTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x95D6900)
#define MOLEMOLE_UICOMICEVENTCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95D6990)
#define MOLEMOLE_UICOMICEVENTCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95D6930)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicEventController_TypeDefinitionIndex = 69244;

	class UIComicEventController : public ::MoleMole::UIWidgetController
	{
	public:
		::UnityEngine::GameObject* selfObj; // 0x2A0
		::UnityEngine::RectTransform* selfTransform; // 0x2A8
		::System::Boolean isStart; // 0x2B0
		::System::Boolean isFinish; // 0x2B1
		::System::Single animDeltaTime; // 0x2B4
		::System::String* Key; // 0x2B8
		::MoleMole::ComicImgPart belongPart; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetPrefabParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_SETPREFABPARAMS_OFFSET))(this);
		}

		::System::Void SetKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_SETKEY_OFFSET))(this, key);
		}

		::System::Void SetBelongPart(::MoleMole::ComicImgPart belong)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ComicImgPart))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_SETBELONGPART_OFFSET))(this, belong);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::ComicEventBase* eventBase)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_INITWITHBASE_OFFSET))(this, eventBase);
		}

		::System::Void SetParent(::UnityEngine::RectTransform* parentTrans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_SETPARENT_OFFSET))(this, parentTrans);
		}

		::System::Void SetActive(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_SETACTIVE_OFFSET))(this, state);
		}

		::System::Void UpdateTime(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_UPDATETIME_OFFSET))(this, deltaTime);
		}

		::System::Boolean IsDelaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_ISDELAYING_OFFSET))(this);
		}

		::System::Boolean IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_ISFINISHED_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_STARTPLAY_OFFSET))(this);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Single GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_ENDPLAY_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_PLAYFADEOUTANIM_OFFSET))(this);
		}

		::System::Single GetFadeOutAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_GETFADEOUTANIMTIME_OFFSET))(this);
		}

		::System::Void SetFinalStateParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_SETFINALSTATEPARAMS_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICEVENTCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
