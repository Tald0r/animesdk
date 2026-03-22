#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/GraphicRaycaster.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_MONOGRAPHICRAYCASTER_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x6B0CF10)
#define MOLEMOLE_MONOGRAPHICRAYCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x6B0CFE0)
#define MOLEMOLE_MONOGRAPHICRAYCASTER___BASE_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x6B0D080)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGraphicRaycaster_TypeDefinitionIndex = 52136;

	class MonoGraphicRaycaster : public ::UnityEngine::UI::GraphicRaycaster
	{
	public:
		::UnityEngine::Camera* Field_8_0; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRAPHICRAYCASTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Camera* get_eventCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRAPHICRAYCASTER_GET_EVENTCAMERA_OFFSET))(this);
		}

		::UnityEngine::Camera* __base_get_eventCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRAPHICRAYCASTER___BASE_GET_EVENTCAMERA_OFFSET))(this);
		}
	};
}
