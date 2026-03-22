#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class Encoding; }

#define UTF8JSON_INTERNAL_STRINGENCODING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0A3CB0)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int StringEncoding_TypeDefinitionIndex = 81899;

	class StringEncoding : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_UTF8()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(StringEncoding_TypeDefinitionIndex)->GetStaticField(0x46A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_STRINGENCODING__CCTOR_OFFSET))();
		}
	};
}
