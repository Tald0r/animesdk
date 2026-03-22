#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_5DA2E7556103D5A3_349;
class Class_2_08E43914789BE5F3;
class Class_2_BCA11629035BC7F2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB2A59A0)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB2A5A40)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB2A5740)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB2A57E0)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_REFRESHCARD_OFFSET UNITYSDK_OFFSET(0xB2A5B20)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A5DF0)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER__UPDATEBOSSIMAGE_OFFSET UNITYSDK_OFFSET(0xB2A5D50)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB2A5E20)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB2A5E90)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB2A5F10)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB2A5F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerRecordEnemyWidgetController_TypeDefinitionIndex = 48660;

	class UIBabeltowerRecordEnemyWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_BCA11629035BC7F2* _view; // 0x2A0
		::Class_2_08E43914789BE5F3* towerModel; // 0x2A8
		::System::Int32 curFloor; // 0x2B0
		::System::Int32 towerid; // 0x2B4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshCard(::System::Int32 towerid, ::System::Int32 floor, ::System::Int32 monsterCardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_REFRESHCARD_OFFSET))(this, towerid, floor, monsterCardID);
		}

		::System::Void _UpdateBossImage(::Class_1_5DA2E7556103D5A3_349* cardConfigTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_349*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER__UPDATEBOSSIMAGE_OFFSET))(this, cardConfigTemplate);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
