#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_DESIGN_NODESHOWPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A56DF40)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int NodeShowPropertyAttribute_TypeDefinitionIndex = 27610;

	class NodeShowPropertyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_NODESHOWPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
