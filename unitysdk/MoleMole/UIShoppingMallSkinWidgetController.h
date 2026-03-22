#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIShoppingMallRightBaseController.h"

class Class_2_FF8677F800509BFA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class ShoppingMallSkinContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_GET_RIGHTROOTMODULE_OFFSET UNITYSDK_OFFSET(0x75136D0)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x7513800)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONCLICKGOODS_OFFSET UNITYSDK_OFFSET(0x7514030)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7513EB0)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x7513A40)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7513F50)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7513750)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7513990)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x7513B50)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_RESETSELECTITEM_OFFSET UNITYSDK_OFFSET(0x7513C20)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7514100)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER__INITVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0x7514130)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x75141C0)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x7514230)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7514240)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x75142C0)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7514320)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallSkinWidgetController_TypeDefinitionIndex = 71397;

	class UIShoppingMallSkinWidgetController : public ::MoleMole::UIShoppingMallRightBaseController
	{
	public:
		::MoleMole::ShoppingMallSkinContext* _context; // 0x2A8
		::Class_2_FF8677F800509BFA* _view; // 0x2B0
		::MonoUITableScrollV2* _Goods_ScrollView; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* get_RightRootModule()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_GET_RIGHTROOTMODULE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnClickGoods(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONCLICKGOODS_OFFSET))(this, index);
		}

		::System::Void RefreshUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_REFRESHUI_OFFSET))(this);
		}

		::System::Void ResetSelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_RESETSELECTITEM_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitView_b__10_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER__INITVIEW_B__10_0_OFFSET))(this, reference);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
