#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace MoleMole { class UIHollowMainBottomWidgetController_BuffSlot; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController_BuffSlot___c__DisplayClass38_0_TypeDefinitionIndex = 76070;

	struct alignas(8) UIHollowMainBottomWidgetController_BuffSlot___c__DisplayClass38_0
	{
		::UnityEngine::ParticleSystem* oStart; // 0x10
		::UnityEngine::ParticleSystem* oEnd; // 0x18
		::UnityEngine::GameObject* oLoop; // 0x20
		::MoleMole::UIHollowMainBottomWidgetController_BuffSlot* __4__this; // 0x28
		::Coffee::UIExtensions::UIParticle* oLoop2; // 0x30
	};
}
