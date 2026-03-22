#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_ADDMESSAGES_OFFSET UNITYSDK_OFFSET(0x90BDC0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_ADDMESSAGE_OFFSET UNITYSDK_OFFSET(0x90BD40)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_ASSERTSUCCESSWITHOUTWARNINGS_OFFSET UNITYSDK_OFFSET(0x90BFB0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_ASSERTSUCCESS_OFFSET UNITYSDK_OFFSET(0x90BF70)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_FAIL_OFFSET UNITYSDK_OFFSET(0x1A1B9760)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_GET_ASEXCEPTION_OFFSET UNITYSDK_OFFSET(0x90C050)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_GET_FAILED_OFFSET UNITYSDK_OFFSET(0x3279D0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_GET_FORMATTEDMESSAGES_OFFSET UNITYSDK_OFFSET(0x90C0A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_GET_HASWARNINGS_OFFSET UNITYSDK_OFFSET(0x90BF20)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_GET_RAWMESSAGES_OFFSET UNITYSDK_OFFSET(0x90C060)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_GET_SUCCEEDED_OFFSET UNITYSDK_OFFSET(0x2D71A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_MERGE_OFFSET UNITYSDK_OFFSET(0x90BE70)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1A1B99F0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x90C0A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_WARN_OFFSET UNITYSDK_OFFSET(0x1A1B96E0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1B9FB0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsResult_TypeDefinitionIndex = 26657;

	struct alignas(8) fsResult
	{
		static ::ParadoxNotion::Serialization::FullSerializer::fsResult* StaticGet_Success()
		{
			return (::ParadoxNotion::Serialization::FullSerializer::fsResult*)Il2CppClass::FromTypeDefinitionIndex(fsResult_TypeDefinitionIndex)->GetStaticField(0x1E480);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_EmptyStringArray()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(fsResult_TypeDefinitionIndex)->GetStaticField(0x1E490);
		}
		::System::Boolean _success; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _messages; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT__CCTOR_OFFSET))();
		}

		static ::ParadoxNotion::Serialization::FullSerializer::fsResult Warn(::System::String* warning)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_WARN_OFFSET))(warning);
		}

		static ::ParadoxNotion::Serialization::FullSerializer::fsResult Fail(::System::String* warning)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_FAIL_OFFSET))(warning);
		}

		::System::Void AddMessage(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_ADDMESSAGE_OFFSET))(this, message);
		}

		::System::Void AddMessages(::ParadoxNotion::Serialization::FullSerializer::fsResult result)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsResult))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_ADDMESSAGES_OFFSET))(this, result);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult Merge(::ParadoxNotion::Serialization::FullSerializer::fsResult other)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsResult))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_MERGE_OFFSET))(this, other);
		}

		static ::ParadoxNotion::Serialization::FullSerializer::fsResult op_Addition(::ParadoxNotion::Serialization::FullSerializer::fsResult a, ::ParadoxNotion::Serialization::FullSerializer::fsResult b)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::ParadoxNotion::Serialization::FullSerializer::fsResult, ::ParadoxNotion::Serialization::FullSerializer::fsResult))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_OP_ADDITION_OFFSET))(a, b);
		}

		::System::Boolean get_Failed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_GET_FAILED_OFFSET))(this);
		}

		::System::Boolean get_Succeeded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_GET_SUCCEEDED_OFFSET))(this);
		}

		::System::Boolean get_HasWarnings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_GET_HASWARNINGS_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult AssertSuccess()
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_ASSERTSUCCESS_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult AssertSuccessWithoutWarnings()
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_ASSERTSUCCESSWITHOUTWARNINGS_OFFSET))(this);
		}

		::System::Exception* get_AsException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_GET_ASEXCEPTION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* get_RawMessages()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_GET_RAWMESSAGES_OFFSET))(this);
		}

		::System::String* get_FormattedMessages()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_GET_FORMATTEDMESSAGES_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSRESULT_TOSTRING_OFFSET))(this);
		}
	};
}
