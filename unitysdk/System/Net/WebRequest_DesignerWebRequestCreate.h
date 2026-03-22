#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_WEBREQUEST_DESIGNERWEBREQUESTCREATE_CREATE_OFFSET UNITYSDK_OFFSET(0x197F73B0)
#define SYSTEM_NET_WEBREQUEST_DESIGNERWEBREQUESTCREATE__CTOR_OFFSET UNITYSDK_OFFSET(0x197F7070)

namespace System::Net
{
	inline static constexpr unsigned int WebRequest_DesignerWebRequestCreate_TypeDefinitionIndex = 3351;

	class WebRequest_DesignerWebRequestCreate : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_DESIGNERWEBREQUESTCREATE__CTOR_OFFSET))(this);
		}

		::System::Net::WebRequest* Create(::System::Uri* uri)
		{
			return ((::System::Net::WebRequest*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_DESIGNERWEBREQUESTCREATE_CREATE_OFFSET))(this, uri);
		}
	};
}
