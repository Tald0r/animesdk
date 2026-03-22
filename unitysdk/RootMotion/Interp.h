#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/InterpolationMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_INTERP_BACKINCUBIC_OFFSET UNITYSDK_OFFSET(0x1A573AE0)
#define ROOTMOTION_INTERP_BACKINQUARTIC_OFFSET UNITYSDK_OFFSET(0x1A573B10)
#define ROOTMOTION_INTERP_DAMP_OFFSET UNITYSDK_OFFSET(0x1A574050)
#define ROOTMOTION_INTERP_FLOAT_OFFSET UNITYSDK_OFFSET(0x1A573380)
#define ROOTMOTION_INTERP_INBACK_OFFSET UNITYSDK_OFFSET(0x1A573EF0)
#define ROOTMOTION_INTERP_INCUBIC_OFFSET UNITYSDK_OFFSET(0x1A573970)
#define ROOTMOTION_INTERP_INELASTICBIG_OFFSET UNITYSDK_OFFSET(0x1A573D10)
#define ROOTMOTION_INTERP_INELASTICSMALL_OFFSET UNITYSDK_OFFSET(0x1A573CC0)
#define ROOTMOTION_INTERP_INELASTIC_OFFSET UNITYSDK_OFFSET(0x1A574100)
#define ROOTMOTION_INTERP_INOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x1A5738C0)
#define ROOTMOTION_INTERP_INOUTQUINTIC_OFFSET UNITYSDK_OFFSET(0x1A5738F0)
#define ROOTMOTION_INTERP_INOUTSINE_OFFSET UNITYSDK_OFFSET(0x1A573DF0)
#define ROOTMOTION_INTERP_INQUADRATIC_OFFSET UNITYSDK_OFFSET(0x1A573990)
#define ROOTMOTION_INTERP_INQUARTIC_OFFSET UNITYSDK_OFFSET(0x1A573950)
#define ROOTMOTION_INTERP_INQUINTIC_OFFSET UNITYSDK_OFFSET(0x1A573930)
#define ROOTMOTION_INTERP_INSINE_OFFSET UNITYSDK_OFFSET(0x1A573D60)
#define ROOTMOTION_INTERP_LERPVALUE_OFFSET UNITYSDK_OFFSET(0x1A573FD0)
#define ROOTMOTION_INTERP_NONE_OFFSET UNITYSDK_OFFSET(0x1A5738B0)
#define ROOTMOTION_INTERP_OUTBACKCUBIC_OFFSET UNITYSDK_OFFSET(0x1A573B50)
#define ROOTMOTION_INTERP_OUTBACKQUARTIC_OFFSET UNITYSDK_OFFSET(0x1A573B90)
#define ROOTMOTION_INTERP_OUTBACK_OFFSET UNITYSDK_OFFSET(0x1A573F20)
#define ROOTMOTION_INTERP_OUTCUBIC_OFFSET UNITYSDK_OFFSET(0x1A573A70)
#define ROOTMOTION_INTERP_OUTELASTICBIG_OFFSET UNITYSDK_OFFSET(0x1A573C50)
#define ROOTMOTION_INTERP_OUTELASTICSMALL_OFFSET UNITYSDK_OFFSET(0x1A573BE0)
#define ROOTMOTION_INTERP_OUTELASTIC_OFFSET UNITYSDK_OFFSET(0x1A573E40)
#define ROOTMOTION_INTERP_OUTINCUBIC_OFFSET UNITYSDK_OFFSET(0x1A573AA0)
#define ROOTMOTION_INTERP_OUTINQUARTIC_OFFSET UNITYSDK_OFFSET(0x1A5740C0)
#define ROOTMOTION_INTERP_OUTQUARTIC_OFFSET UNITYSDK_OFFSET(0x1A573A10)
#define ROOTMOTION_INTERP_OUTQUINTIC_OFFSET UNITYSDK_OFFSET(0x1A5739A0)
#define ROOTMOTION_INTERP_OUTSINE_OFFSET UNITYSDK_OFFSET(0x1A573DB0)
#define ROOTMOTION_INTERP_V3_OFFSET UNITYSDK_OFFSET(0x1A573F60)
#define ROOTMOTION_INTERP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5741B0)

namespace RootMotion
{
	inline static constexpr unsigned int Interp_TypeDefinitionIndex = 34987;

	class Interp : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0
		// static const ::System::Single kLogNegligibleResidual; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP__CTOR_OFFSET))(this);
		}

		static ::System::Single Float(::System::Single t, ::RootMotion::InterpolationMode mode)
		{
			return ((::System::Single(*)(::System::Single, ::RootMotion::InterpolationMode))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_FLOAT_OFFSET))(t, mode);
		}

		static ::UnityEngine::Vector3 V3(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::System::Single t, ::RootMotion::InterpolationMode mode)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::InterpolationMode))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_V3_OFFSET))(v1, v2, t, mode);
		}

		static ::System::Single LerpValue(::System::Single value, ::System::Single target, ::System::Single increaseSpeed, ::System::Single decreaseSpeed)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_LERPVALUE_OFFSET))(value, target, increaseSpeed, decreaseSpeed);
		}

		static ::System::Single Damp(::System::Single initial, ::System::Single dampTime, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_DAMP_OFFSET))(initial, dampTime, deltaTime);
		}

		static ::System::Single None(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_NONE_OFFSET))(t, b, c);
		}

		static ::System::Single InOutCubic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INOUTCUBIC_OFFSET))(t, b, c);
		}

		static ::System::Single InOutQuintic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INOUTQUINTIC_OFFSET))(t, b, c);
		}

		static ::System::Single InQuintic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INQUINTIC_OFFSET))(t, b, c);
		}

		static ::System::Single InQuartic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INQUARTIC_OFFSET))(t, b, c);
		}

		static ::System::Single InCubic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INCUBIC_OFFSET))(t, b, c);
		}

		static ::System::Single InQuadratic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INQUADRATIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutQuintic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTQUINTIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutQuartic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTQUARTIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutCubic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTCUBIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutInCubic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTINCUBIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutInQuartic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTINQUARTIC_OFFSET))(t, b, c);
		}

		static ::System::Single BackInCubic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_BACKINCUBIC_OFFSET))(t, b, c);
		}

		static ::System::Single BackInQuartic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_BACKINQUARTIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutBackCubic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTBACKCUBIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutBackQuartic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTBACKQUARTIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutElasticSmall(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTELASTICSMALL_OFFSET))(t, b, c);
		}

		static ::System::Single OutElasticBig(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTELASTICBIG_OFFSET))(t, b, c);
		}

		static ::System::Single InElasticSmall(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INELASTICSMALL_OFFSET))(t, b, c);
		}

		static ::System::Single InElasticBig(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INELASTICBIG_OFFSET))(t, b, c);
		}

		static ::System::Single InSine(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INSINE_OFFSET))(t, b, c);
		}

		static ::System::Single OutSine(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTSINE_OFFSET))(t, b, c);
		}

		static ::System::Single InOutSine(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INOUTSINE_OFFSET))(t, b, c);
		}

		static ::System::Single InElastic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INELASTIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutElastic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTELASTIC_OFFSET))(t, b, c);
		}

		static ::System::Single InBack(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INBACK_OFFSET))(t, b, c);
		}

		static ::System::Single OutBack(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTBACK_OFFSET))(t, b, c);
		}
	};
}
