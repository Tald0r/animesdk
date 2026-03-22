#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D03B1A3DDBB3D34D.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_6AAA836985EA0A07_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONCLICKGENERAL_OFFSET UNITYSDK_OFFSET(0x739B910)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONCLICKOVERLORD_OFFSET UNITYSDK_OFFSET(0x739B300)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7399C30)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x739BA30)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x7399DB0)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7399CD0)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7399AE0)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7399B80)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_SETBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x739A760)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x739B170)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_SETGENERALQUEST_OFFSET UNITYSDK_OFFSET(0x739A7F0)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_SETQUEST_OFFSET UNITYSDK_OFFSET(0x739A010)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x739BAC0)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x739BAD0)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x739BB40)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x739BBB0)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x739BC30)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x739BCB0)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x739BD10)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastTodoListWidgetController_TypeDefinitionIndex = 75531;

	class UIOverlordFeastTodoListWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_6AAA836985EA0A07_1* _view; // 0x2D0
		::Enum_3_D03B1A3DDBB3D34D _funcType; // 0x2D8
		::System::Int32 _questID; // 0x2DC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetGeneralQuest(::System::Int32 questID, ::System::Int32 tabIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_SETGENERALQUEST_OFFSET))(this, questID, tabIndex);
		}

		::System::Void SetQuest(::System::Int32 questID, ::System::Int32 tabIndex, ::System::Boolean isMainQuest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_SETQUEST_OFFSET))(this, questID, tabIndex, isMainQuest);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void SetBtnInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_SETBTNINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void OnClickOverlord(::System::Int32 questID, ::System::Int32 tabIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONCLICKOVERLORD_OFFSET))(this, questID, tabIndex);
		}

		::System::Void OnClickGeneral(::System::Int32 questID, ::System::Int32 tabIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONCLICKGENERAL_OFFSET))(this, questID, tabIndex);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
