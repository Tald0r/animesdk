#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_759B08C41000F376.h"
#include "unitysdk/Enum_3_80565EDC4420BFE0.h"
#include "unitysdk/Enum_3_A3F38457E644339A.h"
#include "unitysdk/Enum_3_D51CB1582D6C6E9A.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/Struct_2_545C436C5B39D527.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_24;
class Class_1_44EFB945CAE441A3;
class Class_1_55B48B6A32F3120C;
class Class_1_945ACFB1FEBC7A2C_9;
class Class_1_A0B1A57C6DC75B0F;
class Class_1_BE16AD5EE326FCBB;
class Class_2_0A55B5A82A61DAFA;
class Class_2_0A55B5A82A61DAFA_1;
class Class_2_208CC9941471731A_65;
class Class_2_7D61104C59A2F8F6;
class Class_2_8F61B9A09E64A3EA;
class Class_2_D89CCC627A66D0AD;
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

#define MOLEMOLE_UILINEUPSELECTCONTEXT_GET_HASVALIDPRESETSAVATAR_OFFSET UNITYSDK_OFFSET(0xABFADD0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETACTIVITYBATTLEQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0xABFB030)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETARCHIVEBATTLEQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0xABFC500)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETHOLLOWQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0xABFC730)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETLINEUPQUESTBASECONTEXT_OFFSET UNITYSDK_OFFSET(0xABFB440)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPEQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0xABFCBB0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPETASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xABFCCF0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xABFAEF0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0xABFB310)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_3_OFFSET UNITYSDK_OFFSET(0xABFC4D0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_4_OFFSET UNITYSDK_OFFSET(0xABFC700)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_5_OFFSET UNITYSDK_OFFSET(0xABFCB80)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_6_OFFSET UNITYSDK_OFFSET(0xABFCCC0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xABFADE0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__SETLINEUPQUESTBASECONTEXT_B__60_0_OFFSET UNITYSDK_OFFSET(0xABFCE00)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext_TypeDefinitionIndex = 67815;

	class UILineupSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::System::Int32, ::System::Boolean>* OverrideCheckSlotClick; // 0x28
		::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* RobotList; // 0x30
		::System::Func_2<::System::Int32, ::System::Boolean>* buddyLockCheckFunc; // 0x38
		::Class_1_BE16AD5EE326FCBB* initSelections; // 0x40
		::System::Func_2<::System::Int32, ::System::String*>* GetDisableSelectHintKey; // 0x48
		::Class_1_55B48B6A32F3120C* extraPresetsConfig; // 0x50
		::System::Func_1<::System::Boolean>* getNoReward; // 0x58
		::System::Action_1<::System::Boolean>* setNoReward; // 0x60
		::System::Action_1<::MoleMole::QuickEditContext*>* SetQuickEditorContext; // 0x68
		::Class_1_945ACFB1FEBC7A2C_9* multiPlayInfo; // 0x70
		::MoleMole::UILineupSelectContext_OnGetRoleSelectContextDel* onGetRoleSelectContext; // 0x78
		::MoleMole::UILineupSelectContext_BeginBattleDel* onBeginBattle; // 0x80
		::System::Func_3<::Class_1_A0B1A57C6DC75B0F*, ::System::Action_1<::System::Boolean>*, ::System::Boolean>* _customSelectCheckHandle; // 0x88
		::Class_2_8F61B9A09E64A3EA* QuestCfg; // 0x90
		::System::Action_1<::MoleMole::UILineupSelectPageController*>* overrideMainAction; // 0x98
		::System::Action_1<::System::Action*>* overrideBackAction; // 0xA0
		::Il2CppArray<::System::Int32>* teams; // 0xA8
		::System::String* buddyLockTipTextMapId; // 0xB0
		::System::Action_1<::System::Action*>* goButtonClickCallback; // 0xB8
		::MoleMole::UILineupSelectContext_CheckGoBattleDel* onCheckCanGoBattle; // 0xC0
		::System::Action* onShowDetailInfo; // 0xC8
		::Struct_2_545C436C5B39D527 battleTypeData; // 0xD0
		::System::Func_2<::System::Int32, ::System::Boolean>* avatarLockCheckFunc; // 0xE8
		::MoleMole::UILineupSelectContext_OnSelectionChanged* onSelectionChanged; // 0xF0
		::Class_3_5B0D01C92C1E671E_8* HollowQuestLevelInfo; // 0xF8
		::Class_3_DC4548D26CCF6FCF* onPostGetBuddySelectContext; // 0x100
		::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::Enum_3_D51CB1582D6C6E9A>>* slotTypes; // 0x108
		::System::Int32 AvatarUpgradeID; // 0x110
		::System::Int32 energyCost; // 0x114
		::Enum_3_759B08C41000F376 questType; // 0x118
		::System::Int32 lockSlotCount; // 0x11C
		::Enum_3_80565EDC4420BFE0 BuildBtnType; // 0x120
		::System::Boolean IsBigScene; // 0x124
		::System::Boolean banPreinstall; // 0x125
		::Share::EHollowQuestType hollowQuestType; // 0x126
		::System::Boolean allowSameName; // 0x128
		::System::Boolean showPairUpInfo; // 0x129
		::System::Boolean IsBanBackFlowRobot; // 0x12A
		::System::Boolean freeSlot; // 0x12B
		::System::Int32 currentMissionID; // 0x12C
		::System::Int32 avatarNeedCount; // 0x130
		::System::Int32 roleSelectCount; // 0x134
		::System::Int32 averageLevelTips; // 0x138
		::System::Int32 questSubTypeForRamen; // 0x13C
		::System::Boolean isRobotBuddy; // 0x140
		::System::Boolean openBuddy; // 0x141
		::System::Boolean showMainQuestDifficultyToggle; // 0x142
		::System::Boolean IsHideManualQTE; // 0x143
		::Enum_3_A3F38457E644339A rewardBuffTag; // 0x144
		::System::Int32 recommendedLevel; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_2_208CC9941471731A_65* config, ::System::Int32 activityID, ::System::Collections::Generic::List_1<::System::Int32>* conditionList, ::System::Collections::Generic::List_1<::System::Int32>* effectList, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* selectedRoleIDList, ::Il2CppArray<::System::Int32>* selectedBuddyID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_65*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_1_OFFSET))(this, config, activityID, conditionList, effectList, selectedRoleIDList, selectedBuddyID);
		}

		::System::Void _ctor_2(::Class_0_16E4307DCC419505_24* questTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_2_OFFSET))(this, questTemplate);
		}

		::System::Void _ctor_3(::Class_2_0A55B5A82A61DAFA* questTemp, ::System::Int32 fileID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_3_OFFSET))(this, questTemp, fileID);
		}

		::System::Void _ctor_4(::Class_2_0A55B5A82A61DAFA_1* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_4_OFFSET))(this, questTemp);
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

		::System::Void SetActivityBattleQuestContext(::Class_2_208CC9941471731A_65* config, ::System::Int32 activityID, ::System::Collections::Generic::List_1<::System::Int32>* conditionList, ::System::Collections::Generic::List_1<::System::Int32>* effectList, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* selectedRoleIDList, ::Il2CppArray<::System::Int32>* selectedBuddyID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_65*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETACTIVITYBATTLEQUESTCONTEXT_OFFSET))(this, config, activityID, conditionList, effectList, selectedRoleIDList, selectedBuddyID);
		}

		::System::Void SetLineupQuestBaseContext(::Class_0_16E4307DCC419505_24* questTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETLINEUPQUESTBASECONTEXT_OFFSET))(this, questTemplate);
		}

		::System::Void SetArchiveBattleQuestContext(::Class_2_0A55B5A82A61DAFA* questTemp, ::System::Int32 fileID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETARCHIVEBATTLEQUESTCONTEXT_OFFSET))(this, questTemp, fileID);
		}

		::System::Void SetHollowQuestContext(::Class_2_0A55B5A82A61DAFA_1* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETHOLLOWQUESTCONTEXT_OFFSET))(this, questTemp);
		}

		::System::Void SetMiniscapeQuestContext(::Class_2_F849585F56E9ACD1* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_F849585F56E9ACD1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPEQUESTCONTEXT_OFFSET))(this, questTemp);
		}

		::System::Void SetMiniscapeTaskContext(::Class_2_7D61104C59A2F8F6* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7D61104C59A2F8F6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPETASKCONTEXT_OFFSET))(this, questTemp);
		}

		::System::Boolean _SetLineupQuestBaseContext_b__60_0(::Class_1_44EFB945CAE441A3* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__SETLINEUPQUESTBASECONTEXT_B__60_0_OFFSET))(this, data);
		}
	};
}
