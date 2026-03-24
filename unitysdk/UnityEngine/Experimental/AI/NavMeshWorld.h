#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCYINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B39B020)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B39B010)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x9947F0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_GETDEFAULTWORLD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B39B000)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_GETDEFAULTWORLD_OFFSET UNITYSDK_OFFSET(0x1B39AFD0)

namespace UnityEngine::Experimental::AI
{
	inline static constexpr unsigned int NavMeshWorld_TypeDefinitionIndex = 24311;

	struct alignas(8) NavMeshWorld
	{
		::System::IntPtr world; // 0x10

		static ::UnityEngine::Experimental::AI::NavMeshWorld GetDefaultWorld()
		{
			return ((::UnityEngine::Experimental::AI::NavMeshWorld(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_GETDEFAULTWORLD_OFFSET))();
		}

		/*
		static ::System::Void AddDependencyInternal(::System::IntPtr navmesh, ::Unity::Jobs::JobHandle handle)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCYINTERNAL_OFFSET))(navmesh, handle);
		}
		*/

		/*
		::System::Void AddDependency(::Unity::Jobs::JobHandle job)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCY_OFFSET))(this, job);
		}
		*/

		static ::System::Void GetDefaultWorld_Injected(::UnityEngine::Experimental::AI::NavMeshWorld& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::AI::NavMeshWorld&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_GETDEFAULTWORLD_INJECTED_OFFSET))(ret);
		}

		/*
		static ::System::Void AddDependencyInternal_Injected(::System::IntPtr navmesh, ::Unity::Jobs::JobHandle& handle)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCYINTERNAL_INJECTED_OFFSET))(navmesh, handle);
		}
		*/
	};
}
