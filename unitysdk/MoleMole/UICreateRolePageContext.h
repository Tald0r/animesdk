#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_7505FA4796F2EED2;

#define MOLEMOLE_UICREATEROLEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xACFD6A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICreateRolePageContext_TypeDefinitionIndex = 42780;

	class UICreateRolePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_7505FA4796F2EED2* procedureConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
