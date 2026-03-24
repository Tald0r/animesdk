#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDRESTARTEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xA37D9A0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDRESTARTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA37DA00)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardRestartEvent_TypeDefinitionIndex = 49058;

	class ChessboardRestartEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDRESTARTEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDRESTARTEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
