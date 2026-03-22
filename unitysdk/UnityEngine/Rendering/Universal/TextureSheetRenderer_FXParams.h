#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_FLUSHPARAMS_OFFSET UNITYSDK_OFFSET(0x19B29CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_BACKLIGHT_OFFSET UNITYSDK_OFFSET(0x19B29750)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_DESATURATE_OFFSET UNITYSDK_OFFSET(0x19B297C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_OUTLINE_OFFSET UNITYSDK_OFFSET(0x19B296E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS__FX_DESATURATE_MASK_OFFSET UNITYSDK_OFFSET(0x19B29830)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__DESATURATEMASK_OFFSET UNITYSDK_OFFSET(0x19B298A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__FXBACKLIGHTTEX_OFFSET UNITYSDK_OFFSET(0x19B299B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__FXOVERRIDETEX_OFFSET UNITYSDK_OFFSET(0x19B29AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__MAINTEX_OFFSET UNITYSDK_OFFSET(0x19B29BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_BACKLIGHT_OFFSET UNITYSDK_OFFSET(0x19B29760)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_DESATURATE_OFFSET UNITYSDK_OFFSET(0x19B297D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_OUTLINE_OFFSET UNITYSDK_OFFSET(0x19B296F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS__FX_DESATURATE_MASK_OFFSET UNITYSDK_OFFSET(0x19B29840)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__DESATURATEMASK_OFFSET UNITYSDK_OFFSET(0x19B298B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__FXBACKLIGHTTEX_OFFSET UNITYSDK_OFFSET(0x19B299C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__FXOVERRIDETEX_OFFSET UNITYSDK_OFFSET(0x19B29AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__MAINTEX_OFFSET UNITYSDK_OFFSET(0x19B29BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2A730)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TextureSheetRenderer_FXParams_TypeDefinitionIndex = 28439;

	class TextureSheetRenderer_FXParams : public ::System::Object
	{
	public:
		// static const ::System::String* S_FX_BACKLIGHT; // 0x0
		// static const ::System::String* S_FX_OUTLINE; // 0x0
		// static const ::System::String* S_FX_DESATURATE; // 0x0
		// static const ::System::String* S_FX_DESATURATE_MASK; // 0x0
		::UnityEngine::Texture* mainTex; // 0x10
		::UnityEngine::Texture* desaturateMask; // 0x18
		::UnityEngine::Texture* fxOverrideTex; // 0x20
		::Il2CppArray<::UnityEngine::Vector4>* _LocalVectorArrayParams; // 0x28
		::UnityEngine::Texture* fxBackLightTex; // 0x30
		::UnityEngine::Vector4 _FxOverrideTexColor; // 0x38
		::System::Boolean _FX_OUTLINE; // 0x48
		::System::Boolean fxBackLightTexDirty; // 0x49
		::System::Boolean fxOverrideTexDirty; // 0x4A
		::System::Boolean desaturateMaskDirty; // 0x4B
		::UnityEngine::Vector4 _FxBackLightTexUVSpeed; // 0x4C
		::System::Boolean _FX_OUTLINE_Dirty; // 0x5C
		::System::Boolean _FX_BACKLIGHT_Dirty; // 0x5D
		::System::Boolean mainTexDirty; // 0x5E
		::System::Boolean _FX_DESATURATE; // 0x5F
		::UnityEngine::Vector4 _ExtraParams; // 0x60
		::UnityEngine::Vector4 _TextureSheetPrams; // 0x70
		::UnityEngine::Vector4 _FxOutlineColor; // 0x80
		::UnityEngine::Vector4 _FxBackLightColor; // 0x90
		::UnityEngine::Vector4 _FxOverrideTexUVSpeed; // 0xA0
		::UnityEngine::Vector4 _FxOverrideColor; // 0xB0
		::System::Boolean _FX_DESATURATE_Dirty; // 0xC0
		::System::Boolean _FX_DESATURATE_MASK; // 0xC1
		::System::Boolean _FX_DESATURATE_MASK_Dirty; // 0xC2
		::System::Boolean _FX_BACKLIGHT; // 0xC3
		::UnityEngine::Vector4 _FxBackLightTexScaleOffset; // 0xC4
		::UnityEngine::Vector4 _FxOverrideTexScaleOffset; // 0xD4
		::UnityEngine::Vector4 _ImageParamas; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_KEYWORDS_FX_OUTLINE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_OUTLINE_OFFSET))(this);
		}

		::System::Void set_KEYWORDS_FX_OUTLINE(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_OUTLINE_OFFSET))(this, value);
		}

		::System::Boolean get_KEYWORDS_FX_BACKLIGHT()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_BACKLIGHT_OFFSET))(this);
		}

		::System::Void set_KEYWORDS_FX_BACKLIGHT(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_BACKLIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_KEYWORDS_FX_DESATURATE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_DESATURATE_OFFSET))(this);
		}

		::System::Void set_KEYWORDS_FX_DESATURATE(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_DESATURATE_OFFSET))(this, value);
		}

		::System::Boolean get_KEYWORDS__FX_DESATURATE_MASK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS__FX_DESATURATE_MASK_OFFSET))(this);
		}

		::System::Void set_KEYWORDS__FX_DESATURATE_MASK(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS__FX_DESATURATE_MASK_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get__DesaturateMask()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__DESATURATEMASK_OFFSET))(this);
		}

		::System::Void set__DesaturateMask(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__DESATURATEMASK_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get__FxBackLightTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__FXBACKLIGHTTEX_OFFSET))(this);
		}

		::System::Void set__FxBackLightTex(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__FXBACKLIGHTTEX_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get__FxOverrideTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__FXOVERRIDETEX_OFFSET))(this);
		}

		::System::Void set__FxOverrideTex(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__FXOVERRIDETEX_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get__MainTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__MAINTEX_OFFSET))(this);
		}

		::System::Void set__MainTex(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__MAINTEX_OFFSET))(this, value);
		}

		::System::Void FlushParams(::UnityEngine::Renderer* renderer, ::UnityEngine::MaterialPropertyBlock* block)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_FLUSHPARAMS_OFFSET))(this, renderer, block);
		}
	};
}
