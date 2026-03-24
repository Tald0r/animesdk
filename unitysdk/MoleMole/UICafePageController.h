#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_499EDFA3518A0E64;
class Class_1_5DA2E7556103D5A3_216;
class Class_2_79AE422BA06F6D26_242;
class Class_2_82E692415C3A4E10;
namespace MoleMole { class UICafeCurrentBuffWidgetController; }
namespace MoleMole { class UICoffeeshop3D3DModelController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UICAFEPAGECONTROLLER_DOREQDRINKCAFE_OFFSET UNITYSDK_OFFSET(0xB27DC90)
#define MOLEMOLE_UICAFEPAGECONTROLLER_GETRECOVERENERGY_OFFSET UNITYSDK_OFFSET(0xB27CC20)
#define MOLEMOLE_UICAFEPAGECONTROLLER_INITGENERALTOKEN_OFFSET UNITYSDK_OFFSET(0xB27ABD0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_INITINFO_OFFSET UNITYSDK_OFFSET(0xB27AD80)
#define MOLEMOLE_UICAFEPAGECONTROLLER_LOADCOFFEECUP_OFFSET UNITYSDK_OFFSET(0xB27F400)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB27B760)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONDRINKCAFE_OFFSET UNITYSDK_OFFSET(0xB27DDF0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0xB27E090)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xB27C010)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONSELECTITEM1_OFFSET UNITYSDK_OFFSET(0xB27C1D0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONSELECTITEM2_OFFSET UNITYSDK_OFFSET(0xB27C980)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xB27CAF0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONSHOWDRINKCAFEFINISHED_OFFSET UNITYSDK_OFFSET(0xB27F640)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB27AF10)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONSYNCCAFEDATA_OFFSET UNITYSDK_OFFSET(0xB27BCD0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONTIMELINEPERFORMSTART_OFFSET UNITYSDK_OFFSET(0xB27E560)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB27BC40)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB27A600)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB27BB70)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONUPDATECAFEDATA_OFFSET UNITYSDK_OFFSET(0xB27E190)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONUPDATEREWARDBUFFS_OFFSET UNITYSDK_OFFSET(0xB27FB00)
#define MOLEMOLE_UICAFEPAGECONTROLLER_OPENBUFFDETAIL_OFFSET UNITYSDK_OFFSET(0xB27FB80)
#define MOLEMOLE_UICAFEPAGECONTROLLER_OPENCAFE3D_OFFSET UNITYSDK_OFFSET(0xB27AAF0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_PAYCAFE_OFFSET UNITYSDK_OFFSET(0xB27D1C0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_REFRESHBUFFWIDGET_OFFSET UNITYSDK_OFFSET(0xB27BD50)
#define MOLEMOLE_UICAFEPAGECONTROLLER_REFRESHPAYBTNVIEW_OFFSET UNITYSDK_OFFSET(0xB27CCA0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_SETSELECTITEM_OFFSET UNITYSDK_OFFSET(0xB27C330)
#define MOLEMOLE_UICAFEPAGECONTROLLER_STARTSHOWGETCAFECUTSCENE_OFFSET UNITYSDK_OFFSET(0xB27E2C0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xB27AFE0)
#define MOLEMOLE_UICAFEPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2801F0)
#define MOLEMOLE_UICAFEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2801E0)
#define MOLEMOLE_UICAFEPAGECONTROLLER__INITINFO_G__SHOW_6_1_OFFSET UNITYSDK_OFFSET(0xB2802E0)
#define MOLEMOLE_UICAFEPAGECONTROLLER__ONCREATEVIEW_B__3_0_OFFSET UNITYSDK_OFFSET(0xB2802D0)
#define MOLEMOLE_UICAFEPAGECONTROLLER__ONDRINKCAFE_B__20_0_OFFSET UNITYSDK_OFFSET(0xB280460)
#define MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB280540)
#define MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xB2805B0)
#define MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB280610)
#define MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB280680)
#define MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB280690)
#define MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB2806A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICafePageController_TypeDefinitionIndex = 70895;

