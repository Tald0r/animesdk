#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_D89CCC627A66D0AD;

#define MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAF500)
#define MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS39_0__JUMPTOAVATARPREVIEWPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xBFAF510)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralMissionCompletePopWindowController___c__DisplayClass39_0_TypeDefinitionIndex = 78368;

	class UIGeneralMissionCompletePopWindowController___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::Class_1_0D6706375CDAAE8C* showItem; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _JumpToAvatarPreviewPage_b__0(::Class_2_D89CCC627A66D0AD* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS39_0__JUMPTOAVATARPREVIEWPAGE_B__0_OFFSET))(this, x);
		}
	};
}
