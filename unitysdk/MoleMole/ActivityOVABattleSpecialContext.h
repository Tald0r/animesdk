#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_A475772D55E65B13;

#define MOLEMOLE_ACTIVITYOVABATTLESPECIALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE2A0130)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityOVABattleSpecialContext_TypeDefinitionIndex = 58812;

	class ActivityOVABattleSpecialContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_A475772D55E65B13* entryData; // 0x28
		::Foundation::AssetPath BackGroundPic; // 0x30
		::System::Boolean selectHard; // 0x40
		::System::Int32 selectLevel; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYOVABATTLESPECIALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
