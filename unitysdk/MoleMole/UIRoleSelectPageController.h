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
#include "unitysdk/MoleMole/UIRoleSelectPageController___c__DisplayClass72_0.h"
#include "unitysdk/MoleMole/UIRoleSelectPageController___c__DisplayClass72_1.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_3CDBAA6BC10A7F83;
class Class_1_A0B1A57C6DC75B0F;
class Class_1_A11CB4C08EF906E4;
class Class_2_79AE422BA06F6D26_153;
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
template <typename T> class Class_2_7AE1A22930C1CD01;

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_AFTERCLOSESCROLLTOCAMPIDLENODE_OFFSET UNITYSDK_OFFSET(0xC3B8DF0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_AUTOTOROLEINFO_OFFSET UNITYSDK_OFFSET(0xC3B4000)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_BINDBTNS_OFFSET UNITYSDK_OFFSET(0xC3B93A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_BUILDVIEWITEMS_OFFSET UNITYSDK_OFFSET(0xC3B35C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_CANNOTDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0xC3BA620)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_CHECKROLEBTNCANCLICK_OFFSET UNITYSDK_OFFSET(0xC3BBBD0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0xC3BA730)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_COLLECTRESULTSELECTEDAVATARITEM_OFFSET UNITYSDK_OFFSET(0xC3B6760)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_COLROW2INDEX_OFFSET UNITYSDK_OFFSET(0xC3B5870)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_CREATESORTER_OFFSET UNITYSDK_OFFSET(0xC3AFAF0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_DONEWBIE_OFFSET UNITYSDK_OFFSET(0xC3B2A20)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ENJOYAGENTMODE_OFFSET UNITYSDK_OFFSET(0xC3AF730)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ENTERSELECT_OFFSET UNITYSDK_OFFSET(0xC3B5100)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTANDCLOSE_OFFSET UNITYSDK_OFFSET(0xC3B8FD0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTCLOSE_OFFSET UNITYSDK_OFFSET(0xC3C1440)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTUISTOP_OFFSET UNITYSDK_OFFSET(0xC3BA6B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETINITSELECTIONINDEX_OFFSET UNITYSDK_OFFSET(0xC3B58F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0xC3C03E0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETSORTEDAVATARITEMLIST_OFFSET UNITYSDK_OFFSET(0xC3B31D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETTEAMSORTINDEX_OFFSET UNITYSDK_OFFSET(0xC3B66C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_FOCUSAVATARITEM_OFFSET UNITYSDK_OFFSET(0xC3AE190)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xC3AE9A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0xC3AE930)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xC3AE920)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__FOCUSITEM_OFFSET UNITYSDK_OFFSET(0xC3ADD20)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__MULTISELECTON_OFFSET UNITYSDK_OFFSET(0xC3AE2A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__ROLEUPGRADEON_OFFSET UNITYSDK_OFFSET(0xC3AE5E0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_INDEX2COLROW_OFFSET UNITYSDK_OFFSET(0xC3B5080)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xC3AEF10)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISHOLLOWGAMEROOM_OFFSET UNITYSDK_OFFSET(0xC3C1810)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISITEMLISTCHANGED_OFFSET UNITYSDK_OFFSET(0xC3B4C20)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xC3BAE40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISTRAININGROOMSELECT_OFFSET UNITYSDK_OFFSET(0xC3B9240)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_JUMPROLEINFOPAGE_OFFSET UNITYSDK_OFFSET(0xC3B40C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC3C1790)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET UNITYSDK_OFFSET(0xC3C1570)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_NEVERFILTERTED_OFFSET UNITYSDK_OFFSET(0xC3C1190)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xC3BABB0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCLICKSKINBTN_OFFSET UNITYSDK_OFFSET(0xC3ADB20)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCLOSEFILTERPOP_OFFSET UNITYSDK_OFFSET(0xC3AF940)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC3AE9B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONFAIRYBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xC3BB6F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONFAVORITEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xC3BAF40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xC3BF760)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xC3BE470)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xC3BF110)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xC3C0EC0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONMUTISELECTTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0xC3B1910)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONNEWBIENEXTSTEPHANDLE_OFFSET UNITYSDK_OFFSET(0xC3BFD40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONOPENFILTERPOP_OFFSET UNITYSDK_OFFSET(0xC3AF790)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONPOTENTIALBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xC3B9A30)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK1_OFFSET UNITYSDK_OFFSET(0xC3BA7F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK2_OFFSET UNITYSDK_OFFSET(0xC3BA930)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK3_OFFSET UNITYSDK_OFFSET(0xC3BAA70)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLEITEMSELECT_OFFSET UNITYSDK_OFFSET(0xC3B5BC0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCAMPIDLEACTIVITY_OFFSET UNITYSDK_OFFSET(0xC3B89D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCAMPIDLE_OFFSET UNITYSDK_OFFSET(0xC3B80D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCLICKED_OFFSET UNITYSDK_OFFSET(0xC3B73A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCLICKWHENDEFAULTUSAGE_OFFSET UNITYSDK_OFFSET(0xC3B7620)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC3B0370)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSORTFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0xC3C0BD0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONTOGGLEMUTISELECT_OFFSET UNITYSDK_OFFSET(0xC3C1220)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONTOGGLEUPGRADEBTN_OFFSET UNITYSDK_OFFSET(0xC3B9F70)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC3BEF60)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC3AEA50)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_PRELOADRTMODELFINISHED_OFFSET UNITYSDK_OFFSET(0xC3C14F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_PROCESSUIAVATAR_OFFSET UNITYSDK_OFFSET(0xC3BDC80)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_READAVATARNEWREADDOT_OFFSET UNITYSDK_OFFSET(0xC3B7510)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHALLSHOWAVATARITEMS_OFFSET UNITYSDK_OFFSET(0xC3B1C60)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHBUILDBTNVIEW_OFFSET UNITYSDK_OFFSET(0xC3B13D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHFAIRYBTNICON_OFFSET UNITYSDK_OFFSET(0xC3B16D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0xC3BC030)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xC3BA540)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSELECTICON_OFFSET UNITYSDK_OFFSET(0xC3BBC60)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSELECTROLEBYUPGRADE_OFFSET UNITYSDK_OFFSET(0xC3B4D90)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_RELEASEPRELOADAVATAROBJ_OFFSET UNITYSDK_OFFSET(0xC3BEDA0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0xC3B54F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SENDFAVORITECSREQ_OFFSET UNITYSDK_OFFSET(0xC3BB3D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETMAINBTNSTATE_OFFSET UNITYSDK_OFFSET(0xC3C0D70)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSELECTBTNCOLOR_OFFSET UNITYSDK_OFFSET(0xC3BE0D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSELECTIONAVATARID_OFFSET UNITYSDK_OFFSET(0xC3BD1E0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSHOWAVATAR_OFFSET UNITYSDK_OFFSET(0xC3BD260)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSHOWFOCUSAVATAR_OFFSET UNITYSDK_OFFSET(0xC3BBF00)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETUNACTIVEMAINBTN_OFFSET UNITYSDK_OFFSET(0xC3B15F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SET__MULTISELECTON_OFFSET UNITYSDK_OFFSET(0xC3AE370)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SET__ROLEUPGRADEON_OFFSET UNITYSDK_OFFSET(0xC3AE6B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEAVATARSKINBTN_OFFSET UNITYSDK_OFFSET(0xC3ADDC0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEFAIRYBTNSTATE_OFFSET UNITYSDK_OFFSET(0xC3BCE70)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEFAVORITEBTNSTATE_OFFSET UNITYSDK_OFFSET(0xC3BCA10)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATETRAILTIME_OFFSET UNITYSDK_OFFSET(0xC3BC5F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__82_0_OFFSET UNITYSDK_OFFSET(0xC3C2110)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__82_1_OFFSET UNITYSDK_OFFSET(0xC3C2210)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__82_2_OFFSET UNITYSDK_OFFSET(0xC3C2240)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__82_3_OFFSET UNITYSDK_OFFSET(0xC3C2270)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__82_4_OFFSET UNITYSDK_OFFSET(0xC3C22A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__COLLECTRESULTSELECTEDAVATARITEM_G__ENSUREINDEX_75_0_OFFSET UNITYSDK_OFFSET(0xC3B7330)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC3C1970)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ISITEMLISTCHANGED_B__65_0_OFFSET UNITYSDK_OFFSET(0xC3C1DD0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONBACKBTNCLICK_B__96_0_OFFSET UNITYSDK_OFFSET(0xC3C22D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONBACKBTNCLICK_B__96_1_OFFSET UNITYSDK_OFFSET(0xC3C22E0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONFAIRYBTNCLICKED_B__100_0_OFFSET UNITYSDK_OFFSET(0xC3C2450)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONFAIRYBTNCLICKED_B__100_1_OFFSET UNITYSDK_OFFSET(0xC3C2550)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSELECTCLICKWHENDEFAULTUSAGE_B__80_0_OFFSET UNITYSDK_OFFSET(0xC3C1F40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSHOW_B__62_1_OFFSET UNITYSDK_OFFSET(0xC3C1CE0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSHOW_B__62_2_OFFSET UNITYSDK_OFFSET(0xC3C1CF0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_B__127_1_OFFSET UNITYSDK_OFFSET(0xC3C26F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_B__127_2_OFFSET UNITYSDK_OFFSET(0xC3C2750)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_G__DOMUTISELECTREFRESH_127_0_OFFSET UNITYSDK_OFFSET(0xC3C1410)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__REFRESHALLSHOWAVATARITEMS_G__TRYADDAVATAR_72_0_OFFSET UNITYSDK_OFFSET(0xC3B64A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__SENDFAVORITECSREQ_B__99_0_OFFSET UNITYSDK_OFFSET(0xC3C22F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_CLOSE_OFFSET UNITYSDK_OFFSET(0xC3C27B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0xC3C27D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_GET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0xC3C27C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC3C2840)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xC3C28B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xC3C2930)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xC3C2990)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xC3C29C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC3C2A20)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC3C2A30)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC3C2A40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___N__0_OFFSET UNITYSDK_OFFSET(0xC3C2100)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController_TypeDefinitionIndex = 51286;

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
		::Class_2_79AE422BA06F6D26_153* _view; // 0x350
		::Class_2_D8A9A175DA29EA90* _roleModel; // 0x358
		::Class_1_A0B1A57C6DC75B0F* _selectionData; // 0x360
		::MoleMole::UIRoleSelectPageContext* _context; // 0x368
		::MoleMole::UIRoleSelectPageContext_OnHandleRoleSelect* _customSelectHandle; // 0x370
		::Enum_3_635F39F6CFF8583C _customSelectReturnType; // 0x378
		::System::Func_3<::Class_1_A0B1A57C6DC75B0F*, ::System::Action_1<::System::Boolean>*, ::System::Boolean>* _customSelectCheckHandle; // 0x380
		::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* _allShowAvatarItems; // 0x388
		::System::Collections::Generic::List_1<::Class_1_3CDBAA6BC10A7F83*>* _allItems; // 0x390
		::Il2CppArray<::System::Collections::Generic::List_1<::Class_1_3CDBAA6BC10A7F83*>*>* _listItems; // 0x398
		::Foundation::Coroutine::CoroutineHandle imgFadeOutClose; // 0x3A0
		::Class_2_7AE1A22930C1CD01<::Class_2_D89CCC627A66D0AD*>* _sorter; // 0x3A8
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

		::Class_1_3CDBAA6BC10A7F83* get__focusItem()
		{
			return ((::Class_1_3CDBAA6BC10A7F83*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__FOCUSITEM_OFFSET))(this);
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

		::System::Int32 GetInitSelectionIndex(::System::Collections::Generic::List_1<::Class_1_3CDBAA6BC10A7F83*>* sortedList, ::System::Int32 initSelectionID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3CDBAA6BC10A7F83*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETINITSELECTIONINDEX_OFFSET))(this, sortedList, initSelectionID);
		}

		::System::Void EnterSelect(::System::Collections::Generic::List_1<::Class_1_3CDBAA6BC10A7F83*>* sortedList, ::System::Int32 initSelectionID, ::System::Boolean selectLastItem, ::System::Int32 lastCenterChild, ::UnityEngine::Vector2 lastCenterChildCustomRange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3CDBAA6BC10A7F83*>*, ::System::Int32, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ENTERSELECT_OFFSET))(this, sortedList, initSelectionID, selectLastItem, lastCenterChild, lastCenterChildCustomRange);
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

		::System::Void RefreshSelectRoleByUpgrade(::System::Collections::Generic::List_1<::Class_1_3CDBAA6BC10A7F83*>* _allSelectItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3CDBAA6BC10A7F83*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSELECTROLEBYUPGRADE_OFFSET))(this, _allSelectItems);
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

		::System::Void _OnShow_b__62_1(::System::Boolean isOn, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSHOW_B__62_1_OFFSET))(this, isOn, isInit);
		}

		::System::Boolean _OnShow_b__62_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSHOW_B__62_2_OFFSET))(this);
		}

		::System::Boolean _IsItemListChanged_b__65_0(::Class_2_D89CCC627A66D0AD* t, ::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ISITEMLISTCHANGED_B__65_0_OFFSET))(this, t, i);
		}

		::System::Void _RefreshAllShowAvatarItems_g__TryAddAvatar_72_0(::Class_2_D89CCC627A66D0AD* avatar, ::MoleMole::UIRoleSelectPageController___c__DisplayClass72_0& a2, ::MoleMole::UIRoleSelectPageController___c__DisplayClass72_1& a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*, ::MoleMole::UIRoleSelectPageController___c__DisplayClass72_0&, ::MoleMole::UIRoleSelectPageController___c__DisplayClass72_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__REFRESHALLSHOWAVATARITEMS_G__TRYADDAVATAR_72_0_OFFSET))(this, avatar, a2, a3);
		}

		static ::System::Void _CollectResultSelectedAvatarItem_g__EnsureIndex_75_0(::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* list, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__COLLECTRESULTSELECTEDAVATARITEM_G__ENSUREINDEX_75_0_OFFSET))(list, idx);
		}

		::System::Void _OnSelectClickWhenDefaultUsage_b__80_0(::System::Boolean dispatch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSELECTCLICKWHENDEFAULTUSAGE_B__80_0_OFFSET))(this, dispatch);
		}

		::System::Void __n__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___N__0_OFFSET))(this);
		}

		::System::Void _BindBtns_b__82_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__82_0_OFFSET))(this);
		}

		::System::Void _BindBtns_b__82_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__82_1_OFFSET))(this);
		}

		::System::Void _BindBtns_b__82_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__82_2_OFFSET))(this);
		}

		::System::Void _BindBtns_b__82_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__82_3_OFFSET))(this);
		}

		::System::Void _BindBtns_b__82_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__82_4_OFFSET))(this);
		}

		::System::Void _OnBackBtnClick_b__96_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONBACKBTNCLICK_B__96_0_OFFSET))(this);
		}

		::System::Void _OnBackBtnClick_b__96_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONBACKBTNCLICK_B__96_1_OFFSET))(this);
		}

		::System::Void _SendFavoriteCsReq_b__99_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__SENDFAVORITECSREQ_B__99_0_OFFSET))(this);
		}

		::System::Void _OnFairyBtnClicked_b__100_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONFAIRYBTNCLICKED_B__100_0_OFFSET))(this);
		}

		::System::Void _OnFairyBtnClicked_b__100_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONFAIRYBTNCLICKED_B__100_1_OFFSET))(this);
		}

		::System::Void _OnToggleMutiSelect_b__127_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_B__127_1_OFFSET))(this);
		}

		::System::Void _OnToggleMutiSelect_b__127_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_B__127_2_OFFSET))(this);
		}

		::System::Void _OnToggleMutiSelect_g__DoMutiSelectRefresh_127_0(::System::Boolean nextOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_G__DOMUTISELECTREFRESH_127_0_OFFSET))(this, nextOn);
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
