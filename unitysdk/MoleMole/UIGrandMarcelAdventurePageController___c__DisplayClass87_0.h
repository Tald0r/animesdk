#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
class Class_3_5A96B18D258C8ACE;

#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS87_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A4290)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS87_0__REFRESHFRIENDLIST_B__0_OFFSET UNITYSDK_OFFSET(0xA2A42A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventurePageController___c__DisplayClass87_0_TypeDefinitionIndex = 44763;

	class UIGrandMarcelAdventurePageController___c__DisplayClass87_0 : public ::System::Object
	{
	public:
		::Class_3_5A96B18D258C8ACE* player; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS87_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshFriendList_b__0(::Class_1_BE6BF7909AD9D940* friend_)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS87_0__REFRESHFRIENDLIST_B__0_OFFSET))(this, friend_);
		}
	};
}
