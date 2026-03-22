#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_5897CA91FEB65CA5;
namespace System { class Action; }

#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBFF0DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralAchievementTipsContext_TypeDefinitionIndex = 38693;

	class UIGeneralAchievementTipsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_5897CA91FEB65CA5* AchievementData; // 0x28
		::System::Action* onClose; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
