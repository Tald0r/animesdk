#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_5_0B648F1F8F6AC84A;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x3B9830)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridMoveAction_RuntimeData_TypeDefinitionIndex = 58236;

	struct alignas(8) GridMoveAction_RuntimeData
	{
		::Class_5_0B648F1F8F6AC84A* BindPiece; // 0x10

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}
