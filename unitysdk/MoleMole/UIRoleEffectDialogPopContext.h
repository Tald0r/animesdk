#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_104EA16A1BE40F83;

#define MOLEMOLE_UIROLEEFFECTDIALOGPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB26BEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEffectDialogPopContext_TypeDefinitionIndex = 48503;

	class UIRoleEffectDialogPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_104EA16A1BE40F83* info; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTDIALOGPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
