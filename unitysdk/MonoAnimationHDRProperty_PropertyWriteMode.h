#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoAnimationHDRProperty_PropertyWriteMode_TypeDefinitionIndex = 51096;

enum class MonoAnimationHDRProperty_PropertyWriteMode : ::System::Int32
{
	Material = 1,
	MaterialPropertyBlock = 0,
	GlobalShaderProperty = 2,
};
