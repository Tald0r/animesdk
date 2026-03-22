#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Data { class DataRow; }

#define SYSTEM_DATA_DATAROWCREATEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x198F00F0)
#define SYSTEM_DATA_DATAROWCREATEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x198F0130)
#define SYSTEM_DATA_DATAROWCREATEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x198EFB70)
#define SYSTEM_DATA_DATAROWCREATEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x198EFB60)

namespace System::Data
{
	inline static constexpr unsigned int DataRowCreatedEventHandler_TypeDefinitionIndex = 35417;

	class DataRowCreatedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCREATEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Data::DataRow* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCREATEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, r);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Data::DataRow* r, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Data::DataRow*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCREATEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, r, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCREATEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
