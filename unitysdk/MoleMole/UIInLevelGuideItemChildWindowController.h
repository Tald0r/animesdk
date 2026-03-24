#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_5D14E331734C3C6B.h"
#include "unitysdk/Enum_3_AA439AE9E76594AE.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_48D56DACBE4271BC;
class Class_2_2C35065580AA4D35;
class Class_2_A8F5ABF31E066ED4;
class Class_3_7472FB6CC4015359;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class ItemStyle; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelGuideItemContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_BINDSPEEDTYPE_OFFSET UNITYSDK_OFFSET(0x980BEF0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_CANPLAYFADEONINIT_OFFSET UNITYSDK_OFFSET(0x980CC90)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x980E1E0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETGUIDEITEMFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x980D060)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETGUIDEITEMFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x980DD20)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETSELFSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x9810220)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETTARGETSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x98102B0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x9810B70)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x980C720)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x980EE20)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITICONBYCOMPTYPE_OFFSET UNITYSDK_OFFSET(0x980E740)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITICON_OFFSET UNITYSDK_OFFSET(0x980E990)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x980EA20)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x980C840)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISINCAMERAVIEWPORT_OFFSET UNITYSDK_OFFSET(0x980E530)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISINFADESTATE_OFFSET UNITYSDK_OFFSET(0x980F010)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISINSCENECAMERABACK_OFFSET UNITYSDK_OFFSET(0x9810320)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISSHOWARROW_OFFSET UNITYSDK_OFFSET(0x980E170)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x980C730)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x980D4C0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x980D3D0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x980D560)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x980D110)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x980D340)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x980C7D0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x980CAD0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x980D6E0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_PLAYWARNINGWITHANIM_OFFSET UNITYSDK_OFFSET(0x980BE50)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_PLAYWARNINGWITHTWEEN_OFFSET UNITYSDK_OFFSET(0x980C230)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x980E2B0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETCONTROLVISIBLE_OFFSET UNITYSDK_OFFSET(0x98100E0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETDISPLAYMODE_OFFSET UNITYSDK_OFFSET(0x980DE70)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETICONWARNING_OFFSET UNITYSDK_OFFSET(0x980C540)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETINIT_OFFSET UNITYSDK_OFFSET(0x980D7A0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETSCREENPARAM_OFFSET UNITYSDK_OFFSET(0x980F080)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETSTYLE_OFFSET UNITYSDK_OFFSET(0x980E100)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x980D870)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x9810B80)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SHOULDUPDATEARROWORTARGATICON_OFFSET UNITYSDK_OFFSET(0x98103F0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SHOULDUPDATERECTTRANSFORMANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x9810AB0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_STARTFADE_OFFSET UNITYSDK_OFFSET(0x980EED0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_STOPWARNINGWITHANIM_OFFSET UNITYSDK_OFFSET(0x980C1B0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_STOPWARNINGWITHTWEEN_OFFSET UNITYSDK_OFFSET(0x980C3F0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x980F140)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_TRYPLAYFADE_OFFSET UNITYSDK_OFFSET(0x980D600)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATEALPHA_OFFSET UNITYSDK_OFFSET(0x9810970)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATEARROW_OFFSET UNITYSDK_OFFSET(0x980F470)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATESELFPOS_OFFSET UNITYSDK_OFFSET(0x9810630)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATETARGETICON_OFFSET UNITYSDK_OFFSET(0x980FB00)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATETEXTPOS_OFFSET UNITYSDK_OFFSET(0x9810810)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_WAITARROWINVISIBLE_OFFSET UNITYSDK_OFFSET(0x980E060)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_WAITINVISIBLE_OFFSET UNITYSDK_OFFSET(0x980DDD0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER__BINDSPEEDTYPE_B__9_0_OFFSET UNITYSDK_OFFSET(0x9810BC0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER__CACHECLEAN_OFFSET UNITYSDK_OFFSET(0x980D270)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9810B90)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x9810D90)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9810DF0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x9810E60)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x9810EC0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9810ED0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9810EE0)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9810EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelGuideItemChildWindowController_TypeDefinitionIndex = 53570;

	class UIInLevelGuideItemChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* ITEM_WARNING_ANIM; // 0x0
		// static const ::System::String* ITEM_FADE_IN; // 0x0
		// static const ::System::String* ITEM_FADE_OUT; // 0x0
		// static const ::System::String* ARROW_FADE_IN; // 0x0
		// static const ::System::String* ARROW_FADE_OUT; // 0x0
		::System::Boolean isWarningState; // 0x2F8
		::DG::Tweening::Tween* warningTween; // 0x300
		::Enum_3_AA439AE9E76594AE currentWarningType; // 0x308
		::MoleMole::ItemStyle* curStyle; // 0x310
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x318
		::Class_3_7472FB6CC4015359* _hudComponent; // 0x320
		::Class_2_2C35065580AA4D35* _view; // 0x328
		::System::Boolean visible; // 0x330
		::System::Boolean controlVisible; // 0x331
		::UnityEngine::RectTransform* rectTransform; // 0x338
		::UnityEngine::RectTransform* arrowTran; // 0x340
		::UnityEngine::RectTransform* targetImgTran; // 0x348
		::UnityEngine::RectTransform* textTrans; // 0x350
		::Class_2_A8F5ABF31E066ED4* targetIconImg; // 0x358
		::UnityEngine::UI::Extension::UILocalizationText* targetNumText; // 0x360
		::UnityEngine::RectTransform* parent; // 0x368
		::UnityEngine::GameObject* arrowGameObject; // 0x370
		::UnityEngine::UI::Text* distanceText; // 0x378
		::System::Single screenWidth; // 0x380
		::System::Single screenHeight; // 0x384
		::UnityEngine::Vector2 borderRange; // 0x388
		::System::Single hideRadius; // 0x390
		::System::Boolean followEntity; // 0x394
		::System::Single textTransRa; // 0x398
		::System::Single textTransRb; // 0x39C
		::UnityEngine::Vector3 currentAvatarLastPos; // 0x3A0
		::UnityEngine::Vector3 followTargetLastPos; // 0x3AC
		::UnityEngine::Vector3 cameraLastPos; // 0x3B8
		::UnityEngine::Vector2 anchorUILastPosition; // 0x3C4
		::UnityEngine::Vector2 uiPos; // 0x3CC
		::UnityEngine::Vector3 followTargetPos; // 0x3D4
		::System::Single entityHeight; // 0x3E0
		::System::Single fadeOutTime; // 0x3E4
		::System::Single arrowFadeOutTime; // 0x3E8
		::System::Single tweenScaleTime; // 0x3EC
		::System::Single tweenScaleSize; // 0x3F0
		::System::Single fadeDelta; // 0x3F4
		::System::Boolean isFadeState; // 0x3F8
		::DG::Tweening::Tween* fadeTween; // 0x400
		::UnityEngine::Transform* lockSpineTran; // 0x408
		::System::Action* visiableCallback; // 0x410
		::Foundation::Coroutine::CoroutineHandle _coroutineHandle; // 0x418
		::Foundation::Coroutine::CoroutineHandle _arrowCoroutineHandle; // 0x41C
		::System::String* targetPointName; // 0x420
		::System::Boolean displayArrowMod; // 0x428
		::MoleMole::UIInLevelGuideItemContext* context; // 0x430
		::System::Boolean fadeInit; // 0x438
		::System::Boolean fadingOut; // 0x439
		::System::Boolean _NeedCache_k__BackingField; // 0x43A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void PlayWarningWithAnim(::Enum_3_5D14E331734C3C6B speedType, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5D14E331734C3C6B, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_PLAYWARNINGWITHANIM_OFFSET))(this, speedType, id);
		}

		::System::Void StopWarningWithAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_STOPWARNINGWITHANIM_OFFSET))(this);
		}

		::System::Void PlayWarningWithTween(::Enum_3_5D14E331734C3C6B speedType, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5D14E331734C3C6B, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_PLAYWARNINGWITHTWEEN_OFFSET))(this, speedType, id);
		}

		::System::Void StopWarningWithTween()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_STOPWARNINGWITHTWEEN_OFFSET))(this);
		}

		::System::Void SetIconWarning(::System::Boolean state, ::Enum_3_5D14E331734C3C6B speedType, ::System::UInt32 id, ::Enum_3_AA439AE9E76594AE warningType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_5D14E331734C3C6B, ::System::UInt32, ::Enum_3_AA439AE9E76594AE))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETICONWARNING_OFFSET))(this, state, speedType, id, warningType);
		}

		::System::Void BindSpeedType(::Enum_3_5D14E331734C3C6B speedType, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5D14E331734C3C6B, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_BINDSPEEDTYPE_OFFSET))(this, speedType, id);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void TryPlayFade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_TRYPLAYFADE_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::String* overrideFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_PLAYFADEIN_OFFSET))(this, overrideFadeIn);
		}

		::System::Void SetInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETINIT_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean isVisible, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETVISIBLE_OFFSET))(this, isVisible, callback);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitInvisible()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_WAITINVISIBLE_OFFSET))(this);
		}

		::System::Void SetDisplayMode(::System::Boolean isArrow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETDISPLAYMODE_OFFSET))(this, isArrow);
		}

		::System::Void SetStyle(::MoleMole::ItemStyle* style)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ItemStyle*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETSTYLE_OFFSET))(this, style);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitArrowInvisible()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_WAITARROWINVISIBLE_OFFSET))(this);
		}

		::System::Boolean IsShowArrow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISSHOWARROW_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void Reset(::System::Boolean stopAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_RESET_OFFSET))(this, stopAnimation);
		}

		::System::Boolean IsInCameraViewport(::UnityEngine::Camera* mainCamera, ::UnityEngine::Vector3 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISINCAMERAVIEWPORT_OFFSET))(this, mainCamera, position);
		}

		::System::Void InitIconByCompType(::MoleMole::Config::CampType type, ::System::Int32 memberIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CampType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITICONBYCOMPTYPE_OFFSET))(this, type, memberIndex);
		}

		::System::Void InitTeamIndex(::System::Int32 memberIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITTEAMINDEX_OFFSET))(this, memberIndex);
		}

		::System::Void InitIcon(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITICON_OFFSET))(this, iconPath);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void StartFade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_STARTFADE_OFFSET))(this);
		}

		::System::Boolean IsInFadeState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISINFADESTATE_OFFSET))(this);
		}

		::System::String* GetGuideItemFadeInAnimation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETGUIDEITEMFADEINANIMATION_OFFSET))(this);
		}

		::System::String* GetGuideItemFadeOutAnimation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETGUIDEITEMFADEOUTANIMATION_OFFSET))(this);
		}

		::System::Void SetScreenParam(::System::Single width, ::System::Single height, ::UnityEngine::Vector2 border, ::System::Single hideRange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETSCREENPARAM_OFFSET))(this, width, height, border, hideRange);
		}

		::System::Boolean Tick(::UnityEngine::Vector3 currPos, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 cameraForward, ::UnityEngine::Vector3 cameraPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_TICK_OFFSET))(this, currPos, targetPos, cameraForward, cameraPos);
		}

		::System::Void SetControlVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SETCONTROLVISIBLE_OFFSET))(this, visible);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_INIT_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetSelfScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETSELFSCREENPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetTargetScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GETTARGETSCREENPOSITION_OFFSET))(this);
		}

		::System::Boolean IsInSceneCameraBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_ISINSCENECAMERABACK_OFFSET))(this);
		}

		::System::Boolean CanPlayFadeOnInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_CANPLAYFADEONINIT_OFFSET))(this);
		}

		::System::Boolean ShouldUpdateArrowOrTargatIcon(::UnityEngine::Vector3 currPos, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 cameraPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SHOULDUPDATEARROWORTARGATICON_OFFSET))(this, currPos, targetPos, cameraPos);
		}

		::System::Boolean UpdateArrow(::UnityEngine::Vector3 currPos, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 cameraForward, ::UnityEngine::Vector3 cameraPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATEARROW_OFFSET))(this, currPos, targetPos, cameraForward, cameraPos);
		}

		::System::Void UpdateAlpha(::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATEALPHA_OFFSET))(this, distance);
		}

		::System::Void UpdateSelfPos(::UnityEngine::Vector2 uiPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATESELFPOS_OFFSET))(this, uiPos);
		}

		::System::Void UpdateTextPos(::System::Single rad)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATETEXTPOS_OFFSET))(this, rad);
		}

		::System::Boolean ShouldUpdateRectTransformAnchoredPosition(::UnityEngine::Vector2 uiPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SHOULDUPDATERECTTRANSFORMANCHOREDPOSITION_OFFSET))(this, uiPos);
		}

		::System::Boolean UpdateTargetIcon(::UnityEngine::Vector3 currPos, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 cameraForward, ::UnityEngine::Vector3 cameraPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_UPDATETARGETICON_OFFSET))(this, currPos, targetPos, cameraForward, cameraPos);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::System::Void _CacheClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER__CACHECLEAN_OFFSET))(this);
		}

		::System::Void _BindSpeedType_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER__BINDSPEEDTYPE_B__9_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
