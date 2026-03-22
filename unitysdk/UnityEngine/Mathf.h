#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_MATHF_ABS_1_OFFSET UNITYSDK_OFFSET(0x19F46C80)
#define UNITYENGINE_MATHF_ABS_OFFSET UNITYSDK_OFFSET(0x19F46C70)
#define UNITYENGINE_MATHF_ACOS_OFFSET UNITYSDK_OFFSET(0x19F46BF0)
#define UNITYENGINE_MATHF_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x19F478C0)
#define UNITYENGINE_MATHF_ASIN_OFFSET UNITYSDK_OFFSET(0x19F46BD0)
#define UNITYENGINE_MATHF_ATAN2_OFFSET UNITYSDK_OFFSET(0x19F46C30)
#define UNITYENGINE_MATHF_ATAN_OFFSET UNITYSDK_OFFSET(0x19F46C10)
#define UNITYENGINE_MATHF_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x19F47410)
#define UNITYENGINE_MATHF_CEIL_OFFSET UNITYSDK_OFFSET(0x19F47340)
#define UNITYENGINE_MATHF_CLAMP01_OFFSET UNITYSDK_OFFSET(0x19F47550)
#define UNITYENGINE_MATHF_CLAMP_1_OFFSET UNITYSDK_OFFSET(0x19F47540)
#define UNITYENGINE_MATHF_CLAMP_OFFSET UNITYSDK_OFFSET(0x19F47520)
#define UNITYENGINE_MATHF_CLOSESTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x19F46AE0)
#define UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_INJECTED_OFFSET UNITYSDK_OFFSET(0x19F46B50)
#define UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_OFFSET UNITYSDK_OFFSET(0x19F46B20)
#define UNITYENGINE_MATHF_COS_OFFSET UNITYSDK_OFFSET(0x19F46B90)
#define UNITYENGINE_MATHF_DELTAANGLE_OFFSET UNITYSDK_OFFSET(0x19F47800)
#define UNITYENGINE_MATHF_EXP_OFFSET UNITYSDK_OFFSET(0x19F47230)
#define UNITYENGINE_MATHF_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x19F47430)
#define UNITYENGINE_MATHF_FLOOR_OFFSET UNITYSDK_OFFSET(0x19F47350)
#define UNITYENGINE_MATHF_GAMMATOLINEARSPACE_OFFSET UNITYSDK_OFFSET(0x19F46B00)
#define UNITYENGINE_MATHF_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x19F47BC0)
#define UNITYENGINE_MATHF_LERPANGLE_OFFSET UNITYSDK_OFFSET(0x19F475B0)
#define UNITYENGINE_MATHF_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x19F475A0)
#define UNITYENGINE_MATHF_LERP_OFFSET UNITYSDK_OFFSET(0x19F47570)
#define UNITYENGINE_MATHF_LINEARTOGAMMASPACE_OFFSET UNITYSDK_OFFSET(0x19F46B10)
#define UNITYENGINE_MATHF_LOG10_OFFSET UNITYSDK_OFFSET(0x19F47320)
#define UNITYENGINE_MATHF_LOG_1_OFFSET UNITYSDK_OFFSET(0x19F47300)
#define UNITYENGINE_MATHF_LOG_OFFSET UNITYSDK_OFFSET(0x19F47250)
#define UNITYENGINE_MATHF_MAX_1_OFFSET UNITYSDK_OFFSET(0x19F46F60)
#define UNITYENGINE_MATHF_MAX_2_OFFSET UNITYSDK_OFFSET(0x19F47030)
#define UNITYENGINE_MATHF_MAX_3_OFFSET UNITYSDK_OFFSET(0x19F47040)
#define UNITYENGINE_MATHF_MAX_OFFSET UNITYSDK_OFFSET(0x19F46F50)
#define UNITYENGINE_MATHF_MIN_1_OFFSET UNITYSDK_OFFSET(0x19F46CA0)
#define UNITYENGINE_MATHF_MIN_2_OFFSET UNITYSDK_OFFSET(0x19F46D70)
#define UNITYENGINE_MATHF_MIN_3_OFFSET UNITYSDK_OFFSET(0x19F46D80)
#define UNITYENGINE_MATHF_MIN_OFFSET UNITYSDK_OFFSET(0x19F46C90)
#define UNITYENGINE_MATHF_MOVETOWARDSANGLE_OFFSET UNITYSDK_OFFSET(0x19F47700)
#define UNITYENGINE_MATHF_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x19F476B0)
#define UNITYENGINE_MATHF_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x19F46AF0)
#define UNITYENGINE_MATHF_PERLINNOISE_OFFSET UNITYSDK_OFFSET(0x19F46B60)
#define UNITYENGINE_MATHF_PINGPONG_OFFSET UNITYSDK_OFFSET(0x19F47B50)
#define UNITYENGINE_MATHF_POW_OFFSET UNITYSDK_OFFSET(0x19F47210)
#define UNITYENGINE_MATHF_REPEAT_OFFSET UNITYSDK_OFFSET(0x19F47660)
#define UNITYENGINE_MATHF_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x19F47450)
#define UNITYENGINE_MATHF_ROUND_OFFSET UNITYSDK_OFFSET(0x19F47360)
#define UNITYENGINE_MATHF_SIGN_OFFSET UNITYSDK_OFFSET(0x19F47500)
#define UNITYENGINE_MATHF_SIN_OFFSET UNITYSDK_OFFSET(0x19F46B70)
#define UNITYENGINE_MATHF_SMOOTHDAMP_1_OFFSET UNITYSDK_OFFSET(0x19F47A30)
#define UNITYENGINE_MATHF_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x19F47900)
#define UNITYENGINE_MATHF_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x19F47870)
#define UNITYENGINE_MATHF_SQRT_OFFSET UNITYSDK_OFFSET(0x19F46C50)
#define UNITYENGINE_MATHF_TAN_OFFSET UNITYSDK_OFFSET(0x19F46BB0)
#define UNITYENGINE_MATHF__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F47C00)

