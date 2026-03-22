#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_64;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBEDB5D0)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBEDB670)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBEDB480)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBEDB520)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBUFFID_OFFSET UNITYSDK_OFFSET(0xBEDB750)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBUFF_1_OFFSET UNITYSDK_OFFSET(0xBEDBEC0)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBUFF_OFFSET UNITYSDK_OFFSET(0xBEDBBB0)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBEDC330)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBEDC360)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBEDC3D0)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBEDC450)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBEDC4B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeInLevelPauseBuffInfoWidgetController_TypeDefinitionIndex = 61161;

	class UIBossChallengeInLevelPauseBuffInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_64* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshBuffID(::System::Int32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBUFFID_OFFSET))(this, buffID);
		}

		::System::Void RefreshBuff(::System::String* nameKey, ::Foundation::AssetPath iconPath, ::System::String* descKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBUFF_OFFSET))(this, nameKey, iconPath, descKey);
		}

		::System::Void RefreshBuff_1(::System::String* nameKey, ::Foundation::AssetPath iconPath, ::System::String* descKey, ::System::Boolean showTitle, ::System::Boolean showBuff, ::System::Boolean showDesc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBUFF_1_OFFSET))(this, nameKey, iconPath, descKey, showTitle, showBuff, showDesc);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
