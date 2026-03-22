#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_7;
class Class_2_208CC9941471731A_789;
class Class_2_79F6D62CE30E3F8E_94;
class Class_2_DA8BF519212BAE65;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_CLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x8C46E10)
#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_GERREWARDREQ_OFFSET UNITYSDK_OFFSET(0x8C463D0)
#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8C46230)
#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x8C46930)
#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_ONTAKEREWARDHANDLE_OFFSET UNITYSDK_OFFSET(0x8C46570)
#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8C46850)
#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C460B0)
#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_REFRESHREWARDBTNREDPOINT_OFFSET UNITYSDK_OFFSET(0x8C46FB0)
#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x8C465E0)
#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C47150)
#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8C471E0)
#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x8C47250)
#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8C472D0)
#define MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C47350)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRewardListRowWidgetController_TypeDefinitionIndex = 73758;

	class UIGeneralRewardListRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_94* _view; // 0x2D0
		::Class_2_DA8BF519212BAE65* _abyssModel; // 0x2D8
		::Class_2_208CC9941471731A_789* rewardCfg; // 0x2E0
		::System::UInt32 groupID; // 0x2E8
		::MoleMole::UIGeneralPopUpHintWidgetController* _popUpHintController; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _rewardIconList; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void GerRewardReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_GERREWARDREQ_OFFSET))(this);
		}

		::System::Void OnTakeRewardHandle(::Class_0_16E4307DCC419505_7* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_ONTAKEREWARDHANDLE_OFFSET))(this, rcvMessage);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void RefreshRewardBtnRedpoint(::System::Boolean isRed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_REFRESHREWARDBTNREDPOINT_OFFSET))(this, isRed);
		}

		::System::Void ClearRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER_CLEARREWARDS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
