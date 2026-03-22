#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_NATIVE_RAWPOINTER_EQUALS_OFFSET UNITYSDK_OFFSET(0x387830)
#define FOUNDATION_NATIVE_RAWPOINTER_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x2C3A90)
#define FOUNDATION_NATIVE_RAWPOINTER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define FOUNDATION_NATIVE_RAWPOINTER_SETNULL_OFFSET UNITYSDK_OFFSET(0x300690)
#define FOUNDATION_NATIVE_RAWPOINTER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x2C3980)

namespace Foundation::Native
{
	inline static constexpr unsigned int RawPointer_TypeDefinitionIndex = 9139;

	struct alignas(8) RawPointer
	{
		::System::IntPtr _pointer; // 0x10

		::System::Boolean Equals(::Foundation::Native::RawPointer other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Native::RawPointer))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVE_RAWPOINTER_EQUALS_OFFSET))(this, other);
		}

		::System::Void SetNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVE_RAWPOINTER_SETNULL_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVE_RAWPOINTER_GET_ISNULL_OFFSET))(this);
		}

		::System::Byte* get_Value()
		{
			return ((::System::Byte*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVE_RAWPOINTER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Byte* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVE_RAWPOINTER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
