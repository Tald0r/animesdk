#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BUDDYDEPTHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x6FBA480)

namespace MoleMole
{
	inline static constexpr unsigned int BuddyDepthConfig_TypeDefinitionIndex = 43978;

	class BuddyDepthConfig : public ::System::Object
	{
	public:
		::System::Single MaxRadius; // 0x10
		::System::Single End; // 0x14
		::System::Single Start; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYDEPTHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
