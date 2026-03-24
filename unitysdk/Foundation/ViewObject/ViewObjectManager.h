#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/ViewObject/BackStageEntityLoadingTask.h"
#include "unitysdk/Foundation/ViewObject/Container/MapHandle.h"
#include "unitysdk/Foundation/ViewObject/Container/SparseElementHandle_1.h"
#include "unitysdk/Foundation/ViewObject/EReloadGroupReason.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/ViewObject/InternalSceneEntityDestroyRequest.h"
#include "unitysdk/Foundation/ViewObject/SceneEntityData.h"
#include "unitysdk/Foundation/ViewObject/SceneGroupData.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectLoadingTask.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_GroupOrderMgr.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_InnerCreateMemberListHandle.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_InternalSequenceVoStateRequest.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_InternalSequenceVoStateRequestType.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_VOLogID.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_ViewObjectLog.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_50C9EB011AF67869.h"
#include "unitysdk/Struct_2_5491A6A4F64DECE9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5FA9CCDDD9957726;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1;
class Class_1_B7E341C5F1A6F199;
class Class_3_07AAFA6F7F79BEB3;
class Class_3_126510A8BEABCBD0_12;
class Class_3_1A345EAE5F749316_118;
class Class_3_2FC14B34F30FBD20_1;
class Class_3_30235BB967CBDA73_7;
class Class_3_3EC97B498E0B85D2;
namespace Foundation::ViewObject { class GroupMemberCollection; }
namespace Foundation::ViewObject { class GroupVariableHelper; }
namespace Foundation::ViewObject { class ViewObject; }
namespace Foundation::ViewObject { class ViewObjectManager_ReloadParamBase; }
namespace Foundation::ViewObject { class ViewObjectManager_ViewObjectModifyDelegate; }
namespace Foundation::ViewObject::Container { template <typename T> class HandledMap_1; }
namespace Foundation::ViewObject::Container { template <typename T> class TSparseList_1; }
namespace Foundation::ViewObject::Subsystem { class GroupStateHelper; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
template <typename T1, typename T2> class Class_1_91DE080BA52DB786;
template <typename T> class Class_1_4109B64C3CE1B638;

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ACTIVEGROUPSUITE_OFFSET UNITYSDK_OFFSET(0xB8007A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ACTIVEROLLBACKPOINT_1_OFFSET UNITYSDK_OFFSET(0xB800B00)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ACTIVEROLLBACKPOINT_OFFSET UNITYSDK_OFFSET(0xB800A60)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ADDEXTRASUITE_OFFSET UNITYSDK_OFFSET(0xB8022F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ADDTAGTOVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB803010)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ADD_ONPOSTVIEWOBJECTCREATED_OFFSET UNITYSDK_OFFSET(0xB806B90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ADD_ONPOSTVIEWOBJECTREADY_OFFSET UNITYSDK_OFFSET(0xB806D90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ADD_ONPREVIEWOBJECTDESTROYED_OFFSET UNITYSDK_OFFSET(0xB806C90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CANMERGERELOAD_OFFSET UNITYSDK_OFFSET(0xB801500)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CHECKBACKSTAGEENTITYLOADINGTASKFINISHED_OFFSET UNITYSDK_OFFSET(0xB804600)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CHECKFRONTSTAGEENTITYDESTROYTASKFINISHED_OFFSET UNITYSDK_OFFSET(0xB804A70)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CHECKTRIGGERRECEIVERAFTERSUITECHANGE_OFFSET UNITYSDK_OFFSET(0xB802640)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CHECKVIEWOBJECTLOADINGTASKFINISHED_OFFSET UNITYSDK_OFFSET(0xB804260)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CLEARALLSERVERVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB7FE680)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CLEARALL_OFFSET UNITYSDK_OFFSET(0xB806E90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CLIENT_ADDVIEWOBJECTIDMAP_OFFSET UNITYSDK_OFFSET(0xB7F9FF0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CLIENT_DESTROYVIEWOBJECTIDMAP_OFFSET UNITYSDK_OFFSET(0xB7FA420)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CONTAINSVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB7FF4B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CREATEGROUPMEMBERLIST_OFFSET UNITYSDK_OFFSET(0xB800590)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CREATEVIEWOBJECTBYCONFIGID_OFFSET UNITYSDK_OFFSET(0xB7F9C70)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CREATEVIEWOBJECTBYGROUPINFO_OFFSET UNITYSDK_OFFSET(0xB7FE250)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CREATEVIEWOBJECTBYSERVERINFO_OFFSET UNITYSDK_OFFSET(0xB7FDC60)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CREATEVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB805D90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CREATE_OFFSET UNITYSDK_OFFSET(0xB804C60)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DEACTIVATEGROUP_OFFSET UNITYSDK_OFFSET(0xB800910)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0xB8054C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DESTROYMEMBER_OFFSET UNITYSDK_OFFSET(0xB7CB0A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DESTROYVIEWOBJECTBYCONFIGID_OFFSET UNITYSDK_OFFSET(0xB7F9DC0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DESTROYVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB7F9EC0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8055D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DORELOADALLGROUP_OFFSET UNITYSDK_OFFSET(0xB8016C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DORELOADGROUPSUITE_OFFSET UNITYSDK_OFFSET(0xB801800)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DORELOADGROUP_OFFSET UNITYSDK_OFFSET(0xB8015E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ENTITYAPPEAR_OFFSET UNITYSDK_OFFSET(0xB7FD9C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ENTITYDISAPPEAR_OFFSET UNITYSDK_OFFSET(0xB7FDEF0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FINDMEMBERSERVERINFO_OFFSET UNITYSDK_OFFSET(0xB7CBAD0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FINDSCENEENTITYINFO_OFFSET UNITYSDK_OFFSET(0xB7FB680)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FINDVIEWOBJECTBYNETID_OFFSET UNITYSDK_OFFSET(0xB7FF530)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FINDVIEWOBJECTHANDLE_OFFSET UNITYSDK_OFFSET(0xB7FB430)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FLUSHLOGS_OFFSET UNITYSDK_OFFSET(0xB802160)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FLUSHSCENEENTITYDESTROYREQUESTS_OFFSET UNITYSDK_OFFSET(0xB7FD430)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FLUSHVIEWOBJECTSTATE_OFFSET UNITYSDK_OFFSET(0xB806550)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FORCECANCELRELOAD_OFFSET UNITYSDK_OFFSET(0xB800F10)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETALLGROUPS_OFFSET UNITYSDK_OFFSET(0xB7FF220)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETGROUPINSTANCE_OFFSET UNITYSDK_OFFSET(0xB7FF310)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETGROUPMEMBERS_OFFSET UNITYSDK_OFFSET(0xB7FEF90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETGROUPSERVERINFO_OFFSET UNITYSDK_OFFSET(0xB7FF400)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETINTERNALVIEWOBJECT_1_OFFSET UNITYSDK_OFFSET(0xB805FF0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETINTERNALVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB7FAA90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETMEMBERSTATEVALUESYNC_1_OFFSET UNITYSDK_OFFSET(0xB7FB7F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETMEMBERSTATEVALUESYNC_OFFSET UNITYSDK_OFFSET(0xB7FB740)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETPOSTWAITFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xB7FB2F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETREMAININGBACKSTAGEENTITYLOADINGTASKCOUNT_OFFSET UNITYSDK_OFFSET(0xB804580)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETREMAININGFRONTSTAGEENTITYDESTROYTASKCOUNT_OFFSET UNITYSDK_OFFSET(0xB804820)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETREMAININGVIEWOBJECTLOADINGTASKCOUNT_OFFSET UNITYSDK_OFFSET(0xB8041E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETSTATEVALUE_OFFSET UNITYSDK_OFFSET(0xB7FB8D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_GROUPSTATEHELPERINS_OFFSET UNITYSDK_OFFSET(0xB7FA950)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_GROUPVARIABLEHELPERINS_OFFSET UNITYSDK_OFFSET(0xB7FA960)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_INS_OFFSET UNITYSDK_OFFSET(0xB804C00)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_ISRELOADINGGROUP_OFFSET UNITYSDK_OFFSET(0xB800E60)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_PERUPDATEDELTA_OFFSET UNITYSDK_OFFSET(0xB807310)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_RELOADINGGROUPREASON_OFFSET UNITYSDK_OFFSET(0xB800EF0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_SCENEENTITYINFOS_OFFSET UNITYSDK_OFFSET(0xB7FD9A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_SCENEGROUPINFOS_OFFSET UNITYSDK_OFFSET(0xB7FD9B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_TEAMAVATARHANDLE_OFFSET UNITYSDK_OFFSET(0xB7FB390)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERWAIT_ISGROUPREADY_OFFSET UNITYSDK_OFFSET(0xB7FAC10)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERWAIT_TRYADDREADYVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB7FACF0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERWAIT_TRYSETREADYVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB7FB080)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERWAIT_TRYSKIPREADYVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB7FB200)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERWAIT_UNLOADGROUP_OFFSET UNITYSDK_OFFSET(0xB7FAB90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_HASANYMOTIONRECORD_OFFSET UNITYSDK_OFFSET(0xB7FD7B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_HASGROUPMEMBER_OFFSET UNITYSDK_OFFSET(0xB7FF0C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_HASREMAININGFRONTSTAGEENTITYDESTROYTASK_OFFSET UNITYSDK_OFFSET(0xB804950)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_INTERNALDESTROYVIEWOBJECTBYNETID_OFFSET UNITYSDK_OFFSET(0xB7FA570)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_INTERNALDESTROYVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB7FEDB0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_LOADGROUP_OFFSET UNITYSDK_OFFSET(0xB7FDF60)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_MARKGROUPCOMPLETE_OFFSET UNITYSDK_OFFSET(0xB7FF640)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_MARKVIEWOBJECTCREATECOMPLETE_OFFSET UNITYSDK_OFFSET(0xB8060D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONADDEXTRASUITE_OFFSET UNITYSDK_OFFSET(0xB802520)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONCREATE_OFFSET UNITYSDK_OFFSET(0xB8053B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB807170)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONREMOVEEXTRASUITE_OFFSET UNITYSDK_OFFSET(0xB802950)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONSCNOTIFYMEMBERCREATE_OFFSET UNITYSDK_OFFSET(0xB7FF810)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONSWITCHTOSUITE_OFFSET UNITYSDK_OFFSET(0xB802CF0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONVIEWOBJECTTAGCHANGED_OFFSET UNITYSDK_OFFSET(0xB803390)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONVIEWOBJECTTAGREMOVED_OFFSET UNITYSDK_OFFSET(0xB803C00)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_QUERYVIEWOBJECTSBYTAG_OFFSET UNITYSDK_OFFSET(0xB8031B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_QUERYVIEWOBJECTSCOUNTBYTAG_OFFSET UNITYSDK_OFFSET(0xB8032D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RECORDMOTIONINFO_OFFSET UNITYSDK_OFFSET(0xB7FD830)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RECREATE_OFFSET UNITYSDK_OFFSET(0xB805410)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REGISTERBACKSTAGEENTITYLOADINGTASK_OFFSET UNITYSDK_OFFSET(0xB7CB6F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REGISTERFRONTSTAGEENTITYDESTROYTASK_OFFSET UNITYSDK_OFFSET(0xB7CBF90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REGISTERVIEWOBJECTLOADINGTASK_OFFSET UNITYSDK_OFFSET(0xB804010)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADGROUPBYQUEUE_OFFSET UNITYSDK_OFFSET(0xB801210)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REMOVEEXTRASUITE_OFFSET UNITYSDK_OFFSET(0xB802720)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REMOVETAGFROMVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB8030E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REMOVE_ONPOSTVIEWOBJECTCREATED_OFFSET UNITYSDK_OFFSET(0xB806C10)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REMOVE_ONPOSTVIEWOBJECTREADY_OFFSET UNITYSDK_OFFSET(0xB806E10)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REMOVE_ONPREVIEWOBJECTDESTROYED_OFFSET UNITYSDK_OFFSET(0xB806D10)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REQUESTRELOADGROUP_1_OFFSET UNITYSDK_OFFSET(0xB8012C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REQUESTRELOADGROUP_OFFSET UNITYSDK_OFFSET(0xB800F80)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SENDEVENT_OFFSET UNITYSDK_OFFSET(0xB7FA980)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SENDVIEWOBJECTLOG_OFFSET UNITYSDK_OFFSET(0xB801E30)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETBACKSTAGEENTITYLOADINGTASKCOMPLETE_OFFSET UNITYSDK_OFFSET(0xB804480)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETLOCALMEMBERSTATEVALUE_OFFSET UNITYSDK_OFFSET(0xB7FCAD0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETLOCALSTATEVALUE_OFFSET UNITYSDK_OFFSET(0xB7FCA20)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETSTATEVALUEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xB7FC460)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETTEAMAVATARHANDLE_OFFSET UNITYSDK_OFFSET(0xB7FB3B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETUPVIEWOBJECTCONFIG_OFFSET UNITYSDK_OFFSET(0xB806400)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETVIEWOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0xB806290)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETVIEWOBJECTLOADINGTASKCOMPLETE_OFFSET UNITYSDK_OFFSET(0xB8040E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SET_GROUPVARIABLEHELPERINS_OFFSET UNITYSDK_OFFSET(0xB7FA970)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SET_PERUPDATEDELTA_OFFSET UNITYSDK_OFFSET(0xB807370)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SET_RELOADINGGROUPREASON_OFFSET UNITYSDK_OFFSET(0xB800F00)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SET_TEAMAVATARHANDLE_OFFSET UNITYSDK_OFFSET(0xB7FB3A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SWITCHTOSUITE_OFFSET UNITYSDK_OFFSET(0xB802AC0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_UNLOADGROUP_OFFSET UNITYSDK_OFFSET(0xB7FE490)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_UPDATEGROUPORDER_OFFSET UNITYSDK_OFFSET(0xB7FAB10)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_UPDATEVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB8066F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB807020)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__ADDVIEWOBJECTIDMAP_OFFSET UNITYSDK_OFFSET(0xB7FA150)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB805750)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__CLEARBUSYING_OFFSET UNITYSDK_OFFSET(0xB8004D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__CREATECREATEMEMBERHANDLE_OFFSET UNITYSDK_OFFSET(0xB7FFFE0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB804E00)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__FILLGROUPMEMBERCREATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB7FFE80)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__GETGROUPMEMBERSTATECALLBACKBYTAG_OFFSET UNITYSDK_OFFSET(0xB7FB990)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__GETNAMEIDVALUE_OFFSET UNITYSDK_OFFSET(0xB801900)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__GROUPORDERWAIT_ADDREADYVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB7FAD80)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__GROUPORDERWAIT_SETREADYVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0xB7FB170)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__REALGETVOGROUPSTATEVALUE_OFFSET UNITYSDK_OFFSET(0xB7FC000)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__REALGETVOMEMBERSTATEVALUE_OFFSET UNITYSDK_OFFSET(0xB7FC210)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__REALSETVOGROUPSTATEVALUE_OFFSET UNITYSDK_OFFSET(0xB7FC7D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__SENDGETGROUPMEMBERSTATE_OFFSET UNITYSDK_OFFSET(0xB7FBD80)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__TRYGETORSETSTATESEQUENCE_OFFSET UNITYSDK_OFFSET(0xB7FCBB0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___GETGROUPMEMBERSTATECALLBACKBYTAG_G___MATCH_41_0_OFFSET UNITYSDK_OFFSET(0xB7FBC00)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___TRYGETORSETSTATESEQUENCE_G____TRYSENDBYSLICETYPE_50_0_OFFSET UNITYSDK_OFFSET(0xB7FD3E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___TRYGETORSETSTATESEQUENCE_G____TRYSLICEMEMBERREQUESTBYTYPE_50_1_OFFSET UNITYSDK_OFFSET(0xB7FD270)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_TypeDefinitionIndex = 74557;

	class ViewObjectManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_nameIDHashcache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_TypeDefinitionIndex)->GetStaticField(0x2F5C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::ViewObject::ViewObjectManager_VOLogID, ::System::String*>** StaticGet__IDEventFmt()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::ViewObject::ViewObjectManager_VOLogID, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_TypeDefinitionIndex)->GetStaticField(0x2F5C8);
		}
		static ::Foundation::ViewObject::ViewObjectManager** StaticGet__instance()
		{
			return (::Foundation::ViewObject::ViewObjectManager**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_TypeDefinitionIndex)->GetStaticField(0x2F5D0);
		}
		static ::System::Boolean* StaticGet_Debug_OpenVoReadyGroupOrder()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_TypeDefinitionIndex)->GetStaticField(0xB950);
		}
		static ::System::Int32* StaticGet_Post_WailtFrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_TypeDefinitionIndex)->GetStaticField(0xB954);
		}
		static ::System::Single* StaticGet_CurViewObjectUpdateDelta()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_TypeDefinitionIndex)->GetStaticField(0xB958);
		}
		static ::System::Single* StaticGet__PerUpdateDelta_k__BackingField()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_TypeDefinitionIndex)->GetStaticField(0xB95C);
		}
		// static const ::System::Single DefaultTargetUpdateFrame; // 0x0
		::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate* OnPostViewObjectCreated; // 0x10
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* _WaitDestroyViewObject; // 0x18
		::System::Threading::CancellationTokenSource* _reloadCts; // 0x20
		::Class_1_91DE080BA52DB786<::System::UInt32, ::Class_3_1A345EAE5F749316_118*>* _notifyCreateMembers; // 0x28
		::System::Collections::Generic::List_1<::Foundation::ViewObject::InternalSceneEntityDestroyRequest>* _sceneEntityDestroyRequests; // 0x30
		::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate* OnPostViewObjectReady; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ViewObject::SceneGroupData>* _sceneGroupInfos; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_5491A6A4F64DECE9>* MotionRecordDict; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ViewObject::SceneEntityData>* _sceneEntityInfos; // 0x50
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectManager_InnerCreateMemberListHandle>* _requestingIdentifiers; // 0x58
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectManager_ViewObjectLog>* pendingObjectLogs; // 0x60
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequest>* _sequenceVoStateRequests; // 0x68
		::Foundation::ViewObject::ViewObjectManager_GroupOrderMgr groupOrderMgr; // 0x70
		::Class_1_91DE080BA52DB786<::Foundation::Unreal::FGameplayTag, ::Foundation::ViewObject::ViewObjectHandle>* _tag2ViewObjectMap; // 0x90
		::Foundation::ViewObject::Container::TSparseList_1<::Foundation::ViewObject::ViewObject*>* ViewObjectContainer; // 0x98
		::Foundation::ViewObject::Subsystem::GroupStateHelper* _GroupStateHelperIns_k__BackingField; // 0xA0
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequest>* _sequcenWaitVoStateResponse; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::ViewObject::ViewObjectHandle>* _clientViewObjects; // 0xB0
		::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate* OnPreViewObjectDestroyed; // 0xB8
		::Foundation::ViewObject::Container::HandledMap_1<::Foundation::ViewObject::BackStageEntityLoadingTask>* _backStageEntityLoadingTaskMap; // 0xC0
		::Foundation::ViewObject::ViewObjectHandle _TeamAvatarHandle_k__BackingField; // 0xC8
		::Class_1_91DE080BA52DB786<::Foundation::ViewObject::ViewObjectHandle, ::Foundation::Unreal::FGameplayTag>* _viewObject2TagMap; // 0xD8
		::Foundation::ViewObject::GroupVariableHelper* _GroupVariableHelperIns_k__BackingField; // 0xE0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Foundation::ViewObject::ViewObjectHandle, ::MoleMole::EntityHandle>>* _frontStageEntityDestroyTaskMap; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt32>* _viewObjectConfigMap; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ViewObject::GroupMemberCollection*>* _groupMemberCollections; // 0xF8
		::Foundation::ViewObject::Container::HandledMap_1<::Foundation::ViewObject::ViewObjectLoadingTask>* viewObjectLoadingTaskMap; // 0x100
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectManager_ReloadParamBase*>* _reloadQueue; // 0x108
		::Foundation::ViewObject::EReloadGroupReason _ReloadingGroupReason_k__BackingField; // 0x110
		::Struct_2_5491A6A4F64DECE9 AvatarMotionRecord; // 0x114
		::System::Single _durationTime; // 0x134
		::System::Int32 _realGetTag; // 0x138

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__CTOR_OFFSET))(this);
		}

		::Foundation::ViewObject::ViewObjectHandle CreateViewObjectByConfigId(::System::Int32 configId, ::System::Boolean autoEnable)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CREATEVIEWOBJECTBYCONFIGID_OFFSET))(this, configId, autoEnable);
		}

		::System::Void DestroyViewObjectByConfigId(::System::Int32 configId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DESTROYVIEWOBJECTBYCONFIGID_OFFSET))(this, configId);
		}

		::System::Void Client_AddViewObjectIDMap(::System::UInt32 groupId, ::System::UInt32 memberId, ::Foundation::ViewObject::ViewObjectHandle voHandle, ::System::UInt32 inputRid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CLIENT_ADDVIEWOBJECTIDMAP_OFFSET))(this, groupId, memberId, voHandle, inputRid);
		}

		::System::Void Client_DestroyViewObjectIDMap(::System::UInt32 groupId, ::System::UInt32 memberId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CLIENT_DESTROYVIEWOBJECTIDMAP_OFFSET))(this, groupId, memberId);
		}

		::Foundation::ViewObject::Subsystem::GroupStateHelper* get_GroupStateHelperIns()
		{
			return ((::Foundation::ViewObject::Subsystem::GroupStateHelper*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_GROUPSTATEHELPERINS_OFFSET))(this);
		}

		::Foundation::ViewObject::GroupVariableHelper* get_GroupVariableHelperIns()
		{
			return ((::Foundation::ViewObject::GroupVariableHelper*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_GROUPVARIABLEHELPERINS_OFFSET))(this);
		}

		::System::Void set_GroupVariableHelperIns(::Foundation::ViewObject::GroupVariableHelper* value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupVariableHelper*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SET_GROUPVARIABLEHELPERINS_OFFSET))(this, value);
		}

		::System::Void SendEvent(::Foundation::ViewObject::ViewObjectHandle viewObjectHandle, ::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SENDEVENT_OFFSET))(this, viewObjectHandle, evt);
		}

		::System::Void UpdateGroupOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_UPDATEGROUPORDER_OFFSET))(this);
		}

		::System::Boolean GroupOrderWait_UnloadGroup(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERWAIT_UNLOADGROUP_OFFSET))(this, groupID);
		}

		::System::Boolean GroupOrderWait_IsGroupReady(::Foundation::ViewObject::ViewObjectHandle vo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERWAIT_ISGROUPREADY_OFFSET))(this, vo);
		}

		::System::Void GroupOrderWait_TryAddReadyViewObject(::Foundation::ViewObject::ViewObjectHandle vo)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERWAIT_TRYADDREADYVIEWOBJECT_OFFSET))(this, vo);
		}

		::System::Void GroupOrderWait_TrySetReadyViewObject(::Foundation::ViewObject::ViewObjectHandle vo)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERWAIT_TRYSETREADYVIEWOBJECT_OFFSET))(this, vo);
		}

		::System::Void GroupOrderWait_TrySkipReadyViewObject(::Foundation::ViewObject::ViewObjectHandle vo)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERWAIT_TRYSKIPREADYVIEWOBJECT_OFFSET))(this, vo);
		}

		static ::System::Int32 GetPostWaitFrameCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETPOSTWAITFRAMECOUNT_OFFSET))();
		}

		::System::Void _GroupOrderWait_AddReadyViewObject(::Foundation::ViewObject::ViewObjectHandle vo)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__GROUPORDERWAIT_ADDREADYVIEWOBJECT_OFFSET))(this, vo);
		}

		::System::Void _GroupOrderWait_SetReadyViewObject(::Foundation::ViewObject::ViewObjectHandle vo, ::System::Boolean isFromSkip)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__GROUPORDERWAIT_SETREADYVIEWOBJECT_OFFSET))(this, vo, isFromSkip);
		}

		::Foundation::ViewObject::ViewObjectHandle get_TeamAvatarHandle()
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_TEAMAVATARHANDLE_OFFSET))(this);
		}

		::System::Void set_TeamAvatarHandle(::Foundation::ViewObject::ViewObjectHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SET_TEAMAVATARHANDLE_OFFSET))(this, value);
		}

		::System::Void SetTeamAvatarHandle(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETTEAMAVATARHANDLE_OFFSET))(this, handle);
		}

		::Foundation::ViewObject::ViewObjectHandle FindViewObjectHandle(::Foundation::ViewObject::GroupMemberIdentifier identifier)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FINDVIEWOBJECTHANDLE_OFFSET))(this, identifier);
		}

		::Class_3_07AAFA6F7F79BEB3* FindMemberServerInfo(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::Class_3_07AAFA6F7F79BEB3*(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FINDMEMBERSERVERINFO_OFFSET))(this, handle);
		}

		::Class_3_07AAFA6F7F79BEB3* FindSceneEntityInfo(::System::UInt32 entityRid)
		{
			return ((::Class_3_07AAFA6F7F79BEB3*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FINDSCENEENTITYINFO_OFFSET))(this, entityRid);
		}

		::System::Boolean GetMemberStateValueSync(::Foundation::ViewObject::GroupMemberIdentifier identifier, ::System::String* statename, ::System::Int32& val)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETMEMBERSTATEVALUESYNC_OFFSET))(this, identifier, statename, val);
		}

		::System::Boolean GetMemberStateValueSync_1(::Foundation::ViewObject::ViewObjectHandle viewObject, ::System::String* statename, ::System::Int32& val)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETMEMBERSTATEVALUESYNC_1_OFFSET))(this, viewObject, statename, val);
		}

		::System::Void GetStateValue(::Foundation::ViewObject::GroupMemberIdentifier identifier, ::System::String* stateName, ::System::Action_2<::System::Boolean, ::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::String*, ::System::Action_2<::System::Boolean, ::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETSTATEVALUE_OFFSET))(this, identifier, stateName, callback);
		}

		::System::Void _GetGroupMemberStateCallbackByTag(::System::Int32 inTag, ::Class_1_4109B64C3CE1B638<::Class_3_2FC14B34F30FBD20_1*>* members)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_4109B64C3CE1B638<::Class_3_2FC14B34F30FBD20_1*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__GETGROUPMEMBERSTATECALLBACKBYTAG_OFFSET))(this, inTag, members);
		}

		::System::Void _SendGetGroupMemberState(::Class_3_126510A8BEABCBD0_12* req, ::System::Int32 tag)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_126510A8BEABCBD0_12*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__SENDGETGROUPMEMBERSTATE_OFFSET))(this, req, tag);
		}

		::System::Void _RealGetVOGroupStateValue(::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequest req)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequest))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__REALGETVOGROUPSTATEVALUE_OFFSET))(this, req);
		}

		::System::Void _RealGetVOMemberStateValue(::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequest>* reqs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequest>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__REALGETVOMEMBERSTATEVALUE_OFFSET))(this, reqs);
		}

		::System::Void SetStateValueImmediately(::Foundation::ViewObject::GroupMemberIdentifier identifier, ::System::String* stateName, ::System::Int32 value, ::Class_3_3EC97B498E0B85D2* reason, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::String*, ::System::Int32, ::Class_3_3EC97B498E0B85D2*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETSTATEVALUEIMMEDIATELY_OFFSET))(this, identifier, stateName, value, reason, callback);
		}

		::System::Void _RealSetVOGroupStateValue(::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequest req)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequest))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__REALSETVOGROUPSTATEVALUE_OFFSET))(this, req);
		}

		::System::Boolean SetLocalStateValue(::Foundation::ViewObject::GroupMemberIdentifier identifier, ::System::String* stateName, ::System::Int32 value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETLOCALSTATEVALUE_OFFSET))(this, identifier, stateName, value);
		}

		::System::Boolean SetLocalMemberStateValue(::Foundation::ViewObject::ViewObjectHandle viewObject, ::System::String* stateName, ::System::Int32 value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETLOCALMEMBERSTATEVALUE_OFFSET))(this, viewObject, stateName, value);
		}

		::System::Void _TryGetOrSetStateSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__TRYGETORSETSTATESEQUENCE_OFFSET))(this);
		}

		::System::Void FlushSceneEntityDestroyRequests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FLUSHSCENEENTITYDESTROYREQUESTS_OFFSET))(this);
		}

		::System::Boolean HasAnyMotionRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_HASANYMOTIONRECORD_OFFSET))(this);
		}

		::System::Void RecordMotionInfo(::Struct_2_5491A6A4F64DECE9& motionRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5491A6A4F64DECE9&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RECORDMOTIONINFO_OFFSET))(this, motionRecord);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ViewObject::SceneEntityData>* get_SceneEntityInfos()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ViewObject::SceneEntityData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_SCENEENTITYINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ViewObject::SceneGroupData>* get_SceneGroupInfos()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ViewObject::SceneGroupData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_SCENEGROUPINFOS_OFFSET))(this);
		}

		::System::Void EntityAppear(::Class_3_07AAFA6F7F79BEB3* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ENTITYAPPEAR_OFFSET))(this, notify);
		}

		::System::Void _AddViewObjectIdMap(::System::UInt32 groupId, ::System::UInt32 memberId, ::System::UInt64 combineConfigId, ::System::UInt32 inputRid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__ADDVIEWOBJECTIDMAP_OFFSET))(this, groupId, memberId, combineConfigId, inputRid);
		}

		::System::Void EntityDisappear(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ENTITYDISAPPEAR_OFFSET))(this, id);
		}

		::System::Void DestroyMember(::Foundation::ViewObject::ViewObjectHandle handle, ::System::UInt32 entityID, ::Class_3_3EC97B498E0B85D2* reason)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::UInt32, ::Class_3_3EC97B498E0B85D2*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DESTROYMEMBER_OFFSET))(this, handle, entityID, reason);
		}

		::System::Void LoadGroup(::Class_3_30235BB967CBDA73_7* notifyData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_30235BB967CBDA73_7*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_LOADGROUP_OFFSET))(this, notifyData);
		}

		::System::Void UnloadGroup(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_UNLOADGROUP_OFFSET))(this, uid);
		}

		::System::Void ClearAllServerViewObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CLEARALLSERVERVIEWOBJECT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* GetGroupMembers(::System::UInt32 groupId)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETGROUPMEMBERS_OFFSET))(this, groupId);
		}

		::System::Boolean HasGroupMember(::System::UInt32 groupId, ::System::UInt32 memberConfigId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_HASGROUPMEMBER_OFFSET))(this, groupId, memberConfigId);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* GetAllGroups()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETALLGROUPS_OFFSET))(this);
		}

		::Foundation::ViewObject::ViewObjectHandle GetGroupInstance(::System::UInt32 groupId)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETGROUPINSTANCE_OFFSET))(this, groupId);
		}

		::Class_3_30235BB967CBDA73_7* GetGroupServerInfo(::System::UInt32 groupId)
		{
			return ((::Class_3_30235BB967CBDA73_7*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETGROUPSERVERINFO_OFFSET))(this, groupId);
		}

		::Foundation::ViewObject::ViewObjectHandle CreateViewObjectByServerInfo(::Class_3_07AAFA6F7F79BEB3* notify, ::System::Boolean autoEnable)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CREATEVIEWOBJECTBYSERVERINFO_OFFSET))(this, notify, autoEnable);
		}

		::Foundation::ViewObject::ViewObjectHandle CreateViewObjectByGroupInfo(::Class_3_30235BB967CBDA73_7* notify, ::System::Boolean autoEnable)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::Class_3_30235BB967CBDA73_7*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CREATEVIEWOBJECTBYGROUPINFO_OFFSET))(this, notify, autoEnable);
		}

		::System::Void InternalDestroyViewObjectByNetID(::System::UInt32 rid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_INTERNALDESTROYVIEWOBJECTBYNETID_OFFSET))(this, rid);
		}

		::System::Boolean ContainsViewObject(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CONTAINSVIEWOBJECT_OFFSET))(this, id);
		}

		::Foundation::ViewObject::SceneEntityData FindViewObjectByNetID(::System::UInt32 id)
		{
			return ((::Foundation::ViewObject::SceneEntityData(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FINDVIEWOBJECTBYNETID_OFFSET))(this, id);
		}

		::System::Void MarkGroupComplete(::System::UInt32 groupId, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_MARKGROUPCOMPLETE_OFFSET))(this, groupId, callback);
		}

		::System::Void OnScNotifyMemberCreate(::Class_3_1A345EAE5F749316_118* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1A345EAE5F749316_118*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONSCNOTIFYMEMBERCREATE_OFFSET))(this, notify);
		}

		::System::Void _FillGroupMemberCreateScNotify(::Foundation::ViewObject::ViewObjectManager_InnerCreateMemberListHandle innerHandle, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>* fillList)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_InnerCreateMemberListHandle, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__FILLGROUPMEMBERCREATESCNOTIFY_OFFSET))(this, innerHandle, fillList);
		}

		::Foundation::ViewObject::ViewObjectManager_InnerCreateMemberListHandle _CreateCreateMemberHandle(::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>* inRequestList)
		{
			return ((::Foundation::ViewObject::ViewObjectManager_InnerCreateMemberListHandle(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__CREATECREATEMEMBERHANDLE_OFFSET))(this, inRequestList);
		}

		::System::Void _ClearBusying(::Foundation::ViewObject::ViewObjectManager_InnerCreateMemberListHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_InnerCreateMemberListHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__CLEARBUSYING_OFFSET))(this, h);
		}

		::System::Void CreateGroupMemberList(::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>* identifiers, ::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>*>* rspCallback, ::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>*>* errorCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>*, ::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>*>*, ::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CREATEGROUPMEMBERLIST_OFFSET))(this, identifiers, rspCallback, errorCallback);
		}

		::System::Void ActiveGroupSuite(::System::UInt32 groupId, ::System::UInt32 suiteId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ACTIVEGROUPSUITE_OFFSET))(this, groupId, suiteId);
		}

		::System::Void DeactivateGroup(::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DEACTIVATEGROUP_OFFSET))(this, groupId);
		}

		::System::Void ActiveRollbackPoint(::Struct_2_50C9EB011AF67869 teleportParam, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C* rpcCallback)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_50C9EB011AF67869, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ACTIVEROLLBACKPOINT_OFFSET))(this, teleportParam, rpcCallback);
		}

		::System::Void ActiveRollbackPoint_1(::System::UInt32 floorID, ::System::UInt32 groupID, ::System::String* name, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C* rpcCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ACTIVEROLLBACKPOINT_1_OFFSET))(this, floorID, groupID, name, rpcCallback);
		}

		::System::Boolean get_IsReloadingGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_ISRELOADINGGROUP_OFFSET))(this);
		}

		::Foundation::ViewObject::EReloadGroupReason get_ReloadingGroupReason()
		{
			return ((::Foundation::ViewObject::EReloadGroupReason(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_RELOADINGGROUPREASON_OFFSET))(this);
		}

		::System::Void set_ReloadingGroupReason(::Foundation::ViewObject::EReloadGroupReason value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EReloadGroupReason))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SET_RELOADINGGROUPREASON_OFFSET))(this, value);
		}

		::System::Void ForceCancelReload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FORCECANCELRELOAD_OFFSET))(this);
		}

		::System::Void RequestReloadGroup(::UnityEngine::Vector3 targetPosition, ::UnityEngine::Vector3 targetRotation, ::System::Action* onComplete, ::System::ValueTuple_2<::Class_3_3EC97B498E0B85D2*, ::Foundation::ViewObject::EReloadGroupReason> reasonTuple)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::ValueTuple_2<::Class_3_3EC97B498E0B85D2*, ::Foundation::ViewObject::EReloadGroupReason>))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REQUESTRELOADGROUP_OFFSET))(this, targetPosition, targetRotation, onComplete, reasonTuple);
		}

		::System::Void RequestReloadGroup_1(::System::UInt32 groupID, ::System::UInt32 suiteIndex, ::System::Action* onComplete, ::System::ValueTuple_2<::Class_3_3EC97B498E0B85D2*, ::Foundation::ViewObject::EReloadGroupReason> reasonTuple)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::ValueTuple_2<::Class_3_3EC97B498E0B85D2*, ::Foundation::ViewObject::EReloadGroupReason>))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REQUESTRELOADGROUP_1_OFFSET))(this, groupID, suiteIndex, onComplete, reasonTuple);
		}

		::Cysharp::Threading::Tasks::UniTask ReloadGroupByQueue()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADGROUPBYQUEUE_OFFSET))(this);
		}

		static ::System::Boolean CanMergeReload(::Foundation::ViewObject::ViewObjectManager_ReloadParamBase* a, ::Foundation::ViewObject::ViewObjectManager_ReloadParamBase* b)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectManager_ReloadParamBase*, ::Foundation::ViewObject::ViewObjectManager_ReloadParamBase*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CANMERGERELOAD_OFFSET))(a, b);
		}

		static ::Cysharp::Threading::Tasks::UniTask DoReloadGroup(::Foundation::ViewObject::ViewObjectManager_ReloadParamBase* param, ::System::Threading::CancellationToken token, ::Class_3_3EC97B498E0B85D2* reason)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectManager_ReloadParamBase*, ::System::Threading::CancellationToken, ::Class_3_3EC97B498E0B85D2*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DORELOADGROUP_OFFSET))(param, token, reason);
		}

		static ::Cysharp::Threading::Tasks::UniTask DoReloadAllGroup(::UnityEngine::Vector3 targetPosition, ::UnityEngine::Vector3 targetRotation, ::System::Threading::CancellationToken token)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DORELOADALLGROUP_OFFSET))(targetPosition, targetRotation, token);
		}

		static ::Cysharp::Threading::Tasks::UniTask DoReloadGroupSuite(::System::UInt32 groupID, ::System::UInt32 suiteIndex, ::System::Threading::CancellationToken token, ::Class_3_3EC97B498E0B85D2* reason)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::UInt32, ::System::UInt32, ::System::Threading::CancellationToken, ::Class_3_3EC97B498E0B85D2*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DORELOADGROUPSUITE_OFFSET))(groupID, suiteIndex, token, reason);
		}

		static ::System::UInt32 _GetNameIDValue(::System::String* keyName)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__GETNAMEIDVALUE_OFFSET))(keyName);
		}

		::System::Void SendViewObjectLog(::Foundation::ViewObject::ViewObjectManager_VOLogID logID, ::System::Int32 graphID, ::System::Int32 nodeID, ::System::Int32 portID, ::Foundation::ViewObject::ViewObjectHandle voHandle, ::System::Collections::Generic::List_1<::System::String*>* paramList, ::System::Boolean checkVo, ::System::Collections::Generic::List_1<::System::UInt32>* inUintParamList)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_VOLogID, ::System::Int32, ::System::Int32, ::System::Int32, ::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SENDVIEWOBJECTLOG_OFFSET))(this, logID, graphID, nodeID, portID, voHandle, paramList, checkVo, inUintParamList);
		}

		::System::Void FlushLogs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FLUSHLOGS_OFFSET))(this);
		}

		::System::Void AddExtraSuite(::System::UInt32 groupID, ::System::UInt32 suiteIndex, ::Class_3_3EC97B498E0B85D2* reason, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C* rpcCallback, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1* errorCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_3_3EC97B498E0B85D2*, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C*, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ADDEXTRASUITE_OFFSET))(this, groupID, suiteIndex, reason, rpcCallback, errorCallback);
		}

		::System::Void OnAddExtraSuite(::System::UInt32 groupID, ::System::UInt32 suiteIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONADDEXTRASUITE_OFFSET))(this, groupID, suiteIndex);
		}

		::System::Void RemoveExtraSuite(::System::UInt32 groupID, ::System::UInt32 suiteIndex, ::Class_3_3EC97B498E0B85D2* reason, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C* rpcCallback, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1* errorCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_3_3EC97B498E0B85D2*, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C*, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REMOVEEXTRASUITE_OFFSET))(this, groupID, suiteIndex, reason, rpcCallback, errorCallback);
		}

		::System::Void OnRemoveExtraSuite(::System::UInt32 groupID, ::System::UInt32 suiteIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONREMOVEEXTRASUITE_OFFSET))(this, groupID, suiteIndex);
		}

		::System::Void SwitchToSuite(::System::UInt32 groupID, ::System::UInt32 suiteIndex, ::Class_3_3EC97B498E0B85D2* reason, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C* rpcCallback, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1* errorCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_3_3EC97B498E0B85D2*, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C*, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SWITCHTOSUITE_OFFSET))(this, groupID, suiteIndex, reason, rpcCallback, errorCallback);
		}

		::System::Void OnSwitchToSuite(::System::UInt32 groupID, ::System::UInt32 suiteIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONSWITCHTOSUITE_OFFSET))(this, groupID, suiteIndex);
		}

		::System::Void CheckTriggerReceiverAfterSuiteChange(::System::UInt32 groupID, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CHECKTRIGGERRECEIVERAFTERSUITECHANGE_OFFSET))(this, groupID, suiteInfo);
		}

		::System::Void AddTagToViewObject(::Foundation::ViewObject::ViewObjectHandle handle, ::Foundation::Unreal::FGameplayTag gameplayTag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ADDTAGTOVIEWOBJECT_OFFSET))(this, handle, gameplayTag);
		}

		::System::Void RemoveTagFromViewObject(::Foundation::ViewObject::ViewObjectHandle handle, ::Foundation::Unreal::FGameplayTag gameplayTag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REMOVETAGFROMVIEWOBJECT_OFFSET))(this, handle, gameplayTag);
		}

		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* QueryViewObjectsByTag(::Foundation::Unreal::FGameplayTag gameplayTag)
		{
			return ((::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_QUERYVIEWOBJECTSBYTAG_OFFSET))(this, gameplayTag);
		}

		::System::Int32 QueryViewObjectsCountByTag(::Foundation::Unreal::FGameplayTag gameplayTag)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_QUERYVIEWOBJECTSCOUNTBYTAG_OFFSET))(this, gameplayTag);
		}

		::System::Void OnViewObjectTagChanged(::Foundation::ViewObject::ViewObjectHandle handle, ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* tempCurrentTags)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONVIEWOBJECTTAGCHANGED_OFFSET))(this, handle, tempCurrentTags);
		}

		::System::Void OnViewObjectTagRemoved(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONVIEWOBJECTTAGREMOVED_OFFSET))(this, handle);
		}

		::Foundation::ViewObject::Container::MapHandle RegisterViewObjectLoadingTask(::Foundation::ViewObject::ViewObjectHandle viewObject, ::System::String* description)
		{
			return ((::Foundation::ViewObject::Container::MapHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REGISTERVIEWOBJECTLOADINGTASK_OFFSET))(this, viewObject, description);
		}

		::System::Void SetViewObjectLoadingTaskComplete(::Foundation::ViewObject::Container::MapHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Container::MapHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETVIEWOBJECTLOADINGTASKCOMPLETE_OFFSET))(this, handle);
		}

		::System::Int32 GetRemainingViewObjectLoadingTaskCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETREMAININGVIEWOBJECTLOADINGTASKCOUNT_OFFSET))(this);
		}

		::System::Boolean CheckViewObjectLoadingTaskFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CHECKVIEWOBJECTLOADINGTASKFINISHED_OFFSET))(this);
		}

		::Foundation::ViewObject::Container::MapHandle RegisterBackStageEntityLoadingTask(::Foundation::ViewObject::ViewObjectHandle viewObject, ::System::String* description)
		{
			return ((::Foundation::ViewObject::Container::MapHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REGISTERBACKSTAGEENTITYLOADINGTASK_OFFSET))(this, viewObject, description);
		}

		::System::Void SetBackStageEntityLoadingTaskComplete(::Foundation::ViewObject::Container::MapHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Container::MapHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETBACKSTAGEENTITYLOADINGTASKCOMPLETE_OFFSET))(this, handle);
		}

		::System::Int32 GetRemainingBackStageEntityLoadingTaskCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETREMAININGBACKSTAGEENTITYLOADINGTASKCOUNT_OFFSET))(this);
		}

		::System::Boolean CheckBackStageEntityLoadingTaskFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CHECKBACKSTAGEENTITYLOADINGTASKFINISHED_OFFSET))(this);
		}

		::System::Void RegisterFrontStageEntityDestroyTask(::Foundation::ViewObject::ViewObjectHandle viewObject, ::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REGISTERFRONTSTAGEENTITYDESTROYTASK_OFFSET))(this, viewObject, entity);
		}

		::System::Int32 GetRemainingFrontStageEntityDestroyTaskCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETREMAININGFRONTSTAGEENTITYDESTROYTASKCOUNT_OFFSET))(this);
		}

		::System::Boolean HasRemainingFrontStageEntityDestroyTask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_HASREMAININGFRONTSTAGEENTITYDESTROYTASK_OFFSET))(this);
		}

		::System::Boolean CheckFrontStageEntityDestroyTaskFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CHECKFRONTSTAGEENTITYDESTROYTASKFINISHED_OFFSET))(this);
		}

		static ::Foundation::ViewObject::ViewObjectManager* get_Ins()
		{
			return ((::Foundation::ViewObject::ViewObjectManager*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_INS_OFFSET))();
		}

		static ::System::Void Create()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CREATE_OFFSET))();
		}

		static ::System::Void ReCreate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RECREATE_OFFSET))();
		}

		static ::System::Void DestroyInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DESTROYINSTANCE_OFFSET))();
		}

		::Foundation::ViewObject::ViewObjectHandle CreateViewObject(::System::Boolean enable, ::System::String* name, ::System::UInt32 netID, ::System::Boolean manualComplete, ::System::UInt32 requireReadyFlags)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CREATEVIEWOBJECT_OFFSET))(this, enable, name, netID, manualComplete, requireReadyFlags);
		}

		::System::Void MarkViewObjectCreateComplete(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_MARKVIEWOBJECTCREATECOMPLETE_OFFSET))(this, handle);
		}

		::System::Boolean DestroyViewObject(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DESTROYVIEWOBJECT_OFFSET))(this, handle);
		}

		::System::Void SetViewObjectEnable(::Foundation::ViewObject::ViewObjectHandle handle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETVIEWOBJECTENABLE_OFFSET))(this, handle, value);
		}

		::System::Void SetupViewObjectConfig(::Foundation::ViewObject::ViewObjectHandle handle, ::Class_1_5FA9CCDDD9957726* config)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SETUPVIEWOBJECTCONFIG_OFFSET))(this, handle, config);
		}

		::Foundation::ViewObject::ViewObject* GetInternalViewObject(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::Foundation::ViewObject::ViewObject*(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETINTERNALVIEWOBJECT_OFFSET))(this, handle);
		}

		::Foundation::ViewObject::ViewObject* GetInternalViewObject_1(::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*> handle)
		{
			return ((::Foundation::ViewObject::ViewObject*(*)(::PVOID, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*>))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GETINTERNALVIEWOBJECT_1_OFFSET))(this, handle);
		}

		::System::Boolean InternalDestroyViewObject(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_INTERNALDESTROYVIEWOBJECT_OFFSET))(this, handle);
		}

		::System::Void FlushViewObjectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_FLUSHVIEWOBJECTSTATE_OFFSET))(this);
		}

		::System::Void UpdateViewObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_UPDATEVIEWOBJECT_OFFSET))(this);
		}

		::System::Void add_OnPostViewObjectCreated(::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ADD_ONPOSTVIEWOBJECTCREATED_OFFSET))(this, value);
		}

		::System::Void remove_OnPostViewObjectCreated(::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REMOVE_ONPOSTVIEWOBJECTCREATED_OFFSET))(this, value);
		}

		::System::Void add_OnPreViewObjectDestroyed(::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ADD_ONPREVIEWOBJECTDESTROYED_OFFSET))(this, value);
		}

		::System::Void remove_OnPreViewObjectDestroyed(::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REMOVE_ONPREVIEWOBJECTDESTROYED_OFFSET))(this, value);
		}

		::System::Void add_OnPostViewObjectReady(::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ADD_ONPOSTVIEWOBJECTREADY_OFFSET))(this, value);
		}

		::System::Void remove_OnPostViewObjectReady(::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_ViewObjectModifyDelegate*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_REMOVE_ONPOSTVIEWOBJECTREADY_OFFSET))(this, value);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_CLEARALL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONCREATE_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Single get_PerUpdateDelta()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GET_PERUPDATEDELTA_OFFSET))();
		}

		static ::System::Void set_PerUpdateDelta(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_SET_PERUPDATEDELTA_OFFSET))(value);
		}

		static ::Class_3_2FC14B34F30FBD20_1* __GetGroupMemberStateCallbackByTag_g___Match_41_0(::Class_1_4109B64C3CE1B638<::Class_3_2FC14B34F30FBD20_1*>* list, ::Foundation::ViewObject::GroupMemberIdentifier qry)
		{
			return ((::Class_3_2FC14B34F30FBD20_1*(*)(::Class_1_4109B64C3CE1B638<::Class_3_2FC14B34F30FBD20_1*>*, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___GETGROUPMEMBERSTATECALLBACKBYTAG_G___MATCH_41_0_OFFSET))(list, qry);
		}

		::System::Void __TryGetOrSetStateSequence_g____TrySendBySliceType_50_0(::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequestType sType, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequest>* sliceList)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequestType, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequest>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___TRYGETORSETSTATESEQUENCE_G____TRYSENDBYSLICETYPE_50_0_OFFSET))(this, sType, sliceList);
		}

		::System::Void __TryGetOrSetStateSequence_g____TrySliceMemberRequestByType_50_1(::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequestType sType, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequest>* sliceList)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequestType, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequest>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___TRYGETORSETSTATESEQUENCE_G____TRYSLICEMEMBERREQUESTBYTYPE_50_1_OFFSET))(this, sType, sliceList);
		}
	};
}
