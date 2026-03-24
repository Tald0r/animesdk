#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
class Class_3_E6E3938E70B764D0_2;

#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC093070)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS71_0__REFRESHFRIENDLIST_B__0_OFFSET UNITYSDK_OFFSET(0xC093080)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPPageController___c__DisplayClass71_0_TypeDefinitionIndex = 57661;

	class UIAutoBattlePVPPageController___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::Class_3_E6E3938E70B764D0_2* player; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshFriendList_b__0(::Class_1_BE6BF7909AD9D940* friend_)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS71_0__REFRESHFRIENDLIST_B__0_OFFSET))(this, friend_);
		}
	};
}
