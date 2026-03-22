#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_69CBB7FF0BE6A673_20;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralSettingsTitleRowWidgetController; }
namespace MoleMole { class UIInLevelFriendCardRowWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA1DA7D0)
#define MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA1DA870)
#define MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA1DA540)
#define MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA1DA640)
#define MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER_REFRESHTEAMMATEINFO_OFFSET UNITYSDK_OFFSET(0xA1DAB00)
#define MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA1DA760)
#define MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA1DB380)
#define MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0xA1DB440)
#define MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA1DB4B0)
#define MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA1DB520)
#define MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA1DB5A0)
#define MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA1DB600)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelOnlinePlayerWidgetController_TypeDefinitionIndex = 45188;

	class UIInLevelOnlinePlayerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_69CBB7FF0BE6A673_20* _view; // 0x2A0
		::MoleMole::UIGeneralSettingsTitleRowWidgetController* _titleRow; // 0x2A8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIInLevelFriendCardRowWidgetController*>* _teamMembers; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshTeammateInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER_REFRESHTEAMMATEINFO_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEPLAYERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
