#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PostProcess::MKGlow { class PipelineProperties_ShaderProperties_CBufferProperty; }
namespace PostProcess::MKGlow { class PipelineProperties_ShaderProperties_DefaultProperty; }

#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1965FDA0)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineProperties_ShaderProperties_TypeDefinitionIndex = 29143;

	class PipelineProperties_ShaderProperties : public ::System::Object
	{
	public:
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_blooming()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23A40);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23A48);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareGlobalIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23A50);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareScattering()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23A58);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareGhostParams()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23A60);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensSurfaceDiffractionTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23A68);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensSurfaceDirtTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23A70);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare1Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23A78);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23A80);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_bloomTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23A88);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareChromaticAberration()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23A90);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareOffset()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23A98);
		}
		static ::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>** StaticGet_packedGlareTex()
		{
			return (::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23AA0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare3Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23AA8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_singlePassStereoScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23AB0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare0TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23AB8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23AC0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare0Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23AC8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23AD0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_resolutionScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23AD8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_viewMatrix()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23AE0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_renderTargetSize()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23AE8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDirection23()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23AF0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lumaScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23AF8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_targetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B00);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_copyTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B08);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare3TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B10);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDiffractionIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B18);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare2Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B20);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomSpread()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B28);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B30);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareColorRamp()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B38);
		}
		static ::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>** StaticGet_packedGlareTargetTex()
		{
			return (::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B40);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_sourceTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B48);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDirtIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B50);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_bloomTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B58);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_screenSize()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B60);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDirection01()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B68);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare2TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B70);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareHaloParams()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B78);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareSpread()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B80);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B88);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDistanceFade()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B90);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_cArgBuffer()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23B98);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_higherMipBloomTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23BA0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareBlend()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23BA8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23BB0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDirtTexST()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23BB8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare1TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES__CCTOR_OFFSET))();
		}
	};
}
