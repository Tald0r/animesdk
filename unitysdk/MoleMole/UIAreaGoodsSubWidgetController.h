#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIItemOptionWidgetControllerBase.h"
#include "unitysdk/Share/EItemType.h"

class Class_1_0E5778BB52E10271;
class Class_2_44CAFB3A09178D38_3;
class Class_2_9A2734A1BC17687A;
class Class_2_DA8BF519212BAE65_1;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_GETDESC_OFFSET UNITYSDK_OFFSET(0xCC28F90)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_INITINFO_OFFSET UNITYSDK_OFFSET(0xCC29900)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONCARDDESCBRIEFSWITCH_OFFSET UNITYSDK_OFFSET(0xCC29AD0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCC29B90)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCC272C0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCC27400)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHCARDNUM_OFFSET UNITYSDK_OFFSET(0xCC27E50)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHITEMCONTENT_OFFSET UNITYSDK_OFFSET(0xCC29610)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHNEW_OFFSET UNITYSDK_OFFSET(0xCC294A0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPDETAIL_OFFSET UNITYSDK_OFFSET(0xCC28750)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPGOODSBG_OFFSET UNITYSDK_OFFSET(0xCC27610)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPGOODSVIEW_OFFSET UNITYSDK_OFFSET(0xCC27540)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_SETDESCSTATE_OFFSET UNITYSDK_OFFSET(0xCC286D0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCC29C20)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONCARDDESCBRIEFSWITCH_OFFSET UNITYSDK_OFFSET(0xCC29C40)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCC29CB0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCC29CC0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCC29CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaGoodsSubWidgetController_TypeDefinitionIndex = 48267;

	class UIAreaGoodsSubWidgetController : public ::MoleMole::UIItemOptionWidgetControllerBase
	{
	public:
		::System::Int32 m_goodsID; // 0x2E8
		::System::String* curBGPrefabPath; // 0x2F0
		::System::Boolean isInfoChanging; // 0x2F8
		::System::Boolean infoState; // 0x2F9
		::Share::EItemType m_itemType; // 0x2FA
		::System::Int32 m_itemID; // 0x2FC
		::System::Boolean m_isBrief; // 0x300
		::Class_2_DA8BF519212BAE65_1* abyssModel; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshShopGoodsView(::System::Int32 shopGoodsID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPGOODSVIEW_OFFSET))(this, shopGoodsID);
		}

		::System::Void RefreshShopGoodsBG(::System::Int32 shopGoodsID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPGOODSBG_OFFSET))(this, shopGoodsID);
		}

		::System::Void RefreshCardNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHCARDNUM_OFFSET))(this);
		}

		::System::Void SetDescState(::System::Boolean isBrief)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_SETDESCSTATE_OFFSET))(this, isBrief);
		}

		::System::String* GetDesc(::System::Boolean isBrief)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_GETDESC_OFFSET))(this, isBrief);
		}

		::System::Void RefreshShopDetail(::System::Int32 shopGoodsID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPDETAIL_OFFSET))(this, shopGoodsID);
		}

		::System::Void RefreshNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHNEW_OFFSET))(this);
		}

		::System::Void RefreshItemContent(::Class_1_0E5778BB52E10271* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0E5778BB52E10271*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHITEMCONTENT_OFFSET))(this, data);
		}

		::System::Void OnCardDescBriefSwitch(::System::Boolean brief)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONCARDDESCBRIEFSWITCH_OFFSET))(this, brief);
		}

		::System::Int32 InitInfo(::Class_2_44CAFB3A09178D38_3* goodData, ::Class_2_9A2734A1BC17687A* Model)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_44CAFB3A09178D38_3*, ::Class_2_9A2734A1BC17687A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_INITINFO_OFFSET))(this, goodData, Model);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCardDescBriefSwitch(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONCARDDESCBRIEFSWITCH_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
