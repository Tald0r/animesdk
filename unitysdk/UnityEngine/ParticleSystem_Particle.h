#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ANIMATEDVELOCITY_OFFSET UNITYSDK_OFFSET(0x2F8FA0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x31DD30)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x8F36C0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_REMAININGLIFETIME_OFFSET UNITYSDK_OFFSET(0x316D40)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ROTATION3D_OFFSET UNITYSDK_OFFSET(0x943CD0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x943C90)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_TOTALVELOCITY_OFFSET UNITYSDK_OFFSET(0x943C60)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x2D0730)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ANGULARVELOCITY3D_OFFSET UNITYSDK_OFFSET(0x943D30)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x943C50)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x2C4D20)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x7A6460)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_REMAININGLIFETIME_OFFSET UNITYSDK_OFFSET(0x943C50)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ROTATION3D_OFFSET UNITYSDK_OFFSET(0x943D00)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x943CB0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x943CA0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x943CC0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_TEXTOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0x8F36B0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x2D0750)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_Particle_TypeDefinitionIndex = 23665;

	struct alignas(4) ParticleSystem_Particle
	{
		::UnityEngine::Vector3 m_Position; // 0x10
		::UnityEngine::Vector3 m_Velocity; // 0x1C
		::UnityEngine::Vector3 m_AnimatedVelocity; // 0x28
		::UnityEngine::Vector3 m_InitialVelocity; // 0x34
		::UnityEngine::Vector3 m_AxisOfRotation; // 0x40
		::UnityEngine::Vector3 m_Rotation; // 0x4C
		::UnityEngine::Vector3 m_AngularVelocity; // 0x58
		::UnityEngine::Vector3 m_StartSize; // 0x64
		::UnityEngine::Color32 m_StartColor; // 0x70
		::UnityEngine::Color32 m_TextOutlineColor; // 0x74
		::System::UInt32 m_RandomSeed; // 0x78
		::System::UInt32 m_ParentRandomSeed; // 0x7C
		::System::Single m_Lifetime; // 0x80
		::System::Single m_StartLifetime; // 0x84
		::System::Int32 m_MeshIndex; // 0x88
		::System::Single m_EmitAccumulator0; // 0x8C
		::System::Single m_EmitAccumulator1; // 0x90
		::System::UInt32 m_Flags; // 0x94

		::System::Void set_lifetime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_LIFETIME_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_VELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_animatedVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ANIMATEDVELOCITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_totalVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_TOTALVELOCITY_OFFSET))(this);
		}

		::System::Single get_remainingLifetime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_REMAININGLIFETIME_OFFSET))(this);
		}

		::System::Void set_remainingLifetime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_REMAININGLIFETIME_OFFSET))(this, value);
		}

		::System::Single get_startLifetime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_STARTLIFETIME_OFFSET))(this);
		}

		::System::Void set_startLifetime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTLIFETIME_OFFSET))(this, value);
		}

		::System::Void set_startColor(::UnityEngine::Color32 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTCOLOR_OFFSET))(this, value);
		}

		::System::Void set_textOutlineColor(::UnityEngine::Color32 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_TEXTOUTLINECOLOR_OFFSET))(this, value);
		}

		::System::UInt32 get_randomSeed()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_RANDOMSEED_OFFSET))(this);
		}

		::System::Void set_randomSeed(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_RANDOMSEED_OFFSET))(this, value);
		}

		::System::Void set_startSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTSIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_rotation3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ROTATION3D_OFFSET))(this);
		}

		::System::Void set_rotation3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ROTATION3D_OFFSET))(this, value);
		}

		::System::Void set_angularVelocity3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ANGULARVELOCITY3D_OFFSET))(this, value);
		}
	};
}
