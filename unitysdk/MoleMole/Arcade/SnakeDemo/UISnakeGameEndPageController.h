#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_60638234271CCDB8_145;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISnakeDuelOnlineEndingChildWindowController; }
namespace MoleMole::Arcade::SnakeDemo { class UISnakeDuelEndingChildWindowController; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19B45FE0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19B46430)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19B45FF0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19B464C0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B46530)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19B46540)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19B465B0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19B465C0)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int UISnakeGameEndPageController_TypeDefinitionIndex = 81689;

	class UISnakeGameEndPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_145* _view; // 0x2F8
		::MoleMole::Arcade::SnakeDemo::UISnakeDuelEndingChildWindowController* _endingCtrl; // 0x300
		::MoleMole::UISnakeDuelOnlineEndingChildWindowController* _endingOnlineCtrl; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showContextBase)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONSHOW_OFFSET))(this, showContextBase);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
