#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SocialCircleMemberFriendMoreOptionContext; }
namespace MoleMole { class UISocialCircleMemberMoreOptionPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x73C4A10)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_0__KICKOUTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x73C4A20)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_0__KICKOUTCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x73C4CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMemberMoreOptionPopWindowController___c__DisplayClass3_0_TypeDefinitionIndex = 44166;

	class UISocialCircleMemberMoreOptionPopWindowController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MoleMole::SocialCircleMemberFriendMoreOptionContext* circleContext; // 0x10
		::MoleMole::UISocialCircleMemberMoreOptionPopWindowController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _KickOutCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_0__KICKOUTCALLBACK_B__0_OFFSET))(this);
		}

		::System::Void _KickOutCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_0__KICKOUTCALLBACK_B__1_OFFSET))(this);
		}
	};
}
