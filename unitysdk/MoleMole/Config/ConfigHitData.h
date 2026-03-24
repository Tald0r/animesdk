#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/DissipationMode.h"
#include "unitysdk/MoleMole/Config/RetreatDecayDistanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigMovementStateControl; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHITDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xB917B70)
#define MOLEMOLE_CONFIG_CONFIGHITDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0xB9168A0)
#define MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xB917BD0)
#define MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xB916920)
#define MOLEMOLE_CONFIG_CONFIGHITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB9181D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitData_TypeDefinitionIndex = 61811;

	class ConfigHitData : public ::System::Object
	{
	public:
		::System::String* AttackerCenterAttachPoint; // 0x10
		::MoleMole::Config::ConfigMovementStateControl* MovementControl; // 0x18
		::System::String* CustomCurveKey; // 0x20
		::UnityEngine::AnimationCurve* CurveY; // 0x28
		::System::String* AttackeeCenterAttachPoint; // 0x30
		::UnityEngine::AnimationCurve* CurveZ; // 0x38
		::UnityEngine::AnimationCurve* CurveX; // 0x40
		::MoleMole::Config::RetreatDecayDistanceType DistanceType; // 0x48
		::System::Single ImpactRadius; // 0x4C
		::System::Single Duration; // 0x50
		::System::Single DissipationDistance; // 0x54
		::UnityEngine::Vector3 Velocity; // 0x58
		::MoleMole::Config::DissipationMode DissipationMode; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
