#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BB0E1DD4C880324C.h"
#include "unitysdk/Enum_3_DB663931210BBC27_6.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_53CBFE47A73426AB.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_3BC6FFBFA6077E08;
class Class_1_570D2F07D3EA0FBD;
class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_307;
class Class_2_3671DCF57496B272;
class Class_2_5BE1D48D0E80D90B;
class Class_3_BE75AAF0F7C40C75;
namespace MoleMole { class BigSceneMiscLogicSubSystem_HiddenRenderLayer; }
namespace MoleMole { class BigSceneMiscLogicSubSystem_TwoGroupsVisibility; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_91DE080BA52DB786;

#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENETELEPORTFADEOUTBEGIN_OFFSET UNITYSDK_OFFSET(0x94DF970)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENETELEPORTFADEOUTEND_OFFSET UNITYSDK_OFFSET(0x94DFB70)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CALLSIMPLEMOVETASKCALLBACK_OFFSET UNITYSDK_OFFSET(0x94E4760)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CHECKISCURRTRACKEDQUESTSTORYMODELOCKED_OFFSET UNITYSDK_OFFSET(0x94E02B0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CLEARHIDDENRENDERLAYERON_OFFSET UNITYSDK_OFFSET(0x94DF020)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CLEARTWOGROUPSVISIBILITY_OFFSET UNITYSDK_OFFSET(0x94DF090)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DISPATCHABILITYEVENT_OFFSET UNITYSDK_OFFSET(0x94E0AC0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DISPATCHGROUPABILITYEVENT_OFFSET UNITYSDK_OFFSET(0x94E0CE0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ENTERBATTLESTATISTICS_OFFSET UNITYSDK_OFFSET(0x94E19D0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_EXITBATTLESTATISTICS_OFFSET UNITYSDK_OFFSET(0x94E1FA0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_FLIPBATTLESTATISTICSWHENTEAMRELOAD_OFFSET UNITYSDK_OFFSET(0x94E3CC0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETLOADINGPAGETIPSTITLEBYTRANSITIONID_OFFSET UNITYSDK_OFFSET(0x94DFD90)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETMAXACCUMULATIONADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x94E0530)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETPROPERTYADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x94E0010)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETSTORYMODEMONSTERADJUSTMENTFLAGS_OFFSET UNITYSDK_OFFSET(0x94DFF90)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GET_LASTTELEPORTEVENT_OFFSET UNITYSDK_OFFSET(0x94DFD70)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_HASINBATTLEENEMYMONSTERALIVE_OFFSET UNITYSDK_OFFSET(0x94E3830)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONANYSIMPLEMOVETASKFINISHED_OFFSET UNITYSDK_OFFSET(0x94E2380)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x94DEC20)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x94DED20)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONDYNAMICEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x94E2420)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONENTITYENTERBATTLESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x94E2140)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x94E1320)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONTELEPORTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x94DF100)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPHIDDENRENDERLAYERON_1_OFFSET UNITYSDK_OFFSET(0x94E4A10)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPHIDDENRENDERLAYERON_OFFSET UNITYSDK_OFFSET(0x94E4980)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPTWOGROUPSVISIBILITY_1_OFFSET UNITYSDK_OFFSET(0x94E4BB0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPTWOGROUPSVISIBILITY_OFFSET UNITYSDK_OFFSET(0x94E4B20)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHHIDDENRENDERLAYERON_OFFSET UNITYSDK_OFFSET(0x94E48F0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHTWOGROUPSVISIBILITY_OFFSET UNITYSDK_OFFSET(0x94E4A90)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTERABILITYEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x94E0880)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTERBASEEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x94E2810)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x94E0F40)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVESIMPLEMOVETASKGRAPHCALLBACK_OFFSET UNITYSDK_OFFSET(0x94E4410)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SENDTELEPORTEVENT_OFFSET UNITYSDK_OFFSET(0x94DF310)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SETSIMPLEMOVETASKGRAPHCALLBACK_OFFSET UNITYSDK_OFFSET(0x94E4240)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SET_LASTTELEPORTEVENT_OFFSET UNITYSDK_OFFSET(0x94DFD80)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SHOWTELEPORTPOINTNAMETIP_OFFSET UNITYSDK_OFFSET(0x94DFE70)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SPECIALCOOPUPLOADSTATISTICS_OFFSET UNITYSDK_OFFSET(0x94E3AB0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_TRYSHOWTELEPORTPOINTNAMETIP_OFFSET UNITYSDK_OFFSET(0x94DF190)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTERABILITYEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x94E0A10)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTERBASEEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x94E2FC0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x94E4C30)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__GENUPLOAD_OFFSET UNITYSDK_OFFSET(0x94E3710)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__SENDAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x94E0710)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x94E4F30)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x94E4F90)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x94E4FF0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x94E5060)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneMiscLogicSubSystem_TypeDefinitionIndex = 65438;

