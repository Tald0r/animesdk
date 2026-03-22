#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_PRELOADDATA_PRELOADDATADONTSTRIPME_OFFSET UNITYSDK_OFFSET(0x1A04C940)
#define UNITYENGINE_PRELOADDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04C950)

namespace UnityEngine
{
	inline static constexpr unsigned int PreloadData_TypeDefinitionIndex = 5393;

	class PreloadData : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PRELOADDATA__CTOR_OFFSET))(this);
		}

		::System::Void PreloadDataDontStripMe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PRELOADDATA_PRELOADDATADONTSTRIPME_OFFSET))(this);
		}
	};
}
