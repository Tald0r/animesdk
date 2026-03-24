#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_44EFB945CAE441A3;
class Class_1_A11CB4C08EF906E4;
class Class_1_D375C91CCE5D3999;
class Class_1_EE462DDB9EDFAFDA;
class Class_2_208CC9941471731A_163;
class Class_2_79F6D62CE30E3F8E_57;
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_CHECKHANDLE_OFFSET UNITYSDK_OFFSET(0x95BD170)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_CLOSEOVERHANDLE_OFFSET UNITYSDK_OFFSET(0x95BB9F0)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x95BBB80)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_GETTEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x95BB330)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_GOBIGWORLDPLAY_OFFSET UNITYSDK_OFFSET(0x95BCE90)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_LOADBACKGROUND_OFFSET UNITYSDK_OFFSET(0x95BC430)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONBACKCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x95BB3A0)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95BC7C0)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONMAINCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x95BBA90)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONQUESTROWSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x95BC700)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95BD1F0)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95BAA70)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x95BBDC0)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_OPENHISTORYVIEW_OFFSET UNITYSDK_OFFSET(0x95BCDE0)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_SETDEFAULTSELECT_OFFSET UNITYSDK_OFFSET(0x95BC860)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_SETISREAD_OFFSET UNITYSDK_OFFSET(0x95BB480)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER__CREATEROW_OFFSET UNITYSDK_OFFSET(0x95BB250)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x95BD2D0)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x95BD370)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95BD3E0)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95BD450)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95BD4D0)
#define MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x95BD530)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaBigWorldWidgetController_TypeDefinitionIndex = 50467;

	class UIYorozuyaBigWorldWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_57* _view; // 0x2A0
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* activityRewardBtn; // 0x2A8
		::Class_1_EE462DDB9EDFAFDA* _yorozuyaData; // 0x2B0
		::Class_2_208CC9941471731A_163* currentSelect; // 0x2B8
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_163*>* scrollChessboardList; // 0x2C0
		::UnityEngine::GameObject* _difficutyBg; // 0x2C8
		::Class_1_D375C91CCE5D3999* _activityBaseData; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _CreateRow(::System::Func_1<::MoleMole::UIControlReference*>* controlReference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER__CREATEROW_OFFSET))(this, controlReference);
		}

		::System::Int32 GetTemplateIndex(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_GETTEMPLATEINDEX_OFFSET))(this, arg);
		}

		::System::Void OnBackClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONBACKCLICKHANDLE_OFFSET))(this);
		}

		::System::Void SetIsRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_SETISREAD_OFFSET))(this);
		}

		::System::Void CloseOverHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_CLOSEOVERHANDLE_OFFSET))(this);
		}

		::System::Void OnMainClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONMAINCLICKHANDLE_OFFSET))(this);
		}

		::Class_1_A11CB4C08EF906E4* GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* config)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, config);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void LoadBackground()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_LOADBACKGROUND_OFFSET))(this);
		}

		::System::Void OnQuestRowSelectHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONQUESTROWSELECTHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetDefaultSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_SETDEFAULTSELECT_OFFSET))(this);
		}

		::System::Void OpenHistoryView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_OPENHISTORYVIEW_OFFSET))(this);
		}

		::System::Void GoBigWorldPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_GOBIGWORLDPLAY_OFFSET))(this);
		}

		::System::Boolean CheckHandle(::Class_1_44EFB945CAE441A3* beginData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_CHECKHANDLE_OFFSET))(this, beginData);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_1_A11CB4C08EF906E4* __base_GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* P0)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYABIGWORLDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
