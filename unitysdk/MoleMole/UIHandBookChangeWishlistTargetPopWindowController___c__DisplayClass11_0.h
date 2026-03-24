#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D89CCC627A66D0AD;

#define MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CD400)
#define MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SORTAVATARLIST_B__0_OFFSET UNITYSDK_OFFSET(0xB2CD410)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookChangeWishlistTargetPopWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 39129;

	class UIHandBookChangeWishlistTargetPopWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::UInt32 targetAvatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortAvatarList_b__0(::Class_2_D89CCC627A66D0AD* a, ::Class_2_D89CCC627A66D0AD* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SORTAVATARLIST_B__0_OFFSET))(this, a, b);
		}
	};
}
