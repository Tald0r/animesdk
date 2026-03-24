#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_1685EC66FBD28897;
class Class_2_208CC9941471731A_809;
class Class_2_8FCB22336286BF09_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIFishingContestQuestListWidgetController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_GETTASKTOGGLEOPENID_OFFSET UNITYSDK_OFFSET(0xADD7640)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xADD5D40)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ISTASKTOGGLEFINISH_OFFSET UNITYSDK_OFFSET(0xADD7210)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ISTASKTOGGLELOCK_OFFSET UNITYSDK_OFFSET(0xADD7030)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONCLICKTASK_OFFSET UNITYSDK_OFFSET(0xADD76C0)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xADD5D50)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONGOTOTASKBUTTON_OFFSET UNITYSDK_OFFSET(0xADD85B0)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONSHOWTIPSBUTTON_OFFSET UNITYSDK_OFFSET(0xADD8A30)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONTOGGLECLICKPRECHECK_OFFSET UNITYSDK_OFFSET(0xADD74F0)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONTOGGLE_OFFSET UNITYSDK_OFFSET(0xADD6A40)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xADD73B0)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xADD5DF0)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_SETPANELDATA_OFFSET UNITYSDK_OFFSET(0xADD6610)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_SHOWREWARD_OFFSET UNITYSDK_OFFSET(0xADD8110)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_SORTMETHOD_OFFSET UNITYSDK_OFFSET(0xADD7440)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xADD8B40)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xADD8C90)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xADD8D00)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xADD8D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestQuestPageController_TypeDefinitionIndex = 54268;

	class UIFishingContestQuestPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_8FCB22336286BF09_2* _view; // 0x2F8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_809*>*>* _typeToTaskListMap; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIFishingContestQuestListWidgetController*>* _taskTemplateList; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* _rewardTemplateList; // 0x310
		::MoleMole::UIFishingContestQuestListWidgetController* _currentTaskTemplateCache; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetPanelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_SETPANELDATA_OFFSET))(this);
		}

		::System::Int32 SortMethod(::Class_2_208CC9941471731A_809* first, ::Class_2_208CC9941471731A_809* second)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_809*, ::Class_2_208CC9941471731A_809*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_SORTMETHOD_OFFSET))(this, first, second);
		}

		::System::Boolean OnToggleClickPreCheck(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONTOGGLECLICKPRECHECK_OFFSET))(this, index);
		}

		::System::UInt32 GetTaskToggleOpenId(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_GETTASKTOGGLEOPENID_OFFSET))(this, index);
		}

		::System::Boolean IsTaskToggleLock(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ISTASKTOGGLELOCK_OFFSET))(this, index);
		}

		::System::Boolean IsTaskToggleFinish(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ISTASKTOGGLEFINISH_OFFSET))(this, index);
		}

		::System::Void OnToggle(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONTOGGLE_OFFSET))(this, index);
		}

		::System::Void OnClickTask(::MoleMole::UIFishingContestQuestListWidgetController* template_)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFishingContestQuestListWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONCLICKTASK_OFFSET))(this, template_);
		}

		::System::Void ShowReward(::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_SHOWREWARD_OFFSET))(this, dataList);
		}

		::System::Void OnGotoTaskButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONGOTOTASKBUTTON_OFFSET))(this);
		}

		::System::Void OnShowTipsButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER_ONSHOWTIPSBUTTON_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
