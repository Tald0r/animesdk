#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x2F7FC0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0x2F8FA0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_STOPVALUE_OFFSET UNITYSDK_OFFSET(0x2F8FD0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_METHOD_2_932BC234D35144E8_OFFSET UNITYSDK_OFFSET(0x2F9030)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_METHOD_2_B4859502A23E740B_OFFSET UNITYSDK_OFFSET(0x67B3100)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_METHOD_2_D7F0936662AC1A47_OFFSET UNITYSDK_OFFSET(0x2F9010)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x2F9000)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0x2F8FC0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_STOPVALUE_OFFSET UNITYSDK_OFFSET(0x2F8FF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAttachToCamera_V3Curve_TypeDefinitionIndex = 62234;

	struct alignas(8) MonoEffectPluginAttachToCamera_V3Curve
	{
		::UnityEngine::AnimationCurve* xCurve; // 0x10
		::UnityEngine::AnimationCurve* yCurve; // 0x18
		::UnityEngine::AnimationCurve* zCurve; // 0x20
		::UnityEngine::Vector3 _startValue_k__BackingField; // 0x28
		::UnityEngine::Vector3 _stopValue_k__BackingField; // 0x34
		::UnityEngine::Vector2 _duration_k__BackingField; // 0x40

		::UnityEngine::Vector3 get_startValue()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_STARTVALUE_OFFSET))(this);
		}

		::System::Void set_startValue(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_STARTVALUE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_stopValue()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_STOPVALUE_OFFSET))(this);
		}

		::System::Void set_stopValue(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_STOPVALUE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_duration()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_DURATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_2_D7F0936662AC1A47(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_METHOD_2_D7F0936662AC1A47_OFFSET))(this, a1);
		}

		::System::Void Method_2_932BC234D35144E8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_METHOD_2_932BC234D35144E8_OFFSET))(this);
		}

		static ::System::Void Method_2_B4859502A23E740B(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_METHOD_2_B4859502A23E740B_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
