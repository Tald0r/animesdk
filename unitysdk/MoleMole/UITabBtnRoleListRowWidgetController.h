#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_3CDBAA6BC10A7F83;
class Class_2_79AE422BA06F6D26_95;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xAA98050)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA96D60)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xAA97ED0)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAA96EE0)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA96E00)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA96B40)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xAA972A0)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_REGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0xAA97D50)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_SETCLICKCHECKACTION_OFFSET UNITYSDK_OFFSET(0xAA97BE0)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0xAA97000)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_UPDATECOOPUP_OFFSET UNITYSDK_OFFSET(0xAA97C50)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA98120)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xAA98130)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA98140)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xAA981B0)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAA98220)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA982A0)
#define MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA98320)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtnRoleListRowWidgetController_TypeDefinitionIndex = 60022;

	class UITabBtnRoleListRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_95* _view; // 0x2D0
		::Class_1_3CDBAA6BC10A7F83* _data; // 0x2D8
		::System::Func_2<::System::Int32, ::System::Boolean>* _clickCheckAction; // 0x2E0
		::System::Func_2<::System::Int32, ::System::Boolean>* _getIsCoopUpFunc; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetClickCheckAction(::System::Func_2<::System::Int32, ::System::Boolean>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_SETCLICKCHECKACTION_OFFSET))(this, action);
		}

		::System::Void UpdateCoopUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_UPDATECOOPUP_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void RegisterNotify(::System::UInt64 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_REGISTERNOTIFY_OFFSET))(this, uid);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLELISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
