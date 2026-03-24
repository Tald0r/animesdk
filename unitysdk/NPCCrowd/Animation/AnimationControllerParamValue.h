#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x350D50)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_GET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x350D50)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_NEW_1_OFFSET UNITYSDK_OFFSET(0x847AEC0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_NEW_2_OFFSET UNITYSDK_OFFSET(0x847AED0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_NEW_3_OFFSET UNITYSDK_OFFSET(0x847AEE0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_NEW_OFFSET UNITYSDK_OFFSET(0x847AEB0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0x2F1E90)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0x350D60)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_SET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x30FC20)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationControllerParamValue_TypeDefinitionIndex = 47991;

	struct alignas(4) AnimationControllerParamValue
	{
		::System::Single FloatValue; // 0x10
		::System::Int32 IntValue; // 0x10
		::System::Byte _boolValue; // 0x10
		::System::Byte _isTriggered; // 0x10

		::System::Boolean get_BoolValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_GET_BOOLVALUE_OFFSET))(this);
		}

		::System::Void set_BoolValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_SET_BOOLVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_GET_ISTRIGGERED_OFFSET))(this);
		}

		::System::Void SetTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_SETTRIGGER_OFFSET))(this);
		}

		::System::Void ResetTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_RESETTRIGGER_OFFSET))(this);
		}

		static ::NPCCrowd::Animation::AnimationControllerParamValue New(::System::Single value)
		{
			return ((::NPCCrowd::Animation::AnimationControllerParamValue(*)(::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_NEW_OFFSET))(value);
		}

		static ::NPCCrowd::Animation::AnimationControllerParamValue New_1(::System::Int32 value)
		{
			return ((::NPCCrowd::Animation::AnimationControllerParamValue(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_NEW_1_OFFSET))(value);
		}

		static ::NPCCrowd::Animation::AnimationControllerParamValue New_2(::System::Boolean value)
		{
			return ((::NPCCrowd::Animation::AnimationControllerParamValue(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_NEW_2_OFFSET))(value);
		}

		static ::NPCCrowd::Animation::AnimationControllerParamValue New_3()
		{
			return ((::NPCCrowd::Animation::AnimationControllerParamValue(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMVALUE_NEW_3_OFFSET))();
		}
	};
}
