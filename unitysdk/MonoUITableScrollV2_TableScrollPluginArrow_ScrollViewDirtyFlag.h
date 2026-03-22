#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginArrow_ScrollViewDirtyFlag_TypeDefinitionIndex = 43884;

enum class MonoUITableScrollV2_TableScrollPluginArrow_ScrollViewDirtyFlag : ::System::Int32
{
	CanvasRebuild = 1,
	None = 0,
	Reset = 8,
	Move = 2,
	OnEable = 4,
};
