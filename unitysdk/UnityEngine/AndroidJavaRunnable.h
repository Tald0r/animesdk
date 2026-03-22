#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_ANDROIDJAVARUNNABLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A9C4FA0)
#define UNITYENGINE_ANDROIDJAVARUNNABLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A9C4FD0)
#define UNITYENGINE_ANDROIDJAVARUNNABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A9C4D00)
#define UNITYENGINE_ANDROIDJAVARUNNABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9C4CF0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaRunnable_TypeDefinitionIndex = 36075;

	class AndroidJavaRunnable : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVARUNNABLE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVARUNNABLE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVARUNNABLE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVARUNNABLE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
