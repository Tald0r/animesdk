#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_D665932EA6EA9262;

#define MOLEMOLE_UICREATEROLEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB2C3ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UICreateRolePageContext_TypeDefinitionIndex = 73653;

	class UICreateRolePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_D665932EA6EA9262* procedureConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
