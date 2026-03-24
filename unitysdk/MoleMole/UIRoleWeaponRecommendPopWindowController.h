#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_60638234271CCDB8_5;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDepositoryJumpBtnTextItemWidgetController; }
namespace MoleMole { class UIGeneralEquipDetailV2WidgetController; }
namespace MoleMole { class UIRoleEquipReplaceWidgetController; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_CREATWEAPONITEM_OFFSET UNITYSDK_OFFSET(0x957A4D0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x9578F60)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_GOTODETAIL_OFFSET UNITYSDK_OFFSET(0x957B820)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x95791C0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x957B530)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCLICKEQUIPBTN_OFFSET UNITYSDK_OFFSET(0x957BA30)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCLICKSCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0x957A630)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9579D80)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x957B5E0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONITEMCHANGE_OFFSET UNITYSDK_OFFSET(0x957BAF0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9579A20)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9579E20)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9578F70)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9579600)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_REFRESHJUMPITEMS_OFFSET UNITYSDK_OFFSET(0x957AF60)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x9579CC0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_SETBTNSSTATE_OFFSET UNITYSDK_OFFSET(0x957A420)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_SETDATAEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x957A320)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_SETROLEICON_OFFSET UNITYSDK_OFFSET(0x9579870)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x957BD30)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER__ONUIOPEN_B__7_0_OFFSET UNITYSDK_OFFSET(0x957BE90)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER__ONUIOPEN_B__7_1_OFFSET UNITYSDK_OFFSET(0x957C090)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x957C0A0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x957C110)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x957C190)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x957C250)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x957C260)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x957C270)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleWeaponRecommendPopWindowController_TypeDefinitionIndex = 51086;

	class UIRoleWeaponRecommendPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_5* _view; // 0x2F8
		::System::UInt32 _avatarId; // 0x300
		::MoleMole::UIRoleEquipReplaceWidgetController* _equipReplaceWidget; // 0x308
		::MoleMole::UIGeneralEquipDetailV2WidgetController* _generalEquipCtrl; // 0x310
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* m_jumpBtns; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIDepositoryJumpBtnTextItemWidgetController*>* m_jumpBtnCtrls; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void SetDataEmptyState(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_SETDATAEMPTYSTATE_OFFSET))(this, isEmpty);
		}

		::System::Void SetBtnsState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_SETBTNSSTATE_OFFSET))(this, isShow);
		}

		::MoleMole::ScrollViewItemWidgetController* CreatWeaponItem(::Enum_3_340DE32BA097F66C arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_340DE32BA097F66C, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_CREATWEAPONITEM_OFFSET))(this, arg1, arg2);
		}

		::System::Void OnClickScrollViewItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCLICKSCROLLVIEWITEM_OFFSET))(this, index);
		}

		::System::Void RefreshJumpItems(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_REFRESHJUMPITEMS_OFFSET))(this, itemData);
		}

		::System::Void SetRoleIcon(::System::UInt32 avatarUID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_SETROLEICON_OFFSET))(this, avatarUID);
		}

		::System::Void OnCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCANCEL_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void GotoDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_GOTODETAIL_OFFSET))(this);
		}

		::System::Void OnClickEquipBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCLICKEQUIPBTN_OFFSET))(this);
		}

		::System::Void OnItemChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONITEMCHANGE_OFFSET))(this, obj);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER__ONUIOPEN_B__7_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER__ONUIOPEN_B__7_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
