#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/__details_of_ExtendConvexHull2D/EdgeStorage.h"
#include "unitysdk/Foundation/Geometry/__details_of_ExtendConvexHull2D/EdgeType.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GETPOINT_OFFSET UNITYSDK_OFFSET(0x96F5C0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_ARCAREA_OFFSET UNITYSDK_OFFSET(0x96F3C0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_END_OFFSET UNITYSDK_OFFSET(0x96F510)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_MAXX_OFFSET UNITYSDK_OFFSET(0x96F5A0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_MAXY_OFFSET UNITYSDK_OFFSET(0x96F5B0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_MINX_OFFSET UNITYSDK_OFFSET(0x96F590)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_START_OFFSET UNITYSDK_OFFSET(0x96F490)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_NEW_1_OFFSET UNITYSDK_OFFSET(0x1AD770A0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_NEW_2_OFFSET UNITYSDK_OFFSET(0x1AD77190)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_NEW_OFFSET UNITYSDK_OFFSET(0x1AD76E90)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x96F630)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x96F5D0)

namespace Foundation::Geometry::ExtendConvexHull2D
{
	inline static constexpr unsigned int Edge_TypeDefinitionIndex = 9180;

	struct alignas(8) Edge
	{
		static ::Foundation::Geometry::ExtendConvexHull2D::Edge* StaticGet_Null()
		{
			return (::Foundation::Geometry::ExtendConvexHull2D::Edge*)Il2CppClass::FromTypeDefinitionIndex(Edge_TypeDefinitionIndex)->GetStaticField(0x3F30);
		}
		::Foundation::Geometry::__details_of_ExtendConvexHull2D::EdgeType Type; // 0x10
		::Foundation::Geometry::__details_of_ExtendConvexHull2D::EdgeStorage Storage; // 0x18

		/*
		::System::Void _ctor(::Foundation::Geometry::Segment2D segment)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::Segment2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE__CTOR_OFFSET))(this, segment);
		}
		*/

		/*
		::System::Void _ctor_1(::Foundation::Geometry::EllipseArc2D arc)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::EllipseArc2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE__CTOR_1_OFFSET))(this, arc);
		}
		*/

		::System::Single get_ArcArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_ARCAREA_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 get_Start()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_START_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_End()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_END_OFFSET))(this);
		}
		*/

		::System::Single get_MinX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_MINX_OFFSET))(this);
		}

		::System::Single get_MaxX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_MAXX_OFFSET))(this);
		}

		::System::Single get_MaxY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_MAXY_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 GetPoint(::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GETPOINT_OFFSET))(this, t);
		}
		*/

		/*
		static ::Foundation::Geometry::ExtendConvexHull2D::Edge New(::Foundation::Geometry::Ellipse2D ellipse, ::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::Edge(*)(::Foundation::Geometry::Ellipse2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_NEW_OFFSET))(ellipse, start, end);
		}
		*/

		/*
		static ::Foundation::Geometry::ExtendConvexHull2D::Edge New_1(::Foundation::Geometry::Ellipse2D ellipse, ::UnityEngine::Vector2 start)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::Edge(*)(::Foundation::Geometry::Ellipse2D, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_NEW_1_OFFSET))(ellipse, start);
		}
		*/

		/*
		static ::Foundation::Geometry::ExtendConvexHull2D::Edge New_2(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::Edge(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_NEW_2_OFFSET))(start, end);
		}
		*/
	};
}
