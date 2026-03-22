#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7EFBB899B4E4B40A_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD040F20)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD040FC0)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD040DD0)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD040E70)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_REFRESHMOVIE_OFFSET UNITYSDK_OFFSET(0xD0410A0)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD0412E0)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD041310)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD041380)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD041400)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD041460)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaNewMovieWidgetController_TypeDefinitionIndex = 64922;

	class UICinemaNewMovieWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7EFBB899B4E4B40A_1* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshMovie(::System::Int32 cinemaID, ::System::Boolean isSingleLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_REFRESHMOVIE_OFFSET))(this, cinemaID, isSingleLevel);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