namespace UnityEngine
{
	inline static constexpr unsigned int Mathf_TypeDefinitionIndex = 5301;

	struct alignas(1) Mathf
	{
		static ::System::Single* StaticGet_Epsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Mathf_TypeDefinitionIndex)->GetStaticField(0x2970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF__CCTOR_OFFSET))();
		}

		static ::System::Int32 ClosestPowerOfTwo(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLOSESTPOWEROFTWO_OFFSET))(value);
		}

		static ::System::Int32 NextPowerOfTwo(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_NEXTPOWEROFTWO_OFFSET))(value);
		}

		static ::System::Single GammaToLinearSpace(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_GAMMATOLINEARSPACE_OFFSET))(value);
		}

		static ::System::Single LinearToGammaSpace(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LINEARTOGAMMASPACE_OFFSET))(value);
		}

		/*
		static ::UnityEngine::Color CorrelatedColorTemperatureToRGB(::System::Single kelvin)
		{
			return ((::UnityEngine::Color(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_OFFSET))(kelvin);
		}
		*/

		static ::System::Single PerlinNoise(::System::Single x, ::System::Single y)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_PERLINNOISE_OFFSET))(x, y);
		}

		static ::System::Single Sin(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SIN_OFFSET))(f);
		}

		static ::System::Single Cos(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_COS_OFFSET))(f);
		}

		static ::System::Single Tan(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_TAN_OFFSET))(f);
		}

		static ::System::Single Asin(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ASIN_OFFSET))(f);
		}

		static ::System::Single Acos(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ACOS_OFFSET))(f);
		}

		static ::System::Single Atan(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ATAN_OFFSET))(f);
		}

		static ::System::Single Atan2(::System::Single y, ::System::Single x)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ATAN2_OFFSET))(y, x);
		}

		static ::System::Single Sqrt(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SQRT_OFFSET))(f);
		}

		static ::System::Single Abs(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ABS_OFFSET))(f);
		}

		static ::System::Int32 Abs_1(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ABS_1_OFFSET))(value);
		}

		static ::System::Single Min(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_OFFSET))(a, b);
		}

		static ::System::Single Min_1(::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_1_OFFSET))(values);
		}

		static ::System::Int32 Min_2(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_2_OFFSET))(a, b);
		}

		static ::System::Int32 Min_3(::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_3_OFFSET))(values);
		}

		static ::System::Single Max(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_OFFSET))(a, b);
		}

		static ::System::Single Max_1(::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_1_OFFSET))(values);
		}

		static ::System::Int32 Max_2(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_2_OFFSET))(a, b);
		}

		static ::System::Int32 Max_3(::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_3_OFFSET))(values);
		}

		static ::System::Single Pow(::System::Single f, ::System::Single p)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_POW_OFFSET))(f, p);
		}

		static ::System::Single Exp(::System::Single power)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_EXP_OFFSET))(power);
		}

		static ::System::Single Log(::System::Single f, ::System::Single p)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LOG_OFFSET))(f, p);
		}

		static ::System::Single Log_1(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LOG_1_OFFSET))(f);
		}

		static ::System::Single Log10(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LOG10_OFFSET))(f);
		}

		static ::System::Single Ceil(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CEIL_OFFSET))(f);
		}

		static ::System::Single Floor(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_FLOOR_OFFSET))(f);
		}

		static ::System::Single Round(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ROUND_OFFSET))(f);
		}

		static ::System::Int32 CeilToInt(::System::Single f)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CEILTOINT_OFFSET))(f);
		}

		static ::System::Int32 FloorToInt(::System::Single f)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_FLOORTOINT_OFFSET))(f);
		}

		static ::System::Int32 RoundToInt(::System::Single f)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ROUNDTOINT_OFFSET))(f);
		}

		static ::System::Single Sign(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SIGN_OFFSET))(f);
		}

		static ::System::Single Clamp(::System::Single value, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLAMP_OFFSET))(value, min, max);
		}

		static ::System::Int32 Clamp_1(::System::Int32 value, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLAMP_1_OFFSET))(value, min, max);
		}

		static ::System::Single Clamp01(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLAMP01_OFFSET))(value);
		}

		static ::System::Single Lerp(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LERP_OFFSET))(a, b, t);
		}

		static ::System::Single LerpUnclamped(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::System::Single LerpAngle(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LERPANGLE_OFFSET))(a, b, t);
		}

		static ::System::Single MoveTowards(::System::Single current, ::System::Single target, ::System::Single maxDelta)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MOVETOWARDS_OFFSET))(current, target, maxDelta);
		}

		static ::System::Single MoveTowardsAngle(::System::Single current, ::System::Single target, ::System::Single maxDelta)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MOVETOWARDSANGLE_OFFSET))(current, target, maxDelta);
		}

		static ::System::Single SmoothStep(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHSTEP_OFFSET))(from, to, t);
		}

		static ::System::Boolean Approximately(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_APPROXIMATELY_OFFSET))(a, b);
		}

		static ::System::Single SmoothDamp(::System::Single current, ::System::Single target, ::System::Single& currentVelocity, ::System::Single smoothTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMP_OFFSET))(current, target, currentVelocity, smoothTime);
		}

		static ::System::Single SmoothDamp_1(::System::Single current, ::System::Single target, ::System::Single& currentVelocity, ::System::Single smoothTime, ::System::Single maxSpeed, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMP_1_OFFSET))(current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
		}

		static ::System::Single Repeat(::System::Single t, ::System::Single length)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_REPEAT_OFFSET))(t, length);
		}

		static ::System::Single PingPong(::System::Single t, ::System::Single length)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_PINGPONG_OFFSET))(t, length);
		}

		static ::System::Single InverseLerp(::System::Single a, ::System::Single b, ::System::Single value)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_INVERSELERP_OFFSET))(a, b, value);
		}

		static ::System::Single DeltaAngle(::System::Single current, ::System::Single target)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_DELTAANGLE_OFFSET))(current, target);
		}

		/*
		static ::System::Void CorrelatedColorTemperatureToRGB_Injected(::System::Single kelvin, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_INJECTED_OFFSET))(kelvin, ret);
		}
		*/
	};
}
