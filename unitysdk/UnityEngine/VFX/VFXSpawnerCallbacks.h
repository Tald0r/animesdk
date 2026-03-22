#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define UNITYENGINE_VFX_VFXSPAWNERCALLBACKS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B150E90)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXSpawnerCallbacks_TypeDefinitionIndex = 80465;

	class VFXSpawnerCallbacks : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERCALLBACKS__CTOR_OFFSET))(this);
		}
	};
}
