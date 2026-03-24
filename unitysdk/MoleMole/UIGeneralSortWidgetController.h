#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A1DCD22526CC6D0.h"
#include "unitysdk/Enum_3_9BD6D4E5A68CB9EF.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_60DF562F175E001D.h"
#include "unitysdk/Struct_2_6AB58C5477BF48DC.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_316;
class Class_1_546C6222FBEA4460;
class Class_1_9E37A0DA5C41F943;
class Class_2_60DDD9C206686F44;
class Class_2_DE782794730406DC_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralFilterPopContext; }
namespace MoleMole { class UIGeneralFilterPopWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GENERATESORTERLIST_OFFSET UNITYSDK_OFFSET(0xAC6E2C0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GETFILTERBTN_OFFSET UNITYSDK_OFFSET(0xAC6E360)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xAC6E3D0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_POPWINDOW_OFFSET UNITYSDK_OFFSET(0xAC6E1A0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_SELECTEDSORTOPTIONSTATE_OFFSET UNITYSDK_OFFSET(0xAC6E180)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_SELECTEDSORTOPTIONSUBTYPE_OFFSET UNITYSDK_OFFSET(0xAC6E160)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_SELECTEDSORTOPTION_OFFSET UNITYSDK_OFFSET(0xAC6E140)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ISFILTERACTIVE_OFFSET UNITYSDK_OFFSET(0xAC6F150)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAC6F650)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONFILTERBTNCLICK_OFFSET UNITYSDK_OFFSET(0xAC6F7D0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAC6F6F0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAC6F280)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAC6F4E0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_REFRESHSORTOPTIONS_OFFSET UNITYSDK_OFFSET(0xAC6E220)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xAC6E990)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_RESETALL_OFFSET UNITYSDK_OFFSET(0xAC6EF10)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETCHILDSIZE_OFFSET UNITYSDK_OFFSET(0xAC6E3E0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETCONSOLEKEY_OFFSET UNITYSDK_OFFSET(0xAC6E510)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETFILTERINSTANCE_OFFSET UNITYSDK_OFFSET(0xAC6E1B0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETFILTERSTATE_OFFSET UNITYSDK_OFFSET(0xAC6FA80)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC6FD40)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER__ONUIINIT_B__29_0_OFFSET UNITYSDK_OFFSET(0xAC6FE20)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAC6FE50)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAC6FEC0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAC6FF40)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAC6FFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSortWidgetController_TypeDefinitionIndex = 46926;

	class UIGeneralSortWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_DE782794730406DC_3* _view; // 0x2A0
		::System::Action* _onChanged; // 0x2A8
		::System::Action_1<::System::Int32>* _onDeleteClick; // 0x2B0
		::System::Action* _onWindowOpened; // 0x2B8
		::System::Action* _onWindowFadeout; // 0x2C0
		::Class_0_16E4307DCC419505_316* _filterInstance; // 0x2C8
		::System::Collections::Generic::List_1<::Class_1_546C6222FBEA4460*>* ToggleInfos; // 0x2D0
		::MoleMole::UIGeneralFilterPopContext* _filterPopContext; // 0x2D8
		::MoleMole::UIGeneralFilterPopWindowController* _popWindow; // 0x2E0
		::Class_1_9E37A0DA5C41F943* _data; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3A1DCD22526CC6D0 get_SelectedSortOption()
		{
			return ((::Enum_3_3A1DCD22526CC6D0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_SELECTEDSORTOPTION_OFFSET))(this);
		}

		::System::Int32 get_SelectedSortOptionSubtype()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_SELECTEDSORTOPTIONSUBTYPE_OFFSET))(this);
		}

		::Struct_2_60DF562F175E001D get_SelectedSortOptionState()
		{
			return ((::Struct_2_60DF562F175E001D(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_SELECTEDSORTOPTIONSTATE_OFFSET))(this);
		}

		::MoleMole::UIGeneralFilterPopWindowController* get_PopWindow()
		{
			return ((::MoleMole::UIGeneralFilterPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_POPWINDOW_OFFSET))(this);
		}

		::System::Void SetFilterInstance(::Class_0_16E4307DCC419505_316* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_316*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETFILTERINSTANCE_OFFSET))(this, instance);
		}

		::System::Void RefreshSortOptions(::Il2CppArray<::Struct_2_6AB58C5477BF48DC>* nextSortOptions, ::Struct_2_60DF562F175E001D defaultState, ::System::Boolean tryToKeepOptionUnchanged)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Struct_2_6AB58C5477BF48DC>*, ::Struct_2_60DF562F175E001D, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_REFRESHSORTOPTIONS_OFFSET))(this, nextSortOptions, defaultState, tryToKeepOptionUnchanged);
		}

		::System::Collections::Generic::List_1<::Enum_3_3A1DCD22526CC6D0>* GenerateSorterList(::System::Collections::Generic::IList_1<::Enum_3_3A1DCD22526CC6D0>* confignedSorters, ::Enum_3_3A1DCD22526CC6D0& inverseSort, ::System::Collections::Generic::IList_1<::Enum_3_3A1DCD22526CC6D0>* highPriorityConfignedSorters)
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_3A1DCD22526CC6D0>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::Enum_3_3A1DCD22526CC6D0>*, ::Enum_3_3A1DCD22526CC6D0&, ::System::Collections::Generic::IList_1<::Enum_3_3A1DCD22526CC6D0>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GENERATESORTERLIST_OFFSET))(this, confignedSorters, inverseSort, highPriorityConfignedSorters);
		}

		::Class_2_60DDD9C206686F44* GetFilterBtn()
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GETFILTERBTN_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_316* get_Instance()
		{
			return ((::Class_0_16E4307DCC419505_316*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_INSTANCE_OFFSET))(this);
		}

		::System::Void SetChildSize(::UnityEngine::Vector2 anchorPos, ::UnityEngine::Vector2 size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETCHILDSIZE_OFFSET))(this, anchorPos, size);
		}

		::System::Void SetConsoleKey(::MoleMole::InputLogicEventType logicEventType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETCONSOLEKEY_OFFSET))(this, logicEventType);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ResetAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_RESETALL_OFFSET))(this);
		}

		::System::Boolean IsFilterActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ISFILTERACTIVE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnFilterBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONFILTERBTNCLICK_OFFSET))(this);
		}

		::System::Void SetFilterState(::System::Int32 groupIdx, ::System::Int32 dataIdx, ::System::Boolean state, ::Enum_3_9BD6D4E5A68CB9EF type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::Enum_3_9BD6D4E5A68CB9EF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETFILTERSTATE_OFFSET))(this, groupIdx, dataIdx, state, type);
		}

		::System::Void _OnUIInit_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER__ONUIINIT_B__29_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
