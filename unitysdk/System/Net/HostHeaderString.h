#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HOSTHEADERSTRING_CONVERT_OFFSET UNITYSDK_OFFSET(0x193268D0)
#define SYSTEM_NET_HOSTHEADERSTRING_COPY_OFFSET UNITYSDK_OFFSET(0x19326B50)
#define SYSTEM_NET_HOSTHEADERSTRING_GET_BYTECOUNT_OFFSET UNITYSDK_OFFSET(0x19326B00)
#define SYSTEM_NET_HOSTHEADERSTRING_GET_BYTES_OFFSET UNITYSDK_OFFSET(0x19326B30)
#define SYSTEM_NET_HOSTHEADERSTRING_GET_STRING_OFFSET UNITYSDK_OFFSET(0x19326AD0)
#define SYSTEM_NET_HOSTHEADERSTRING_INIT_OFFSET UNITYSDK_OFFSET(0x19326890)
#define SYSTEM_NET_HOSTHEADERSTRING_SET_STRING_OFFSET UNITYSDK_OFFSET(0x19326AE0)
#define SYSTEM_NET_HOSTHEADERSTRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193268B0)
#define SYSTEM_NET_HOSTHEADERSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x19326880)

namespace System::Net
{
	inline static constexpr unsigned int HostHeaderString_TypeDefinitionIndex = 3346;

	class HostHeaderString : public ::System::Object
	{
	public:
		::System::String* m_String; // 0x10
		::Il2CppArray<::System::Byte>* m_Bytes; // 0x18
		::System::Boolean m_Converted; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HOSTHEADERSTRING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HOSTHEADERSTRING__CTOR_1_OFFSET))(this, s);
		}

		::System::Void Init(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HOSTHEADERSTRING_INIT_OFFSET))(this, s);
		}

		::System::Void Convert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HOSTHEADERSTRING_CONVERT_OFFSET))(this);
		}

		::System::String* get_String()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HOSTHEADERSTRING_GET_STRING_OFFSET))(this);
		}

		::System::Void set_String(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HOSTHEADERSTRING_SET_STRING_OFFSET))(this, value);
		}

		::System::Int32 get_ByteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HOSTHEADERSTRING_GET_BYTECOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Bytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HOSTHEADERSTRING_GET_BYTES_OFFSET))(this);
		}

		::System::Void Copy(::Il2CppArray<::System::Byte>* destBytes, ::System::Int32 destByteIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HOSTHEADERSTRING_COPY_OFFSET))(this, destBytes, destByteIndex);
		}
	};
}
