#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_769;
class Class_2_25C9B4910AFFBACF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0xD00CDB0)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD00C890)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xD00D5D0)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD00CA10)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD00C930)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD00C590)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD00C7E0)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_READ_OFFSET UNITYSDK_OFFSET(0xD00D7F0)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xD00CF70)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_SETMULTIINDEX_OFFSET UNITYSDK_OFFSET(0xD00DF20)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_SETMULTISELECTFULL_OFFSET UNITYSDK_OFFSET(0xD00E1D0)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_SHOWEMPTY_OFFSET UNITYSDK_OFFSET(0xD00CC30)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_TRIGGERBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xD00D950)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_UPDATEMULTISELECT_OFFSET UNITYSDK_OFFSET(0xD00DB20)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD00E260)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xD00E270)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD00E280)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xD00E2F0)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD00E360)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD00E3E0)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD00E460)
#define MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD00E4C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPostGirlItemWidgetController_TypeDefinitionIndex = 59172;

	class UIPostGirlItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_25C9B4910AFFBACF* _view; // 0x2D0
		::System::Int32 _postGirlID; // 0x2D8
		::Class_2_208CC9941471731A_769* _template; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void Read()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_READ_OFFSET))(this);
		}

		::System::Void TriggerButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_TRIGGERBUTTONCLICK_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void BindNotificationNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_BINDNOTIFICATIONNODE_OFFSET))(this);
		}

		::System::Void ShowEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_SHOWEMPTY_OFFSET))(this);
		}

		::System::Void UpdateMultiSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_UPDATEMULTISELECT_OFFSET))(this);
		}

		::System::Void SetMultiIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_SETMULTIINDEX_OFFSET))(this, index);
		}

		::System::Void SetMultiSelectFull(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER_SETMULTISELECTFULL_OFFSET))(this, enable);
		}

		::System::Void _OnUIInit_b__1_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
