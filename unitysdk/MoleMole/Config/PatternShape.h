#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/PatternShape_BasePosXZType.h"
#include "unitysdk/MoleMole/Config/PatternShape_BasePosYType.h"
#include "unitysdk/MoleMole/Config/PatternShape_BaseRotXZType.h"
#include "unitysdk/MoleMole/Config/PatternShape_BaseRotYType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_PATTERNSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C9B40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PatternShape_TypeDefinitionIndex = 54986;

	class PatternShape : public ::System::Object
	{
	public:
		::System::String* BaseAttachPoint; // 0x10
		::System::String* BaseCenterTargetCustomKey; // 0x18
		::System::Boolean LockXAxis; // 0x20
		::System::Boolean LockZAxis; // 0x21
		::System::Boolean LockYAxis; // 0x22
		::System::Boolean IsAngleOffsetLocal; // 0x23
		::System::Single AngleYOffset; // 0x24
		::MoleMole::Config::PatternShape_BaseRotXZType BaseXZRotType; // 0x28
		::System::Single AngleZOffset; // 0x2C
		::System::Single CenterZOffset; // 0x30
		::MoleMole::Config::PatternShape_BaseRotYType BaseYRotType; // 0x34
		::System::Single CenterYOffset; // 0x38
		::MoleMole::Config::PatternShape_BasePosYType BaseYType; // 0x3C
		::MoleMole::Config::PatternShape_BasePosXZType BaseXZType; // 0x40
		::System::Single CenterXOffset; // 0x44
		::System::Single AngleXOffset; // 0x48
		::MoleMole::Config::AbilityTargetting BaseCenterTarget; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATTERNSHAPE__CTOR_OFFSET))(this);
		}
	};
}
