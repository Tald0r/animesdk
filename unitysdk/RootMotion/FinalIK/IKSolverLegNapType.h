#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLegNapType_TypeDefinitionIndex = 35078;

	enum class IKSolverLegNapType : ::System::Int32
	{
		Trigonometric = 0,
		FABRIK = 1,
		CCDIK = 2,
	};
}
