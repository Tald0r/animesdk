#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F4100A598973619.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_B209BD9CC7A9C533_10;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCAA1F50)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCAA1FF0)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCAA1E00)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCAA1EA0)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xCAA12F0)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCAA20D0)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCAA2100)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCAA2170)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCAA21F0)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCAA2250)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerTrickLevelRowWidgetController_TypeDefinitionIndex = 56997;

	class UIBabeltowerTrickLevelRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B209BD9CC7A9C533_10* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Enum_3_5F4100A598973619 ratingType, ::System::Single percent, ::System::Int32 pointCount)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5F4100A598973619, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, ratingType, percent, pointCount);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
