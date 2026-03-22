#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class AkAudioFormat;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B05F1C0)
#define AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B05F220)
#define AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B05EE80)
#define AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B05EE70)

inline static constexpr unsigned int AkAudioInputManager_AudioFormatDelegate_TypeDefinitionIndex = 30006;

class AkAudioInputManager_AudioFormatDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke(::System::UInt32 playingID, ::AkAudioFormat* format)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkAudioFormat*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE_INVOKE_OFFSET))(this, playingID, format);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 playingID, ::AkAudioFormat* format, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::AkAudioFormat*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE_BEGININVOKE_OFFSET))(this, playingID, format, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE_ENDINVOKE_OFFSET))(this, result);
	}
};
