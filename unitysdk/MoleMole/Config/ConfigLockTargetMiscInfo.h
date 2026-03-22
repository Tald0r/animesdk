#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFitlerGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGLOCKTARGETMISCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCC982A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockTargetMiscInfo_TypeDefinitionIndex = 37031;

	class ConfigLockTargetMiscInfo : public ::System::Object
	{
	public:
		::System::String* ManualLockEnterLockTargetID; // 0x10
		::System::String* ManualLockTargetDeadLockTargetID; // 0x18
		::MoleMole::Config::ConfigEntityFitlerGroup* SwitchManualLockTargetFilterGroup; // 0x20
		::System::Collections::Generic::List_1<::System::Single>* SwitchManualLockTargetMouseMoveDeltaThresholdList; // 0x28
		::System::Single MouseMaxLockTime; // 0x30
		::System::Single SwitchManualLockTargetMouseMoveDeltaCDTime; // 0x34
		::System::Single ToggleManualLockCDTime; // 0x38
		::System::Boolean IsDeadForHitCanBeSelected; // 0x3C
		::System::Boolean SwitchManualLockTargetByLockTargetZone; // 0x3D
		::System::Boolean IsPreferAttackTargetDeadForHitInAnimatorZone; // 0x3E
		::System::Single MouseLockDragCancelRecordTime; // 0x40
		::System::Single MouseLockDragCancelThreshold; // 0x44
		::System::Single CameraLockTargetDragExitCDTime; // 0x48
		::System::Single SwitchManualLockTargetMaxDistance; // 0x4C
		::System::Single SwitchManualLockTargetMouseScrollCDTime; // 0x50
		::System::Single SwitchManualLockTargetMouseMoveDeltaRecordTime; // 0x54
		::System::Single GlobalRaycastGroundOffset; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGETMISCINFO__CTOR_OFFSET))(this);
		}
	};
}
