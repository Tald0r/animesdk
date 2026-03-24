#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameNPCActionBase.h"
#include "unitysdk/MoleMole/GalGame/GalGameNPCFadeAction_FadeType.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA50B550)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCFadeAction_TypeDefinitionIndex = 60053;

	class GalGameNPCFadeAction : public ::MoleMole::GalGame::GalGameNPCActionBase
	{
	public:
		::System::String* backgroundKey; // 0x38
		::MoleMole::GalGame::GalgameFilterType filterType; // 0x40
		::System::Boolean useMainCityTimeBackGround; // 0x44
		::MoleMole::GalGame::GalGameNPCFadeAction_FadeType fadeActionType; // 0x45

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION__CTOR_OFFSET))(this);
		}
	};
}
