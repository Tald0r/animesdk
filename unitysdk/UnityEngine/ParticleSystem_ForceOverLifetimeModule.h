#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873310)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x943320)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873330)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x943330)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873350)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x943360)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873370)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x943390)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x2C3980)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_ForceOverLifetimeModule_TypeDefinitionIndex = 23685;

	struct alignas(8) ParticleSystem_ForceOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_OFFSET))(this, value);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_OFFSET))(this, value);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_OFFSET))(this, value);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET))(_unity_self, value);
		}
		*/
	};
}
