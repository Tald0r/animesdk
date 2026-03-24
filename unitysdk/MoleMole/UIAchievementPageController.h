#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5897CA91FEB65CA5;
class Class_2_208CC9941471731A_661;
class Class_2_208CC9941471731A_825;
class Class_2_47895460AA5C21D5;
class Class_2_47895460AA5C21D5_Class_2_C52D927DDDCC4659;
class Class_2_FB3DE636334B31A4;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIAchievementTabWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ACHIEVEMENTCOMPARISON_OFFSET UNITYSDK_OFFSET(0xC353EB0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_CHECKAUTOSELECTGETAWARD_OFFSET UNITYSDK_OFFSET(0xC3545C0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_GETALLCALLBACK_OFFSET UNITYSDK_OFFSET(0xC3548B0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_GETFIRSTCLASSCONFIGBYINDEX_OFFSET UNITYSDK_OFFSET(0xC351BB0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xC350BE0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONCLICKFIRSTTAB_OFFSET UNITYSDK_OFFSET(0xC351E60)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC350BF0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONGETDATAHANDLE_OFFSET UNITYSDK_OFFSET(0xC354780)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xC352430)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC354810)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONSELECTSECONDTAB_OFFSET UNITYSDK_OFFSET(0xC353380)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xC352770)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC351400)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC350C90)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC3514F0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUPDATEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0xC353FF0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0xC353490)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHARROWTIPS_OFFSET UNITYSDK_OFFSET(0xC3536D0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHGETALL_OFFSET UNITYSDK_OFFSET(0xC353D40)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHRANKS_OFFSET UNITYSDK_OFFSET(0xC351F30)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHSECONDTABS_OFFSET UNITYSDK_OFFSET(0xC352AF0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_SECONDTABCOMPARISON_OFFSET UNITYSDK_OFFSET(0xC353C90)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0xC3528D0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC354B90)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC3549F0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC354BE0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xC354C50)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xC354CB0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC354CC0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC354CD0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC354CE0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0xC354D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIAchievementPageController_TypeDefinitionIndex = 43385;

	class UIAchievementPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Corners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIAchievementPageController_TypeDefinitionIndex)->GetStaticField(0x41BA0);
		}
		::Class_2_47895460AA5C21D5* _view; // 0x2F8
		::System::Collections::Generic::List_1<::Class_2_47895460AA5C21D5_Class_2_C52D927DDDCC4659*>* _rankWidgets; // 0x300
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_825*>* _secondTabConfigs; // 0x308
		::System::Collections::Generic::List_1<::Class_1_5897CA91FEB65CA5*>* _achievementConfigs; // 0x310
		::System::Collections::Generic::List_1<::MoleMole::UIAchievementTabWidgetController*>* _secondTabControllers; // 0x318
		::Class_2_FB3DE636334B31A4* _achievementModel; // 0x320
		::System::Int32 _curerntSecondTabId; // 0x328
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_661*>* _firstClassConfigs; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Boolean TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32& selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Void OnClickFirstTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONCLICKFIRSTTAB_OFFSET))(this, index);
		}

		::System::Void OnSelectSecondTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONSELECTSECONDTAB_OFFSET))(this, index);
		}

		::System::Void RefreshSecondTabs(::System::Int32 firstTabId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHSECONDTABS_OFFSET))(this, firstTabId);
		}

		::System::Int32 SecondTabComparison(::Class_2_208CC9941471731A_825* x, ::Class_2_208CC9941471731A_825* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_825*, ::Class_2_208CC9941471731A_825*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_SECONDTABCOMPARISON_OFFSET))(this, x, y);
		}

		::System::Void RefreshAchievements(::System::Int32 secondTabId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHACHIEVEMENTS_OFFSET))(this, secondTabId);
		}

		::System::Void RefreshGetAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHGETALL_OFFSET))(this);
		}

		::System::Int32 AchievementComparison(::Class_1_5897CA91FEB65CA5* x, ::Class_1_5897CA91FEB65CA5* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5897CA91FEB65CA5*, ::Class_1_5897CA91FEB65CA5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ACHIEVEMENTCOMPARISON_OFFSET))(this, x, y);
		}

		::System::Void RefreshRanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHRANKS_OFFSET))(this);
		}

		::System::Void OnUpdateDataHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUPDATEDATAHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnGetDataHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONGETDATAHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnMoveCallback(::MonoUITableScrollV2_MoveContext arg1, ::System::Single arg2)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONMOVECALLBACK_OFFSET))(this, arg1, arg2);
		}

		::System::Void RefreshArrowTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHARROWTIPS_OFFSET))(this);
		}

		::System::Void GetAllCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_GETALLCALLBACK_OFFSET))(this);
		}

		::System::Void CheckAutoSelectGetAward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_CHECKAUTOSELECTGETAWARD_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_661* GetFirstClassConfigByIndex(::System::Int32 index)
		{
			return ((::Class_2_208CC9941471731A_661*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_GETFIRSTCLASSCONFIGBYINDEX_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean __base_TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* P0, ::System::Int32& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, P0, P1);
		}
	};
}
