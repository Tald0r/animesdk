#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_26F71DED66AFE0B6;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xBF50BB0)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF50BC0)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF50CD0)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF50C60)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBF50D60)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF50D70)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF50DE0)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF50DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSingalMoviePageController_TypeDefinitionIndex = 42799;

	class UICinemaSingalMoviePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_26F71DED66AFE0B6* _view; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
