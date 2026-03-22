#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_112;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCA9E0F0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCA9E190)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCA9DF20)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCA9E040)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_REFRESHCARD_OFFSET UNITYSDK_OFFSET(0xCA9E300)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0xCA9EF20)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SETNEW_OFFSET UNITYSDK_OFFSET(0xCA9E270)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SWITCHINACTION_OFFSET UNITYSDK_OFFSET(0xCA9E9E0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SWITCHOUTACTION_OFFSET UNITYSDK_OFFSET(0xCA9EC80)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCA9EF90)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCA9EFC0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCA9F030)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCA9F0B0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCA9F110)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingBuffItemWidgetController_TypeDefinitionIndex = 48937;

	class UIBabeltowerFightingBuffItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_112* _view; // 0x2A0
		::MoleMole::UIGeneralBtn03WidgetController* btn; // 0x2A8
		::System::Boolean isSwitching; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetNew(::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SETNEW_OFFSET))(this, isNew);
		}

		::System::Void RefreshCard(::System::Int32 towerid, ::System::UInt32 floorIndex, ::System::Int32 cardid, ::System::Int32 cardSet, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_REFRESHCARD_OFFSET))(this, towerid, floorIndex, cardid, cardSet, callback);
		}

		::System::Void SwitchInAction(::System::Action* onSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SWITCHINACTION_OFFSET))(this, onSwitch);
		}

		::System::Void SwitchOutAction(::System::Action* onSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SWITCHOUTACTION_OFFSET))(this, onSwitch);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
