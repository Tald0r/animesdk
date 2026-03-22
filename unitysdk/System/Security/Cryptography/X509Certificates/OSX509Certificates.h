#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/OSX509Certificates_SecTrustResult.h"

namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_CFARRAYCREATE_OFFSET UNITYSDK_OFFSET(0x197FBD00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_CFDATACREATE_OFFSET UNITYSDK_OFFSET(0x197FBB70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_CFRELEASE_OFFSET UNITYSDK_OFFSET(0x197FBC80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_CFRETAIN_OFFSET UNITYSDK_OFFSET(0x197FBC00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_CFSTRINGCREATEWITHCHARACTERS_OFFSET UNITYSDK_OFFSET(0x197FBAD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_FROMINTPTRS_OFFSET UNITYSDK_OFFSET(0x197FBE50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_GETCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x197FBF00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_MAKECFDATA_OFFSET UNITYSDK_OFFSET(0x197FBDA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_SECCERTIFICATECREATEWITHDATA_OFFSET UNITYSDK_OFFSET(0x197FB800)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_SECPOLICYCREATESSL_OFFSET UNITYSDK_OFFSET(0x197FB9B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_SECTRUSTCREATEWITHCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x197FB890)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_SECTRUSTEVALUATE_OFFSET UNITYSDK_OFFSET(0x197FBA40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_SECTRUSTSETANCHORCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x197FB920)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_TRUSTEVALUATESSL_OFFSET UNITYSDK_OFFSET(0x197FC1A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES__TRUSTEVALUATESSL_OFFSET UNITYSDK_OFFSET(0x197FC210)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int OSX509Certificates_TypeDefinitionIndex = 3183;

	class OSX509Certificates : public ::System::Object
	{
	public:
		// static const ::System::String* SecurityLibrary; // 0x0
		// static const ::System::String* CoreFoundationLibrary; // 0x0

		static ::System::IntPtr SecCertificateCreateWithData(::System::IntPtr allocator, ::System::IntPtr nsdataRef)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_SECCERTIFICATECREATEWITHDATA_OFFSET))(allocator, nsdataRef);
		}

		static ::System::Int32 SecTrustCreateWithCertificates(::System::IntPtr certOrCertArray, ::System::IntPtr policies, ::System::IntPtr& sectrustref)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_SECTRUSTCREATEWITHCERTIFICATES_OFFSET))(certOrCertArray, policies, sectrustref);
		}

		static ::System::Int32 SecTrustSetAnchorCertificates(::System::IntPtr trust, ::System::IntPtr anchorCertificates)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_SECTRUSTSETANCHORCERTIFICATES_OFFSET))(trust, anchorCertificates);
		}

		static ::System::IntPtr SecPolicyCreateSSL(::System::Boolean server, ::System::IntPtr cfStringHostname)
		{
			return ((::System::IntPtr(*)(::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_SECPOLICYCREATESSL_OFFSET))(server, cfStringHostname);
		}

		static ::System::Int32 SecTrustEvaluate(::System::IntPtr secTrustRef, ::System::Security::Cryptography::X509Certificates::OSX509Certificates_SecTrustResult& secTrustResultTime)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Security::Cryptography::X509Certificates::OSX509Certificates_SecTrustResult&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_SECTRUSTEVALUATE_OFFSET))(secTrustRef, secTrustResultTime);
		}

		static ::System::IntPtr CFStringCreateWithCharacters(::System::IntPtr allocator, ::System::String* str, ::System::IntPtr count)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_CFSTRINGCREATEWITHCHARACTERS_OFFSET))(allocator, str, count);
		}

		static ::System::IntPtr CFDataCreate(::System::IntPtr allocator, ::System::Byte* bytes, ::System::IntPtr length)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Byte*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_CFDATACREATE_OFFSET))(allocator, bytes, length);
		}

		static ::System::Void CFRetain(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_CFRETAIN_OFFSET))(handle);
		}

		static ::System::Void CFRelease(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_CFRELEASE_OFFSET))(handle);
		}

		static ::System::IntPtr CFArrayCreate(::System::IntPtr allocator, ::System::IntPtr values, ::System::IntPtr numValues, ::System::IntPtr callbacks)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_CFARRAYCREATE_OFFSET))(allocator, values, numValues, callbacks);
		}

		static ::System::IntPtr MakeCFData(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_MAKECFDATA_OFFSET))(data);
		}

		static ::System::IntPtr FromIntPtrs(::Il2CppArray<::System::IntPtr>* values)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_FROMINTPTRS_OFFSET))(values);
		}

		static ::System::IntPtr GetCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate)
		{
			return ((::System::IntPtr(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_GETCERTIFICATE_OFFSET))(certificate);
		}

		static ::System::Security::Cryptography::X509Certificates::OSX509Certificates_SecTrustResult TrustEvaluateSsl(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* anchors, ::System::String* host)
		{
			return ((::System::Security::Cryptography::X509Certificates::OSX509Certificates_SecTrustResult(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES_TRUSTEVALUATESSL_OFFSET))(certificates, anchors, host);
		}

		static ::System::Security::Cryptography::X509Certificates::OSX509Certificates_SecTrustResult _TrustEvaluateSsl(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* anchors, ::System::String* hostName)
		{
			return ((::System::Security::Cryptography::X509Certificates::OSX509Certificates_SecTrustResult(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_OSX509CERTIFICATES__TRUSTEVALUATESSL_OFFSET))(certificates, anchors, hostName);
		}
	};
}
