#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_298DC3CE224F6DF8.h"
#include "unitysdk/Enum_3_3A1DCD22526CC6D0.h"
#include "unitysdk/Enum_3_635F39F6CFF8583C.h"
#include "unitysdk/Enum_3_6A15F0394BF6F10B.h"
#include "unitysdk/Enum_3_80565EDC4420BFE0.h"
#include "unitysdk/Enum_3_CDAC16D6E8EB95EB.h"
#include "unitysdk/Enum_3_F4E08D0E9B554572.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_A0B1A57C6DC75B0F;
class Class_2_D89CCC627A66D0AD;
class Class_2_F69D29AB796376C2;
namespace MoleMole { class UIRoleSelectPageContext_OnHandleRoleSelect; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLESELECTPAGECONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x74A22A0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_DISABLEMULTISELECTTOGGLE_OFFSET UNITYSDK_OFFSET(0x9578A80)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_COLLECTNOTOWNEDAVATARS_OFFSET UNITYSDK_OFFSET(0x74A21A0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_FIRSTASCAPTAIN_OFFSET UNITYSDK_OFFSET(0x74A2440)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_MULTISELECTTOGGLEDISABLED_OFFSET UNITYSDK_OFFSET(0x74A2480)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_ONBLOCKCLICKHINT_OFFSET UNITYSDK_OFFSET(0x74A2460)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_OTHERTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x74A24A0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTIONS_OFFSET UNITYSDK_OFFSET(0x74A2420)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTTYPE_OFFSET UNITYSDK_OFFSET(0x74A2400)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_TEAMSPLITINDEX_OFFSET UNITYSDK_OFFSET(0x74A24C0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_USAGE_OFFSET UNITYSDK_OFFSET(0x74A2190)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETBLOCKSELECTIONS_OFFSET UNITYSDK_OFFSET(0x9578910)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_1_OFFSET UNITYSDK_OFFSET(0x9578780)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_OFFSET UNITYSDK_OFFSET(0x95785F0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCUSTOMRETURNHANDLER_OFFSET UNITYSDK_OFFSET(0x74A2220)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDOTHERTEAM_OFFSET UNITYSDK_OFFSET(0x95782C0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDUNSELECTABLE_OFFSET UNITYSDK_OFFSET(0x74A2580)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTED_OFFSET UNITYSDK_OFFSET(0x7499F70)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTFIRSTASCAPTAIN_OFFSET UNITYSDK_OFFSET(0x74A2510)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETPREEMPTIBLEOTHERTEAM_OFFSET UNITYSDK_OFFSET(0x9578460)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_FIRSTASCAPTAIN_OFFSET UNITYSDK_OFFSET(0x74A2450)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_MULTISELECTTOGGLEDISABLED_OFFSET UNITYSDK_OFFSET(0x74A2490)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_ONBLOCKCLICKHINT_OFFSET UNITYSDK_OFFSET(0x74A2470)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_OTHERTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x74A24B0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTIONS_OFFSET UNITYSDK_OFFSET(0x74A2430)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTTYPE_OFFSET UNITYSDK_OFFSET(0x74A2410)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_TEAMSPLITINDEX_OFFSET UNITYSDK_OFFSET(0x74A24D0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x74A24E0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x7499F40)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x9578AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageContext_TypeDefinitionIndex = 63442;

	class UIRoleSelectPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::System::Int32, ::System::String*>* _OnBlockClickHint_k__BackingField; // 0x28
		::Il2CppArray<::Enum_3_3A1DCD22526CC6D0>* sortTypes; // 0x30
		::Il2CppArray<::System::Int32>* _savedInitSelection; // 0x38
		::Il2CppArray<::Enum_3_3A1DCD22526CC6D0>* highPrioritySortTypes; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* unselectableList; // 0x48
		::System::Collections::Generic::HashSet_1<::System::Int32>* blacklist; // 0x50
		::MoleMole::UIRoleSelectPageContext_OnHandleRoleSelect* customSelectHandle; // 0x58
		::System::Func_4<::System::Int32, ::System::Int32, ::Class_2_D89CCC627A66D0AD*, ::System::String*>* CustomGetMultiIndexStr; // 0x60
		::Class_2_F69D29AB796376C2* QuestCfg; // 0x68
		::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* showRobots; // 0x70
		::System::Func_3<::Class_1_A0B1A57C6DC75B0F*, ::System::Action_1<::System::Boolean>*, ::System::Boolean>* _customSelectCheckHandle; // 0x78
		::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* showAvatarList; // 0x80
		::System::Func_2<::Class_2_D89CCC627A66D0AD*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>* CustomGetOtherTeamSelectIndex; // 0x88
		::System::Func_2<::System::Int32, ::System::Boolean>* avatarLockCheckFunc; // 0x90
		::System::String* multiSelectBtnKey; // 0x98
		::System::Collections::Generic::HashSet_1<::System::Int32>* whitelist; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::Enum_3_6A15F0394BF6F10B, ::System::UInt16>>* _Selections_k__BackingField; // 0xA8
		::Enum_3_80565EDC4420BFE0 BuildBtnType; // 0xB0
		::System::Boolean MultiSelectDontShowNum; // 0xB4
		::System::Boolean IsForceShowOwnFilterSorter; // 0xB5
		::System::Boolean _FirstAsCaptain_k__BackingField; // 0xB6
		::System::Boolean showTrustDegreeBtn; // 0xB7
		::System::Int32 AutoTabIndex; // 0xB8
		::System::Int32 initSelectionAvatarID; // 0xBC
		::System::Boolean disableSubViewBtns; // 0xC0
		::System::Boolean IsAutoToRoleInfoPage; // 0xC1
		::System::Boolean ForceClickWeapon; // 0xC2
		::System::Boolean _MultiSelectToggleDisabled_k__BackingField; // 0xC3
		::System::Int32 slotIndexInTeam; // 0xC4
		::System::Int32 AvatarUpgradeID; // 0xC8
		::System::Int32 _OtherTeamIndex_k__BackingField; // 0xCC
		::System::Int32 _TeamSplitIndex_k__BackingField; // 0xD0
		::System::UInt16 _selectedIndex; // 0xD4
		::System::Boolean banBackFlowRobot; // 0xD6
		::System::Boolean IsBigScene; // 0xD7
		::Enum_3_CDAC16D6E8EB95EB _usage; // 0xD8
		::Enum_3_635F39F6CFF8583C customSelectReturnType; // 0xDC
		::System::Int32 selectMaxCount; // 0xE0
		::Share::EHollowQuestType HollowQuestType; // 0xE4
		::Enum_3_298DC3CE224F6DF8 banSelfOwnedAvatarMode; // 0xE8
		::Enum_3_F4E08D0E9B554572 _SelectType_k__BackingField; // 0xEC
		::System::Boolean ForceClickEquip; // 0xF0
		::System::Boolean IsAutoToRoleInfoWithBlack; // 0xF1
		::System::Boolean IsFromQuickTeam; // 0xF2
		::System::Boolean allowSameName; // 0xF3

		::System::Void _ctor(::Enum_3_F4E08D0E9B554572 selectType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F4E08D0E9B554572))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_OFFSET))(this, selectType);
		}

