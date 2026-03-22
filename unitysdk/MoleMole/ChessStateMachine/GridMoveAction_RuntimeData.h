#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_5_2169ABC757988FED;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x30F3F0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridMoveAction_RuntimeData_TypeDefinitionIndex = 52139;

	struct alignas(8) GridMoveAction_RuntimeData
	{
		::Class_5_2169ABC757988FED* BindPiece; // 0x10

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}
