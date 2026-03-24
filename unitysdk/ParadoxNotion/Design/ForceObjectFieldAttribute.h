#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

#define PARADOXNOTION_DESIGN_FORCEOBJECTFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48EC40)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int ForceObjectFieldAttribute_TypeDefinitionIndex = 26671;

	class ForceObjectFieldAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_FORCEOBJECTFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
