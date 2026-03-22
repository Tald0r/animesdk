#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_104C7FF74440A413.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCLocation.h"
#include "unitysdk/MoleMole/UIBaseChatPlayController_IKRecord.h"
#include "unitysdk/MoleMole/UIBaseChatPlayController_PlayerTransformRecord.h"
#include "unitysdk/MoleMole/UIBaseChatPlayController_RecordFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_086C0AADB113D5D4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_328B10E9F3553A0D;
class Class_1_37333AB8708EAC23;
class Class_1_9BA9DD31C0C37FC0;
class Class_1_BC9D27E6028F322B;
class Class_1_C0F95871B3A2FF4E;
class Class_1_EE305D2D4E363D9B;
class Class_2_A6A0C790093A8319;
class Class_3_F33F9DC5F4112336;
namespace MoleMole { class SpecialKeyValue; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class DynamicObjectModifyActiveCfg; }
namespace MoleMole::GalGame { class MainCityChatConditionNode; }
namespace MoleMole::GalGame { class MainCityChatLookIKNode; }
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace MoleMole::GalGame { class TagGroupBoolPair; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_FINISH_OFFSET UNITYSDK_OFFSET(0xC90A490)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETCHATSYNCDATA_OFFSET UNITYSDK_OFFSET(0xC90CBB0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETISRUNNINGSKIP_OFFSET UNITYSDK_OFFSET(0xC90A690)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETNPCTAGBYCHATCONFIGAVATARID_OFFSET UNITYSDK_OFFSET(0xC90C0D0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_CAMERAWRAPPER_OFFSET UNITYSDK_OFFSET(0xC90A500)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xC90A480)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_OPENCONTEXT_OFFSET UNITYSDK_OFFSET(0xC90A4F0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_INITNPCIK_OFFSET UNITYSDK_OFFSET(0xC90A9F0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_ISINMAINCITY_OFFSET UNITYSDK_OFFSET(0xC90D970)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_MODIFYTIME_OFFSET UNITYSDK_OFFSET(0xC90D3E0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_ONNODERUN_OFFSET UNITYSDK_OFFSET(0xC90A520)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_OVERRIDENEARCLIPDIS_OFFSET UNITYSDK_OFFSET(0xC90C690)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xC90C260)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYAVATARANIMATION_OFFSET UNITYSDK_OFFSET(0xC90BE30)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PROCESSCONDITION_OFFSET UNITYSDK_OFFSET(0xC90E690)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PRVCHECKSYNCINTERACTIONTOSERVER_OFFSET UNITYSDK_OFFSET(0xC90CF40)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDDYNAMICOBJECTVISIBILITY_OFFSET UNITYSDK_OFFSET(0xC90C920)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDMEMBERIKOPERATION_OFFSET UNITYSDK_OFFSET(0xC90AF20)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDNPCIKOPERATION_OFFSET UNITYSDK_OFFSET(0xC90AE70)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDNPCVISIBILITY_OFFSET UNITYSDK_OFFSET(0xC90C880)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDPLAYERTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC90B390)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTORENPCIK_OFFSET UNITYSDK_OFFSET(0xC90B1E0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTOREPLAYERTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC90B8E0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETANIMATORPARAM_OFFSET UNITYSDK_OFFSET(0xC90C410)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETDYNAMICOBJECTVISIBLE_OFFSET UNITYSDK_OFFSET(0xC90E220)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETJUMP_OFFSET UNITYSDK_OFFSET(0xC90EA40)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETNEXT_OFFSET UNITYSDK_OFFSET(0xC90E600)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETNPC_OFFSET UNITYSDK_OFFSET(0xC90A940)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETSPECIALS_OFFSET UNITYSDK_OFFSET(0xC90C9C0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETTAGVISIBLE_OFFSET UNITYSDK_OFFSET(0xC90DA10)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SET_CAMERAWRAPPER_OFFSET UNITYSDK_OFFSET(0xC90A510)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SKIPSTORYPLAY_OFFSET UNITYSDK_OFFSET(0xC90A760)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_STARTSKIPCHAT_OFFSET UNITYSDK_OFFSET(0xC90A590)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_STOPSKIPCHAT_OFFSET UNITYSDK_OFFSET(0xC90A610)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_TRYNOOPTIONSYNCINTERACTIONTOSERVER_OFFSET UNITYSDK_OFFSET(0xC90D0D0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_TRYOPTIONSYNCINTERACTIONTOSERVER_OFFSET UNITYSDK_OFFSET(0xC90CC20)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_UPDATESKIPSTATE_OFFSET UNITYSDK_OFFSET(0xC90A8D0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC90EB40)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController_TypeDefinitionIndex = 62148;

	class UIBaseChatPlayController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* SKIP_TALK_TRIGGER; // 0x0
		::System::Boolean _isFinish; // 0x2F8
		::Class_1_9BA9DD31C0C37FC0* _chatNodePlayer; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIBaseChatPlayController_IKRecord>* _ikRecordNpcTagList; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatLookIKNode*>* _ikRecordMemberList; // 0x310
		::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* _participatorMap; // 0x318
		::MoleMole::UIBaseChatPlayController_PlayerTransformRecord _playerTransformRecord; // 0x320
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _avatarInfoDic; // 0x340
		::Class_1_BC9D27E6028F322B* _chatRecordSyncData; // 0x348
		::Class_1_37333AB8708EAC23* storyPlayRecord; // 0x350
		::Class_1_C0F95871B3A2FF4E* storyPlayHandler; // 0x358
		::System::Boolean Auto; // 0x360
		::MoleMole::UIMainCityChatPlayContext* _openContext; // 0x368
		::Class_1_EE305D2D4E363D9B* _CameraWrapper_k__BackingField; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_FINISH_OFFSET))(this);
		}

		::MoleMole::UIMainCityChatPlayContext* get_OpenContext()
		{
			return ((::MoleMole::UIMainCityChatPlayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_OPENCONTEXT_OFFSET))(this);
		}

		::Class_1_EE305D2D4E363D9B* get_CameraWrapper()
		{
			return ((::Class_1_EE305D2D4E363D9B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_CAMERAWRAPPER_OFFSET))(this);
		}

		::System::Void set_CameraWrapper(::Class_1_EE305D2D4E363D9B* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EE305D2D4E363D9B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SET_CAMERAWRAPPER_OFFSET))(this, value);
		}

		::System::Void OnNodeRun(::Class_1_328B10E9F3553A0D* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_328B10E9F3553A0D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_ONNODERUN_OFFSET))(this, node);
		}

		::System::Void StartSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_STARTSKIPCHAT_OFFSET))(this);
		}

		::System::Void StopSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_STOPSKIPCHAT_OFFSET))(this);
		}

		::System::Boolean GetIsRunningSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETISRUNNINGSKIP_OFFSET))(this);
		}

		::System::Void SkipStoryPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SKIPSTORYPLAY_OFFSET))(this);
		}

		::System::Void UpdateSkipState(::Class_1_328B10E9F3553A0D* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_328B10E9F3553A0D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_UPDATESKIPSTATE_OFFSET))(this, node);
		}

		::System::Void SetNPC(::MoleMole::GalGame::MainCityChatNPCLocation location, ::System::Int32 avatarId, ::System::Boolean enter)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatNPCLocation, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETNPC_OFFSET))(this, location, avatarId, enter);
		}

		::System::Void InitNpcIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_INITNPCIK_OFFSET))(this);
		}

		::System::Void RecordNpcIKOperation(::System::Int32 npcTag, ::Enum_3_104C7FF74440A413 ikType, ::System::Boolean isPush)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_104C7FF74440A413, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDNPCIKOPERATION_OFFSET))(this, npcTag, ikType, isPush);
		}

		::System::Void RecordMemberIKOperation(::MoleMole::GalGame::MainCityChatLookIKNode* ikNode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatLookIKNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDMEMBERIKOPERATION_OFFSET))(this, ikNode);
		}

		::System::Void RestoreNpcIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTORENPCIK_OFFSET))(this);
		}

		::System::Void RecordPlayerTransform(::System::Boolean invalidScenePosition, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 rot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDPLAYERTRANSFORM_OFFSET))(this, invalidScenePosition, pos, rot);
		}

		::System::Void RestorePlayerTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTOREPLAYERTRANSFORM_OFFSET))(this);
		}

		::System::Void PlayAvatarAnimation(::System::Int32 avatarID, ::System::String* mainCityObjectStateIdString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYAVATARANIMATION_OFFSET))(this, avatarID, mainCityObjectStateIdString);
		}

		::System::Void PlayAnimation(::Class_3_F33F9DC5F4112336* component, ::System::String* mainCityObjectStateIdString)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYANIMATION_OFFSET))(this, component, mainCityObjectStateIdString);
		}

		::System::Void SetAnimatorParam(::UnityEngine::Animator* animator, ::System::String* paramName, ::System::String* paramType, ::System::String* paramValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETANIMATORPARAM_OFFSET))(this, animator, paramName, paramType, paramValue);
		}

		static ::System::Int32 GetNpcTagByChatConfigAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETNPCTAGBYCHATCONFIGAVATARID_OFFSET))(avatarID);
		}

		::System::Void OverrideNearClipDis(::System::Single dis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_OVERRIDENEARCLIPDIS_OFFSET))(this, dis);
		}

		::System::Void RecordNpcVisibility(::System::Int32 tagID, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDNPCVISIBILITY_OFFSET))(this, tagID, visible);
		}

		::System::Void RecordDynamicObjectVisibility(::System::Int32 subID, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDDYNAMICOBJECTVISIBILITY_OFFSET))(this, subID, visible);
		}

		::System::Void SetSpecials(::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>* Specials)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETSPECIALS_OFFSET))(this, Specials);
		}

		::Class_1_BC9D27E6028F322B* GetChatSyncData()
		{
			return ((::Class_1_BC9D27E6028F322B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETCHATSYNCDATA_OFFSET))(this);
		}

		::System::Void TryOptionSyncInteractionToServer(::System::Int32 optionIndex, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem* displayItem, ::System::Action* afterSync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_TRYOPTIONSYNCINTERACTIONTOSERVER_OFFSET))(this, optionIndex, displayItem, afterSync);
		}

		::System::Void TryNoOptionSyncInteractionToServer(::System::Action* afterSync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_TRYNOOPTIONSYNCINTERACTIONTOSERVER_OFFSET))(this, afterSync);
		}

		::System::Boolean PrvCheckSyncInteractionToServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PRVCHECKSYNCINTERACTIONTOSERVER_OFFSET))(this);
		}

		::System::Void ModifyTime(::Struct_2_086C0AADB113D5D4 cfg)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_086C0AADB113D5D4))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_MODIFYTIME_OFFSET))(this, cfg);
		}

		::System::Boolean IsInMainCity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_ISINMAINCITY_OFFSET))(this);
		}

		::System::Void SetTagVisible(::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>* Params, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>* GroupParams, ::MoleMole::UIBaseChatPlayController_RecordFlag recordFlag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>*, ::MoleMole::UIBaseChatPlayController_RecordFlag))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETTAGVISIBLE_OFFSET))(this, Params, GroupParams, recordFlag);
		}

		::System::Void SetDynamicObjectVisible(::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>* DynamicObjectsSubID, ::MoleMole::UIBaseChatPlayController_RecordFlag recordFlag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>*, ::MoleMole::UIBaseChatPlayController_RecordFlag))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETDYNAMICOBJECTVISIBLE_OFFSET))(this, DynamicObjectsSubID, recordFlag);
		}

		::System::Void SetNext(::System::Int32 sectionIndex, ::System::Int32 subSectionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETNEXT_OFFSET))(this, sectionIndex, subSectionIndex);
		}

		::System::Void ProcessCondition(::MoleMole::GalGame::MainCityChatConditionNode* cond)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatConditionNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PROCESSCONDITION_OFFSET))(this, cond);
		}

		::System::Void SetJump(::Class_2_A6A0C790093A8319* jump)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6A0C790093A8319*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETJUMP_OFFSET))(this, jump);
		}
	};
}
