#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_DYNAMICGENERICRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B06FD40)
#define UTF8JSON_RESOLVERS_DYNAMICGENERICRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B06FD30)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int DynamicGenericResolver_TypeDefinitionIndex = 81767;

	class DynamicGenericResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolver_TypeDefinitionIndex)->GetStaticField(0x46F20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_DYNAMICGENERICRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_DYNAMICGENERICRESOLVER__CCTOR_OFFSET))();
		}
	};
}
