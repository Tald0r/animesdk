#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/InLevelChatEntitySlot.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0xA023770)
#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xA023760)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatInLevelPlayStoryNode_TypeDefinitionIndex = 55093;

	class MainCityChatInLevelPlayStoryNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* showName; // 0x18
		::System::String* dialogueKey; // 0x20
		::MoleMole::Battle::AnimatorParamControl* animatorParamControl; // 0x28
		::System::Single speakSpeed; // 0x30
		::System::Int32 actionDelay; // 0x34
		::System::Boolean triggerOnFinish; // 0x38
		::MoleMole::GalGame::InLevelChatEntitySlot ChatEntitySlot; // 0x3C
		::System::Single time; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
