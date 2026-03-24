#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAudio { class AudioOutputStateCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19C85090)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19C850C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x19C84B90)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19C84B70)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int OnAudioOutputStateCallback_TypeDefinitionIndex = 33144;

	class OnAudioOutputStateCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
