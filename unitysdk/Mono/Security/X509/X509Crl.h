#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509Crl_X509CrlEntry; }
namespace Mono::Security::X509 { class X509ExtensionCollection; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_X509_X509CRL_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AD5B600)
#define MONO_SECURITY_X509_X509CRL_CREATEFROMFILE_OFFSET UNITYSDK_OFFSET(0x1AD5BE40)
#define MONO_SECURITY_X509_X509CRL_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1AD5B530)
#define MONO_SECURITY_X509_X509CRL_GETCRLENTRY_1_OFFSET UNITYSDK_OFFSET(0x1AD5AEA0)
#define MONO_SECURITY_X509_X509CRL_GETCRLENTRY_OFFSET UNITYSDK_OFFSET(0x1AD5B650)
#define MONO_SECURITY_X509_X509CRL_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x1AD5ADD0)
#define MONO_SECURITY_X509_X509CRL_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1AD5B010)
#define MONO_SECURITY_X509_X509CRL_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1AD5B020)
#define MONO_SECURITY_X509_X509CRL_GET_ISCURRENT_OFFSET UNITYSDK_OFFSET(0x1AD5B430)
#define MONO_SECURITY_X509_X509CRL_GET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1AD5B240)
#define MONO_SECURITY_X509_X509CRL_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1AD5AE90)
#define MONO_SECURITY_X509_X509CRL_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AD5AE00)
#define MONO_SECURITY_X509_X509CRL_GET_NEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD5B250)
#define MONO_SECURITY_X509_X509CRL_GET_RAWDATA_OFFSET UNITYSDK_OFFSET(0x1AD5B350)
#define MONO_SECURITY_X509_X509CRL_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x1AD5B270)
#define MONO_SECURITY_X509_X509CRL_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x1AD5B280)
#define MONO_SECURITY_X509_X509CRL_GET_THISUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD5B260)
#define MONO_SECURITY_X509_X509CRL_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1AD5B420)
#define MONO_SECURITY_X509_X509CRL_PARSE_OFFSET UNITYSDK_OFFSET(0x1AD5A7E0)
#define MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_1_OFFSET UNITYSDK_OFFSET(0x1AD5B960)
#define MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_2_OFFSET UNITYSDK_OFFSET(0x1AD5BBD0)
#define MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_3_OFFSET UNITYSDK_OFFSET(0x1AD5BD20)
#define MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1AD5B6D0)
#define MONO_SECURITY_X509_X509CRL_WASCURRENT_OFFSET UNITYSDK_OFFSET(0x1AD5B4E0)
#define MONO_SECURITY_X509_X509CRL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD5A6B0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Crl_TypeDefinitionIndex = 2295;

	class X509Crl : public ::System::Object
	{
	public:
		::Mono::Security::X509::X509ExtensionCollection* extensions; // 0x10
		::Il2CppArray<::System::Byte>* signature; // 0x18
		::System::Collections::ArrayList* entries; // 0x20
		::System::String* issuer; // 0x28
		::Il2CppArray<::System::Byte>* encoded; // 0x30
		::Il2CppArray<::System::Byte>* hash_value; // 0x38
		::System::String* signatureOID; // 0x40
		::System::DateTime thisUpdate; // 0x48
		::System::DateTime nextUpdate; // 0x50
		::System::Byte version; // 0x58

		::System::Void _ctor(::Il2CppArray<::System::Byte>* crl)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL__CTOR_OFFSET))(this, crl);
		}

		::System::Void Parse(::Il2CppArray<::System::Byte>* crl)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_PARSE_OFFSET))(this, crl);
		}

		::System::Collections::ArrayList* get_Entries()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_ENTRIES_OFFSET))(this);
		}

		::Mono::Security::X509::X509Crl_X509CrlEntry* get_Item(::System::Int32 index)
		{
			return ((::Mono::Security::X509::X509Crl_X509CrlEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_ITEM_OFFSET))(this, index);
		}

		::Mono::Security::X509::X509Crl_X509CrlEntry* get_Item_1(::Il2CppArray<::System::Byte>* serialNumber)
		{
			return ((::Mono::Security::X509::X509Crl_X509CrlEntry*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_ITEM_1_OFFSET))(this, serialNumber);
		}

		::Mono::Security::X509::X509ExtensionCollection* get_Extensions()
		{
			return ((::Mono::Security::X509::X509ExtensionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_EXTENSIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Hash()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_HASH_OFFSET))(this);
		}

		::System::String* get_IssuerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_ISSUERNAME_OFFSET))(this);
		}

		::System::DateTime get_NextUpdate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_NEXTUPDATE_OFFSET))(this);
		}

		::System::DateTime get_ThisUpdate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_THISUPDATE_OFFSET))(this);
		}

		::System::String* get_SignatureAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_SIGNATUREALGORITHM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Signature()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_SIGNATURE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_RawData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_RAWDATA_OFFSET))(this);
		}

		::System::Byte get_Version()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_VERSION_OFFSET))(this);
		}

		::System::Boolean get_IsCurrent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_ISCURRENT_OFFSET))(this);
		}

		::System::Boolean WasCurrent(::System::DateTime instant)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_WASCURRENT_OFFSET))(this, instant);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GETBYTES_OFFSET))(this);
		}

		::System::Boolean Compare(::Il2CppArray<::System::Byte>* array1, ::Il2CppArray<::System::Byte>* array2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_COMPARE_OFFSET))(this, array1, array2);
		}

		::Mono::Security::X509::X509Crl_X509CrlEntry* GetCrlEntry(::Mono::Security::X509::X509Certificate* x509)
		{
			return ((::Mono::Security::X509::X509Crl_X509CrlEntry*(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GETCRLENTRY_OFFSET))(this, x509);
		}

		::Mono::Security::X509::X509Crl_X509CrlEntry* GetCrlEntry_1(::Il2CppArray<::System::Byte>* serialNumber)
		{
			return ((::Mono::Security::X509::X509Crl_X509CrlEntry*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GETCRLENTRY_1_OFFSET))(this, serialNumber);
		}

		::System::Boolean VerifySignature(::Mono::Security::X509::X509Certificate* x509)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_OFFSET))(this, x509);
		}

		::System::Boolean VerifySignature_1(::System::Security::Cryptography::DSA* dsa)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::DSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_1_OFFSET))(this, dsa);
		}

		::System::Boolean VerifySignature_2(::System::Security::Cryptography::RSA* rsa)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_2_OFFSET))(this, rsa);
		}

		::System::Boolean VerifySignature_3(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_3_OFFSET))(this, aa);
		}

		static ::Mono::Security::X509::X509Crl* CreateFromFile(::System::String* filename)
		{
			return ((::Mono::Security::X509::X509Crl*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_CREATEFROMFILE_OFFSET))(filename);
		}
	};
}
