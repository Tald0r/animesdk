#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityGuideUIBaseWidgetController.h"

class Class_1_B08665FEB7112467_1;
class Class_1_D375C91CCE5D3999;
class Class_2_D983B8EE78FC39CC;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_CREATENORMALITEMROW_OFFSET UNITYSDK_OFFSET(0x8BA0FA0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_CREATESPECIALITEMROW_OFFSET UNITYSDK_OFFSET(0x8BA1080)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET UNITYSDK_OFFSET(0x8BA0F20)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8BA0050)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x8BA00F0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONLEVELUP_OFFSET UNITYSDK_OFFSET(0x8BA0C90)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONOPENLAMBGIFTWIDGET_OFFSET UNITYSDK_OFFSET(0x8B9FCD0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8B9FF20)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8BA01E0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8B9F9E0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8B9FB80)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_OPENDETAIL_OFFSET UNITYSDK_OFFSET(0x8BA0EA0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_REFRESHBACKGROUND_OFFSET UNITYSDK_OFFSET(0x8BA0960)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_REFRESHINIT_OFFSET UNITYSDK_OFFSET(0x8BA05D0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_REFRESHREMAINTIMERTEXT_OFFSET UNITYSDK_OFFSET(0x8BA0C10)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_REFRESHTASKLIST_OFFSET UNITYSDK_OFFSET(0x8BA03D0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8BA1160)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8BA1190)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x8BA1200)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8BA1210)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8BA1220)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8BA1230)
#define MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8BA1290)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityLambGiftWidgetController_TypeDefinitionIndex = 43894;

	class UIActivityLambGiftWidgetController : public ::MoleMole::ActivityGuideUIBaseWidgetController
	{
	public:
		::Class_2_D983B8EE78FC39CC* _view; // 0x2C8
		::System::Collections::Generic::List_1<::Class_1_B08665FEB7112467_1*>* rewardContextList; // 0x2D0
		::UnityEngine::GameObject* cacheBG; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnOpenLambGiftWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONOPENLAMBGIFTWIDGET_OFFSET))(this);
		}

		::System::Void OnLevelUP(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_ONLEVELUP_OFFSET))(this, args);
		}

		::System::Void RefreshInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_REFRESHINIT_OFFSET))(this);
		}

		::System::Void RefreshTaskList(::Class_1_D375C91CCE5D3999* changeData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_REFRESHTASKLIST_OFFSET))(this, changeData);
		}

		::System::Void RefreshBackground()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_REFRESHBACKGROUND_OFFSET))(this);
		}

		::System::Void OpenDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_OPENDETAIL_OFFSET))(this);
		}

		::System::Void RefreshRemainTimerText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_REFRESHREMAINTIMERTEXT_OFFSET))(this);
		}

		::System::Int32 GetTemplateIndexFromData(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET))(this, index);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateNormalItemRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_CREATENORMALITEMROW_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateSpecialItemRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER_CREATESPECIALITEMROW_OFFSET))(this, arg);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
