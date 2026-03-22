#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_LOOPSUBDIVGLOBALSETTINGS_GET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1994FCC0)
#define UNITYENGINE_LOOPSUBDIVGLOBALSETTINGS_GET_OFFSET UNITYSDK_OFFSET(0x1994FC90)
#define UNITYENGINE_LOOPSUBDIVGLOBALSETTINGS_SET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1994FCE0)
#define UNITYENGINE_LOOPSUBDIVGLOBALSETTINGS_SET_OFFSET UNITYSDK_OFFSET(0x1994FCD0)

namespace UnityEngine
{
	inline static constexpr unsigned int LoopSubdivGlobalSettings_TypeDefinitionIndex = 5260;

	struct alignas(4) LoopSubdivGlobalSettings
	{
		::System::Boolean enable; // 0x10
		::System::Boolean enableAdaptiveStrategies; // 0x11
		::System::Single frontFaceCullingBias; // 0x14
		::System::Single frontFaceCullingToleranceBias; // 0x18
		::System::Single screenLengthCullingBias; // 0x1C

		static ::UnityEngine::LoopSubdivGlobalSettings Get()
		{
			return ((::UnityEngine::LoopSubdivGlobalSettings(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LOOPSUBDIVGLOBALSETTINGS_GET_OFFSET))();
		}

		static ::System::Void Set(::UnityEngine::LoopSubdivGlobalSettings settings)
		{
			return ((::System::Void(*)(::UnityEngine::LoopSubdivGlobalSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_LOOPSUBDIVGLOBALSETTINGS_SET_OFFSET))(settings);
		}

		static ::System::Void Get_Injected(::UnityEngine::LoopSubdivGlobalSettings& ret)
		{
			return ((::System::Void(*)(::UnityEngine::LoopSubdivGlobalSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_LOOPSUBDIVGLOBALSETTINGS_GET_INJECTED_OFFSET))(ret);
		}

		static ::System::Void Set_Injected(::UnityEngine::LoopSubdivGlobalSettings& settings)
		{
			return ((::System::Void(*)(::UnityEngine::LoopSubdivGlobalSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_LOOPSUBDIVGLOBALSETTINGS_SET_INJECTED_OFFSET))(settings);
		}
	};
}
