#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_1685EC66FBD28897;
class Class_2_1A3197598F874EB7;
class Class_2_79F6D62CE30E3F8E_39;
class KnowledgeData;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_DOGOTRRWARD_OFFSET UNITYSDK_OFFSET(0xA801470)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_GETID_OFFSET UNITYSDK_OFFSET(0xA802110)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_GETSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0xA802270)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA802200)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA801080)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xA8014D0)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA801120)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA801390)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA800D50)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0xA801310)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_SHOWQUESTDETAIL_OFFSET UNITYSDK_OFFSET(0xA8020B0)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_SHOWUI_OFFSET UNITYSDK_OFFSET(0xA801690)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA8024E0)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA802570)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xA8025E0)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA802650)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA8026D0)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA802750)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnowledgeRowWidgetController_TypeDefinitionIndex = 40130;

	class UIInterKnowledgeRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_39* _view; // 0x2D0
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* showList; // 0x2D8
		::KnowledgeData* _data; // 0x2E0
		::Class_2_1A3197598F874EB7* _questModel; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DoGotRrward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_DOGOTRRWARD_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void SetData(::KnowledgeData* data)
		{
			return ((::System::Void(*)(::PVOID, ::KnowledgeData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, data);
		}

		::System::Void ShowQuestDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_SHOWQUESTDETAIL_OFFSET))(this);
		}

		::System::Int32 GetID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_GETID_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ISEMPTY_OFFSET))(this);
		}

		::System::Void ShowUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_SHOWUI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* GetShowRewardList(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* dataList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_GETSHOWREWARDLIST_OFFSET))(this, dataList);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
