#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ETrainingRoomItemType.h"
#include "unitysdk/MoleMole/UIGeneralOptionWidgetController.h"

class Class_2_2930B6D633C2701E_2;
class Class_3_5C2B812082E67330;
class Class_4_7D91CA380C94C005;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Config { class ConfigTrainingRoom; }

#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_GETISOPENSLELECT_OFFSET UNITYSDK_OFFSET(0x6CA5450)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x6CA4520)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_ONDROPDOWNSELECT_OFFSET UNITYSDK_OFFSET(0x6CA4EF0)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x6CA46E0)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x6CA4220)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_RECORDSELECTINFO_OFFSET UNITYSDK_OFFSET(0x6CA5350)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_SPAWNSELECTLIST_OFFSET UNITYSDK_OFFSET(0x6CA4750)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x6CA54C0)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x6CA54F0)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x6CA5500)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTrainingRoomWidgetController_TypeDefinitionIndex = 77389;

	class UIInLevelPauseTrainingRoomWidgetController : public ::MoleMole::UIGeneralOptionWidgetController
	{
	public:
		::Class_2_2930B6D633C2701E_2* _view; // 0x2A8
		::MoleMole::Config::ConfigTrainingRoom* _trainingRoomConfig; // 0x2B0
		::Class_4_7D91CA380C94C005* _gameContext; // 0x2B8
		::Class_3_5C2B812082E67330* _levelTrainingRoomComponent; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void SpawnSelectList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_SPAWNSELECTLIST_OFFSET))(this);
		}

		::System::Void OnDropDownSelect(::System::Int32 changeType, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_ONDROPDOWNSELECT_OFFSET))(this, changeType, index);
		}

		::System::Boolean GetIsOpenSlelect(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_GETISOPENSLELECT_OFFSET))(this, index);
		}

		::System::Void RecordSelectInfo(::MoleMole::Config::ETrainingRoomItemType changeType, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ETrainingRoomItemType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_RECORDSELECTINFO_OFFSET))(this, changeType, index);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
