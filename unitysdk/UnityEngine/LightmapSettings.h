#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace UnityEngine { class LightProbes; }
namespace UnityEngine { class LightmapData; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_LIGHTMAPSETTINGS_CHECKLIGHTMAPSANDAREADIRECT_OFFSET UNITYSDK_OFFSET(0x1994FC70)
#define UNITYENGINE_LIGHTMAPSETTINGS_GETKODAMAASSETPATH_OFFSET UNITYSDK_OFFSET(0x1994FC50)
#define UNITYENGINE_LIGHTMAPSETTINGS_GET_KODAMABINDATA_OFFSET UNITYSDK_OFFSET(0x1994FBF0)
#define UNITYENGINE_LIGHTMAPSETTINGS_GET_LIGHTMAPS_OFFSET UNITYSDK_OFFSET(0x1994FBB0)
#define UNITYENGINE_LIGHTMAPSETTINGS_GET_LIGHTPROBES_OFFSET UNITYSDK_OFFSET(0x1994FBD0)
#define UNITYENGINE_LIGHTMAPSETTINGS_ISUSINGLIGHTSKYOC_OFFSET UNITYSDK_OFFSET(0x1994FC80)
#define UNITYENGINE_LIGHTMAPSETTINGS_LIGHTMAPAREADIRTEXTUREBYINDEX_OFFSET UNITYSDK_OFFSET(0x1994FC30)
#define UNITYENGINE_LIGHTMAPSETTINGS_LIGHTMAPLIGHTCOLORTEXTUREBYINDEX_OFFSET UNITYSDK_OFFSET(0x1994FC20)
#define UNITYENGINE_LIGHTMAPSETTINGS_LIGHTMAPSLENGTH_OFFSET UNITYSDK_OFFSET(0x1994FC10)
#define UNITYENGINE_LIGHTMAPSETTINGS_SETCURRENTKODAMARENDER_OFFSET UNITYSDK_OFFSET(0x1994FC40)
#define UNITYENGINE_LIGHTMAPSETTINGS_SETKODAMARENDER_OFFSET UNITYSDK_OFFSET(0x1994FC60)
#define UNITYENGINE_LIGHTMAPSETTINGS_SET_KODAMABINDATA_OFFSET UNITYSDK_OFFSET(0x1994FC00)
#define UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTMAPS_OFFSET UNITYSDK_OFFSET(0x1994FBC0)
#define UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTPROBES_OFFSET UNITYSDK_OFFSET(0x1994FBE0)
#define UNITYENGINE_LIGHTMAPSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1994FB90)

namespace UnityEngine
{
	inline static constexpr unsigned int LightmapSettings_TypeDefinitionIndex = 5186;

	class LightmapSettings : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::LightmapData*>* get_lightmaps()
		{
			return ((::Il2CppArray<::UnityEngine::LightmapData*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_GET_LIGHTMAPS_OFFSET))();
		}

		static ::System::Void set_lightmaps(::Il2CppArray<::UnityEngine::LightmapData*>* value)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::LightmapData*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTMAPS_OFFSET))(value);
		}

		static ::UnityEngine::LightProbes* get_lightProbes()
		{
			return ((::UnityEngine::LightProbes*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_GET_LIGHTPROBES_OFFSET))();
		}

		static ::System::Void set_lightProbes(::UnityEngine::LightProbes* value)
		{
			return ((::System::Void(*)(::UnityEngine::LightProbes*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTPROBES_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* get_kodamaBinData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_GET_KODAMABINDATA_OFFSET))();
		}

		static ::System::Void set_kodamaBinData(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_SET_KODAMABINDATA_OFFSET))(value);
		}

		static ::System::Int32 LightmapsLength()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_LIGHTMAPSLENGTH_OFFSET))();
		}

		static ::UnityEngine::Texture2D* LightmapLightColorTextureByIndex(::System::Int32 index)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_LIGHTMAPLIGHTCOLORTEXTUREBYINDEX_OFFSET))(index);
		}

		static ::UnityEngine::Texture2D* LightmapAreaDirTextureByIndex(::System::Int32 index)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_LIGHTMAPAREADIRTEXTUREBYINDEX_OFFSET))(index);
		}

		static ::System::Void SetCurrentKodamaRender(::System::Int32 sceneHandle)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_SETCURRENTKODAMARENDER_OFFSET))(sceneHandle);
		}

		static ::System::String* GetKodamaAssetPath(::System::Int32 sceneHandle)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_GETKODAMAASSETPATH_OFFSET))(sceneHandle);
		}

		static ::System::Void SetKodamaRender(::System::Int32 sceneHandle, ::UnityEngine::TextAsset* asset)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_SETKODAMARENDER_OFFSET))(sceneHandle, asset);
		}

		static ::System::Boolean CheckLightmapsAndAreaDirect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_CHECKLIGHTMAPSANDAREADIRECT_OFFSET))();
		}

		static ::System::Boolean IsUsingLightSkyOC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_ISUSINGLIGHTSKYOC_OFFSET))();
		}
	};
}
