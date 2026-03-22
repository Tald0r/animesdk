#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_LINQ_ERROR_ARGUMENTNULL_OFFSET UNITYSDK_OFFSET(0x1AE8CF20)
#define SYSTEM_LINQ_ERROR_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1AE8CFE0)
#define SYSTEM_LINQ_ERROR_MORETHANONEELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE8D0B0)
#define SYSTEM_LINQ_ERROR_MORETHANONEMATCH_OFFSET UNITYSDK_OFFSET(0x1AE8D150)
#define SYSTEM_LINQ_ERROR_NOELEMENTS_OFFSET UNITYSDK_OFFSET(0x1AE8D1F0)
#define SYSTEM_LINQ_ERROR_NOMATCH_OFFSET UNITYSDK_OFFSET(0x1AE8D290)
#define SYSTEM_LINQ_ERROR_NOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1AE8D330)

namespace System::Linq
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 4341;

	class Error : public ::System::Object
	{
	public:
		static ::System::Exception* ArgumentNull(::System::String* s)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_ARGUMENTNULL_OFFSET))(s);
		}

		static ::System::Exception* ArgumentOutOfRange(::System::String* s)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_ARGUMENTOUTOFRANGE_OFFSET))(s);
		}

		static ::System::Exception* MoreThanOneElement()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_MORETHANONEELEMENT_OFFSET))();
		}

		static ::System::Exception* MoreThanOneMatch()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_MORETHANONEMATCH_OFFSET))();
		}

		static ::System::Exception* NoElements()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_NOELEMENTS_OFFSET))();
		}

		static ::System::Exception* NoMatch()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_NOMATCH_OFFSET))();
		}

		static ::System::Exception* NotSupported()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_NOTSUPPORTED_OFFSET))();
		}
	};
}
