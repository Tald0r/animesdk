#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_TELEMETRYDELEGATE_STARTKIBANADELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17AE10A0)
#define MIHOYO_SDK_TELEMETRYDELEGATE_STARTKIBANADELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17AE10D0)
#define MIHOYO_SDK_TELEMETRYDELEGATE_STARTKIBANADELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17AE0BA0)
#define MIHOYO_SDK_TELEMETRYDELEGATE_STARTKIBANADELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE0B90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryDelegate_StartKibanaDelegate_TypeDefinitionIndex = 17720;

	class TelemetryDelegate_StartKibanaDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_STARTKIBANADELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_STARTKIBANADELEGATE_INVOKE_OFFSET))(this, url);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* url, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_STARTKIBANADELEGATE_BEGININVOKE_OFFSET))(this, url, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_STARTKIBANADELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
