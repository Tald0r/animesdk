#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_133;
class Class_1_43BD383C98B4C0C5_48;
class Class_2_42949F27F6E12F05;
class Class_2_60638234271CCDB8_42;
class Class_2_60DDD9C206686F44;
namespace MoleMole { class GiftPackItemIconContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace System { class Object; }

#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_GET_BUTTONSELF_OFFSET UNITYSDK_OFFSET(0x9BF1880)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONCONSOLEPRICEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x9BF2650)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9BF24D0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x9BF2050)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9BF2570)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9BF1900)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9BF1D90)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_SHOWGOODSDATA_OFFSET UNITYSDK_OFFSET(0x9BF2760)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9BF28A0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9BF2900)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x9BF2970)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9BF29F0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9BF2A70)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9BF2AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGiftPackItemIconWidgetController_TypeDefinitionIndex = 43346;

	class UIGiftPackItemIconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_42* _view; // 0x2D0
		::MoleMole::UIGeneralIconCardRarityWidgetController* _cardRarityWidget; // 0x2D8
		::Class_0_16E4307DCC419505_133* _goodsData; // 0x2E0
		::MoleMole::GiftPackItemIconContext* _context; // 0x2E8
		::Class_1_43BD383C98B4C0C5_48* _viewProxy; // 0x2F0
		::Class_2_42949F27F6E12F05* _goodUILogic; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_60DDD9C206686F44* get_ButtonSelf()
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_GET_BUTTONSELF_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnConsolePriceButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONCONSOLEPRICEBUTTONCLICK_OFFSET))(this);
		}

		::System::Void ShowGoodsData(::Class_0_16E4307DCC419505_133* goodsData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_133*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_SHOWGOODSDATA_OFFSET))(this, goodsData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
