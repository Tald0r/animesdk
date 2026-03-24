#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSecurity_CollisionResistantHasher_1.h"

#define MESSAGEPACK_MESSAGEPACKSECURITY_UINT64EQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1C5720)
#define MESSAGEPACK_MESSAGEPACKSECURITY_UINT64EQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1C57E0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_UINT64EQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C5780)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_UInt64EqualityComparer_TypeDefinitionIndex = 26503;

	class MessagePackSecurity_UInt64EqualityComparer : public ::MessagePack::MessagePackSecurity_CollisionResistantHasher_1<::System::UInt64>
	{
	public:
		static ::MessagePack::MessagePackSecurity_UInt64EqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_UInt64EqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_UInt64EqualityComparer_TypeDefinitionIndex)->GetStaticField(0x20200);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_UINT64EQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_UINT64EQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::UInt64 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_UINT64EQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, value);
		}
	};
}
