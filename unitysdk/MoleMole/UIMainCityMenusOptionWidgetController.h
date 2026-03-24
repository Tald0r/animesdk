#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_968;
class Class_2_536CDDA39763F81B_1;
class Class_3_7141BC9DF7195C4C;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD76EC30)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD76F3B0)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xD76FA50)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD76FAC0)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD76ECD0)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD76F300)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_SETREDDOT_OFFSET UNITYSDK_OFFSET(0xD770DC0)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_SHOWOPITON_OFFSET UNITYSDK_OFFSET(0xD76FB80)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xD76F540)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD7710B0)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER__SHOWOPITON_G__ONSTREAMINGGAMEUNSTUCKTELEPORT_7_9_OFFSET UNITYSDK_OFFSET(0xD7710C0)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER__SHOWOPITON_G__ONUNSTUCKTELEPORT_7_10_OFFSET UNITYSDK_OFFSET(0xD7710D0)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD771640)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD7716B0)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xD771730)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD771740)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD7717C0)
#define MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD771820)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMenusOptionWidgetController_TypeDefinitionIndex = 51183;

	class UIMainCityMenusOptionWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Int32 configID; // 0x2D0
		::UnityEngine::Transform* emptyGo; // 0x2D8
		::UnityEngine::Transform* iconGo; // 0x2E0
		::UnityEngine::Transform* nameGo; // 0x2E8
		::Class_2_536CDDA39763F81B_1* _view; // 0x2F0
		::MoleMole::NotificationBadgeEx* redDotHintCtrl; // 0x2F8
		::Class_3_7141BC9DF7195C4C* _redDotModel; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateUI(::System::Int32 configID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_UPDATEUI_OFFSET))(this, configID);
		}

		::System::Void ShowOpiton(::Class_2_208CC9941471731A_968* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_968*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_SHOWOPITON_OFFSET))(this, config);
		}

		::System::Void SetRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER_SETREDDOT_OFFSET))(this);
		}

		static ::System::Void _ShowOpiton_g__OnStreamingGameUnstuckTeleport_7_9()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER__SHOWOPITON_G__ONSTREAMINGGAMEUNSTUCKTELEPORT_7_9_OFFSET))();
		}

		static ::System::Void _ShowOpiton_g__OnUnstuckTeleport_7_10()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER__SHOWOPITON_G__ONUNSTUCKTELEPORT_7_10_OFFSET))();
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSOPTIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
