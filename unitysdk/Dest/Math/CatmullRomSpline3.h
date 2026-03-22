#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/SplineBase.h"
#include "unitysdk/Dest/Math/SplineTypes.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_CATMULLROMSPLINE3_ADDVERTEXFIRST_OFFSET UNITYSDK_OFFSET(0x1A8A93B0)
#define DEST_MATH_CATMULLROMSPLINE3_ADDVERTEXLAST_OFFSET UNITYSDK_OFFSET(0x1A8A94F0)
#define DEST_MATH_CATMULLROMSPLINE3_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A8A9620)
#define DEST_MATH_CATMULLROMSPLINE3_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1A8A8C30)
#define DEST_MATH_CATMULLROMSPLINE3_CREATE_OFFSET UNITYSDK_OFFSET(0x1A8A8BB0)
#define DEST_MATH_CATMULLROMSPLINE3_GETVERTEX_OFFSET UNITYSDK_OFFSET(0x1A8A9710)
#define DEST_MATH_CATMULLROMSPLINE3_GET_SPLINETYPE_OFFSET UNITYSDK_OFFSET(0x1A8A8A60)
#define DEST_MATH_CATMULLROMSPLINE3_INSERTAFTER_OFFSET UNITYSDK_OFFSET(0x1A8A9670)
#define DEST_MATH_CATMULLROMSPLINE3_INSERTBEFORE_OFFSET UNITYSDK_OFFSET(0x1A8A9450)
#define DEST_MATH_CATMULLROMSPLINE3_REMOVEVERTEX_OFFSET UNITYSDK_OFFSET(0x1A8A9590)
#define DEST_MATH_CATMULLROMSPLINE3_SETVERTEX_OFFSET UNITYSDK_OFFSET(0x1A8A9790)
#define DEST_MATH_CATMULLROMSPLINE3_SET_SPLINETYPE_OFFSET UNITYSDK_OFFSET(0x1A8A8A70)
#define DEST_MATH_CATMULLROMSPLINE3_UPDATEADJACENTSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1A8A8AC0)
#define DEST_MATH_CATMULLROMSPLINE3_UPDATESEGMENT_OFFSET UNITYSDK_OFFSET(0x1A8A9020)
#define DEST_MATH_CATMULLROMSPLINE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A9820)

namespace Dest::Math
{
	inline static constexpr unsigned int CatmullRomSpline3_TypeDefinitionIndex = 31738;

	class CatmullRomSpline3 : public ::Dest::Math::SplineBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3__CTOR_OFFSET))(this);
		}

		::Dest::Math::SplineTypes get_SplineType()
		{
			return ((::Dest::Math::SplineTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_GET_SPLINETYPE_OFFSET))(this);
		}

		::System::Void set_SplineType(::Dest::Math::SplineTypes value)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::SplineTypes))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_SET_SPLINETYPE_OFFSET))(this, value);
		}

		static ::Dest::Math::CatmullRomSpline3* Create()
		{
			return ((::Dest::Math::CatmullRomSpline3*(*)())((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_CREATE_OFFSET))();
		}

		static ::Dest::Math::CatmullRomSpline3* Create_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::Dest::Math::SplineTypes type)
		{
			return ((::Dest::Math::CatmullRomSpline3*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::Dest::Math::SplineTypes))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_CREATE_1_OFFSET))(points, type);
		}

		::System::Void UpdateSegment(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_UPDATESEGMENT_OFFSET))(this, index);
		}

		::System::Void UpdateAdjacentSegments(::System::Int32 vertexIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_UPDATEADJACENTSEGMENTS_OFFSET))(this, vertexIndex);
		}

		::System::Void AddVertexFirst(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_ADDVERTEXFIRST_OFFSET))(this, position);
		}

		::System::Void AddVertexLast(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_ADDVERTEXLAST_OFFSET))(this, position);
		}

		::System::Void RemoveVertex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_REMOVEVERTEX_OFFSET))(this, index);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_CLEAR_OFFSET))(this);
		}

		::System::Void InsertBefore(::System::Int32 vertexIndex, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_INSERTBEFORE_OFFSET))(this, vertexIndex, position);
		}

		::System::Void InsertAfter(::System::Int32 vertexIndex, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_INSERTAFTER_OFFSET))(this, vertexIndex, position);
		}

		::UnityEngine::Vector3 GetVertex(::System::Int32 vertexIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_GETVERTEX_OFFSET))(this, vertexIndex);
		}

		::System::Void SetVertex(::System::Int32 vertexIndex, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_CATMULLROMSPLINE3_SETVERTEX_OFFSET))(this, vertexIndex, position);
		}
	};
}
