#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_DESIGN_DONOTLISTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5D0F0)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int DoNotListAttribute_TypeDefinitionIndex = 25235;

	class DoNotListAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_DONOTLISTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
