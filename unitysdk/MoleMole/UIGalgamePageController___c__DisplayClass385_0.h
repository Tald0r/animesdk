#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS385_0__CTOR_OFFSET UNITYSDK_OFFSET(0x6C5EAE0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS385_0__PLAYPICTUREDISPLAYACTION_B__0_OFFSET UNITYSDK_OFFSET(0x6C5EAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass385_0_TypeDefinitionIndex = 58931;

	class UIGalgamePageController___c__DisplayClass385_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* displayChildTrans; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS385_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayPictureDisplayAction_b__0(::UnityEngine::Object* res)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS385_0__PLAYPICTUREDISPLAYACTION_B__0_OFFSET))(this, res);
		}
	};
}
