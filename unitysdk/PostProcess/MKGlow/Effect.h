#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/ComputeShaderVariants_KeywordState.h"
#include "unitysdk/PostProcess/MKGlow/DebugView.h"
#include "unitysdk/PostProcess/MKGlow/Effect_Keyword.h"
#include "unitysdk/PostProcess/MKGlow/Effect_MaterialKeywords.h"
#include "unitysdk/PostProcess/MKGlow/RenderDimension.h"
#include "unitysdk/PostProcess/MKGlow/RenderPipeline.h"
#include "unitysdk/PostProcess/MKGlow/RenderTarget.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace PostProcess::MKGlow { class ComputeShaderVariants; }
namespace PostProcess::MKGlow { class ICameraData; }
namespace PostProcess::MKGlow { class ISettings; }
namespace PostProcess::MKGlow { class MKGlowResources; }
namespace PostProcess::MKGlow { class MipBuffer; }
namespace PostProcess::MKGlow { class PipelineProperties_ShaderProperties_CBufferProperty; }
namespace PostProcess::MKGlow { class PipelineProperties_ShaderProperties_DefaultProperty; }
namespace PostProcess::MKGlow { class RenderContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define POSTPROCESS_MKGLOW_EFFECT_AFTERCOMPOSITECLEANUP_OFFSET UNITYSDK_OFFSET(0x173EE0A0)
#define POSTPROCESS_MKGLOW_EFFECT_ANGLETODIRECTION_OFFSET UNITYSDK_OFFSET(0x173EC7B0)
#define POSTPROCESS_MKGLOW_EFFECT_ATTACHCARGBUFFERTOCOMPUTEKERNEL_OFFSET UNITYSDK_OFFSET(0x173ECB80)
#define POSTPROCESS_MKGLOW_EFFECT_BEGINPROFILESAMPLE_OFFSET UNITYSDK_OFFSET(0x173E48F0)
#define POSTPROCESS_MKGLOW_EFFECT_BUILD_OFFSET UNITYSDK_OFFSET(0x173E49B0)
#define POSTPROCESS_MKGLOW_EFFECT_CHECKFEATURESUPPORT_OFFSET UNITYSDK_OFFSET(0x173E4700)
#define POSTPROCESS_MKGLOW_EFFECT_COMPOSITE_OFFSET UNITYSDK_OFFSET(0x173EB940)
#define POSTPROCESS_MKGLOW_EFFECT_CONVERTGAMMAVALUE_1_OFFSET UNITYSDK_OFFSET(0x173EC4B0)
#define POSTPROCESS_MKGLOW_EFFECT_CONVERTGAMMAVALUE_OFFSET UNITYSDK_OFFSET(0x173EC2B0)
#define POSTPROCESS_MKGLOW_EFFECT_DISABLEDEBUGKEYWORDS_OFFSET UNITYSDK_OFFSET(0x173EDFF0)
#define POSTPROCESS_MKGLOW_EFFECT_DISABLERENDERKEYWORDS_OFFSET UNITYSDK_OFFSET(0x173ED6A0)
#define POSTPROCESS_MKGLOW_EFFECT_DISABLE_OFFSET UNITYSDK_OFFSET(0x173E2840)
#define POSTPROCESS_MKGLOW_EFFECT_DOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0x173E9E50)
#define POSTPROCESS_MKGLOW_EFFECT_DRAW_OFFSET UNITYSDK_OFFSET(0x173EDC40)
#define POSTPROCESS_MKGLOW_EFFECT_ENABLE_OFFSET UNITYSDK_OFFSET(0x173E2660)
#define POSTPROCESS_MKGLOW_EFFECT_ENDPROFILESAMPLE_OFFSET UNITYSDK_OFFSET(0x173E4950)
#define POSTPROCESS_MKGLOW_EFFECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x173E2830)
#define POSTPROCESS_MKGLOW_EFFECT_GET_CURRENTRENDERINDEX_OFFSET UNITYSDK_OFFSET(0x173E18B0)
#define POSTPROCESS_MKGLOW_EFFECT_GET_RENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x173E18C0)
#define POSTPROCESS_MKGLOW_EFFECT_GET_SELECTIVEGLOWCAMERAOBJECT_OFFSET UNITYSDK_OFFSET(0x173E4230)
#define POSTPROCESS_MKGLOW_EFFECT_GET_SELECTIVEGLOWCAMERA_OFFSET UNITYSDK_OFFSET(0x173E43C0)
#define POSTPROCESS_MKGLOW_EFFECT_GET_SOURCEFRAMEBUFFER_OFFSET UNITYSDK_OFFSET(0x173E1790)
#define POSTPROCESS_MKGLOW_EFFECT_PREPAREDRAW_1_OFFSET UNITYSDK_OFFSET(0x173ED750)
#define POSTPROCESS_MKGLOW_EFFECT_PREPAREDRAW_OFFSET UNITYSDK_OFFSET(0x173ED2C0)
#define POSTPROCESS_MKGLOW_EFFECT_PREPARESCATTERING_OFFSET UNITYSDK_OFFSET(0x173E28F0)
#define POSTPROCESS_MKGLOW_EFFECT_PRESAMPLE_OFFSET UNITYSDK_OFFSET(0x173E9590)
#define POSTPROCESS_MKGLOW_EFFECT_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x173EC060)
#define POSTPROCESS_MKGLOW_EFFECT_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x173EC840)
#define POSTPROCESS_MKGLOW_EFFECT_SETRENDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x173ED510)
#define POSTPROCESS_MKGLOW_EFFECT_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x173ECFF0)
#define POSTPROCESS_MKGLOW_EFFECT_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x173ECD50)
#define POSTPROCESS_MKGLOW_EFFECT_SETUPSELECTIVEGLOWCAMERA_OFFSET UNITYSDK_OFFSET(0x173E4540)
#define POSTPROCESS_MKGLOW_EFFECT_SETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x173EC350)
#define POSTPROCESS_MKGLOW_EFFECT_SETVECTOR_2_OFFSET UNITYSDK_OFFSET(0x173EBF50)
#define POSTPROCESS_MKGLOW_EFFECT_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x173EC140)
#define POSTPROCESS_MKGLOW_EFFECT_UPDATECOMPUTESHADERTHREADGROUPS_OFFSET UNITYSDK_OFFSET(0x173EC9A0)
#define POSTPROCESS_MKGLOW_EFFECT_UPDATECONSTANTBUFFERS_OFFSET UNITYSDK_OFFSET(0x173E5420)
#define POSTPROCESS_MKGLOW_EFFECT_UPDATERENDERBUFFERS_OFFSET UNITYSDK_OFFSET(0x173E2A00)
#define POSTPROCESS_MKGLOW_EFFECT_UPDATERENDERINDEX_1_OFFSET UNITYSDK_OFFSET(0x173ECAF0)
#define POSTPROCESS_MKGLOW_EFFECT_UPDATERENDERINDEX_OFFSET UNITYSDK_OFFSET(0x173ECAA0)
#define POSTPROCESS_MKGLOW_EFFECT_UPSAMPLE_OFFSET UNITYSDK_OFFSET(0x173EAB70)
#define POSTPROCESS_MKGLOW_EFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x173EE200)
#define POSTPROCESS_MKGLOW_EFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x173E18D0)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Effect_TypeDefinitionIndex = 29132;

