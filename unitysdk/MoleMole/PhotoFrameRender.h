#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class PhotoFrame;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class CanvasScaler; }

#define MOLEMOLE_PHOTOFRAMERENDER_ADDPHOTOFRAME_OFFSET UNITYSDK_OFFSET(0xA60C940)
#define MOLEMOLE_PHOTOFRAMERENDER_CAMERARENDERRT_OFFSET UNITYSDK_OFFSET(0xA60C830)
#define MOLEMOLE_PHOTOFRAMERENDER_CLEARCAMERATARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA60C8C0)
#define MOLEMOLE_PHOTOFRAMERENDER_GET_CANVASSIZE_OFFSET UNITYSDK_OFFSET(0xA60C390)
#define MOLEMOLE_PHOTOFRAMERENDER_GET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0xA60C2D0)
#define MOLEMOLE_PHOTOFRAMERENDER_GET_RENDERSIZE_OFFSET UNITYSDK_OFFSET(0xA60C3A0)
#define MOLEMOLE_PHOTOFRAMERENDER_SETPHOTOCANVASSIZE_OFFSET UNITYSDK_OFFSET(0xA60C3B0)
#define MOLEMOLE_PHOTOFRAMERENDER_SET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0xA60C330)
#define MOLEMOLE_PHOTOFRAMERENDER_UPDATECANVASANDCAMERA_OFFSET UNITYSDK_OFFSET(0xA60CA60)
#define MOLEMOLE_PHOTOFRAMERENDER_UPDATERENDERSIZE_OFFSET UNITYSDK_OFFSET(0xA60C420)
#define MOLEMOLE_PHOTOFRAMERENDER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA60CB60)
#define MOLEMOLE_PHOTOFRAMERENDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA60CB40)

namespace MoleMole
{
	inline static constexpr unsigned int PhotoFrameRender_TypeDefinitionIndex = 56447;

	class PhotoFrameRender : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet_Field_5_0()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PhotoFrameRender_TypeDefinitionIndex)->GetStaticField(0xE0C0);
		}
		::UnityEngine::Camera* camera; // 0x18
		::UnityEngine::UI::CanvasScaler* CanvasScaler; // 0x20
		::UnityEngine::Canvas* canvas; // 0x28
		::UnityEngine::Vector2 Field_5_4; // 0x30
		::System::Single Field_5_5; // 0x38
		::UnityEngine::RenderTexture* Field_5_6; // 0x40
		::PhotoFrame* Field_5_7; // 0x48
		::UnityEngine::Vector2 Field_5_8; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER__CCTOR_OFFSET))();
		}

		static ::System::Single get_RenderScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_GET_RENDERSCALE_OFFSET))();
		}

		static ::System::Void set_RenderScale(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_SET_RENDERSCALE_OFFSET))(a1);
		}

		::UnityEngine::Vector2 get_CanvasSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_GET_CANVASSIZE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_RenderSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_GET_RENDERSIZE_OFFSET))(this);
		}

		::System::Void SetPhotoCanvasSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_SETPHOTOCANVASSIZE_OFFSET))(this, a1);
		}

		::System::Void UpdateRenderSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_UPDATERENDERSIZE_OFFSET))(this);
		}

		::System::Void CameraRenderRT(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_CAMERARENDERRT_OFFSET))(this, a1);
		}

		::System::Void ClearCameraTargetTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_CLEARCAMERATARGETTEXTURE_OFFSET))(this);
		}

		::System::Void AddPhotoFrame(::PhotoFrame* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PhotoFrame*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_ADDPHOTOFRAME_OFFSET))(this, a1);
		}

		::System::Void UpdateCanvasAndCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_UPDATECANVASANDCAMERA_OFFSET))(this);
		}
	};
}
