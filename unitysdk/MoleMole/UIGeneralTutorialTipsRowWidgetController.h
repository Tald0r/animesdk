#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_D3FBEE9DE3F34F60.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_2_78DA3B72B76F4A93;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ADDONCLOSE_OFFSET UNITYSDK_OFFSET(0xA920CE0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_CLOSETIP_OFFSET UNITYSDK_OFFSET(0xA91F440)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_CLOSEWIDGETWITHFADE_OFFSET UNITYSDK_OFFSET(0xA91F5C0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_DOANIMATION_OFFSET UNITYSDK_OFFSET(0xA91F7E0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_DOAUTOCLOSE_OFFSET UNITYSDK_OFFSET(0xA91FD30)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0xA920D80)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITICON_OFFSET UNITYSDK_OFFSET(0xA920690)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITINFOTEXT_OFFSET UNITYSDK_OFFSET(0xA920190)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITPROGRESSICON_OFFSET UNITYSDK_OFFSET(0xA920440)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITTIPSPANEL_OFFSET UNITYSDK_OFFSET(0xA9207B0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_LOADREALFINISHICON_OFFSET UNITYSDK_OFFSET(0xA920AE0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA91ECE0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA91ED80)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONTIPBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA91EE50)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA91F090)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA91EF90)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA91EC40)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA91EF20)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_RESETSIZE_OFFSET UNITYSDK_OFFSET(0xA91F140)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0xA920D90)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SHOWHOLLOWNORMALTIPS_OFFSET UNITYSDK_OFFSET(0xA920050)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SHOWHOLLOWTIPS_1_OFFSET UNITYSDK_OFFSET(0xA91FFA0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SHOWHOLLOWTIPS_OFFSET UNITYSDK_OFFSET(0xA91FE70)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_STOPAUTOCLOSE_OFFSET UNITYSDK_OFFSET(0xA91F540)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER__CACHECLEAN_OFFSET UNITYSDK_OFFSET(0xA91F350)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA920DA0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER__INITPROGRESSICON_B__19_0_OFFSET UNITYSDK_OFFSET(0xA920DE0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA920DF0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA920E60)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA920E90)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA920EA0)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA920F20)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA920F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTutorialTipsRowWidgetController_TypeDefinitionIndex = 68765;

	class UIGeneralTutorialTipsRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single MIN_WIDTH; // 0x0
		// static const ::System::String* FadeInAnim; // 0x0
		// static const ::System::String* ProgressIconFinishAnim; // 0x0
		::Class_2_78DA3B72B76F4A93* _view; // 0x2A0
		::System::Single missionMinSize; // 0x2A8
		::DG::Tweening::Tweener* missionSizeTween; // 0x2B0
		::DG::Tweening::Tweener* closeTween; // 0x2B8
		::UnityEngine::RectTransform* MissionContent; // 0x2C0
		::Foundation::Coroutine::CoroutineHandle _updateMissionContentHandle; // 0x2C8
		::UnityEngine::UI::HorizontalLayoutGroup* _verticalLayoutGroup; // 0x2D0
		::Class_1_43BD383C98B4C0C5_25* _data; // 0x2D8
		::System::Action* _onCloseCallback; // 0x2E0
		::Foundation::Coroutine::CoroutineHandle autoCloseHandle; // 0x2E8
		::System::Boolean _hasTrigger; // 0x2EC
		::System::Nullable_1<::MoleMole::InputLogicEventType> _bindLogicEventType; // 0x2F0
		::System::Boolean _hasClose; // 0x2F8
		::System::Boolean _NeedCache_k__BackingField; // 0x2F9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void ResetSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_RESETSIZE_OFFSET))(this);
		}

		::System::Void CloseTip(::System::Boolean blend)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_CLOSETIP_OFFSET))(this, blend);
		}

		::System::Void StopAutoClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_STOPAUTOCLOSE_OFFSET))(this);
		}

		::System::Void DoAnimation(::UnityEngine::UI::VerticalLayoutGroup* missionLayout)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_DOANIMATION_OFFSET))(this, missionLayout);
		}

		::System::Void DoAutoClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_DOAUTOCLOSE_OFFSET))(this);
		}

		::System::Void CloseWidgetWithFade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_CLOSEWIDGETWITHFADE_OFFSET))(this);
		}

		::System::Void ShowHollowTips(::UnityEngine::UI::VerticalLayoutGroup* layout, ::Class_1_43BD383C98B4C0C5_25* data, ::UnityEngine::RectTransform* viewHollowTip, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::Class_1_43BD383C98B4C0C5_25*, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SHOWHOLLOWTIPS_OFFSET))(this, layout, data, viewHollowTip, playAnim);
		}

		::System::Void ShowHollowTips_1(::UnityEngine::UI::VerticalLayoutGroup* layout, ::Class_1_43BD383C98B4C0C5_25* data, ::UnityEngine::RectTransform* viewHollowTip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::Class_1_43BD383C98B4C0C5_25*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SHOWHOLLOWTIPS_1_OFFSET))(this, layout, data, viewHollowTip);
		}

		::System::Void ShowHollowNormalTips(::UnityEngine::UI::VerticalLayoutGroup* missionLayout, ::Class_1_43BD383C98B4C0C5_25* data, ::UnityEngine::RectTransform* maxTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::Class_1_43BD383C98B4C0C5_25*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SHOWHOLLOWNORMALTIPS_OFFSET))(this, missionLayout, data, maxTransform);
		}

		::System::Void InitTipsPanel(::Struct_2_D3FBEE9DE3F34F60& data)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D3FBEE9DE3F34F60&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITTIPSPANEL_OFFSET))(this, data);
		}

		::System::Void OnTipButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ONTIPBUTTONCLICK_OFFSET))(this);
		}

		::System::Void InitIcon(::Class_1_43BD383C98B4C0C5_25* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_25*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITICON_OFFSET))(this, data);
		}

		::System::Void InitProgressIcon(::Class_1_43BD383C98B4C0C5_25* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_25*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITPROGRESSICON_OFFSET))(this, data);
		}

		::System::Void InitInfoText(::Class_1_43BD383C98B4C0C5_25* data, ::UnityEngine::RectTransform* maxTransform)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_25*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_INITINFOTEXT_OFFSET))(this, data, maxTransform);
		}

		::System::Void LoadRealFinishIcon(::System::Boolean isFinish, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_LOADREALFINISHICON_OFFSET))(this, isFinish, playAnim);
		}

		::System::Void AddOnClose(::System::Action* showNextHollowTips)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_ADDONCLOSE_OFFSET))(this, showNextHollowTips);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::System::Void _CacheClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER__CACHECLEAN_OFFSET))(this);
		}

		::System::Void _InitProgressIcon_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER__INITPROGRESSICON_B__19_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
