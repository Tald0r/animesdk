#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE356B00)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE354010)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xE356B60)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xE354090)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0xE357630)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStretch_TypeDefinitionIndex = 45851;

	class ConfigCameraStretch : public ::System::Object
	{
	public:
		::System::String* EndCurveKey; // 0x10
		::System::String* StartCurveKey; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* RuntimeCamFollowYPoints; // 0x20
		::System::Single PosOffsetZ; // 0x28
		::System::Single RuntimeCamFollowYOffsetRatio; // 0x2C
		::MoleMole::Config::ConfigDataPlayStacking PlayStackingType; // 0x30
		::System::Single ElevationAngleMax; // 0x34
		::System::Single ElevationAngleMin; // 0x38
		::System::Single RadiusRatio; // 0x3C
		::MoleMole::Config::CameraConfigDataStacking StackingType; // 0x40
		::System::Single RecoilTime; // 0x44
		::System::Single EndElevationAngleMax; // 0x48
		::System::Single StretchTime; // 0x4C
		::System::Single HoldTime; // 0x50
		::System::Single EndElevationAngleMin; // 0x54
		::System::Boolean IsEndEleAngleAbsoluted; // 0x58
		::System::Boolean IgnoreLocalAvatar; // 0x59
		::System::Boolean ApplyRuntimeCamFollowYOffset; // 0x5A
		::System::Boolean IsAppliedEndEleAngle; // 0x5B
		::System::Boolean ApplyAthPtsCamFollowYOffset; // 0x5C
		::System::Boolean IsAppliedEleRatio; // 0x5D
		::System::Boolean IsEleAngleAbsoluted; // 0x5E
		::MoleMole::Config::ConfigDataPriority DataPriority; // 0x60
		::MoleMole::Config::ValueVariationType FovVariationType; // 0x64
		::System::Single PosOffsetY; // 0x68
		::System::Single PosOffsetX; // 0x6C
		::System::Boolean CamOffsetLocalCoords; // 0x70
		::System::Boolean IgnoreOwnerTimeScale; // 0x71
		::System::Boolean IngorePriorityInEndTime; // 0x72
		::System::Boolean IgnoreWorldTimeScale; // 0x73
		::System::Single DelayTime; // 0x74
		::System::Single RotationZ; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
