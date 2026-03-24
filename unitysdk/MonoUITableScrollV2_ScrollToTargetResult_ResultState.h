#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_ScrollToTargetResult_ResultState_TypeDefinitionIndex = 64488;

enum class MonoUITableScrollV2_ScrollToTargetResult_ResultState : ::System::UInt64
{
	InValid = 0x0,
	FromDataIndexEqualToDataIndex = 0x4002,
	Failed = 0x2,
	IsDragging = 0xA,
	NotSimpleMode = 0x800,
	RectTransformNull = 0x12,
	SimpleMode = 0x400,
	ScrollByRectTransform = 0x80,
	TemplateNotInit = 0x1002,
	CanNotMoveRuntime = 0x6,
	ManualMode = 0x42,
	AlignParamNull = 0x22,
	Success = 0x1,
	ScrollByIndex = 0x100,
	DataIndexOutOfRange = 0x2002,
	ScrollByDelta = 0x200,
};
