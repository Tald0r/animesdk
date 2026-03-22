#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_50.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICAMPIDLELISTPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC912C90)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleListPopWindowControllerContext_TypeDefinitionIndex = 65136;

	class UICampIdleListPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_0A3761FE34514D6C_50 m_playType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLELISTPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
