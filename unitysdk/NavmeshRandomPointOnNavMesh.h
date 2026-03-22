#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NAVMESHRANDOMPOINTONNAVMESH_RANDOMPOINT_OFFSET UNITYSDK_OFFSET(0x1B06BF10)
#define NAVMESHRANDOMPOINTONNAVMESH_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B06C080)
#define NAVMESHRANDOMPOINTONNAVMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B06C2D0)

inline static constexpr unsigned int NavmeshRandomPointOnNavMesh_TypeDefinitionIndex = 81713;

class NavmeshRandomPointOnNavMesh : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single range; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHRANDOMPOINTONNAVMESH__CTOR_OFFSET))(this);
	}

	::System::Boolean RandomPoint(::UnityEngine::Vector3 center, ::System::Single range, ::UnityEngine::Vector3& result)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NAVMESHRANDOMPOINTONNAVMESH_RANDOMPOINT_OFFSET))(this, center, range, result);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHRANDOMPOINTONNAVMESH_UPDATE_OFFSET))(this);
	}
};
