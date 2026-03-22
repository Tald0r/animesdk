#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_AgeGateInfoType.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_AgeGateStage.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_ABORTAGEGATE_OFFSET UNITYSDK_OFFSET(0x192859F0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x192850C0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CLOSEAGEGATEDIALOG_OFFSET UNITYSDK_OFFSET(0x192844C0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CONTINUEAGEGATE_OFFSET UNITYSDK_OFFSET(0x19284870)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_EXTRACTLOGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x19284AA0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GETAGEGATESTATE_OFFSET UNITYSDK_OFFSET(0x19285670)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GETHIGHLIGHTEDTIMETEXT_OFFSET UNITYSDK_OFFSET(0x192854D0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x19283890)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GET_TICKETID_OFFSET UNITYSDK_OFFSET(0x192838B0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_ISAGEGATEBLOCKINGERROR_OFFSET UNITYSDK_OFFSET(0x192850E0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_ONAGEGATEPROCESSFAILED_OFFSET UNITYSDK_OFFSET(0x19284A30)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_RESETLOGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x192850B0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x192838A0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SET_TICKETID_OFFSET UNITYSDK_OFFSET(0x192838C0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEGATEBIRTHDAYDIALOG_OFFSET UNITYSDK_OFFSET(0x19284560)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEGATEBLOCKINGDIALOG_OFFSET UNITYSDK_OFFSET(0x192850F0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEGATECONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x192841B0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_STARTAGEGATEPROCESS_OFFSET UNITYSDK_OFFSET(0x192838F0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_STARTAGEGATEWEBVERIFICATION_OFFSET UNITYSDK_OFFSET(0x192847C0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_UPDATEAGEGATEUSERDATA_OFFSET UNITYSDK_OFFSET(0x19285830)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_UPDATELOGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x19284C50)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19285B70)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x192838D0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__SHOWAGEGATECONFIRMDIALOG_B__21_0_OFFSET UNITYSDK_OFFSET(0x19285BD0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__SHOWAGEGATECONFIRMDIALOG_B__21_1_OFFSET UNITYSDK_OFFSET(0x19285CE0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__STARTAGEGATEWEBVERIFICATION_B__23_0_OFFSET UNITYSDK_OFFSET(0x19285D80)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int AgeGateManager_TypeDefinitionIndex = 18275;

	class AgeGateManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::AgeGateManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::AgeGateManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0x9E80);
		}
		// static const ::System::String* MODULE_NAME; // 0x0
		// static const ::System::String* TICKET_ID; // 0x0
		::System::String* _TicketId_k__BackingField; // 0x10
		::System::Action_1<::System::Int32>* ageGateCallback; // 0x18
		::System::String* _Payload_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__CCTOR_OFFSET))();
		}

		::System::String* get_Payload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GET_PAYLOAD_OFFSET))(this);
		}

		::System::Void set_Payload(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SET_PAYLOAD_OFFSET))(this, value);
		}

		::System::String* get_TicketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GET_TICKETID_OFFSET))(this);
		}

		::System::Void set_TicketId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SET_TICKETID_OFFSET))(this, value);
		}

		::System::Void StartAgeGateProcess(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateStage stage, ::MiHoYo::SDK::JSONNode* dataObj, ::System::Action_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateStage, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_STARTAGEGATEPROCESS_OFFSET))(this, stage, dataObj, callback);
		}

		::System::Void CloseAgeGateDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CLOSEAGEGATEDIALOG_OFFSET))(this);
		}

		::System::Int32 ExtractLogStrategy(::MiHoYo::SDK::JSONNode* dataObj)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_EXTRACTLOGSTRATEGY_OFFSET))(this, dataObj);
		}

		::System::Void UpdateLogStrategy(::System::Int32 strategy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_UPDATELOGSTRATEGY_OFFSET))(this, strategy);
		}

		::System::Void ResetLogStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_RESETLOGSTRATEGY_OFFSET))(this);
		}

		::System::Void ClearCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CLEARCACHE_OFFSET))(this);
		}

		::System::Boolean IsAgeGateBlockingError(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode retcode)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_ISAGEGATEBLOCKINGERROR_OFFSET))(this, retcode);
		}

		::System::Void ShowAgeGateBlockingDialog(::System::Action* onConfirmCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEGATEBLOCKINGDIALOG_OFFSET))(this, onConfirmCallback);
		}

		::System::Void ShowAgeGateConfirmDialog(::System::Int64 timestamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEGATECONFIRMDIALOG_OFFSET))(this, timestamp);
		}

		::System::Void ShowAgeGateBirthdayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEGATEBIRTHDAYDIALOG_OFFSET))(this);
		}

		::System::Void StartAgeGateWebVerification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_STARTAGEGATEWEBVERIFICATION_OFFSET))(this);
		}

		::System::Void onAgeGateProcessFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_ONAGEGATEPROCESSFAILED_OFFSET))(this);
		}

		::System::Void GetAgeGateState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GETAGEGATESTATE_OFFSET))(this);
		}

		::System::Void UpdateAgeGateUserData(::System::String* data, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateInfoType dataType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateInfoType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_UPDATEAGEGATEUSERDATA_OFFSET))(this, data, dataType);
		}

		::System::Void ContinueAgeGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CONTINUEAGEGATE_OFFSET))(this);
		}

		::System::Void AbortAgeGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_ABORTAGEGATE_OFFSET))(this);
		}

		::System::String* GetHighlightedTimeText(::System::Int64 timestamp)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GETHIGHLIGHTEDTIMETEXT_OFFSET))(this, timestamp);
		}

		::System::Void _ShowAgeGateConfirmDialog_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__SHOWAGEGATECONFIRMDIALOG_B__21_0_OFFSET))(this);
		}

		::System::Void _ShowAgeGateConfirmDialog_b__21_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__SHOWAGEGATECONFIRMDIALOG_B__21_1_OFFSET))(this);
		}

		::System::Void _StartAgeGateWebVerification_b__23_0(::System::Int32 retcode, ::System::String* type, ::MiHoYo::SDK::JSONNode* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__STARTAGEGATEWEBVERIFICATION_B__23_0_OFFSET))(this, retcode, type, result);
		}
	};
}
