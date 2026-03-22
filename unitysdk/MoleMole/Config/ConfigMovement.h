#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_31420365C5F30A4E.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_CLONE_OFFSET UNITYSDK_OFFSET(0x1418FCF0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1418FCA0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14190E40)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1418FF20)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_GETFIXEDMOVEMENTRATIO_OFFSET UNITYSDK_OFFSET(0x1418FAC0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1418FDF0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x14190EA0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1418FFA0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x141913A0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x14190D70)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1418FA10)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x141914F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovement_TypeDefinitionIndex = 73362;

	class ConfigMovement : public ::System::Object
	{
	public:
		// static const ::System::Single MIN_SPEED; // 0x0
		// static const ::System::Single SQR_MIN_SPEED; // 0x0
		// static const ::System::Single REACH_THRESHOLD; // 0x0
		::System::String* ConfigKey; // 0x10
		::System::Single HitNormalRatio; // 0x18
		::System::Single Gravity; // 0x1C
		::System::Single Duration; // 0x20
		::System::Int32 MaxHitNumber; // 0x24
		::System::Single HitTangentialRatio; // 0x28
		::System::Boolean MuteRootMotionMovement; // 0x2C
		::System::Boolean IgnoreMovementCurveRatio; // 0x2D
		::Enum_3_31420365C5F30A4E TimesUpMoveOption; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT__CTOR_OFFSET))(this);
		}

		::System::Void SetupLogicMovement(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Single GetFixedMovementRatio(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_GETFIXEDMOVEMENTRATIO_OFFSET))(this, entity);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovement* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovement* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
