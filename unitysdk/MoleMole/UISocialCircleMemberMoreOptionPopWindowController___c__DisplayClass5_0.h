#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SocialCircleMemberFriendMoreOptionContext; }
namespace MoleMole { class UISocialCircleMemberMoreOptionPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAE65990)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__SETMANAGERCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xAE659A0)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__SETMANAGERCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0xAE65C70)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMemberMoreOptionPopWindowController___c__DisplayClass5_0_TypeDefinitionIndex = 44163;

	class UISocialCircleMemberMoreOptionPopWindowController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::SocialCircleMemberFriendMoreOptionContext* circleContext; // 0x10
		::MoleMole::UISocialCircleMemberMoreOptionPopWindowController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetManagerCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__SETMANAGERCALLBACK_B__0_OFFSET))(this);
		}

		::System::Void _SetManagerCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__SETMANAGERCALLBACK_B__1_OFFSET))(this);
		}
	};
}
