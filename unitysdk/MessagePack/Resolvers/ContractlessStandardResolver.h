#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_CONTRACTLESSSTANDARDRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A487D20)
#define MESSAGEPACK_RESOLVERS_CONTRACTLESSSTANDARDRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A487E90)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int ContractlessStandardResolver_TypeDefinitionIndex = 27185;

	class ContractlessStandardResolver : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(ContractlessStandardResolver_TypeDefinitionIndex)->GetStaticField(0x1FD70);
		}
		static ::Il2CppArray<::MessagePack::IFormatterResolver*>** StaticGet_Resolvers()
		{
			return (::Il2CppArray<::MessagePack::IFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(ContractlessStandardResolver_TypeDefinitionIndex)->GetStaticField(0x1FD78);
		}
		static ::MessagePack::Resolvers::ContractlessStandardResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::ContractlessStandardResolver**)Il2CppClass::FromTypeDefinitionIndex(ContractlessStandardResolver_TypeDefinitionIndex)->GetStaticField(0x1FD80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_CONTRACTLESSSTANDARDRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_CONTRACTLESSSTANDARDRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
