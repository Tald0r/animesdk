#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_ItemRarity.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_CameraInfo.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_GachaSkipAllType.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_GachaStageType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
class Class_1_F50B5EAC0B6702FB;
class Class_2_208CC9941471731A_894;
class Class_2_5F64140FAB2210F3;
class Class_2_E3B74E53F7AC003C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaPerformance3DModelController_CharacterColorCorrectionParams; }
namespace MoleMole { class UIGachaStage3DModelControllerBase; }
namespace MoleMole::Config { class ConfigGachaPerformMisc; }
namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }

#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ALLOWTONEXTITEM_OFFSET UNITYSDK_OFFSET(0xBFE18D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DISACTIVEALLSHOWLIGHTS_OFFSET UNITYSDK_OFFSET(0xBFE2650)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DOFIREEFFECT_OFFSET UNITYSDK_OFFSET(0xBFE9CB0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DOPLAYCLOSEUPTL_OFFSET UNITYSDK_OFFSET(0xBFE7150)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FADEOUTEFFECT_OFFSET UNITYSDK_OFFSET(0xBFEABA0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRECAMERAEFFECT_OFFSET UNITYSDK_OFFSET(0xBFEA720)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRESTAGEEFFECT_OFFSET UNITYSDK_OFFSET(0xBFE9AB0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRETVEFFECT_OFFSET UNITYSDK_OFFSET(0xBFE9950)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GETGAUSSIANBLURTILLING_OFFSET UNITYSDK_OFFSET(0xBFE2900)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ANIMACHECKMODE_OFFSET UNITYSDK_OFFSET(0xBFE4020)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0xBFED880)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CAMROTACTIVE_OFFSET UNITYSDK_OFFSET(0xBFED590)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CURITEMSTAGECTRLER_OFFSET UNITYSDK_OFFSET(0xBFED580)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CURTIMESCALE_OFFSET UNITYSDK_OFFSET(0xBFDF3F0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_END_BLUEPRINT_NAME_OFFSET UNITYSDK_OFFSET(0xBFDD7D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_GACHAPERFORMMISC_OFFSET UNITYSDK_OFFSET(0xBFDD020)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISENDINGPERFORMING_OFFSET UNITYSDK_OFFSET(0xBFED7A0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISFIRSTITEMPERFORMING_OFFSET UNITYSDK_OFFSET(0xBFE1CA0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISLASTITEMPERFORMING_OFFSET UNITYSDK_OFFSET(0xBFED810)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISMUTESPEEDUP_OFFSET UNITYSDK_OFFSET(0xBFED5C0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISNONGACHA_OFFSET UNITYSDK_OFFSET(0xBFDCF10)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_NEXTITEMPROTECTTIMER_OFFSET UNITYSDK_OFFSET(0xBFED5A0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_PERFORMEDCOUNTOFFSET_OFFSET UNITYSDK_OFFSET(0xBFE1F10)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_PERFORMEDPHASECOUNT_OFFSET UNITYSDK_OFFSET(0xBFED560)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEITEMSTAGERARITYPERFORM_OFFSET UNITYSDK_OFFSET(0xBFEB600)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEITEMSTAGERARITYSPERFORM_OFFSET UNITYSDK_OFFSET(0xBFEC3F0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEPLAYTEXTSHOTTIMELINE_OFFSET UNITYSDK_OFFSET(0xBFECB00)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLERESETGAUSSIANBLURPARAMS_OFFSET UNITYSDK_OFFSET(0xBFEC450)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLETVRARITYSPERFORM_OFFSET UNITYSDK_OFFSET(0xBFEB270)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ISSINGLEGACHA_OFFSET UNITYSDK_OFFSET(0xBFE25E0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBFDF760)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONCAMSHAKEDELAYTIMEUP_OFFSET UNITYSDK_OFFSET(0xBFE2D20)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFDD220)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONSCREENEFFECTEND_OFFSET UNITYSDK_OFFSET(0xBFEC720)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONTIMESCALECHANGED_OFFSET UNITYSDK_OFFSET(0xBFE2A30)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xBFDD2F0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFDD810)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB2DF6B0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFDCAE0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0xBFE3CF0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCHARACTERLIGHTSTL_OFFSET UNITYSDK_OFFSET(0xBFE81A0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCLOSEUPTL_OFFSET UNITYSDK_OFFSET(0xBFE6820)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYITEMSHAKE_OFFSET UNITYSDK_OFFSET(0xBFEC830)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYNONGACHACAMFOV_OFFSET UNITYSDK_OFFSET(0xBFE66E0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYPARTICLESYS_OFFSET UNITYSDK_OFFSET(0xBFEAA70)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSCENELIGHTSTL_OFFSET UNITYSDK_OFFSET(0xBFE8820)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSHOWLIGHTSTL_OFFSET UNITYSDK_OFFSET(0xBFE8240)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGEROTATESCREENEFFECTS_OFFSET UNITYSDK_OFFSET(0xBFEC9F0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGETEXSHEETBYBLACKBOARD_OFFSET UNITYSDK_OFFSET(0xBFE3630)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGETEXSHEET_OFFSET UNITYSDK_OFFSET(0xBFE37F0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGE_OFFSET UNITYSDK_OFFSET(0xBFDFC00)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYTVEFFECTANIM_OFFSET UNITYSDK_OFFSET(0xBFEAFD0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYTVSCENELIGHTSTL_OFFSET UNITYSDK_OFFSET(0xBFE9480)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_QUICKPLAYOPENNINGTV_OFFSET UNITYSDK_OFFSET(0xBFE4D30)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_REVERTCAMINFO_OFFSET UNITYSDK_OFFSET(0xBFE1770)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ROTATECAMERA_OFFSET UNITYSDK_OFFSET(0xBFE39B0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ROTATEWEAPON_OFFSET UNITYSDK_OFFSET(0xBFE4130)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETRARESOUNDSCOPEVALUE_OFFSET UNITYSDK_OFFSET(0xBFE1D30)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETSHOWLIGHTSCOLOR_OFFSET UNITYSDK_OFFSET(0xBFE2060)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETTVMATPROPERTY_OFFSET UNITYSDK_OFFSET(0xBFEC8B0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SET_CAMROTACTIVE_OFFSET UNITYSDK_OFFSET(0xBFE2570)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SET_GACHAPERFORMMISC_OFFSET UNITYSDK_OFFSET(0xBFED570)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SET_NEXTITEMPROTECTTIMER_OFFSET UNITYSDK_OFFSET(0xBFED5B0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SKIPALL_OFFSET UNITYSDK_OFFSET(0xBFE4270)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBFDD0E0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLCAMEFFECTS_OFFSET UNITYSDK_OFFSET(0xBFE5AE0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLRARITYEFFECTS_OFFSET UNITYSDK_OFFSET(0xBFE5C40)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLSCREENEFFECTS_OFFSET UNITYSDK_OFFSET(0xBFE63F0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLSTAGEEFFECTS_OFFSET UNITYSDK_OFFSET(0xBFE6170)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPCAMERATL_OFFSET UNITYSDK_OFFSET(0xBFE55F0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPEFFECT_OFFSET UNITYSDK_OFFSET(0xBFEAEA0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPPARTICLESYS_OFFSET UNITYSDK_OFFSET(0xBFEA920)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPRARITYSCREENEFFECTS_OFFSET UNITYSDK_OFFSET(0xBFE62D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPTVEFFECTANIM_OFFSET UNITYSDK_OFFSET(0xBFEB120)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATENEXTITEMPROTECTTIME_OFFSET UNITYSDK_OFFSET(0xBFDF5D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATENONGACHACAMFOV_OFFSET UNITYSDK_OFFSET(0xBFDEC40)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATEROTATECAMERA_OFFSET UNITYSDK_OFFSET(0xBFDE6E0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xBFDE1C0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBFED900)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__HANDLEPLAYTEXTSHOTTIMELINE_B__66_0_OFFSET UNITYSDK_OFFSET(0xBFEDD50)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCAMERASHAKE_B__30_0_OFFSET UNITYSDK_OFFSET(0xBFEDBC0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCLOSEUPTL_B__36_0_OFFSET UNITYSDK_OFFSET(0xBFEDCB0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCLOSEUPTL_B__36_3_OFFSET UNITYSDK_OFFSET(0xBFEDCA0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCLOSEUPTL_B__36_4_OFFSET UNITYSDK_OFFSET(0xBFEDCC0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYSHOWLIGHTSTL_B__40_0_OFFSET UNITYSDK_OFFSET(0xBFEDD40)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFEDD60)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xBFEDDD0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFEDDE0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFEDDF0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFEDE00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPerformance3DModelController_TypeDefinitionIndex = 40458;

	class UIGachaPerformance3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Single* StaticGet_StartRotateCamTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIGachaPerformance3DModelController_TypeDefinitionIndex)->GetStaticField(0xC3F0);
		}
		// static const ::System::Int32 SHOW_LIGHTS_NUM = 0xC; // 0x0
		// static const ::System::Int32 TO_BIND_SHOW_LIGHTS_NUM = 0x8; // 0x0
		// static const ::System::String* OPEN_TRACK; // 0x0
		// static const ::System::String* CLOSE_TRACK; // 0x0
		// static const ::System::String* GAUSSIAN_BLUR_VOLUME_TRACK; // 0x0
		::Class_2_E3B74E53F7AC003C* _view; // 0x340
		::System::String* CamRotDuration; // 0x348
		::System::String* CAM_TRACK; // 0x350
		::System::String* IsAnimationKeyTriggered; // 0x358
		::System::String* IsFirstFewShotsOver; // 0x360
		::System::String* First3TvIntervalTimeScale; // 0x368
		::Class_1_F50B5EAC0B6702FB* _player; // 0x370
		::System::Action* _onPlayEnd; // 0x378
		::System::Collections::Generic::List_1<::System::Int32>* _itemResults; // 0x380
		::System::Boolean _skipAllFromOpenning; // 0x388
		::System::Int32 _performedPhaseCount; // 0x38C
		::System::Int32 _totalPhaseCount; // 0x390
		::MoleMole::Config::ConfigGachaPerformMisc* _gachaPerformMisc; // 0x398
		::Class_2_208CC9941471731A_894* _gachaPerformTamplate; // 0x3A0
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::MoleMole::UIGachaStage3DModelControllerBase*>* _stage3DModelCtrlers; // 0x3A8
		::MoleMole::UIGachaStage3DModelControllerBase* _curTvStageCtrler; // 0x3B0
		::MoleMole::UIGachaStage3DModelControllerBase* _lastItemStageCtrler; // 0x3B8
		::MoleMole::UIGachaStage3DModelControllerBase* _curItemStageCtrler; // 0x3C0
		::System::Boolean _camRotActive; // 0x3C8
		::System::Single _camRotOriginAngle; // 0x3CC
		::System::Single _camRotTimer; // 0x3D0
		::System::Single _camRotTimerStartOffset; // 0x3D4
		::System::Single _rarityScreenEffectTLStartOffset; // 0x3D8
		::UnityEngine::AnimationCurve* _camRotCurve; // 0x3E0
		::System::Single _camRotDuration; // 0x3E8
		::System::Single _camRotAngle; // 0x3EC
		::System::Single _triggerStageRefreshAngle; // 0x3F0
		::System::Boolean _stageRefreshTriggered; // 0x3F4
		::UnityEngine::Vector3 _camEuler; // 0x3F8
		::MoleMole::Config::ConfigHollowChessboardCamera* _camConfig; // 0x408
		::Class_2_5F64140FAB2210F3* _camClip; // 0x410
		::UnityEngine::Camera* _cam; // 0x418
		::System::Single _NextItemProtectTimer_k__BackingField; // 0x420
		::System::Boolean _nextItemTriggered; // 0x424
		::MoleMole::UIGachaPerformance3DModelController_GachaSkipAllType _skipAllType; // 0x428
		::System::Int32 _firstRaritySItemIndex; // 0x42C
		::System::Boolean _isPerformanceStarted; // 0x430
		::System::Boolean _nonGachaCamFovActive; // 0x431
		::System::Single _nonGachaCamFovTimer; // 0x434
		::UnityEngine::AnimationCurve* _nonGachaCamFovCurve; // 0x438
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _loadedTimelines; // 0x440
		::UnityEngine::Playables::PlayableDirector* _curCloseupDirector; // 0x448
		::MoleMole::UIGachaPerformance3DModelController_CameraInfo _camInfoBeforeTimeline; // 0x450
		::System::Boolean _camInfoBeforeTimelineCached; // 0x478
		::Il2CppArray<::UnityEngine::GameObject*>* _showLights; // 0x480
		::Il2CppArray<::UnityEngine::GameObject*>* _toBindShowLights; // 0x488
		::Il2CppArray<::UnityEngine::Color>* _showLightsColorCache; // 0x490
		::UnityEngine::Playables::PlayableDirector* _curShowLightsDirector; // 0x498
		::UnityEngine::Playables::PlayableDirector* _curSceneLightsDirector; // 0x4A0
		::System::Int32 _allow2NextPerformedCount; // 0x4A8
		::Foundation::Coroutine::CoroutineHandle _setShowLightsColorHandle; // 0x4AC
		::UnityEngine::Rendering::Universal::GaussianBlur* _gaussianBlurComp; // 0x4B0
		::MoleMole::UIGachaPerformance3DModelController_CharacterColorCorrectionParams* _CharacterColorCorrectionParamsCache; // 0x4B8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _loadedEffects; // 0x4C0
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::UnityEngine::GameObject*>* _loadedSceneLightsTLs; // 0x4C8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*>* _effEffectSimulatorMgrs; // 0x4D0
		::MoleMole::UIGachaPerformance3DModelController_GachaStageType _curStageType; // 0x4D8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Light*, ::System::Boolean>* _cachedDirectionalLightEnabled; // 0x4E0
		::Class_1_8289F2785D9AA990* _camShakeDelayTimer; // 0x4E8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::String*>* _rarityTrackGroupNames; // 0x4F0
		::UnityEngine::Playables::PlayableDirector* _curTextShotDirector; // 0x4F8
		::UnityEngine::Playables::PlayableDirector* _speedCamera03Director; // 0x500
		::UnityEngine::Playables::PlayableDirector* _screenEffDirector; // 0x508
		::System::Collections::Generic::HashSet_1<::System::String*>* _playedCamEffects; // 0x510
		::System::Collections::Generic::HashSet_1<::System::String*>* _playedStageEffects; // 0x518

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PlayStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGE_OFFSET))(this);
		}

		::System::Int32 get_PerformedCountOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_PERFORMEDCOUNTOFFSET_OFFSET))(this);
		}

		::System::Void UpdateRotateCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATEROTATECAMERA_OFFSET))(this);
		}

		::System::Void UpdateNextItemProtectTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATENEXTITEMPROTECTTIME_OFFSET))(this);
		}

		::System::Boolean IsSingleGacha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ISSINGLEGACHA_OFFSET))(this);
		}

		::System::Void UpdateNonGachaCamFov()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATENONGACHACAMFOV_OFFSET))(this);
		}

		::System::Void DisactiveAllShowLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DISACTIVEALLSHOWLIGHTS_OFFSET))(this);
		}

		::System::Void SetShowLightsColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETSHOWLIGHTSCOLOR_OFFSET))(this);
		}

		::System::Void SetRareSoundScopeValue(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETRARESOUNDSCOPEVALUE_OFFSET))(this, itemID);
		}

		::System::Single GetGaussianBlurTilling()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GETGAUSSIANBLURTILLING_OFFSET))(this);
		}

		::System::Void OnTimeScaleChanged(::System::Single timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONTIMESCALECHANGED_OFFSET))(this, timeScale);
		}

		::System::Void OnCamShakeDelayTimeUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONCAMSHAKEDELAYTIMEUP_OFFSET))(this);
		}

		::System::Void RevertCamInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_REVERTCAMINFO_OFFSET))(this);
		}

		::System::Void StartPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STARTPERFORMANCE_OFFSET))(this);
		}

		::System::Void PlayStageTexSheetByBlackboard(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* startTexSheetBlackboard, ::System::Boolean isStartTexSheetVideo, ::System::String* loopTexSheetBlackboard, ::System::Boolean isLoopTexSheetVideo, ::System::String* endTexSheetBlackboard, ::System::Boolean isEndTexSheetVideo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGETEXSHEETBYBLACKBOARD_OFFSET))(this, stageType, tvIndex, startTexSheetBlackboard, isStartTexSheetVideo, loopTexSheetBlackboard, isLoopTexSheetVideo, endTexSheetBlackboard, isEndTexSheetVideo);
		}

		::System::Void PlayStageTexSheet(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* startTexSheet, ::System::Boolean isStartTexSheetVideo, ::System::String* loopTexSheet, ::System::Boolean isLoopTexSheetVideo, ::System::String* endTexSheet, ::System::Boolean isEndTexSheetVideo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGETEXSHEET_OFFSET))(this, stageType, tvIndex, startTexSheet, isStartTexSheetVideo, loopTexSheet, isLoopTexSheetVideo, endTexSheet, isEndTexSheetVideo);
		}

		::System::Void RotateCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ROTATECAMERA_OFFSET))(this);
		}

		::System::Void PlayCameraShake(::System::String* camShakeKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCAMERASHAKE_OFFSET))(this, camShakeKey);
		}

		::System::Void RotateWeapon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ROTATEWEAPON_OFFSET))(this);
		}

		::System::Void AllowToNextItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ALLOWTONEXTITEM_OFFSET))(this);
		}

		::System::Void SkipAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SKIPALL_OFFSET))(this);
		}

		::System::Void StopAllScreenEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLSCREENEFFECTS_OFFSET))(this);
		}

		::System::Void PlayNonGachaCamFov()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYNONGACHACAMFOV_OFFSET))(this);
		}

		::System::Void PlayCloseupTL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCLOSEUPTL_OFFSET))(this);
		}

		::System::Void DoPlayCloseupTL(::System::String* tlName, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* tlStopCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DOPLAYCLOSEUPTL_OFFSET))(this, tlName, tlStopCallback);
		}

		::System::Void StopCameraTL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPCAMERATL_OFFSET))(this);
		}

		::System::Void PlayCharacterLightsTL(::System::Boolean isOpen, ::System::Single startOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCHARACTERLIGHTSTL_OFFSET))(this, isOpen, startOffset);
		}

		::System::Void PlayShowLightsTL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSHOWLIGHTSTL_OFFSET))(this);
		}

		::System::Void PlaySceneLightsTL(::System::Boolean isOpen, ::System::Single startOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSCENELIGHTSTL_OFFSET))(this, isOpen, startOffset);
		}

		::System::Void PlayTvSceneLightsTL(::System::Boolean isOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYTVSCENELIGHTSTL_OFFSET))(this, isOpen);
		}

		::System::Void QuickPlayOpenningTv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_QUICKPLAYOPENNINGTV_OFFSET))(this);
		}

		::System::Void FireTvEffect(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRETVEFFECT_OFFSET))(this, stageType, tvIndex, effectPattern);
		}

		::System::Void FireStageEffect(::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRESTAGEEFFECT_OFFSET))(this, effectPattern);
		}

		::System::Void FireCameraEffect(::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRECAMERAEFFECT_OFFSET))(this, effectPattern);
		}

		::System::Void DoFireEffect(::System::String* effectPattern, ::UnityEngine::Transform* parent, ::System::Boolean forceReactive)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DOFIREEFFECT_OFFSET))(this, effectPattern, parent, forceReactive);
		}

		::System::Void StopParticleSys(::UnityEngine::GameObject* targetEff)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPPARTICLESYS_OFFSET))(this, targetEff);
		}

		::System::Void PlayParticleSys(::UnityEngine::GameObject* targetEff)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYPARTICLESYS_OFFSET))(this, targetEff);
		}

		::System::Void FadeoutEffect(::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FADEOUTEFFECT_OFFSET))(this, effectPattern);
		}

		::System::Void StopEffect(::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPEFFECT_OFFSET))(this, effectPattern);
		}

		::System::Void StopAllCamEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLCAMEFFECTS_OFFSET))(this);
		}

		::System::Void StopAllRarityEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLRARITYEFFECTS_OFFSET))(this);
		}

		::System::Void StopAllStageEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPALLSTAGEEFFECTS_OFFSET))(this);
		}

		::System::Void StopRarityScreenEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPRARITYSCREENEFFECTS_OFFSET))(this);
		}

		::System::Void PlayTvEffectAnim(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* animClipName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYTVEFFECTANIM_OFFSET))(this, stageType, tvIndex, animClipName);
		}

		::System::Void StopTvEffectAnim(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* animClipName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPTVEFFECTANIM_OFFSET))(this, stageType, tvIndex, animClipName);
		}

		::System::Void HandleTvRaritySPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLETVRARITYSPERFORM_OFFSET))(this);
		}

		::System::Void HandleItemStageRarityPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEITEMSTAGERARITYPERFORM_OFFSET))(this);
		}

		::System::Void HandleItemStageRaritySPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEITEMSTAGERARITYSPERFORM_OFFSET))(this);
		}

		::System::Void HandleResetGaussianBlurParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLERESETGAUSSIANBLURPARAMS_OFFSET))(this);
		}

		::System::Void OnScreenEffectEnd(::MoleMole::Config::ScreenEffectType screenEffType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONSCREENEFFECTEND_OFFSET))(this, screenEffType);
		}

		::System::Void PlayItemShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYITEMSHAKE_OFFSET))(this);
		}

		::System::Void SetTvMatProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETTVMATPROPERTY_OFFSET))(this);
		}

		::System::Void PlayStageRotateScreenEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGEROTATESCREENEFFECTS_OFFSET))(this);
		}

		::System::Void HandlePlayTextShotTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEPLAYTEXTSHOTTIMELINE_OFFSET))(this);
		}

		::System::String* get_END_BLUEPRINT_NAME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_END_BLUEPRINT_NAME_OFFSET))(this);
		}

		::System::Int32 get_PerformedPhaseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_PERFORMEDPHASECOUNT_OFFSET))(this);
		}

		::MoleMole::Config::ConfigGachaPerformMisc* get_gachaPerformMisc()
		{
			return ((::MoleMole::Config::ConfigGachaPerformMisc*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_GACHAPERFORMMISC_OFFSET))(this);
		}

		::System::Void set_gachaPerformMisc(::MoleMole::Config::ConfigGachaPerformMisc* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformMisc*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SET_GACHAPERFORMMISC_OFFSET))(this, value);
		}

		::MoleMole::UIGachaStage3DModelControllerBase* get_CurItemStageCtrler()
		{
			return ((::MoleMole::UIGachaStage3DModelControllerBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CURITEMSTAGECTRLER_OFFSET))(this);
		}

		::System::Boolean get_camRotActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CAMROTACTIVE_OFFSET))(this);
		}

		::System::Void set_camRotActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SET_CAMROTACTIVE_OFFSET))(this, value);
		}

		::System::Single get_NextItemProtectTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_NEXTITEMPROTECTTIMER_OFFSET))(this);
		}

		::System::Void set_NextItemProtectTimer(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SET_NEXTITEMPROTECTTIMER_OFFSET))(this, value);
		}

		::System::Boolean get_isNonGacha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISNONGACHA_OFFSET))(this);
		}

		::System::Boolean get_AnimaCheckMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ANIMACHECKMODE_OFFSET))(this);
		}

		::System::Single get_curTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CURTIMESCALE_OFFSET))(this);
		}

		::System::Boolean get_IsMuteSpeedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISMUTESPEEDUP_OFFSET))(this);
		}

		::System::Boolean get_IsEndingPerforming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISENDINGPERFORMING_OFFSET))(this);
		}

		::System::Boolean get_IsFirstItemPerforming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISFIRSTITEMPERFORMING_OFFSET))(this);
		}

		::System::Boolean get_IsLastItemPerforming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISLASTITEMPERFORMING_OFFSET))(this);
		}

		::UnityEngine::Transform* get_CameraTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CAMERATRANSFORM_OFFSET))(this);
		}

		::System::Void _PlayCameraShake_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCAMERASHAKE_B__30_0_OFFSET))(this);
		}

		::System::Void _PlayCloseupTL_b__36_3(::UnityEngine::Playables::PlayableDirector* director3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCLOSEUPTL_B__36_3_OFFSET))(this, director3);
		}

		::System::Void _PlayCloseupTL_b__36_0(::UnityEngine::Playables::PlayableDirector* director)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCLOSEUPTL_B__36_0_OFFSET))(this, director);
		}

		::System::Void _PlayCloseupTL_b__36_4(::UnityEngine::Playables::PlayableDirector* director)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYCLOSEUPTL_B__36_4_OFFSET))(this, director);
		}

		::System::Void _PlayShowLightsTL_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__PLAYSHOWLIGHTSTL_B__40_0_OFFSET))(this);
		}

		::System::Void _HandlePlayTextShotTimeline_b__66_0(::UnityEngine::Playables::PlayableDirector* director)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__HANDLEPLAYTEXTSHOTTIMELINE_B__66_0_OFFSET))(this, director);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
