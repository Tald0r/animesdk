#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY_SEGMENT2D_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x8D58F0)
#define FOUNDATION_GEOMETRY_SEGMENT2D_GET_ISDEGENERATE_OFFSET UNITYSDK_OFFSET(0x8D5870)
#define FOUNDATION_GEOMETRY_SEGMENT2D_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x8D5930)
#define FOUNDATION_GEOMETRY_SEGMENT2D_GET_VECTOR_OFFSET UNITYSDK_OFFSET(0x8D58C0)
#define FOUNDATION_GEOMETRY_SEGMENT2D_ONLEFT_OFFSET UNITYSDK_OFFSET(0x8D57A0)
#define FOUNDATION_GEOMETRY_SEGMENT2D__CTOR_OFFSET UNITYSDK_OFFSET(0x301710)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int Segment2D_TypeDefinitionIndex = 9070;

	struct alignas(4) Segment2D
	{
		::UnityEngine::Vector2 Start; // 0x10
		::UnityEngine::Vector2 End; // 0x18

		::System::Void _ctor(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SEGMENT2D__CTOR_OFFSET))(this, start, end);
		}

		::System::Boolean OnLeft(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SEGMENT2D_ONLEFT_OFFSET))(this, point);
		}

		::System::Boolean get_IsDegenerate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SEGMENT2D_GET_ISDEGENERATE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Vector()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SEGMENT2D_GET_VECTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Center()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SEGMENT2D_GET_CENTER_OFFSET))(this);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SEGMENT2D_GET_LENGTH_OFFSET))(this);
		}
	};
}
