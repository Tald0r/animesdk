#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsFenceType.h"
#include "unitysdk/UnityEngine/Rendering/SynchronisationStage.h"
#include "unitysdk/UnityEngine/Rendering/SynchronisationStageFlags.h"

#define UNITYENGINE_RENDERING_GRAPHICSFENCE_GETPLATFORMNOTSUPPORTEDVERSION_OFFSET UNITYSDK_OFFSET(0x8EE290)
#define UNITYENGINE_RENDERING_GRAPHICSFENCE_GETVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x19EA6FA0)
#define UNITYENGINE_RENDERING_GRAPHICSFENCE_GET_PASSED_OFFSET UNITYSDK_OFFSET(0x8EE140)
#define UNITYENGINE_RENDERING_GRAPHICSFENCE_HASFENCEPASSED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x19EA6EF0)
#define UNITYENGINE_RENDERING_GRAPHICSFENCE_INITPOSTALLOCATION_OFFSET UNITYSDK_OFFSET(0x8EE150)
#define UNITYENGINE_RENDERING_GRAPHICSFENCE_ISFENCEPENDING_OFFSET UNITYSDK_OFFSET(0x8EE1E0)
#define UNITYENGINE_RENDERING_GRAPHICSFENCE_TRANSLATESYNCHRONIZATIONSTAGETOFLAGS_OFFSET UNITYSDK_OFFSET(0x19EA6D00)
#define UNITYENGINE_RENDERING_GRAPHICSFENCE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x8EE210)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GraphicsFence_TypeDefinitionIndex = 6190;

	struct alignas(8) GraphicsFence
	{
		::System::IntPtr m_Ptr; // 0x10
		::System::Int32 m_Version; // 0x18
		::UnityEngine::Rendering::GraphicsFenceType m_FenceType; // 0x1C

		static ::UnityEngine::Rendering::SynchronisationStageFlags TranslateSynchronizationStageToFlags(::UnityEngine::Rendering::SynchronisationStage s)
		{
			return ((::UnityEngine::Rendering::SynchronisationStageFlags(*)(::UnityEngine::Rendering::SynchronisationStage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_TRANSLATESYNCHRONIZATIONSTAGETOFLAGS_OFFSET))(s);
		}

		::System::Boolean get_passed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_GET_PASSED_OFFSET))(this);
		}

		static ::System::Boolean HasFencePassed_Internal(::System::IntPtr fencePtr)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_HASFENCEPASSED_INTERNAL_OFFSET))(fencePtr);
		}

		::System::Void InitPostAllocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_INITPOSTALLOCATION_OFFSET))(this);
		}

		::System::Boolean IsFencePending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_ISFENCEPENDING_OFFSET))(this);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_VALIDATE_OFFSET))(this);
		}

		::System::Int32 GetPlatformNotSupportedVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_GETPLATFORMNOTSUPPORTEDVERSION_OFFSET))(this);
		}

		static ::System::Int32 GetVersionNumber(::System::IntPtr fencePtr)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_GETVERSIONNUMBER_OFFSET))(fencePtr);
		}
	};
}
