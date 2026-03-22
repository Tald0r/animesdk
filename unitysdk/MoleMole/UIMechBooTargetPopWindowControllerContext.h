#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x7D53560)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooTargetPopWindowControllerContext_TypeDefinitionIndex = 78772;

	class UIMechBooTargetPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ScriptID; // 0x28
		::System::Boolean HideMaskClose; // 0x2C
		::System::Boolean ShowOkBtn; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
