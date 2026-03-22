#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_ROLERARITYICONITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x8F9B0D0)

namespace MoleMole
{
	inline static constexpr unsigned int RoleRarityIconItemConfig_TypeDefinitionIndex = 79195;

	class RoleRarityIconItemConfig : public ::System::Object
	{
	public:
		::System::String* RaritySmallPath; // 0x10
		::System::String* RarityBigPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ROLERARITYICONITEMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
