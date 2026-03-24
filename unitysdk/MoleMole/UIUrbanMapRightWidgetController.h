#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1EB8C469AAE7B7DE;
class Class_2_2F8C69E540B4CCEC;
class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
template <typename T> class Class_2_000597E145D7A42A;

#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_CREATITEMICON_OFFSET UNITYSDK_OFFSET(0xAB0F4E0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xAB100A0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0xAB0F310)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAB0F8E0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAB0F7D0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xAB0FFB0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAB0FAB0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xAB0F6C0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_POINTWIDGETCONTEXT_OFFSET UNITYSDK_OFFSET(0xAB10150)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_SETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xAB0F320)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_SHOWEMPTYLABEL_OFFSET UNITYSDK_OFFSET(0xAB0F660)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB10210)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAB10240)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAB102B0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xAB102C0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAB10320)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xAB10390)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightWidgetController_TypeDefinitionIndex = 71975;

	class UIUrbanMapRightWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_000597E145D7A42A<::Class_1_1EB8C469AAE7B7DE*>* _viewModel; // 0x2A0
		::Class_2_2F8C69E540B4CCEC* _allocateHelper; // 0x2A8
		::Struct_2_575273D27F02957E _binderInfo; // 0x2B0
		::MoleMole::UIControlReference* _controlReference; // 0x2C0
		::System::Boolean _setScrollview; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void SetScrollView(::MonoUITableScrollV2* scrollV2)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_SETSCROLLVIEW_OFFSET))(this, scrollV2);
		}

		::MoleMole::ScrollViewItemWidgetController* CreatItemIcon(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_CREATITEMICON_OFFSET))(this, binderInfo);
		}

		::System::Boolean ShowEmptyLabel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_SHOWEMPTYLABEL_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_GET_ACTIVE_OFFSET))(this);
		}

		::MoleMole::UIUrbanMapPointWidgetContext* PointWidgetContext()
		{
			return ((::MoleMole::UIUrbanMapPointWidgetContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_POINTWIDGETCONTEXT_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}
	};
}
