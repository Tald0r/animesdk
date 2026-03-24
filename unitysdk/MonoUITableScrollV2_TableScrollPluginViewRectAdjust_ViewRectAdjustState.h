#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginViewRectAdjust_ViewRectAdjustState_TypeDefinitionIndex = 64475;

enum class MonoUITableScrollV2_TableScrollPluginViewRectAdjust_ViewRectAdjustState : ::System::Int32
{
	NotEnableUseUIAnimCell = 7,
	DynamicViewRectSize = 4,
	AutoSpace = 5,
	AutoSpace_Special_Center_WithViewRectAdjust = 6,
	CellIsNull = 8,
	DynamicItemSize = 3,
	MonoUIAnimCellNotContainScaleRootAndAlphaRoot = 10,
	CellNotContainMonoUIAnimCell = 9,
	Active = 0,
	SimpleMode = 2,
	ForceDisable = 1,
};
