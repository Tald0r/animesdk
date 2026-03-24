#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass51_0; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS51_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB2B61B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS51_1__PLAYNOAVATARSTORYNODE_B__4_OFFSET UNITYSDK_OFFSET(0xB2B61C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS51_1__PLAYNOAVATARSTORYNODE_B__5_OFFSET UNITYSDK_OFFSET(0xB2B62A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass51_1_TypeDefinitionIndex = 58909;

	class UIGalgamePageController___c__DisplayClass51_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass51_0* CS___8__locals1; // 0x10
		::System::Int32 voiceLengthMs; // 0x18
		::System::Int64 stopTimeStampMs; // 0x20
		::System::Int64 startTimeStampMs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS51_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS51_1__PLAYNOAVATARSTORYNODE_B__4_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS51_1__PLAYNOAVATARSTORYNODE_B__5_OFFSET))(this);
		}
	};
}
