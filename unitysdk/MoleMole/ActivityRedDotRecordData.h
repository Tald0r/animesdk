#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_ACTIVITYREDDOTRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB497950)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityRedDotRecordData_TypeDefinitionIndex = 75608;

	class ActivityRedDotRecordData : public ::System::Object
	{
	public:
		::System::UInt16 type; // 0x10
		::System::UInt16 version; // 0x12
		::System::String* content; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYREDDOTRECORDDATA__CTOR_OFFSET))(this);
		}
	};
}
