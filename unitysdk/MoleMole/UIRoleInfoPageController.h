#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIRoleInfoPageController_LeftLogic.h"
#include "unitysdk/MoleMole/UIRoleInfoPageController_RightLogic.h"
#include "unitysdk/MoleMole/UIRoleInfoPageController_UIRoleInfo_SubType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_2CCC5D7984CDCED4;
class Class_2_11B3F578B206B5B7;
class Class_2_C2B4B123B5A9B78A;
class Class_2_D89CCC627A66D0AD;
class UIControllerExtensionData;
namespace MoleMole { class MonoBPLevelAnimation; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFadeConfig; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace MoleMole { class UIMindscapeWidgetController; }
namespace MoleMole { class UIRoleChangeWidgetController; }
namespace MoleMole { class UIRoleInfoDataContext; }
namespace MoleMole { class UIRoleInfoPageContext; }
namespace MoleMole { class UIRoleInfoPageController_AnimationFadeOutFadeInGroup; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_AUTOCLICKBASICBTN_OFFSET UNITYSDK_OFFSET(0xAACA1E0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_AUTOCLICKEQUIPBTN_OFFSET UNITYSDK_OFFSET(0xAACA270)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_AUTOCLICKSKILLBTN_OFFSET UNITYSDK_OFFSET(0xAACA300)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_CLOSESUBTYPE_OFFSET UNITYSDK_OFFSET(0xAAD1220)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_FINISHCURRENTNEWBIEHANDLE_OFFSET UNITYSDK_OFFSET(0xAACF440)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETAWAKENLEVELPICPATH_OFFSET UNITYSDK_OFFSET(0xAACE800)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETFADEOUTTIMEDETAIL_OFFSET UNITYSDK_OFFSET(0xAACCF30)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETOVERRIDEFADEINANIM_OFFSET UNITYSDK_OFFSET(0xAACAE20)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBCTRLNAME_1_OFFSET UNITYSDK_OFFSET(0xAACA170)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBCTRLNAME_OFFSET UNITYSDK_OFFSET(0xAAD1A00)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBTYPECONTROL_OFFSET UNITYSDK_OFFSET(0xAAD2FE0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBTYPESHOWCONTEXT_OFFSET UNITYSDK_OFFSET(0xAACCCE0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xAAC9530)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_LASTCONTEXT_OFFSET UNITYSDK_OFFSET(0xAAC9550)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_SWITCHINTERVAL_OFFSET UNITYSDK_OFFSET(0xAACBBD0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_TABBUTTONGROUP_OFFSET UNITYSDK_OFFSET(0xAAC9540)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0xAAC94B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAAC94A0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_HIDEFORMODELCAMERAKITTOOL_OFFSET UNITYSDK_OFFSET(0xAAD2B40)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_INITANIMGROUP_OFFSET UNITYSDK_OFFSET(0xAACCB30)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xAACD7D0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ISHOLLOWGAMEROOM_OFFSET UNITYSDK_OFFSET(0xAAD29E0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ISTRAININGROOM_OFFSET UNITYSDK_OFFSET(0xAAD2880)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAAD2800)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET UNITYSDK_OFFSET(0xAACC710)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONAVATARCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0xAACAF00)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0xAAD10B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKBASICBTN_OFFSET UNITYSDK_OFFSET(0xAAD1510)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKENTERAVATARAWAKE_OFFSET UNITYSDK_OFFSET(0xAACE2A0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKEQUIPBTN_OFFSET UNITYSDK_OFFSET(0xAAD20B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKMAINBTN_OFFSET UNITYSDK_OFFSET(0xAAD1050)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKSKILLBTN_OFFSET UNITYSDK_OFFSET(0xAAD1BB0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAAC9560)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONEQUIPCHANGED_OFFSET UNITYSDK_OFFSET(0xAACEB60)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xAACCFA0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONHINTCLICKED_OFFSET UNITYSDK_OFFSET(0xAACEBD0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONINFOBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xAAD2710)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xAAD0E50)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONINTERNALPAGECHANGED_OFFSET UNITYSDK_OFFSET(0xAACEF70)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0xAACEF00)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xAAD2BE0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONLVBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xAACFE00)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONMINDSCAPECLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0xAAD03D0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONMINDSCAPECLOSEOVERHANDLE_OFFSET UNITYSDK_OFFSET(0xAAD0020)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSHOWFRIENDPREVIEWMODEHINT_OFFSET UNITYSDK_OFFSET(0xAACF330)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSHOWPREVIEWMODEHINT_OFFSET UNITYSDK_OFFSET(0xAACF220)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAAC9600)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAACFA20)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAACD510)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAACE8B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_PLAYFADEANIMDETAIL_OFFSET UNITYSDK_OFFSET(0xAACACD0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_PROCESSUIAVATAR_OFFSET UNITYSDK_OFFSET(0xAACBD20)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_RECORDEQUIPTABHINTED_OFFSET UNITYSDK_OFFSET(0xAACB910)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_REDUCEMODELBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0xAACC620)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHAWAKENLEVELINFO_OFFSET UNITYSDK_OFFSET(0xAACE320)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHMAINCITYBTN_OFFSET UNITYSDK_OFFSET(0xAAD05B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHREDPOINT_OFFSET UNITYSDK_OFFSET(0xAACC3B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHSKILLVIEW_OFFSET UNITYSDK_OFFSET(0xAAD01C0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xAACA390)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_RESETAVATARINFO_OFFSET UNITYSDK_OFFSET(0xAACBA70)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_RESETAVATARMODEL_OFFSET UNITYSDK_OFFSET(0xAACBC30)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_RESETCOUNTDOWNTIMER_OFFSET UNITYSDK_OFFSET(0xAACC4A0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SAVESUBTYPEINDEX_OFFSET UNITYSDK_OFFSET(0xAAD1B40)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETBGCOLORBYCURAVATAR_OFFSET UNITYSDK_OFFSET(0xAAD0450)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETBGLINECOLOR_OFFSET UNITYSDK_OFFSET(0xAAD07B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0xAACCDC0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETLEFTLINECOLOR_OFFSET UNITYSDK_OFFSET(0xAAD0720)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETROLEJUMPDATA_OFFSET UNITYSDK_OFFSET(0xAAD2E00)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETRTSHADOW_OFFSET UNITYSDK_OFFSET(0xAACA000)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETSELECTIONAVATAR_OFFSET UNITYSDK_OFFSET(0xAACC420)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_UPDATEINFOBTNTEXT_OFFSET UNITYSDK_OFFSET(0xAAD25A0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xAAD31D0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAAD3090)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONAVATARCHANGEHANDLE_B__44_0_OFFSET UNITYSDK_OFFSET(0xAAD3210)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONAVATARCHANGEHANDLE_B__44_1_OFFSET UNITYSDK_OFFSET(0xAAD3250)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONCLICKBACKBTN_B__97_0_OFFSET UNITYSDK_OFFSET(0xAAD35D0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONLVBTNCLICKHANDLE_B__86_0_OFFSET UNITYSDK_OFFSET(0xAAD3360)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONUIINIT_B__72_0_OFFSET UNITYSDK_OFFSET(0xAAD3260)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__PROCESSUIAVATAR_B__112_0_OFFSET UNITYSDK_OFFSET(0xAAD3810)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__SETBLOCKINPUT_B__104_0_OFFSET UNITYSDK_OFFSET(0xAAD3770)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_GETOVERRIDEFADEINANIM_OFFSET UNITYSDK_OFFSET(0xAAD3910)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_GET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0xAAD3900)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAAD3920)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xAAD3990)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xAAD39F0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xAAD3A20)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAAD3A80)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAAD3A90)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAAD3AA0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAAD3AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController_TypeDefinitionIndex = 74623;

	class UIRoleInfoPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_TAB_MAX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController_TypeDefinitionIndex)->GetStaticField(0xC5E0);
		}
		// static const ::System::Int32 LAST_STEP_NEWBIE_ID = 0x96; // 0x0
		// static const ::System::String* _fadeInAnimName; // 0x0
		// static const ::System::String* _fadeOutAnimName; // 0x0
		// static const ::System::String* _fadeInAnimNameDetail; // 0x0
		// static const ::System::String* _fadeOutAnimNameDetail; // 0x0
		// static const ::System::String* LevelPicPrefixPath; // 0x0
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType, ::MoleMole::UIBaseController*>* _roleSubType; // 0x2F8
		::Class_2_C2B4B123B5A9B78A* _roleUnit; // 0x300
		::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType _curSubType; // 0x308
		::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType _targetSubType; // 0x30C
		::Class_2_D89CCC627A66D0AD* _avatarData; // 0x310
		::System::String* _fromType; // 0x318
		::UnityEngine::UI::Extension::UITabButtonGroup* _tabButtonGroup; // 0x320
		::UnityEngine::Animation* _animation; // 0x328
		::System::Single _fadeOutTime; // 0x330
		::System::Single _fadeOutTimeDetail; // 0x334
		::System::Boolean _previewMode; // 0x338
		::System::Boolean _friendPreviewMode; // 0x339
		::System::Boolean _hideMainButton; // 0x33A
		::MoleMole::UIRoleInfoPageContext* _lastContext; // 0x340
		::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>* allItems; // 0x348
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType, ::MoleMole::UIGeneralPopUpHintWidgetController*>* _popUpHintCtrlDict; // 0x350
		::MoleMole::UIRoleChangeWidgetController* _roleChangeWidget; // 0x358
		::MoleMole::UIMindscapeWidgetController* _mindscapeWidget; // 0x360
		::System::Boolean _internalPageOpen; // 0x368
		::MoleMole::UIRoleInfoPageController_LeftLogic m_leftLogic; // 0x36C
		::MoleMole::UIRoleInfoPageController_RightLogic m_rightLogic; // 0x370
		::System::Boolean _isLoadingRTModel; // 0x374
		::System::Single m_countDownTimer; // 0x378
		::System::Boolean m_modelBlockInput; // 0x37C
		::UIControllerExtensionData* m_ctrlData; // 0x380
		::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInGroup* m_allAnimGroup; // 0x388
		::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInGroup* m_infoAnimGroup; // 0x390
		::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInGroup* m_modelAnimGroup; // 0x398
		::System::Boolean m_useNewSwitchLogic; // 0x3A0
		::System::Single m_resetAvatarDeley; // 0x3A4
		::System::Boolean m_avatarSettled; // 0x3A8
		::Foundation::Coroutine::CoroutineHandle resetAvatarHandle; // 0x3AC
		::Foundation::Coroutine::CoroutineHandle changeColorHandle; // 0x3B0
		::MoleMole::MonoBPLevelAnimation* m_colorAnim; // 0x3B8
		::System::Boolean m_hideSkillTabHint; // 0x3C0
		::Foundation::Coroutine::CoroutineHandle m_countDownCoroutine; // 0x3C4
		::Class_2_11B3F578B206B5B7* _view; // 0x3C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_TriggerNewbieOnShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButtonGroup* get_TabButtonGroup()
		{
			return ((::UnityEngine::UI::Extension::UITabButtonGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_TABBUTTONGROUP_OFFSET))(this);
		}

		::MoleMole::UIRoleInfoPageContext* get_LastContext()
		{
			return ((::MoleMole::UIRoleInfoPageContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_LASTCONTEXT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::String* GetOverrideFadeInAnim(::MoleMole::UIFadeConfig* fadeData, ::Enum_3_340DE32BA097F66C fromCtrl)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_340DE32BA097F66C))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETOVERRIDEFADEINANIM_OFFSET))(this, fadeData, fromCtrl);
		}

		::System::Void SetRtShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETRTSHADOW_OFFSET))(this);
		}

		::System::Void OnAvatarChangeHandle(::Class_1_2CCC5D7984CDCED4* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CCC5D7984CDCED4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONAVATARCHANGEHANDLE_OFFSET))(this, obj);
		}

		::System::Void SetSelectionAvatar(::Class_2_D89CCC627A66D0AD* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETSELECTIONAVATAR_OFFSET))(this, avatar);
		}

		::System::Void ResetCountDownTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_RESETCOUNTDOWNTIMER_OFFSET))(this);
		}

		::System::Void ReduceModelBlockInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_REDUCEMODELBLOCKINPUT_OFFSET))(this);
		}

		::System::Void LoadRTModelFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET))(this);
		}

		::System::Void InitAnimGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_INITANIMGROUP_OFFSET))(this);
		}

		::System::Void ResetAvatarInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_RESETAVATARINFO_OFFSET))(this);
		}

		::System::Void ResetAvatarModel(::System::Single setAvatarBlockInputLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_RESETAVATARMODEL_OFFSET))(this, setAvatarBlockInputLen);
		}

		::System::Void PlayFadeAnimDetail(::System::Boolean isfadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_PLAYFADEANIMDETAIL_OFFSET))(this, isfadeIn);
		}

		::System::Single GetFadeOutTimeDetail()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETFADEOUTTIMEDETAIL_OFFSET))(this);
		}

		::System::Void AutoClickBasicBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_AUTOCLICKBASICBTN_OFFSET))(this);
		}

		::System::Void AutoClickSkillBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_AUTOCLICKSKILLBTN_OFFSET))(this);
		}

		::System::Void AutoClickEquipBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_AUTOCLICKEQUIPBTN_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnClickEnterAvatarAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKENTERAVATARAWAKE_OFFSET))(this);
		}

		::System::Void RefreshAwakenLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHAWAKENLEVELINFO_OFFSET))(this);
		}

		::System::String* GetAwakenLevelPicPath(::System::Int32 level)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETAWAKENLEVELPICPATH_OFFSET))(this, level);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnEquipChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONEQUIPCHANGED_OFFSET))(this, args);
		}

		::System::Void OnItemChanged(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONITEMCHANGED_OFFSET))(this, eventArgs);
		}

		::System::Void OnInternalPageChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONINTERNALPAGECHANGED_OFFSET))(this, args);
		}

		::System::Void OnShowPreviewModeHint(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSHOWPREVIEWMODEHINT_OFFSET))(this, args);
		}

		::System::Void OnShowFriendPreviewModeHint(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSHOWFRIENDPREVIEWMODEHINT_OFFSET))(this, args);
		}

		::System::Void FinishCurrentNewbieHandle(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_FINISHCURRENTNEWBIEHANDLE_OFFSET))(this, args);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnLvBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONLVBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnMindscapeCloseOverHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONMINDSCAPECLOSEOVERHANDLE_OFFSET))(this);
		}

		::System::Void OnMindscapeCloseHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONMINDSCAPECLOSEHANDLE_OFFSET))(this);
		}

		::System::Void RefreshSkillView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHSKILLVIEW_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean needSetColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, needSetColor);
		}

		::System::Void SetBGColorByCurAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETBGCOLORBYCURAVATAR_OFFSET))(this);
		}

		::System::Void SetLeftLineColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETLEFTLINECOLOR_OFFSET))(this);
		}

		::System::Void SetBGLineColor(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETBGLINECOLOR_OFFSET))(this, str);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnClickMainBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKMAINBTN_OFFSET))(this);
		}

		::System::Void OnClickBackBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKBACKBTN_OFFSET))(this);
		}

		::System::Void CloseSubType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_CLOSESUBTYPE_OFFSET))(this);
		}

		::System::Void RefreshRedPoint(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHREDPOINT_OFFSET))(this, args);
		}

		::System::Void OnHintClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONHINTCLICKED_OFFSET))(this);
		}

		::System::Single get_SwitchInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_SWITCHINTERVAL_OFFSET))(this);
		}

		::System::Void SetBlockInput(::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETBLOCKINPUT_OFFSET))(this, length);
		}

		::System::Void OnClickBasicBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKBASICBTN_OFFSET))(this);
		}

		::System::Void OnClickSkillBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKSKILLBTN_OFFSET))(this);
		}

		::System::Void OnClickEquipBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKEQUIPBTN_OFFSET))(this);
		}

		::System::Void OnInfoBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONINFOBTNCLICKED_OFFSET))(this);
		}

		::System::Void UpdateInfoBtnText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_UPDATEINFOBTNTEXT_OFFSET))(this);
		}

		::System::Void RecordEquipTabHinted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_RECORDEQUIPTABHINTED_OFFSET))(this);
		}

		::System::Void ProcessUIAvatar(::Class_2_D89CCC627A66D0AD* avatarData, ::System::Int32 showTypeIndex, ::System::Boolean blockUntilLoadDone)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_PROCESSUIAVATAR_OFFSET))(this, avatarData, showTypeIndex, blockUntilLoadDone);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Boolean IsTrainingRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ISTRAININGROOM_OFFSET))(this);
		}

		::System::Boolean IsHollowGameRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ISHOLLOWGAMEROOM_OFFSET))(this);
		}

		::System::Void HideForModelCameraKitTool(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_HIDEFORMODELCAMERAKITTOOL_OFFSET))(this, isActive);
		}

		::System::Void RefreshMainCityBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHMAINCITYBTN_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::String* GetSubCtrlName(::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType subType)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBCTRLNAME_OFFSET))(this, subType);
		}

		static ::System::String* GetSubCtrlName_1(::MoleMole::UIBaseController* ctrl)
		{
			return ((::System::String*(*)(::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBCTRLNAME_1_OFFSET))(ctrl);
		}

		::MoleMole::UIRoleInfoDataContext* GetSubTypeShowContext()
		{
			return ((::MoleMole::UIRoleInfoDataContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBTYPESHOWCONTEXT_OFFSET))(this);
		}

		::System::Void SaveSubTypeIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SAVESUBTYPEINDEX_OFFSET))(this);
		}

		::System::Void SetRoleJumpData(::System::Int32 itemID, ::System::Int32 needCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETROLEJUMPDATA_OFFSET))(this, itemID, needCount);
		}

		::MoleMole::UIBaseController* GetSubTypeControl(::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType subType)
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBTYPECONTROL_OFFSET))(this, subType);
		}

		::System::Void _OnAvatarChangeHandle_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONAVATARCHANGEHANDLE_B__44_0_OFFSET))(this);
		}

		::System::Void _OnAvatarChangeHandle_b__44_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONAVATARCHANGEHANDLE_B__44_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__72_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONUIINIT_B__72_0_OFFSET))(this);
		}

		::System::Void _OnLvBtnClickHandle_b__86_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONLVBTNCLICKHANDLE_B__86_0_OFFSET))(this);
		}

		::System::Void _OnClickBackBtn_b__97_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONCLICKBACKBTN_B__97_0_OFFSET))(this);
		}

		::System::Void _SetBlockInput_b__104_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__SETBLOCKINPUT_B__104_0_OFFSET))(this);
		}

		::System::Void _ProcessUIAvatar_b__112_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__PROCESSUIAVATAR_B__112_0_OFFSET))(this);
		}

		::System::Boolean __base_get_TriggerNewbieOnShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_GET_TRIGGERNEWBIEONSHOW_OFFSET))(this);
		}

		::System::String* __base_GetOverrideFadeInAnim(::MoleMole::UIFadeConfig* P0, ::Enum_3_340DE32BA097F66C P1)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_340DE32BA097F66C))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_GETOVERRIDEFADEINANIM_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
