#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_ISSUER_OFFSET UNITYSDK_OFFSET(0x1B0B8670)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B0B84D0)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_OID_OFFSET UNITYSDK_OFFSET(0x1B0B84C0)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_SERIAL_OFFSET UNITYSDK_OFFSET(0x1B0B8680)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_SUBJECTKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1B0B85A0)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1B0B8750)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B0B82C0)
#define MONO_SECURITY_PKCS7_RECIPIENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B82B0)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_RecipientInfo_TypeDefinitionIndex = 2280;

	class PKCS7_RecipientInfo : public ::System::Object
	{
	public:
		::System::String* _issuer; // 0x10
		::Il2CppArray<::System::Byte>* _key; // 0x18
		::Il2CppArray<::System::Byte>* _ski; // 0x20
		::Il2CppArray<::System::Byte>* _serial; // 0x28
		::System::String* _oid; // 0x30
		::System::Int32 _version; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1* data)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO__CTOR_1_OFFSET))(this, data);
		}

		::System::String* get_Oid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_OID_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_KEY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_SubjectKeyIdentifier()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_SUBJECTKEYIDENTIFIER_OFFSET))(this);
		}

		::System::String* get_Issuer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_ISSUER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Serial()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_SERIAL_OFFSET))(this);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_RECIPIENTINFO_GET_VERSION_OFFSET))(this);
		}
	};
}
