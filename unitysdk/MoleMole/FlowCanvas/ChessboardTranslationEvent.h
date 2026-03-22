#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"
#include "unitysdk/MoleMole/Vector2Int.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTRANSLATIONEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x6AD6050)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTRANSLATIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x6AD60B0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardTranslationEvent_TypeDefinitionIndex = 46822;

	class ChessboardTranslationEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::MoleMole::Vector2Int>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTRANSLATIONEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTRANSLATIONEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