		::System::Void _ctor_1(::Enum_3_CDAC16D6E8EB95EB usage, ::Enum_3_F4E08D0E9B554572 selectType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_CDAC16D6E8EB95EB, ::Enum_3_F4E08D0E9B554572))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_1_OFFSET))(this, usage, selectType);
		}

		::Enum_3_CDAC16D6E8EB95EB get_usage()
		{
			return ((::Enum_3_CDAC16D6E8EB95EB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_USAGE_OFFSET))(this);
		}

		::System::Boolean get_collectNotOwnedAvatars()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_COLLECTNOTOWNEDAVATARS_OFFSET))(this);
		}

		::System::Void SetCustomReturnHandler(::MoleMole::UIRoleSelectPageContext_OnHandleRoleSelect* customSelectAction, ::Enum_3_635F39F6CFF8583C returnType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRoleSelectPageContext_OnHandleRoleSelect*, ::Enum_3_635F39F6CFF8583C))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCUSTOMRETURNHANDLER_OFFSET))(this, customSelectAction, returnType);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::Enum_3_F4E08D0E9B554572 get_SelectType()
		{
			return ((::Enum_3_F4E08D0E9B554572(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTTYPE_OFFSET))(this);
		}

		::System::Void set_SelectType(::Enum_3_F4E08D0E9B554572 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F4E08D0E9B554572))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::Enum_3_6A15F0394BF6F10B, ::System::UInt16>>* get_Selections()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::Enum_3_6A15F0394BF6F10B, ::System::UInt16>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTIONS_OFFSET))(this);
		}

		::System::Void set_Selections(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::Enum_3_6A15F0394BF6F10B, ::System::UInt16>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::Enum_3_6A15F0394BF6F10B, ::System::UInt16>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_FirstAsCaptain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_FIRSTASCAPTAIN_OFFSET))(this);
		}

		::System::Void set_FirstAsCaptain(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_FIRSTASCAPTAIN_OFFSET))(this, value);
		}

		::System::Func_2<::System::Int32, ::System::String*>* get_OnBlockClickHint()
		{
			return ((::System::Func_2<::System::Int32, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_ONBLOCKCLICKHINT_OFFSET))(this);
		}

		::System::Void set_OnBlockClickHint(::System::Func_2<::System::Int32, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_ONBLOCKCLICKHINT_OFFSET))(this, value);
		}

		::System::Boolean get_MultiSelectToggleDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_MULTISELECTTOGGLEDISABLED_OFFSET))(this);
		}

		::System::Void set_MultiSelectToggleDisabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_MULTISELECTTOGGLEDISABLED_OFFSET))(this, value);
		}

		::System::Int32 get_OtherTeamIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_OTHERTEAMINDEX_OFFSET))(this);
		}

		::System::Void set_OtherTeamIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_OTHERTEAMINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_TeamSplitIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_TEAMSPLITINDEX_OFFSET))(this);
		}

		::System::Void set_TeamSplitIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_TEAMSPLITINDEX_OFFSET))(this, value);
		}

		::MoleMole::UIRoleSelectPageContext* SetMultiSelectFirstAsCaptain(::System::Boolean firstAsCaptain)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTFIRSTASCAPTAIN_OFFSET))(this, firstAsCaptain);
		}

		::MoleMole::UIRoleSelectPageContext* SetMultiSelected(::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>* multiSelected, ::System::Int32 startIdx, ::System::Int32 count)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTED_OFFSET))(this, multiSelected, startIdx, count);
		}

		::MoleMole::UIRoleSelectPageContext* SetMultiSelectedUnselectable(::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>* multiSelected, ::System::Int32 startIdx, ::System::Int32 count)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDUNSELECTABLE_OFFSET))(this, multiSelected, startIdx, count);
		}

		::MoleMole::UIRoleSelectPageContext* SetMultiSelectedOtherTeam(::System::Int32 otherTeamIdx, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>* multiSelected, ::System::Int32 startIdx, ::System::Int32 count)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDOTHERTEAM_OFFSET))(this, otherTeamIdx, multiSelected, startIdx, count);
		}

		::MoleMole::UIRoleSelectPageContext* SetPreemptibleOtherTeam(::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>* avatarList, ::System::Int32 startIdx, ::System::Int32 count)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETPREEMPTIBLEOTHERTEAM_OFFSET))(this, avatarList, startIdx, count);
		}

		::MoleMole::UIRoleSelectPageContext* SetConfirmedSelections(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* multiSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_OFFSET))(this, multiSelected);
		}

		::MoleMole::UIRoleSelectPageContext* SetConfirmedSelections_1(::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>* multiSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_1_OFFSET))(this, multiSelected);
		}

		::MoleMole::UIRoleSelectPageContext* SetBlockSelections(::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>* multiSelected, ::System::Func_2<::System::Int32, ::System::String*>* onBlockClickHint, ::Enum_3_6A15F0394BF6F10B additionFlags)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>*, ::System::Func_2<::System::Int32, ::System::String*>*, ::Enum_3_6A15F0394BF6F10B))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETBLOCKSELECTIONS_OFFSET))(this, multiSelected, onBlockClickHint, additionFlags);
		}

		::MoleMole::UIRoleSelectPageContext* DisableMultiSelectToggle()
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_DISABLEMULTISELECTTOGGLE_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
