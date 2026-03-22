#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BCF38F46F7CC12F2.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_509DCA6CF8698226.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_0_16E4307DCC419505_208;
class Class_1_0D6706375CDAAE8C;
class Class_2_60DDD9C206686F44;
class Class_2_9D9172C07F82DDAE;
class Class_2_A3CFC20DC3954F5C;
class Class_2_A3CFC20DC3954F5C_1;
class Class_2_A8F5ABF31E066ED4;
class Class_2_D23CB76C2A86EF60;
class Class_2_D89CCC627A66D0AD;
class Class_3_19EF277AF5D11235_26;
class MonoUIBtnScaleAnim;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_CLEARCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x68ADF90)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_DELEQUIPNEWHINT_OFFSET UNITYSDK_OFFSET(0x68A1D70)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ENABLESELECTSCALEANIM_OFFSET UNITYSDK_OFFSET(0x68A1AA0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETCLICKBTN_OFFSET UNITYSDK_OFFSET(0x68B0D60)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETCURCOUNT_OFFSET UNITYSDK_OFFSET(0x68AE060)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETFADEINANIMATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x68B0560)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETGAMEPADSELECTABLE_OFFSET UNITYSDK_OFFSET(0x689DDE0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETINDEX_OFFSET UNITYSDK_OFFSET(0x68A7DE0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETITEMDATA_OFFSET UNITYSDK_OFFSET(0x68B0210)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETITEMID_OFFSET UNITYSDK_OFFSET(0x68B01A0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETREDUCEBTN_OFFSET UNITYSDK_OFFSET(0x68B0E30)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x68B0300)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET_INDEPOSITORY_OFFSET UNITYSDK_OFFSET(0x689DCD0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x689D5B0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x689D340)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET__ENABLECLICK_OFFSET UNITYSDK_OFFSET(0x689D530)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x689D350)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x689D3C0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_HASITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x689EB30)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_HIDECOUNT_OFFSET UNITYSDK_OFFSET(0x68A87A0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_HIDEEQUIPNEWHINT_OFFSET UNITYSDK_OFFSET(0x68B0820)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x689DA50)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ISEQUIPNEWHINTING_OFFSET UNITYSDK_OFFSET(0x68B0B30)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_LIGHTCLEAN_OFFSET UNITYSDK_OFFSET(0x689F020)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x68AE540)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x689EDD0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONFOCUSSTATECHANGEDFORGAMEPADMODULE_OFFSET UNITYSDK_OFFSET(0x68A1630)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONFOCUSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x68A16A0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x68A7D00)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0x689E140)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x68A1FF0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x689EE90)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x68A14D0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x689D7D0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x689DEB0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0x68A5230)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x68B0460)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_PLAYFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x68B0640)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPLD_OFFSET UNITYSDK_OFFSET(0x68B1200)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPLT_OFFSET UNITYSDK_OFFSET(0x68B1300)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPRD_OFFSET UNITYSDK_OFFSET(0x68B1100)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPROOT_OFFSET UNITYSDK_OFFSET(0x68B0F00)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPRT_OFFSET UNITYSDK_OFFSET(0x68B1000)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHATKSTATE_OFFSET UNITYSDK_OFFSET(0x68AFED0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHFOREQUIPCOMMON_OFFSET UNITYSDK_OFFSET(0x68AED00)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHPROFESSIONICON_OFFSET UNITYSDK_OFFSET(0x68A6530)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHSTARANDLEVEL_OFFSET UNITYSDK_OFFSET(0x68A7150)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHUPGRADABLEEQUIP_OFFSET UNITYSDK_OFFSET(0x68B00A0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEWFOREQUIP_OFFSET UNITYSDK_OFFSET(0x68AF260)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEWINNER_OFFSET UNITYSDK_OFFSET(0x68AF6C0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x68AD460)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_2_OFFSET UNITYSDK_OFFSET(0x68A2200)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x68AD0D0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_RESETIMAGECONTROL_1_OFFSET UNITYSDK_OFFSET(0x68B0780)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_RESETIMAGECONTROL_OFFSET UNITYSDK_OFFSET(0x68A04F0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_RESETSELECTOBJALPHA_OFFSET UNITYSDK_OFFSET(0x68A1460)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x68B0370)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETADDITIONALLABEL_OFFSET UNITYSDK_OFFSET(0x68AF4E0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETBTNENABLE_OFFSET UNITYSDK_OFFSET(0x689EBA0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCHECKSELECTFOCUS_OFFSET UNITYSDK_OFFSET(0x68A7FE0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCHECK_OFFSET UNITYSDK_OFFSET(0x68A7E50)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCLICKBTNLONGPRESSENABLED_OFFSET UNITYSDK_OFFSET(0x68ADD70)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCOMMONDRESS_OFFSET UNITYSDK_OFFSET(0x68A85C0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCURCOUNT_OFFSET UNITYSDK_OFFSET(0x68B0290)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x68A3D50)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETENABLEEMPTYCLICK_OFFSET UNITYSDK_OFFSET(0x68A8A20)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETEQUIPEDFLAG_OFFSET UNITYSDK_OFFSET(0x68A5F10)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETFIRSTPASSSTATE_OFFSET UNITYSDK_OFFSET(0x689EA40)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETGETSTATE_OFFSET UNITYSDK_OFFSET(0x68AF3E0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETINDEX_OFFSET UNITYSDK_OFFSET(0x68A2190)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x689E1B0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMIDSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x689D5C0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMID_OFFSET UNITYSDK_OFFSET(0x68AD390)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMINFO_OFFSET UNITYSDK_OFFSET(0x68A8CF0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMLONGPREEACT_OFFSET UNITYSDK_OFFSET(0x689E220)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETLOCK_OFFSET UNITYSDK_OFFSET(0x68A8280)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETMASKSTATE_OFFSET UNITYSDK_OFFSET(0x689E3B0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETMAX_OFFSET UNITYSDK_OFFSET(0x689E340)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETMUTECLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x689EC10)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETRECYCLE_OFFSET UNITYSDK_OFFSET(0x68A86B0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETREDUCEBTNLONGPRESSENABLED_OFFSET UNITYSDK_OFFSET(0x68ADE80)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETREDUCEBTN_OFFSET UNITYSDK_OFFSET(0x68A6EC0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETREWARDBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x689E790)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x68A3930)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSELECTOBJALPHA_OFFSET UNITYSDK_OFFSET(0x68A17C0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSHOWEMPTYLABEL_OFFSET UNITYSDK_OFFSET(0x68B0A50)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSHOWEQUIPNEWTAG_OFFSET UNITYSDK_OFFSET(0x689ED60)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSHOWSELECT_OFFSET UNITYSDK_OFFSET(0x689ECF0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETTRANSGRAY_OFFSET UNITYSDK_OFFSET(0x689E4F0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETTYPEICONSTATE_OFFSET UNITYSDK_OFFSET(0x68A6230)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETUPSTATE_OFFSET UNITYSDK_OFFSET(0x689E690)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETWISHLISTTARGETAVATARINFO_OFFSET UNITYSDK_OFFSET(0x68AFAE0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SET__ENABLECLICK_OFFSET UNITYSDK_OFFSET(0x689D430)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SHOWEQUIPPOS_OFFSET UNITYSDK_OFFSET(0x68ACAE0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SHOWREDUCEBTN_OFFSET UNITYSDK_OFFSET(0x689EC80)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_TRYSHOWNEGATIVE_OFFSET UNITYSDK_OFFSET(0x68AE670)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_UPDATEEQUIPNEWHINT_OFFSET UNITYSDK_OFFSET(0x68AC8D0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_UPDATEEQUIPVIEW_OFFSET UNITYSDK_OFFSET(0x68ABFA0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_UPDATENOTIFICATIONBADGEBYEVENT_OFFSET UNITYSDK_OFFSET(0x68B0AC0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_UPDATENOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x68A3240)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__ADD_OFFSET UNITYSDK_OFFSET(0x68AE710)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x68B1400)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__INITVIEW_B__62_0_OFFSET UNITYSDK_OFFSET(0x68B1420)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__REDUCE_OFFSET UNITYSDK_OFFSET(0x68AE0D0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__REFRESHFOREQUIPCOMMON_B__98_0_OFFSET UNITYSDK_OFFSET(0x68B1480)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x68B1510)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x68B15A0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x68B1610)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0x68B1680)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x68B1520)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x68B16E0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x68B16F0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x68B1770)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x68B17D0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0x68B1840)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController_TypeDefinitionIndex = 53173;

	class UIItemIconBtnWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::String* FADE_IN_ANIM; // 0x0
		// static const ::System::String* FADE_OUT_ANIM; // 0x0
		// static const ::System::String* Animation_RewardFadeIn; // 0x0
		// static const ::System::String* Animation_RewardFadeIn02; // 0x0
		// static const ::System::Single NORMAL_ALPHA; // 0x0
		// static const ::System::Single TRANSPARENT_ALPHA; // 0x0
		::MoleMole::UIDoubleTipsInfoWidgetController* _tipsWidget; // 0x2D0
		::System::Int32 _itemID; // 0x2D8
		::Class_0_16E4307DCC419505_208* _itemView; // 0x2E0
		::System::UInt32 _itemUID; // 0x2E8
		::System::Int32 _curCount; // 0x2EC
		::System::Int32 _targetCount; // 0x2F0
		::System::Boolean __enableClick; // 0x2F4
		::System::Boolean _needCache; // 0x2F5
		::System::Boolean _muteClickCallback; // 0x2F6
		::System::Boolean _showReduceBtn; // 0x2F7
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x2F8
		::System::Action_1<::System::Int32>* _itemClickedAct; // 0x300
		::System::Action_1<::System::Int32>* OnLongPress; // 0x308
		::System::Int32 _index; // 0x310
		::System::Boolean _isShowSelect; // 0x314
		::System::Boolean _isShowEquipNewTag; // 0x315
		::System::Boolean hasSetMax; // 0x316
		::System::Int32 _max; // 0x318
		::MoleMole::NotificationBadge* _notificationBadge; // 0x320
		::MoleMole::UIGeneralNewHintWidgetController* _newHintWidgetController; // 0x328
		::System::Boolean ShowEmptyLabel; // 0x330
		::System::Boolean _enableEmptyClick; // 0x331
		::UnityEngine::UI::Image* _select02Image; // 0x338
		::MonoUIBtnScaleAnim* _selectScaleComp; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::Class_2_D23CB76C2A86EF60* get__viewModel()
		{
			return ((::Class_2_D23CB76C2A86EF60*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::Class_3_19EF277AF5D11235_26* get__view()
		{
			return ((::Class_3_19EF277AF5D11235_26*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET__VIEW_OFFSET))(this);
		}

		::System::Void set__enableClick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SET__ENABLECLICK_OFFSET))(this, value);
		}

		::System::Boolean get__enableClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET__ENABLECLICK_OFFSET))(this);
		}

		::System::Int32 get_ItemID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET_ITEMID_OFFSET))(this);
		}

		::System::Void SetItemIDShowState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMIDSHOWSTATE_OFFSET))(this, isShow);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void SetItemClickedAct(::System::Action_1<::System::Int32>* itemClickedAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET))(this, itemClickedAct);
		}

		::System::Void SetItemLongPreeAct(::System::Action_1<::System::Int32>* longPressAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMLONGPREEACT_OFFSET))(this, longPressAct);
		}

		::System::Void SetMax(::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETMAX_OFFSET))(this, max);
		}

		::System::Void SetMaskState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETMASKSTATE_OFFSET))(this, active);
		}

		::System::Void SetTransGray(::System::Boolean isGray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETTRANSGRAY_OFFSET))(this, isGray);
		}

		::System::Void SetUpState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETUPSTATE_OFFSET))(this, active);
		}

		::System::Void SetRewardBuffState(::Struct_2_509DCA6CF8698226 info)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_509DCA6CF8698226))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETREWARDBUFFSTATE_OFFSET))(this, info);
		}

		::System::Void SetFirstPassState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETFIRSTPASSSTATE_OFFSET))(this, active);
		}

		::System::Boolean HasItemClickedAct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_HASITEMCLICKEDACT_OFFSET))(this);
		}

		::System::Void SetBtnEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETBTNENABLE_OFFSET))(this, enable);
		}

		::System::Void SetMuteClickCallback(::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETMUTECLICKCALLBACK_OFFSET))(this, mute);
		}

		::System::Void ShowReduceBtn(::System::Boolean isshow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SHOWREDUCEBTN_OFFSET))(this, isshow);
		}

		::System::Void SetShowSelect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSHOWSELECT_OFFSET))(this, value);
		}

		::System::Void SetShowEquipNewTag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSHOWEQUIPNEWTAG_OFFSET))(this, value);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnFocusStateChangedForGamepadModule(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONFOCUSSTATECHANGEDFORGAMEPADMODULE_OFFSET))(this, isFocus);
		}

		::System::Void OnFocusStateChanged(::System::Boolean isFocus, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONFOCUSSTATECHANGED_OFFSET))(this, isFocus, force);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void SetEquipedFlag(::System::UInt32 avatarId, ::System::Boolean isself)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETEQUIPEDFLAG_OFFSET))(this, avatarId, isself);
		}

		::System::Void SetTypeIconState(::System::Boolean typeIconActive, ::System::Boolean typeIconDisableActive, ::Foundation::AssetPath iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETTYPEICONSTATE_OFFSET))(this, typeIconActive, typeIconDisableActive, iconPath);
		}

		::System::Void RefreshProfessionIcon(::Class_2_A3CFC20DC3954F5C_1* weapon, ::Class_2_D89CCC627A66D0AD* checkAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A3CFC20DC3954F5C_1*, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHPROFESSIONICON_OFFSET))(this, weapon, checkAvatar);
		}

		::System::Void SetReduceBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETREDUCEBTN_OFFSET))(this);
		}

		::System::Void RefreshStarAndLevel(::System::Int32 curStar, ::System::Int32 maxStar, ::System::Int32 level, ::System::Boolean hideStar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHSTARANDLEVEL_OFFSET))(this, curStar, maxStar, level, hideStar);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETINDEX_OFFSET))(this);
		}

		::System::Void ResetSelectObjAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_RESETSELECTOBJALPHA_OFFSET))(this);
		}

		::System::Void SetSelectObjAlpha(::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSELECTOBJALPHA_OFFSET))(this, alpha);
		}

		::System::Void SetSelected(::System::Boolean isselected, ::System::Boolean disableAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSELECTED_OFFSET))(this, isselected, disableAnimation);
		}

		::System::Void SetCheck(::System::Boolean check, ::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCHECK_OFFSET))(this, check, select);
		}

		::System::Void SetCheckSelectFocus(::System::Boolean hideFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCHECKSELECTFOCUS_OFFSET))(this, hideFocus);
		}

		::System::Void SetLock(::System::Boolean isLock, ::System::Boolean isDress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETLOCK_OFFSET))(this, isLock, isDress);
		}

		::System::Void SetCommonDress(::System::Boolean isDress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCOMMONDRESS_OFFSET))(this, isDress);
		}

		::System::Void SetRecycle(::System::Boolean isRecycle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETRECYCLE_OFFSET))(this, isRecycle);
		}

		::MoleMole::MonoGamepadSelectable* GetGamepadSelectable()
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETGAMEPADSELECTABLE_OFFSET))(this);
		}

		::System::Void HideCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_HIDECOUNT_OFFSET))(this);
		}

		::System::Void EnableSelectScaleAnim(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ENABLESELECTSCALEANIM_OFFSET))(this, enable);
		}

		::System::Void SetEnableEmptyClick(::System::Boolean enable, ::UnityEngine::Events::UnityAction_1<::System::Int32>* onClickEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Events::UnityAction_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETENABLEEMPTYCLICK_OFFSET))(this, enable, onClickEmpty);
		}

		::System::Void SetItemInfo(::System::Int32 itemID, ::System::Int32 curCount, ::System::Int32 targetcount, ::Enum_3_BCF38F46F7CC12F2 showCountTextType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Enum_3_BCF38F46F7CC12F2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMINFO_OFFSET))(this, itemID, curCount, targetcount, showCountTextType);
		}

		::System::Void ShowEquipPos(::System::Int32 equipPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SHOWEQUIPPOS_OFFSET))(this, equipPos);
		}

		::System::Void UpdateEquipView(::Class_2_A3CFC20DC3954F5C* equip)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A3CFC20DC3954F5C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_UPDATEEQUIPVIEW_OFFSET))(this, equip);
		}

		::System::Void RefreshView(::System::Int32 itemID, ::System::Int32 count, ::Enum_3_BCF38F46F7CC12F2 showCountTextType, ::System::Boolean isShowTip, ::System::Action* customTipHandle, ::System::Boolean jumpControl, ::System::Boolean disableJump)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_BCF38F46F7CC12F2, ::System::Boolean, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemID, count, showCountTextType, isShowTip, customTipHandle, jumpControl, disableJump);
		}

		::System::Void SetItemID(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMID_OFFSET))(this, itemID);
		}

		::System::Void RefreshView_1(::System::Int32 itemID, ::System::Int32 curCount, ::System::Int32 targetcount, ::Enum_3_BCF38F46F7CC12F2 Type, ::System::Boolean showTips, ::System::Action* customTipHandle, ::System::Boolean jumpControl, ::System::Boolean disableJump)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Enum_3_BCF38F46F7CC12F2, ::System::Boolean, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, itemID, curCount, targetcount, Type, showTips, customTipHandle, jumpControl, disableJump);
		}

		::System::Void SetClickBtnLongPressEnabled(::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCLICKBTNLONGPRESSENABLED_OFFSET))(this, isEnabled);
		}

		::System::Void SetReduceBtnLongPressEnabled(::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETREDUCEBTNLONGPRESSENABLED_OFFSET))(this, isEnabled);
		}

		::System::Void ClearCurrentCount(::System::Boolean invokeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_CLEARCURRENTCOUNT_OFFSET))(this, invokeCallback);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void _Reduce(::System::Int32 count, ::System::Boolean invokeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__REDUCE_OFFSET))(this, count, invokeCallback);
		}

		::System::Void _Add(::System::Int32 count, ::System::Boolean invokeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__ADD_OFFSET))(this, count, invokeCallback);
		}

		::System::Void RefreshForEquipCommon(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHFOREQUIPCOMMON_OFFSET))(this, itemData);
		}

		::System::Void RefreshViewForEquip(::Class_1_0D6706375CDAAE8C* itemData, ::Class_2_D89CCC627A66D0AD* AvatarData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEWFOREQUIP_OFFSET))(this, itemData, AvatarData);
		}

		::System::Void SetGetState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETGETSTATE_OFFSET))(this, active);
		}

		::System::Void SetAdditionalLabel(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETADDITIONALLABEL_OFFSET))(this, content);
		}

		::System::Void RefreshView_2(::Class_0_16E4307DCC419505_208* itemView)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_208*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_2_OFFSET))(this, itemView);
		}

		::System::Void RefreshATKState(::System::Boolean isShowATK, ::System::Int32 ATKValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHATKSTATE_OFFSET))(this, isShowATK, ATKValue);
		}

		::System::Void RefreshUpgradableEquip(::System::Boolean isShowUpgrade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHUPGRADABLEEQUIP_OFFSET))(this, isShowUpgrade);
		}

		::System::Void RefreshViewInner(::Class_0_16E4307DCC419505_208* itemView, ::System::Int32 curCount)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_208*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEWINNER_OFFSET))(this, itemView, curCount);
		}

		::System::Int32 GetItemID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETITEMID_OFFSET))(this);
		}

		::System::Int32 GetCurCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETCURCOUNT_OFFSET))(this);
		}

		::Class_1_0D6706375CDAAE8C* GetItemData()
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETITEMDATA_OFFSET))(this);
		}

		::System::Void SetCurCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCURCOUNT_OFFSET))(this, count);
		}

		::System::Int32 GetTargetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETTARGETCOUNT_OFFSET))(this);
		}

		::System::Void OnUIReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUIREUSE_OFFSET))(this);
		}

		::System::Void LightClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_LIGHTCLEAN_OFFSET))(this);
		}

		::System::Void SampleAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SAMPLEANIMATION_OFFSET))(this);
		}

		::System::Void PlayFadeInAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_PLAYFADEINANIMATION_OFFSET))(this);
		}

		::System::Single GetFadeInAnimationLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETFADEINANIMATIONLENGTH_OFFSET))(this);
		}

		::System::Single PlayFadeOutAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_PLAYFADEOUTANIMATION_OFFSET))(this);
		}

		::System::Void ResetImageControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_RESETIMAGECONTROL_OFFSET))(this);
		}

		::System::Void ResetImageControl_1(::Class_2_A8F5ABF31E066ED4* controlImage, ::System::Boolean cleanMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_RESETIMAGECONTROL_1_OFFSET))(this, controlImage, cleanMaterial);
		}

		::System::Void TryShowNegative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_TRYSHOWNEGATIVE_OFFSET))(this);
		}

		::System::Void SetEmptyState(::System::Boolean showEmptyLabel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET))(this, showEmptyLabel);
		}

		::System::Void SetShowEmptyLabel(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSHOWEMPTYLABEL_OFFSET))(this, isShow);
		}

		::System::Void UpdateNotificationBadgeByEvent(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_UPDATENOTIFICATIONBADGEBYEVENT_OFFSET))(this, args);
		}

		::System::Void UpdateNotificationBadge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_UPDATENOTIFICATIONBADGE_OFFSET))(this);
		}

		::System::Boolean get_InDepository()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET_INDEPOSITORY_OFFSET))(this);
		}

		::System::Void UpdateEquipNewHint(::System::Boolean EquipIsNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_UPDATEEQUIPNEWHINT_OFFSET))(this, EquipIsNew);
		}

		::System::Void HideEquipNewHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_HIDEEQUIPNEWHINT_OFFSET))(this);
		}

		::System::Boolean IsEquipNewHinting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ISEQUIPNEWHINTING_OFFSET))(this);
		}

		::System::Void DelEquipNewHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_DELEQUIPNEWHINT_OFFSET))(this);
		}

		::System::Void SetWishlistTargetAvatarInfo(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETWISHLISTTARGETAVATARINFO_OFFSET))(this, active);
		}

		::Class_2_60DDD9C206686F44* GetClickBtn()
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETCLICKBTN_OFFSET))(this);
		}

		::Class_2_60DDD9C206686F44* GetReduceBtn()
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETREDUCEBTN_OFFSET))(this);
		}

		::UnityEngine::RectTransform* PopUpRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPROOT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* PopUpRT()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPRT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* PopUpRD()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPRD_OFFSET))(this);
		}

		::UnityEngine::RectTransform* PopUpLD()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPLD_OFFSET))(this);
		}

		::UnityEngine::RectTransform* PopUpLT()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPLT_OFFSET))(this);
		}

		::System::Void _InitView_b__62_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__INITVIEW_B__62_0_OFFSET))(this);
		}

		::System::Void _RefreshForEquipCommon_b__98_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__REFRESHFOREQUIPCOMMON_B__98_0_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUIREUSE_OFFSET))(this);
		}
	};
}
