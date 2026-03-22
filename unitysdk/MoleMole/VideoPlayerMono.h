#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Video/VideoRenderMode.h"

namespace MoleMole { class IVideoPlayer; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISLOOPING_OFFSET UNITYSDK_OFFSET(0xA095B80)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISLOOP_OFFSET UNITYSDK_OFFSET(0xA095F00)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISPAUSED_OFFSET UNITYSDK_OFFSET(0xA095D00)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISPLAYING_OFFSET UNITYSDK_OFFSET(0xA095C00)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISPREPARED_OFFSET UNITYSDK_OFFSET(0xA095C80)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERPLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA096080)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERRENDERMODE_OFFSET UNITYSDK_OFFSET(0xA095F80)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0xA095E80)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0xA096000)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA095D80)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA095E00)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERURL_OFFSET UNITYSDK_OFFSET(0xA095B00)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_VIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0xA096100)
#define MOLEMOLE_VIDEOPLAYERMONO_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA096120)
#define MOLEMOLE_VIDEOPLAYERMONO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA096420)
#define MOLEMOLE_VIDEOPLAYERMONO_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xA096260)
#define MOLEMOLE_VIDEOPLAYERMONO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA0964A0)
#define MOLEMOLE_VIDEOPLAYERMONO_PREPARE_OFFSET UNITYSDK_OFFSET(0xA096520)
#define MOLEMOLE_VIDEOPLAYERMONO_SET_VIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0xA096110)
#define MOLEMOLE_VIDEOPLAYERMONO__CTOR_OFFSET UNITYSDK_OFFSET(0xA096660)

namespace MoleMole
{
	inline static constexpr unsigned int VideoPlayerMono_TypeDefinitionIndex = 58152;

	class VideoPlayerMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean playOnAwake; // 0x18
		::System::Boolean isLoop; // 0x19
		::UnityEngine::RenderTexture* targetTexture; // 0x20
		::UnityEngine::Renderer* targetMaterialRenderer; // 0x28
		::System::String* targetMaterialProperty; // 0x30
		::UnityEngine::Video::VideoRenderMode renderMode; // 0x38
		::MoleMole::IVideoPlayer* Field_5_6; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO__CTOR_OFFSET))(this);
		}

		::System::String* get_PlayerUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERURL_OFFSET))(this);
		}

		::System::Boolean get_PlayerIsLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISLOOPING_OFFSET))(this);
		}

		::System::Boolean get_PlayerIsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_PlayerIsPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISPREPARED_OFFSET))(this);
		}

		::System::Boolean get_PlayerIsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISPAUSED_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_PlayerTargetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTARGETTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* get_PlayerTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTEXTURE_OFFSET))(this);
		}

		::System::String* get_PlayerTargetMaterialProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTARGETMATERIALPROPERTY_OFFSET))(this);
		}

		::System::Boolean get_PlayerIsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISLOOP_OFFSET))(this);
		}

		::UnityEngine::Video::VideoRenderMode get_PlayerRenderMode()
		{
			return ((::UnityEngine::Video::VideoRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERRENDERMODE_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_PlayerTargetMaterialRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTARGETMATERIALRENDERER_OFFSET))(this);
		}

		::System::Boolean get_PlayerPlayOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERPLAYONAWAKE_OFFSET))(this);
		}

		::MoleMole::IVideoPlayer* get_VideoPlayer()
		{
			return ((::MoleMole::IVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_VIDEOPLAYER_OFFSET))(this);
		}

		::System::Void set_VideoPlayer(::MoleMole::IVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_SET_VIDEOPLAYER_OFFSET))(this, a1);
		}

		::System::Void InitComponent(::MoleMole::IVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_INITCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_ONDESTROY_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_PREPARE_OFFSET))(this);
		}

		::System::Void Method_5_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_METHOD_5_E7EF6BC52B28648C_OFFSET))(this);
		}
	};
}
