#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

#define PARADOXNOTION_DESIGN_TAGFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8345B0)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int TagFieldAttribute_TypeDefinitionIndex = 26045;

	class TagFieldAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_TAGFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
