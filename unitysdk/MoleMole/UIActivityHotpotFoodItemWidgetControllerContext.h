#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_C806D582A5D61934;
namespace MoleMole { class UIActivityHotpotFoodItemWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB962190)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotFoodItemWidgetControllerContext_TypeDefinitionIndex = 67968;

	class UIActivityHotpotFoodItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::MoleMole::UIActivityHotpotFoodItemWidgetController*>* OnPlayFadein; // 0x28
		::Class_2_C806D582A5D61934* FoodCfg; // 0x30
		::System::Action_1<::MoleMole::UIActivityHotpotFoodItemWidgetController*>* OnPlayFadeout; // 0x38
		::System::Action_1<::MoleMole::UIActivityHotpotFoodItemWidgetController*>* OnPlayLink; // 0x40
		::UnityEngine::Color ErosionColor; // 0x48
		::System::Single CollisionIntensityThreshold; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
