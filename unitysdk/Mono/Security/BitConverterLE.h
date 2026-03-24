#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1B450390)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1B4503B0)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1B4503D0)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_4_OFFSET UNITYSDK_OFFSET(0x1B4503F0)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_5_OFFSET UNITYSDK_OFFSET(0x1B450410)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_6_OFFSET UNITYSDK_OFFSET(0x1B450430)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_7_OFFSET UNITYSDK_OFFSET(0x1B450450)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_8_OFFSET UNITYSDK_OFFSET(0x1B450470)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_9_OFFSET UNITYSDK_OFFSET(0x1B450490)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1B450340)
#define MONO_SECURITY_BITCONVERTERLE_GETUINTBYTES_OFFSET UNITYSDK_OFFSET(0x1B44FFA0)
#define MONO_SECURITY_BITCONVERTERLE_GETULONGBYTES_OFFSET UNITYSDK_OFFSET(0x1B4500F0)
#define MONO_SECURITY_BITCONVERTERLE_GETUSHORTBYTES_OFFSET UNITYSDK_OFFSET(0x1B44FEF0)
#define MONO_SECURITY_BITCONVERTERLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1B450810)
#define MONO_SECURITY_BITCONVERTERLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x1B450850)
#define MONO_SECURITY_BITCONVERTERLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1B4509D0)
#define MONO_SECURITY_BITCONVERTERLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x1B450880)
#define MONO_SECURITY_BITCONVERTERLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x1B4508B0)
#define MONO_SECURITY_BITCONVERTERLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x1B4508E0)
#define MONO_SECURITY_BITCONVERTERLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1B4509A0)
#define MONO_SECURITY_BITCONVERTERLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1B450910)
#define MONO_SECURITY_BITCONVERTERLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1B450940)
#define MONO_SECURITY_BITCONVERTERLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1B450970)
#define MONO_SECURITY_BITCONVERTERLE_UINTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1B450550)
#define MONO_SECURITY_BITCONVERTERLE_ULONGFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1B450690)
#define MONO_SECURITY_BITCONVERTERLE_USHORTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1B4504B0)
#define MONO_SECURITY_BITCONVERTERLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44FEE0)

namespace Mono::Security
{
	inline static constexpr unsigned int BitConverterLE_TypeDefinitionIndex = 2274;

	class BitConverterLE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* GetUShortBytes(::System::Byte* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETUSHORTBYTES_OFFSET))(bytes);
		}

		static ::Il2CppArray<::System::Byte>* GetUIntBytes(::System::Byte* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETUINTBYTES_OFFSET))(bytes);
		}

		static ::Il2CppArray<::System::Byte>* GetULongBytes(::System::Byte* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETULONGBYTES_OFFSET))(bytes);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes(::System::Boolean value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_1(::System::Char value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_1_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_2(::System::Int16 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int16))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_2_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_3(::System::Int32 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_3_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_4(::System::Int64 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_4_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_5(::System::UInt16 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_5_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_6(::System::UInt32 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_6_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_7(::System::UInt64 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_7_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_8(::System::Single value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Single))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_8_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_9(::System::Double value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Double))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_9_OFFSET))(value);
		}

		static ::System::Void UShortFromBytes(::System::Byte* dst, ::Il2CppArray<::System::Byte>* src, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::System::Byte*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_USHORTFROMBYTES_OFFSET))(dst, src, startIndex);
		}

		static ::System::Void UIntFromBytes(::System::Byte* dst, ::Il2CppArray<::System::Byte>* src, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::System::Byte*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_UINTFROMBYTES_OFFSET))(dst, src, startIndex);
		}

		static ::System::Void ULongFromBytes(::System::Byte* dst, ::Il2CppArray<::System::Byte>* src, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::System::Byte*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_ULONGFROMBYTES_OFFSET))(dst, src, startIndex);
		}

		static ::System::Boolean ToBoolean(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOBOOLEAN_OFFSET))(value, startIndex);
		}

		static ::System::Char ToChar(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Char(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOCHAR_OFFSET))(value, startIndex);
		}

		static ::System::Int16 ToInt16(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Int16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOINT16_OFFSET))(value, startIndex);
		}

		static ::System::Int32 ToInt32(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOINT32_OFFSET))(value, startIndex);
		}

		static ::System::Int64 ToInt64(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOINT64_OFFSET))(value, startIndex);
		}

		static ::System::UInt16 ToUInt16(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOUINT16_OFFSET))(value, startIndex);
		}

		static ::System::UInt32 ToUInt32(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOUINT32_OFFSET))(value, startIndex);
		}

		static ::System::UInt64 ToUInt64(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOUINT64_OFFSET))(value, startIndex);
		}

		static ::System::Single ToSingle(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOSINGLE_OFFSET))(value, startIndex);
		}

		static ::System::Double ToDouble(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Double(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TODOUBLE_OFFSET))(value, startIndex);
		}
	};
}
