#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System { class Action; }

#define MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x18C30FD0)
#define MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER_START_OFFSET UNITYSDK_OFFSET(0x18C30F40)
#define MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C31070)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int RectTtransformSizeEventListener_TypeDefinitionIndex = 19097;

	class RectTtransformSizeEventListener : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Action* RectTransformChanged; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER_START_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}
	};
}
