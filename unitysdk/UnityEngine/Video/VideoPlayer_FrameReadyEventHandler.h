#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B09BB20)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B09BB80)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B09A860)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B09BB10)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_FrameReadyEventHandler_TypeDefinitionIndex = 23945;

	class VideoPlayer_FrameReadyEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* source, ::System::Int64 frameIdx)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER_INVOKE_OFFSET))(this, source, frameIdx);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Video::VideoPlayer* source, ::System::Int64 frameIdx, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER_BEGININVOKE_OFFSET))(this, source, frameIdx, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
