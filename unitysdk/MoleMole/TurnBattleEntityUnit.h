#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_60A7BA8A302D0436.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/TurnBattleUnitBase.h"
#include "unitysdk/Struct_2_50DBA35CF4D6E819.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_873D643B365C45E2;
class Class_3_1699D6295DC3F818_4;
class Class_3_8018CDF1371D00D2;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRANSFERTONEXTROUND_OFFSET UNITYSDK_OFFSET(0x8B8E8B0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRIGGERSKILLBYINDEX_OFFSET UNITYSDK_OFFSET(0x8B910A0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GETSKILLFILTER_OFFSET UNITYSDK_OFFSET(0x8B917B0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x8B8E920)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_ISENEMY_OFFSET UNITYSDK_OFFSET(0x8B8EB80)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x8B8E830)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x8B8E940)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_HASSKILL_OFFSET UNITYSDK_OFFSET(0x8B90F30)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ISSKILLTARGETVALID_OFFSET UNITYSDK_OFFSET(0x8B919A0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_MOLEMOLE_ITURNBATTLEUNITSORTABLE_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x8B8E850)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_NEWSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x8B90BF0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONADDEDTOROUND_OFFSET UNITYSDK_OFFSET(0x8B8F0B0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x8B8EE70)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONPROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x8B8EF40)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONREMOVEDFROMROUND_OFFSET UNITYSDK_OFFSET(0x8B90B20)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONROUNDSTART_OFFSET UNITYSDK_OFFSET(0x8B8FB70)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x8B90930)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0x8B8FBE0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_OVERRIDESKILL_OFFSET UNITYSDK_OFFSET(0x8B8FEE0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SETENTITYMOVEMENTENABLE_OFFSET UNITYSDK_OFFSET(0x8B90C90)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SETPLAYERCONTROL_OFFSET UNITYSDK_OFFSET(0x8B90130)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x8B8E840)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x8B8E950)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILLBYINDEX_OFFSET UNITYSDK_OFFSET(0x8B90FD0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILL_OFFSET UNITYSDK_OFFSET(0x8B91320)
#define MOLEMOLE_TURNBATTLEENTITYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x8B8EBE0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONADDEDTOROUND_OFFSET UNITYSDK_OFFSET(0x8B922E0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONREMOVEDFROMROUND_OFFSET UNITYSDK_OFFSET(0x8B92350)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONROUNDSTART_OFFSET UNITYSDK_OFFSET(0x8B923B0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x8B92410)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0x8B92470)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleEntityUnit_TypeDefinitionIndex = 52029;

	class TurnBattleEntityUnit : public ::MoleMole::TurnBattleUnitBase
	{
	public:
		::Il2CppArray<::Struct_2_50DBA35CF4D6E819>* Skills; // 0x10
		::Class_3_8018CDF1371D00D2* MonsterInfoLog; // 0x18
		::MoleMole::Battle::Entity* Entity; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_1699D6295DC3F818_4*>* SkillUseCountLog; // 0x28
		::Class_2_873D643B365C45E2* _sourceSnapshot; // 0x30
		::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* _skillOverrideQueue; // 0x38
		::System::Int32 CurSelectSkillIndex; // 0x40
		::System::Boolean _isCurrentMovementEnabled; // 0x44
		::System::Single _SortWeight_k__BackingField; // 0x48

		::System::Void _ctor(::Class_2_873D643B365C45E2* sourceSnapshot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_873D643B365C45E2*))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT__CTOR_OFFSET))(this, sourceSnapshot);
		}

		::System::Single get_SortWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::Void set_SortWeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SORTWEIGHT_OFFSET))(this, value);
		}

		::System::Single MoleMole_ITurnBattleUnitSortable_get_SortWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_MOLEMOLE_ITURNBATTLEUNITSORTABLE_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::Boolean CanTransferToNextRound(::System::Int32 _)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRANSFERTONEXTROUND_OFFSET))(this, _);
		}

		::System::Int32 get_ConfigID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GET_CONFIGID_OFFSET))(this);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SPEED_OFFSET))(this, value);
		}

		::System::Boolean get_IsEnemy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GET_ISENEMY_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
		}

		::System::Void OnAddedToRound(::Enum_3_60A7BA8A302D0436 reason)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_60A7BA8A302D0436))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONADDEDTOROUND_OFFSET))(this, reason);
		}

		::System::Void OnRoundStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONROUNDSTART_OFFSET))(this);
		}

		::System::Void OnTurnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNSTART_OFFSET))(this);
		}

		::System::Void OnTurnOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNOVER_OFFSET))(this);
		}

		::System::Void OnRemovedFromRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONREMOVEDFROMROUND_OFFSET))(this);
		}

		::System::Void OnPropertyValueChanged(::System::UInt32 fighterID, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONPROPERTYVALUECHANGED_OFFSET))(this, fighterID, type, customType, oldValue, newValue);
		}

		::Class_2_873D643B365C45E2* NewSnapshot()
		{
			return ((::Class_2_873D643B365C45E2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_NEWSNAPSHOT_OFFSET))(this);
		}

		::System::Void SetPlayerControl(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_SETPLAYERCONTROL_OFFSET))(this, enabled);
		}

		::System::Void SetEntityMovementEnable(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_SETENTITYMOVEMENTENABLE_OFFSET))(this, enabled);
		}

		::System::Void OverrideSkill(::System::Int32 slotIdx, ::System::Int32 OverrideId, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_OVERRIDESKILL_OFFSET))(this, slotIdx, OverrideId, force);
		}

		::System::Boolean HasSkill(::System::Int32 skillIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_HASSKILL_OFFSET))(this, skillIndex);
		}

		::System::Boolean TriggerSkillByIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILLBYINDEX_OFFSET))(this, index);
		}

		::System::Boolean CanTriggerSkillByIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRIGGERSKILLBYINDEX_OFFSET))(this, index);
		}

		::System::Boolean TriggerSkill(::Struct_2_50DBA35CF4D6E819 skill)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_50DBA35CF4D6E819))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILL_OFFSET))(this, skill);
		}

		::System::Func_2<::MoleMole::TurnBattleEntityUnit*, ::System::Boolean>* GetSkillFilter(::System::Int32 skillIndex, ::System::Boolean ignoreRange, ::System::Boolean ignoreBlock)
		{
			return ((::System::Func_2<::MoleMole::TurnBattleEntityUnit*, ::System::Boolean>*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GETSKILLFILTER_OFFSET))(this, skillIndex, ignoreRange, ignoreBlock);
		}

		::System::Boolean IsSkillTargetValid(::Struct_2_50DBA35CF4D6E819 skill, ::MoleMole::TurnBattleEntityUnit* target, ::System::Int32& errorCode, ::System::Boolean ignoreRange, ::System::Boolean ignoreBlock)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_50DBA35CF4D6E819, ::MoleMole::TurnBattleEntityUnit*, ::System::Int32&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ISSKILLTARGETVALID_OFFSET))(this, skill, target, errorCode, ignoreRange, ignoreBlock);
		}

		::System::Void __base_OnAddedToRound(::Enum_3_60A7BA8A302D0436 P0)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_60A7BA8A302D0436))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONADDEDTOROUND_OFFSET))(this, P0);
		}

		::System::Void __base_OnRemovedFromRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONREMOVEDFROMROUND_OFFSET))(this);
		}

		::System::Void __base_OnRoundStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONROUNDSTART_OFFSET))(this);
		}

		::System::Void __base_OnTurnOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNOVER_OFFSET))(this);
		}

		::System::Void __base_OnTurnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNSTART_OFFSET))(this);
		}
	};
}
