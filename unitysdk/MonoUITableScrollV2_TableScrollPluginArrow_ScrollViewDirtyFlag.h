#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginArrow_ScrollViewDirtyFlag_TypeDefinitionIndex = 64425;

enum class MonoUITableScrollV2_TableScrollPluginArrow_ScrollViewDirtyFlag : ::System::Int32
{
	Reset = 8,
	CanvasRebuild = 1,
	None = 0,
	Move = 2,
	OnEable = 4,
};
