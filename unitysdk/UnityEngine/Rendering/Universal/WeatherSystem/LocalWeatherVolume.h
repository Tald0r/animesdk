#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal { class WeatherGroupScriptableObject; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class LocalWeatherSubVolume; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_CHECKISVALIDANDGETWEIGHT_OFFSET UNITYSDK_OFFSET(0x17C19510)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_GET_CAMERAISINVOLUME_OFFSET UNITYSDK_OFFSET(0x17C18E40)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17C19460)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17C18E50)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17C190C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_REGISTERLOCALWEATHERVOLUME_OFFSET UNITYSDK_OFFSET(0x17C19180)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_TRYGETLOCALWEATHERVOLUME_OFFSET UNITYSDK_OFFSET(0x17C10110)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_UNREGISTERLOCALWEATHERVOLUME_OFFSET UNITYSDK_OFFSET(0x17C18EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C19EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x17C19DD0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int LocalWeatherVolume_TypeDefinitionIndex = 28805;

	class LocalWeatherVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolume*>*>** StaticGet_s_LocalWeatherVolumes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolume*>*>**)Il2CppClass::FromTypeDefinitionIndex(LocalWeatherVolume_TypeDefinitionIndex)->GetStaticField(0x22280);
		}
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfig; // 0x18
		::UnityEngine::Rendering::Universal::WeatherGroupScriptableObject* weatherGroup; // 0x20
		::System::Int32 priority; // 0x28
		::System::Single fadeInSpeed; // 0x2C
		::System::Single fadeOutSpeed; // 0x30
		::System::Boolean showPreviewBox; // 0x34
		::System::Boolean useMoreThanOneBox; // 0x35
		::System::Single extraHandleSize; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherSubVolume*>* subVolumes; // 0x40
		::System::Boolean cameraIsInVolume; // 0x48
		::System::Single weight; // 0x4C
		::System::Single preWeight; // 0x50
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* cachedWeatherConfig; // 0x58
		::System::Int32 cachedLayer; // 0x60
		::UnityEngine::Bounds defaultBoundBox; // 0x64
		::UnityEngine::Vector3 preCameraPos; // 0x7C
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* preWeatherConfig; // 0x88
		::System::Boolean enableLocalHeightMap; // 0x90
		::System::Int32 rainHeightExtension; // 0x94
		::System::Single rainHeightOffset; // 0x98
		::UnityEngine::Texture* rainHeightMap; // 0xA0
		::UnityEngine::Vector4 rainHeightMapParams; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME__CCTOR_OFFSET))();
		}

		::System::Boolean get_CameraIsInVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_GET_CAMERAISINVOLUME_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_ONDESTROY_OFFSET))(this);
		}

		::System::ValueTuple_3<::System::Boolean, ::System::Single, ::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*> CheckIsValidAndGetWeight(::UnityEngine::Vector3 cameraPos, ::UnityEngine::Camera* camera, ::System::String* key)
		{
			return ((::System::ValueTuple_3<::System::Boolean, ::System::Single, ::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_CHECKISVALIDANDGETWEIGHT_OFFSET))(this, cameraPos, camera, key);
		}

		static ::System::Void TryGetLocalWeatherVolume(::System::Int32 layer, ::UnityEngine::Camera* camera, ::UnityEngine::Vector3 triggerPosition, ::System::String* key, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*, ::System::Single>>* resultArray)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::String*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*, ::System::Single>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_TRYGETLOCALWEATHERVOLUME_OFFSET))(layer, camera, triggerPosition, key, resultArray);
		}

		static ::System::Void RegisterLocalWeatherVolume(::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolume* volume, ::System::Int32 layerId)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolume*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_REGISTERLOCALWEATHERVOLUME_OFFSET))(volume, layerId);
		}

		static ::System::Void UnRegisterLocalWeatherVolume(::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolume* volume)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_UNREGISTERLOCALWEATHERVOLUME_OFFSET))(volume);
		}
	};
}
