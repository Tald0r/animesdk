#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Random_State.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RANDOM_GETRANDOMUNITCIRCLE_OFFSET UNITYSDK_OFFSET(0x19E428A0)
#define UNITYENGINE_RANDOM_GET_INSIDEUNITCIRCLE_OFFSET UNITYSDK_OFFSET(0x19E428B0)
#define UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E42890)
#define UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_OFFSET UNITYSDK_OFFSET(0x19E42850)
#define UNITYENGINE_RANDOM_GET_ONUNITSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E42920)
#define UNITYENGINE_RANDOM_GET_ONUNITSPHERE_OFFSET UNITYSDK_OFFSET(0x19E428E0)
#define UNITYENGINE_RANDOM_GET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E42960)
#define UNITYENGINE_RANDOM_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x19E42930)
#define UNITYENGINE_RANDOM_GET_STATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E427E0)
#define UNITYENGINE_RANDOM_GET_STATE_OFFSET UNITYSDK_OFFSET(0x19E427B0)
#define UNITYENGINE_RANDOM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19E42840)
#define UNITYENGINE_RANDOM_INITSTATE_OFFSET UNITYSDK_OFFSET(0x19E427A0)
#define UNITYENGINE_RANDOM_RANDOMRANGEINT_OFFSET UNITYSDK_OFFSET(0x19E42830)
#define UNITYENGINE_RANDOM_RANGE_1_OFFSET UNITYSDK_OFFSET(0x19E42820)
#define UNITYENGINE_RANDOM_RANGE_OFFSET UNITYSDK_OFFSET(0x19E42810)
#define UNITYENGINE_RANDOM_SET_STATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E42800)
#define UNITYENGINE_RANDOM_SET_STATE_OFFSET UNITYSDK_OFFSET(0x19E427F0)
#define UNITYENGINE_RANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E42970)

namespace UnityEngine
{
	inline static constexpr unsigned int Random_TypeDefinitionIndex = 5315;

	class Random : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM__CTOR_OFFSET))(this);
		}

		static ::System::Void InitState(::System::Int32 seed)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_INITSTATE_OFFSET))(seed);
		}

		static ::UnityEngine::Random_State get_state()
		{
			return ((::UnityEngine::Random_State(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_STATE_OFFSET))();
		}

		static ::System::Void set_state(::UnityEngine::Random_State value)
		{
			return ((::System::Void(*)(::UnityEngine::Random_State))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_SET_STATE_OFFSET))(value);
		}

		static ::System::Single Range(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANGE_OFFSET))(min, max);
		}

		static ::System::Int32 Range_1(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANGE_1_OFFSET))(min, max);
		}

		static ::System::Int32 RandomRangeInt(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANDOMRANGEINT_OFFSET))(min, max);
		}

		static ::System::Single get_value()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_VALUE_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_insideUnitSphere()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_OFFSET))();
		}

		static ::System::Void GetRandomUnitCircle(::UnityEngine::Vector2& output)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GETRANDOMUNITCIRCLE_OFFSET))(output);
		}

		static ::UnityEngine::Vector2 get_insideUnitCircle()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_INSIDEUNITCIRCLE_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_onUnitSphere()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ONUNITSPHERE_OFFSET))();
		}

		static ::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ROTATION_OFFSET))();
		}

		static ::System::Void get_state_Injected(::UnityEngine::Random_State& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Random_State&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_STATE_INJECTED_OFFSET))(ret);
		}

		static ::System::Void set_state_Injected(::UnityEngine::Random_State& value)
		{
			return ((::System::Void(*)(::UnityEngine::Random_State&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_SET_STATE_INJECTED_OFFSET))(value);
		}

		static ::System::Void get_insideUnitSphere_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_INJECTED_OFFSET))(ret);
		}

		static ::System::Void get_onUnitSphere_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ONUNITSPHERE_INJECTED_OFFSET))(ret);
		}

		static ::System::Void get_rotation_Injected(::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ROTATION_INJECTED_OFFSET))(ret);
		}
	};
}
