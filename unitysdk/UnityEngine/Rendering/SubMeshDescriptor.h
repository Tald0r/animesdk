#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MeshTopology.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_BASEVERTEX_OFFSET UNITYSDK_OFFSET(0x53B9F0)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x31BC00)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_FIRSTVERTEX_OFFSET UNITYSDK_OFFSET(0x2F2E30)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x4C0E40)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_INDEXSTART_OFFSET UNITYSDK_OFFSET(0x31B130)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_TOPOLOGY_OFFSET UNITYSDK_OFFSET(0x3186C0)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x318700)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8D0BB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SubMeshDescriptor_TypeDefinitionIndex = 6168;

	struct alignas(4) SubMeshDescriptor
	{
		::UnityEngine::Bounds _bounds_k__BackingField; // 0x10
		::UnityEngine::MeshTopology _topology_k__BackingField; // 0x28
		::System::Int32 _indexStart_k__BackingField; // 0x2C
		::System::Int32 _indexCount_k__BackingField; // 0x30
		::System::Int32 _baseVertex_k__BackingField; // 0x34
		::System::Int32 _firstVertex_k__BackingField; // 0x38
		::System::Int32 _vertexCount_k__BackingField; // 0x3C

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_BOUNDS_OFFSET))(this);
		}

		::UnityEngine::MeshTopology get_topology()
		{
			return ((::UnityEngine::MeshTopology(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_TOPOLOGY_OFFSET))(this);
		}

		::System::Int32 get_indexStart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_INDEXSTART_OFFSET))(this);
		}

		::System::Int32 get_indexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_INDEXCOUNT_OFFSET))(this);
		}

		::System::Int32 get_baseVertex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_BASEVERTEX_OFFSET))(this);
		}

		::System::Int32 get_firstVertex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_FIRSTVERTEX_OFFSET))(this);
		}

		::System::Int32 get_vertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_TOSTRING_OFFSET))(this);
		}
	};
}
