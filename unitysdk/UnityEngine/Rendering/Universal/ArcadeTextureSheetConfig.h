#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering::Universal { class IArcadeSheetConfig; }

#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x183B4F20)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_ENDFRAME_OFFSET UNITYSDK_OFFSET(0x183B4DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_ITEMPIVOTCENTER_OFFSET UNITYSDK_OFFSET(0x183B4E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x183B4E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x183B4E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x183B4E40)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_STARTFRAME_OFFSET UNITYSDK_OFFSET(0x183B4DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_TEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x183B4D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_TILES_OFFSET UNITYSDK_OFFSET(0x183B4DA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_INIT_OFFSET UNITYSDK_OFFSET(0x183B4C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_REBUILD_OFFSET UNITYSDK_OFFSET(0x183B4E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_ENDFRAME_OFFSET UNITYSDK_OFFSET(0x183B4DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_ITEMPIVOTCENTER_OFFSET UNITYSDK_OFFSET(0x183B4E30)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x183B4E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x183B4E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x183B4E50)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_STARTFRAME_OFFSET UNITYSDK_OFFSET(0x183B4DD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_TEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x183B4D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_TILES_OFFSET UNITYSDK_OFFSET(0x183B4DB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x183B4F70)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ArcadeTextureSheetConfig_TypeDefinitionIndex = 28436;

	class ArcadeTextureSheetConfig : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* _TextureSheet_k__BackingField; // 0x10
		::UnityEngine::Vector2Int _Tiles_k__BackingField; // 0x18
		::UnityEngine::Vector2 _ItemPivotCenter_k__BackingField; // 0x20
		::System::Int32 _Speed_k__BackingField; // 0x28
		::System::Boolean _Loop_k__BackingField; // 0x2C
		::System::Int32 _StartFrame_k__BackingField; // 0x30
		::UnityEngine::Vector2 _Size_k__BackingField; // 0x34
		::System::Int32 _EndFrame_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::ArcadeTextureSheetConfig* Init(::System::Int32 num)
		{
			return ((::UnityEngine::Rendering::Universal::ArcadeTextureSheetConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_INIT_OFFSET))(this, num);
		}

		::UnityEngine::Texture2D* get_TextureSheet()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_TEXTURESHEET_OFFSET))(this);
		}

		::System::Void set_TextureSheet(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_TEXTURESHEET_OFFSET))(this, value);
		}

		::UnityEngine::Vector2Int get_Tiles()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_TILES_OFFSET))(this);
		}

		::System::Void set_Tiles(::UnityEngine::Vector2Int value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_TILES_OFFSET))(this, value);
		}

		::System::Int32 get_StartFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_STARTFRAME_OFFSET))(this);
		}

		::System::Void set_StartFrame(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_STARTFRAME_OFFSET))(this, value);
		}

		::System::Int32 get_EndFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_ENDFRAME_OFFSET))(this);
		}

		::System::Void set_EndFrame(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_ENDFRAME_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_SIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_ItemPivotCenter()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_ITEMPIVOTCENTER_OFFSET))(this);
		}

		::System::Void set_ItemPivotCenter(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_ITEMPIVOTCENTER_OFFSET))(this, value);
		}

		::System::Int32 get_Speed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_SPEED_OFFSET))(this, value);
		}

		::System::Boolean get_Loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_Loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_LOOP_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::Universal::IArcadeSheetConfig* ReBuild(::UnityEngine::Texture2D* textureSheet, ::UnityEngine::Vector2Int tiles, ::System::Int32 num, ::System::Int32 speed, ::System::Boolean loop)
		{
			return ((::UnityEngine::Rendering::Universal::IArcadeSheetConfig*(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Vector2Int, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_REBUILD_OFFSET))(this, textureSheet, tiles, num, speed, loop);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_CLEAR_OFFSET))(this);
		}
	};
}
