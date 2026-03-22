#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x84A4260)
#define MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x84A3490)
#define MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x84A42C0)
#define MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x84A3510)
#define MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR__CTOR_OFFSET UNITYSDK_OFFSET(0x84A46E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraPitchPolar_TypeDefinitionIndex = 39221;

	class ConfigCameraPitchPolar : public ::System::Object
	{
	public:
		::System::String* StartCurveKey; // 0x10
		::System::Single ElevationAngle; // 0x18
		::System::Single PolarOffsetAngle; // 0x1C
		::System::Single StartTime; // 0x20
		::MoleMole::Config::CameraConfigDataStacking StackingType; // 0x24
		::System::Boolean IngoreTimeScale; // 0x28
		::System::Boolean IgnoreLocalAvatar; // 0x29
		::MoleMole::Config::ValueVariationType FovVariationType; // 0x2C
		::MoleMole::Config::ConfigDataPriority DataPriority; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
