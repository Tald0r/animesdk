#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMECHBOOREFORMITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x94508F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooReformItemWidgetControllerContext_TypeDefinitionIndex = 56765;

	class UIMechBooReformItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ComponentID; // 0x28
		::System::Int32 ScriptID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
