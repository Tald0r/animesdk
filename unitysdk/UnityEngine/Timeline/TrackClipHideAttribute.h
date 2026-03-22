#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_TIMELINE_TRACKCLIPHIDEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEDCCA0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackClipHideAttribute_TypeDefinitionIndex = 29375;

	class TrackClipHideAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCLIPHIDEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
