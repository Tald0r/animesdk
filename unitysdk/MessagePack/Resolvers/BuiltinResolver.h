#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_BUILTINRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x191624A0)
#define MESSAGEPACK_RESOLVERS_BUILTINRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x19162490)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int BuiltinResolver_TypeDefinitionIndex = 25788;

	class BuiltinResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::BuiltinResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::BuiltinResolver**)Il2CppClass::FromTypeDefinitionIndex(BuiltinResolver_TypeDefinitionIndex)->GetStaticField(0x1E780);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_BUILTINRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_BUILTINRESOLVER__CCTOR_OFFSET))();
		}
	};
}
