#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1868C520)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1868C550)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1868BFE0)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1868BFC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_PlayGoGetChunkProgressSizeDelegate_TypeDefinitionIndex = 18201;

	class ConsoleDelegate_PlayGoGetChunkProgressSizeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke(::System::String* chunkId)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_INVOKE_OFFSET))(this, chunkId);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* chunkId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_BEGININVOKE_OFFSET))(this, chunkId, callback, object);
		}

		::System::String* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
