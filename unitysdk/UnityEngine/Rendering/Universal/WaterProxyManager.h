#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigWater; }
namespace UnityEngine::Rendering::Universal { class WaterProxy; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_CLEARALLRAMPTEXTURE_OFFSET UNITYSDK_OFFSET(0x17B963F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_GET_ENABLEWATERPROXY_OFFSET UNITYSDK_OFFSET(0x17B960E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_GET_HASWATERPROXY_OFFSET UNITYSDK_OFFSET(0x17B96160)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_REGISTERWATERPROXY_OFFSET UNITYSDK_OFFSET(0x17B961E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_REMOVERAMPTEXTURE_OFFSET UNITYSDK_OFFSET(0x17B92500)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_UNREGISTERWATERPROXY_OFFSET UNITYSDK_OFFSET(0x17B962C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_UPDATEWATERVALUE_OFFSET UNITYSDK_OFFSET(0x17B84950)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_UTILGENERATERAMPTEXTURE_OFFSET UNITYSDK_OFFSET(0x17B91CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B96620)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterProxyManager_TypeDefinitionIndex = 28479;

	class WaterProxyManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*, ::UnityEngine::Texture2D*>** StaticGet_cachedRampTextures()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*, ::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(WaterProxyManager_TypeDefinitionIndex)->GetStaticField(0x21560);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WaterProxy*>** StaticGet_s_WaterProxyList()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WaterProxy*>**)Il2CppClass::FromTypeDefinitionIndex(WaterProxyManager_TypeDefinitionIndex)->GetStaticField(0x21568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_EnableWaterProxy()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_GET_ENABLEWATERPROXY_OFFSET))();
		}

		static ::System::Boolean get_HasWaterProxy()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_GET_HASWATERPROXY_OFFSET))();
		}

		static ::System::Void RegisterWaterProxy(::UnityEngine::Rendering::Universal::WaterProxy* proxy)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::WaterProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_REGISTERWATERPROXY_OFFSET))(proxy);
		}

		static ::System::Void UnRegisterWaterProxy(::UnityEngine::Rendering::Universal::WaterProxy* proxy)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::WaterProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_UNREGISTERWATERPROXY_OFFSET))(proxy);
		}

		static ::System::Void UpdateWaterValue(::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* waterConfig, ::UnityEngine::Vector3 mainLightDir)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_UPDATEWATERVALUE_OFFSET))(waterConfig, mainLightDir);
		}

		static ::System::Void ClearAllRampTexture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_CLEARALLRAMPTEXTURE_OFFSET))();
		}

		static ::System::Void RemoveRampTexture(::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* waterConfig)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_REMOVERAMPTEXTURE_OFFSET))(waterConfig);
		}

		static ::UnityEngine::Texture2D* UtilGenerateRampTexture(::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* singleWeatherConfigWater)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXYMANAGER_UTILGENERATERAMPTEXTURE_OFFSET))(singleWeatherConfigWater);
		}
	};
}
