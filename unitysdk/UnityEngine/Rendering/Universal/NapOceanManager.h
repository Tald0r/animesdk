#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
#include "unitysdk/UnityEngine/Vector3.h"

class WeatherConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class OceanFloatObject; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_READBACK_OFFSET UNITYSDK_OFFSET(0x1924EA10)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_SETOCEANPARAMS_OFFSET UNITYSDK_OFFSET(0x1924C650)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_UPDATEOCEANFLOATOBJS_OFFSET UNITYSDK_OFFSET(0x1924EAE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x192507D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapOceanManager_TypeDefinitionIndex = 28468;

	class NapOceanManager : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_normals()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x214B0);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_outNormals()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x214B8);
		}
		static ::UnityEngine::Material** StaticGet_OceanMaterialFar()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x214C0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OceanFloatObject*>** StaticGet_OceanFloatObjs()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OceanFloatObject*>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x214C8);
		}
		static ::UnityEngine::Texture2D** StaticGet_CoastlineMap()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x214D0);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Lod0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x214D8);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_offsetBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x214E0);
		}
		static ::UnityEngine::Texture3D** StaticGet_defaultTexture3D()
		{
			return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x214E8);
		}
		static ::UnityEngine::Material** StaticGet_OceanMaterialNear()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x214F0);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Lod1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x214F8);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_outOffsets()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21500);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_normalBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21508);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_inputPosBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21510);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_inputPos()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21518);
		}
		static ::UnityEngine::Material** StaticGet_OceanMaterialNormal()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21520);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Far_Lod1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21528);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Far_Lod0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21530);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_offsets()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21538);
		}
		static ::Il2CppArray<::UnityEngine::Quaternion>** StaticGet_inputRot()
		{
			return (::Il2CppArray<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21540);
		}
		static ::System::Int32* StaticGet__CoastlineGroundMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F40);
		}
		static ::System::Int32* StaticGet__OceanExtraVelocity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F44);
		}
		static ::System::Int32* StaticGet__CoastlineFoamMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F48);
		}
		static ::System::Int32* StaticGet__CoastlineParam3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F4C);
		}
		static ::System::Int32* StaticGet__CoastlineParam5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F50);
		}
		static ::System::Single* StaticGet_OceanFrustumCullingFOVBias()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F54);
		}
		static ::System::Single* StaticGet_OceanMeshCullThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F58);
		}
		static ::System::Int32* StaticGet__OceanDetailNormalMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F5C);
		}
		static ::System::Int32* StaticGet__CoastlineCausticsMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F60);
		}
		static ::System::Int32* StaticGet__CoastlineSmoothNoiseMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F64);
		}
		static ::System::Int32* StaticGet__OceanReflectionCube()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F68);
		}
		static ::System::Int32* StaticGet__CoastlineParam8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F6C);
		}
		static ::System::Int32* StaticGet__InputPositions()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F70);
		}
		static ::System::Int32* StaticGet__OceanFoamNoiseTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F74);
		}
		static ::System::Int32* StaticGet_lastDisableOceanFrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F78);
		}
		static ::System::Int32* StaticGet__OceanParamsB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F7C);
		}
		static ::System::Int32* StaticGet__CoastlineParam7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F80);
		}
		static ::System::Int32* StaticGet__OceanDeepColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F84);
		}
		static ::UnityEngine::Vector3* StaticGet_OceanCenter()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F88);
		}
		static ::System::Int32* StaticGet__OceanParamsA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F94);
		}
		static ::System::Int32* StaticGet__Normals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F98);
		}
		static ::System::Int32* StaticGet__CoastlineWaveProfileMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5F9C);
		}
		static ::System::Int32* StaticGet__CoastlineParam4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FA0);
		}
		static ::System::Int32* StaticGet__CoastlineFoamColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FA4);
		}
		static ::System::Int32* StaticGet__CoastlineParam10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FA8);
		}
		static ::System::Int32* StaticGet__OceanScatteringColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FAC);
		}
		static ::System::Int32* StaticGet__OceanDisplacementMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FB0);
		}
		static ::System::Int32* StaticGet__CoastlineParam0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FB4);
		}
		static ::System::Int32* StaticGet__OceanDisplacementNormalMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FB8);
		}
		static ::System::Int32* StaticGet__CoastlineParam6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FBC);
		}
		static ::System::Int32* StaticGet__OceanShallowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FC0);
		}
		static ::System::Single* StaticGet_OceanDepthOffset()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FC4);
		}
		static ::System::Int32* StaticGet__CoastlineParam9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FC8);
		}
		static ::System::Boolean* StaticGet_EnableCoastlineWave()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FCC);
		}
		static ::System::Boolean* StaticGet_EnableOcean()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FCD);
		}
		static ::System::Int32* StaticGet__CoastlineParam2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FD0);
		}
		static ::System::Int32* StaticGet__CoastlineParam1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FD4);
		}
		static ::System::Int32* StaticGet__Offsets()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FD8);
		}
		static ::System::Int32* StaticGet__CoastlineMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5FDC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void SetOceanParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::WeatherConfig* weatherConfig, ::System::Boolean hasWeatherWetness)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::WeatherConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_SETOCEANPARAMS_OFFSET))(cmd, weatherConfig, hasWeatherWetness);
		}

		static ::System::Void ReadBack(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_READBACK_OFFSET))(request);
		}

		static ::System::Void UpdateOceanFloatObjs(::UnityEngine::ComputeShader* getOceanDataCS, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeShader*, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_UPDATEOCEANFLOATOBJS_OFFSET))(getOceanDataCS, cmd);
		}
	};
}
