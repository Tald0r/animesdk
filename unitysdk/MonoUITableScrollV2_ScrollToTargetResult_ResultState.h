#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_ScrollToTargetResult_ResultState_TypeDefinitionIndex = 43831;

enum class MonoUITableScrollV2_ScrollToTargetResult_ResultState : ::System::UInt64
{
	ManualMode = 0x42,
	RectTransformNull = 0x12,
	Success = 0x1,
	CanNotMoveRuntime = 0x6,
	TemplateNotInit = 0x1002,
	DataIndexOutOfRange = 0x2002,
	ScrollByRectTransform = 0x80,
	InValid = 0x0,
	SimpleMode = 0x400,
	ScrollByDelta = 0x200,
	Failed = 0x2,
	NotSimpleMode = 0x800,
	FromDataIndexEqualToDataIndex = 0x4002,
	ScrollByIndex = 0x100,
	AlignParamNull = 0x22,
	IsDragging = 0xA,
};
