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

#define MOLEMOLE_CONFIG_CONFIGHITDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xCDAB520)
#define MOLEMOLE_CONFIG_CONFIGHITDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0xCDAA250)
#define MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xCDAB580)
#define MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xCDAA2D0)
#define MOLEMOLE_CONFIG_CONFIGHITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCDABB80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitData_TypeDefinitionIndex = 53366;

	class ConfigHitData : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* CurveY; // 0x10
		::System::String* AttackerCenterAttachPoint; // 0x18
		::MoleMole::Config::ConfigMovementStateControl* MovementControl; // 0x20
		::System::String* CustomCurveKey; // 0x28
		::UnityEngine::AnimationCurve* CurveX; // 0x30
		::System::String* AttackeeCenterAttachPoint; // 0x38
		::UnityEngine::AnimationCurve* CurveZ; // 0x40
		::System::Single DissipationDistance; // 0x48
		::System::Single ImpactRadius; // 0x4C
		::MoleMole::Config::DissipationMode DissipationMode; // 0x50
		::MoleMole::Config::RetreatDecayDistanceType DistanceType; // 0x54
		::System::Single Duration; // 0x58
		::UnityEngine::Vector3 Velocity; // 0x5C

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
