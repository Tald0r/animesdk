#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Yoga/YogaSize.h"

#define UNITYENGINE_YOGA_MEASUREOUTPUT_MAKE_OFFSET UNITYSDK_OFFSET(0x18E8FAD0)
#define UNITYENGINE_YOGA_MEASUREOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E91F00)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int MeasureOutput_TypeDefinitionIndex = 24414;

	class MeasureOutput : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_MEASUREOUTPUT__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Yoga::YogaSize Make(::System::Single width, ::System::Single height)
		{
			return ((::UnityEngine::Yoga::YogaSize(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_MEASUREOUTPUT_MAKE_OFFSET))(width, height);
		}
	};
}
