#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

#define PARADOXNOTION_DESIGN_TAGFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A26CC00)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int TagFieldAttribute_TypeDefinitionIndex = 26555;

	class TagFieldAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_TAGFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
