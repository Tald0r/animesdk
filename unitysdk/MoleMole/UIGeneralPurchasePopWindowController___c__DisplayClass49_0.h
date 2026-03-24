#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3CC13814F0D84EAE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_133;
namespace MoleMole { class UIGeneralPurchasePopWindowController; }

#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF22E800)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_0__DOPURCHASE_B__0_OFFSET UNITYSDK_OFFSET(0xF22E810)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPurchasePopWindowController___c__DisplayClass49_0_TypeDefinitionIndex = 38000;

	class UIGeneralPurchasePopWindowController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_133* goodsInfo; // 0x10
		::MoleMole::UIGeneralPurchasePopWindowController* __4__this; // 0x18
		::Struct_2_3CC13814F0D84EAE purchaseGoodsInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPurchase_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_0__DOPURCHASE_B__0_OFFSET))(this);
		}
	};
}
