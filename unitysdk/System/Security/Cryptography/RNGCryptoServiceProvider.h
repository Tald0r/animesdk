#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RandomNumberGenerator.h"

namespace System { class Object; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_CHECK_OFFSET UNITYSDK_OFFSET(0x188B9AD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188B9D80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x188B9CE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x188B95C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_GETNONZEROBYTES_OFFSET UNITYSDK_OFFSET(0x188B9B40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGCLOSE_OFFSET UNITYSDK_OFFSET(0x188B9B30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGGETBYTES_OFFSET UNITYSDK_OFFSET(0x188B9B20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGINITIALIZE_OFFSET UNITYSDK_OFFSET(0x188B9A00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGOPEN_OFFSET UNITYSDK_OFFSET(0x188B9930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x188B9920)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x188B9940)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RNGCryptoServiceProvider_TypeDefinitionIndex = 1119;

	class RNGCryptoServiceProvider : public ::System::Security::Cryptography::RandomNumberGenerator
	{
	public:
		static ::System::Object** StaticGet__lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RNGCryptoServiceProvider_TypeDefinitionIndex)->GetStaticField(0x720);
		}
		::System::IntPtr _handle; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void Check()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_CHECK_OFFSET))(this);
		}

		static ::System::Boolean RngOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGOPEN_OFFSET))();
		}

		static ::System::IntPtr RngInitialize(::Il2CppArray<::System::Byte>* seed)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGINITIALIZE_OFFSET))(seed);
		}

		static ::System::IntPtr RngGetBytes(::System::IntPtr handle, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGGETBYTES_OFFSET))(handle, data);
		}

		static ::System::Void RngClose(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGCLOSE_OFFSET))(handle);
		}

		::System::Void GetBytes(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_GETBYTES_OFFSET))(this, data);
		}

		::System::Void GetNonZeroBytes(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_GETNONZEROBYTES_OFFSET))(this, data);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
