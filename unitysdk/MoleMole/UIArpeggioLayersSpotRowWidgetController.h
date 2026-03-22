#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_7807B2B04302CD7B_6;
class Class_2_0C304D5EE39854A0;
class Class_2_4050202702C5AF24;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIArpeggioLayersSpotRowWidgetController_ArpeggioLevelLine; }
namespace MoleMole { class UIArpeggioLevelSpotWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_AUTOCLICKINDEX_OFFSET UNITYSDK_OFFSET(0xC0A2970)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_GETLEVELUNLOCK_OFFSET UNITYSDK_OFFSET(0xC0A3710)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_GETSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xC0A2EA0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC0A2F10)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xC0A2AD0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xC0A26E0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xC0A2C70)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONLEVELCLICKA_OFFSET UNITYSDK_OFFSET(0xC0A2610)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONLEVELCLICKB_OFFSET UNITYSDK_OFFSET(0xC0A28A0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xC0A30A0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC0A2FB0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC0A22D0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC0A3190)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A3790)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC0A37A0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xC0A3810)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xC0A3880)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xC0A38F0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xC0A3950)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC0A39D0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC0A3A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIArpeggioLayersSpotRowWidgetController_TypeDefinitionIndex = 49737;

	class UIArpeggioLayersSpotRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_0C304D5EE39854A0* _view; // 0x2D0
		::Class_1_7807B2B04302CD7B_6* _data; // 0x2D8
		::MoleMole::UIArpeggioLayersSpotRowWidgetController_ArpeggioLevelLine* _line2_2; // 0x2E0
		::Class_2_4050202702C5AF24* _arpeggioModel; // 0x2E8
		::System::Action_1<::System::Int32>* LevelClickAction; // 0x2F0
		::MoleMole::UIArpeggioLevelSpotWidgetController* _levelSpotCenterCtrl; // 0x2F8
		::MoleMole::UIArpeggioLevelSpotWidgetController* _levelSpotLeftCtrl; // 0x300
		::MoleMole::UIArpeggioLevelSpotWidgetController* _levelSpotRightCtrl; // 0x308
		::System::Int32 _selectIndex; // 0x310
		::System::Int32 LastSelectIndex; // 0x314

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnLevelClickA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONLEVELCLICKA_OFFSET))(this);
		}

		::System::Void OnLevelClickB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONLEVELCLICKB_OFFSET))(this);
		}

		::System::Void AutoClickIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_AUTOCLICKINDEX_OFFSET))(this, index);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Int32 GetSelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_GETSELECTINDEX_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Boolean GetLevelUnlock(::System::Int32 levelID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_GETLEVELUNLOCK_OFFSET))(this, levelID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
