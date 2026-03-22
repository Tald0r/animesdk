#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87D98DA5C1AD6384_Enum_3_3DCE6AAF7E47B319.h"
#include "unitysdk/Class_1_87D98DA5C1AD6384_Enum_3_A188519F532ACB95.h"
#include "unitysdk/MoleMole/UILevelGeneralWinResultDialogPopWindowController.h"

class Class_2_1DE31F486C9C83AD;
class Class_2_79F6D62CE30E3F8E_99;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralExpProgressWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ACQUIRETITLETEXT_OFFSET UNITYSDK_OFFSET(0xA41A690)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_GETBUTTONCOMBINESTATE_OFFSET UNITYSDK_OFFSET(0xA41A5D0)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_GETPANELSTATE_OFFSET UNITYSDK_OFFSET(0xA41A630)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA41A030)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONPOPSHOWED_OFFSET UNITYSDK_OFFSET(0xA41A720)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA41A400)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA41A170)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_REFRESHEXP_OFFSET UNITYSDK_OFFSET(0xA41AA10)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA41B330)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER__ONANIMEVENT_OFFSET UNITYSDK_OFFSET(0xA41B200)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA41B340)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA41B3E0)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA41B3F0)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseResultPageController_TypeDefinitionIndex = 52016;

	class UITowerDefenseResultPageController : public ::MoleMole::UILevelGeneralWinResultDialogPopWindowController
	{
	public:
		::MoleMole::UIGeneralExpProgressWidgetController* _expCtroller; // 0x358
		::Class_2_1DE31F486C9C83AD* towerModel; // 0x360
		::Class_2_79F6D62CE30E3F8E_99* _view; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_1_87D98DA5C1AD6384_Enum_3_3DCE6AAF7E47B319 GetButtonCombineState()
		{
			return ((::Class_1_87D98DA5C1AD6384_Enum_3_3DCE6AAF7E47B319(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_GETBUTTONCOMBINESTATE_OFFSET))(this);
		}

		::Class_1_87D98DA5C1AD6384_Enum_3_A188519F532ACB95 GetPanelState()
		{
			return ((::Class_1_87D98DA5C1AD6384_Enum_3_A188519F532ACB95(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_GETPANELSTATE_OFFSET))(this);
		}

		::System::Void AcquireTitleText(::System::String*& mainTitleTextID, ::System::String*& resultTitleTextID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ACQUIRETITLETEXT_OFFSET))(this, mainTitleTextID, resultTitleTextID);
		}

		::System::Void OnPopShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONPOPSHOWED_OFFSET))(this);
		}

		::System::Void _OnAnimEvent(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER__ONANIMEVENT_OFFSET))(this, args);
		}

		::System::Void RefreshExp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_REFRESHEXP_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
