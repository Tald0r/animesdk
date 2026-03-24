#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/IVideoPlayer.h"
#include "unitysdk/UnityEngine/Video/VideoRenderMode.h"

namespace MoleMole { class VideoPlayerMono; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Video { class VideoClip; }
namespace UnityEngine::Video { class VideoPlayer; }

#define MOLEMOLE_UNITYVIDEOPLAYER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x6AF7F30)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x6AF7B60)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x6AF7B80)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x6AF7B40)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x6AF7C70)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_ISCANRENDER_OFFSET UNITYSDK_OFFSET(0x6AF8850)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x6AF7920)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x6AF78E0)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x6AF78C0)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x6AF7900)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x6AF7B00)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x6AF7BA0)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x6AF79C0)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x6AF7D50)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x6AF7E90)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x6AF7CB0)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x6AF7DF0)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x6AF7C90)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x6AF7B20)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_URL_OFFSET UNITYSDK_OFFSET(0x6AF78A0)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x6AF7A60)
#define MOLEMOLE_UNITYVIDEOPLAYER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x6AF7C50)
#define MOLEMOLE_UNITYVIDEOPLAYER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x6AF83C0)
#define MOLEMOLE_UNITYVIDEOPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6AF8420)
#define MOLEMOLE_UNITYVIDEOPLAYER_ONVIDEOERRORRECEIVED_OFFSET UNITYSDK_OFFSET(0x6AF7510)
#define MOLEMOLE_UNITYVIDEOPLAYER_ONVIDEOLOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x6AF7590)
#define MOLEMOLE_UNITYVIDEOPLAYER_ONVIDEOPREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x6AF7670)
#define MOLEMOLE_UNITYVIDEOPLAYER_ONVIDEOSEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x6AF76E0)
#define MOLEMOLE_UNITYVIDEOPLAYER_ONVIDEOSTARTED_OFFSET UNITYSDK_OFFSET(0x6AF7600)
#define MOLEMOLE_UNITYVIDEOPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x6AF77C0)
#define MOLEMOLE_UNITYVIDEOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x6AF7750)
#define MOLEMOLE_UNITYVIDEOPLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0x6AF8350)
#define MOLEMOLE_UNITYVIDEOPLAYER_SEEKFRAME_OFFSET UNITYSDK_OFFSET(0x6AF81A0)
#define MOLEMOLE_UNITYVIDEOPLAYER_SEEKTIME_OFFSET UNITYSDK_OFFSET(0x6AF8220)
#define MOLEMOLE_UNITYVIDEOPLAYER_SETAUDIOMODENONE_OFFSET UNITYSDK_OFFSET(0x6AF82B0)
#define MOLEMOLE_UNITYVIDEOPLAYER_SETURL_OFFSET UNITYSDK_OFFSET(0x6AF80F0)
#define MOLEMOLE_UNITYVIDEOPLAYER_SETVIDEOCLIP_OFFSET UNITYSDK_OFFSET(0x6AF7FD0)
#define MOLEMOLE_UNITYVIDEOPLAYER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x6AF7F50)
#define MOLEMOLE_UNITYVIDEOPLAYER_SET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x6AF7940)
#define MOLEMOLE_UNITYVIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x6AF7BC0)
#define MOLEMOLE_UNITYVIDEOPLAYER_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x6AF79E0)
#define MOLEMOLE_UNITYVIDEOPLAYER_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x6AF7D70)
#define MOLEMOLE_UNITYVIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x6AF7EB0)
#define MOLEMOLE_UNITYVIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x6AF7CD0)
#define MOLEMOLE_UNITYVIDEOPLAYER_SET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x6AF7E10)
#define MOLEMOLE_UNITYVIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x6AF7A80)
#define MOLEMOLE_UNITYVIDEOPLAYER_STEPFORWARD_OFFSET UNITYSDK_OFFSET(0x6AF8080)
#define MOLEMOLE_UNITYVIDEOPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x6AF7830)
#define MOLEMOLE_UNITYVIDEOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x6AF71E0)
#define MOLEMOLE_UNITYVIDEOPLAYER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6AF88E0)

namespace MoleMole
{
	inline static constexpr unsigned int UnityVideoPlayer_TypeDefinitionIndex = 78760;

