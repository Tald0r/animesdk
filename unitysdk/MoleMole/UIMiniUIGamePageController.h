#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_56AF18CD74DA940A;
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_GET_CONTENTROOT_OFFSET UNITYSDK_OFFSET(0xA83B0D0)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA83B0C0)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA83B0F0)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA83B190)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA83B320)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xA83B3B0)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA83B4A0)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA83B4B0)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA83B520)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA83B530)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xA83B540)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniUIGamePageController_TypeDefinitionIndex = 47103;

	class UIMiniUIGamePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_56AF18CD74DA940A* _view; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ContentRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_GET_CONTENTROOT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
