#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_GET_DELTAAREA_OFFSET UNITYSDK_OFFSET(0x2F60C0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_GET_DELTADERIVATIVE_OFFSET UNITYSDK_OFFSET(0x2F60E0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_GET_TIME_OFFSET UNITYSDK_OFFSET(0x2F60A0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_NEW_OFFSET UNITYSDK_OFFSET(0x634BB60)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_SET_DELTAAREA_OFFSET UNITYSDK_OFFSET(0x2F60D0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_SET_DELTADERIVATIVE_OFFSET UNITYSDK_OFFSET(0x2F60F0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_SET_TIME_OFFSET UNITYSDK_OFFSET(0x2F60B0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_UPDATE_OFFSET UNITYSDK_OFFSET(0x2F6100)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationFootAreaMatchingResult_TypeDefinitionIndex = 78985;

	struct alignas(4) AnimationFootAreaMatchingResult
	{
		::System::Single _Time_k__BackingField; // 0x10
		::System::Single _DeltaArea_k__BackingField; // 0x14
		::System::Single _DeltaDerivative_k__BackingField; // 0x18

		::System::Single get_Time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_SET_TIME_OFFSET))(this, value);
		}

		::System::Single get_DeltaArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_GET_DELTAAREA_OFFSET))(this);
		}

		::System::Void set_DeltaArea(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_SET_DELTAAREA_OFFSET))(this, value);
		}

		::System::Single get_DeltaDerivative()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_GET_DELTADERIVATIVE_OFFSET))(this);
		}

		::System::Void set_DeltaDerivative(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_SET_DELTADERIVATIVE_OFFSET))(this, value);
		}

		static ::NPCCrowd::Animation::CPUStateMachine::AnimationFootAreaMatchingResult New()
		{
			return ((::NPCCrowd::Animation::CPUStateMachine::AnimationFootAreaMatchingResult(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_NEW_OFFSET))();
		}

		::System::Void Update(::System::Single time, ::System::Single deltaArea, ::System::Single deltaDerivative)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_UPDATE_OFFSET))(this, time, deltaArea, deltaDerivative);
		}
	};
}
