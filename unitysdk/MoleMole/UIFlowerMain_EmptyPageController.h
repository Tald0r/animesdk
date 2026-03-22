#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_69CBB7FF0BE6A673_21;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerMainPageController; }
namespace MoleMole { class UIFlowerMain_EmptyPageController_Context; }

#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xBF77120)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0xBF771D0)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF77130)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF77430)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF77230)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBF772A0)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBF774C0)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0xBF774D0)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF77530)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF775A0)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF775B0)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBF775C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_EmptyPageController_TypeDefinitionIndex = 45713;

	class UIFlowerMain_EmptyPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_69CBB7FF0BE6A673_21* _view; // 0x308
		::MoleMole::UIFlowerMain_EmptyPageController_Context* _context; // 0x310
		::MoleMole::UIFlowerMainPageController* _flowerMainPageController; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