	class UnityVideoPlayer : public ::MoleMole::IVideoPlayer
	{
	public:
		::UnityEngine::Video::VideoPlayer* _videoPlayer; // 0x48

		::System::Void _ctor(::MoleMole::VideoPlayerMono* mono)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VideoPlayerMono*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER__CTOR_OFFSET))(this, mono);
		}

		::System::Void OnVideoErrorReceived(::UnityEngine::Video::VideoPlayer* source, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_ONVIDEOERRORRECEIVED_OFFSET))(this, source, message);
		}

		::System::Void OnVideoLoopPointReached(::UnityEngine::Video::VideoPlayer* source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_ONVIDEOLOOPPOINTREACHED_OFFSET))(this, source);
		}

		::System::Void OnVideoStarted(::UnityEngine::Video::VideoPlayer* source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_ONVIDEOSTARTED_OFFSET))(this, source);
		}

		::System::Void OnVideoPrepareCompleted(::UnityEngine::Video::VideoPlayer* source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_ONVIDEOPREPARECOMPLETED_OFFSET))(this, source);
		}

		::System::Void OnVideoSeekCompleted(::UnityEngine::Video::VideoPlayer* source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_ONVIDEOSEEKCOMPLETED_OFFSET))(this, source);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_PLAY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_PAUSE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_STOP_OFFSET))(this);
		}

		::System::String* get_url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_URL_OFFSET))(this);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean get_isPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_ISPREPARED_OFFSET))(this);
		}

		::System::Boolean get_isLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_ISLOOPING_OFFSET))(this);
		}

		::System::Void set_isLooping(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SET_ISLOOPING_OFFSET))(this, value);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SET_PLAYONAWAKE_OFFSET))(this, value);
		}

		::System::Boolean get_waitForFirstFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET))(this);
		}

		::System::Void set_waitForFirstFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET))(this, value);
		}

		::System::Double get_length()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_LENGTH_OFFSET))(this);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_TIME_OFFSET))(this);
		}

		::System::Int64 get_frame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_FRAME_OFFSET))(this);
		}

		::System::UInt64 get_frameCount()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Single get_frameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_FRAMERATE_OFFSET))(this);
		}

		::System::Single get_playbackSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET))(this);
		}

		::System::Void set_playbackSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET))(this, value);
		}

		::System::UInt32 get_width()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_WIDTH_OFFSET))(this);
		}

		::System::UInt32 get_height()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_HEIGHT_OFFSET))(this);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_TEXTURE_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_targetMaterialRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET))(this);
		}

		::System::Void set_targetMaterialRenderer(::UnityEngine::Renderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET))(this, value);
		}

		::UnityEngine::Video::VideoRenderMode get_renderMode()
		{
			return ((::UnityEngine::Video::VideoRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::Video::VideoRenderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoRenderMode))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SET_RENDERMODE_OFFSET))(this, value);
		}

		::UnityEngine::RenderTexture* get_targetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_TARGETTEXTURE_OFFSET))(this);
		}

		::System::Void set_targetTexture(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SET_TARGETTEXTURE_OFFSET))(this, value);
		}

		::System::String* get_targetMaterialProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET))(this);
		}

		::System::Void set_targetMaterialProperty(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET))(this, value);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Void SetVideoClip(::UnityEngine::Video::VideoClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SETVIDEOCLIP_OFFSET))(this, clip);
		}

		::System::Void StepForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_STEPFORWARD_OFFSET))(this);
		}

		::System::Void SetURL(::System::String* newUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SETURL_OFFSET))(this, newUrl);
		}

		::System::Void SeekFrame(::System::Int32 seekFrameNo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SEEKFRAME_OFFSET))(this, seekFrameNo);
		}

		::System::Void SeekTime(::System::Double seekTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SEEKTIME_OFFSET))(this, seekTime);
		}

		::System::Void SetAudioModeNone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_SETAUDIOMODENONE_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_PREPARE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_IsCanRender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER_GET_ISCANRENDER_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITYVIDEOPLAYER___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
