#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_AAB024DAC549A2AF;
class Class_2_28BDF4B69EE93815_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIYorozuyaRallyQuestItemWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONBTNCLICK_OFFSET UNITYSDK_OFFSET(0x65C63D0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x65C5820)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x65C4E30)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x65C58C0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x65C4C30)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHNEW_OFFSET UNITYSDK_OFFSET(0x65C6210)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHSCROLLVIEWCONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x65C6540)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHSHOWSUBITEMS_OFFSET UNITYSDK_OFFSET(0x65C5AB0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x65C4F90)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REGISTERONCLICKRALLYQUEST_OFFSET UNITYSDK_OFFSET(0x65C59A0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_RESELECTRALLYQUEST_OFFSET UNITYSDK_OFFSET(0x65C5E40)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_SELECTRALLYCHAPTER_OFFSET UNITYSDK_OFFSET(0x65C5A10)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_SELECTRALLYQUEST_OFFSET UNITYSDK_OFFSET(0x65C5CD0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_SETNAME_OFFSET UNITYSDK_OFFSET(0x65C5F10)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x65C65E0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x65C6680)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__REFRESHSHOWSUBITEMS_B__11_0_OFFSET UNITYSDK_OFFSET(0x65C66F0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x65C6690)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x65C6730)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x65C67A0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x65C6820)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x65C68A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaRallyRowWidgetController_TypeDefinitionIndex = 78132;

	class UIYorozuyaRallyRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_28BDF4B69EE93815_2* _view; // 0x2D0
		::Class_1_AAB024DAC549A2AF* _chapterData; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIYorozuyaRallyQuestItemWidgetController*>* _questItemWidgets; // 0x2E0
		::System::Action_2<::System::Int32, ::System::Int32>* _onClickRallyQuest; // 0x2E8
		::System::Int32 _index; // 0x2F0
		::System::Boolean _showSubItems; // 0x2F4
		::System::Int32 _curSelectQuestIndex; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RegisterOnClickRallyQuest(::System::Action_2<::System::Int32, ::System::Int32>* onSelectRallyQuest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REGISTERONCLICKRALLYQUEST_OFFSET))(this, onSelectRallyQuest);
		}

		::System::Void SelectRallyChapter(::System::Boolean select, ::System::Boolean delayPlayFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_SELECTRALLYCHAPTER_OFFSET))(this, select, delayPlayFadeIn);
		}

		::System::Void SelectRallyQuest(::System::Int32 questIndex, ::System::Boolean isDefaultSelect, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_SELECTRALLYQUEST_OFFSET))(this, questIndex, isDefaultSelect, force);
		}

		::System::Void ReSelectRallyQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_RESELECTRALLYQUEST_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONBTNCLICK_OFFSET))(this);
		}

		::System::Void RefreshShowSubItems(::System::Boolean showSubItems, ::System::Boolean delayPlayFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHSHOWSUBITEMS_OFFSET))(this, showSubItems, delayPlayFadeIn);
		}

		::System::Void RefreshScrollViewContentActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHSCROLLVIEWCONTENTACTIVE_OFFSET))(this);
		}

		::System::Void SetName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_SETNAME_OFFSET))(this);
		}

		::System::Void RefreshNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHNEW_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, args);
		}

		::System::Void _RefreshView_b__9_0(::System::Int32 questIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__REFRESHVIEW_B__9_0_OFFSET))(this, questIndex);
		}

		::System::Void _RefreshShowSubItems_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__REFRESHSHOWSUBITEMS_B__11_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
