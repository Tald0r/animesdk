#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_79AE422BA06F6D26_222;
class Class_3_41D28B70EDF95E34;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapLeftTastListRow01RoleWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_GET_CURRENTAREAID_OFFSET UNITYSDK_OFFSET(0xC3F03D0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ISCHILDAREASHOW_OFFSET UNITYSDK_OFFSET(0xC3F2860)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC3F0D80)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xC3F0790)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xC3F3A90)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATEEMPTYDATA_OFFSET UNITYSDK_OFFSET(0xC3F1200)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATEVALIDDATA_OFFSET UNITYSDK_OFFSET(0xC3F1360)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xC3F1110)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC3F0E20)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC3F03E0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC3F06E0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_REFRESHROLEICON_OFFSET UNITYSDK_OFFSET(0xC3F2F30)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_SETINPUTKEYVISIBLE_OFFSET UNITYSDK_OFFSET(0xC3F3B00)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_SETITEMSELECT_OFFSET UNITYSDK_OFFSET(0xC3F39F0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_SET_CURRENTAREAID_OFFSET UNITYSDK_OFFSET(0xC3F03C0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_SHOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xC3F0F10)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3F3C20)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC3F3B90)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC3F3C70)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xC3F3CE0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xC3F3D40)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xC3F3DB0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC3F3E30)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC3F3EB0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC3F3F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationMapRowWidgetController_TypeDefinitionIndex = 64123;

	class UIUrbanMapNavigationMapRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::String** StaticGet__tempUnlockAnim()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapNavigationMapRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x32B10);
		}
		static ::System::String** StaticGet__tempUnlockAnimOut()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapNavigationMapRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x32B18);
		}
		::Class_2_79AE422BA06F6D26_222* _view; // 0x2D0
		::Class_3_41D28B70EDF95E34* _blockUINotification; // 0x2D8
		::UnityEngine::Animation* tempUnlockAnim; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapLeftTastListRow01RoleWidgetController*>* _roles; // 0x2E8
		::System::Int32 _CurrentAreaID_k__BackingField; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void set_CurrentAreaID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_SET_CURRENTAREAID_OFFSET))(this, value);
		}

		::System::Int32 get_CurrentAreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_GET_CURRENTAREAID_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_SHOWNOTIFICATION_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnScrollItemUpdateEmptyData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATEEMPTYDATA_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdateValidData(::System::Int32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATEVALIDDATA_OFFSET))(this, areaID);
		}

		::System::Boolean IsChildAreaShow(::System::Int32 targetArea3dId, ::System::Int32 inUrbanAreaId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ISCHILDAREASHOW_OFFSET))(this, targetArea3dId, inUrbanAreaId);
		}

		::System::Void SetItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_SETITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetInputKeyVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_SETINPUTKEYVISIBLE_OFFSET))(this, visible);
		}

		::System::Void RefreshRoleIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER_REFRESHROLEICON_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONMAPROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
