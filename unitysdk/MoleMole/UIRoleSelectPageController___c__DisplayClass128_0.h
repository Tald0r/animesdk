#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_92;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIRoleSelectPageController; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS128_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAE58210)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS128_0__PROCESSUIAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0xAE58220)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass128_0_TypeDefinitionIndex = 51289;

	class UIRoleSelectPageController___c__DisplayClass128_0 : public ::System::Object
	{
	public:
		::Foundation::AssetPath avatarPath; // 0x10
		::MoleMole::AvatarShowSetting* avatarSetting; // 0x20
		::Class_2_208CC9941471731A_92* avatarUIConfig; // 0x28
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x30
		::System::Int32 avatarID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS128_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessUIAvatar_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS128_0__PROCESSUIAVATAR_B__0_OFFSET))(this);
		}
	};
}
