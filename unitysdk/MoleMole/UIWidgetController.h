#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBaseController.h"

class Class_2_D29143E5EB25A314;
namespace MoleMole { class UIWindowController; }

#define MOLEMOLE_UIWIDGETCONTROLLER_ADDCHILDCONTROL_1_OFFSET UNITYSDK_OFFSET(0xC407770)
#define MOLEMOLE_UIWIDGETCONTROLLER_ADDCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0xC4076F0)
#define MOLEMOLE_UIWIDGETCONTROLLER_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0xC406B80)
#define MOLEMOLE_UIWIDGETCONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0xC3F0990)
#define MOLEMOLE_UIWIDGETCONTROLLER_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0xC407410)
#define MOLEMOLE_UIWIDGETCONTROLLER_DESTROYCLEAN_OFFSET UNITYSDK_OFFSET(0xC4070A0)
#define MOLEMOLE_UIWIDGETCONTROLLER_DESTROYPROXY_OFFSET UNITYSDK_OFFSET(0xC407610)
#define MOLEMOLE_UIWIDGETCONTROLLER_DESTROYWIDGET_OFFSET UNITYSDK_OFFSET(0xC406140)
#define MOLEMOLE_UIWIDGETCONTROLLER_DOHIDEIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xC405FD0)
#define MOLEMOLE_UIWIDGETCONTROLLER_GET_DESTROYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xC405E10)
#define MOLEMOLE_UIWIDGETCONTROLLER_GET_IGNOREFADEINANIM_OFFSET UNITYSDK_OFFSET(0xC405E20)
#define MOLEMOLE_UIWIDGETCONTROLLER_GET_ISWINDOWCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC405DE0)
#define MOLEMOLE_UIWIDGETCONTROLLER_GET_PARENTWIDGET_OFFSET UNITYSDK_OFFSET(0xC405DF0)
#define MOLEMOLE_UIWIDGETCONTROLLER_PAUSESCREENLAYOUT_OFFSET UNITYSDK_OFFSET(0xC4064F0)
#define MOLEMOLE_UIWIDGETCONTROLLER_PREPARESHOW_OFFSET UNITYSDK_OFFSET(0xC406AA0)
#define MOLEMOLE_UIWIDGETCONTROLLER_REFRESHSCREENLAYOUT_OFFSET UNITYSDK_OFFSET(0xC406360)
#define MOLEMOLE_UIWIDGETCONTROLLER_REMOVECHILDCTRL_OFFSET UNITYSDK_OFFSET(0xC406F70)
#define MOLEMOLE_UIWIDGETCONTROLLER_REMOVEFROMPARENT_OFFSET UNITYSDK_OFFSET(0xC406C60)
#define MOLEMOLE_UIWIDGETCONTROLLER_RESELECTPARENT_OFFSET UNITYSDK_OFFSET(0xC4068C0)
#define MOLEMOLE_UIWIDGETCONTROLLER_SETCHILDCONTROLLERPARENT_OFFSET UNITYSDK_OFFSET(0xC405E40)
#define MOLEMOLE_UIWIDGETCONTROLLER_SET_IGNOREFADEINANIM_OFFSET UNITYSDK_OFFSET(0xC405E30)
#define MOLEMOLE_UIWIDGETCONTROLLER_SET_PARENTWIDGET_OFFSET UNITYSDK_OFFSET(0xC405E00)
#define MOLEMOLE_UIWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC3C55C0)
#define MOLEMOLE_UIWIDGETCONTROLLER___BASE_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0xC4077E0)
#define MOLEMOLE_UIWIDGETCONTROLLER___BASE_CLOSE_OFFSET UNITYSDK_OFFSET(0xC407860)
#define MOLEMOLE_UIWIDGETCONTROLLER___BASE_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0xC407870)
#define MOLEMOLE_UIWIDGETCONTROLLER___BASE_DESTROYCLEAN_OFFSET UNITYSDK_OFFSET(0xC407880)
#define MOLEMOLE_UIWIDGETCONTROLLER___BASE_DESTROYPROXY_OFFSET UNITYSDK_OFFSET(0xC407910)
#define MOLEMOLE_UIWIDGETCONTROLLER___BASE_PREPARESHOW_OFFSET UNITYSDK_OFFSET(0xC4079A0)
#define MOLEMOLE_UIWIDGETCONTROLLER___BASE_REMOVEFROMPARENT_OFFSET UNITYSDK_OFFSET(0xC407A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIWidgetController_TypeDefinitionIndex = 72852;

	class UIWidgetController : public ::MoleMole::UIBaseController
	{
	public:
		::MoleMole::UIWidgetController* _ParentWidget_k__BackingField; // 0x288
		::Class_2_D29143E5EB25A314* _childWidgetProxy; // 0x290
		::System::Boolean _IgnoreFadeInAnim_k__BackingField; // 0x298

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsWindowController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_GET_ISWINDOWCONTROLLER_OFFSET))(this);
		}

		::MoleMole::UIWidgetController* get_ParentWidget()
		{
			return ((::MoleMole::UIWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_GET_PARENTWIDGET_OFFSET))(this);
		}

		::System::Void set_ParentWidget(::MoleMole::UIWidgetController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_SET_PARENTWIDGET_OFFSET))(this, value);
		}

		::System::Boolean get_DestroyGameObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_GET_DESTROYGAMEOBJECT_OFFSET))(this);
		}

		::System::Boolean get_IgnoreFadeInAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_GET_IGNOREFADEINANIM_OFFSET))(this);
		}

		::System::Void set_IgnoreFadeInAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_SET_IGNOREFADEINANIM_OFFSET))(this, value);
		}

		::System::Void SetChildControllerParent(::MoleMole::UIBaseController* childController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_SETCHILDCONTROLLERPARENT_OFFSET))(this, childController);
		}

		::System::Void DoHideImmediate(::System::Boolean doOnHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_DOHIDEIMMEDIATE_OFFSET))(this, doOnHide);
		}

		::System::Void DestroyWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_DESTROYWIDGET_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_CLOSE_OFFSET))(this);
		}

		::System::Void RefreshScreenLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_REFRESHSCREENLAYOUT_OFFSET))(this);
		}

		::System::Void PauseScreenLayout(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_PAUSESCREENLAYOUT_OFFSET))(this, pause);
		}

		::System::Void ReSelectParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_RESELECTPARENT_OFFSET))(this);
		}

		::System::Void PrepareShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_PREPARESHOW_OFFSET))(this);
		}

		::System::Void AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_AFTERSHOW_OFFSET))(this);
		}

		::System::Void RemoveFromParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_REMOVEFROMPARENT_OFFSET))(this);
		}

		::System::Void DestroyClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_DESTROYCLEAN_OFFSET))(this);
		}

		::System::Void CreateProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_CREATEPROXY_OFFSET))(this);
		}

		::System::Void DestroyProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_DESTROYPROXY_OFFSET))(this);
		}

		::System::Void AddChildControl(::MoleMole::UIWidgetController* widgetController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_ADDCHILDCONTROL_OFFSET))(this, widgetController);
		}

		::System::Void AddChildControl_1(::MoleMole::UIWindowController* widgetController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_ADDCHILDCONTROL_1_OFFSET))(this, widgetController);
		}

		::System::Void RemoveChildCtrl(::MoleMole::UIWidgetController* widgetController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER_REMOVECHILDCTRL_OFFSET))(this, widgetController);
		}

		::System::Void __base_AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER___BASE_AFTERSHOW_OFFSET))(this);
		}

		::System::Void __base_Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER___BASE_CLOSE_OFFSET))(this);
		}

		::System::Void __base_CreateProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER___BASE_CREATEPROXY_OFFSET))(this);
		}

		::System::Void __base_DestroyClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER___BASE_DESTROYCLEAN_OFFSET))(this);
		}

		::System::Void __base_DestroyProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER___BASE_DESTROYPROXY_OFFSET))(this);
		}

		::System::Void __base_PrepareShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER___BASE_PREPARESHOW_OFFSET))(this);
		}

		::System::Void __base_RemoveFromParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWIDGETCONTROLLER___BASE_REMOVEFROMPARENT_OFFSET))(this);
		}
	};
}
