#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/TextureSheetInterruptType.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTPLAYTEXTURESHEETSEQUENCEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x94ECD20)
#define MOLEMOLE_CONFIG_ANIMATOREVENTPLAYTEXTURESHEETSEQUENCEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x94ECDC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventPlayTextureSheetSequenceEntry_TypeDefinitionIndex = 39437;

	class AnimatorEventPlayTextureSheetSequenceEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* TextureSheetKey; // 0x58
		::System::String* MeshPath; // 0x60
		::System::Boolean IsKeepLastFrame; // 0x68
		::MoleMole::Config::TextureSheetInterruptType InterruptType; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPLAYTEXTURESHEETSEQUENCEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPLAYTEXTURESHEETSEQUENCEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
