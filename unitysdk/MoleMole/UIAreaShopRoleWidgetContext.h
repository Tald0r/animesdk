#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_15CCFE77B9E12299;

#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xCC29E60)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaShopRoleWidgetContext_TypeDefinitionIndex = 77420;

	class UIAreaShopRoleWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_15CCFE77B9E12299* DBattleFighter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
