#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_2063C4717F520AB6;
class Class_2_208CC9941471731A_266;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_ADDITEMICONBTNSMALLWIDGET_OFFSET UNITYSDK_OFFSET(0xD003CF0)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_ONCLICKTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xD003A90)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD002B90)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD002D10)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD002C30)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD002A10)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xD0033C0)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xD002DF0)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0xD003350)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD003DC0)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xD003DD0)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD003DE0)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD003E50)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD003ED0)
#define MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD003F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDateRewardRowWidgetController_TypeDefinitionIndex = 42752;

	class UIPartnerDateRewardRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_2063C4717F520AB6* _view; // 0x2D0
		::Class_2_208CC9941471731A_266* _config; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_REFRESHSTATE_OFFSET))(this);
		}

		::System::Void OnClickTakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_ONCLICKTAKEREWARD_OFFSET))(this);
		}

		::MoleMole::UIItemIconBtnSmallWidgetController* AddItemIconBtnSmallWidget(::Enum_3_B90C1A15EA6E3C2B ctrl, ::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::UIItemIconBtnSmallWidgetController*(*)(::PVOID, ::Enum_3_B90C1A15EA6E3C2B, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER_ADDITEMICONBTNSMALLWIDGET_OFFSET))(this, ctrl, arg);
		}

		::System::Void _OnUIInit_b__1_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
