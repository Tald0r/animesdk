#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"

#define POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKCOMPUTESHADERSUPPORT_OFFSET UNITYSDK_OFFSET(0x182D5920)
#define POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKGEOMETRYSHADERSUPPORT_OFFSET UNITYSDK_OFFSET(0x182D58D0)
#define POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKGLAREFEATURESUPPORT_OFFSET UNITYSDK_OFFSET(0x182D5A70)
#define POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKLENSFLAREFEATURESUPPORT_OFFSET UNITYSDK_OFFSET(0x182D5970)
#define POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKSUPPORTEDRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x182D5B70)
#define POSTPROCESS_MKGLOW_COMPATIBILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x182D5C60)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Compatibility_TypeDefinitionIndex = 29128;

	class Compatibility : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__11R11G10BFormatSupported()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Compatibility_TypeDefinitionIndex)->GetStaticField(0x6070);
		}
		static ::System::Boolean* StaticGet__defaultHDRFormatSupported()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Compatibility_TypeDefinitionIndex)->GetStaticField(0x6071);
		}
		static ::System::Boolean* StaticGet__2A10R10G10BFormatSupported()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Compatibility_TypeDefinitionIndex)->GetStaticField(0x6072);
		}
		static ::System::Boolean* StaticGet_IsSupported()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Compatibility_TypeDefinitionIndex)->GetStaticField(0x6073);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPATIBILITY__CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckGeometryShaderSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKGEOMETRYSHADERSUPPORT_OFFSET))();
		}

		static ::System::Boolean CheckComputeShaderSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKCOMPUTESHADERSUPPORT_OFFSET))();
		}

		static ::System::Boolean CheckLensFlareFeatureSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKLENSFLAREFEATURESUPPORT_OFFSET))();
		}

		static ::System::Boolean CheckGlareFeatureSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKGLAREFEATURESUPPORT_OFFSET))();
		}

		static ::UnityEngine::RenderTextureFormat CheckSupportedRenderTextureFormat()
		{
			return ((::UnityEngine::RenderTextureFormat(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKSUPPORTEDRENDERTEXTUREFORMAT_OFFSET))();
		}
	};
}
