#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace System { class Object; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x92FC60)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0x92FB80)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92FC70)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_CONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x2F2E10)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_DEGREE_OFFSET UNITYSDK_OFFSET(0x2F1F70)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_ENDTF_OFFSET UNITYSDK_OFFSET(0x2EB550)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_ISCLAMPED_OFFSET UNITYSDK_OFFSET(0x351E80)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x92C590)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_SEGMENTSCOUNT_OFFSET UNITYSDK_OFFSET(0x3186C0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_STARTTF_OFFSET UNITYSDK_OFFSET(0x2F60E0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A5A08B0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A5A0990)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x92FB70)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineSegment_BSplineApproximationParameters_TypeDefinitionIndex = 36687;

	struct alignas(8) CurvySplineSegment_BSplineApproximationParameters
	{
		::System::Int32 _Degree_k__BackingField; // 0x10
		::System::Boolean _IsClamped_k__BackingField; // 0x14
		::System::Boolean _IsClosed_k__BackingField; // 0x15
		::System::Single _StartTf_k__BackingField; // 0x18
		::System::Single _EndTf_k__BackingField; // 0x1C
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* _ControlPoints_k__BackingField; // 0x20
		::System::Int32 _SegmentsCount_k__BackingField; // 0x28

		::System::Void _ctor(::FluffyUnderware::Curvy::CurvySplineSegment* segment)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS__CTOR_OFFSET))(this, segment);
		}

		::System::Int32 get_Degree()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_DEGREE_OFFSET))(this);
		}

		::System::Boolean get_IsClamped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_ISCLAMPED_OFFSET))(this);
		}

		::System::Boolean get_IsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_ISCLOSED_OFFSET))(this);
		}

		::System::Single get_StartTf()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_STARTTF_OFFSET))(this);
		}

		::System::Single get_EndTf()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_ENDTF_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* get_ControlPoints()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_CONTROLPOINTS_OFFSET))(this);
		}

		::System::Int32 get_SegmentsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GET_SEGMENTSCOUNT_OFFSET))(this);
		}

		::System::Boolean Equals(::FluffyUnderware::Curvy::CurvySplineSegment_BSplineApproximationParameters other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment_BSplineApproximationParameters))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::Curvy::CurvySplineSegment_BSplineApproximationParameters left, ::FluffyUnderware::Curvy::CurvySplineSegment_BSplineApproximationParameters right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment_BSplineApproximationParameters, ::FluffyUnderware::Curvy::CurvySplineSegment_BSplineApproximationParameters))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::Curvy::CurvySplineSegment_BSplineApproximationParameters left, ::FluffyUnderware::Curvy::CurvySplineSegment_BSplineApproximationParameters right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment_BSplineApproximationParameters, ::FluffyUnderware::Curvy::CurvySplineSegment_BSplineApproximationParameters))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_BSPLINEAPPROXIMATIONPARAMETERS_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
