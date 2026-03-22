#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Rendering::Universal { class OverrideWeatherConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE_WeatherConfigOverrideData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x183ACFF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x183AD030)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIGV2_B__397_0_OFFSET UNITYSDK_OFFSET(0x183AD100)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIG_B__347_0_OFFSET UNITYSDK_OFFSET(0x183AD0C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__TRYOVERRIDEWEATHERV2_B__399_0_OFFSET UNITYSDK_OFFSET(0x183AD140)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__UPDATELIGHTNINGFX_B__250_0_OFFSET UNITYSDK_OFFSET(0x183AD040)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE___c_TypeDefinitionIndex = 28457;

	class VisualEnvironmentE___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*>** StaticGet___9__347_0()
		{
			return (::System::Comparison_1<::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x218D0);
		}
		static ::System::Predicate_1<::UnityEngine::ParticleSystem*>** StaticGet___9__250_0()
		{
			return (::System::Predicate_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x218D8);
		}
		static ::System::Comparison_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>** StaticGet___9__397_0()
		{
			return (::System::Comparison_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x218E0);
		}
		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::Universal::VisualEnvironmentE___c**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x218E8);
		}
		static ::System::Predicate_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>** StaticGet___9__399_0()
		{
			return (::System::Predicate_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x218F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateLightningFx_b__250_0(::UnityEngine::ParticleSystem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__UPDATELIGHTNINGFX_B__250_0_OFFSET))(this, x);
		}

		::System::Int32 _SetOverrideWeatherConfig_b__347_0(::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>* x, ::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*, ::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIG_B__347_0_OFFSET))(this, x, y);
		}

		::System::Int32 _SetOverrideWeatherConfigV2_b__397_0(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData* x, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIGV2_B__397_0_OFFSET))(this, x, y);
		}

		::System::Boolean _TryOverrideWeatherV2_b__399_0(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData* tempData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__TRYOVERRIDEWEATHERV2_B__399_0_OFFSET))(this, tempData);
		}
	};
}
