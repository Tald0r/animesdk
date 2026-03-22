#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_72D718364F0A8071.h"

class Class_2_D89CCC627A66D0AD;

#define MOLEMOLE_UIROLESKILLLEVELUPPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBEA88D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillLevelUpPopContext_TypeDefinitionIndex = 77429;

	class UIRoleSkillLevelUpPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_72D718364F0A8071 skill; // 0x28
		::Class_2_D89CCC627A66D0AD* avatar; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
