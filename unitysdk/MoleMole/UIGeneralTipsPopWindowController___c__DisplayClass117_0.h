#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_D89CCC627A66D0AD;

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS117_0__CTOR_OFFSET UNITYSDK_OFFSET(0x891CA60)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS117_0__JUMPTOAVATARPREVIEWPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x891CA70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass117_0_TypeDefinitionIndex = 73925;

	class UIGeneralTipsPopWindowController___c__DisplayClass117_0 : public ::System::Object
	{
	public:
		::Class_1_0D6706375CDAAE8C* showItem; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS117_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _JumpToAvatarPreviewPage_b__0(::Class_2_D89CCC627A66D0AD* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS117_0__JUMPTOAVATARPREVIEWPAGE_B__0_OFFSET))(this, x);
		}
	};
}