	class UICafePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_CoffeeDynamicKey()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UICafePageController_TypeDefinitionIndex)->GetStaticField(0x44370);
		}
		// static const ::System::String* ExceedMaxCafeTipKey; // 0x0
		// static const ::System::String* ExceedMaxEnergyTipKey; // 0x0
		// static const ::System::String* DrunkOnceCoffeeTipKey; // 0x0
		// static const ::System::String* TodayCafeRenewTipKey; // 0x0
		::Class_2_79AE422BA06F6D26_242* _view; // 0x308
		::System::Boolean _isInCafePerform; // 0x310
		::MoleMole::UICoffeeshop3D3DModelController* _coffeeShop3D; // 0x318
		::Class_2_82E692415C3A4E10* _uiCafeModel; // 0x320
		::Class_1_499EDFA3518A0E64* _currentCafeItem; // 0x328
		::MoleMole::UICafeCurrentBuffWidgetController* _buffWidget; // 0x330
		::System::Boolean _fromPerform; // 0x338
		::System::Boolean _ignoreBuffWidgetUpdate; // 0x339

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONSHOW_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_INITINFO_OFFSET))(this);
		}

		::System::Void OnSyncCafeData(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONSYNCCAFEDATA_OFFSET))(this, args);
		}

		::System::Void OpenCafe3D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_OPENCAFE3D_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void RefreshBuffWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_REFRESHBUFFWIDGET_OFFSET))(this);
		}

		::System::Void OnSelectItem1(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONSELECTITEM1_OFFSET))(this, index);
		}

		::System::Void OnSelectItem2(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONSELECTITEM2_OFFSET))(this, index);
		}

		::System::Void OnSelectItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONSELECTITEM_OFFSET))(this, index);
		}

		::System::Void SetSelectItem(::Class_1_499EDFA3518A0E64* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_499EDFA3518A0E64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_SETSELECTITEM_OFFSET))(this, data);
		}

		::System::Void RefreshPayBtnView(::Class_1_499EDFA3518A0E64* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_499EDFA3518A0E64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_REFRESHPAYBTNVIEW_OFFSET))(this, data);
		}

		::System::Void InitGeneralToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_INITGENERALTOKEN_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void PayCafe(::Class_1_499EDFA3518A0E64* selectedCafeItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_499EDFA3518A0E64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_PAYCAFE_OFFSET))(this, selectedCafeItem);
		}

		::System::Int32 GetRecoverEnergy(::Class_1_5DA2E7556103D5A3_216* config)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_216*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_GETRECOVERENERGY_OFFSET))(this, config);
		}

		::System::Void OnDrinkCafe(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONDRINKCAFE_OFFSET))(this, args);
		}

		::System::Void OnItemChanged(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONITEMCHANGED_OFFSET))(this, eventArgs);
		}

		::System::Void OnUpdateCafeData(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONUPDATECAFEDATA_OFFSET))(this, eventArgs);
		}

		::System::Void StartShowGetCafeCutScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_STARTSHOWGETCAFECUTSCENE_OFFSET))(this);
		}

		::System::Void OnTimelinePerformStart(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONTIMELINEPERFORMSTART_OFFSET))(this, trans);
		}

		::UnityEngine::GameObject* LoadCoffeeCup(::System::String* prefabPath, ::UnityEngine::Transform* parent, ::System::Boolean active)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_LOADCOFFEECUP_OFFSET))(this, prefabPath, parent, active);
		}

		::System::Void OnShowDrinkCafeFinished(::Class_1_499EDFA3518A0E64* cafeItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_499EDFA3518A0E64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONSHOWDRINKCAFEFINISHED_OFFSET))(this, cafeItem);
		}

		::System::Void OnUpdateRewardBuffs(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONUPDATEREWARDBUFFS_OFFSET))(this, args);
		}

		::System::Void OpenBuffDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_OPENBUFFDETAIL_OFFSET))(this);
		}

		::System::Void DoReqDrinkCafe(::System::Int32 cafeItemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_DOREQDRINKCAFE_OFFSET))(this, cafeItemID);
		}

		::System::Void _OnCreateView_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER__ONCREATEVIEW_B__3_0_OFFSET))(this);
		}

		static ::System::Void _InitInfo_g__Show_6_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER__INITINFO_G__SHOW_6_1_OFFSET))();
		}

		::System::Void _OnDrinkCafe_b__20_0(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER__ONDRINKCAFE_B__20_0_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
