#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_COMMANDBUFFERPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x18380250)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineProperties_CommandBufferProperties_TypeDefinitionIndex = 28205;

	class PipelineProperties_CommandBufferProperties : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_sampleReplacement()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x216A0);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x216A8);
		}
		static ::System::String** StaticGet_bloomDownsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x216B0);
		}
		static ::System::String** StaticGet_lensFlareUpsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x216B8);
		}
		static ::System::String** StaticGet_sampleClearBuffers()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x216C0);
		}
		static ::System::String** StaticGet_commandBufferName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x216C8);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x216D0);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x216D8);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x216E0);
		}
		static ::System::String** StaticGet_sampleComposite()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x216E8);
		}
		static ::System::String** StaticGet_sampleCopySource()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x216F0);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x216F8);
		}
		static ::System::String** StaticGet_samplePrepare()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21700);
		}
		static ::System::String** StaticGet_sampleUpsample()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21708);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21710);
		}
		static ::System::String** StaticGet_selectiveRenderBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21718);
		}
		static ::System::String** StaticGet_lensFlareDownsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21720);
		}
		static ::System::String** StaticGet_sampleCreateBuffers()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21728);
		}
		static ::System::String** StaticGet_samplePreSample()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21730);
		}
		static ::System::String** StaticGet_sampleDownsample()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21738);
		}
		static ::System::String** StaticGet_sampleSetup()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21740);
		}
		static ::System::String** StaticGet_sourceBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21748);
		}
		static ::System::String** StaticGet_bloomUpsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21750);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21758);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_COMMANDBUFFERPROPERTIES__CCTOR_OFFSET))();
		}
	};
}
