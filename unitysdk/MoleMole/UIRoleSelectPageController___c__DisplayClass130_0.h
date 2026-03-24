#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_7;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIRoleSelectPageController; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS130_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA2452D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS130_0__PROCESSUIAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0xA2452E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass130_0_TypeDefinitionIndex = 79381;

	class UIRoleSelectPageController___c__DisplayClass130_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_7* avatarUIConfig; // 0x10
		::MoleMole::AvatarShowSetting* avatarSetting; // 0x18
		::Foundation::AssetPath avatarPath; // 0x20
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x30
		::System::Int32 avatarID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS130_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessUIAvatar_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS130_0__PROCESSUIAVATAR_B__0_OFFSET))(this);
		}
	};
}
