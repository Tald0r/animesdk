#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_BUILTINRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFF3190)
#define UTF8JSON_RESOLVERS_BUILTINRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF3180)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int BuiltinResolver_TypeDefinitionIndex = 81761;

	class BuiltinResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(BuiltinResolver_TypeDefinitionIndex)->GetStaticField(0x46F00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_BUILTINRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_BUILTINRESOLVER__CCTOR_OFFSET))();
		}
	};
}
