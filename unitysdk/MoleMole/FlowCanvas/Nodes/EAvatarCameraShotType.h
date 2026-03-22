#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EAvatarCameraShotType_TypeDefinitionIndex = 42624;

	enum class EAvatarCameraShotType : ::System::Int32
	{
		SURROUND_B = 3,
		Override_None = 99,
		SIMPLE_A = 1,
		NONE = 0,
		NORMAL_C = 2,
	};
}
