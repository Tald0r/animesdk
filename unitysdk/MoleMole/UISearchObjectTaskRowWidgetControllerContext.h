#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA7308C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectTaskRowWidgetControllerContext_TypeDefinitionIndex = 57888;

	class UISearchObjectTaskRowWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsQADone; // 0x28
		::System::Boolean IsDone; // 0x29
		::System::Int32 TargetID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
