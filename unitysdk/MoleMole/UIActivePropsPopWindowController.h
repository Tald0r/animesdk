#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIActivePropsPopWindowController___c__DisplayClass44_0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_BDEEA5009A8A636E;
class Class_1_CD990C643F5F60DD;
class Class_2_208CC9941471731A_176;
class Class_2_C2B4B123B5A9B78A;
class Class_2_D4D818D7266F052A_1;
class Class_2_E4599E405340A799;
class Class_2_F51BBF303F6FB2C0;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIActivePropsBangbooWidgetController; }
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
template <typename T> class Class_2_2BD3078077E999CE;

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0xB953450)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_CHECKBUDDYCANBESELECTED_OFFSET UNITYSDK_OFFSET(0xB951840)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_CHECKCUSTOMSELECTSTR_OFFSET UNITYSDK_OFFSET(0xB951950)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_CLOSESKILLDETAIL_OFFSET UNITYSDK_OFFSET(0xB9521C0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_DOCLOSE_OFFSET UNITYSDK_OFFSET(0xB956FD0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_DOOKCLOSE_OFFSET UNITYSDK_OFFSET(0xB956640)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETBUDDYID_OFFSET UNITYSDK_OFFSET(0xB958E90)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETBUDDYINDEX_OFFSET UNITYSDK_OFFSET(0xB956B20)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETBUDDYLISTBYMODE_OFFSET UNITYSDK_OFFSET(0xB9541B0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETMULTISELECTEMPTYPOS_OFFSET UNITYSDK_OFFSET(0xB957EE0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GET_CURRENTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xB959E90)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xB952100)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xB9520F0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_INITDATA_OFFSET UNITYSDK_OFFSET(0xB952B10)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_INITSELECTBYBUDDYID_OFFSET UNITYSDK_OFFSET(0xB955B50)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISCHANGE_OFFSET UNITYSDK_OFFSET(0xB956EE0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISGACHAOPTIONALITEMSELECTED_OFFSET UNITYSDK_OFFSET(0xB9515D0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISINGACHAOPTIONALSELECTMODE_OFFSET UNITYSDK_OFFSET(0xB94FA40)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISINPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xB94F9C0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONBUDDYMULTICLICK_OFFSET UNITYSDK_OFFSET(0xB957F80)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB953B40)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONFAVORITEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xB956700)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xB957440)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xB957640)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xB955C70)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xB9572A0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xB952110)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONOK_OFFSET UNITYSDK_OFFSET(0xB956310)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xB955E10)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB955ED0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB952380)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB953BE0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_OPENSKILLDETAIL_OFFSET UNITYSDK_OFFSET(0xB9598A0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_PROCESSUIAVATAR_OFFSET UNITYSDK_OFFSET(0xB9560B0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHARROW_OFFSET UNITYSDK_OFFSET(0xB959E00)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHBUDDYRT_OFFSET UNITYSDK_OFFSET(0xB958F30)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHGOBTNTEXT_OFFSET UNITYSDK_OFFSET(0xB958510)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHSELECTVIEW_OFFSET UNITYSDK_OFFSET(0xB957B90)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xB954A10)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_RELEASEUIMODELS_OFFSET UNITYSDK_OFFSET(0xB955D90)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SELECTIDXFORSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB957A00)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SELECTITEM_OFFSET UNITYSDK_OFFSET(0xB9588A0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SENDFAVORITECSREQ_OFFSET UNITYSDK_OFFSET(0xB956C30)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETINITMULTISELECT_OFFSET UNITYSDK_OFFSET(0xB9552C0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETOKCB_OFFSET UNITYSDK_OFFSET(0xB9571C0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETOPEN_OFFSET UNITYSDK_OFFSET(0xB957230)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETUPBUDDYATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0xB9592C0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SET_CURRENTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xB959EA0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SHOULDHANDLEOPTIONALUPITEMNEW_OFFSET UNITYSDK_OFFSET(0xB9513E0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SHOULDSHOWOPTIONALUPITEMNEW_OFFSET UNITYSDK_OFFSET(0xB956120)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_STABLESORTCOMPARE_OFFSET UNITYSDK_OFFSET(0xB959EB0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_TRIGGERCONFIRMAUDIO_OFFSET UNITYSDK_OFFSET(0xB958B40)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_UPDATEFAVORITEBTNSTATE_OFFSET UNITYSDK_OFFSET(0xB9595E0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB95A160)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__CLOSESKILLDETAIL_B__50_0_OFFSET UNITYSDK_OFFSET(0xB95A630)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB95A010)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOCLOSE_B__30_0_OFFSET UNITYSDK_OFFSET(0xB95A570)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOCLOSE_B__30_1_OFFSET UNITYSDK_OFFSET(0xB95A370)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOCLOSE_B__30_2_OFFSET UNITYSDK_OFFSET(0xB95A4B0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOOKCLOSE_B__28_0_OFFSET UNITYSDK_OFFSET(0xB95A1B0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__GETBUDDYLISTBYMODE_G__ADDBUDDY_44_0_OFFSET UNITYSDK_OFFSET(0xB958D60)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__ONUIOPEN_B__9_0_OFFSET UNITYSDK_OFFSET(0xB95A1A0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__REFRESHBUDDYRT_B__54_0_OFFSET UNITYSDK_OFFSET(0xB95A6E0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB95A720)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xB95A790)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xB95A800)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xB95A870)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xB95A8D0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xB95A900)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xB95A960)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB95A970)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB95A980)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB95A990)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController_TypeDefinitionIndex = 74521;

	class UIActivePropsPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_MIN_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIActivePropsPopWindowController_TypeDefinitionIndex)->GetStaticField(0xF570);
		}
		static ::System::Boolean* StaticGet_IsMultiSelect()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIActivePropsPopWindowController_TypeDefinitionIndex)->GetStaticField(0xF574);
		}
		// static const ::System::String* FavoriteBangBooRecordKey; // 0x0
		// static const ::System::String* detailFadeIn; // 0x0
		// static const ::System::String* detailFadeOut; // 0x0
		// static const ::System::String* detailSwitch; // 0x0
		// static const ::System::String* selectFadeIn; // 0x0
		// static const ::System::String* selectFadeOut; // 0x0
		::System::Boolean isShowedSkillDesc; // 0x2F8
		::System::Collections::Generic::List_1<::Class_1_BDEEA5009A8A636E*>* _curPropertyItemViews; // 0x300
		::System::Collections::Generic::List_1<::Class_1_CD990C643F5F60DD*>* _skills; // 0x308
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_176*>* _iniItemTemplates; // 0x310
		::System::Collections::Generic::HashSet_1<::System::Int32>* _banGroups; // 0x318
		::System::Int32 _curSelectId; // 0x320
		::System::Action_1<::System::Int32>* okAction; // 0x328
		::Class_2_D4D818D7266F052A_1* _view; // 0x330
		::MoleMole::UIActivePropsBangbooWidgetController* _lastSelectItemCtrl; // 0x338
		::System::Collections::Generic::List_1<::Class_2_F51BBF303F6FB2C0*>* _battleBuddyDatas; // 0x340
		::System::Collections::Generic::List_1<::Class_2_F51BBF303F6FB2C0*>* _sortedBattleBuddyDatas; // 0x348
		::Class_2_C2B4B123B5A9B78A* _buddyUnit; // 0x350
		::Class_2_2BD3078077E999CE<::Class_2_F51BBF303F6FB2C0*>* _sorter; // 0x358
		::UnityEngine::Animation* detailAnimation; // 0x360
		::System::Int32 _currentSelectIndex_k__BackingField; // 0x368
		::MoleMole::UIActivePropsWindowContext* _context; // 0x370
		::MoleMole::MonoGamepadNavigatableList* buddyGamePadList; // 0x378
		::Il2CppArray<::System::Int32>* multiSelectedBuddys; // 0x380
		::System::Int32 _selectedBuddyID; // 0x388
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _originalIndexMap; // 0x390
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* _cachedTopBuddyItems; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ProcessUIAvatar(::System::Int32 avatarConfig, ::System::Int32 showTypeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_PROCESSUIAVATAR_OFFSET))(this, avatarConfig, showTypeIndex);
		}

		::System::Boolean IsInPreviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISINPREVIEWMODE_OFFSET))(this);
		}

		::System::Boolean IsInGachaOptionalSelectMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISINGACHAOPTIONALSELECTMODE_OFFSET))(this);
		}

		::System::Boolean IsGachaOptionalItemSelected(::System::Int32 uniqueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISGACHAOPTIONALITEMSELECTED_OFFSET))(this, uniqueID);
		}

		::System::Boolean ShouldShowOptionalUpItemNew(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SHOULDSHOWOPTIONALUPITEMNEW_OFFSET))(this, itemID);
		}

		::System::Boolean ShouldHandleOptionalUpItemNew(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SHOULDHANDLEOPTIONALUPITEMNEW_OFFSET))(this, itemID);
		}

		::System::Boolean CheckBuddyCanBeSelected(::System::Int32 buddyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_CHECKBUDDYCANBESELECTED_OFFSET))(this, buddyID);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::String*> CheckCustomSelectStr(::System::Int32 buddyID)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_CHECKCUSTOMSELECTSTR_OFFSET))(this, buddyID);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_INITDATA_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void OnOk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONOK_OFFSET))(this);
		}

		::System::Void OnFavoriteBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONFAVORITEBTNCLICKED_OFFSET))(this);
		}

		::System::Void SendFavoriteCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SENDFAVORITECSREQ_OFFSET))(this);
		}

		::System::Void DoOKClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_DOOKCLOSE_OFFSET))(this);
		}

		::System::Boolean IsChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISCHANGE_OFFSET))(this);
		}

		::System::Void DoClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_DOCLOSE_OFFSET))(this);
		}

		::System::Void SetOkCB(::System::Action_1<::System::Int32>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETOKCB_OFFSET))(this, cb);
		}

		::System::Void SetOpen(::System::Int32 curSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETOPEN_OFFSET))(this, curSelect);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Int32 GetBuddyIndex(::System::Int32 uniqueID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETBUDDYINDEX_OFFSET))(this, uniqueID);
		}

		::System::Void InitSelectByBuddyID(::System::Int32 uniqueID, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_INITSELECTBYBUDDYID_OFFSET))(this, uniqueID, isInit);
		}

		::System::Void SelectIdxForScrollView(::System::Int32 idx, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SELECTIDXFORSCROLLVIEW_OFFSET))(this, idx, isInit);
		}

		::System::Void SetInitMultiSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETINITMULTISELECT_OFFSET))(this);
		}

		::System::Int32 GetMultiSelectEmptyPos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETMULTISELECTEMPTYPOS_OFFSET))(this);
		}

		::System::Void OnBuddyMultiClick(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONBUDDYMULTICLICK_OFFSET))(this, arg);
		}

		::System::Void SelectItem(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SELECTITEM_OFFSET))(this, idx);
		}

		::System::Void TriggerConfirmAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_TRIGGERCONFIRMAUDIO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_2_F51BBF303F6FB2C0*>* GetBuddyListByMode()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_F51BBF303F6FB2C0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETBUDDYLISTBYMODE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean isInit, ::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this, isInit, selectIndex);
		}

		::System::Int32 GetBuddyID(::System::Int32 uniqueID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETBUDDYID_OFFSET))(this, uniqueID);
		}

		::System::Void RefreshSelectView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHSELECTVIEW_OFFSET))(this);
		}

		::System::Void RefreshGoBtnText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHGOBTNTEXT_OFFSET))(this);
		}

		::System::Void OpenSkillDetail(::System::Int32 index, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_OPENSKILLDETAIL_OFFSET))(this, index, force);
		}

		::System::Void CloseSkillDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_CLOSESKILLDETAIL_OFFSET))(this);
		}

		::System::Void SetupBuddyAttributeInfo(::System::Int32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETUPBUDDYATTRIBUTEINFO_OFFSET))(this, uniqueID);
		}

		::System::Void UpdateFavoriteBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_UPDATEFAVORITEBTNSTATE_OFFSET))(this);
		}

		::System::Void RefreshArrow(::MonoUITableScrollV2_MoveContext moveContext, ::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHARROW_OFFSET))(this, moveContext, v);
		}

		::System::Void RefreshBuddyRT(::System::Int32 buddyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHBUDDYRT_OFFSET))(this, buddyID);
		}

		::System::Void ReleaseUIModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_RELEASEUIMODELS_OFFSET))(this);
		}

		::System::Int32 get_currentSelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GET_CURRENTSELECTINDEX_OFFSET))(this);
		}

		::System::Void set_currentSelectIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SET_CURRENTSELECTINDEX_OFFSET))(this, value);
		}

		::System::Int32 StableSortCompare(::Class_2_E4599E405340A799* a, ::Class_2_E4599E405340A799* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_E4599E405340A799*, ::Class_2_E4599E405340A799*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_STABLESORTCOMPARE_OFFSET))(this, a, b);
		}

		::System::Void _OnUIOpen_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__ONUIOPEN_B__9_0_OFFSET))(this);
		}

		::System::Void _DoOKClose_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOOKCLOSE_B__28_0_OFFSET))(this);
		}

		::System::Void _DoClose_b__30_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOCLOSE_B__30_1_OFFSET))(this);
		}

		::System::Void _DoClose_b__30_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOCLOSE_B__30_2_OFFSET))(this);
		}

		::System::Void _DoClose_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOCLOSE_B__30_0_OFFSET))(this);
		}

		::System::Void _GetBuddyListByMode_g__AddBuddy_44_0(::Class_2_F51BBF303F6FB2C0* buddy, ::MoleMole::UIActivePropsPopWindowController___c__DisplayClass44_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_F51BBF303F6FB2C0*, ::MoleMole::UIActivePropsPopWindowController___c__DisplayClass44_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__GETBUDDYLISTBYMODE_G__ADDBUDDY_44_0_OFFSET))(this, buddy, a2);
		}

		::System::Void _CloseSkillDetail_b__50_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__CLOSESKILLDETAIL_B__50_0_OFFSET))(this);
		}

		::System::Void _RefreshBuddyRT_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__REFRESHBUDDYRT_B__54_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
