#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVERALLOWPRIVATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DB4F00)
#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVERALLOWPRIVATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB4EF0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicObjectResolverAllowPrivate_TypeDefinitionIndex = 25723;

	class DynamicObjectResolverAllowPrivate : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicObjectResolverAllowPrivate** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicObjectResolverAllowPrivate**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x1F280);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVERALLOWPRIVATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVERALLOWPRIVATE__CCTOR_OFFSET))();
		}
	};
}
