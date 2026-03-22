#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_X509_X509BUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1AAF7E30)
#define MONO_SECURITY_X509_X509BUILDER_GETOID_OFFSET UNITYSDK_OFFSET(0x1AAF7A50)
#define MONO_SECURITY_X509_X509BUILDER_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1AAF7D00)
#define MONO_SECURITY_X509_X509BUILDER_SET_HASH_OFFSET UNITYSDK_OFFSET(0x1AAF7D10)
#define MONO_SECURITY_X509_X509BUILDER_SIGN_1_OFFSET UNITYSDK_OFFSET(0x1AAF8020)
#define MONO_SECURITY_X509_X509BUILDER_SIGN_2_OFFSET UNITYSDK_OFFSET(0x1AAF81A0)
#define MONO_SECURITY_X509_X509BUILDER_SIGN_OFFSET UNITYSDK_OFFSET(0x1AAF7D30)
#define MONO_SECURITY_X509_X509BUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF7A40)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Builder_TypeDefinitionIndex = 2294;

	class X509Builder : public ::System::Object
	{
	public:
		// static const ::System::String* defaultHash; // 0x0
		::System::String* hashName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509BUILDER__CTOR_OFFSET))(this);
		}

		::System::String* GetOid(::System::String* hashName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509BUILDER_GETOID_OFFSET))(this, hashName);
		}

		::System::String* get_Hash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509BUILDER_GET_HASH_OFFSET))(this);
		}

		::System::Void set_Hash(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509BUILDER_SET_HASH_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* Sign(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509BUILDER_SIGN_OFFSET))(this, aa);
		}

		::Il2CppArray<::System::Byte>* Build(::Mono::Security::ASN1* tbs, ::System::String* hashoid, ::Il2CppArray<::System::Byte>* signature)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::ASN1*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509BUILDER_BUILD_OFFSET))(this, tbs, hashoid, signature);
		}

		::Il2CppArray<::System::Byte>* Sign_1(::System::Security::Cryptography::RSA* key)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509BUILDER_SIGN_1_OFFSET))(this, key);
		}

		::Il2CppArray<::System::Byte>* Sign_2(::System::Security::Cryptography::DSA* key)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::DSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509BUILDER_SIGN_2_OFFSET))(this, key);
		}
	};
}
