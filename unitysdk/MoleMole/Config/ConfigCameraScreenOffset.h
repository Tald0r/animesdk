#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x62432E0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6242250)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x6243340)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x62422D0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x6243840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraScreenOffset_TypeDefinitionIndex = 72561;

	class ConfigCameraScreenOffset : public ::System::Object
	{
	public:
		::System::String* EndCurveKey; // 0x10
		::System::String* StartCurveKey; // 0x18
		::MoleMole::Config::ConfigCameraComposer* CameraComposerParam; // 0x20
		::System::Single RecoilTime; // 0x28
		::System::Boolean MuteDelay; // 0x2C
		::System::Boolean KeepCameraDirection; // 0x2D
		::System::Boolean IngoreTimeScale; // 0x2E
		::System::Single StretchTime; // 0x30
		::System::Single DelayTime; // 0x34
		::System::Single HoldTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
