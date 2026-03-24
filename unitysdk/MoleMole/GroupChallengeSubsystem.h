#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3ED7CD02351A6F35.h"
#include "unitysdk/Enum_3_C4F2CAEB780F2D97.h"
#include "unitysdk/Enum_3_DB663931210BBC27_11.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_429077904A4ECF2B.h"
#include "unitysdk/Struct_2_D37445D6054F848B.h"

class Class_1_3E3F094BA95A3C04;
class Class_1_6178B3CA1C4EB604;
class Class_1_B7E341C5F1A6F199;
class Class_3_1A345EAE5F749316_26;
class Class_3_4EE04B418903C4E1_40;
class Class_3_9F091E965E210217_11;
namespace MoleMole { class GroupChallengeSubsystem_CustomConditionCallback; }
namespace MoleMole { class GroupChallengeSubsystem_LevelConditionCallback; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_BUILDGROUPCHALLENGEENDCSREQ_OFFSET UNITYSDK_OFFSET(0x7A6EA60)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_BUILDMULTIPLAYERFLOORCHALLENGEINFOCSNOTIFY_OFFSET UNITYSDK_OFFSET(0x7A6D840)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_BUILDMULTIPLAYERGROUPCHALLENGEINFOCSNOTIFY_OFFSET UNITYSDK_OFFSET(0x7A6DC50)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_CANCELGROUPCHALLENGEBYID_OFFSET UNITYSDK_OFFSET(0x7A70F50)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_FINISHGROUPCHALLENGEBYID_OFFSET UNITYSDK_OFFSET(0x7A71190)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_HANDLEEVTLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0x7A6FB60)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_MAPPINGFLAGSTOREPORTREASON_OFFSET UNITYSDK_OFFSET(0x7A6E910)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEBEGIN_OFFSET UNITYSDK_OFFSET(0x7A6ECC0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGECANCEL_OFFSET UNITYSDK_OFFSET(0x7A6E870)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEEND_OFFSET UNITYSDK_OFFSET(0x7A6E130)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0x7A6E080)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x7A6D4B0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7A70090)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x7A6FAD0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7A70310)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTERCUSTOMCHALLENGECONDITION_OFFSET UNITYSDK_OFFSET(0x7A6EE60)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x7A6F4E0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTERGROUPCHALLENGE_OFFSET UNITYSDK_OFFSET(0x7A70AA0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTERLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0x7A6FCC0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRIGGERCUSTOMCHALLENGECONDITION_OFFSET UNITYSDK_OFFSET(0x7A6F330)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_1_OFFSET UNITYSDK_OFFSET(0x7A70970)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_2_OFFSET UNITYSDK_OFFSET(0x7A712F0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_3_OFFSET UNITYSDK_OFFSET(0x7A70E10)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_OFFSET UNITYSDK_OFFSET(0x7A70870)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_UNREGISTERCUSTOMCHALLENGECONDITION_OFFSET UNITYSDK_OFFSET(0x7A6F0E0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x7A6F840)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_UNREGISTERLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0x7A6FEC0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x7A71410)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7A71570)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x7A715D0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7A716B0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x7A71710)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x7A71770)

namespace MoleMole
{
	inline static constexpr unsigned int GroupChallengeSubsystem_TypeDefinitionIndex = 75645;

