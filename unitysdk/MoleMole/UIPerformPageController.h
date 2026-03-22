#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205E43D40B9E7AEA.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_EEB6F2355690A1CC.h"
#include "unitysdk/Enum_3_F4705266FB2007C7.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_43BD383C98B4C0C5_68;
class Class_2_5647A056215EFB9A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UIMainStoryChapter3DModelController; }
namespace MoleMole { class UIVideoWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIPERFORMPAGECONTROLLER_CACHEGROUPSALPHA_OFFSET UNITYSDK_OFFSET(0xA84C080)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_DOSKIP_OFFSET UNITYSDK_OFFSET(0xA84FE10)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xA84F680)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xA84BE10)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_ISALLOWINPUTPASS_OFFSET UNITYSDK_OFFSET(0xA84BEC0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0xA84BE20)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0xA84BE30)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0xA852A20)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_PERFORMTYPE_OFFSET UNITYSDK_OFFSET(0xA84C3F0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0xA84BE40)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA84BE00)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_INITSKIPBTNSETTING_OFFSET UNITYSDK_OFFSET(0xA84D620)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ISALLOWINPUTPASSBYACTION_OFFSET UNITYSDK_OFFSET(0xA84BED0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0xA850090)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONCLOSEPERFORMPAGEFROMOUTSIDE_OFFSET UNITYSDK_OFFSET(0xA8521C0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA84BF70)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONPLAYCGEND_OFFSET UNITYSDK_OFFSET(0xA851460)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONREALSTARTPERFORM_OFFSET UNITYSDK_OFFSET(0xA850CC0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA84C410)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSKIPBTNLONGPRESSTRIGGER_OFFSET UNITYSDK_OFFSET(0xA84FD30)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSKIPBTNLONGPRESSUP_OFFSET UNITYSDK_OFFSET(0xA84FDA0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSKIP_OFFSET UNITYSDK_OFFSET(0xA850F10)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA84E9B0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA84C010)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA84F6F0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYCAMERASHOT_OFFSET UNITYSDK_OFFSET(0xA84DAC0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYCHAPTERTIMELINE_OFFSET UNITYSDK_OFFSET(0xA84E400)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0xA852500)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0xA852770)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYTIMELINECUTSCENE_OFFSET UNITYSDK_OFFSET(0xA84E5D0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xA84DD90)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_POSTRELEASEUI_OFFSET UNITYSDK_OFFSET(0xA84F4D0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PRESTARTPERFORM_OFFSET UNITYSDK_OFFSET(0xA850450)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_RESETGROUPSALPHA_OFFSET UNITYSDK_OFFSET(0xA84FB40)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SENDENDCOMMTOSERVER_OFFSET UNITYSDK_OFFSET(0xA852010)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SENDSTARTCOMMTOSERVER_OFFSET UNITYSDK_OFFSET(0xA84E810)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SETFULLSCREENCONNECTCUTSCENE_OFFSET UNITYSDK_OFFSET(0xA8522D0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SETONSKIPACTION_OFFSET UNITYSDK_OFFSET(0xA852260)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SETPRESSSKIPBTNTIME_OFFSET UNITYSDK_OFFSET(0xA84FA90)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SETVIDEOACTIVE_OFFSET UNITYSDK_OFFSET(0xA850270)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0xA852A30)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SET_PERFORMTYPE_OFFSET UNITYSDK_OFFSET(0xA84C400)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SHOWSKIP_OFFSET UNITYSDK_OFFSET(0xA850390)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SKIPFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0xA8526B0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_STOPPERFORM_OFFSET UNITYSDK_OFFSET(0xA84EC60)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_TRYCLOSEPOPTIP_OFFSET UNITYSDK_OFFSET(0xA84F1D0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_TRYTRIGGERPLOTPLAYPERFORMJUMP_OFFSET UNITYSDK_OFFSET(0xA8512C0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_UPDATELONGPRESSSKIP_OFFSET UNITYSDK_OFFSET(0xA84F860)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA84F7F0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__CACHECLEAN_OFFSET UNITYSDK_OFFSET(0xA84F540)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA852AD0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA852A40)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__ONREALSTARTPERFORM_B__39_0_OFFSET UNITYSDK_OFFSET(0xA852CE0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__ONREALSTARTPERFORM_B__39_1_OFFSET UNITYSDK_OFFSET(0xA852D20)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__ONSKIP_B__42_0_OFFSET UNITYSDK_OFFSET(0xA852D30)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__ONUIOPEN_B__25_0_OFFSET UNITYSDK_OFFSET(0xA852B10)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYCHAPTERTIMELINE_B__36_0_OFFSET UNITYSDK_OFFSET(0xA852B20)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYFADEINANIMATION_B__51_0_OFFSET UNITYSDK_OFFSET(0xA852D70)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYTIMELINECUTSCENE_B__37_0_OFFSET UNITYSDK_OFFSET(0xA852B30)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYTIMELINECUTSCENE_B__37_1_OFFSET UNITYSDK_OFFSET(0xA852B40)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYVIDEO_B__38_0_OFFSET UNITYSDK_OFFSET(0xA852BF0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYVIDEO_B__38_1_OFFSET UNITYSDK_OFFSET(0xA852C20)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__SENDSTARTCOMMTOSERVER_B__97_0_OFFSET UNITYSDK_OFFSET(0xA852DA0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0xA852DB0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ISALLOWINPUTPASSBYACTION_OFFSET UNITYSDK_OFFSET(0xA852DC0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA852E50)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA852EC0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA852ED0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA852EE0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA852EF0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_POSTRELEASEUI_OFFSET UNITYSDK_OFFSET(0xA852F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageController_TypeDefinitionIndex = 63753;

	class UIPerformPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::String** StaticGet_FullScreenVideoBlackMaskFadeInLongVersion()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIPerformPageController_TypeDefinitionIndex)->GetStaticField(0x427E0);
		}
		// static const ::System::String* FullScreenVideoFadeIn; // 0x0
		// static const ::System::String* FullScreenVideoFadeOut; // 0x0
		// static const ::System::String* GeneralBlackMaskFadeIn; // 0x0
		// static const ::System::String* GeneralBlackMaskFadeOut; // 0x0
		// static const ::System::String* FullScreenVideoBlackMaskFadeIn; // 0x0
		// static const ::System::String* FullScreenVideoBlackMaskFadeOut; // 0x0
		// static const ::System::String* FullScreenVideoSpecialFadeIn; // 0x0
		// static const ::System::String* FullScreenVideoSpecialFadeOut; // 0x0
		// static const ::System::String* FullScreenVideo1SFadeOut; // 0x0
		::MoleMole::UIMainStoryChapter3DModelController* _chapter3DModelController; // 0x2F8
		::Enum_3_EEB6F2355690A1CC _PerformType_k__BackingField; // 0x300
		::MoleMole::UIVideoWidgetController* _videoWidgetController; // 0x308
		::Class_2_5647A056215EFB9A* _view; // 0x310
		::System::Int32 curPerformID; // 0x318
		::System::Int64 curPerformUID; // 0x320
		::System::Int32 plotPlayType; // 0x328
		::System::Boolean _isPlayEnd; // 0x32C
		::System::Single _showSkipTime; // 0x330
		::System::Boolean isInitUrl; // 0x334
		::System::String* fadeInAnimation; // 0x338
		::System::String* fadeOutAnimation; // 0x340
		::System::Boolean _NeedCache_k__BackingField; // 0x348
		::System::Boolean _connectCutScene; // 0x349
		::Class_1_43BD383C98B4C0C5_68* param; // 0x350
		::MoleMole::UIGeneralTipsPopWindowController* popTipCtr; // 0x358
		::System::Boolean _isIgnoreInput; // 0x360
		::System::Boolean _isAllowInputPass; // 0x361
		::Enum_3_F4705266FB2007C7 _cursorHideState; // 0x364
		::System::Action* _onSkip; // 0x368
		::System::Boolean _isLongPressingMenuBtn; // 0x370
		::System::Boolean _clickFromLongPress; // 0x371
		::System::Single _pressedTime; // 0x374
		::System::Single TOTAL_FILL_TIME; // 0x378
		::System::Boolean _skipBtnAllowClick; // 0x37C
		::System::Boolean _isFakeSeamlessMode; // 0x37D
		::Il2CppArray<::UnityEngine::CanvasGroup*>* _groups; // 0x380
		::Il2CppArray<::System::Single>* _groupsAlpha; // 0x388
		::UnityEngine::Vector2 _topFramePos; // 0x390
		::UnityEngine::Vector2 _bottomFramePos; // 0x398
		::UnityEngine::Vector2 _skipBtnPos; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::Enum_3_205E43D40B9E7AEA get_MessageMatchPage()
		{
			return ((::Enum_3_205E43D40B9E7AEA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::Enum_3_F4705266FB2007C7 get_UICursorHideState()
		{
			return ((::Enum_3_F4705266FB2007C7(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Boolean get_IsAllowInputPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_ISALLOWINPUTPASS_OFFSET))(this);
		}

		::System::Boolean IsAllowInputPassByAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ISALLOWINPUTPASSBYACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::Enum_3_EEB6F2355690A1CC get_PerformType()
		{
			return ((::Enum_3_EEB6F2355690A1CC(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_PERFORMTYPE_OFFSET))(this);
		}

		::System::Void set_PerformType(::Enum_3_EEB6F2355690A1CC value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EEB6F2355690A1CC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SET_PERFORMTYPE_OFFSET))(this, value);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showContextBase)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSHOW_OFFSET))(this, showContextBase);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void PostReleaseUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_POSTRELEASEUI_OFFSET))(this);
		}

		::System::Void TryClosePopTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_TRYCLOSEPOPTIP_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_68* GetContext()
		{
			return ((::Class_1_43BD383C98B4C0C5_68*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GETCONTEXT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void InitSkipBtnSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_INITSKIPBTNSETTING_OFFSET))(this);
		}

		::System::Void CacheGroupsAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_CACHEGROUPSALPHA_OFFSET))(this);
		}

		::System::Void ResetGroupsAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_RESETGROUPSALPHA_OFFSET))(this);
		}

		::System::Void OnSkipBtnLongPressTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSKIPBTNLONGPRESSTRIGGER_OFFSET))(this);
		}

		::System::Void OnSkipBtnLongPressUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSKIPBTNLONGPRESSUP_OFFSET))(this);
		}

		::System::Void UpdateLongPressSkip(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_UPDATELONGPRESSSKIP_OFFSET))(this, deltaTime);
		}

		::System::Void OnApplicationFocus(::System::Boolean hasFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, hasFocus);
		}

		::System::Double SetPressSkipBtnTime(::System::Single time)
		{
			return ((::System::Double(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SETPRESSSKIPBTNTIME_OFFSET))(this, time);
		}

		::System::Void PlayCameraShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYCAMERASHOT_OFFSET))(this);
		}

		::System::Void PlayChapterTimeLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYCHAPTERTIMELINE_OFFSET))(this);
		}

		::System::Void PlayTimelineCutScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYTIMELINECUTSCENE_OFFSET))(this);
		}

		::System::Void PlayVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYVIDEO_OFFSET))(this);
		}

		::System::Void OnRealStartPerform(::UnityEngine::Transform* rootTrans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONREALSTARTPERFORM_OFFSET))(this, rootTrans);
		}

		::System::Void PreStartPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PRESTARTPERFORM_OFFSET))(this);
		}

		::System::Void ShowSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SHOWSKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSKIP_OFFSET))(this);
		}

		::System::Void DoSkip(::System::Boolean ignorePerformJump)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_DOSKIP_OFFSET))(this, ignorePerformJump);
		}

		::System::Void TryTriggerPlotPlayPerformJump(::System::Boolean ignorePerformJump)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_TRYTRIGGERPLOTPLAYPERFORMJUMP_OFFSET))(this, ignorePerformJump);
		}

		::System::Void StopPerform(::Enum_3_EEB6F2355690A1CC performType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EEB6F2355690A1CC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_STOPPERFORM_OFFSET))(this, performType);
		}

		::System::Void OnPlayCGEnd(::Enum_3_EEB6F2355690A1CC performType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EEB6F2355690A1CC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONPLAYCGEND_OFFSET))(this, performType);
		}

		::System::Void OnClosePerformPageFromOutside(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONCLOSEPERFORMPAGEFROMOUTSIDE_OFFSET))(this, args);
		}

		::System::Void SetOnSkipAction(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SETONSKIPACTION_OFFSET))(this, action);
		}

		::System::Void SetFullScreenConnectCutScene(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SETFULLSCREENCONNECTCUTSCENE_OFFSET))(this, callback);
		}

		::System::Void SetVideoActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SETVIDEOACTIVE_OFFSET))(this, active);
		}

		::System::Single PlayFadeInAnimation(::System::Boolean blackMask)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYFADEINANIMATION_OFFSET))(this, blackMask);
		}

		::System::Void SkipFadeInAnimation(::System::Boolean blackMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SKIPFADEINANIMATION_OFFSET))(this, blackMask);
		}

		::System::Single PlayFadeOutAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYFADEOUTANIMATION_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::System::Void _CacheClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__CACHECLEAN_OFFSET))(this);
		}

		::System::Void SendStartCommToServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SENDSTARTCOMMTOSERVER_OFFSET))(this);
		}

		::System::Void SendEndCommToServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SENDENDCOMMTOSERVER_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__25_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__ONUIOPEN_B__25_0_OFFSET))(this, _);
		}

		::System::Void _PlayChapterTimeLine_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYCHAPTERTIMELINE_B__36_0_OFFSET))(this);
		}

		::System::Void _PlayTimelineCutScene_b__37_0(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYTIMELINECUTSCENE_B__37_0_OFFSET))(this, trans);
		}

		::System::Void _PlayTimelineCutScene_b__37_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYTIMELINECUTSCENE_B__37_1_OFFSET))(this);
		}

		::System::Void _PlayVideo_b__38_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYVIDEO_B__38_0_OFFSET))(this);
		}

		::System::Void _PlayVideo_b__38_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYVIDEO_B__38_1_OFFSET))(this);
		}

		::System::Void _OnRealStartPerform_b__39_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__ONREALSTARTPERFORM_B__39_0_OFFSET))(this);
		}

		::System::Void _OnRealStartPerform_b__39_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__ONREALSTARTPERFORM_B__39_1_OFFSET))(this);
		}

		::System::Void _OnSkip_b__42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__ONSKIP_B__42_0_OFFSET))(this);
		}

		::System::Void _PlayFadeInAnimation_b__51_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYFADEINANIMATION_B__51_0_OFFSET))(this);
		}

		::System::Void _SendStartCommToServer_b__97_0(::System::Int64 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__SENDSTARTCOMMTOSERVER_B__97_0_OFFSET))(this, uid);
		}

		::Enum_3_F4705266FB2007C7 __base_get_UICursorHideState()
		{
			return ((::Enum_3_F4705266FB2007C7(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Boolean __base_IsAllowInputPassByAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ISALLOWINPUTPASSBYACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_PostReleaseUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_POSTRELEASEUI_OFFSET))(this);
		}
	};
}
