#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_HOLLOWCARDCOMBINEANIMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x82DD5A0)

namespace MoleMole
{
	inline static constexpr unsigned int HollowCardCombineAnimationConfig_TypeDefinitionIndex = 62877;

	class HollowCardCombineAnimationConfig : public ::System::Object
	{
	public:
		::System::String* BigCard; // 0x10
		::System::String* SmallCard; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCARDCOMBINEANIMATIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
