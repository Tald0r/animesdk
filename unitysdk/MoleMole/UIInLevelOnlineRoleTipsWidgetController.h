#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIInLevelOnlineRoleTipsWidgetController_EState.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"

class Class_1_8CB785F2EFECB918;
class Class_2_0471CF632A9E483C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIOnlinePlayerItemWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_CREATEITEMWIDGET_OFFSET UNITYSDK_OFFSET(0x7A80730)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_GET_ISDISAPPEAR_OFFSET UNITYSDK_OFFSET(0x7A80490)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x7A80470)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x7A804B0)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_GET_STATE_OFFSET UNITYSDK_OFFSET(0x7A80430)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_GET_TIMEUP_OFFSET UNITYSDK_OFFSET(0x7A80450)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A80920)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A809C0)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A804D0)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7A807F0)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x7A81120)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x7A813D0)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_PLAYWITHCALLBACK_OFFSET UNITYSDK_OFFSET(0x7A80E70)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x7A80B40)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_SET_ISDISAPPEAR_OFFSET UNITYSDK_OFFSET(0x7A804A0)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x7A80480)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x7A804C0)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_SET_STATE_OFFSET UNITYSDK_OFFSET(0x7A80440)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_SKIPFADEOUTANIMTOHIDE_OFFSET UNITYSDK_OFFSET(0x7A812B0)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7A81620)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER__PLAYFADEOUTANIM_B__36_0_OFFSET UNITYSDK_OFFSET(0x7A81660)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A816B0)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A81720)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A817A0)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7A81800)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelOnlineRoleTipsWidgetController_TypeDefinitionIndex = 67931;

	class UIInLevelOnlineRoleTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* FADE_IN_ANIM_NAME; // 0x0
		// static const ::System::String* FADE_OUT_ANIM_NAME; // 0x0
		::MoleMole::UIInLevelOnlineRoleTipsWidgetController_EState _State_k__BackingField; // 0x2A0
		::System::Threading::CancellationTokenSource* _fadeOutAnimCts; // 0x2A8
		::Foundation::Coroutine::CoroutineHandle _fadeOutCoroutineHandle; // 0x2B0
		::Struct_2_49ABC235CB23B56F TimeUpTimerHandle; // 0x2B8
		::System::Boolean _IsPlaying_k__BackingField; // 0x2C8
		::System::Boolean _IsDisappear_k__BackingField; // 0x2C9
		::Class_2_0471CF632A9E483C* _view; // 0x2D0
		::MoleMole::UIOnlinePlayerItemWidgetController* _itemWidget; // 0x2D8
		::System::String* _curAnimName; // 0x2E0
		::System::Boolean _NeedCache_k__BackingField; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIInLevelOnlineRoleTipsWidgetController_EState get_State()
		{
			return ((::MoleMole::UIInLevelOnlineRoleTipsWidgetController_EState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::MoleMole::UIInLevelOnlineRoleTipsWidgetController_EState value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelOnlineRoleTipsWidgetController_EState))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_SET_STATE_OFFSET))(this, value);
		}

		::System::Boolean get_TimeUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_GET_TIMEUP_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Void set_IsPlaying(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_SET_ISPLAYING_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisappear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_GET_ISDISAPPEAR_OFFSET))(this);
		}

		::System::Void set_IsDisappear(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_SET_ISDISAPPEAR_OFFSET))(this, value);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void CreateItemWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_CREATEITEMWIDGET_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_1_8CB785F2EFECB918* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8CB785F2EFECB918*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void PlayWithCallback(::System::String* animName, ::System::Action* callback, ::System::Boolean needReset, ::System::Boolean cancelLayout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_PLAYWITHCALLBACK_OFFSET))(this, animName, callback, needReset, cancelLayout);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Void SkipFadeOutAnimToHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_SKIPFADEOUTANIMTOHIDE_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET))(this);
		}

		::System::Void _PlayFadeOutAnim_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER__PLAYFADEOUTANIM_B__36_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
