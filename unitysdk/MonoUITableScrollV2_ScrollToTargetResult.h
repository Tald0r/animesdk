#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_ScrollToTargetResult_ResultState.h"
#include "unitysdk/MonoUITableScrollV2_ScrollToTargetResult_TargetRectTransformState.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MONOUITABLESCROLLV2_SCROLLTOTARGETRESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x97308A0)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x37B030)
#define MONOUITABLESCROLLV2_SCROLLTOTARGETRESULT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x37B040)

inline static constexpr unsigned int MonoUITableScrollV2_ScrollToTargetResult_TypeDefinitionIndex = 64486;

struct alignas(8) MonoUITableScrollV2_ScrollToTargetResult
{
	::MonoUITableScrollV2_ScrollToTargetResult_ResultState result; // 0x10
	::MonoUITableScrollV2_ScrollToTargetResult_TargetRectTransformState targetRectTransformState; // 0x18
	::System::Single targetSize; // 0x1C
	::System::Single scrollDistance; // 0x20

	static ::MonoUITableScrollV2_ScrollToTargetResult Create()
	{
		return ((::MonoUITableScrollV2_ScrollToTargetResult(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETRESULT_CREATE_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETRESULT_TOSTRING_OFFSET))(this);
	}

	::System::String* __base_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLTOTARGETRESULT___BASE_TOSTRING_OFFSET))(this);
	}
};
