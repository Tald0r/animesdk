#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_FE5C43CC6305AECA_TypeDefinitionIndex = 62103;

enum class Enum_3_FE5C43CC6305AECA : ::System::Int32
{
	PeriodLock = 1,
	MUIP_LOCK = 11,
	Unknow = 0,
	PeriodNoticeClose = 12,
	IsNotFirstRealPeriodButEmpty_AfterRealIndex = 10,
	PeriodUnLockButHasQuestNotFinish = 5,
	FirstRealPeriodLock = 2,
	PeriodAndQuestUnLockButNotClick = 4,
	PeriodUnLockButFirstQuestLock = 3,
	NoPeriod = 7,
	IsUnlockAllAndGetAllReward = 6,
	ClosePeriod = 8,
	IsNotFirstRealPeriodButEmpty_BeforeRealIndex = 9,
};
