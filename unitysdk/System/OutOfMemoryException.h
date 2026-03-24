#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_OUTOFMEMORYEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19DD0AB0)
#define SYSTEM_OUTOFMEMORYEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19DD0B20)
#define SYSTEM_OUTOFMEMORYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19DD09F0)

namespace System
{
	inline static constexpr unsigned int OutOfMemoryException_TypeDefinitionIndex = 300;

	class OutOfMemoryException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OUTOFMEMORYEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_OUTOFMEMORYEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_OUTOFMEMORYEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
