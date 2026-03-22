#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDIRECTDODGESUCCESSENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x65417D0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDIRECTDODGESUCCESSENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x6541870)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDirectDodgeSuccessEntry_TypeDefinitionIndex = 73470;

	class AnimatorEventDirectDodgeSuccessEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDIRECTDODGESUCCESSENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDIRECTDODGESUCCESSENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
