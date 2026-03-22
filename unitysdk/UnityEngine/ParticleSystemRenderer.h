#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ParticleSystemRenderMode.h"
#include "unitysdk/UnityEngine/ParticleSystemRenderSpace.h"
#include "unitysdk/UnityEngine/ParticleSystemSortMode.h"
#include "unitysdk/UnityEngine/ParticleSystemVertexStream.h"
#include "unitysdk/UnityEngine/ParticleSystemVertexStreams.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/SpriteMaskInteraction.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_PARTICLESYSTEMRENDERER_AREVERTEXSTREAMSENABLED_OFFSET UNITYSDK_OFFSET(0x1A874BC0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_BAKEMESH_1_OFFSET UNITYSDK_OFFSET(0x1A8752E0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0x1A8752A0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_BAKETRAILSMESH_1_OFFSET UNITYSDK_OFFSET(0x1A875330)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_BAKETRAILSMESH_OFFSET UNITYSDK_OFFSET(0x1A8752F0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_DISABLEVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1A874BB0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_ENABLEVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1A874470)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GETACTIVEVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1A874E30)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GETENABLEDVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1A874E10)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GETMESHES_OFFSET UNITYSDK_OFFSET(0x1A875240)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ACTIVEVERTEXSTREAMSCOUNT_OFFSET UNITYSDK_OFFSET(0x1A874E20)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A874E50)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALLOWROLL_OFFSET UNITYSDK_OFFSET(0x1A875180)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALPHATHRESHOLDPARTICLES_OFFSET UNITYSDK_OFFSET(0x1A8751A0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_CAMERAVELOCITYSCALE_OFFSET UNITYSDK_OFFSET(0x1A874F50)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLEGPUINSTANCING_OFFSET UNITYSDK_OFFSET(0x1A875160)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_FLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A8750E0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_FLIP_OFFSET UNITYSDK_OFFSET(0x1A875090)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_LENGTHSCALE_OFFSET UNITYSDK_OFFSET(0x1A874F10)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0x1A8751E0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0x1A875110)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MAXPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x1A874FF0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1A875290)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1A875200)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MINPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x1A874FD0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_NORMALDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A874F70)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_OCTAGONEXPAND_OFFSET UNITYSDK_OFFSET(0x1A874EB0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_OCTAGONMESH_OFFSET UNITYSDK_OFFSET(0x1A875220)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ORDERTYPE_OFFSET UNITYSDK_OFFSET(0x1A8751C0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A875060)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1A875010)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1A874E70)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1A874F90)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SKIPAUTOSCALINGOPT_OFFSET UNITYSDK_OFFSET(0x1A874ED0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1A874FB0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SORTMODE_OFFSET UNITYSDK_OFFSET(0x1A874EF0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_TRAILMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A875130)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_USEOCTAGONSHAPE_OFFSET UNITYSDK_OFFSET(0x1A874E90)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_VELOCITYSCALE_OFFSET UNITYSDK_OFFSET(0x1A874F30)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_INTERNAL_GETENABLEDVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1A874BE0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_INTERNAL_SETVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1A874480)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETACTIVEVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1A874E40)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETMESHES_1_OFFSET UNITYSDK_OFFSET(0x1A875260)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETMESHES_OFFSET UNITYSDK_OFFSET(0x1A875250)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A874E60)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALLOWROLL_OFFSET UNITYSDK_OFFSET(0x1A875190)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALPHATHRESHOLDPARTICLES_OFFSET UNITYSDK_OFFSET(0x1A8751B0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_CAMERAVELOCITYSCALE_OFFSET UNITYSDK_OFFSET(0x1A874F60)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLEGPUINSTANCING_OFFSET UNITYSDK_OFFSET(0x1A875170)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_FLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A875100)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_FLIP_OFFSET UNITYSDK_OFFSET(0x1A8750F0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_LENGTHSCALE_OFFSET UNITYSDK_OFFSET(0x1A874F20)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0x1A8751F0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0x1A875120)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MAXPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x1A875000)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MESH_OFFSET UNITYSDK_OFFSET(0x1A875210)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MINPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x1A874FE0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_NORMALDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A874F80)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_OCTAGONEXPAND_OFFSET UNITYSDK_OFFSET(0x1A874EC0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_OCTAGONMESH_OFFSET UNITYSDK_OFFSET(0x1A875230)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_OLDTRAILMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A875150)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ORDERTYPE_OFFSET UNITYSDK_OFFSET(0x1A8751D0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A875080)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1A875070)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1A874E80)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1A874FA0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SKIPAUTOSCALINGOPT_OFFSET UNITYSDK_OFFSET(0x1A874EE0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1A874FC0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SORTMODE_OFFSET UNITYSDK_OFFSET(0x1A874F00)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_TRAILMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A875140)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_USEOCTAGONSHAPE_OFFSET UNITYSDK_OFFSET(0x1A874EA0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_VELOCITYSCALE_OFFSET UNITYSDK_OFFSET(0x1A874F40)
#define UNITYENGINE_PARTICLESYSTEMRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A875340)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemRenderer_TypeDefinitionIndex = 23715;

	class ParticleSystemRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void EnableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_ENABLEVERTEXSTREAMS_OFFSET))(this, streams);
		}

		::System::Void DisableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_DISABLEVERTEXSTREAMS_OFFSET))(this, streams);
		}

		::System::Boolean AreVertexStreamsEnabled(::UnityEngine::ParticleSystemVertexStreams streams)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_AREVERTEXSTREAMSENABLED_OFFSET))(this, streams);
		}

		::UnityEngine::ParticleSystemVertexStreams GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams)
		{
			return ((::UnityEngine::ParticleSystemVertexStreams(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GETENABLEDVERTEXSTREAMS_OFFSET))(this, streams);
		}

		::System::Void Internal_SetVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_INTERNAL_SETVERTEXSTREAMS_OFFSET))(this, streams, enabled);
		}

		::UnityEngine::ParticleSystemVertexStreams Internal_GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams)
		{
			return ((::UnityEngine::ParticleSystemVertexStreams(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_INTERNAL_GETENABLEDVERTEXSTREAMS_OFFSET))(this, streams);
		}

		::UnityEngine::ParticleSystemRenderSpace get_alignment()
		{
			return ((::UnityEngine::ParticleSystemRenderSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::ParticleSystemRenderSpace value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALIGNMENT_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemRenderMode get_renderMode()
		{
			return ((::UnityEngine::ParticleSystemRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::ParticleSystemRenderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_RENDERMODE_OFFSET))(this, value);
		}

		::System::Boolean get_useOctagonShape()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_USEOCTAGONSHAPE_OFFSET))(this);
		}

		::System::Void set_useOctagonShape(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_USEOCTAGONSHAPE_OFFSET))(this, value);
		}

		::System::Single get_octagonExpand()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_OCTAGONEXPAND_OFFSET))(this);
		}

		::System::Void set_octagonExpand(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_OCTAGONEXPAND_OFFSET))(this, value);
		}

		::System::Boolean get_skipAutoScalingOpt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SKIPAUTOSCALINGOPT_OFFSET))(this);
		}

		::System::Void set_skipAutoScalingOpt(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SKIPAUTOSCALINGOPT_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemSortMode get_sortMode()
		{
			return ((::UnityEngine::ParticleSystemSortMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SORTMODE_OFFSET))(this);
		}

		::System::Void set_sortMode(::UnityEngine::ParticleSystemSortMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSortMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SORTMODE_OFFSET))(this, value);
		}

		::System::Single get_lengthScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_LENGTHSCALE_OFFSET))(this);
		}

		::System::Void set_lengthScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_LENGTHSCALE_OFFSET))(this, value);
		}

		::System::Single get_velocityScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_VELOCITYSCALE_OFFSET))(this);
		}

		::System::Void set_velocityScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_VELOCITYSCALE_OFFSET))(this, value);
		}

		::System::Single get_cameraVelocityScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_CAMERAVELOCITYSCALE_OFFSET))(this);
		}

		::System::Void set_cameraVelocityScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_CAMERAVELOCITYSCALE_OFFSET))(this, value);
		}

		::System::Single get_normalDirection()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_NORMALDIRECTION_OFFSET))(this);
		}

		::System::Void set_normalDirection(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_NORMALDIRECTION_OFFSET))(this, value);
		}

		::System::Single get_shadowBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SHADOWBIAS_OFFSET))(this);
		}

		::System::Void set_shadowBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SHADOWBIAS_OFFSET))(this, value);
		}

		::System::Single get_sortingFudge()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SORTINGFUDGE_OFFSET))(this);
		}

		::System::Void set_sortingFudge(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SORTINGFUDGE_OFFSET))(this, value);
		}

		::System::Single get_minParticleSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MINPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_minParticleSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MINPARTICLESIZE_OFFSET))(this, value);
		}

		::System::Single get_maxParticleSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MAXPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_maxParticleSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MAXPARTICLESIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_pivot()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PIVOT_OFFSET))(this);
		}

		::System::Void set_pivot(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PIVOT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_flip()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_FLIP_OFFSET))(this);
		}

		::System::Void set_flip(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_FLIP_OFFSET))(this, value);
		}

		::UnityEngine::SpriteMaskInteraction get_maskInteraction()
		{
			return ((::UnityEngine::SpriteMaskInteraction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MASKINTERACTION_OFFSET))(this);
		}

		::System::Void set_maskInteraction(::UnityEngine::SpriteMaskInteraction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteMaskInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MASKINTERACTION_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_trailMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_TRAILMATERIAL_OFFSET))(this);
		}

		::System::Void set_trailMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_TRAILMATERIAL_OFFSET))(this, value);
		}

		::System::Void set_oldTrailMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_OLDTRAILMATERIAL_OFFSET))(this, value);
		}

		::System::Boolean get_enableGPUInstancing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLEGPUINSTANCING_OFFSET))(this);
		}

		::System::Void set_enableGPUInstancing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLEGPUINSTANCING_OFFSET))(this, value);
		}

		::System::Boolean get_allowRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALLOWROLL_OFFSET))(this);
		}

		::System::Void set_allowRoll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALLOWROLL_OFFSET))(this, value);
		}

		::System::Int32 get_alphaThresholdParticles()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALPHATHRESHOLDPARTICLES_OFFSET))(this);
		}

		::System::Void set_alphaThresholdParticles(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALPHATHRESHOLDPARTICLES_OFFSET))(this, value);
		}

		::System::Int32 get_orderType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ORDERTYPE_OFFSET))(this);
		}

		::System::Void set_orderType(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ORDERTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_lodLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_LODLEVEL_OFFSET))(this);
		}

		::System::Void set_lodLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_LODLEVEL_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MESH_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_octagonMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_OCTAGONMESH_OFFSET))(this);
		}

		::System::Void set_octagonMesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_OCTAGONMESH_OFFSET))(this, value);
		}

		::System::Int32 GetMeshes(::Il2CppArray<::UnityEngine::Mesh*>* meshes)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GETMESHES_OFFSET))(this, meshes);
		}

		::System::Void SetMeshes(::Il2CppArray<::UnityEngine::Mesh*>* meshes, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Mesh*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETMESHES_OFFSET))(this, meshes, size);
		}

		::System::Void SetMeshes_1(::Il2CppArray<::UnityEngine::Mesh*>* meshes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETMESHES_1_OFFSET))(this, meshes);
		}

		::System::Int32 get_meshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MESHCOUNT_OFFSET))(this);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* mesh, ::System::Boolean useTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_BAKEMESH_OFFSET))(this, mesh, useTransform);
		}

		::System::Void BakeMesh_1(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::System::Boolean useTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_BAKEMESH_1_OFFSET))(this, mesh, camera, useTransform);
		}

		::System::Void BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::System::Boolean useTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_BAKETRAILSMESH_OFFSET))(this, mesh, useTransform);
		}

		::System::Void BakeTrailsMesh_1(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::System::Boolean useTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_BAKETRAILSMESH_1_OFFSET))(this, mesh, camera, useTransform);
		}

		::System::Int32 get_activeVertexStreamsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ACTIVEVERTEXSTREAMSCOUNT_OFFSET))(this);
		}

		::System::Void SetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETACTIVEVERTEXSTREAMS_OFFSET))(this, streams);
		}

		::System::Void GetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GETACTIVEVERTEXSTREAMS_OFFSET))(this, streams);
		}

		::System::Void get_pivot_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PIVOT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_pivot_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PIVOT_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_flip_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_FLIP_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_flip_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_FLIP_INJECTED_OFFSET))(this, value);
		}
	};
}
