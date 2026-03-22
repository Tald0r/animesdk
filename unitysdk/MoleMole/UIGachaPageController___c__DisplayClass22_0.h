#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaPageController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA28E130)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS22_0__SHOWGAMEDIAMONDQUICKBUY_B__0_OFFSET UNITYSDK_OFFSET(0xA28E140)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS22_0__SHOWGAMEDIAMONDQUICKBUY_B__1_OFFSET UNITYSDK_OFFSET(0xA28E470)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass22_0_TypeDefinitionIndex = 39394;

	class UIGachaPageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Action* onSuccess; // 0x10
		::MoleMole::UIGachaPageController* __4__this; // 0x18
		::System::String* rechargeDiamondName; // 0x20
		::System::Action* __9__1; // 0x28
		::System::Action* onFailed; // 0x30
		::System::UInt32 materialID; // 0x38
		::System::Int32 exchangeFromTargetNum; // 0x3C
		::System::UInt32 num; // 0x40
		::System::Int32 exchangeFromCurNum; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGameDiamondQuickBuy_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS22_0__SHOWGAMEDIAMONDQUICKBUY_B__0_OFFSET))(this);
		}

		::System::Void _ShowGameDiamondQuickBuy_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS22_0__SHOWGAMEDIAMONDQUICKBUY_B__1_OFFSET))(this);
		}
	};
}
