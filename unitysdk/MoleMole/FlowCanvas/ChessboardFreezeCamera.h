#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFREEZECAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0xC2B84B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFREEZECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xC2B8670)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardFreezeCamera_TypeDefinitionIndex = 49583;

	class ChessboardFreezeCamera : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFREEZECAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean freeze)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFREEZECAMERA_INVOKE_OFFSET))(this, freeze);
		}
	};
}
