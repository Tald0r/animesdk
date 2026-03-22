#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PostProcess::MKGlow { class PipelineProperties_ShaderProperties_CBufferProperty; }
namespace PostProcess::MKGlow { class PipelineProperties_ShaderProperties_DefaultProperty; }

#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1923AFC0)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineProperties_ShaderProperties_TypeDefinitionIndex = 28202;

	class PipelineProperties_ShaderProperties : public ::System::Object
	{
	public:
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareSpread()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F90);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareHaloParams()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F98);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDiffractionIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FA0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare2Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FA8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_bloomTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FB0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareBlend()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FB8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareGhostParams()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FC0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FC8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_copyTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FD0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare2TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FD8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare1TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FE0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_blooming()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FE8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_cArgBuffer()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FF0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareGlobalIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FF8);
		}
		static ::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>** StaticGet_packedGlareTex()
		{
			return (::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22000);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare3TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22008);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_bloomTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22010);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDirtIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22018);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareOffset()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22020);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22028);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare0Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22030);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDistanceFade()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22038);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDirection23()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22040);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareScattering()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22048);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lumaScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22050);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_viewMatrix()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22058);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_higherMipBloomTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22060);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22068);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare0TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22070);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22078);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomSpread()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22080);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_targetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22088);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_renderTargetSize()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22090);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDirection01()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22098);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_resolutionScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x220A0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_screenSize()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x220A8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x220B0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_singlePassStereoScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x220B8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_sourceTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x220C0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensSurfaceDiffractionTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x220C8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareChromaticAberration()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x220D0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x220D8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensSurfaceDirtTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x220E0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareColorRamp()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x220E8);
		}
		static ::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>** StaticGet_packedGlareTargetTex()
		{
			return (::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x220F0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDirtTexST()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x220F8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare3Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22100);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare1Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22108);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x22110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES__CCTOR_OFFSET))();
		}
	};
}
