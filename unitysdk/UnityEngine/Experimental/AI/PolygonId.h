#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_EXPERIMENTAL_AI_POLYGONID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x994820)
#define UNITYENGINE_EXPERIMENTAL_AI_POLYGONID_EQUALS_OFFSET UNITYSDK_OFFSET(0x393050)
#define UNITYENGINE_EXPERIMENTAL_AI_POLYGONID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7E9CB0)
#define UNITYENGINE_EXPERIMENTAL_AI_POLYGONID_ISNULL_OFFSET UNITYSDK_OFFSET(0x314B50)
#define UNITYENGINE_EXPERIMENTAL_AI_POLYGONID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B39B060)

namespace UnityEngine::Experimental::AI
{
	inline static constexpr unsigned int PolygonId_TypeDefinitionIndex = 24307;

	struct alignas(8) PolygonId
	{
		::System::UInt64 polyRef; // 0x10

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_POLYGONID_ISNULL_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Experimental::AI::PolygonId x, ::UnityEngine::Experimental::AI::PolygonId y)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::AI::PolygonId, ::UnityEngine::Experimental::AI::PolygonId))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_POLYGONID_OP_EQUALITY_OFFSET))(x, y);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_POLYGONID_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Experimental::AI::PolygonId rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::AI::PolygonId))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_POLYGONID_EQUALS_OFFSET))(this, rhs);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_POLYGONID_EQUALS_1_OFFSET))(this, obj);
		}
	};
}
