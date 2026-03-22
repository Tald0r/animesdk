#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDENABLEACCELERATIONMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0xEC6C150)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDENABLEACCELERATIONMODE__CTOR_OFFSET UNITYSDK_OFFSET(0xEC6C330)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardEnableAccelerationMode_TypeDefinitionIndex = 75235;

	class ChessboardEnableAccelerationMode : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDENABLEACCELERATIONMODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDENABLEACCELERATIONMODE_INVOKE_OFFSET))(this, isEnable);
		}
	};
}
