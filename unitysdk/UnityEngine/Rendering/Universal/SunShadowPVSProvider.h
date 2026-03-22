#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering::Universal { class ISunShadowPVSProvider; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SUNSHADOWPVSPROVIDER_REGISTER_OFFSET UNITYSDK_OFFSET(0x183A5530)
#define UNITYENGINE_RENDERING_UNIVERSAL_SUNSHADOWPVSPROVIDER_SETUPCULLINGPARAMETER_OFFSET UNITYSDK_OFFSET(0x183A56D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SUNSHADOWPVSPROVIDER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x183A55A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SUNSHADOWPVSPROVIDER_UPDATEMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0x183A5640)
#define UNITYENGINE_RENDERING_UNIVERSAL_SUNSHADOWPVSPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x183A5800)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SunShadowPVSProvider_TypeDefinitionIndex = 28756;

	class SunShadowPVSProvider : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::ISunShadowPVSProvider** StaticGet_provider()
		{
			return (::UnityEngine::Rendering::Universal::ISunShadowPVSProvider**)Il2CppClass::FromTypeDefinitionIndex(SunShadowPVSProvider_TypeDefinitionIndex)->GetStaticField(0x21890);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SunShadowPVSProvider_TypeDefinitionIndex)->GetStaticField(0x61F0);
		}
		static ::UnityEngine::Vector3* StaticGet_mainLightDir()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(SunShadowPVSProvider_TypeDefinitionIndex)->GetStaticField(0x61F4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SUNSHADOWPVSPROVIDER__CCTOR_OFFSET))();
		}

		static ::System::Void Register(::UnityEngine::Rendering::Universal::ISunShadowPVSProvider* provider)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::ISunShadowPVSProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SUNSHADOWPVSPROVIDER_REGISTER_OFFSET))(provider);
		}

		static ::System::Void UnRegister(::UnityEngine::Rendering::Universal::ISunShadowPVSProvider* provider)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::ISunShadowPVSProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SUNSHADOWPVSPROVIDER_UNREGISTER_OFFSET))(provider);
		}

		static ::System::Void UpdateMainLightDir(::UnityEngine::Vector3 dir)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SUNSHADOWPVSPROVIDER_UPDATEMAINLIGHTDIR_OFFSET))(dir);
		}

		static ::System::Void SetupCullingParameter(::UnityEngine::Rendering::ScriptableCullingParameters& parameters)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SUNSHADOWPVSPROVIDER_SETUPCULLINGPARAMETER_OFFSET))(parameters);
		}
	};
}
