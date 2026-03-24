#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTXRenderer_RTXCommonShaderIDs.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_RTXSHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A27B180)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_RTXSHADERIDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A27B130)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex = 5789;

	class RTXPathTracer_RTXShaderIDs : public ::UnityEngine::NAPRenderPipeline0::RTXRenderer_RTXCommonShaderIDs
	{
	public:
		static ::System::Int32* StaticGet__FrameIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C60);
		}
		static ::System::Int32* StaticGet__IrradianceVolumeWriteIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C64);
		}
		static ::System::Int32* StaticGet__BlendRate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C68);
		}
		static ::System::Int32* StaticGet__RWIrradianceVolume()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C6C);
		}
		static ::System::Int32* StaticGet__Result()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C70);
		}
		static ::System::Int32* StaticGet__IrradianceVolumeCenter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C74);
		}
		static ::System::Int32* StaticGet__IrradianceVolumeWriteColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C78);
		}
		static ::System::Int32* StaticGet__IrradianceVolume()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C7C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_RTXSHADERIDS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_RTXSHADERIDS__CCTOR_OFFSET))();
		}
	};
}