	class GroupChallengeSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::GroupChallengeSubsystem*>
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_6178B3CA1C4EB604*>* _challengeRecords; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::GroupChallengeSubsystem_LevelConditionCallback*>* _levelConditionCallbackMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::Struct_2_429077904A4ECF2B, ::MoleMole::GroupChallengeSubsystem_CustomConditionCallback*>* _callbackMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnChallengeProgressChanged(::Class_1_6178B3CA1C4EB604* challenge)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6178B3CA1C4EB604*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEPROGRESSCHANGED_OFFSET))(this, challenge);
		}

		::System::Void OnChallengeFinish(::Class_1_6178B3CA1C4EB604* challenge, ::System::Boolean result, ::Enum_3_C4F2CAEB780F2D97 flags, ::Enum_3_3ED7CD02351A6F35 reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6178B3CA1C4EB604*, ::System::Boolean, ::Enum_3_C4F2CAEB780F2D97, ::Enum_3_3ED7CD02351A6F35))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEFINISH_OFFSET))(this, challenge, result, flags, reason);
		}

		::System::Void OnChallengeCancel(::Class_1_6178B3CA1C4EB604* challenge, ::Enum_3_C4F2CAEB780F2D97 flags, ::Enum_3_3ED7CD02351A6F35 reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6178B3CA1C4EB604*, ::Enum_3_C4F2CAEB780F2D97, ::Enum_3_3ED7CD02351A6F35))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGECANCEL_OFFSET))(this, challenge, flags, reason);
		}

		::System::Void OnChallengeEnd(::Class_1_6178B3CA1C4EB604* challenge, ::System::Boolean isSuccess, ::Enum_3_C4F2CAEB780F2D97 endFlag, ::Enum_3_3ED7CD02351A6F35 reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6178B3CA1C4EB604*, ::System::Boolean, ::Enum_3_C4F2CAEB780F2D97, ::Enum_3_3ED7CD02351A6F35))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEEND_OFFSET))(this, challenge, isSuccess, endFlag, reason);
		}

		::System::Void OnChallengeBegin(::Class_1_6178B3CA1C4EB604* challenge)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6178B3CA1C4EB604*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEBEGIN_OFFSET))(this, challenge);
		}

		::Class_3_4EE04B418903C4E1_40* BuildMultiPlayerGroupChallengeInfoCsNotify(::Class_1_6178B3CA1C4EB604* challenge, ::Enum_3_DB663931210BBC27_11 state)
		{
			return ((::Class_3_4EE04B418903C4E1_40*(*)(::PVOID, ::Class_1_6178B3CA1C4EB604*, ::Enum_3_DB663931210BBC27_11))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_BUILDMULTIPLAYERGROUPCHALLENGEINFOCSNOTIFY_OFFSET))(this, challenge, state);
		}

		::Class_3_1A345EAE5F749316_26* BuildMultiPlayerFloorChallengeInfoCsNotify(::Class_1_6178B3CA1C4EB604* challenge, ::Enum_3_DB663931210BBC27_11 state)
		{
			return ((::Class_3_1A345EAE5F749316_26*(*)(::PVOID, ::Class_1_6178B3CA1C4EB604*, ::Enum_3_DB663931210BBC27_11))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_BUILDMULTIPLAYERFLOORCHALLENGEINFOCSNOTIFY_OFFSET))(this, challenge, state);
		}

		::Enum_3_3ED7CD02351A6F35 MappingFlagsToReportReason(::Enum_3_C4F2CAEB780F2D97 flags, ::Enum_3_3ED7CD02351A6F35 overrideReason)
		{
			return ((::Enum_3_3ED7CD02351A6F35(*)(::PVOID, ::Enum_3_C4F2CAEB780F2D97, ::Enum_3_3ED7CD02351A6F35))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_MAPPINGFLAGSTOREPORTREASON_OFFSET))(this, flags, overrideReason);
		}

		::Class_3_9F091E965E210217_11* BuildGroupChallengeEndCsReq(::Class_1_6178B3CA1C4EB604* challenge, ::System::Boolean isSuccess, ::Enum_3_3ED7CD02351A6F35 endReportReason)
		{
			return ((::Class_3_9F091E965E210217_11*(*)(::PVOID, ::Class_1_6178B3CA1C4EB604*, ::System::Boolean, ::Enum_3_3ED7CD02351A6F35))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_BUILDGROUPCHALLENGEENDCSREQ_OFFSET))(this, challenge, isSuccess, endReportReason);
		}

		::System::Void RegisterCustomChallengeCondition(::System::UInt32 groupID, ::System::Int32 conditionID, ::MoleMole::GroupChallengeSubsystem_CustomConditionCallback* triggerCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::MoleMole::GroupChallengeSubsystem_CustomConditionCallback*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTERCUSTOMCHALLENGECONDITION_OFFSET))(this, groupID, conditionID, triggerCallback);
		}

		::System::Void UnregisterCustomChallengeCondition(::System::UInt32 groupID, ::System::Int32 conditionID, ::MoleMole::GroupChallengeSubsystem_CustomConditionCallback* triggerCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::MoleMole::GroupChallengeSubsystem_CustomConditionCallback*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_UNREGISTERCUSTOMCHALLENGECONDITION_OFFSET))(this, groupID, conditionID, triggerCallback);
		}

		::System::Void TriggerCustomChallengeCondition(::System::UInt32 groupID, ::System::Int32 conditionID, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRIGGERCUSTOMCHALLENGECONDITION_OFFSET))(this, groupID, conditionID, count);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void RegisterLevelCondition(::System::Int32 levelConditionID, ::MoleMole::GroupChallengeSubsystem_LevelConditionCallback* triggerCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::GroupChallengeSubsystem_LevelConditionCallback*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTERLEVELCONDITION_OFFSET))(this, levelConditionID, triggerCallback);
		}

		::System::Void UnregisterLevelCondition(::System::Int32 levelConditionID, ::MoleMole::GroupChallengeSubsystem_LevelConditionCallback* triggerCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::GroupChallengeSubsystem_LevelConditionCallback*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_UNREGISTERLEVELCONDITION_OFFSET))(this, levelConditionID, triggerCallback);
		}

		::System::Void HandleEvtLevelCondition(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_HANDLEEVTLEVELCONDITION_OFFSET))(this, evt);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean TryGetGroupChallengeRecord(::System::UInt32 groupID, ::Class_1_6178B3CA1C4EB604*& challengeRecord, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_6178B3CA1C4EB604*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_OFFSET))(this, groupID, challengeRecord, index);
		}

		::System::Boolean TryGetGroupChallengeRecord_1(::System::UInt32 groupID, ::System::Int32 challengeID, ::Class_1_6178B3CA1C4EB604*& challengeRecord, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::Class_1_6178B3CA1C4EB604*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_1_OFFSET))(this, groupID, challengeID, challengeRecord, index);
		}

		::System::Void RegisterGroupChallenge(::System::UInt32 groupID, ::System::Int32 challengeID, ::Class_1_3E3F094BA95A3C04* buildContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::Class_1_3E3F094BA95A3C04*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTERGROUPCHALLENGE_OFFSET))(this, groupID, challengeID, buildContext);
		}

		::System::Void CancelGroupChallengeByID(::System::UInt32 groupID, ::System::Int32 challengeID, ::Enum_3_C4F2CAEB780F2D97 flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::Enum_3_C4F2CAEB780F2D97))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_CANCELGROUPCHALLENGEBYID_OFFSET))(this, groupID, challengeID, flags);
		}

		::System::Void FinishGroupChallengeByID(::System::UInt32 groupID, ::System::Int32 challengeID, ::System::Boolean isSuccess, ::Enum_3_C4F2CAEB780F2D97 flags, ::Enum_3_3ED7CD02351A6F35 reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean, ::Enum_3_C4F2CAEB780F2D97, ::Enum_3_3ED7CD02351A6F35))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_FINISHGROUPCHALLENGEBYID_OFFSET))(this, groupID, challengeID, isSuccess, flags, reason);
		}

		::System::Boolean TryGetGroupChallengeRecord_2(::System::UInt32 groupID, ::Struct_2_D37445D6054F848B& challengeHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Struct_2_D37445D6054F848B&))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_2_OFFSET))(this, groupID, challengeHandle);
		}

		::System::Boolean TryGetGroupChallengeRecord_3(::System::UInt32 groupID, ::System::Int32 challengeID, ::Struct_2_D37445D6054F848B& challengeHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::Struct_2_D37445D6054F848B&))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_3_OFFSET))(this, groupID, challengeID, challengeHandle);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
