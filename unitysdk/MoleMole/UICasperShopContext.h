#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_29115E91C1E3B232.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UICASPERSHOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD034670)

namespace MoleMole
{
	inline static constexpr unsigned int UICasperShopContext_TypeDefinitionIndex = 51435;

	class UICasperShopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		// static const ::System::Int32 ZERO_TAB = 0x0; // 0x0
		// static const ::System::Int32 HADAL_TAB = 0x1; // 0x0
		// static const ::System::Int32 AVATAR_AWAKEN_TAB = 0x2; // 0x0
		::System::Action* BackToMainCityButtonAction; // 0x28
		::System::Boolean ShowHintInHadalShop; // 0x30
		::System::Boolean IsCanShowLocked; // 0x31
		::System::Boolean BackIsGOMainCity; // 0x32
		::System::Boolean HideAllTabHint; // 0x33
		::System::Int32 DefaultShopTabID; // 0x34
		::System::Int32 Index; // 0x38
		::Enum_3_29115E91C1E3B232 ShowType; // 0x3C
		::System::Int32 ShopID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICASPERSHOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
