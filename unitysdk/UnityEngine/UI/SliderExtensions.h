#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Slider; }

#define UNITYENGINE_UI_SLIDEREXTENSIONS_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x191A8C00)
#define UNITYENGINE_UI_SLIDEREXTENSIONS_SAFESETVALUE_OFFSET UNITYSDK_OFFSET(0x191A8E00)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SliderExtensions_TypeDefinitionIndex = 56433;

	class SliderExtensions : public ::System::Object
	{
	public:
		static ::System::Void SafeSetActive(::UnityEngine::UI::Slider* slider, ::System::Boolean value, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Slider*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDEREXTENSIONS_SAFESETACTIVE_OFFSET))(slider, value, outputError);
		}

		static ::System::Void SafeSetValue(::UnityEngine::UI::Slider* slider, ::System::Single value, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Slider*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDEREXTENSIONS_SAFESETVALUE_OFFSET))(slider, value, outputError);
		}
	};
}
