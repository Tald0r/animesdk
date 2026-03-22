#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x8F82210)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F82200)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayAnimationNode_TypeDefinitionIndex = 47930;

	class MainCityChatPlayAnimationNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Int32 TemplateID; // 0x18
		::System::Int32 AvatarID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
