#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETWEBLINEARDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18710510)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBLINEARDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18710560)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBLINEARDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x187101A0)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBLINEARDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18710180)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetWebLinearDelegate_TypeDefinitionIndex = 18379;

	class WebDelegate_SetWebLinearDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBLINEARDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean isLinear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBLINEARDELEGATE_INVOKE_OFFSET))(this, isLinear);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean isLinear, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBLINEARDELEGATE_BEGININVOKE_OFFSET))(this, isLinear, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBLINEARDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
