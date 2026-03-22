#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_CHECKUTILS_ENSURENORMALIZED_1_OFFSET UNITYSDK_OFFSET(0x1A2E5F90)
#define PIPELINECAMERA_CHECKUTILS_ENSURENORMALIZED_OFFSET UNITYSDK_OFFSET(0x1A2E5F20)
#define PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_1_OFFSET UNITYSDK_OFFSET(0x1A2E5C50)
#define PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_2_OFFSET UNITYSDK_OFFSET(0x1A2E5CB0)
#define PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_3_OFFSET UNITYSDK_OFFSET(0x1A2E5D20)
#define PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_4_OFFSET UNITYSDK_OFFSET(0x1A2E5D80)
#define PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_5_OFFSET UNITYSDK_OFFSET(0x1A2E5DF0)
#define PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_6_OFFSET UNITYSDK_OFFSET(0x1A2E5E50)
#define PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_7_OFFSET UNITYSDK_OFFSET(0x1A2E5EC0)
#define PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_OFFSET UNITYSDK_OFFSET(0x1A2E5BE0)
#define PIPELINECAMERA_CHECKUTILS_ENSUREPARTIALORDER_OFFSET UNITYSDK_OFFSET(0x1A2E6090)
#define PIPELINECAMERA_CHECKUTILS_ENSURERANGE_OFFSET UNITYSDK_OFFSET(0x1A2E6000)

namespace PipelineCamera
{
	inline static constexpr unsigned int CheckUtils_TypeDefinitionIndex = 34525;

	class CheckUtils : public ::System::Object
	{
	public:
		static ::System::Void EnsureNotNaN(::UnityEngine::Vector3& value, ::UnityEngine::Vector3& fallback)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_OFFSET))(value, fallback);
		}

		static ::System::Void EnsureNotNaN_1(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_1_OFFSET))(value);
		}

		static ::System::Void EnsureNotNaN_2(::UnityEngine::Vector2& value, ::UnityEngine::Vector2& fallback)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_2_OFFSET))(value, fallback);
		}

		static ::System::Void EnsureNotNaN_3(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_3_OFFSET))(value);
		}

		static ::System::Void EnsureNotNaN_4(::System::Single& value, ::System::Single fallback)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_4_OFFSET))(value, fallback);
		}

		static ::System::Void EnsureNotNaN_5(::System::Single& value)
		{
			return ((::System::Void(*)(::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_5_OFFSET))(value);
		}

		static ::System::Void EnsureNotNaN_6(::UnityEngine::Quaternion& value, ::UnityEngine::Quaternion& fallback)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_6_OFFSET))(value, fallback);
		}

		static ::System::Void EnsureNotNaN_7(::UnityEngine::Quaternion& value)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CHECKUTILS_ENSURENOTNAN_7_OFFSET))(value);
		}

		static ::System::Void EnsureNormalized(::UnityEngine::Vector3& value, ::System::Single tolerance)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CHECKUTILS_ENSURENORMALIZED_OFFSET))(value, tolerance);
		}

		static ::System::Void EnsureNormalized_1(::UnityEngine::Quaternion& value, ::System::Single tolerance)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CHECKUTILS_ENSURENORMALIZED_1_OFFSET))(value, tolerance);
		}

		static ::System::Void EnsureRange(::System::Single& value, ::System::Single min, ::System::Single max)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CHECKUTILS_ENSURERANGE_OFFSET))(value, min, max);
		}

		static ::System::Void EnsurePartialOrder(::System::Single& minValue, ::System::Single& maxValue)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CHECKUTILS_ENSUREPARTIALORDER_OFFSET))(minValue, maxValue);
		}
	};
}
