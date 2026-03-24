#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace miHoYoEmotion { class EmoSync; }

#define MIHOYOEMOTION_EMOSYNC_PHOFINISHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18FD4BE0)
#define MIHOYOEMOTION_EMOSYNC_PHOFINISHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18FD4C10)
#define MIHOYOEMOTION_EMOSYNC_PHOFINISHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18FD37E0)
#define MIHOYOEMOTION_EMOSYNC_PHOFINISHDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18FD4BC0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmoSync_PhoFinishDelegate_TypeDefinitionIndex = 37171;

	class EmoSync_PhoFinishDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_PHOFINISHDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::miHoYoEmotion::EmoSync* emoSync)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoSync*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_PHOFINISHDELEGATE_INVOKE_OFFSET))(this, emoSync);
		}

		::System::IAsyncResult* BeginInvoke(::miHoYoEmotion::EmoSync* emoSync, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::miHoYoEmotion::EmoSync*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_PHOFINISHDELEGATE_BEGININVOKE_OFFSET))(this, emoSync, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_PHOFINISHDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
