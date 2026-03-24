#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSKILLBUTTONCLICKEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xB9FE9A0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSKILLBUTTONCLICKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB9FEA00)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardSkillButtonClickEvent_TypeDefinitionIndex = 64366;

	class ChessboardSkillButtonClickEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSKILLBUTTONCLICKEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSKILLBUTTONCLICKEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
