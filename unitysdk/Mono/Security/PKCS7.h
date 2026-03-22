#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509 { class X509Certificate; }
namespace System { class String; }

#define MONO_SECURITY_PKCS7_ALGORITHMIDENTIFIER_1_OFFSET UNITYSDK_OFFSET(0x1AE39B00)
#define MONO_SECURITY_PKCS7_ALGORITHMIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1AE399C0)
#define MONO_SECURITY_PKCS7_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE39820)
#define MONO_SECURITY_PKCS7_ISSUERANDSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x1AE39C30)
#define MONO_SECURITY_PKCS7__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE39810)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_TypeDefinitionIndex = 2275;

	class PKCS7 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7__CTOR_OFFSET))(this);
		}

		static ::Mono::Security::ASN1* Attribute(::System::String* oid, ::Mono::Security::ASN1* value)
		{
			return ((::Mono::Security::ASN1*(*)(::System::String*, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ATTRIBUTE_OFFSET))(oid, value);
		}

		static ::Mono::Security::ASN1* AlgorithmIdentifier(::System::String* oid)
		{
			return ((::Mono::Security::ASN1*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ALGORITHMIDENTIFIER_OFFSET))(oid);
		}

		static ::Mono::Security::ASN1* AlgorithmIdentifier_1(::System::String* oid, ::Mono::Security::ASN1* parameters)
		{
			return ((::Mono::Security::ASN1*(*)(::System::String*, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ALGORITHMIDENTIFIER_1_OFFSET))(oid, parameters);
		}

		static ::Mono::Security::ASN1* IssuerAndSerialNumber(::Mono::Security::X509::X509Certificate* x509)
		{
			return ((::Mono::Security::ASN1*(*)(::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ISSUERANDSERIALNUMBER_OFFSET))(x509);
		}
	};
}
