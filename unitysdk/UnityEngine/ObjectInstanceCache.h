#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine { class AssetBundleInstanceRequest; }

#define UNITYENGINE_OBJECTINSTANCECACHE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B13BAA0)
#define UNITYENGINE_OBJECTINSTANCECACHE_INSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1B13BA90)
#define UNITYENGINE_OBJECTINSTANCECACHE_LOADTEMPLATEASYNC_OFFSET UNITYSDK_OFFSET(0x1B13BA70)
#define UNITYENGINE_OBJECTINSTANCECACHE_LOADTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1B13BA80)
#define UNITYENGINE_OBJECTINSTANCECACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B13BAB0)

namespace UnityEngine
{
	inline static constexpr unsigned int ObjectInstanceCache_TypeDefinitionIndex = 7600;

	class ObjectInstanceCache : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANCECACHE__CTOR_OFFSET))(this);
		}

		::UnityEngine::AssetBundleInstanceRequest* LoadTemplateAsync()
		{
			return ((::UnityEngine::AssetBundleInstanceRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANCECACHE_LOADTEMPLATEASYNC_OFFSET))(this);
		}

		::System::Void LoadTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANCECACHE_LOADTEMPLATE_OFFSET))(this);
		}

		::UnityEngine::AssetBundleInstanceRequest* InstanceAsync()
		{
			return ((::UnityEngine::AssetBundleInstanceRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANCECACHE_INSTANCEASYNC_OFFSET))(this);
		}

		::UnityEngine::Object* get_instance()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANCECACHE_GET_INSTANCE_OFFSET))(this);
		}
	};
}
