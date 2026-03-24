#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_URLUTIL_GETLOCALPROTOCOL_OFFSET UNITYSDK_OFFSET(0x199A4C00)
#define FOUNDATION_URLUTIL_ISWEBURL_OFFSET UNITYSDK_OFFSET(0x199A4AF0)
#define FOUNDATION_URLUTIL_PARSEHOSTFROMDOMAIN_OFFSET UNITYSDK_OFFSET(0x199A4710)

namespace Foundation
{
	inline static constexpr unsigned int UrlUtil_TypeDefinitionIndex = 8124;

	class UrlUtil : public ::System::Object
	{
	public:
		static ::System::String* ParseHostFromDomain(::System::String* domain)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_URLUTIL_PARSEHOSTFROMDOMAIN_OFFSET))(domain);
		}

		static ::System::Boolean IsWebUrl(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_URLUTIL_ISWEBURL_OFFSET))(path);
		}

		static ::System::String* GetLocalProtocol()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_URLUTIL_GETLOCALPROTOCOL_OFFSET))();
		}
	};
}
