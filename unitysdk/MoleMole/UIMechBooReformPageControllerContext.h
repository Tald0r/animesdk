#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9E803D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooReformPageControllerContext_TypeDefinitionIndex = 79152;

	class UIMechBooReformPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ScriptID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
