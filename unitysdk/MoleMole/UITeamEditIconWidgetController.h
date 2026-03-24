#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_61C99D337397632C_3;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_GETISEMPTY_OFFSET UNITYSDK_OFFSET(0x970EC30)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x970DDC0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONSKINBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x970DE60)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x970ECD0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x970DA90)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x970DD10)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_REFRESHAVATAR_OFFSET UNITYSDK_OFFSET(0x970DF10)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_REFRESHBUDDY_OFFSET UNITYSDK_OFFSET(0x970E7E0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_SETANISTATE_OFFSET UNITYSDK_OFFSET(0x970EB90)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x970EE90)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x970EEC0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x970EF30)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x970EFB0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x970F010)

namespace MoleMole
{
	inline static constexpr unsigned int UITeamEditIconWidgetController_TypeDefinitionIndex = 77748;

	class UITeamEditIconWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_61C99D337397632C_3* _view; // 0x2A0
		::System::Action_1<::System::Int32>* IconClickAction; // 0x2A8
		::System::Int32 Index; // 0x2B0
		::System::Boolean IsBigScene; // 0x2B4
		::UnityEngine::Material* _hpMaterial; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnSkinBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONSKINBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void RefreshAvatar(::Class_2_D89CCC627A66D0AD* avatarItem, ::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_REFRESHAVATAR_OFFSET))(this, avatarItem, isLock);
		}

		::System::Void RefreshBuddy(::System::UInt32 buddyID, ::System::Boolean hasBuddy, ::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_REFRESHBUDDY_OFFSET))(this, buddyID, hasBuddy, isLock);
		}

		::System::Void SetAniState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_SETANISTATE_OFFSET))(this);
		}

		::System::Boolean GetIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_GETISEMPTY_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
