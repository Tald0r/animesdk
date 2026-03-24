#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_146;
class Class_1_0D6706375CDAAE8C;
class Class_2_79AE422BA06F6D26_114;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIAbyssS2BuildDialogContext; }
namespace MoleMole { class UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetControllerWithModel; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_BUILDINLEVELITEMPACKAGEINFO_OFFSET UNITYSDK_OFFSET(0xC273710)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_CREATEITEMROW_OFFSET UNITYSDK_OFFSET(0xC273550)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_CREATERELICROW_OFFSET UNITYSDK_OFFSET(0xC273630)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_CREATETITLEROW_OFFSET UNITYSDK_OFFSET(0xC273470)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GETITEMCTRL_OFFSET UNITYSDK_OFFSET(0xC2742B0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET UNITYSDK_OFFSET(0xC273310)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GETVALIDINDEX_OFFSET UNITYSDK_OFFSET(0xC275030)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xC2724D0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GET__ISBRIEFDESC_OFFSET UNITYSDK_OFFSET(0xC2738E0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GET__MAXINDEX_OFFSET UNITYSDK_OFFSET(0xC2727F0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_INITBRIEFTOGGLE_OFFSET UNITYSDK_OFFSET(0xC272810)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC272FB0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xC274B00)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xC273CE0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xC274BD0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xC274840)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONTOGGLECHANGE_OFFSET UNITYSDK_OFFSET(0xC2730E0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC273050)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC2724E0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC272650)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0xC272C60)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_SELECTITEM_OFFSET UNITYSDK_OFFSET(0xC273F10)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_SETDEFAULTSELECTEDITEM_OFFSET UNITYSDK_OFFSET(0xC273B50)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_SETITEMSCROLLWIDGETFUNC_OFFSET UNITYSDK_OFFSET(0xC272A90)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC275250)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER__SETDEFAULTSELECTEDITEM_B__20_0_OFFSET UNITYSDK_OFFSET(0xC2752E0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC2752F0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xC275360)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xC2753E0)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xC275410)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC275470)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC275480)
#define MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC275490)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2BuildDialogPopWindowController_TypeDefinitionIndex = 46561;

	class UIAbyssS2BuildDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_114* _view; // 0x2F8
		::System::Int32 _currSelectIndex; // 0x300
		::System::Int32 _minIndex; // 0x304
		::MoleMole::UIAbyssS2BuildDialogContext* _context; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase*>* _itemInfos; // 0x310
		::MoleMole::UIGeneralToggleWidgetControllerWithModel* _briefToggle; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitBriefToggle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_INITBRIEFTOGGLE_OFFSET))(this);
		}

		::System::Void OnToggleChange(::System::Boolean inOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONTOGGLECHANGE_OFFSET))(this, inOn);
		}

		::System::Void SetItemScrollWidgetFunc(::MonoUITableScrollV2* scroll)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_SETITEMSCROLLWIDGETFUNC_OFFSET))(this, scroll);
		}

		::System::Int32 GetTemplateIndexFromData(::System::Int32 dataIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET))(this, dataIndex);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateTitleRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_CREATETITLEROW_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateItemRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_CREATEITEMROW_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateRelicRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_CREATERELICROW_OFFSET))(this, arg);
		}

		::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase* BuildInLevelItemPackageInfo(::Class_1_0D6706375CDAAE8C* item)
		{
			return ((::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase*(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_BUILDINLEVELITEMPACKAGEINFO_OFFSET))(this, item);
		}

		::System::Void RefreshItemView(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_REFRESHITEMVIEW_OFFSET))(this, items);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnItemSelect(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_ONITEMSELECT_OFFSET))(this, index);
		}

		::System::Void SetDefaultSelectedItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_SETDEFAULTSELECTEDITEM_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_146* GetItemCtrl(::System::Int32 index)
		{
			return ((::Class_0_16E4307DCC419505_146*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GETITEMCTRL_OFFSET))(this, index);
		}

		::System::Void SelectItem(::System::Int32 index, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_SELECTITEM_OFFSET))(this, index, force);
		}

		::System::Int32 GetValidIndex(::System::Int32 start, ::System::Int32 end, ::System::Boolean order, ::System::Boolean loop)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GETVALIDINDEX_OFFSET))(this, start, end, order, loop);
		}

		::System::Boolean get__isBriefDesc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GET__ISBRIEFDESC_OFFSET))(this);
		}

		::System::Int32 get__maxIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER_GET__MAXINDEX_OFFSET))(this);
		}

		::System::Void _SetDefaultSelectedItem_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER__SETDEFAULTSELECTEDITEM_B__20_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
