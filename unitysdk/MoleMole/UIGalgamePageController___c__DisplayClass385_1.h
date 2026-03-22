#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS385_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBFF0A60)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS385_1__PLAYPICTUREDISPLAYACTION_B__4_OFFSET UNITYSDK_OFFSET(0xBFF0A70)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS385_1__PLAYPICTUREDISPLAYACTION_B__5_OFFSET UNITYSDK_OFFSET(0xBFF0CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass385_1_TypeDefinitionIndex = 54651;

	class UIGalgamePageController___c__DisplayClass385_1 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* backStageChildTrans; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18
		::UnityEngine::Transform* displayChildTrans; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS385_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayPictureDisplayAction_b__4(::UnityEngine::Object* res)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS385_1__PLAYPICTUREDISPLAYACTION_B__4_OFFSET))(this, res);
		}

		::System::Void _PlayPictureDisplayAction_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS385_1__PLAYPICTUREDISPLAYACTION_B__5_OFFSET))(this);
		}
	};
}
