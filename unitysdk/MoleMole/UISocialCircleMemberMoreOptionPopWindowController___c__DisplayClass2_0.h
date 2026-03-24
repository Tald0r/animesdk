#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SocialCircleMemberFriendMoreOptionContext; }

#define MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x78F4330)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS2_0__ONCLICKREMOVETITLECANCELBUTTON_B__0_OFFSET UNITYSDK_OFFSET(0x78F4340)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMemberMoreOptionPopWindowController___c__DisplayClass2_0_TypeDefinitionIndex = 70609;

	class UISocialCircleMemberMoreOptionPopWindowController___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MoleMole::SocialCircleMemberFriendMoreOptionContext* circleContext; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickRemoveTitleCancelButton_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS2_0__ONCLICKREMOVETITLECANCELBUTTON_B__0_OFFSET))(this);
		}
	};
}
