#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginViewRectAdjust_ViewRectAdjustState_TypeDefinitionIndex = 43861;

enum class MonoUITableScrollV2_TableScrollPluginViewRectAdjust_ViewRectAdjustState : ::System::Int32
{
	Active = 0,
	SimpleMode = 2,
	DynamicViewRectSize = 4,
	CellNotContainMonoUIAnimCell = 9,
	CellIsNull = 8,
	NotEnableUseUIAnimCell = 7,
	ForceDisable = 1,
	AutoSpace_Special_Center_WithViewRectAdjust = 6,
	AutoSpace = 5,
	MonoUIAnimCellNotContainScaleRootAndAlphaRoot = 10,
	DynamicItemSize = 3,
};
