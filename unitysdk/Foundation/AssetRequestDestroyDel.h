#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FOUNDATION_ASSETREQUESTDESTROYDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A47CB10)
#define FOUNDATION_ASSETREQUESTDESTROYDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A47CB60)
#define FOUNDATION_ASSETREQUESTDESTROYDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A47C6C0)
#define FOUNDATION_ASSETREQUESTDESTROYDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47C6B0)

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestDestroyDel_TypeDefinitionIndex = 8248;

	class AssetRequestDestroyDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTDESTROYDEL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTDESTROYDEL_INVOKE_OFFSET))(this, handle);
		}

		::System::IAsyncResult* BeginInvoke(::Foundation::AssetRequestHandle handle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Foundation::AssetRequestHandle, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTDESTROYDEL_BEGININVOKE_OFFSET))(this, handle, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTDESTROYDEL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
