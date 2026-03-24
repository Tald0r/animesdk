#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_946;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole::ChessStateMachine { class ShowNoneInteractAnimAction; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNONEINTERACTANIMACTION___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB45E1F0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNONEINTERACTANIMACTION___C__DISPLAYCLASS0_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0xB45E200)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNoneInteractAnimAction___c__DisplayClass0_0_TypeDefinitionIndex = 65814;

	class ShowNoneInteractAnimAction___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::MoleMole::ChessStateMachine::ShowNoneInteractAnimAction* __4__this; // 0x10
		::Class_2_208CC9941471731A_946* config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNONEINTERACTANIMACTION___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0(::MoleMole::IVideoPlayer* v)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNONEINTERACTANIMACTION___C__DISPLAYCLASS0_0__RUN_B__0_OFFSET))(this, v);
		}
	};
}
