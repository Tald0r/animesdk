#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Function/FixedPolynomial.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_BUILDCONVERTERFROMUTOT_OFFSET UNITYSDK_OFFSET(0x1A206E60)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A2087C0)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_INTEGRAL_OFFSET UNITYSDK_OFFSET(0x1A207040)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_INTEGRALINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A206830)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2087F0)

namespace Foundation
{
	inline static constexpr unsigned int Extension_AnimationCurveDetail_BezierInterval_TypeDefinitionIndex = 9151;

	class Extension_AnimationCurveDetail_BezierInterval : public ::System::Object
	{
	public:
		::System::Single _lhsOutWeight; // 0x10
		::System::Single _integralZeroCache; // 0x14
		::System::Single _rhsInWeight; // 0x18
		::System::Single _integralOneCache; // 0x1C
		::Foundation::Unreal::Interval_1<::System::Single> _timeInterval; // 0x20
		::Foundation::Function::FixedPolynomial _bezierDerivative; // 0x30
		::Foundation::Function::FixedPolynomial _integralPolynomial; // 0x54
		::Foundation::Function::FixedPolynomial _timeTransform; // 0x78
		::Foundation::Function::FixedPolynomial _evaluatePolynomial; // 0x9C
		::Foundation::Function::FixedPolynomial _converterDerivative; // 0xC0

		::System::Void _ctor(::UnityEngine::Keyframe& lhs, ::UnityEngine::Keyframe& rhs, ::System::Boolean inclusiveRight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL__CTOR_OFFSET))(this, lhs, rhs, inclusiveRight);
		}

		::System::Single IntegralInternal(::System::Single curveTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_INTEGRALINTERNAL_OFFSET))(this, curveTime);
		}

		static ::Foundation::Function::FixedPolynomial BuildConverterFromUToT(::System::Single leftOutWeight, ::System::Single rightInWeight)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_BUILDCONVERTERFROMUTOT_OFFSET))(leftOutWeight, rightInWeight);
		}

		::System::Single Foundation_Extension_AnimationCurveDetail_IKeyFrameInterval_Integral(::Foundation::Unreal::Interval_1<::System::Single>& interval)
		{
			return ((::System::Single(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_INTEGRAL_OFFSET))(this, interval);
		}

		::System::Boolean Foundation_Extension_AnimationCurveDetail_IKeyFrameInterval_Contains(::System::Single curveTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_CONTAINS_OFFSET))(this, curveTime);
		}
	};
}
