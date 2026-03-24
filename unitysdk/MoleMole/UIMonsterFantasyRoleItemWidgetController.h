#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_0_16E4307DCC419505_106;
class Class_1_48D56DACBE4271BC;
class Class_2_3BEB019E352B28D9;
class Class_2_3BEB019E352B28D9_Class_2_8F205FCD6AF442AF;
class Class_2_79AE422BA06F6D26_66;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class MonoUIExpandAndShrinkSelfConfig; }
namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMonsterFantasyRoleItemWidgetController_HpDataBindView; }
namespace MoleMole { class UIMonsterFantasyRoleItemWidgetController_ViewContent; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0xB6B0AC0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_BUILDHELPER_OFFSET UNITYSDK_OFFSET(0xB6B0F10)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONAFTERSETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB6B01E0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xB6B0300)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB6B1840)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB6AF590)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB6B00A0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB6B0020)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONENTITYSELECTED_OFFSET UNITYSDK_OFFSET(0xB6B1050)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xB6AFF20)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONLONGPRESSCLICK_OFFSET UNITYSDK_OFFSET(0xB6B16E0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB6B0380)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB6AF8F0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB6AFAB0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB6AF6C0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0xB6B11D0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_PLAYFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0xB6B15F0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_REGISTEREVENTS_OFFSET UNITYSDK_OFFSET(0xB6AF9E0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_RELEASEUI_OFFSET UNITYSDK_OFFSET(0xB6AFD40)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_REMOVEEVENTS_OFFSET UNITYSDK_OFFSET(0xB6B0160)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_RESETFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0xB6B12D0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB6B1150)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__BUILDDATABINDING_B__29_0_OFFSET UNITYSDK_OFFSET(0xB6B1B60)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__BUILDDATABINDING_B__29_1_OFFSET UNITYSDK_OFFSET(0xB6B1D60)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__BUILDDATABINDING_B__29_2_OFFSET UNITYSDK_OFFSET(0xB6B1F60)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__BUILDDATABINDING_B__29_3_OFFSET UNITYSDK_OFFSET(0xB6B2160)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB6B1A20)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__REGISTEREVENTS_B__18_0_OFFSET UNITYSDK_OFFSET(0xB6B1AD0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONAFTERSETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB6B2400)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB6B2460)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xB6B24D0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB6B2500)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB6B2580)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB6B25F0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB6B2670)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_RELEASEUI_OFFSET UNITYSDK_OFFSET(0xB6B26D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyRoleItemWidgetController_TypeDefinitionIndex = 42507;

	class UIMonsterFantasyRoleItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_66* _view; // 0x2D0
		::MoleMole::UIMonsterFantasyRoleItemWidgetController_ViewContent* _viewContent; // 0x2D8
		::System::Object* _data; // 0x2E0
		::MoleMole::TurnBattleEntityUnit* _entityUnit; // 0x2E8
		::MoleMole::MonoUIExpandAndShrinkSelfConfig* _expandAndShrinkConfig; // 0x2F0
		::UnityEngine::Animation* _animation; // 0x2F8
		::MoleMole::MonoGamepadSelectable* _selectable; // 0x300
		::System::Action* _onBeginDrag; // 0x308
		::System::Boolean _isShownEqualOrMoreThanOnce; // 0x310
		::System::Boolean _isEventRegistered; // 0x311
		::Class_0_16E4307DCC419505_106* _autoDisposePool; // 0x318
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x320
		::Class_2_3BEB019E352B28D9* _hudHelper_hp; // 0x328
		::Class_2_3BEB019E352B28D9_Class_2_8F205FCD6AF442AF* _hpIDataBindModel; // 0x330
		::MoleMole::UIMonsterFantasyRoleItemWidgetController_HpDataBindView* _hpIDataBindView; // 0x338
		::System::Boolean _hasBindView; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ReleaseUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_RELEASEUI_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void RegisterEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_REGISTEREVENTS_OFFSET))(this);
		}

		::System::Void RemoveEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_REMOVEEVENTS_OFFSET))(this);
		}

		::System::Void OnAfterSetScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONAFTERSETSCROLLVIEW_OFFSET))(this);
		}

		::System::Void OnBeginDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONBEGINDRAG_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void BuildHelper()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_BUILDHELPER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayFadeInAnimation(::System::String* key, ::System::Threading::CancellationToken token, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_PLAYFADEINANIMATION_OFFSET))(this, key, token, timing);
		}

		::System::Void ResetFadeOutAnimation(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_RESETFADEOUTANIMATION_OFFSET))(this, key);
		}

		::Cysharp::Threading::Tasks::UniTask PlayFadeOutAnimation(::System::String* key, ::System::Threading::CancellationToken token, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_PLAYFADEOUTANIMATION_OFFSET))(this, key, token, timing);
		}

		::System::Void OnLongPressClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONLONGPRESSCLICK_OFFSET))(this);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void OnEntitySelected(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_ONENTITYSELECTED_OFFSET))(this, entity);
		}

		::System::Void _RegisterEvents_b__18_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__REGISTEREVENTS_B__18_0_OFFSET))(this, args);
		}

		::System::Void _BuildDataBinding_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__BUILDDATABINDING_B__29_0_OFFSET))(this);
		}

		::System::Void _BuildDataBinding_b__29_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__BUILDDATABINDING_B__29_1_OFFSET))(this);
		}

		::System::Void _BuildDataBinding_b__29_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__BUILDDATABINDING_B__29_2_OFFSET))(this);
		}

		::System::Void _BuildDataBinding_b__29_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__BUILDDATABINDING_B__29_3_OFFSET))(this);
		}

		::System::Void __base_OnAfterSetScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONAFTERSETSCROLLVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_ReleaseUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER___BASE_RELEASEUI_OFFSET))(this);
		}
	};
}
