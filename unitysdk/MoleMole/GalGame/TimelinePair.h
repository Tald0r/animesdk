#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_TIMELINEPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x6E92DD0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TimelinePair_TypeDefinitionIndex = 40795;

	class TimelinePair : public ::System::Object
	{
	public:
		::System::String* TimelineKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TIMELINEPAIR__CTOR_OFFSET))(this);
		}
	};
}
