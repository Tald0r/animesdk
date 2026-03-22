#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ProgressChangedEventArgs.h"

namespace System { class Object; }

#define SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTARGS_GET_BYTESRECEIVED_OFFSET UNITYSDK_OFFSET(0x18FC8480)
#define SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTARGS_GET_BYTESSENT_OFFSET UNITYSDK_OFFSET(0x18FC84A0)
#define SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTARGS_GET_TOTALBYTESTORECEIVE_OFFSET UNITYSDK_OFFSET(0x18FC8490)
#define SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTARGS_GET_TOTALBYTESTOSEND_OFFSET UNITYSDK_OFFSET(0x18FC84B0)
#define SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18FC84C0)
#define SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC8410)

namespace System::Net
{
	inline static constexpr unsigned int UploadProgressChangedEventArgs_TypeDefinitionIndex = 3477;

	class UploadProgressChangedEventArgs : public ::System::ComponentModel::ProgressChangedEventArgs
	{
	public:
		::System::Int64 m_BytesSent; // 0x20
		::System::Int64 m_TotalBytesToReceive; // 0x28
		::System::Int64 m_BytesReceived; // 0x30
		::System::Int64 m_TotalBytesToSend; // 0x38

		::System::Void _ctor(::System::Int32 progressPercentage, ::System::Object* userToken, ::System::Int64 bytesSent, ::System::Int64 totalBytesToSend, ::System::Int64 bytesReceived, ::System::Int64 totalBytesToReceive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTARGS__CTOR_OFFSET))(this, progressPercentage, userToken, bytesSent, totalBytesToSend, bytesReceived, totalBytesToReceive);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTARGS__CTOR_1_OFFSET))(this);
		}

		::System::Int64 get_BytesReceived()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTARGS_GET_BYTESRECEIVED_OFFSET))(this);
		}

		::System::Int64 get_TotalBytesToReceive()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTARGS_GET_TOTALBYTESTORECEIVE_OFFSET))(this);
		}

		::System::Int64 get_BytesSent()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTARGS_GET_BYTESSENT_OFFSET))(this);
		}

		::System::Int64 get_TotalBytesToSend()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTARGS_GET_TOTALBYTESTOSEND_OFFSET))(this);
		}
	};
}
