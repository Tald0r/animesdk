#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_1685EC66FBD28897;
class Class_2_7EFBB899B4E4B40A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA296380)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA296420)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA2960F0)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA2962D0)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0xA255C80)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA296500)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_SETQUESTFIRSTREWARD_OFFSET UNITYSDK_OFFSET(0xA296590)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA296820)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xA2968D0)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA2968F0)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA296960)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA2969E0)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA296A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBottomRewardInfoWidgetController_TypeDefinitionIndex = 44923;

	class UIGeneralBottomRewardInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 MAX_ITEM_SHOW_COUNT = 0x8; // 0x0
		::Class_2_7EFBB899B4E4B40A* _view; // 0x2A0
		::System::Action* _onClick; // 0x2A8
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* _itemCtrlList; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* itemList, ::System::Action* onClick, ::System::Int32 maxShowCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemList, onClick, maxShowCnt);
		}

		::System::Void SetQuestFirstReward(::System::Int32 questID, ::System::Action* overrideClickkAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_SETQUESTFIRSTREWARD_OFFSET))(this, questID, overrideClickkAction);
		}

		::System::Void RefreshView_1(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* itemList, ::System::Action_1<::Class_1_1685EC66FBD28897*>* onSetView, ::System::Action* onClick, ::System::Int32 maxShowCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*, ::System::Action_1<::Class_1_1685EC66FBD28897*>*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, itemList, onSetView, onClick, maxShowCnt);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