	class BigSceneMiscLogicSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneMiscLogicSubSystem*>
	{
	public:
		// static const ::System::String* PassTimeRecordReasonEnterBattleStatistics; // 0x0
		::Class_1_91DE080BA52DB786<::System::UInt16, ::Struct_2_53CBFE47A73426AB>* _dynamicEventListenerMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::ValueTuple_3<::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::System::Action*>>* _simpleMoveTaskGraphCallbacks; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _inBattleMonsters; // 0x20
		::MoleMole::EntityHandle _localAvatar; // 0x28
		::System::Collections::Generic::List_1<::Class_1_3BC6FFBFA6077E08*>* _abilityEventListenerMap; // 0x38
		::MoleMole::BigSceneMiscLogicSubSystem_TwoGroupsVisibility* _twoGroupsVisibility; // 0x40
		::MoleMole::BigSceneMiscLogicSubSystem_HiddenRenderLayer* _hiddenRenderLayer; // 0x48
		::System::Action_1<::Class_1_B7E341C5F1A6F199*>* _dynamicEventDelegate; // 0x50
		::System::Int32 _teleportNewsBubbleTipID; // 0x58
		::System::ValueTuple_2<::Enum_3_BB0E1DD4C880324C, ::System::Int32> _LastTeleportEvent_k__BackingField; // 0x5C
		::System::Boolean _isInBattle; // 0x64
		::MoleMole::BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags _storyModeMonsterAdjustmentFlags; // 0x65
		::Struct_2_9E75F47F2670B678 _dynamicEventMask; // 0x68
		::Struct_2_9E75F47F2670B678 _cachedEventMask; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTeleportCompleted(::Class_1_570D2F07D3EA0FBD* teleportInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_570D2F07D3EA0FBD*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONTELEPORTCOMPLETED_OFFSET))(this, teleportInstance);
		}

		::System::Void BigSceneTeleportFadeOutBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENETELEPORTFADEOUTBEGIN_OFFSET))(this);
		}

		::System::Void BigSceneTeleportFadeOutEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENETELEPORTFADEOUTEND_OFFSET))(this);
		}

		::System::ValueTuple_2<::Enum_3_BB0E1DD4C880324C, ::System::Int32> get_LastTeleportEvent()
		{
			return ((::System::ValueTuple_2<::Enum_3_BB0E1DD4C880324C, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GET_LASTTELEPORTEVENT_OFFSET))(this);
		}

		::System::Void set_LastTeleportEvent(::System::ValueTuple_2<::Enum_3_BB0E1DD4C880324C, ::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::Enum_3_BB0E1DD4C880324C, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SET_LASTTELEPORTEVENT_OFFSET))(this, value);
		}

		::System::Void SendTeleportEvent(::Enum_3_BB0E1DD4C880324C graphEvent, ::System::Int32 teleportID)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_BB0E1DD4C880324C, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SENDTELEPORTEVENT_OFFSET))(this, graphEvent, teleportID);
		}

		::System::Void TryShowTeleportPointNameTip(::Class_1_570D2F07D3EA0FBD* teleportInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_570D2F07D3EA0FBD*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_TRYSHOWTELEPORTPOINTNAMETIP_OFFSET))(this, teleportInstance);
		}

		static ::System::String* GetLoadingPageTipsTitleByTransitionID(::System::Int32 transitionID)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETLOADINGPAGETIPSTITLEBYTRANSITIONID_OFFSET))(transitionID);
		}

		static ::System::Void ShowTeleportPointNameTip(::System::Int32 tipID, ::System::String* teleportPointName)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SHOWTELEPORTPOINTNAMETIP_OFFSET))(tipID, teleportPointName);
		}

		::MoleMole::BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags GetStoryModeMonsterAdjustmentFlags(::System::Boolean reset)
		{
			return ((::MoleMole::BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETSTORYMODEMONSTERADJUSTMENTFLAGS_OFFSET))(this, reset);
		}

		::System::Single GetPropertyAdjustment(::MoleMole::Config::BaseProperty property)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETPROPERTYADJUSTMENT_OFFSET))(this, property);
		}

		::System::Single GetMaxAccumulationAdjustment()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETMAXACCUMULATIONADJUSTMENT_OFFSET))(this);
		}

		static ::System::Boolean CheckIsCurrTrackedQuestStoryModeLocked(::Class_2_208CC9941471731A_307*& curPresetRule, ::System::Boolean isStrict)
		{
			return ((::System::Boolean(*)(::Class_2_208CC9941471731A_307*&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CHECKISCURRTRACKEDQUESTSTORYMODELOCKED_OFFSET))(curPresetRule, isStrict);
		}

		::System::Void _SendAvatarChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__SENDAVATARCHANGE_OFFSET))(this);
		}

		::System::Void RegisterAbilityEventListener(::Class_1_3BC6FFBFA6077E08* listener)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3BC6FFBFA6077E08*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTERABILITYEVENTLISTENER_OFFSET))(this, listener);
		}

		::System::Void UnregisterAbilityEventListener(::Class_1_3BC6FFBFA6077E08* listener)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3BC6FFBFA6077E08*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTERABILITYEVENTLISTENER_OFFSET))(this, listener);
		}

		::System::Void DispatchAbilityEvent(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DISPATCHABILITYEVENT_OFFSET))(this, eventName);
		}

		::System::Void DispatchGroupAbilityEvent(::MoleMole::EntityHandle entity, ::Foundation::ViewObject::ViewObjectHandle viewObject, ::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DISPATCHGROUPABILITYEVENT_OFFSET))(this, entity, viewObject, eventName);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnDynamicEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONDYNAMICEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void RegisterBaseEventListener(::Struct_2_53CBFE47A73426AB listener)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_53CBFE47A73426AB))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTERBASEEVENTLISTENER_OFFSET))(this, listener);
		}

		::System::Void UnregisterBaseEventListener(::Struct_2_53CBFE47A73426AB listener)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_53CBFE47A73426AB))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTERBASEEVENTLISTENER_OFFSET))(this, listener);
		}

		::System::Void EnterBattleStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ENTERBATTLESTATISTICS_OFFSET))(this);
		}

		::System::Void ExitBattleStatistics(::System::Boolean avatarAllKilled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_EXITBATTLESTATISTICS_OFFSET))(this, avatarAllKilled);
		}

		::System::ValueTuple_2<::Class_3_BE75AAF0F7C40C75*, ::Enum_3_DB663931210BBC27_6> _GenUpload(::System::Boolean avatarAllKilled)
		{
			return ((::System::ValueTuple_2<::Class_3_BE75AAF0F7C40C75*, ::Enum_3_DB663931210BBC27_6>(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__GENUPLOAD_OFFSET))(this, avatarAllKilled);
		}

		::System::Void SpecialCoopUploadStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SPECIALCOOPUPLOADSTATISTICS_OFFSET))(this);
		}

		::System::Void FlipBattleStatisticsWhenTeamReload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_FLIPBATTLESTATISTICSWHENTEAMRELOAD_OFFSET))(this);
		}

		::System::Void OnEntityEnterBattleStateChanged(::Class_2_3671DCF57496B272* evtEnterBattleStateChange)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3671DCF57496B272*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONENTITYENTERBATTLESTATECHANGED_OFFSET))(this, evtEnterBattleStateChange);
		}

		::System::Boolean HasInBattleEnemyMonsterAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_HASINBATTLEENEMYMONSTERALIVE_OFFSET))(this);
		}

		::System::Void SetSimpleMoveTaskGraphCallback(::Foundation::ViewObject::ViewObjectHandle graphVo, ::System::Int32 graphID, ::System::Object* task, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SETSIMPLEMOVETASKGRAPHCALLBACK_OFFSET))(this, graphVo, graphID, task, callback);
		}

		::System::Void RemoveSimpleMoveTaskGraphCallback(::System::Int32 graphID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVESIMPLEMOVETASKGRAPHCALLBACK_OFFSET))(this, graphID);
		}

		::System::Void CallSimpleMoveTaskCallback(::System::Object* task, ::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CALLSIMPLEMOVETASKCALLBACK_OFFSET))(this, task, success);
		}

		::System::Void OnAnySimpleMoveTaskFinished(::Class_2_5BE1D48D0E80D90B* simpleMoveFinished)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_5BE1D48D0E80D90B*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONANYSIMPLEMOVETASKFINISHED_OFFSET))(this, simpleMoveFinished);
		}

		::System::Void PushHiddenRenderLayerOn(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHHIDDENRENDERLAYERON_OFFSET))(this, groupID, tag);
		}

		::System::Void PopHiddenRenderLayerOn(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPHIDDENRENDERLAYERON_OFFSET))(this, groupID, tag);
		}

		::System::Void PopHiddenRenderLayerOn_1(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPHIDDENRENDERLAYERON_1_OFFSET))(this, groupID);
		}

		::System::Void ClearHiddenRenderLayerOn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CLEARHIDDENRENDERLAYERON_OFFSET))(this);
		}

		::System::Void PushTwoGroupsVisibility(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHTWOGROUPSVISIBILITY_OFFSET))(this, groupID, tag);
		}

		::System::Void PopTwoGroupsVisibility(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPTWOGROUPSVISIBILITY_OFFSET))(this, groupID, tag);
		}

		::System::Void PopTwoGroupsVisibility_1(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPTWOGROUPSVISIBILITY_1_OFFSET))(this, groupID);
		}

		::System::Void ClearTwoGroupsVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CLEARTWOGROUPSVISIBILITY_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
