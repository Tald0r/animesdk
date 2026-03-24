#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemScalingMode.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/ParticleSystemStopAction.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CUSTOMSIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E3E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CUSTOMSIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x973180)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_DURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DDC0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x972B90)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E390)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x973140)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_LOOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DDF0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x972BB0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_MAXPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E470)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0x973200)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PLAYONAWAKE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E450)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x9731E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PREWARM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DE20)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PREWARM_OFFSET UNITYSDK_OFFSET(0x972BD0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SCALINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E430)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0x9731C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E3B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x973160)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E3F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x973190)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E370)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x9730A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DEC0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972C60)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DE90)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0x972BF0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DF50)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972CF0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DF20)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x972C80)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E200)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972F60)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E270)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972FC0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E260)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONX_OFFSET UNITYSDK_OFFSET(0x972F80)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E2E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x973020)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E2D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONY_OFFSET UNITYSDK_OFFSET(0x972FE0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E350)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x973080)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E340)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZ_OFFSET UNITYSDK_OFFSET(0x973040)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE3D_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DFC0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0x972D60)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E040)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972DE0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E0E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972E70)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E0A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEX_OFFSET UNITYSDK_OFFSET(0x972E00)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E190)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972F00)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E150)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEY_OFFSET UNITYSDK_OFFSET(0x972E90)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E1D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972F20)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E010)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x972D70)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DF90)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972D40)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_USEUNSCALEDTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E420)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_USEUNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x9731B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_DURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DDE0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x972BA0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E3A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x973150)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_LOOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DE00)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x972BC0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_MAXPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E480)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0x973210)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_PLAYONAWAKE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E460)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x9731F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SCALINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E440)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0x9731D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E3C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x973170)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E400)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x9731A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E380)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x973100)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DED0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972C70)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DEB0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0x972C30)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DF60)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972D00)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DF40)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x972CC0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E210)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972F70)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E280)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972FD0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E2F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x973030)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E360)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x973090)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E1F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATION_OFFSET UNITYSDK_OFFSET(0x972F30)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E050)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972DF0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E100)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972E80)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E0C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEX_OFFSET UNITYSDK_OFFSET(0x972E40)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E1B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972F10)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E170)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEY_OFFSET UNITYSDK_OFFSET(0x972ED0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E030)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x972DB0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DFA0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x972D50)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DF80)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEED_OFFSET UNITYSDK_OFFSET(0x972D10)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STOPACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3E4A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STOPACTION_OFFSET UNITYSDK_OFFSET(0x973220)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_TICKFREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE3DE40)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_TICKFREQUENCY_OFFSET UNITYSDK_OFFSET(0x972BE0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x3074E0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_MainModule_TypeDefinitionIndex = 24343;

	struct alignas(8) ParticleSystem_MainModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_DURATION_OFFSET))(this, value);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_LOOP_OFFSET))(this, value);
		}

		::System::Boolean get_prewarm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PREWARM_OFFSET))(this);
		}

		::System::Void set_tickFrequency(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_TICKFREQUENCY_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startDelay()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startDelay(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAY_OFFSET))(this, value);
		}
		*/

		::System::Single get_startDelayMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startDelayMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAYMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startLifetime()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startLifetime(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIME_OFFSET))(this, value);
		}
		*/

		::System::Single get_startLifetimeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startLifetimeMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::System::Void set_startSpeed(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEED_OFFSET))(this, value);
		}
		*/

		::System::Single get_startSpeedMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSPEEDMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startSpeedMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEEDMULTIPLIER_OFFSET))(this, value);
		}

		::System::Boolean get_startSize3D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE3D_OFFSET))(this);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startSize()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startSize(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE_OFFSET))(this, value);
		}
		*/

		::System::Single get_startSizeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startSizeMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startSizeX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startSizeX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEX_OFFSET))(this, value);
		}
		*/

		::System::Single get_startSizeXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startSizeXMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEXMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startSizeY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startSizeY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEY_OFFSET))(this, value);
		}
		*/

		::System::Single get_startSizeYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startSizeYMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEYMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_startSizeZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEZMULTIPLIER_OFFSET))(this);
		}

		/*
		::System::Void set_startRotation(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATION_OFFSET))(this, value);
		}
		*/

		::System::Single get_startRotationMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startRotationMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startRotationX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONX_OFFSET))(this);
		}
		*/

		::System::Single get_startRotationXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startRotationXMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONXMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startRotationY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONY_OFFSET))(this);
		}
		*/

		::System::Single get_startRotationYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startRotationYMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONYMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startRotationZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZ_OFFSET))(this);
		}
		*/

		::System::Single get_startRotationZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startRotationZMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONZMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxGradient get_startColor()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTCOLOR_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startColor(::UnityEngine::ParticleSystem_MinMaxGradient value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxGradient))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTCOLOR_OFFSET))(this, value);
		}
		*/

		::System::Single get_gravityModifierMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_gravityModifierMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace()
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPACE_OFFSET))(this);
		}

		::System::Void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPACE_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_customSimulationSpace()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CUSTOMSIMULATIONSPACE_OFFSET))(this);
		}

		::System::Single get_simulationSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPEED_OFFSET))(this);
		}

		::System::Void set_simulationSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPEED_OFFSET))(this, value);
		}

		::System::Boolean get_useUnscaledTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_USEUNSCALEDTIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystemScalingMode get_scalingMode()
		{
			return ((::UnityEngine::ParticleSystemScalingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SCALINGMODE_OFFSET))(this);
		}

		::System::Void set_scalingMode(::UnityEngine::ParticleSystemScalingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemScalingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SCALINGMODE_OFFSET))(this, value);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_PLAYONAWAKE_OFFSET))(this, value);
		}

		::System::Int32 get_maxParticles()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_MAXPARTICLES_OFFSET))(this);
		}

		::System::Void set_maxParticles(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_MAXPARTICLES_OFFSET))(this, value);
		}

		::System::Void set_stopAction(::UnityEngine::ParticleSystemStopAction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemStopAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STOPACTION_OFFSET))(this, value);
		}

		static ::System::Single get_duration_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_DURATION_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_duration_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_DURATION_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_loop_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_LOOP_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_loop_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_LOOP_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_prewarm_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PREWARM_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_tickFrequency_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_TICKFREQUENCY_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startDelay_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_startDelay_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startDelayMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startDelayMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startLifetime_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIME_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_startLifetime_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIME_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startLifetimeMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startLifetimeMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void set_startSpeed_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEED_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startSpeedMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startSpeedMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_startSize3D_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE3D_INJECTED_OFFSET))(_unity_self);
		}

		/*
		static ::System::Void get_startSize_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_startSize_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startSizeMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startSizeMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startSizeX_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEX_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_startSizeX_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEX_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startSizeXMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEXMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startSizeXMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEXMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startSizeY_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_startSizeY_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startSizeYMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startSizeYMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_startSizeZMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		/*
		static ::System::Void set_startRotation_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATION_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startRotationMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startRotationMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startRotationX_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONX_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		static ::System::Single get_startRotationXMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startRotationXMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startRotationY_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		static ::System::Single get_startRotationYMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startRotationYMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startRotationZ_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZ_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		static ::System::Single get_startRotationZMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startRotationZMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startColor_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxGradient& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTCOLOR_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_startColor_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxGradient& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTCOLOR_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_gravityModifierMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_gravityModifierMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPACE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_simulationSpace_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystemSimulationSpace value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPACE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::Transform* get_customSimulationSpace_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CUSTOMSIMULATIONSPACE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Single get_simulationSpeed_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPEED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_simulationSpeed_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPEED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_useUnscaledTime_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_USEUNSCALEDTIME_INJECTED_OFFSET))(_unity_self);
		}

		static ::UnityEngine::ParticleSystemScalingMode get_scalingMode_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemScalingMode(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SCALINGMODE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_scalingMode_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystemScalingMode value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystemScalingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SCALINGMODE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_playOnAwake_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PLAYONAWAKE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_playOnAwake_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_PLAYONAWAKE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Int32 get_maxParticles_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_MAXPARTICLES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_maxParticles_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_MAXPARTICLES_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_stopAction_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystemStopAction value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystemStopAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STOPACTION_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}
