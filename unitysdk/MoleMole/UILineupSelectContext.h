#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7590C8C40FF831C9.h"
#include "unitysdk/Enum_3_80565EDC4420BFE0.h"
#include "unitysdk/Enum_3_A3F38457E644339A.h"
#include "unitysdk/Enum_3_D51CB1582D6C6E9A.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/Struct_2_545C436C5B39D527.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_27;
class Class_1_44EFB945CAE441A3;
class Class_1_55B48B6A32F3120C;
class Class_1_90F86E90A663D1B4;
class Class_1_945ACFB1FEBC7A2C_9;
class Class_1_A0B1A57C6DC75B0F;
class Class_2_0A55B5A82A61DAFA;
class Class_2_0A55B5A82A61DAFA_2;
class Class_2_208CC9941471731A_415;
class Class_2_7D61104C59A2F8F6;
class Class_2_D89CCC627A66D0AD;
class Class_2_F69D29AB796376C2;
class Class_2_F849585F56E9ACD1;
class Class_3_5B0D01C92C1E671E_8;
class Class_3_DC4548D26CCF6FCF;
namespace MoleMole { class QuickEditContext; }
namespace MoleMole { class UILineupSelectContext_BeginBattleDel; }
namespace MoleMole { class UILineupSelectContext_CheckGoBattleDel; }
namespace MoleMole { class UILineupSelectContext_OnGetRoleSelectContextDel; }
namespace MoleMole { class UILineupSelectContext_OnSelectionChanged; }
namespace MoleMole { class UILineupSelectPageController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT_GET_HASVALIDPRESETSAVATAR_OFFSET UNITYSDK_OFFSET(0x896ECC0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETACTIVITYBATTLEQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0x896EF20)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETARCHIVEBATTLEQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0x89703E0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETHOLLOWQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0x8970610)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETLINEUPQUESTBASECONTEXT_OFFSET UNITYSDK_OFFSET(0x896F320)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPEQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0x8970A80)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPETASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x8970BB0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x896EDE0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x896F1F0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x89703B0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x89705E0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_5_OFFSET UNITYSDK_OFFSET(0x8970A50)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_6_OFFSET UNITYSDK_OFFSET(0x8970B80)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x896ECD0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__SETLINEUPQUESTBASECONTEXT_B__61_0_OFFSET UNITYSDK_OFFSET(0x8970CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext_TypeDefinitionIndex = 55995;

	class UILineupSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_F69D29AB796376C2* QuestCfg; // 0x28
		::MoleMole::UILineupSelectContext_OnSelectionChanged* onSelectionChanged; // 0x30
		::MoleMole::UILineupSelectContext_OnGetRoleSelectContextDel* onGetRoleSelectContext; // 0x38
		::System::Func_2<::System::Int32, ::System::Boolean>* buddyLockCheckFunc; // 0x40
		::Struct_2_545C436C5B39D527 battleTypeData; // 0x48
		::System::Func_3<::Class_1_A0B1A57C6DC75B0F*, ::System::Action_1<::System::Boolean>*, ::System::Boolean>* _customSelectCheckHandle; // 0x60
		::System::Action_1<::System::Action*>* overrideBackAction; // 0x68
		::Class_3_DC4548D26CCF6FCF* onPostGetBuddySelectContext; // 0x70
		::Class_1_55B48B6A32F3120C* extraPresetsConfig; // 0x78
		::System::String* buddyLockTipTextMapId; // 0x80
		::Class_1_90F86E90A663D1B4* initSelections; // 0x88
		::System::Action* onShowDetailInfo; // 0x90
		::System::Func_2<::System::Int32, ::System::Boolean>* avatarLockCheckFunc; // 0x98
		::System::Func_2<::System::Int32, ::System::String*>* GetDisableSelectHintKey; // 0xA0
		::System::Func_1<::System::Boolean>* getNoReward; // 0xA8
		::System::Action_1<::MoleMole::UILineupSelectPageController*>* overrideMainAction; // 0xB0
		::System::Func_2<::System::Int32, ::System::Boolean>* OverrideCheckSlotClick; // 0xB8
		::MoleMole::UILineupSelectContext_CheckGoBattleDel* onCheckCanGoBattle; // 0xC0
		::System::Action_1<::System::Action*>* goButtonClickCallback; // 0xC8
		::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* RobotList; // 0xD0
		::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::Enum_3_D51CB1582D6C6E9A>>* slotTypes; // 0xD8
		::Class_3_5B0D01C92C1E671E_8* HollowQuestLevelInfo; // 0xE0
		::System::Action_1<::System::Boolean>* setNoReward; // 0xE8
		::Class_1_945ACFB1FEBC7A2C_9* multiPlayInfo; // 0xF0
		::MoleMole::UILineupSelectContext_BeginBattleDel* onBeginBattle; // 0xF8
		::Il2CppArray<::System::Int32>* teams; // 0x100
		::System::Action_1<::MoleMole::QuickEditContext*>* SetQuickEditorContext; // 0x108
		::System::Int32 currentMissionID; // 0x110
		::System::Boolean IsBanBackFlowRobot; // 0x114
		::System::Boolean showMainQuestDifficultyToggle; // 0x115
		::System::Boolean showPairUpInfo; // 0x116
		::System::Boolean banPreinstall; // 0x117
		::System::Int32 avatarNeedCount; // 0x118
		::System::Int32 energyCost; // 0x11C
		::System::Boolean freeSlot; // 0x120
		::System::Boolean openBuddy; // 0x121
		::Share::EHollowQuestType hollowQuestType; // 0x122
		::Enum_3_A3F38457E644339A rewardBuffTag; // 0x124
		::System::Int32 questSubTypeForRamen; // 0x128
		::Enum_3_80565EDC4420BFE0 BuildBtnType; // 0x12C
		::System::Int32 roleSelectCount; // 0x130
		::System::Int32 lockSlotCount; // 0x134
		::System::Int32 BigSceneTeamBuildingID; // 0x138
		::Enum_3_7590C8C40FF831C9 questType; // 0x13C
		::System::Int32 AvatarUpgradeID; // 0x140
		::System::Int32 recommendedLevel; // 0x144
		::System::Int32 averageLevelTips; // 0x148
		::System::Boolean allowSameName; // 0x14C
		::System::Boolean isRobotBuddy; // 0x14D
		::System::Boolean IsHideManualQTE; // 0x14E
		::System::Boolean IsBigScene; // 0x14F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_2_208CC9941471731A_415* config, ::System::Int32 activityID, ::System::Collections::Generic::List_1<::System::Int32>* conditionList, ::System::Collections::Generic::List_1<::System::Int32>* effectList, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* selectedRoleIDList, ::Il2CppArray<::System::Int32>* selectedBuddyID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_415*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_1_OFFSET))(this, config, activityID, conditionList, effectList, selectedRoleIDList, selectedBuddyID);
		}

		::System::Void _ctor_2(::Class_0_16E4307DCC419505_27* questTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_27*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_2_OFFSET))(this, questTemplate);
		}

		::System::Void _ctor_3(::Class_2_0A55B5A82A61DAFA_2* questTemp, ::System::Int32 fileID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_2*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_3_OFFSET))(this, questTemp, fileID);
		}

		::System::Void _ctor_4(::Class_2_0A55B5A82A61DAFA* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_4_OFFSET))(this, questTemp);
		}

		::System::Void _ctor_5(::Class_2_F849585F56E9ACD1* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_F849585F56E9ACD1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_5_OFFSET))(this, questTemp);
		}

		::System::Void _ctor_6(::Class_2_7D61104C59A2F8F6* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7D61104C59A2F8F6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_6_OFFSET))(this, questTemp);
		}

		::System::Boolean get_HasValidPresetsAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_GET_HASVALIDPRESETSAVATAR_OFFSET))(this);
		}

		::System::Void SetActivityBattleQuestContext(::Class_2_208CC9941471731A_415* config, ::System::Int32 activityID, ::System::Collections::Generic::List_1<::System::Int32>* conditionList, ::System::Collections::Generic::List_1<::System::Int32>* effectList, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* selectedRoleIDList, ::Il2CppArray<::System::Int32>* selectedBuddyID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_415*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETACTIVITYBATTLEQUESTCONTEXT_OFFSET))(this, config, activityID, conditionList, effectList, selectedRoleIDList, selectedBuddyID);
		}

		::System::Void SetLineupQuestBaseContext(::Class_0_16E4307DCC419505_27* questTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_27*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETLINEUPQUESTBASECONTEXT_OFFSET))(this, questTemplate);
		}

		::System::Void SetArchiveBattleQuestContext(::Class_2_0A55B5A82A61DAFA_2* questTemp, ::System::Int32 fileID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_2*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETARCHIVEBATTLEQUESTCONTEXT_OFFSET))(this, questTemp, fileID);
		}

		::System::Void SetHollowQuestContext(::Class_2_0A55B5A82A61DAFA* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETHOLLOWQUESTCONTEXT_OFFSET))(this, questTemp);
		}

		::System::Void SetMiniscapeQuestContext(::Class_2_F849585F56E9ACD1* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_F849585F56E9ACD1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPEQUESTCONTEXT_OFFSET))(this, questTemp);
		}

		::System::Void SetMiniscapeTaskContext(::Class_2_7D61104C59A2F8F6* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7D61104C59A2F8F6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPETASKCONTEXT_OFFSET))(this, questTemp);
		}

		::System::Boolean _SetLineupQuestBaseContext_b__61_0(::Class_1_44EFB945CAE441A3* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__SETLINEUPQUESTBASECONTEXT_B__61_0_OFFSET))(this, data);
		}
	};
}
