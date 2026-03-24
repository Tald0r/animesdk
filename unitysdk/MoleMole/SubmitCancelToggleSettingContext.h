#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_SUBMITCANCELTOGGLESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB702450)

namespace MoleMole
{
	inline static constexpr unsigned int SubmitCancelToggleSettingContext_TypeDefinitionIndex = 43634;

	class SubmitCancelToggleSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::Boolean IsToggle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBMITCANCELTOGGLESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
