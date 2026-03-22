#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_A475772D55E65B13;

#define MOLEMOLE_ACTIVITYOVABATTLESPECIALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB497940)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityOVABattleSpecialContext_TypeDefinitionIndex = 50124;

	class ActivityOVABattleSpecialContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath BackGroundPic; // 0x28
		::Class_2_A475772D55E65B13* entryData; // 0x38
		::System::Int32 selectLevel; // 0x40
		::System::Boolean selectHard; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYOVABATTLESPECIALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
