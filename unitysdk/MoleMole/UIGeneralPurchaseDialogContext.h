#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGeneralPurchaseDialogContext_CurrencyType.h"
#include "unitysdk/MoleMole/UIGeneralPurchaseDialogContext_DialogType.h"

class Class_0_16E4307DCC419505_187;
class Class_1_9631DA8CB6F86BD4;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_GOODSINFO_OFFSET UNITYSDK_OFFSET(0x8A18A00)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_ONPURCHASE_OFFSET UNITYSDK_OFFSET(0x8A189E0)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_GOODSINFO_OFFSET UNITYSDK_OFFSET(0x8A18A10)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_ONPURCHASE_OFFSET UNITYSDK_OFFSET(0x8A189F0)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8A18A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPurchaseDialogContext_TypeDefinitionIndex = 44469;

	class UIGeneralPurchaseDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_187* _GoodsInfo_k__BackingField; // 0x28
		::System::Action_1<::Class_1_9631DA8CB6F86BD4*>* _OnPurchase_k__BackingField; // 0x30
		::MoleMole::UIGeneralPurchaseDialogContext_DialogType ViewType; // 0x38
		::MoleMole::UIGeneralPurchaseDialogContext_CurrencyType type; // 0x3C

		::System::Void _ctor(::Class_0_16E4307DCC419505_187* info, ::System::Action_1<::Class_1_9631DA8CB6F86BD4*>* onPurchase, ::MoleMole::UIGeneralPurchaseDialogContext_DialogType type)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_187*, ::System::Action_1<::Class_1_9631DA8CB6F86BD4*>*, ::MoleMole::UIGeneralPurchaseDialogContext_DialogType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT__CTOR_OFFSET))(this, info, onPurchase, type);
		}

		::System::Action_1<::Class_1_9631DA8CB6F86BD4*>* get_OnPurchase()
		{
			return ((::System::Action_1<::Class_1_9631DA8CB6F86BD4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_ONPURCHASE_OFFSET))(this);
		}

		::System::Void set_OnPurchase(::System::Action_1<::Class_1_9631DA8CB6F86BD4*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_9631DA8CB6F86BD4*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_ONPURCHASE_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_187* get_GoodsInfo()
		{
			return ((::Class_0_16E4307DCC419505_187*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_GOODSINFO_OFFSET))(this);
		}

		::System::Void set_GoodsInfo(::Class_0_16E4307DCC419505_187* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_187*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_GOODSINFO_OFFSET))(this, value);
		}
	};
}
