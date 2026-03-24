#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_COPYTO_OFFSET UNITYSDK_OFFSET(0x9561C0)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9561F0)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x956200)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_3_OFFSET UNITYSDK_OFFSET(0x956290)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9561E0)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9562A0)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_GET_BYTECOUNT_OFFSET UNITYSDK_OFFSET(0x956190)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x2F6550)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1ACB0C70)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1ACB0D00)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_REPLACEBUFFER_OFFSET UNITYSDK_OFFSET(0x9561A0)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9562B0)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACB0D90)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x956170)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x956120)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BufferedString_TypeDefinitionIndex = 7461;

	struct alignas(8) BufferedString
	{
		static ::Sirenix::Serialization::BufferedString* StaticGet_Empty()
		{
			return (::Sirenix::Serialization::BufferedString*)Il2CppClass::FromTypeDefinitionIndex(BufferedString_TypeDefinitionIndex)->GetStaticField(0x6090);
		}
		::System::Object* Data; // 0x10
		::System::Int32 ByteOffset; // 0x18
		::System::Int32 CharCount; // 0x1C

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* bufferLE, ::System::Int32 byteOffset, ::System::Int32 charCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING__CTOR_1_OFFSET))(this, bufferLE, byteOffset, charCount);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Int32 get_ByteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_GET_BYTECOUNT_OFFSET))(this);
		}

		::Sirenix::Serialization::BufferedString ReplaceBuffer(::Il2CppArray<::System::Byte>* newBuffer)
		{
			return ((::Sirenix::Serialization::BufferedString(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_REPLACEBUFFER_OFFSET))(this, newBuffer);
		}

		::Sirenix::Serialization::BufferedString CopyTo(::Il2CppArray<::System::Byte>* dstArray, ::System::Int32 dstOffset)
		{
			return ((::Sirenix::Serialization::BufferedString(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_COPYTO_OFFSET))(this, dstArray, dstOffset);
		}

		::System::Boolean Equals(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_OFFSET))(this, name);
		}

		::System::Boolean Equals_1(::Il2CppArray<::System::Byte>* bufferLE, ::System::Int32 byteOffset, ::System::Int32 charCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_1_OFFSET))(this, bufferLE, byteOffset, charCount);
		}

		::System::Boolean Equals_2(::Sirenix::Serialization::BufferedString other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Sirenix::Serialization::BufferedString))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_2_OFFSET))(this, other);
		}

		::System::Boolean Equals_3(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_3_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::Sirenix::Serialization::BufferedString a, ::Sirenix::Serialization::BufferedString b)
		{
			return ((::System::Boolean(*)(::Sirenix::Serialization::BufferedString, ::Sirenix::Serialization::BufferedString))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::Sirenix::Serialization::BufferedString a, ::Sirenix::Serialization::BufferedString b)
		{
			return ((::System::Boolean(*)(::Sirenix::Serialization::BufferedString, ::Sirenix::Serialization::BufferedString))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_OP_INEQUALITY_OFFSET))(a, b);
		}
	};
}
