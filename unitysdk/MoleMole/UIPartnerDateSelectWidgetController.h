#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_8B36B2DB492DBF9B_12;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIPartnerDateItemWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_GETITEMWIDGET_OFFSET UNITYSDK_OFFSET(0xB258FD0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xB258750)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB2589B0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xB258EF0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB258A50)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB2586A0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xB258BA0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHSELECTITEM_OFFSET UNITYSDK_OFFSET(0xB259190)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xB258C20)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_SETONSELECT_OFFSET UNITYSDK_OFFSET(0xB258B30)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2593C0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__INITVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0xB259400)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__INITVIEW_B__7_1_OFFSET UNITYSDK_OFFSET(0xB259480)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB259490)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB259500)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB259580)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDateSelectWidgetController_TypeDefinitionIndex = 64807;

	class UIPartnerDateSelectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8B36B2DB492DBF9B_12* _view; // 0x2A0
		::System::Action_1<::System::Int32>* _onSelectItem; // 0x2A8
		::System::Collections::Generic::List_1<::System::Int32>* _partnerIDs; // 0x2B0
		::System::Int32 _selectIdx; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetOnSelect(::System::Action_1<::System::Int32>* onSelectItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_SETONSELECT_OFFSET))(this, onSelectItem);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHDATA_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Collections::Generic::List_1<::System::Int32>* partnerIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, partnerIDs);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnSelectItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONSELECTITEM_OFFSET))(this, index);
		}

		::MoleMole::UIPartnerDateItemWidgetController* GetItemWidget(::System::Int32 idx)
		{
			return ((::MoleMole::UIPartnerDateItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_GETITEMWIDGET_OFFSET))(this, idx);
		}

		::System::Void RefreshSelectItem(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHSELECTITEM_OFFSET))(this, idx);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitView_b__7_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__INITVIEW_B__7_0_OFFSET))(this, reference);
		}

		::System::Void _InitView_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__INITVIEW_B__7_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
