#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemScalingMode.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/ParticleSystemStopAction.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CUSTOMSIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873A80)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CUSTOMSIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x943AA0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_DURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873460)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x9434B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873A30)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943A60)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_LOOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873490)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x9434D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_MAXPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873B10)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0x943B20)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PLAYONAWAKE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873AF0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x943B00)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PREWARM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8734C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PREWARM_OFFSET UNITYSDK_OFFSET(0x9434F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SCALINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873AD0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0x943AE0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873A50)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x943A80)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873A90)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x943AB0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873A10)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x9439C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873560)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943580)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873530)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0x943510)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8735F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943610)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8735C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x9435A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8738A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943880)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873910)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9438E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873900)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONX_OFFSET UNITYSDK_OFFSET(0x9438A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873980)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943940)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873970)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONY_OFFSET UNITYSDK_OFFSET(0x943900)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8739F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9439A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8739E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZ_OFFSET UNITYSDK_OFFSET(0x943960)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE3D_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873660)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0x943680)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8736E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943700)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873780)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943790)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873740)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEX_OFFSET UNITYSDK_OFFSET(0x943720)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873830)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943820)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8737F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEY_OFFSET UNITYSDK_OFFSET(0x9437B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873870)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943840)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8736B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x943690)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873630)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943660)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_USEUNSCALEDTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873AC0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_USEUNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x943AD0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_DURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873480)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x9434C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873A40)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943A70)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_LOOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8734A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x9434E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_MAXPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873B20)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0x943B30)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_PLAYONAWAKE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873B00)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x943B10)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SCALINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873AE0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0x943AF0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873A60)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x943A90)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873AA0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x943AC0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873A20)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x943A20)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873570)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943590)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873550)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0x943550)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873600)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943620)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8735E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x9435E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8738B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943890)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873920)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9438F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873990)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943950)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873A00)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9439B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873890)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATION_OFFSET UNITYSDK_OFFSET(0x943850)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8736F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943710)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8737A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9437A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873760)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEX_OFFSET UNITYSDK_OFFSET(0x943760)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873850)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943830)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873810)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEY_OFFSET UNITYSDK_OFFSET(0x9437F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8736D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x9436D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873640)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x943670)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873620)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEED_OFFSET UNITYSDK_OFFSET(0x943630)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STOPACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A873B40)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STOPACTION_OFFSET UNITYSDK_OFFSET(0x943B40)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_TICKFREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8734E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_TICKFREQUENCY_OFFSET UNITYSDK_OFFSET(0x943500)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x2C3980)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_MainModule_TypeDefinitionIndex = 23660;

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
