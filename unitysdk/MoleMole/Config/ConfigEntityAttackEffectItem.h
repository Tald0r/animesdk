#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AttackEffectTriggerAt.h"
#include "unitysdk/MoleMole/Config/HitDirectionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xACC2340)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_FROMFLX_OFFSET UNITYSDK_OFFSET(0xACC1140)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xACC23A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xACC11C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xACC2790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackEffectItem_TypeDefinitionIndex = 46538;

	class ConfigEntityAttackEffectItem : public ::System::Object
	{
	public:
		::System::String* EffectName; // 0x10
		::MoleMole::Config::AttackEffectTriggerAt ZPosOffsetType; // 0x18
		::MoleMole::Config::AttackEffectTriggerAt YPosOffsetType; // 0x1C
		::System::Single ZRotOffset; // 0x20
		::MoleMole::Config::HitDirectionType DefaultEffectRot; // 0x24
		::System::Single XPosOffset; // 0x28
		::UnityEngine::Vector3 RotRandom; // 0x2C
		::System::Single YRotOffset; // 0x38
		::System::Single ZPosOffset; // 0x3C
		::UnityEngine::Vector3 PosRandom; // 0x40
		::System::Single YPosOffset; // 0x4C
		::MoleMole::Config::AttackEffectTriggerAt XPosOffsetType; // 0x50
		::System::Single XRotOffset; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
