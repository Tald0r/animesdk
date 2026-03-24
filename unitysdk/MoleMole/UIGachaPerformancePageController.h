#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_30409CAE069D6997.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_687;
class Class_2_E5A1C01D15FD772B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaPerformance3DModelController; }
namespace MoleMole::Config { class ConfigGachaPerformMisc; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0xA97AC20)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_CURTIMESCALE_OFFSET UNITYSDK_OFFSET(0xA97E380)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_GACHATYPE_OFFSET UNITYSDK_OFFSET(0xA97E320)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xA97D000)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ISMUTESPEEDUP_OFFSET UNITYSDK_OFFSET(0xA97CBD0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ISNEXTITEMBTNPOINTDOWN_OFFSET UNITYSDK_OFFSET(0xA97E3A0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ITEMNAMETEXTANIM_OFFSET UNITYSDK_OFFSET(0xA97E360)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ITEMNAMETEXT_OFFSET UNITYSDK_OFFSET(0xA97E340)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_SPEEDUPTIMER_OFFSET UNITYSDK_OFFSET(0xA97E390)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA97A5B0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_HANDLECMDWITHOUTPARAMS_OFFSET UNITYSDK_OFFSET(0xA97D690)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA97AA10)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA97BC80)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONNEXTITEMBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA97CDA0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONNEXTITEMBTNPOINTDOWN_OFFSET UNITYSDK_OFFSET(0xA97D390)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONNEXTITEMBTNPOINTUP_OFFSET UNITYSDK_OFFSET(0xA97D510)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA97A5C0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONSKIPALLBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA97D010)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA97B610)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA97B920)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA97AAB0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_PLAYNONGACHAFADEIN_OFFSET UNITYSDK_OFFSET(0xA97D620)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SETSKIPALLBTN_OFFSET UNITYSDK_OFFSET(0xA97D580)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xA97B880)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_CURTIMESCALE_OFFSET UNITYSDK_OFFSET(0xA97AFB0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_GACHATYPE_OFFSET UNITYSDK_OFFSET(0xA97E330)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_ISNEXTITEMBTNPOINTDOWN_OFFSET UNITYSDK_OFFSET(0xA97D400)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_SPEEDUPTIMER_OFFSET UNITYSDK_OFFSET(0xA97CCE0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UNBIND_OFFSET UNITYSDK_OFFSET(0xA97B9D0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UPDATEBLACKCURTAIN_OFFSET UNITYSDK_OFFSET(0xA97C6F0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UPDATENEXTITEMBTNPOINTDOWN_OFFSET UNITYSDK_OFFSET(0xA97C920)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA97C120)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA97E460)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA97E3B0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA97E4A0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA97E510)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA97E540)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA97E550)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA97E560)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA97E570)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xA97E580)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPerformancePageController_TypeDefinitionIndex = 48700;

	class UIGachaPerformancePageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Single* StaticGet_NON_GAHCA_BLACK_CURTAIN_KEEP_DURATION()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIGachaPerformancePageController_TypeDefinitionIndex)->GetStaticField(0xEF70);
		}
		::Class_2_E5A1C01D15FD772B* _view; // 0x2F8
		::Foundation::Coroutine::CoroutineHandle _skillAllCoroutine; // 0x300
		::System::Single _nonGachaBlackCurtainKeepTimer; // 0x304
		::System::String* UITextPerformEnd; // 0x308
		::MoleMole::UIGachaPerformance3DModelController* _gachaPerformance3DModelController; // 0x310
		::System::Collections::Generic::List_1<::System::Int32>* ItemResults; // 0x318
		::System::Action* OnPlayEnd; // 0x320
		::System::Boolean IsNonGacha; // 0x328
		::System::Boolean SkipOpenning; // 0x329
		::System::Boolean AnimaCheckMode; // 0x32A
		::Enum_3_30409CAE069D6997 _GachaType_k__BackingField; // 0x32C
		::MoleMole::Config::ConfigGachaPerformMisc* GachaPerformMisc; // 0x330
		::Class_2_208CC9941471731A_687* GachaPerformTamplate; // 0x338
		::System::Boolean _skipAllBlackCurtainActive; // 0x340
		::System::Single _skipAllBlackCurtainTimer; // 0x344
		::UnityEngine::AnimationCurve* _skipAllBlackCurtainCurve; // 0x348
		::System::Single _nonGachaFadeOutBlackCurtainTimer; // 0x350
		::System::Boolean _nonGachaFadeInBlackCurtainActive; // 0x354
		::System::Single _nonGachaFadeInBlackCurtainTimer; // 0x358
		::UnityEngine::AnimationCurve* _nonGachaFadeInBlackCurtainCurve; // 0x360
		::System::Boolean _init; // 0x368
		::System::Action_1<::System::Single>* OnTimeScaleChanged; // 0x370
		::System::Single _curTimeScale; // 0x378
		::System::Single _speedUpTimer; // 0x37C
		::System::Boolean _isNextItemBtnPointDown; // 0x380
		::UnityEngine::AnimationCurve* _speedUpCurve; // 0x388
		::System::Boolean IsAnimatorSpeedCtrled; // 0x390
		::System::Action* _onUIClose; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateBlackCurtain(::System::Boolean& activeTag, ::UnityEngine::AnimationCurve* blackCurtainCurve, ::System::Single duration, ::System::Single& timer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UPDATEBLACKCURTAIN_OFFSET))(this, activeTag, blackCurtainCurve, duration, timer);
		}

		::System::Void UpdateNextItemBtnPointDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UPDATENEXTITEMBTNPOINTDOWN_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void OnNextItemBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONNEXTITEMBTNCLICK_OFFSET))(this);
		}

		::System::Void OnSkipAllBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONSKIPALLBTNCLICK_OFFSET))(this);
		}

		::System::Void OnNextItemBtnPointDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONNEXTITEMBTNPOINTDOWN_OFFSET))(this);
		}

		::System::Void OnNextItemBtnPointUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONNEXTITEMBTNPOINTUP_OFFSET))(this);
		}

		::System::Void Unbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UNBIND_OFFSET))(this);
		}

		::System::Void SetSkipAllBtn(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SETSKIPALLBTN_OFFSET))(this, isActive);
		}

		::System::Void PlayNonGachaFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_PLAYNONGACHAFADEIN_OFFSET))(this);
		}

		::System::Void HandleCmdWithoutParams(::MoleMole::Config::ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType cmdType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_HANDLECMDWITHOUTPARAMS_OFFSET))(this, cmdType);
		}

		::Enum_3_30409CAE069D6997 get_GachaType()
		{
			return ((::Enum_3_30409CAE069D6997(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_GACHATYPE_OFFSET))(this);
		}

		::System::Void set_GachaType(::Enum_3_30409CAE069D6997 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_30409CAE069D6997))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_GACHATYPE_OFFSET))(this, value);
		}

		::UnityEngine::UI::Extension::UILocalizationText* get_ItemNameText()
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ITEMNAMETEXT_OFFSET))(this);
		}

		::UnityEngine::Animation* get_ItemNameTextAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ITEMNAMETEXTANIM_OFFSET))(this);
		}

		::System::Single get_CurTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_CURTIMESCALE_OFFSET))(this);
		}

		::System::Void set_CurTimeScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_CURTIMESCALE_OFFSET))(this, value);
		}

		::System::Single get_speedUpTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_SPEEDUPTIMER_OFFSET))(this);
		}

		::System::Void set_speedUpTimer(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_SPEEDUPTIMER_OFFSET))(this, value);
		}

		::System::Boolean get_isNextItemBtnPointDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ISNEXTITEMBTNPOINTDOWN_OFFSET))(this);
		}

		::System::Void set_isNextItemBtnPointDown(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_ISNEXTITEMBTNPOINTDOWN_OFFSET))(this, value);
		}

		::System::Boolean get_isMuteSpeedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ISMUTESPEEDUP_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
