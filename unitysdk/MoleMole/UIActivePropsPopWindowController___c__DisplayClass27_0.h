#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F51BBF303F6FB2C0;
namespace MoleMole { class UIActivePropsPopWindowController; }

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x987AAF0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__SENDFAVORITECSREQ_B__0_OFFSET UNITYSDK_OFFSET(0x987AB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController___c__DisplayClass27_0_TypeDefinitionIndex = 74525;

	class UIActivePropsPopWindowController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivePropsPopWindowController* __4__this; // 0x10
		::Class_2_F51BBF303F6FB2C0* buddyData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendFavoriteCsReq_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__SENDFAVORITECSREQ_B__0_OFFSET))(this);
		}
	};
}
