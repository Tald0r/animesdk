#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A35FEA0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35FEE0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__GETNORMALSCACHE_B__185_0_OFFSET UNITYSDK_OFFSET(0x1A35FF70)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__GETPOSITIONSCACHE_B__180_0_OFFSET UNITYSDK_OFFSET(0x1A35FF10)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__GETTANGENTSCACHE_B__183_0_OFFSET UNITYSDK_OFFSET(0x1A35FF40)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C___CTOR_B__17_0_OFFSET UNITYSDK_OFFSET(0x1A35FEF0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySpline___c_TypeDefinitionIndex = 35660;

	class CurvySpline___c : public ::System::Object
	{
	public:
		static ::FluffyUnderware::Curvy::CurvySpline___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::CurvySpline___c**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline___c_TypeDefinitionIndex)->GetStaticField(0x251D0);
		}
		static ::System::Action_3<::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Int32, ::System::Int32>** StaticGet___9__17_0()
		{
			return (::System::Action_3<::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline___c_TypeDefinitionIndex)->GetStaticField(0x251D8);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::CurvySplineSegment*, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>>** StaticGet___9__185_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::CurvySplineSegment*, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>>**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline___c_TypeDefinitionIndex)->GetStaticField(0x251E0);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::CurvySplineSegment*, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>>** StaticGet___9__180_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::CurvySplineSegment*, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>>**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline___c_TypeDefinitionIndex)->GetStaticField(0x251E8);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::CurvySplineSegment*, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>>** StaticGet___9__183_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::CurvySplineSegment*, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>>**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline___c_TypeDefinitionIndex)->GetStaticField(0x251F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__17_0(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::System::Int32 controlPointIndex, ::System::Int32 controlPointsCount)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C___CTOR_B__17_0_OFFSET))(this, controlPoint, controlPointIndex, controlPointsCount);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> _GetPositionsCache_b__180_0(::FluffyUnderware::Curvy::CurvySplineSegment* s)
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__GETPOSITIONSCACHE_B__180_0_OFFSET))(this, s);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> _GetTangentsCache_b__183_0(::FluffyUnderware::Curvy::CurvySplineSegment* s)
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__GETTANGENTSCACHE_B__183_0_OFFSET))(this, s);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> _GetNormalsCache_b__185_0(::FluffyUnderware::Curvy::CurvySplineSegment* s)
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__GETNORMALSCACHE_B__185_0_OFFSET))(this, s);
		}
	};
}
