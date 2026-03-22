#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC102A0)
#define MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__DISPLAYCLASS15_0__REFRESHCHAPTERTITLE_B__0_OFFSET UNITYSDK_OFFSET(0xAC10B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyResultPageController___c__DisplayClass15_0_TypeDefinitionIndex = 42428;

	class UIMonsterFantasyResultPageController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::String* levelOrder; // 0x10
		::System::String* levelName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshChapterTitle_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__DISPLAYCLASS15_0__REFRESHCHAPTERTITLE_B__0_OFFSET))(this);
		}
	};
}
