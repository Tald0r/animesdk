#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayStoryNode_SwitchContinuousShakeType.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x7F0C570)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayStoryNode_TypeDefinitionIndex = 46492;

	class GalPlayStoryNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::String* whiteScreenShakeAudioEventID; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItems; // 0x28
		::System::String* singleShakeKey; // 0x30
		::System::String* avatarShowingKey; // 0x38
		::System::String* externalVoiceKey; // 0x40
		::System::String* avatarFacialKey; // 0x48
		::System::String* avatarPoseKey; // 0x50
		::System::String* soundKey; // 0x58
		::System::String* dialogueKey; // 0x60
		::System::String* avatarName; // 0x68
		::System::Boolean isChangingShakeMode; // 0x70
		::System::Boolean enableWhiteScreenShaking; // 0x71
		::System::Single whiteScreenShakeDelay; // 0x74
		::MoleMole::GalGame::GalPlayStoryNode_SwitchContinuousShakeType switchContinuousShakeType; // 0x78
		::System::Int32 actorId; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSTORYNODE__CTOR_OFFSET))(this);
		}
	};
}
