#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_SCRIPTABLERENDERPIPELINEACTIVE_OFFSET UNITYSDK_OFFSET(0x193200A0)
#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_SINGLEPASSSTEREODOUBLEWIDEENABLED_OFFSET UNITYSDK_OFFSET(0x19320160)
#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_SINGLEPASSSTEREOINSTANCEDENABLED_OFFSET UNITYSDK_OFFSET(0x193201B0)
#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_XRENABLED_OFFSET UNITYSDK_OFFSET(0x19320150)
#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x19320210)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineProperties_TypeDefinitionIndex = 28201;

	class PipelineProperties : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_renderBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_TypeDefinitionIndex)->GetStaticField(0x62F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_scriptableRenderPipelineActive()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_SCRIPTABLERENDERPIPELINEACTIVE_OFFSET))();
		}

		static ::System::Boolean get_xrEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_XRENABLED_OFFSET))();
		}

		static ::System::Boolean get_singlePassStereoDoubleWideEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_SINGLEPASSSTEREODOUBLEWIDEENABLED_OFFSET))();
		}

		static ::System::Boolean get_singlePassStereoInstancedEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_GET_SINGLEPASSSTEREOINSTANCEDENABLED_OFFSET))();
		}
	};
}
