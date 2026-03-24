#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass368_0; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS368_1__CTOR_OFFSET UNITYSDK_OFFSET(0x911B200)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS368_1__SETAVATARNEW_B__3_OFFSET UNITYSDK_OFFSET(0x911B210)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass368_1_TypeDefinitionIndex = 58883;

	class UIGalgamePageController___c__DisplayClass368_1 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* npcGO; // 0x10
		::MoleMole::UIGalgamePageController___c__DisplayClass368_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS368_1__CTOR_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS368_1__SETAVATARNEW_B__3_OFFSET))(this);
		}
	};
}
