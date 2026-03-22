#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleObjectT_1; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCONSOLEVARIABLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1924C060)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapConsoleVariables_TypeDefinitionIndex = 28432;

	class NapConsoleVariables : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGIHighQualityShader()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x213A0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EnableForwardGBuffer()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x213A8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISkyDiffuseScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x213B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGIQualityPreset()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x213B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISkySpecularScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x213C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGILightMapBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x213C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIResolutionScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x213D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet_RTXGIRoughnessLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x213D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISplitSpecThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x213E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EnableRTXGI()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x213E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIAreaLightEnabled()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x213F0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet__RTXGIMultiBounceAlbedoLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x213F8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIRayBudget()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x21400);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet_RTXGILut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x21408);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIShadingTraceShadowOutCascade()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x21410);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIMultiBounceScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x21418);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x21420);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTX_GI_Debug_VisualizeMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x21428);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIMicroAO()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x21430);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EditorUIParticleOptOn()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x21438);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x21440);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIResponseSpeed()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x21448);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIUseVolumeCG()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x21450);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGIPVSubStepNum()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x21458);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCONSOLEVARIABLES__CCTOR_OFFSET))();
		}
	};
}
