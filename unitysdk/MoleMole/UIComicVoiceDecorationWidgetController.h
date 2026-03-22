#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIComicDecorationEventController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_52BF5A8E97668B1D_6;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Timeline { class ComicEventBase; }
namespace UnityEngine::Timeline { class VoiceDecorateEvent; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_CLICKTHROUGH_OFFSET UNITYSDK_OFFSET(0xA26C1E0)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_ENDPLAY_OFFSET UNITYSDK_OFFSET(0xA26C980)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0xA26C860)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_GETFADEOUTANIMTIME_OFFSET UNITYSDK_OFFSET(0xA26CB70)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0xA26B980)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_JUMPTOFINAL_OFFSET UNITYSDK_OFFSET(0xA26C790)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA26B850)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA26B8F0)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA26B710)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0xA26C300)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0xA26CA40)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xA26BFF0)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SETANIMATION_OFFSET UNITYSDK_OFFSET(0xA26BD90)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SETEXTERNAL_OFFSET UNITYSDK_OFFSET(0xA26BE90)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SETRANDOMPARMS_OFFSET UNITYSDK_OFFSET(0xA26BE20)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SETSPRITEPARAMS_OFFSET UNITYSDK_OFFSET(0xA26BAE0)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SETSTARTTRANSFORMPARAMS_OFFSET UNITYSDK_OFFSET(0xA26BF10)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SETTARGETTRANSFORMPARAMS_OFFSET UNITYSDK_OFFSET(0xA26BF80)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SIMULATEANIMPROGRESS_OFFSET UNITYSDK_OFFSET(0xA26C550)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_STARTPLAY_OFFSET UNITYSDK_OFFSET(0xA26C060)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_UPDATETIME_OFFSET UNITYSDK_OFFSET(0xA26C430)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA26CC90)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_ENDPLAY_OFFSET UNITYSDK_OFFSET(0xA26CCC0)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0xA26CD20)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_GETFADEOUTANIMTIME_OFFSET UNITYSDK_OFFSET(0xA26CD80)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0xA26CDE0)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_JUMPTOFINAL_OFFSET UNITYSDK_OFFSET(0xA26CDF0)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA26CE50)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA26CEC0)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA26CED0)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0xA26CF40)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0xA26CFA0)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xA26D000)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_STARTPLAY_OFFSET UNITYSDK_OFFSET(0xA26D010)
#define MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0xA26D070)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicVoiceDecorationWidgetController_TypeDefinitionIndex = 50576;

	class UIComicVoiceDecorationWidgetController : public ::MoleMole::UIComicDecorationEventController
	{
	public:
		// static const ::System::String* fadeInAnim; // 0x0
		// static const ::System::String* fadeOutAnim; // 0x0
		::Class_2_52BF5A8E97668B1D_6* _view; // 0x2F8
		::UnityEngine::Timeline::VoiceDecorateEvent* eventBase; // 0x300
		::UnityEngine::UI::Image* img; // 0x308
		::System::String* externalKey; // 0x310
		::System::Action* playExternalCB; // 0x318
		::UnityEngine::Animation* anim; // 0x320
		::UnityEngine::AnimationCurve* animCurve; // 0x328
		::System::Single animationTime; // 0x330
		::Il2CppArray<::UnityEngine::CanvasGroup*>* canvasGroups; // 0x338
		::UnityEngine::RectTransform* imgRectTrans; // 0x340
		::UnityEngine::Vector2 startAnchoredPos; // 0x348
		::UnityEngine::Vector3 startRotation; // 0x350
		::UnityEngine::Vector2 endAnchoredPos; // 0x35C
		::UnityEngine::Vector3 endRotation; // 0x364
		::UnityEngine::Vector2 randomVal; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::ComicEventBase* eventBase)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_INITWITHBASE_OFFSET))(this, eventBase);
		}

		::System::Void SetRandomParms(::UnityEngine::Vector2 randomVal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SETRANDOMPARMS_OFFSET))(this, randomVal);
		}

		::System::Void SetExternal(::System::String* key, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SETEXTERNAL_OFFSET))(this, key, callback);
		}

		::System::Void SetSpriteParams(::UnityEngine::Timeline::VoiceDecorateEvent* eventBase)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::VoiceDecorateEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SETSPRITEPARAMS_OFFSET))(this, eventBase);
		}

		::System::Void SetStartTransformParams(::UnityEngine::Vector2 startAnchoredPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SETSTARTTRANSFORMPARAMS_OFFSET))(this, startAnchoredPosition);
		}

		::System::Void SetTargetTransformParams(::UnityEngine::Vector2 targetAnchoredPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SETTARGETTRANSFORMPARAMS_OFFSET))(this, targetAnchoredPos);
		}

		::System::Void SetAnimation(::System::Single animDuration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SETANIMATION_OFFSET))(this, animDuration, curve);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_STARTPLAY_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_UPDATETIME_OFFSET))(this, deltaTime);
		}

		::System::Void SimulateAnimProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_SIMULATEANIMPROGRESS_OFFSET))(this, progress);
		}

		::System::Void JumpToFinal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_JUMPTOFINAL_OFFSET))(this);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Single GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_ENDPLAY_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET))(this);
		}

		::System::Single GetFadeOutAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_GETFADEOUTANIMTIME_OFFSET))(this);
		}

		::System::Void ClickThrough(::System::Boolean allowClickThrough)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER_CLICKTHROUGH_OFFSET))(this, allowClickThrough);
		}

		::System::Void __base_EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_ENDPLAY_OFFSET))(this);
		}

		::System::Single __base_GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Single __base_GetFadeOutAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_GETFADEOUTANIMTIME_OFFSET))(this);
		}

		::System::Void __base_InitWithBase(::UnityEngine::Timeline::ComicEventBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_INITWITHBASE_OFFSET))(this, P0);
		}

		::System::Void __base_JumpToFinal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_JUMPTOFINAL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Void __base_PlayFadeOutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_PLAYFADEOUTANIM_OFFSET))(this);
		}

		::System::Void __base_ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __base_StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_STARTPLAY_OFFSET))(this);
		}

		::System::Void __base_UpdateTime(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICVOICEDECORATIONWIDGETCONTROLLER___BASE_UPDATETIME_OFFSET))(this, P0);
		}
	};
}
