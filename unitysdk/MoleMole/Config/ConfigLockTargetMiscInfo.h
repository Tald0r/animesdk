#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFitlerGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGLOCKTARGETMISCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xACC6230)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockTargetMiscInfo_TypeDefinitionIndex = 43206;

	class ConfigLockTargetMiscInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* SwitchManualLockTargetMouseMoveDeltaThresholdList; // 0x10
		::System::String* ManualLockTargetDeadLockTargetID; // 0x18
		::MoleMole::Config::ConfigEntityFitlerGroup* SwitchManualLockTargetFilterGroup; // 0x20
		::System::String* ManualLockEnterLockTargetID; // 0x28
		::System::Single SwitchManualLockTargetMouseMoveDeltaRecordTime; // 0x30
		::System::Single ToggleManualLockCDTime; // 0x34
		::System::Single MouseLockDragCancelThreshold; // 0x38
		::System::Single CameraLockTargetDragExitCDTime; // 0x3C
		::System::Single SwitchManualLockTargetMouseMoveDeltaCDTime; // 0x40
		::System::Single SwitchManualLockTargetMouseScrollCDTime; // 0x44
		::System::Single SwitchManualLockTargetMaxDistance; // 0x48
		::System::Single MouseMaxLockTime; // 0x4C
		::System::Single MouseLockDragCancelRecordTime; // 0x50
		::System::Boolean IsPreferAttackTargetDeadForHitInAnimatorZone; // 0x54
		::System::Boolean IsDeadForHitCanBeSelected; // 0x55
		::System::Boolean SwitchManualLockTargetByLockTargetZone; // 0x56
		::System::Single GlobalRaycastGroundOffset; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGETMISCINFO__CTOR_OFFSET))(this);
		}
	};
}
