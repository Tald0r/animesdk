#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_A11CB4C08EF906E4;
class Class_2_9E3E3CDA608A4F58;
class Class_2_C8393BDF0FB18A03;
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainCitySwitchRoleSwitchPanelWidgetController; }
namespace MoleMole { class UIMainCitySwitchRoleTimePanelWidgetController; }
namespace MoleMole { class UIPlayerSkinSwitchWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GETANDSELECTSKINNEWBIEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x8EC8F50)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GETDEFAULTTABINDEX_OFFSET UNITYSDK_OFFSET(0x8EC9B00)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x8EC8C60)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GET_TOPANIM_OFFSET UNITYSDK_OFFSET(0x8EC8510)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x8EC8500)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ISSKINSWITCHMUIPLOCKED_OFFSET UNITYSDK_OFFSET(0x8EC90A0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x8EC91F0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8EC9FA0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8ECA0D0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONNEWBIECLOSE_OFFSET UNITYSDK_OFFSET(0x8EC8FE0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x8EC9E90)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONPRECHECKSWITCHAVATAR_OFFSET UNITYSDK_OFFSET(0x8ECA2C0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8ECA180)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8ECA040)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8EC8530)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8EC9970)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_REFRESHRUNTIMEINPUTACTION_OFFSET UNITYSDK_OFFSET(0x8EC8B50)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_SHOWORHIDEWIDGET_OFFSET UNITYSDK_OFFSET(0x8EC9880)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_TRYTRIGGERNEWBIE_OFFSET UNITYSDK_OFFSET(0x8EC9F40)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8ECA740)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x8ECA7E0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8ECA850)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8ECA8C0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x8ECA920)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8ECA930)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8ECA940)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8ECA950)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8ECA960)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRolePageController_TypeDefinitionIndex = 74936;

	class UIMainCitySwitchRolePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_C8393BDF0FB18A03* _view; // 0x2F8
		::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController* _timePanel; // 0x300
		::MoleMole::UIMainCitySwitchRoleSwitchPanelWidgetController* _switchPanel; // 0x308
		::MoleMole::UIPlayerSkinSwitchWidgetController* _skinSwitchPanel; // 0x310
		::System::Boolean _cancelNew; // 0x318
		::System::Int32 _curIndex; // 0x31C
		::System::Int32 m_skinSwitchGuide; // 0x320
		::System::Collections::Generic::List_1<::System::Int32>* m_skinSwitchGuideList; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_9E3E3CDA608A4F58* get_TopAnim()
		{
			return ((::Class_2_9E3E3CDA608A4F58*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GET_TOPANIM_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::Class_1_A11CB4C08EF906E4* GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* config)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, config);
		}

		::System::Void OnNewbieClose(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONNEWBIECLOSE_OFFSET))(this, args);
		}

		::System::Boolean IsSkinSwitchMuipLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ISSKINSWITCHMUIPLOCKED_OFFSET))(this);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONCLICKTAB_OFFSET))(this, index);
		}

		::System::Void ShowOrHideWidget(::MoleMole::UIBaseController* ctrl, ::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_SHOWORHIDEWIDGET_OFFSET))(this, ctrl, show);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Int32 GetDefaultTabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GETDEFAULTTABINDEX_OFFSET))(this);
		}

		::System::Void TryTriggerNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_TRYTRIGGERNEWBIE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetAndSelectSkinNewbieGameObject(::System::Int32 targetSkinID, ::System::String* param)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GETANDSELECTSKINNEWBIEGAMEOBJECT_OFFSET))(this, targetSkinID, param);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean OnPreCheckSwitchAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONPRECHECKSWITCHAVATAR_OFFSET))(this);
		}

		::System::Void RefreshRuntimeInputAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_REFRESHRUNTIMEINPUTACTION_OFFSET))(this);
		}

		::Class_1_A11CB4C08EF906E4* __base_GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* P0)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