	class Effect : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__selectiveReplacementTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Effect_TypeDefinitionIndex)->GetStaticField(0x23FC0);
		}
		static ::System::String** StaticGet__selectiveGlowCameraObjectName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Effect_TypeDefinitionIndex)->GetStaticField(0x23FC8);
		}
		static ::PostProcess::MKGlow::MKGlowResources** StaticGet__resources()
		{
			return (::PostProcess::MKGlow::MKGlowResources**)Il2CppClass::FromTypeDefinitionIndex(Effect_TypeDefinitionIndex)->GetStaticField(0x23FD0);
		}
		static ::System::Single* StaticGet_naturalIntensityMult()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Effect_TypeDefinitionIndex)->GetStaticField(0x7860);
		}
		static ::UnityEngine::Vector2* StaticGet__referenceResolution()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Effect_TypeDefinitionIndex)->GetStaticField(0x7864);
		}
		static ::UnityEngine::Vector2* StaticGet__selectiveWorkflowThreshold()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Effect_TypeDefinitionIndex)->GetStaticField(0x786C);
		}
		static ::System::Int32* StaticGet__cArgBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_TypeDefinitionIndex)->GetStaticField(0x7874);
		}
		static ::System::Int32* StaticGet__glareIterationsBase()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_TypeDefinitionIndex)->GetStaticField(0x7878);
		}
		static ::PostProcess::MKGlow::RenderDimension* StaticGet__directComputeSize()
		{
			return (::PostProcess::MKGlow::RenderDimension*)Il2CppClass::FromTypeDefinitionIndex(Effect_TypeDefinitionIndex)->GetStaticField(0x787C);
		}
		static ::System::Single* StaticGet__referenceAspectRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Effect_TypeDefinitionIndex)->GetStaticField(0x7884);
		}
		::Il2CppArray<::PostProcess::MKGlow::MipBuffer*>* packedGlareDownsampleBuffers; // 0x10
		::UnityEngine::Rendering::CommandBuffer* _commandBuffer; // 0x18
		::PostProcess::MKGlow::MipBuffer* _glareDownsampleBuffer2; // 0x20
		::PostProcess::MKGlow::MipBuffer* _glareDownsampleBuffer0; // 0x28
		::UnityEngine::Camera* _selectiveGlowCamera; // 0x30
		::PostProcess::MKGlow::MipBuffer* _glareUpsampleBuffer0; // 0x38
		::UnityEngine::GameObject* _selectiveGlowCameraObject; // 0x40
		::Il2CppArray<::UnityEngine::Vector2>* glareAngles; // 0x48
		::PostProcess::MKGlow::RenderTarget _selectiveRenderTarget; // 0x50
		::PostProcess::MKGlow::ISettings* _settings; // 0x88
		::Il2CppArray<::PostProcess::MKGlow::RenderContext*>* _sourceContext; // 0x90
		::PostProcess::MKGlow::MipBuffer* _glareUpsampleBuffer1; // 0x98
		::UnityEngine::ComputeBuffer* _cArgsComputeBuffer; // 0xA0
		::PostProcess::MKGlow::RenderContext* _selectiveRenderContext; // 0xA8
		::PostProcess::MKGlow::MipBuffer* _glareUpsampleBuffer3; // 0xB0
		::PostProcess::MKGlow::MipBuffer* _bloomDownsampleBuffer; // 0xB8
		::Il2CppArray<::PostProcess::MKGlow::Effect_Keyword>* _shaderKeywords; // 0xC0
		::PostProcess::MKGlow::MipBuffer* _glareDownsampleBuffer3; // 0xC8
		::Il2CppArray<::System::Single>* _cArgArray; // 0xD0
		::System::Collections::Generic::List_1<::PostProcess::MKGlow::RenderTarget>* _renderTargetsBundle; // 0xD8
		::PostProcess::MKGlow::MipBuffer* _glareUpsampleBuffer2; // 0xE0
		::UnityEngine::Material* _renderMaterialGeometry; // 0xE8
		::UnityEngine::Material* _renderMaterialNoGeometry; // 0xF0
		::System::Collections::Generic::List_1<::PostProcess::MKGlow::Effect_MaterialKeywords>* _renderKeywordsBundle; // 0xF8
		::PostProcess::MKGlow::ICameraData* _cameraData; // 0x100
		::PostProcess::MKGlow::MipBuffer* _lensFlareDownsampleBuffer; // 0x108
		::PostProcess::MKGlow::RenderTarget _destinationFrameBuffer; // 0x110
		::PostProcess::MKGlow::RenderTarget _sourceFrameBuffer; // 0x148
		::UnityEngine::Camera* _renderingCamera; // 0x180
		::Il2CppArray<::PostProcess::MKGlow::MipBuffer*>* packedGlareupsampleBuffers; // 0x188
		::PostProcess::MKGlow::MipBuffer* _lensFlareUpsampleBuffer; // 0x190
		::PostProcess::MKGlow::MipBuffer* _bloomUpsampleBuffer; // 0x198
		::Il2CppArray<::PostProcess::MKGlow::RenderContext*>* _renderContext; // 0x1A0
		::PostProcess::MKGlow::MipBuffer* _glareDownsampleBuffer1; // 0x1A8
		::System::Int32 _lensFlareIterations; // 0x1B0
		::System::Boolean _useGlare; // 0x1B4
		::System::Boolean _useLensSurface; // 0x1B5
		::System::Boolean _useGeometryShaders; // 0x1B6
		::System::Boolean _useComputeShaders; // 0x1B7
		::System::Int32 _currentRenderIndex; // 0x1B8
		::PostProcess::MKGlow::DebugView _debugView; // 0x1BC
		::UnityEngine::RenderTextureFormat _renderTextureFormat; // 0x1C0
		::System::Single bloomUpsampleSpread; // 0x1C4
		::System::Single _lensFlareUpsampleSpread; // 0x1C8
		::System::Boolean _useLensFlare; // 0x1CC
		::System::Boolean _finalBlit; // 0x1CD
		::System::Single _glareScatteringMult; // 0x1D0
		::System::Int32 _glareIterations; // 0x1D4
		::PostProcess::MKGlow::RenderDimension _computeThreadGroups; // 0x1D8
		::System::Int32 _bloomIterations; // 0x1E0
		::UnityEngine::Vector2 _resolutionScale; // 0x1E4
		::System::Int32 _minIterations; // 0x1EC
		::PostProcess::MKGlow::ComputeShaderVariants_KeywordState computeShaderFeatures; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT__CCTOR_OFFSET))();
		}

		::PostProcess::MKGlow::RenderTarget get_sourceFrameBuffer()
		{
			return ((::PostProcess::MKGlow::RenderTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_GET_SOURCEFRAMEBUFFER_OFFSET))(this);
		}

		::System::Int32 get_currentRenderIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_GET_CURRENTRENDERINDEX_OFFSET))(this);
		}

		::UnityEngine::RenderTextureFormat get_renderTextureFormat()
		{
			return ((::UnityEngine::RenderTextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_GET_RENDERTEXTUREFORMAT_OFFSET))(this);
		}

		::System::Boolean Enable(::PostProcess::MKGlow::RenderPipeline renderPipeline, ::PostProcess::MKGlow::ISettings* mkGlowVolumeComponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::PostProcess::MKGlow::RenderPipeline, ::PostProcess::MKGlow::ISettings*))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_ENABLE_OFFSET))(this, renderPipeline, mkGlowVolumeComponent);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_FINALIZE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_DISABLE_OFFSET))(this);
		}

		::System::Void PrepareScattering(::System::Single Scattering, ::System::Single scale, ::System::Int32& iterations, ::System::Single& spread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_PREPARESCATTERING_OFFSET))(this, Scattering, scale, iterations, spread);
		}

		::System::Void UpdateRenderBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_UPDATERENDERBUFFERS_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_selectiveGlowCameraObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_GET_SELECTIVEGLOWCAMERAOBJECT_OFFSET))(this);
		}

		::UnityEngine::Camera* get_selectiveGlowCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_GET_SELECTIVEGLOWCAMERA_OFFSET))(this);
		}

		::System::Void SetupSelectiveGlowCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_SETUPSELECTIVEGLOWCAMERA_OFFSET))(this);
		}

		::System::Void CheckFeatureSupport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_CHECKFEATURESUPPORT_OFFSET))(this);
		}

		::System::Void BeginProfileSample(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_BEGINPROFILESAMPLE_OFFSET))(this, text);
		}

		::System::Void EndProfileSample(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_ENDPROFILESAMPLE_OFFSET))(this, text);
		}

		::System::Void Build(::PostProcess::MKGlow::RenderTarget source, ::PostProcess::MKGlow::RenderTarget destination, ::PostProcess::MKGlow::ISettings* settings, ::UnityEngine::Rendering::CommandBuffer* cmd, ::PostProcess::MKGlow::ICameraData* cameraData, ::UnityEngine::Camera* renderingCamera, ::System::Boolean finalBlit)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::RenderTarget, ::PostProcess::MKGlow::RenderTarget, ::PostProcess::MKGlow::ISettings*, ::UnityEngine::Rendering::CommandBuffer*, ::PostProcess::MKGlow::ICameraData*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_BUILD_OFFSET))(this, source, destination, settings, cmd, cameraData, renderingCamera, finalBlit);
		}

		::System::Void UpdateConstantBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_UPDATECONSTANTBUFFERS_OFFSET))(this);
		}

		::System::Void SetKeyword(::PostProcess::MKGlow::Effect_MaterialKeywords keyword, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::Effect_MaterialKeywords, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_SETKEYWORD_OFFSET))(this, keyword, enable);
		}

		::UnityEngine::Vector2 AngleToDirection(::System::Single angleDegree)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_ANGLETODIRECTION_OFFSET))(this, angleDegree);
		}

		::System::Single ConvertGammaValue(::System::Single gammaSpacedValue)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_CONVERTGAMMAVALUE_OFFSET))(this, gammaSpacedValue);
		}

		::UnityEngine::Vector4 ConvertGammaValue_1(::UnityEngine::Vector4 gammaSpacedVector)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_CONVERTGAMMAVALUE_1_OFFSET))(this, gammaSpacedVector);
		}

		::System::Void UpdateComputeShaderThreadGroups(::PostProcess::MKGlow::RenderDimension renderDimension)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::RenderDimension))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_UPDATECOMPUTESHADERTHREADGROUPS_OFFSET))(this, renderDimension);
		}

		::System::Void UpdateRenderIndex(::System::Int32 v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_UPDATERENDERINDEX_OFFSET))(this, v);
		}

		::System::Void UpdateRenderIndex_1(::PostProcess::MKGlow::ComputeShaderVariants* variants, ::PostProcess::MKGlow::ComputeShaderVariants_KeywordState features)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::ComputeShaderVariants*, ::PostProcess::MKGlow::ComputeShaderVariants_KeywordState))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_UPDATERENDERINDEX_1_OFFSET))(this, variants, features);
		}

		::System::Void AttachCArgBufferToComputeKernel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_ATTACHCARGBUFFERTOCOMPUTEKERNEL_OFFSET))(this);
		}

		::System::Void SetFloat(::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty* property, ::System::Single value, ::System::Boolean forcePixelShader)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_SETFLOAT_OFFSET))(this, property, value, forcePixelShader);
		}

		::System::Void SetVector(::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty* property, ::UnityEngine::Vector4 value, ::System::Boolean forcePixelShader)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty*, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_SETVECTOR_OFFSET))(this, property, value, forcePixelShader);
		}

		::System::Void SetVector_1(::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty* property, ::UnityEngine::Vector3 value, ::System::Boolean forcePixelShader)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_SETVECTOR_1_OFFSET))(this, property, value, forcePixelShader);
		}

		::System::Void SetVector_2(::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty* property, ::UnityEngine::Vector2 value, ::System::Boolean forcePixelShader)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty*, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_SETVECTOR_2_OFFSET))(this, property, value, forcePixelShader);
		}

		::System::Void SetTexture(::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty* property, ::PostProcess::MKGlow::RenderTarget rt, ::System::Boolean forcePixelShader)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*, ::PostProcess::MKGlow::RenderTarget, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_SETTEXTURE_OFFSET))(this, property, rt, forcePixelShader);
		}

		::System::Void SetTexture_1(::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty* property, ::UnityEngine::Texture* tex, ::System::Boolean forcePixelShader)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_SETTEXTURE_1_OFFSET))(this, property, tex, forcePixelShader);
		}

		::System::Void PrepareDraw(::System::Int32 variant, ::PostProcess::MKGlow::RenderDimension renderDimension, ::System::Boolean forcePixelShader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PostProcess::MKGlow::RenderDimension, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_PREPAREDRAW_OFFSET))(this, variant, renderDimension, forcePixelShader);
		}

		::System::Void PrepareDraw_1(::System::Int32 materialPass, ::PostProcess::MKGlow::ComputeShaderVariants* variants, ::System::Boolean enableBloom, ::System::Boolean enableLensflare, ::System::Boolean enableGlare, ::PostProcess::MKGlow::RenderDimension renderDimension)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PostProcess::MKGlow::ComputeShaderVariants*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PostProcess::MKGlow::RenderDimension))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_PREPAREDRAW_1_OFFSET))(this, materialPass, variants, enableBloom, enableLensflare, enableGlare, renderDimension);
		}

		::System::Void Draw(::PostProcess::MKGlow::RenderDimension dimension, ::System::Boolean forcePixelShader)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::RenderDimension, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_DRAW_OFFSET))(this, dimension, forcePixelShader);
		}

		::System::Void DisableRenderKeywords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_DISABLERENDERKEYWORDS_OFFSET))(this);
		}

		::System::Void DisableDebugKeywords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_DISABLEDEBUGKEYWORDS_OFFSET))(this);
		}

		::System::Void SetRenderPriority()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_SETRENDERPRIORITY_OFFSET))(this);
		}

		::System::Void PreSample()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_PRESAMPLE_OFFSET))(this);
		}

		::System::Void Downsample()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_DOWNSAMPLE_OFFSET))(this);
		}

		::System::Void Upsample()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_UPSAMPLE_OFFSET))(this);
		}

		::System::Void Composite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_COMPOSITE_OFFSET))(this);
		}

		::System::Void AfterCompositeCleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_AFTERCOMPOSITECLEANUP_OFFSET))(this);
		}
	};
}
