#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define NPCCROWD_AVATAR_ACCESSORYIDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x6A01200)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int AccessoryIdAttribute_TypeDefinitionIndex = 80917;

	class AccessoryIdAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_ACCESSORYIDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
