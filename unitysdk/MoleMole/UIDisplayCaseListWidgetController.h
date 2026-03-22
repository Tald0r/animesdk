#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_D890F2F8C9260D13;
class Class_2_79AE422BA06F6D26_2;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_BEGINDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x806E520)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_DRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x806E5C0)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ENDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x806E780)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x806E170)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x806D520)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x806D820)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x806D5C0)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x806D250)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x806D900)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x806E440)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x806E800)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x806E810)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x806E820)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x806E890)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x806E910)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x806E990)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseListWidgetController_TypeDefinitionIndex = 36648;

	class UIDisplayCaseListWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_2* _view; // 0x2D0
		::Class_1_D890F2F8C9260D13* _ctx; // 0x2D8
		::UnityEngine::Vector2 startDragPos; // 0x2E0
		::System::Boolean isUsedUp; // 0x2E8
		::System::Boolean isSingle; // 0x2E9
		::System::Boolean isUnlock; // 0x2EA
		::System::Boolean dragging; // 0x2EB

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void BeginDragCallback(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_BEGINDRAGCALLBACK_OFFSET))(this, eventData);
		}

		::System::Void DragCallback(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_DRAGCALLBACK_OFFSET))(this, eventData);
		}

		::System::Void EndDragCallback(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ENDDRAGCALLBACK_OFFSET))(this, eventData);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
