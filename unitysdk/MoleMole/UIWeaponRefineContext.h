#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UIRoleEquipReplaceWidgetController; }

#define MOLEMOLE_UIWEAPONREFINECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x71E6270)

namespace MoleMole
{
	inline static constexpr unsigned int UIWeaponRefineContext_TypeDefinitionIndex = 41123;

	class UIWeaponRefineContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_D89CCC627A66D0AD* AvatarData; // 0x28
		::Class_1_0D6706375CDAAE8C* ItemDevelopData; // 0x30
		::MoleMole::UIRoleEquipReplaceWidgetController* equipReplaceWidget; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONREFINECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
