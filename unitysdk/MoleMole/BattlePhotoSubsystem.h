#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_1.h"
#include "unitysdk/Enum_3_501339D5CF922B98.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_0_16E4307DCC419505_247;
class Class_1_3D174A36CEBCAEC9;
class Class_1_47882399207A4DBA;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CHECKDYNAMICLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0x7BAE080)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CLOSEPHOTOUI_OFFSET UNITYSDK_OFFSET(0x7BAF290)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_COOLDOWNSKILL_OFFSET UNITYSDK_OFFSET(0x7BAD890)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CREATEBATTLEPHOTOQUESTTIPS_OFFSET UNITYSDK_OFFSET(0x7BB0290)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_DESTROYDYNAMICLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0x7BADEE0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_DISABLELEVELCONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x7BAE020)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ENABLELEVELCONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x7BADFC0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ENTERBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0x7BB2780)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_EXECUTEDYNAMICTREEINSTANCE_OFFSET UNITYSDK_OFFSET(0x7BAE260)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_EXITBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0x7BB2A50)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ALLTARGETS_OFFSET UNITYSDK_OFFSET(0x7BADBD0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_BATTLEPHOTOTARGETGROUPS_OFFSET UNITYSDK_OFFSET(0x7BAF720)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_CAMERATIPRUNTIME_OFFSET UNITYSDK_OFFSET(0x7BAF730)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISCANUSECAMERASKILL_OFFSET UNITYSDK_OFFSET(0x7BAF800)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISIMMERSIVEMODE_OFFSET UNITYSDK_OFFSET(0x7BAF880)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISINBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0x7BB2340)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISINSKILLCD_OFFSET UNITYSDK_OFFSET(0x7BAC520)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISMAINTARGETSFINISH_OFFSET UNITYSDK_OFFSET(0x7BAF9F0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSKILLACTIVEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x7BAC9A0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSKILLENERGYENOUGH_OFFSET UNITYSDK_OFFSET(0x7BAC880)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSUBTARGETSFINISH_OFFSET UNITYSDK_OFFSET(0x7BAFB80)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_MAINGROUPS_OFFSET UNITYSDK_OFFSET(0x7BADBE0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_MAXSKILLENERGY_OFFSET UNITYSDK_OFFSET(0x7BAC5E0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ONESLOTSKILLENERGY_OFFSET UNITYSDK_OFFSET(0x7BAC5D0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SCOREINT_OFFSET UNITYSDK_OFFSET(0x7BB0E80)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLCDRATIO_OFFSET UNITYSDK_OFFSET(0x7BAC540)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLCDTIMER_OFFSET UNITYSDK_OFFSET(0x7BAC530)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGYRATIO_OFFSET UNITYSDK_OFFSET(0x7BAC900)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGYSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x7BAC5F0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGY_OFFSET UNITYSDK_OFFSET(0x7BAC8F0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SUBGROUPS_OFFSET UNITYSDK_OFFSET(0x7BADBF0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET__SKILLENERGY_OFFSET UNITYSDK_OFFSET(0x7BAC600)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_HANDLEPHOTORESULT_OFFSET UNITYSDK_OFFSET(0x7BB1080)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITDYNAMICLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0x7BADCD0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x7BAC9B0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITGAMEQUESTTARGET_OFFSET UNITYSDK_OFFSET(0x7BAFD10)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYSKILLENERGY_OFFSET UNITYSDK_OFFSET(0x7BADAD0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYTARGETTIPSSHOW_OFFSET UNITYSDK_OFFSET(0x7BB0A50)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYTARGET_OFFSET UNITYSDK_OFFSET(0x7BAE710)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_NOTIFYCAMERASKILL_OFFSET UNITYSDK_OFFSET(0x7BB0920)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x7BB2360)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONCAMERATIPSSHOW_OFFSET UNITYSDK_OFFSET(0x7BB0770)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONCLICKUSEPHOTOSKILLBTN_OFFSET UNITYSDK_OFFSET(0x7BAF5E0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7BB2540)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONENTERMODE_OFFSET UNITYSDK_OFFSET(0x7BB27F0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONEXITMODE_OFFSET UNITYSDK_OFFSET(0x7BB2AC0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONLEVELCONDITIONSUCCESS_OFFSET UNITYSDK_OFFSET(0x7BAE950)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONPHOTOUICLOSE_OFFSET UNITYSDK_OFFSET(0x7BAF3C0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7BB2710)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_OPENPHOTOUI_OFFSET UNITYSDK_OFFSET(0x7BAE9D0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_POPTIMESLOW_OFFSET UNITYSDK_OFFSET(0x7BB1FE0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PROCESSBATTLEPHOTOTARGETGROUPS_OFFSET UNITYSDK_OFFSET(0x7BB1720)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PROCESSLEVELCONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x7BAE590)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PUSHTIMESLOW_OFFSET UNITYSDK_OFFSET(0x7BB19E0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REFRESHSKILLACTIVEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x7BAD540)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REGISTERTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x7BADC00)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REMOVEONESLOTSKILLENERGY_OFFSET UNITYSDK_OFFSET(0x7BAD9F0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_RESETLEVELCONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x7BAE1B0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SETSKILLENERGY_OFFSET UNITYSDK_OFFSET(0x7BADB50)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SET_ISINBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0x7BB2350)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SET__SKILLENERGY_OFFSET UNITYSDK_OFFSET(0x7BAC610)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x7BAD180)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKENERGYAUTORECOVERY_OFFSET UNITYSDK_OFFSET(0x7BAD300)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x7BACC50)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TRYEXITBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0x7BAF530)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TRYTRIGGERCAMERAPAGENEWBIE_OFFSET UNITYSDK_OFFSET(0x7BAEE70)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_USESKILL_OFFSET UNITYSDK_OFFSET(0x7BAF650)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x7BB2D00)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x7BB3010)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7BB3070)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7BB30D0)

namespace MoleMole
{
	inline static constexpr unsigned int BattlePhotoSubsystem_TypeDefinitionIndex = 55246;

	class BattlePhotoSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BattlePhotoSubsystem*>
	{
	public:
		// static const ::System::Int32 SKILL_ENERGY_SLOT_NUM = 0x3; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_247*>* _groupTips; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_247*>* _cameraTips; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _dynTreeInstID; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* _levelConditionSuccessCache; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _subGroups; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* _allTargets; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* _mainGroups; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_47882399207A4DBA*>* _battlePhotoTargetGroups; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_47882399207A4DBA*>*>* _targetGroups; // 0x50
		::System::Single _maxSkillCDTime; // 0x58
		::System::Single _skillCDTimer; // 0x5C
		::System::Boolean _isSkillActiveHighlight; // 0x60
		::System::Single _oneSlotSkillEnergy; // 0x64
		::System::Single __skillEnergy; // 0x68
		::System::Boolean _isLevelConditionCheckEnabled; // 0x6C
		::System::Boolean _IsInBattlePhotoMode_k__BackingField; // 0x6D
		::System::Boolean _isInSkillCD; // 0x6E
		::System::Boolean MuteSkillEnergyChange; // 0x6F
		::System::Single _maxSkillEnergy; // 0x70
		::Enum_3_501339D5CF922B98 _skillEnergySlotType; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsInSkillCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISINSKILLCD_OFFSET))(this);
		}

		::System::Single get_SkillCDTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLCDTIMER_OFFSET))(this);
		}

		::System::Single get_SkillCDRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLCDRATIO_OFFSET))(this);
		}

		::System::Single get_OneSlotSkillEnergy()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ONESLOTSKILLENERGY_OFFSET))(this);
		}

		::System::Single get_MaxSkillEnergy()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_MAXSKILLENERGY_OFFSET))(this);
		}

		::Enum_3_501339D5CF922B98 get_SkillEnergySlotType()
		{
			return ((::Enum_3_501339D5CF922B98(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGYSLOTTYPE_OFFSET))(this);
		}

		::System::Single get__skillEnergy()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET__SKILLENERGY_OFFSET))(this);
		}

		::System::Void set__skillEnergy(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SET__SKILLENERGY_OFFSET))(this, value);
		}

		::System::Single get_SkillEnergy()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGY_OFFSET))(this);
		}

		::System::Single get_SkillEnergyRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGYRATIO_OFFSET))(this);
		}

		::System::Boolean get_IsSkillEnergyEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSKILLENERGYENOUGH_OFFSET))(this);
		}

		::System::Boolean get_IsSkillActiveHighlight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSKILLACTIVEHIGHLIGHT_OFFSET))(this);
		}

		::System::Void InitGameplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITGAMEPLAY_OFFSET))(this);
		}

		::System::Void TickGameplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKGAMEPLAY_OFFSET))(this);
		}

		::System::Void TickEnergyAutoRecovery(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKENERGYAUTORECOVERY_OFFSET))(this, deltaTime);
		}

		::System::Void TickCoolDown(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKCOOLDOWN_OFFSET))(this, deltaTime);
		}

		::System::Void CoolDownSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_COOLDOWNSKILL_OFFSET))(this);
		}

		::System::Void RefreshSkillActiveHighlight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REFRESHSKILLACTIVEHIGHLIGHT_OFFSET))(this);
		}

		::System::Void RemoveOneSlotSkillEnergy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REMOVEONESLOTSKILLENERGY_OFFSET))(this);
		}

		::System::Void ModifySkillEnergy(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYSKILLENERGY_OFFSET))(this, delta);
		}

		::System::Void SetSkillEnergy(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SETSKILLENERGY_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_AllTargets()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ALLTARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_MainGroups()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_MAINGROUPS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_SubGroups()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SUBGROUPS_OFFSET))(this);
		}

		::System::Void RegisterTargetGroup(::System::Int32 groupID, ::System::Int32 targetID, ::Enum_3_121CF606CB7E9CD1_1 targetType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_121CF606CB7E9CD1_1))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REGISTERTARGETGROUP_OFFSET))(this, groupID, targetID, targetType);
		}

		::System::Void InitDynamicLevelCondition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITDYNAMICLEVELCONDITION_OFFSET))(this);
		}

		::System::Void DestroyDynamicLevelCondition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_DESTROYDYNAMICLEVELCONDITION_OFFSET))(this);
		}

		::System::Void EnableLevelConditionCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ENABLELEVELCONDITIONCHECK_OFFSET))(this);
		}

		::System::Void DisableLevelConditionCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_DISABLELEVELCONDITIONCHECK_OFFSET))(this);
		}

		::System::Void CheckDynamicLevelCondition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CHECKDYNAMICLEVELCONDITION_OFFSET))(this);
		}

		::System::Void ResetLevelConditionResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_RESETLEVELCONDITIONRESULT_OFFSET))(this);
		}

		::System::Void ExecuteDynamicTreeInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_EXECUTEDYNAMICTREEINSTANCE_OFFSET))(this);
		}

		::System::Void ProcessLevelConditionResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PROCESSLEVELCONDITIONRESULT_OFFSET))(this);
		}

		::System::Void OnLevelConditionSuccess(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONLEVELCONDITIONSUCCESS_OFFSET))(this, id);
		}

		::System::Void OpenPhotoUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_OPENPHOTOUI_OFFSET))(this);
		}

		::System::Void TryTriggerCameraPageNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TRYTRIGGERCAMERAPAGENEWBIE_OFFSET))(this);
		}

		::System::Void ClosePhotoUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CLOSEPHOTOUI_OFFSET))(this);
		}

		::System::Void OnPhotoUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONPHOTOUICLOSE_OFFSET))(this);
		}

		::System::Void OnClickUsePhotoSkillBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONCLICKUSEPHOTOSKILLBTN_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_47882399207A4DBA*>* get_BattlePhotoTargetGroups()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_47882399207A4DBA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_BATTLEPHOTOTARGETGROUPS_OFFSET))(this);
		}

		::Class_1_3D174A36CEBCAEC9* get_CameraTipRuntime()
		{
			return ((::Class_1_3D174A36CEBCAEC9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_CAMERATIPRUNTIME_OFFSET))(this);
		}

		::System::Boolean get_IsCanUseCameraSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISCANUSECAMERASKILL_OFFSET))(this);
		}

		::System::Boolean get_IsImmersiveMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISIMMERSIVEMODE_OFFSET))(this);
		}

		::System::Boolean get_IsMainTargetsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISMAINTARGETSFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsSubTargetsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSUBTARGETSFINISH_OFFSET))(this);
		}

		::System::Void InitGameQuestTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITGAMEQUESTTARGET_OFFSET))(this);
		}

		::System::Void CreateBattlePhotoQuestTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CREATEBATTLEPHOTOQUESTTIPS_OFFSET))(this);
		}

		::System::Void OnCameraTipsShow(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONCAMERATIPSSHOW_OFFSET))(this, obj);
		}

		::System::Void ModifyTarget(::System::Int32 targetID, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYTARGET_OFFSET))(this, targetID, isFinish);
		}

		::System::Void ModifyTargetTipsShow(::System::Collections::Generic::List_1<::Class_1_47882399207A4DBA*>* groups)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_47882399207A4DBA*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYTARGETTIPSSHOW_OFFSET))(this, groups);
		}

		::System::Void NotifyCameraSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_NOTIFYCAMERASKILL_OFFSET))(this);
		}

		::System::Int32 get_ScoreInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SCOREINT_OFFSET))(this);
		}

		::System::Void HandlePhotoResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_HANDLEPHOTORESULT_OFFSET))(this);
		}

		::System::Void ProcessBattlePhotoTargetGroups(::System::Collections::Generic::List_1<::System::Int32>* groupIDList, ::System::Collections::Generic::List_1<::System::Int32>*& finishedIDList, ::System::Int32& targetsScore, ::System::Boolean& targetsAllFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PROCESSBATTLEPHOTOTARGETGROUPS_OFFSET))(this, groupIDList, finishedIDList, targetsScore, targetsAllFinished);
		}

		::System::Void PushTimeSlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PUSHTIMESLOW_OFFSET))(this);
		}

		::System::Void PopTimeSlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_POPTIMESLOW_OFFSET))(this);
		}

		::System::Boolean get_IsInBattlePhotoMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISINBATTLEPHOTOMODE_OFFSET))(this);
		}

		::System::Void set_IsInBattlePhotoMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SET_ISINBATTLEPHOTOMODE_OFFSET))(this, value);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void EnterBattlePhotoMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ENTERBATTLEPHOTOMODE_OFFSET))(this);
		}

		::System::Void ExitBattlePhotoMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_EXITBATTLEPHOTOMODE_OFFSET))(this);
		}

		::System::Void TryExitBattlePhotoMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TRYEXITBATTLEPHOTOMODE_OFFSET))(this);
		}

		::System::Void UseSKill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_USESKILL_OFFSET))(this);
		}

		::System::Void OnEnterMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONENTERMODE_OFFSET))(this);
		}

		::System::Void OnExitMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONEXITMODE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
