#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BCF38F46F7CC12F2.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_509DCA6CF8698226.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_0_16E4307DCC419505_265;
class Class_1_0D6706375CDAAE8C;
class Class_2_60DDD9C206686F44;
class Class_2_9D9172C07F82DDAE;
class Class_2_A3CFC20DC3954F5C;
class Class_2_A3CFC20DC3954F5C_1;
class Class_2_A8F5ABF31E066ED4;
class Class_2_D23CB76C2A86EF60;
class Class_2_D89CCC627A66D0AD;
class Class_3_19EF277AF5D11235_1;
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

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_CLEARCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x7FA3780)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_DELEQUIPNEWHINT_OFFSET UNITYSDK_OFFSET(0x7F97510)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ENABLESELECTSCALEANIM_OFFSET UNITYSDK_OFFSET(0x7F97240)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETCLICKBTN_OFFSET UNITYSDK_OFFSET(0x7FA6540)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETCURCOUNT_OFFSET UNITYSDK_OFFSET(0x7FA3850)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETFADEINANIMATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x7FA5D40)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETGAMEPADSELECTABLE_OFFSET UNITYSDK_OFFSET(0x7F93580)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETINDEX_OFFSET UNITYSDK_OFFSET(0x7F9D5B0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETITEMDATA_OFFSET UNITYSDK_OFFSET(0x7FA59F0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETITEMID_OFFSET UNITYSDK_OFFSET(0x7FA5980)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETREDUCEBTN_OFFSET UNITYSDK_OFFSET(0x7FA6610)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GETTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x7FA5AE0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET_INDEPOSITORY_OFFSET UNITYSDK_OFFSET(0x7F93470)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x7F92D50)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x7F92A70)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET__ENABLECLICK_OFFSET UNITYSDK_OFFSET(0x7F92CD0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x7F92A80)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x7F92AF0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_HASITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x7F942E0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_HIDECOUNT_OFFSET UNITYSDK_OFFSET(0x7F9DF70)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_HIDEEQUIPNEWHINT_OFFSET UNITYSDK_OFFSET(0x7FA6000)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x7F931F0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ISEQUIPNEWHINTING_OFFSET UNITYSDK_OFFSET(0x7FA6310)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_LIGHTCLEAN_OFFSET UNITYSDK_OFFSET(0x7F947D0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x7FA3D20)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x7F94580)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONFOCUSSTATECHANGEDFORGAMEPADMODULE_OFFSET UNITYSDK_OFFSET(0x7F96DE0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONFOCUSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x7F96E50)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x7F9D4D0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0x7F938E0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x7F97790)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x7F94640)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7F96C80)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7F92F70)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7F93650)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0x7F9AA00)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x7FA5C40)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_PLAYFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x7FA5E20)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPLD_OFFSET UNITYSDK_OFFSET(0x7FA69E0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPLT_OFFSET UNITYSDK_OFFSET(0x7FA6AE0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPRD_OFFSET UNITYSDK_OFFSET(0x7FA68E0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPROOT_OFFSET UNITYSDK_OFFSET(0x7FA66E0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_POPUPRT_OFFSET UNITYSDK_OFFSET(0x7FA67E0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHATKSTATE_OFFSET UNITYSDK_OFFSET(0x7FA56B0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHFOREQUIPCOMMON_OFFSET UNITYSDK_OFFSET(0x7FA44E0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHPROFESSIONICON_OFFSET UNITYSDK_OFFSET(0x7F9BD10)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHSTARANDLEVEL_OFFSET UNITYSDK_OFFSET(0x7F9C920)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHUPGRADABLEEQUIP_OFFSET UNITYSDK_OFFSET(0x7FA5880)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEWFOREQUIP_OFFSET UNITYSDK_OFFSET(0x7FA4A40)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEWINNER_OFFSET UNITYSDK_OFFSET(0x7FA4EA0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x7FA2C40)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_2_OFFSET UNITYSDK_OFFSET(0x7F979A0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x7FA28B0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_RESETIMAGECONTROL_1_OFFSET UNITYSDK_OFFSET(0x7FA5F60)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_RESETIMAGECONTROL_OFFSET UNITYSDK_OFFSET(0x7F95C90)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_RESETSELECTOBJALPHA_OFFSET UNITYSDK_OFFSET(0x7F96C10)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x7FA5B50)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETADDITIONALLABEL_OFFSET UNITYSDK_OFFSET(0x7FA4CC0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETBTNENABLE_OFFSET UNITYSDK_OFFSET(0x7F94350)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCHECKSELECTFOCUS_OFFSET UNITYSDK_OFFSET(0x7F9D7B0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCHECK_OFFSET UNITYSDK_OFFSET(0x7F9D620)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCLICKBTNLONGPRESSENABLED_OFFSET UNITYSDK_OFFSET(0x7FA3560)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCOMMONDRESS_OFFSET UNITYSDK_OFFSET(0x7F9DD90)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETCURCOUNT_OFFSET UNITYSDK_OFFSET(0x7FA5A70)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x7F99510)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETENABLEEMPTYCLICK_OFFSET UNITYSDK_OFFSET(0x7F9E1F0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETEQUIPEDFLAG_OFFSET UNITYSDK_OFFSET(0x7F9B6F0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETFIRSTPASSSTATE_OFFSET UNITYSDK_OFFSET(0x7F941E0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETGETSTATE_OFFSET UNITYSDK_OFFSET(0x7FA4BC0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETINDEX_OFFSET UNITYSDK_OFFSET(0x7F97930)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x7F93950)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMIDSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x7F92D60)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMID_OFFSET UNITYSDK_OFFSET(0x7FA2B70)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMINFO_OFFSET UNITYSDK_OFFSET(0x7F9E4C0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETITEMLONGPREEACT_OFFSET UNITYSDK_OFFSET(0x7F939C0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETLOCK_OFFSET UNITYSDK_OFFSET(0x7F9DA50)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETMASKSTATE_OFFSET UNITYSDK_OFFSET(0x7F93B50)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETMAX_OFFSET UNITYSDK_OFFSET(0x7F93AE0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETMUTECLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x7F943C0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETNEEDCACHE_OFFSET UNITYSDK_OFFSET(0x7F92B60)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETRECYCLE_OFFSET UNITYSDK_OFFSET(0x7F9DE80)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETREDUCEBTNLONGPRESSENABLED_OFFSET UNITYSDK_OFFSET(0x7FA3670)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETREDUCEBTN_OFFSET UNITYSDK_OFFSET(0x7F9C690)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETREWARDBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x7F93F30)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x7F990F0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSELECTOBJALPHA_OFFSET UNITYSDK_OFFSET(0x7F96F70)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSHOWEMPTYLABEL_OFFSET UNITYSDK_OFFSET(0x7FA6230)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSHOWEQUIPNEWTAG_OFFSET UNITYSDK_OFFSET(0x7F94510)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETSHOWSELECT_OFFSET UNITYSDK_OFFSET(0x7F944A0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETTRANSGRAY_OFFSET UNITYSDK_OFFSET(0x7F93C90)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETTYPEICONSTATE_OFFSET UNITYSDK_OFFSET(0x7F9BA10)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETUPSTATE_OFFSET UNITYSDK_OFFSET(0x7F93E30)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETWISHLISTTARGETAVATARINFO_OFFSET UNITYSDK_OFFSET(0x7FA52C0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SET__ENABLECLICK_OFFSET UNITYSDK_OFFSET(0x7F92BD0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SHOWEQUIPPOS_OFFSET UNITYSDK_OFFSET(0x7FA22C0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SHOWREDUCEBTN_OFFSET UNITYSDK_OFFSET(0x7F94430)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_TRYSHOWNEGATIVE_OFFSET UNITYSDK_OFFSET(0x7FA3E50)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_UPDATEEQUIPNEWHINT_OFFSET UNITYSDK_OFFSET(0x7FA20B0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_UPDATEEQUIPVIEW_OFFSET UNITYSDK_OFFSET(0x7FA1780)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_UPDATENOTIFICATIONBADGEBYEVENT_OFFSET UNITYSDK_OFFSET(0x7FA62A0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_UPDATENOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x7F98A00)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__ADD_OFFSET UNITYSDK_OFFSET(0x7FA3EF0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7FA6BE0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__INITVIEW_B__63_0_OFFSET UNITYSDK_OFFSET(0x7FA6C00)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__REDUCE_OFFSET UNITYSDK_OFFSET(0x7FA38C0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__REFRESHFOREQUIPCOMMON_B__99_0_OFFSET UNITYSDK_OFFSET(0x7FA6C60)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x7FA6CF0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x7FA6D80)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x7FA6DF0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0x7FA6E60)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x7FA6D00)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x7FA6EC0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7FA6ED0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7FA6F50)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7FA6FB0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___BASE_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0x7FA7020)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController_TypeDefinitionIndex = 72500;

	class UIItemIconBtnWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Single NORMAL_ALPHA; // 0x0
		// static const ::System::Single TRANSPARENT_ALPHA; // 0x0
		::MoleMole::UIDoubleTipsInfoWidgetController* _tipsWidget; // 0x2D0
		::System::Int32 _itemID; // 0x2D8
		::Class_0_16E4307DCC419505_265* _itemView; // 0x2E0
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

		::Class_3_19EF277AF5D11235_1* get__view()
		{
			return ((::Class_3_19EF277AF5D11235_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_GET__VIEW_OFFSET))(this);
		}

		::System::Void SetNeedCache(::System::Boolean needCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_SETNEEDCACHE_OFFSET))(this, needCache);
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

		::System::Void RefreshProfessionIcon(::Class_2_A3CFC20DC3954F5C* weapon, ::Class_2_D89CCC627A66D0AD* checkAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A3CFC20DC3954F5C*, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHPROFESSIONICON_OFFSET))(this, weapon, checkAvatar);
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

		::System::Void UpdateEquipView(::Class_2_A3CFC20DC3954F5C_1* equip)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A3CFC20DC3954F5C_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_UPDATEEQUIPVIEW_OFFSET))(this, equip);
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

		::System::Void RefreshView_2(::Class_0_16E4307DCC419505_265* itemView)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_265*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_2_OFFSET))(this, itemView);
		}

		::System::Void RefreshATKState(::System::Boolean isShowATK, ::System::Int32 ATKValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHATKSTATE_OFFSET))(this, isShowATK, ATKValue);
		}

		::System::Void RefreshUpgradableEquip(::System::Boolean isShowUpgrade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHUPGRADABLEEQUIP_OFFSET))(this, isShowUpgrade);
		}

		::System::Void RefreshViewInner(::Class_0_16E4307DCC419505_265* itemView, ::System::Int32 curCount)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_265*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_REFRESHVIEWINNER_OFFSET))(this, itemView, curCount);
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

		::System::Void _InitView_b__63_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__INITVIEW_B__63_0_OFFSET))(this);
		}

		::System::Void _RefreshForEquipCommon_b__99_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER__REFRESHFOREQUIPCOMMON_B__99_0_OFFSET))(this);
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
