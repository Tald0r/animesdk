#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS378_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD5663D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS378_0__PLAYNPCENTERACTIONS_B__2_OFFSET UNITYSDK_OFFSET(0xD5663E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass378_0_TypeDefinitionIndex = 54658;

	class UIGalgamePageController___c__DisplayClass378_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::System::Int32 currStageNodeIdx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS378_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCEnterActions_b__2(::UnityEngine::Object* res)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS378_0__PLAYNPCENTERACTIONS_B__2_OFFSET))(this, res);
		}
	};
}
