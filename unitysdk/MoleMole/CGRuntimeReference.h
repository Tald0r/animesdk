#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TrackBindType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TimelineBindingType.h"

namespace System { class String; }

#define MOLEMOLE_CGRUNTIMEREFERENCE_GETBINDTYPE_OFFSET UNITYSDK_OFFSET(0x6292FC0)
#define MOLEMOLE_CGRUNTIMEREFERENCE_GET_ISPART_OFFSET UNITYSDK_OFFSET(0x6292F50)
#define MOLEMOLE_CGRUNTIMEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x6293050)

namespace MoleMole
{
	inline static constexpr unsigned int CGRuntimeReference_TypeDefinitionIndex = 67465;

	class CGRuntimeReference : public ::System::Object
	{
	public:
		::System::String* RelatePath; // 0x10
		::System::String* trackGuid; // 0x18
		::MoleMole::TrackBindType bindType; // 0x20
		::TimelineBindingType BindType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEREFERENCE_GET_ISPART_OFFSET))(this);
		}

		::TimelineBindingType GetBindType()
		{
			return ((::TimelineBindingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEREFERENCE_GETBINDTYPE_OFFSET))(this);
		}
	};
}
