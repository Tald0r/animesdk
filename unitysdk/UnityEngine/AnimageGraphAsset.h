#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimageAssetBase.h"

#define UNITYENGINE_ANIMAGEGRAPHASSET_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B1531C0)
#define UNITYENGINE_ANIMAGEGRAPHASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B153190)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimageGraphAsset_TypeDefinitionIndex = 36090;

	class AnimageGraphAsset : public ::UnityEngine::AnimageAssetBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGEGRAPHASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::AnimageGraphAsset* notSelf)
		{
			return ((::System::Void(*)(::UnityEngine::AnimageGraphAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGEGRAPHASSET_INTERNAL_CREATE_OFFSET))(notSelf);
		}
	};
}
