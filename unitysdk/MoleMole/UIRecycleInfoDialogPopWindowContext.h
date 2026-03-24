#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRECYCLEINFODIALOGPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A8FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleInfoDialogPopWindowContext_TypeDefinitionIndex = 50632;

	class UIRecycleInfoDialogPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean isWeapon; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEINFODIALOGPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
