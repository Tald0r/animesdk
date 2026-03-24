#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x972240)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_EQUALS_OFFSET UNITYSDK_OFFSET(0x9721B0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x972250)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_CANHAVEFOLLOWUP_OFFSET UNITYSDK_OFFSET(0x935A40)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_CONTROLPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x9720E0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_ISSEGMENT_OFFSET UNITYSDK_OFFSET(0x972100)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x306AA0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_NEXTCONTROLPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x2F2260)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_NEXTCONTROLPOINTISSEGMENT_OFFSET UNITYSDK_OFFSET(0x9720F0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_ORIENTATIONANCHORINDEX_OFFSET UNITYSDK_OFFSET(0x972110)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_PREVIOUSCONTROLPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x2F22E0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_PREVIOUSCONTROLPOINTISSEGMENT_OFFSET UNITYSDK_OFFSET(0x302320)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_SEGMENTINDEX_OFFSET UNITYSDK_OFFSET(0x368630)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_TF_OFFSET UNITYSDK_OFFSET(0x2F60C0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AE2B980)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AE2BA10)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x972160)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x972160)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineSegment_ControlPointExtrinsicProperties_TypeDefinitionIndex = 36688;

	struct alignas(4) CurvySplineSegment_ControlPointExtrinsicProperties
	{
		::System::Boolean isVisible; // 0x10
		::System::Single tf; // 0x14
		::System::Int16 segmentIndex; // 0x18
		::System::Int16 controlPointIndex; // 0x1A
		::System::Int16 nextControlPointIndex; // 0x1C
		::System::Int16 previousControlPointIndex; // 0x1E
		::System::Boolean previousControlPointIsSegment; // 0x20
		::System::Boolean nextControlPointIsSegment; // 0x21
		::System::Boolean canHaveFollowUp; // 0x22

		::System::Void _ctor(::System::Boolean isVisible, ::System::Single tf, ::System::Int16 segmentIndex, ::System::Int16 controlPointIndex, ::System::Int16 previousControlPointIndex, ::System::Int16 nextControlPointIndex, ::System::Boolean previousControlPointIsSegment, ::System::Boolean nextControlPointIsSegment, ::System::Boolean canHaveFollowUp, ::System::Int16 orientationAnchorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Int16, ::System::Int16, ::System::Int16, ::System::Int16, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int16))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES__CTOR_OFFSET))(this, isVisible, tf, segmentIndex, controlPointIndex, previousControlPointIndex, nextControlPointIndex, previousControlPointIsSegment, nextControlPointIsSegment, canHaveFollowUp, orientationAnchorIndex);
		}

		::System::Void _ctor_1(::System::Boolean isVisible, ::System::Single tf, ::System::Int16 segmentIndex, ::System::Int16 controlPointIndex, ::System::Int16 previousControlPointIndex, ::System::Int16 nextControlPointIndex, ::System::Boolean previousControlPointIsSegment, ::System::Boolean nextControlPointIsSegment, ::System::Boolean canHaveFollowUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Int16, ::System::Int16, ::System::Int16, ::System::Int16, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES__CTOR_1_OFFSET))(this, isVisible, tf, segmentIndex, controlPointIndex, previousControlPointIndex, nextControlPointIndex, previousControlPointIsSegment, nextControlPointIsSegment, canHaveFollowUp);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Single get_TF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_TF_OFFSET))(this);
		}

		::System::Int16 get_SegmentIndex()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_SEGMENTINDEX_OFFSET))(this);
		}

		::System::Int16 get_ControlPointIndex()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_CONTROLPOINTINDEX_OFFSET))(this);
		}

		::System::Int16 get_NextControlPointIndex()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_NEXTCONTROLPOINTINDEX_OFFSET))(this);
		}

		::System::Int16 get_PreviousControlPointIndex()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_PREVIOUSCONTROLPOINTINDEX_OFFSET))(this);
		}

		::System::Boolean get_PreviousControlPointIsSegment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_PREVIOUSCONTROLPOINTISSEGMENT_OFFSET))(this);
		}

		::System::Boolean get_NextControlPointIsSegment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_NEXTCONTROLPOINTISSEGMENT_OFFSET))(this);
		}

		::System::Boolean get_CanHaveFollowUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_CANHAVEFOLLOWUP_OFFSET))(this);
		}

		::System::Boolean get_IsSegment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_ISSEGMENT_OFFSET))(this);
		}

		::System::Int16 get_OrientationAnchorIndex()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GET_ORIENTATIONANCHORINDEX_OFFSET))(this);
		}

		::System::Boolean Equals(::FluffyUnderware::Curvy::CurvySplineSegment_ControlPointExtrinsicProperties other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment_ControlPointExtrinsicProperties))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::Curvy::CurvySplineSegment_ControlPointExtrinsicProperties left, ::FluffyUnderware::Curvy::CurvySplineSegment_ControlPointExtrinsicProperties right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment_ControlPointExtrinsicProperties, ::FluffyUnderware::Curvy::CurvySplineSegment_ControlPointExtrinsicProperties))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::Curvy::CurvySplineSegment_ControlPointExtrinsicProperties left, ::FluffyUnderware::Curvy::CurvySplineSegment_ControlPointExtrinsicProperties right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment_ControlPointExtrinsicProperties, ::FluffyUnderware::Curvy::CurvySplineSegment_ControlPointExtrinsicProperties))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_CONTROLPOINTEXTRINSICPROPERTIES_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
