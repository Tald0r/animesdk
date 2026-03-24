#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISummerSelectEquipPopWindowController.h"

#define MOLEMOLE_UISUMMERSURFINGSELECTEQUIPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDF4DEB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerSurfingSelectEquipPopWindowController_TypeDefinitionIndex = 41199;

	class UISummerSurfingSelectEquipPopWindowController : public ::MoleMole::UISummerSelectEquipPopWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFINGSELECTEQUIPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
