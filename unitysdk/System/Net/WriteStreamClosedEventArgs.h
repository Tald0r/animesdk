#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Exception; }

#define SYSTEM_NET_WRITESTREAMCLOSEDEVENTARGS_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x193B53E0)
#define SYSTEM_NET_WRITESTREAMCLOSEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x193B53C0)

namespace System::Net
{
	inline static constexpr unsigned int WriteStreamClosedEventArgs_TypeDefinitionIndex = 3364;

	class WriteStreamClosedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WRITESTREAMCLOSEDEVENTARGS__CTOR_OFFSET))(this);
		}

		::System::Exception* get_Error()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WRITESTREAMCLOSEDEVENTARGS_GET_ERROR_OFFSET))(this);
		}
	};
}
