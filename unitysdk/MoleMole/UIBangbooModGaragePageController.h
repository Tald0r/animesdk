#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_31414A4EF43A2EAA;
class Class_1_A11CB4C08EF906E4;
class Class_2_60638234271CCDB8_74;
class Class_2_F51BBF303F6FB2C0;
namespace MoleMole { class BangbooModGarageContext; }
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIBangbooDIYWidgetWidgetController; }
namespace MoleMole { class UIBangbooTransformWidgetController; }
namespace MoleMole { class UIBangbooUpgradeWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIModificationShop3DModelController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_2BD3078077E999CE;

#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_APPLYCHANGEBUDDY_OFFSET UNITYSDK_OFFSET(0xDDBCB90)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_CALLBUDDYREDRANGE_OFFSET UNITYSDK_OFFSET(0xDDBE3B0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_CLOSEDETAILWIDGET_OFFSET UNITYSDK_OFFSET(0xDDBDA90)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_CLOSEDIYWIDGET_OFFSET UNITYSDK_OFFSET(0xDDBCFD0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_CLOSEPAGE_OFFSET UNITYSDK_OFFSET(0xDDBCE10)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_CLOSETRANSFORMWIDGET_OFFSET UNITYSDK_OFFSET(0xDDBDEC0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0xDDBE750)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xDDBAF10)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONBUDDYSORTORFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0xDDBDF40)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONCHANGESELECTBUDDY_OFFSET UNITYSDK_OFFSET(0xDDBC690)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDDBAF20)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONFAVORITEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xDDBD0C0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xDDBE2D0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONRECIVEBUDDYSERVERDATA_OFFSET UNITYSDK_OFFSET(0xDDBC4A0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDDBC050)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDDBAFC0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDDBBF80)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_OPENDETAILWIDGET_OFFSET UNITYSDK_OFFSET(0xDDBDBE0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_OPENDIYWIDGET_OFFSET UNITYSDK_OFFSET(0xDDBDFB0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_OPENTRANSFOMBUDDYPANEL_OFFSET UNITYSDK_OFFSET(0xDDBD780)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_OPENTRANSFOMWIDGET_OFFSET UNITYSDK_OFFSET(0xDDBDB10)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_SENDFAVORITECSREQ_OFFSET UNITYSDK_OFFSET(0xDDBD4D0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_UPDATEBATTLEBUDDYS_OFFSET UNITYSDK_OFFSET(0xDDBBC00)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_UPDATEFAVORITEBTNSTATE_OFFSET UNITYSDK_OFFSET(0xDDBC970)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_UPDATEMAINBUDDY_OFFSET UNITYSDK_OFFSET(0xDDBC2B0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xDDBC240)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDDBE9C0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER__ONUIINIT_B__4_1_OFFSET UNITYSDK_OFFSET(0xDDBEA50)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0xDDBEA60)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDDBEAD0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xDDBEB40)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDDBEBB0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDDBEBC0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDDBEBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooModGaragePageController_TypeDefinitionIndex = 51470;

	class UIBangbooModGaragePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* FavoriteBangBooRecordKey; // 0x0
		// static const ::System::Int32 _mainBuddyIndex = 0xFFFFFFFF; // 0x0
		// static const ::System::String* AllBuddyListModule; // 0x0
		// static const ::System::String* BuddyUpGradeModule; // 0x0
		::Class_2_60638234271CCDB8_74* _view; // 0x308
		::Class_1_31414A4EF43A2EAA* _data; // 0x310
		::MoleMole::UIBangbooUpgradeWidgetController* _detailWidget; // 0x318
		::MoleMole::UIBangbooTransformWidgetController* _buddyTransformWidget; // 0x320
		::MoleMole::UIBangbooDIYWidgetWidgetController* _buddyDiyWidget; // 0x328
		::MoleMole::UIModificationShop3DModelController* _diyScene; // 0x330
		::Class_2_2BD3078077E999CE<::Class_2_F51BBF303F6FB2C0*>* _sorter; // 0x338
		::System::Int32 _curSelectIndex; // 0x340
		::System::Int32 _preSelectIndex; // 0x344
		::System::Collections::Generic::List_1<::Class_2_F51BBF303F6FB2C0*>* _battleBuddyDatas; // 0x348
		::System::Collections::Generic::List_1<::Class_2_F51BBF303F6FB2C0*>* _sortedBattleBuddyDatas; // 0x350
		::Foundation::Coroutine::CoroutineHandle delayApplyBuddy; // 0x358
		::MoleMole::BangbooModGarageContext* _context; // 0x360
		::MoleMole::MonoGamepadNestedListDelegate* buddyGamePadList; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void OnReciveBuddyServerData(::System::EventArgs* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONRECIVEBUDDYSERVERDATA_OFFSET))(this, data);
		}

		::System::Void OnChangeSelectBuddy(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONCHANGESELECTBUDDY_OFFSET))(this, index);
		}

		::System::Void ApplyChangeBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_APPLYCHANGEBUDDY_OFFSET))(this);
		}

		::System::Void UpdateMainBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_UPDATEMAINBUDDY_OFFSET))(this);
		}

		::System::Void UpdateBattleBuddys()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_UPDATEBATTLEBUDDYS_OFFSET))(this);
		}

		::System::Void UpdateFavoriteBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_UPDATEFAVORITEBTNSTATE_OFFSET))(this);
		}

		::System::Void ClosePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_CLOSEPAGE_OFFSET))(this);
		}

		::System::Void OnFavoriteBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONFAVORITEBTNCLICKED_OFFSET))(this);
		}

		::System::Void SendFavoriteCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_SENDFAVORITECSREQ_OFFSET))(this);
		}

		::System::Void OpenTransfomBuddyPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_OPENTRANSFOMBUDDYPANEL_OFFSET))(this);
		}

		::System::Void OpenDetailWidget(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_OPENDETAILWIDGET_OFFSET))(this, index);
		}

		::System::Void OnBuddySortOrFilterChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONBUDDYSORTORFILTERCHANGED_OFFSET))(this);
		}

		::System::Void CloseDIYWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_CLOSEDIYWIDGET_OFFSET))(this);
		}

		::System::Void OpenDIYWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_OPENDIYWIDGET_OFFSET))(this);
		}

		::System::Void OpenTransfomWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_OPENTRANSFOMWIDGET_OFFSET))(this);
		}

		::System::Void CloseTransformWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_CLOSETRANSFORMWIDGET_OFFSET))(this);
		}

		::System::Void CloseDetailWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_CLOSEDETAILWIDGET_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Boolean CallBuddyRedRange(::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_CALLBUDDYREDRANGE_OFFSET))(this, start, end);
		}

		::Class_1_A11CB4C08EF906E4* GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* config)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, config);
		}

		::System::Void _OnUIInit_b__4_1(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER__ONUIINIT_B__4_1_OFFSET))(this, idx);
		}

		::Class_1_A11CB4C08EF906E4* __base_GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* P0)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
