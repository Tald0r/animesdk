#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_133B62C3E053DEAA.h"
#include "unitysdk/Enum_3_22E7F79BA96A1935.h"
#include "unitysdk/Enum_3_37484F1EF48B365A.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_15CCFE77B9E12299;
class Class_1_9B1B6D841EE9533F;
class Class_1_B7E341C5F1A6F199;
class Class_1_E41D2909CC373885;
class Class_2_208CC9941471731A_508;
class Class_2_208CC9941471731A_623;
class Class_2_5EA04932F3E7FC4B;
class Class_3_F33F9DC5F4112336;
class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class MusicBattleSubSystem_LevelPressInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDBONUSSCORE_OFFSET UNITYSDK_OFFSET(0x801D6F0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDCOMBO_OFFSET UNITYSDK_OFFSET(0x801D8C0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDFEVER_OFFSET UNITYSDK_OFFSET(0x80215D0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDMISSCOMBO_OFFSET UNITYSDK_OFFSET(0x8021F20)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDSCORE_OFFSET UNITYSDK_OFFSET(0x80213F0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKBONUSBREAK_OFFSET UNITYSDK_OFFSET(0x8020500)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKDECREASEFEVER_OFFSET UNITYSDK_OFFSET(0x80201B0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKFEVERMAX_OFFSET UNITYSDK_OFFSET(0x8022300)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CLEARCOMBO_OFFSET UNITYSDK_OFFSET(0x8021DD0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CLEARMISSCOMBO_OFFSET UNITYSDK_OFFSET(0x8022000)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DEALDISPLAYDELAYPREPLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x8021C00)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DEALDISPLAYDELAYSTOPTIMELINE_OFFSET UNITYSDK_OFFSET(0x8021D00)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DOCHECK_OFFSET UNITYSDK_OFFSET(0x8022770)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DOPAUSE_OFFSET UNITYSDK_OFFSET(0x801DC80)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DORESUME_OFFSET UNITYSDK_OFFSET(0x801DE70)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_CONSTMAP_OFFSET UNITYSDK_OFFSET(0x801CCA0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_ISINBONUS_OFFSET UNITYSDK_OFFSET(0x801CC80)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_ISINFEVER_OFFSET UNITYSDK_OFFSET(0x801CC60)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_INITCONDITIONDATA_OFFSET UNITYSDK_OFFSET(0x80206D0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x801CE20)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONAVATARHPCHANGE_OFFSET UNITYSDK_OFFSET(0x801DAD0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x801CD70)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONBONUSTIMESTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x8021840)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONBTNCLICK_OFFSET UNITYSDK_OFFSET(0x8020A80)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONCOMBOCOUNTCHANGE_OFFSET UNITYSDK_OFFSET(0x80221C0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x801E1B0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONENTERBONUS_OFFSET UNITYSDK_OFFSET(0x8021B70)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x801DB80)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONFEVERCOUNTCHANGE_OFFSET UNITYSDK_OFFSET(0x80226E0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x801D450)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONMISSCOUNTCHANGE_OFFSET UNITYSDK_OFFSET(0x8022260)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONPLAYOVER_OFFSET UNITYSDK_OFFSET(0x8020A10)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x801FA60)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_PREDEALTRACKNEW_OFFSET UNITYSDK_OFFSET(0x801EC30)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTERENTITYPROPERTYCB_OFFSET UNITYSDK_OFFSET(0x801E120)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x801D150)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTERTASK_OFFSET UNITYSDK_OFFSET(0x801E3F0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SENDRESULT_OFFSET UNITYSDK_OFFSET(0x80211A0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SET_ISINBONUS_OFFSET UNITYSDK_OFFSET(0x801CC90)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SET_ISINFEVER_OFFSET UNITYSDK_OFFSET(0x801CC70)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKCLOSEEVADE_OFFSET UNITYSDK_OFFSET(0x801FFA0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKHINT_OFFSET UNITYSDK_OFFSET(0x801FDE0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKMISS_OFFSET UNITYSDK_OFFSET(0x8020070)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKOPENEVADE_OFFSET UNITYSDK_OFFSET(0x801FEC0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x8022AA0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x8022920)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__ONANIMATORZONECHANGED_OFFSET UNITYSDK_OFFSET(0x8022070)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8022AF0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8022B50)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x8022BB0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8022C20)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x8022C80)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MusicBattleSubSystem_TypeDefinitionIndex = 64001;

	class MusicBattleSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::Battle::MusicBattleSubSystem*>
	{
	public:
		static ::System::Single* StaticGet_missTimeDelta()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xC2B0);
		}
		static ::System::Single* StaticGet_feverDecayPerSecond()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xC2B4);
		}
		static ::System::Single* StaticGet_perfectTimeDelta()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xC2B8);
		}
		static ::System::Single* StaticGet_tipDelayTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xC2BC);
		}
		static ::System::Single* StaticGet_displayDelay()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xC2C0);
		}
		static ::System::Single* StaticGet_tempSpeedUpRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xC2C4);
		}
		static ::System::Single* StaticGet_inputDelay()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xC2C8);
		}
		static ::System::Single* StaticGet_dodgeWindow()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xC2CC);
		}
		::Class_2_208CC9941471731A_623* curStageConfigTemplate; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Battle::MusicBattleSubSystem_LevelPressInfo*>* LevelPressInfoList; // 0x18
		::Class_1_15CCFE77B9E12299* localAvatarFighter; // 0x20
		::System::Action_1<::System::Single>* Tick; // 0x28
		::Class_1_9B1B6D841EE9533F* musicBattleStatisticData; // 0x30
		::Class_1_15CCFE77B9E12299* bossFighter; // 0x38
		::System::Collections::Generic::Dictionary_2<::Enum_3_22E7F79BA96A1935, ::System::Collections::Generic::List_1<::Class_1_E41D2909CC373885*>*>* conditionMap; // 0x40
		::Class_3_F33F9DC5F4112336* cachedBonusLocalAvatarAnimatorComponent; // 0x48
		::Class_2_5EA04932F3E7FC4B* curTask; // 0x50
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MusicBattleMarkerNodeType, ::MoleMole::LogicButtonInputType>* markerToButtonInputDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::MusicBattleMarkerNodeType>* inputColorDict; // 0x60
		::System::UInt32 bossFightID; // 0x68
		::System::Int32 curCheckCloseIndex; // 0x6C
		::System::Single maxFever; // 0x70
		::System::Int32 curCheckIndex; // 0x74
		::System::UInt32 curMusicPlayingID; // 0x78
		::System::Boolean _isInFever_k__BackingField; // 0x7C
		::System::Boolean isLastPause; // 0x7D
		::System::Boolean isTimelineSpeedUp; // 0x7E
		::System::Boolean _isInBonus_k__BackingField; // 0x7F
		::System::Boolean hasAddedAnimatorCB; // 0x80
		::Enum_3_37484F1EF48B365A curStatus; // 0x84
		::System::UInt32 curMusicPendingID; // 0x88
		::System::UInt32 firstLocalAvatarEntityID; // 0x8C
		::System::Single curFever; // 0x90
		::System::Double curTime; // 0x98
		::System::Double curTimelineTime; // 0xA0
		::System::Int32 curHintIndex; // 0xA8
		::System::Int32 curCheckOpenIndex; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Boolean get_isInFever()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_ISINFEVER_OFFSET))(this);
		}

		::System::Void set_isInFever(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SET_ISINFEVER_OFFSET))(this, value);
		}

		::System::Boolean get_isInBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_ISINBONUS_OFFSET))(this);
		}

		::System::Void set_isInBonus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SET_ISINBONUS_OFFSET))(this, value);
		}

		::Class_2_208CC9941471731A_508* get_ConstMap()
		{
			return ((::Class_2_208CC9941471731A_508*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_CONSTMAP_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void RegisterEntityPropertyCB(::Class_3_F97B015544BE936B* characterDataComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTERENTITYPROPERTYCB_OFFSET))(this, characterDataComponent);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterTask(::Class_2_5EA04932F3E7FC4B* task, ::System::UInt32 musicPendingID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_5EA04932F3E7FC4B*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTERTASK_OFFSET))(this, task, musicPendingID);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void OnPlayOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONPLAYOVER_OFFSET))(this);
		}

		::System::Void OnBtnClick(::MoleMole::LogicButtonInputType type, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONBTNCLICK_OFFSET))(this, type, callback);
		}

		::System::Void OnBonusTimeStatusChanged(::System::Boolean isEnter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONBONUSTIMESTATUSCHANGED_OFFSET))(this, isEnter);
		}

		::System::Void DealDisplayDelayPreplayTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DEALDISPLAYDELAYPREPLAYTIMELINE_OFFSET))(this);
		}

		::System::Void DealDisplayDelayStopTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DEALDISPLAYDELAYSTOPTIMELINE_OFFSET))(this);
		}

		::System::Void UpdateCheckHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKHINT_OFFSET))(this);
		}

		::System::Void UpdateCheckOpenEvade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKOPENEVADE_OFFSET))(this);
		}

		::System::Void UpdateCheckCloseEvade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKCLOSEEVADE_OFFSET))(this);
		}

		::System::Void UpdateCheckMiss()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKMISS_OFFSET))(this);
		}

		::System::Void SendResult(::Enum_3_133B62C3E053DEAA result)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_133B62C3E053DEAA))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SENDRESULT_OFFSET))(this, result);
		}

		::System::Void DoPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DOPAUSE_OFFSET))(this);
		}

		::System::Void DoResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DORESUME_OFFSET))(this);
		}

		::System::Void CheckBonusBreak()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKBONUSBREAK_OFFSET))(this);
		}

		::System::Void _OnAnimatorZoneChanged(::UnityEngine::AnimatorStateInfo from, ::UnityEngine::AnimatorStateInfo to, ::System::Int32 layerIndex, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__ONANIMATORZONECHANGED_OFFSET))(this, from, to, layerIndex, entityID);
		}

		::System::Void AddBonusScore(::System::Double deltaHp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDBONUSSCORE_OFFSET))(this, deltaHp);
		}

		::System::Void AddScore(::System::Single score, ::System::Boolean isBonus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDSCORE_OFFSET))(this, score, isBonus);
		}

		::System::Void AddCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDCOMBO_OFFSET))(this);
		}

		::System::Void ClearCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CLEARCOMBO_OFFSET))(this);
		}

		::System::Void AddMissCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDMISSCOMBO_OFFSET))(this);
		}

		::System::Void ClearMissCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CLEARMISSCOMBO_OFFSET))(this);
		}

		::System::Void AddFever(::System::Single feverScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDFEVER_OFFSET))(this, feverScore);
		}

		::System::Void CheckFeverMax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKFEVERMAX_OFFSET))(this);
		}

		::System::Void CheckDecreaseFever(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKDECREASEFEVER_OFFSET))(this, dt);
		}

		::System::Void PreDealTrackNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_PREDEALTRACKNEW_OFFSET))(this);
		}

		::System::Void InitConditionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_INITCONDITIONDATA_OFFSET))(this);
		}

		::System::Void DoCheck(::Enum_3_22E7F79BA96A1935 type, ::System::Object* val)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_22E7F79BA96A1935, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DOCHECK_OFFSET))(this, type, val);
		}

		::System::Void OnComboCountChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONCOMBOCOUNTCHANGE_OFFSET))(this);
		}

		::System::Void OnFeverCountChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONFEVERCOUNTCHANGE_OFFSET))(this);
		}

		::System::Void OnMissCountChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONMISSCOUNTCHANGE_OFFSET))(this);
		}

		::System::Void OnAvatarHpChange(::System::Double percent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONAVATARHPCHANGE_OFFSET))(this, percent);
		}

		::System::Void OnEnterBonus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONENTERBONUS_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
