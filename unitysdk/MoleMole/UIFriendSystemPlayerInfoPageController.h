#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_22CEBA3D1CB491EF;
class Class_2_22CEBA3D1CB491EF_Class_2_F16A6159917E38E8;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIPersonalInfoWidgetController; }
namespace MoleMole { class UIRopeMakerWidgetController; }

#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_GETINITSELECTTAB_OFFSET UNITYSDK_OFFSET(0x9BDE9A0)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x9BDE330)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x9BDEDA0)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9BDE340)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x9BDEC30)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9BDED10)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9BDE3E0)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9BDE640)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_SHOWPERSONALINFO_OFFSET UNITYSDK_OFFSET(0x9BDF100)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_SHOWROPEMAKER_OFFSET UNITYSDK_OFFSET(0x9BDF010)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9BDF220)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9BDF230)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x9BDF2A0)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9BDF310)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9BDF320)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9BDF330)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemPlayerInfoPageController_TypeDefinitionIndex = 76384;

	class UIFriendSystemPlayerInfoPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_22CEBA3D1CB491EF* _view; // 0x2F8
		::Class_2_22CEBA3D1CB491EF_Class_2_F16A6159917E38E8* _personalInfoWidgetView; // 0x300
		::MoleMole::UIPersonalInfoWidgetController* _personalInfoController; // 0x308
		::MoleMole::UIRopeMakerWidgetController* _ropeMakerWidgetController; // 0x310
		::System::Int32 _NEWBIE_INDEX; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Int32 GetInitSelectTab()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_GETINITSELECTTAB_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_ONCLICKTAB_OFFSET))(this, index);
		}

		::System::Void ShowPersonalInfo(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_SHOWPERSONALINFO_OFFSET))(this, isShow);
		}

		::System::Void ShowRopeMaker(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_SHOWROPEMAKER_OFFSET))(this, isShow);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
