#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Equation::OrdinaryDifferential
{
	inline static constexpr unsigned int SecondOrderConstant_ParticularSolutionType_TypeDefinitionIndex = 9092;

	enum class SecondOrderConstant_ParticularSolutionType : ::System::Int32
	{
		Constant = 0,
		SecondOrderPolynomial = 2,
		FirstOrderPolynomial = 1,
	};
}
