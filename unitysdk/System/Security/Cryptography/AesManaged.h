#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/Aes.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"

namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class RijndaelManaged; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_1_OFFSET UNITYSDK_OFFSET(0x1A92C9A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x1A92C940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_1_OFFSET UNITYSDK_OFFSET(0x1A92CC20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x1A92CBC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A92CE40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x1A92CF40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x1A92CF80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_FEEDBACKSIZE_OFFSET UNITYSDK_OFFSET(0x1A92C620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_IV_OFFSET UNITYSDK_OFFSET(0x1A92C640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1A92C600)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1A92C6E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1A92C7A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1A92C8A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_IV_OFFSET UNITYSDK_OFFSET(0x1A92C6C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1A92C780)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1A92C760)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1A92C7C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1A92C8C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A92C410)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AesManaged_TypeDefinitionIndex = 4338;

	class AesManaged : public ::System::Security::Cryptography::Aes
	{
	public:
		::System::Security::Cryptography::RijndaelManaged* m_rijndael; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED__CTOR_OFFSET))(this);
		}

		::System::Int32 get_FeedbackSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_FEEDBACKSIZE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_IV()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_IV_OFFSET))(this);
		}

		::System::Void set_IV(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_IV_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEY_OFFSET))(this, value);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void set_KeySize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEYSIZE_OFFSET))(this, value);
		}

		::System::Security::Cryptography::CipherMode get_Mode()
		{
			return ((::System::Security::Cryptography::CipherMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::System::Security::Cryptography::CipherMode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CipherMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_MODE_OFFSET))(this, value);
		}

		::System::Security::Cryptography::PaddingMode get_Padding()
		{
			return ((::System::Security::Cryptography::PaddingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_Padding(::System::Security::Cryptography::PaddingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::PaddingMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_PADDING_OFFSET))(this, value);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor_1(::Il2CppArray<::System::Byte>* key, ::Il2CppArray<::System::Byte>* iv)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_1_OFFSET))(this, key, iv);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor_1(::Il2CppArray<::System::Byte>* key, ::Il2CppArray<::System::Byte>* iv)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_1_OFFSET))(this, key, iv);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEIV_OFFSET))(this);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEKEY_OFFSET))(this);
		}
	};
}
