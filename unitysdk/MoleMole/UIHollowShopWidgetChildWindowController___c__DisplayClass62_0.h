#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_240;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8936580)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS62_0__REFRESHGOODS_B__0_OFFSET UNITYSDK_OFFSET(0x8936590)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetChildWindowController___c__DisplayClass62_0_TypeDefinitionIndex = 75954;

	class UIHollowShopWidgetChildWindowController___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* cardEffect; // 0x10
		::Class_2_208CC9941471731A_240* template_; // 0x18
		::UnityEngine::GameObject* specialGo; // 0x20
		::UnityEngine::Transform* itemEffect; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshGoods_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS62_0__REFRESHGOODS_B__0_OFFSET))(this);
		}
	};
}
