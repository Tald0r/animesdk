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

#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xACBDA30)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_FROMFLX_OFFSET UNITYSDK_OFFSET(0xACBC380)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xACBDA90)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xACBC400)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM__CTOR_OFFSET UNITYSDK_OFFSET(0xACBDFD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraZoom_TypeDefinitionIndex = 66835;

	class ConfigCameraZoom : public ::System::Object
	{
	public:
		::System::String* StartCurveKey; // 0x10
		::System::String* EndCurveKey; // 0x18
		::MoleMole::Config::CameraConfigDataStacking StackingType; // 0x20
		::System::Single StartTime; // 0x24
		::System::Boolean IgnoreWorldTimeScale; // 0x28
		::System::Boolean IgnoreLocalAvatar; // 0x29
		::System::Boolean IngorePriorityInEndTime; // 0x2A
		::System::Boolean IgnoreOwnerTimeScale; // 0x2B
		::MoleMole::Config::ValueVariationType FovVariationType; // 0x2C
		::MoleMole::Config::ConfigDataPlayStacking PlayStackingType; // 0x30
		::System::Single LastTime; // 0x34
		::System::Single Fov; // 0x38
		::System::Single EndTime; // 0x3C
		::MoleMole::Config::ConfigDataPriority DataPriority; // 0x40
		::System::Single DelayTime; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
