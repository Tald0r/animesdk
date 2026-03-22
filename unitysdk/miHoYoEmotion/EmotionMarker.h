#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/BaseMarker.h"
#include "unitysdk/miHoYoEmotion/BaseMarker_POST_TYPE.h"

#define MIHOYOEMOTION_EMOTIONMARKER_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x18AEA530)
#define MIHOYOEMOTION_EMOTIONMARKER_ISFREEMARKER_OFFSET UNITYSDK_OFFSET(0x18AEA4B0)
#define MIHOYOEMOTION_EMOTIONMARKER_SETTOOTHERMARKER_OFFSET UNITYSDK_OFFSET(0x18AEA800)
#define MIHOYOEMOTION_EMOTIONMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEA7F0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmotionMarker_TypeDefinitionIndex = 36174;

	class EmotionMarker : public ::miHoYoEmotion::BaseMarker
	{
	public:
		::miHoYoEmotion::BaseMarker_POST_TYPE postType; // 0x30
		::System::Single postTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTIONMARKER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsFreeMarker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTIONMARKER_ISFREEMARKER_OFFSET))(this);
		}

		::miHoYoEmotion::EmotionMarker* CreateCopy()
		{
			return ((::miHoYoEmotion::EmotionMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTIONMARKER_CREATECOPY_OFFSET))(this);
		}

		::System::Void SetToOtherMarker(::miHoYoEmotion::EmotionMarker* newMarker)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmotionMarker*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTIONMARKER_SETTOOTHERMARKER_OFFSET))(this, newMarker);
		}
	};
}
