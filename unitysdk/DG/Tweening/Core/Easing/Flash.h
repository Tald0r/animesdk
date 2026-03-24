#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DG_TWEENING_CORE_EASING_FLASH_EASEINOUT_OFFSET UNITYSDK_OFFSET(0x1B4C56E0)
#define DG_TWEENING_CORE_EASING_FLASH_EASEIN_OFFSET UNITYSDK_OFFSET(0x1B4C5380)
#define DG_TWEENING_CORE_EASING_FLASH_EASEOUT_OFFSET UNITYSDK_OFFSET(0x1B4C5520)
#define DG_TWEENING_CORE_EASING_FLASH_EASE_OFFSET UNITYSDK_OFFSET(0x1B4C5080)
#define DG_TWEENING_CORE_EASING_FLASH_WEIGHTEDEASE_OFFSET UNITYSDK_OFFSET(0x1B4C5220)

namespace DG::Tweening::Core::Easing
{
	inline static constexpr unsigned int Flash_TypeDefinitionIndex = 25000;

	class Flash : public ::System::Object
	{
	public:
		static ::System::Single Ease(::System::Single time, ::System::Single duration, ::System::Single overshootOrAmplitude, ::System::Single period)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_FLASH_EASE_OFFSET))(time, duration, overshootOrAmplitude, period);
		}

		static ::System::Single EaseIn(::System::Single time, ::System::Single duration, ::System::Single overshootOrAmplitude, ::System::Single period)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_FLASH_EASEIN_OFFSET))(time, duration, overshootOrAmplitude, period);
		}

		static ::System::Single EaseOut(::System::Single time, ::System::Single duration, ::System::Single overshootOrAmplitude, ::System::Single period)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_FLASH_EASEOUT_OFFSET))(time, duration, overshootOrAmplitude, period);
		}

		static ::System::Single EaseInOut(::System::Single time, ::System::Single duration, ::System::Single overshootOrAmplitude, ::System::Single period)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_FLASH_EASEINOUT_OFFSET))(time, duration, overshootOrAmplitude, period);
		}

		static ::System::Single WeightedEase(::System::Single overshootOrAmplitude, ::System::Single period, ::System::Int32 stepIndex, ::System::Single stepDuration, ::System::Single dir, ::System::Single res)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_FLASH_WEIGHTEDEASE_OFFSET))(overshootOrAmplitude, period, stepIndex, stepDuration, dir, res);
		}
	};
}
