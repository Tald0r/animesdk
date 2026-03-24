#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_298DC3CE224F6DF8.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_635F39F6CFF8583C.h"
#include "unitysdk/Enum_3_80565EDC4420BFE0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_CDAC16D6E8EB95EB.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIRoleInfoPageController_UIRoleInfo_SubType.h"
#include "unitysdk/MoleMole/UIRoleSelectPageController___c__DisplayClass74_0.h"
#include "unitysdk/MoleMole/UIRoleSelectPageController___c__DisplayClass74_1.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2CCC5D7984CDCED4;
class Class_1_A0B1A57C6DC75B0F;
class Class_1_A11CB4C08EF906E4;
class Class_2_79AE422BA06F6D26_91;
class Class_2_C2B4B123B5A9B78A;
class Class_2_D89CCC627A66D0AD;
class Class_2_D8A9A175DA29EA90;
class MonoUITableScrollV2;
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace MoleMole { class UIRoleSelectPageContext_OnHandleRoleSelect; }
namespace MoleMole { class UIRoleTrustButtonWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessor_LocalPosZ_ByScrollY; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessor_LocalPositionY_DragY; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessor_RotateY_ByDeltaX; }
template <typename T> class Class_2_2BD3078077E999CE;

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_AFTERCLOSESCROLLTOCAMPIDLENODE_OFFSET UNITYSDK_OFFSET(0xA450E70)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_AUTOTOROLEINFO_OFFSET UNITYSDK_OFFSET(0xA44C080)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_BINDBTNS_OFFSET UNITYSDK_OFFSET(0xA451420)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_BUILDVIEWITEMS_OFFSET UNITYSDK_OFFSET(0xA44B640)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_CANNOTDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0xA4526B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_CHECKROLEBTNCANCLICK_OFFSET UNITYSDK_OFFSET(0xA453C60)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0xA4527C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_COLLECTRESULTSELECTEDAVATARITEM_OFFSET UNITYSDK_OFFSET(0xA44E7E0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_COLROW2INDEX_OFFSET UNITYSDK_OFFSET(0xA44D8F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_CREATESORTER_OFFSET UNITYSDK_OFFSET(0xA447B20)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_DONEWBIE_OFFSET UNITYSDK_OFFSET(0xA44AAA0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ENJOYAGENTMODE_OFFSET UNITYSDK_OFFSET(0xA447760)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ENTERSELECT_OFFSET UNITYSDK_OFFSET(0xA44D180)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTANDCLOSE_OFFSET UNITYSDK_OFFSET(0xA451050)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTCLOSE_OFFSET UNITYSDK_OFFSET(0xA459490)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTUISTOP_OFFSET UNITYSDK_OFFSET(0xA452740)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETINITSELECTIONINDEX_OFFSET UNITYSDK_OFFSET(0xA44D970)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0xA458430)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETSORTEDAVATARITEMLIST_OFFSET UNITYSDK_OFFSET(0xA44B250)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETTEAMSORTINDEX_OFFSET UNITYSDK_OFFSET(0xA44E740)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_FOCUSAVATARITEM_OFFSET UNITYSDK_OFFSET(0xA4461A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xA4469C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xA4462B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0xA446950)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA446940)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__FOCUSITEM_OFFSET UNITYSDK_OFFSET(0xA445D30)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__MULTISELECTON_OFFSET UNITYSDK_OFFSET(0xA4462D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__ROLEUPGRADEON_OFFSET UNITYSDK_OFFSET(0xA446600)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_INDEX2COLROW_OFFSET UNITYSDK_OFFSET(0xA44D100)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA446F30)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISHOLLOWGAMEROOM_OFFSET UNITYSDK_OFFSET(0xA459860)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISITEMLISTCHANGED_OFFSET UNITYSDK_OFFSET(0xA44CCA0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA452ED0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISTRAININGROOMSELECT_OFFSET UNITYSDK_OFFSET(0xA4512C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_JUMPROLEINFOPAGE_OFFSET UNITYSDK_OFFSET(0xA44C140)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA4597E0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET UNITYSDK_OFFSET(0xA4595C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_NEVERFILTERTED_OFFSET UNITYSDK_OFFSET(0xA4591E0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA452C40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCLICKSKINBTN_OFFSET UNITYSDK_OFFSET(0xA445B30)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCLOSEFILTERPOP_OFFSET UNITYSDK_OFFSET(0xA447970)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA4469D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONFAIRYBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xA453780)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONFAVORITEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xA452FD0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA4577B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xA4564E0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA457170)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xA458F10)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONMUTISELECTTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0xA449980)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONNEWBIENEXTSTEPHANDLE_OFFSET UNITYSDK_OFFSET(0xA457D90)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONOPENFILTERPOP_OFFSET UNITYSDK_OFFSET(0xA4477C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONPOTENTIALBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xA451AC0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK1_OFFSET UNITYSDK_OFFSET(0xA452880)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK2_OFFSET UNITYSDK_OFFSET(0xA4529C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK3_OFFSET UNITYSDK_OFFSET(0xA452B00)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLEITEMSELECT_OFFSET UNITYSDK_OFFSET(0xA44DC40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCAMPIDLEACTIVITY_OFFSET UNITYSDK_OFFSET(0xA450A50)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCAMPIDLE_OFFSET UNITYSDK_OFFSET(0xA450150)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCLICKED_OFFSET UNITYSDK_OFFSET(0xA44F420)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCLICKWHENDEFAULTUSAGE_OFFSET UNITYSDK_OFFSET(0xA44F6A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA4483D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSORTFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0xA458C20)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONTOGGLEMUTISELECT_OFFSET UNITYSDK_OFFSET(0xA459270)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONTOGGLEUPGRADEBTN_OFFSET UNITYSDK_OFFSET(0xA452000)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA456FD0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA446A70)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_PRELOADRTMODELFINISHED_OFFSET UNITYSDK_OFFSET(0xA459540)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_PROCESSUIAVATAR_OFFSET UNITYSDK_OFFSET(0xA455D00)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_READAVATARNEWREADDOT_OFFSET UNITYSDK_OFFSET(0xA44F590)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHALLSHOWAVATARITEMS_OFFSET UNITYSDK_OFFSET(0xA449CD0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHBUILDBTNVIEW_OFFSET UNITYSDK_OFFSET(0xA449440)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHFAIRYBTNICON_OFFSET UNITYSDK_OFFSET(0xA449740)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0xA4540C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xA4525D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSELECTICON_OFFSET UNITYSDK_OFFSET(0xA453CF0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSELECTROLEBYUPGRADE_OFFSET UNITYSDK_OFFSET(0xA44CE10)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_RELEASEPRELOADAVATAROBJ_OFFSET UNITYSDK_OFFSET(0xA456E10)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0xA44D570)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SENDFAVORITECSREQ_OFFSET UNITYSDK_OFFSET(0xA453460)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETMAINBTNSTATE_OFFSET UNITYSDK_OFFSET(0xA458DC0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSELECTBTNCOLOR_OFFSET UNITYSDK_OFFSET(0xA456150)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSELECTIONAVATARID_OFFSET UNITYSDK_OFFSET(0xA455270)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSHOWAVATAR_OFFSET UNITYSDK_OFFSET(0xA4552F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSHOWFOCUSAVATAR_OFFSET UNITYSDK_OFFSET(0xA453F90)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETUNACTIVEMAINBTN_OFFSET UNITYSDK_OFFSET(0xA449660)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SET__MULTISELECTON_OFFSET UNITYSDK_OFFSET(0xA4463A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SET__ROLEUPGRADEON_OFFSET UNITYSDK_OFFSET(0xA4466D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEAVATARSKINBTN_OFFSET UNITYSDK_OFFSET(0xA445DD0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEFAIRYBTNSTATE_OFFSET UNITYSDK_OFFSET(0xA454F00)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEFAVORITEBTNSTATE_OFFSET UNITYSDK_OFFSET(0xA454AA0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATETRAILTIME_OFFSET UNITYSDK_OFFSET(0xA454680)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__84_0_OFFSET UNITYSDK_OFFSET(0xA45A160)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__84_1_OFFSET UNITYSDK_OFFSET(0xA45A260)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__84_2_OFFSET UNITYSDK_OFFSET(0xA45A290)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__84_3_OFFSET UNITYSDK_OFFSET(0xA45A2C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__84_4_OFFSET UNITYSDK_OFFSET(0xA45A2F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__COLLECTRESULTSELECTEDAVATARITEM_G__ENSUREINDEX_77_0_OFFSET UNITYSDK_OFFSET(0xA44F3B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4599C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ISITEMLISTCHANGED_B__67_0_OFFSET UNITYSDK_OFFSET(0xA459E20)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONBACKBTNCLICK_B__98_0_OFFSET UNITYSDK_OFFSET(0xA45A320)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONBACKBTNCLICK_B__98_1_OFFSET UNITYSDK_OFFSET(0xA45A330)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONFAIRYBTNCLICKED_B__102_0_OFFSET UNITYSDK_OFFSET(0xA45A4A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONFAIRYBTNCLICKED_B__102_1_OFFSET UNITYSDK_OFFSET(0xA45A5A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSELECTCLICKWHENDEFAULTUSAGE_B__82_0_OFFSET UNITYSDK_OFFSET(0xA459F90)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSHOW_B__64_1_OFFSET UNITYSDK_OFFSET(0xA459D30)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSHOW_B__64_2_OFFSET UNITYSDK_OFFSET(0xA459D40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_B__129_1_OFFSET UNITYSDK_OFFSET(0xA45A740)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_B__129_2_OFFSET UNITYSDK_OFFSET(0xA45A7A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_G__DOMUTISELECTREFRESH_129_0_OFFSET UNITYSDK_OFFSET(0xA459460)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__REFRESHALLSHOWAVATARITEMS_G__TRYADDAVATAR_74_0_OFFSET UNITYSDK_OFFSET(0xA44E520)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__SENDFAVORITECSREQ_B__101_0_OFFSET UNITYSDK_OFFSET(0xA45A340)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_CLOSE_OFFSET UNITYSDK_OFFSET(0xA45A800)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0xA45A820)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_GET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0xA45A810)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA45A890)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA45A900)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xA45A980)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA45A9E0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xA45AA10)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA45AA70)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA45AA80)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA45AA90)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___N__0_OFFSET UNITYSDK_OFFSET(0xA45A150)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController_TypeDefinitionIndex = 79373;

	class UIRoleSelectPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* _rawImgFadeInAnimName; // 0x0
		// static const ::System::String* _rawImgFadeOutAnimName; // 0x0
		// static const ::System::String* UpgradeOpenRecordKey; // 0x0
		// static const ::System::String* UpgradeCloseRecordKey; // 0x0
		// static const ::System::String* FavoriteAvatarRecordKey; // 0x0
		::System::UInt32 prevSelectedAvatarID; // 0x2F8
		::System::Boolean prevAvatarCanOpenSkinPanel; // 0x2FC
		::System::Int32 AvatarUpgradeID; // 0x300
		::Enum_3_80565EDC4420BFE0 BuildBtnType; // 0x304
		::System::Boolean _disableSubViews; // 0x308
		::Enum_3_CDAC16D6E8EB95EB _usage; // 0x30C
		::System::Int32 MAX_ROWCONTEN_COUNT; // 0x310
		::System::Collections::Generic::List_1<::MonoUITableScrollV2*>* _scrollViews; // 0x318
		::Class_2_C2B4B123B5A9B78A* _RoleRTUnit; // 0x320
		::Class_2_D89CCC627A66D0AD* _showingAvatar; // 0x328
		::System::String* _multiSelectKey; // 0x330
		::System::Int32 _curFocusIndex; // 0x338
		::System::Boolean _firstShow; // 0x33C
		::System::String* _fromType; // 0x340
		::System::Boolean isDisposed; // 0x348
		::Class_2_79AE422BA06F6D26_91* _view; // 0x350
		::Class_2_D8A9A175DA29EA90* _roleModel; // 0x358
		::Class_1_A0B1A57C6DC75B0F* _selectionData; // 0x360
		::MoleMole::UIRoleSelectPageContext* _context; // 0x368
		::MoleMole::UIRoleSelectPageContext_OnHandleRoleSelect* _customSelectHandle; // 0x370
		::Enum_3_635F39F6CFF8583C _customSelectReturnType; // 0x378
		::System::Func_3<::Class_1_A0B1A57C6DC75B0F*, ::System::Action_1<::System::Boolean>*, ::System::Boolean>* _customSelectCheckHandle; // 0x380
		::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* _allShowAvatarItems; // 0x388
		::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>* _allItems; // 0x390
		::Il2CppArray<::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>*>* _listItems; // 0x398
		::Foundation::Coroutine::CoroutineHandle imgFadeOutClose; // 0x3A0
		::Class_2_2BD3078077E999CE<::Class_2_D89CCC627A66D0AD*>* _sorter; // 0x3A8
		::System::Boolean _isLoadingRTModel; // 0x3B0
		::UnityEngine::Animation* _rawImageAnim; // 0x3B8
		::System::Single _rawImgFadeOutTime; // 0x3C0
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType, ::MoleMole::UIGeneralPopUpHintWidgetController*>* _popUpHintCtrlDict; // 0x3C8
		::System::Collections::Generic::List_1<::System::Int32>* oldTabHandles; // 0x3D0
		::UnityEngine::UI::Extension::InteractionRangeProcessor_LocalPositionY_DragY* m_yMoveProcessor; // 0x3D8
		::UnityEngine::UI::Extension::InteractionRangeProcessor_RotateY_ByDeltaX* m_rotationProcessor; // 0x3E0
		::UnityEngine::UI::Extension::InteractionRangeProcessor_LocalPosZ_ByScrollY* m_depthProcessor; // 0x3E8
		::System::UInt32 _splitScreenHandler; // 0x3F0
		::System::Boolean m_hideSkillTabHint; // 0x3F4
		::System::Boolean isMainBtnShow; // 0x3F5
		::UnityEngine::GameObject* preloadAvatarObj; // 0x3F8
		::System::Boolean isPreloadAvatarFinished; // 0x400
		::MoleMole::UIRoleTrustButtonWidgetController* _roleTrustButtonWidget; // 0x408
		::System::Boolean _canShowFairyBtn; // 0x410

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnClickSkinBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCLICKSKINBTN_OFFSET))(this);
		}

		::System::Void UpdateAvatarSkinBtn(::System::UInt32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEAVATARSKINBTN_OFFSET))(this, avatarId);
		}

		::Class_2_D89CCC627A66D0AD* get_FocusAvatarItem()
		{
			return ((::Class_2_D89CCC627A66D0AD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_FOCUSAVATARITEM_OFFSET))(this);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_ISMULTISELECT_OFFSET))(this);
		}

		static ::System::Boolean get__multiSelectOn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__MULTISELECTON_OFFSET))();
		}

		static ::System::Void set__multiSelectOn(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SET__MULTISELECTON_OFFSET))(value);
		}

		static ::System::Boolean get__roleUpgradeOn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__ROLEUPGRADEON_OFFSET))();
		}

		static ::System::Void set__roleUpgradeOn(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SET__ROLEUPGRADEON_OFFSET))(value);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_TriggerNewbieOnShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET))(this);
		}

		::Class_1_2CCC5D7984CDCED4* get__focusItem()
		{
			return ((::Class_1_2CCC5D7984CDCED4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__FOCUSITEM_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void EnjoyAgentMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ENJOYAGENTMODE_OFFSET))(this);
		}

		::System::Void OnOpenFilterPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONOPENFILTERPOP_OFFSET))(this);
		}

		::System::Void OnCloseFilterPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCLOSEFILTERPOP_OFFSET))(this);
		}

		::System::Void CreateSorter(::System::Boolean addOwnFilterSorter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_CREATESORTER_OFFSET))(this, addOwnFilterSorter);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showContextBase)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSHOW_OFFSET))(this, showContextBase);
		}

		::System::Void DoNewbie(::System::Int32 initSelectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_DONEWBIE_OFFSET))(this, initSelectionID);
		}

		::System::Void AutoToRoleInfo(::System::Boolean isAuto, ::System::Int32 tabIndex, ::System::Boolean forceClickEquip, ::System::Boolean forceClickWeapon, ::System::Boolean withBlackFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_AUTOTOROLEINFO_OFFSET))(this, isAuto, tabIndex, forceClickEquip, forceClickWeapon, withBlackFadeIn);
		}

		::System::Boolean IsItemListChanged(::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* avatarItems)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISITEMLISTCHANGED_OFFSET))(this, avatarItems);
		}

		::System::Void BuildViewItems(::System::Int32 initSelectionID, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* avatarItems, ::System::Boolean fromSort)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_BUILDVIEWITEMS_OFFSET))(this, initSelectionID, avatarItems, fromSort);
		}

		::System::Void ScrollToTarget(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SCROLLTOTARGET_OFFSET))(this, index);
		}

		::System::Int32 ColRow2Index(::System::Int32 col, ::System::Int32 row)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_COLROW2INDEX_OFFSET))(this, col, row);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> Index2ColRow(::System::Int32 index)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_INDEX2COLROW_OFFSET))(this, index);
		}

		::System::Int32 GetInitSelectionIndex(::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>* sortedList, ::System::Int32 initSelectionID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETINITSELECTIONINDEX_OFFSET))(this, sortedList, initSelectionID);
		}

		::System::Void EnterSelect(::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>* sortedList, ::System::Int32 initSelectionID, ::System::Boolean selectLastItem, ::System::Int32 lastCenterChild, ::UnityEngine::Vector2 lastCenterChildCustomRange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>*, ::System::Int32, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ENTERSELECT_OFFSET))(this, sortedList, initSelectionID, selectLastItem, lastCenterChild, lastCenterChildCustomRange);
		}

		::System::Void RefreshAllShowAvatarItems(::System::Boolean showLockedAvatars, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* provideAvatarList, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* robots, ::System::Boolean allowSameName, ::Enum_3_298DC3CE224F6DF8 banSelfOwnedAvatarMode, ::System::Collections::Generic::HashSet_1<::System::Int32>* blacklist, ::System::Collections::Generic::HashSet_1<::System::Int32>* whitelist)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*, ::System::Boolean, ::Enum_3_298DC3CE224F6DF8, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHALLSHOWAVATARITEMS_OFFSET))(this, showLockedAvatars, provideAvatarList, robots, allowSameName, banSelfOwnedAvatarMode, blacklist, whitelist);
		}

		::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* GetSortedAvatarItemList()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETSORTEDAVATARITEMLIST_OFFSET))(this);
		}

		::System::Int32 GetTeamSortIndex(::Class_2_D89CCC627A66D0AD* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETTEAMSORTINDEX_OFFSET))(this, item);
		}

		::System::Object* CollectResultSelectedAvatarItem()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_COLLECTRESULTSELECTEDAVATARITEM_OFFSET))(this);
		}

		::System::Void OnSelectClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCLICKED_OFFSET))(this);
		}

		::System::Void OnSelectCampIdle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCAMPIDLE_OFFSET))(this);
		}

		::System::Void OnSelectCampIdleActivity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCAMPIDLEACTIVITY_OFFSET))(this);
		}

		::System::Void AfterCloseScrollToCampIdleNode(::System::Int32 focusNodeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_AFTERCLOSESCROLLTOCAMPIDLENODE_OFFSET))(this, focusNodeID);
		}

		::System::Void OnSelectClickWhenDefaultUsage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCLICKWHENDEFAULTUSAGE_OFFSET))(this);
		}

		::System::Void FadeOutAndClose(::Class_2_D89CCC627A66D0AD* fadeOutAvatarItemData, ::System::Action* afterFadeAction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTANDCLOSE_OFFSET))(this, fadeOutAvatarItemData, afterFadeAction);
		}

		::System::Void BindBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_BINDBTNS_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnPotentialBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONPOTENTIALBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnToggleUpgradeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONTOGGLEUPGRADEBTN_OFFSET))(this);
		}

		::System::Void RefreshSelectRoleByUpgrade(::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>* _allSelectItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSELECTROLEBYUPGRADE_OFFSET))(this, _allSelectItems);
		}

		::System::Void RefreshScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSCROLLVIEW_OFFSET))(this);
		}

		::System::Boolean CanNotDragHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_CANNOTDRAGHANDLER_OFFSET))(this);
		}

		::System::Void FadeOutUIStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTUISTOP_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_CLOSE_OFFSET))(this);
		}

		::System::Void OnRoleClick1(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK1_OFFSET))(this, index);
		}

		::System::Void OnRoleClick2(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK2_OFFSET))(this, index);
		}

		::System::Void OnRoleClick3(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK3_OFFSET))(this, index);
		}

		::System::Void OnBackBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONBACKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnFavoriteBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONFAVORITEBTNCLICKED_OFFSET))(this);
		}

		::System::Void SendFavoriteCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SENDFAVORITECSREQ_OFFSET))(this);
		}

		::System::Void OnFairyBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONFAIRYBTNCLICKED_OFFSET))(this);
		}

		::System::Boolean IsSelectionChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISSELECTIONCHANGED_OFFSET))(this);
		}

		::System::Boolean CheckRoleBtnCanClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_CHECKROLEBTNCANCLICK_OFFSET))(this);
		}

		::System::Void RefreshSelectIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSELECTICON_OFFSET))(this);
		}

		::System::Void OnRoleItemSelect(::System::Int32 index, ::System::Boolean isInitSelect, ::System::Boolean toggleMultiSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLEITEMSELECT_OFFSET))(this, index, isInitSelect, toggleMultiSelect);
		}

		::System::Void SetSelectionAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSELECTIONAVATARID_OFFSET))(this, avatarID);
		}

		::System::Void RefreshScrollViewItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSCROLLVIEWITEM_OFFSET))(this);
		}

		::System::Void SetShowFocusAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSHOWFOCUSAVATAR_OFFSET))(this);
		}

		::System::Void SetShowAvatar(::Class_2_D89CCC627A66D0AD* avatarItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSHOWAVATAR_OFFSET))(this, avatarItem);
		}

		::System::Void SetSelectBtnColor(::Class_2_D89CCC627A66D0AD* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSELECTBTNCOLOR_OFFSET))(this, itemData);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void SetUnActiveMainBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETUNACTIVEMAINBTN_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ReleasePreloadAvatarObj()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_RELEASEPRELOADAVATAROBJ_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnNewbieNextStepHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONNEWBIENEXTSTEPHANDLE_OFFSET))(this, obj);
		}

		::Class_1_A11CB4C08EF906E4* GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* config)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, config);
		}

		::System::Void JumpRoleInfoPage(::System::Int32 targetSubType, ::System::Boolean invokeSelectEvent, ::System::Boolean withOutLoading, ::System::Boolean forceClickEquip, ::System::Boolean forceClickWeapon, ::System::Boolean withBlackFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_JUMPROLEINFOPAGE_OFFSET))(this, targetSubType, invokeSelectEvent, withOutLoading, forceClickEquip, forceClickWeapon, withBlackFadeIn);
		}

		::System::Void ReadAvatarNewReadDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_READAVATARNEWREADDOT_OFFSET))(this);
		}

		::System::Void OnSortFilterChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSORTFILTERCHANGED_OFFSET))(this);
		}

		::System::Void SetMainBtnState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETMAINBTNSTATE_OFFSET))(this, isShow);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean NeverFilterted(::Class_2_D89CCC627A66D0AD* avatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_NEVERFILTERTED_OFFSET))(this, avatar);
		}

		::System::Void OnMutiSelectToggleChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONMUTISELECTTOGGLECHANGED_OFFSET))(this);
		}

		::System::Void OnToggleMutiSelect(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONTOGGLEMUTISELECT_OFFSET))(this, isOn);
		}

		::System::Void ProcessUIAvatar(::Class_2_D89CCC627A66D0AD* avatarData, ::System::Int32 showTypeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_PROCESSUIAVATAR_OFFSET))(this, avatarData, showTypeIndex);
		}

		::System::Void PreLoadRTModelFinished(::UnityEngine::GameObject* insObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_PRELOADRTMODELFINISHED_OFFSET))(this, insObj);
		}

		::System::Void LoadRTModelFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* FadeOutClose(::System::Action* action)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTCLOSE_OFFSET))(this, action);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Boolean IsHollowGameRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISHOLLOWGAMEROOM_OFFSET))(this);
		}

		::System::Boolean IsTrainingRoomSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISTRAININGROOMSELECT_OFFSET))(this);
		}

		::System::Void UpdateTrailTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATETRAILTIME_OFFSET))(this);
		}

		::System::Void UpdateFavoriteBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEFAVORITEBTNSTATE_OFFSET))(this);
		}

		::System::Void UpdateFairyBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEFAIRYBTNSTATE_OFFSET))(this);
		}

		::System::Void RefreshFairyBtnIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHFAIRYBTNICON_OFFSET))(this);
		}

		::System::Void RefreshBuildBtnView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHBUILDBTNVIEW_OFFSET))(this);
		}

		::System::Void _OnShow_b__64_1(::System::Boolean isOn, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSHOW_B__64_1_OFFSET))(this, isOn, isInit);
		}

		::System::Boolean _OnShow_b__64_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSHOW_B__64_2_OFFSET))(this);
		}

		::System::Boolean _IsItemListChanged_b__67_0(::Class_2_D89CCC627A66D0AD* t, ::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ISITEMLISTCHANGED_B__67_0_OFFSET))(this, t, i);
		}

		::System::Void _RefreshAllShowAvatarItems_g__TryAddAvatar_74_0(::Class_2_D89CCC627A66D0AD* avatar, ::MoleMole::UIRoleSelectPageController___c__DisplayClass74_0& a2, ::MoleMole::UIRoleSelectPageController___c__DisplayClass74_1& a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*, ::MoleMole::UIRoleSelectPageController___c__DisplayClass74_0&, ::MoleMole::UIRoleSelectPageController___c__DisplayClass74_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__REFRESHALLSHOWAVATARITEMS_G__TRYADDAVATAR_74_0_OFFSET))(this, avatar, a2, a3);
		}

		static ::System::Void _CollectResultSelectedAvatarItem_g__EnsureIndex_77_0(::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* list, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__COLLECTRESULTSELECTEDAVATARITEM_G__ENSUREINDEX_77_0_OFFSET))(list, idx);
		}

		::System::Void _OnSelectClickWhenDefaultUsage_b__82_0(::System::Boolean dispatch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSELECTCLICKWHENDEFAULTUSAGE_B__82_0_OFFSET))(this, dispatch);
		}

		::System::Void __n__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___N__0_OFFSET))(this);
		}

		::System::Void _BindBtns_b__84_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__84_0_OFFSET))(this);
		}

		::System::Void _BindBtns_b__84_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__84_1_OFFSET))(this);
		}

		::System::Void _BindBtns_b__84_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__84_2_OFFSET))(this);
		}

		::System::Void _BindBtns_b__84_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__84_3_OFFSET))(this);
		}

		::System::Void _BindBtns_b__84_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__84_4_OFFSET))(this);
		}

		::System::Void _OnBackBtnClick_b__98_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONBACKBTNCLICK_B__98_0_OFFSET))(this);
		}

		::System::Void _OnBackBtnClick_b__98_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONBACKBTNCLICK_B__98_1_OFFSET))(this);
		}

		::System::Void _SendFavoriteCsReq_b__101_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__SENDFAVORITECSREQ_B__101_0_OFFSET))(this);
		}

		::System::Void _OnFairyBtnClicked_b__102_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONFAIRYBTNCLICKED_B__102_0_OFFSET))(this);
		}

		::System::Void _OnFairyBtnClicked_b__102_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONFAIRYBTNCLICKED_B__102_1_OFFSET))(this);
		}

		::System::Void _OnToggleMutiSelect_b__129_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_B__129_1_OFFSET))(this);
		}

		::System::Void _OnToggleMutiSelect_b__129_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_B__129_2_OFFSET))(this);
		}

		::System::Void _OnToggleMutiSelect_g__DoMutiSelectRefresh_129_0(::System::Boolean nextOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_G__DOMUTISELECTREFRESH_129_0_OFFSET))(this, nextOn);
		}

		::System::Void __base_Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_CLOSE_OFFSET))(this);
		}

		::System::Boolean __base_get_TriggerNewbieOnShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_GET_TRIGGERNEWBIEONSHOW_OFFSET))(this);
		}

		::Class_1_A11CB4C08EF906E4* __base_GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* P0)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
