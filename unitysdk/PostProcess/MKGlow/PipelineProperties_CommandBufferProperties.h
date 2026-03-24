#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_COMMANDBUFFERPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x189D6330)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineProperties_CommandBufferProperties_TypeDefinitionIndex = 29146;

	class PipelineProperties_CommandBufferProperties : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_glareDownsampleBuffer3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x22FE0);
		}
		static ::System::String** StaticGet_sampleCopySource()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x22FE8);
		}
		static ::System::String** StaticGet_sampleCreateBuffers()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x22FF0);
		}
		static ::System::String** StaticGet_sampleDownsample()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x22FF8);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23000);
		}
		static ::System::String** StaticGet_sourceBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23008);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23010);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23018);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23020);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23028);
		}
		static ::System::String** StaticGet_bloomUpsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23030);
		}
		static ::System::String** StaticGet_samplePrepare()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23038);
		}
		static ::System::String** StaticGet_samplePreSample()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23040);
		}
		static ::System::String** StaticGet_lensFlareDownsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23048);
		}
		static ::System::String** StaticGet_sampleSetup()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23050);
		}
		static ::System::String** StaticGet_sampleUpsample()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23058);
		}
		static ::System::String** StaticGet_lensFlareUpsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23060);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23068);
		}
		static ::System::String** StaticGet_sampleReplacement()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23070);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23078);
		}
		static ::System::String** StaticGet_sampleComposite()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23080);
		}
		static ::System::String** StaticGet_sampleClearBuffers()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23088);
		}
		static ::System::String** StaticGet_commandBufferName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23090);
		}
		static ::System::String** StaticGet_selectiveRenderBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23098);
		}
		static ::System::String** StaticGet_bloomDownsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x230A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_COMMANDBUFFERPROPERTIES__CCTOR_OFFSET))();
		}
	};
}
