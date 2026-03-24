#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_709BDFCD92369193;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAC43160)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAC43170)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAC43280)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAC43210)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC43310)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAC43320)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAC43390)
#define MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAC433A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaOngoingTipsPageController_TypeDefinitionIndex = 71647;

	class UICinemaOngoingTipsPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_709BDFCD92369193* _view; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
