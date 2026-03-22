#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_STATETREERANDOMTIMEDURATION_GETRANDOMDURATION_OFFSET UNITYSDK_OFFSET(0x8ECC30)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x8ECA30)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x8ECA70)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_GET_RANDOMVARIANCE_OFFSET UNITYSDK_OFFSET(0x8ECA50)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_QUANTIZE_OFFSET UNITYSDK_OFFSET(0x19BE9AF0)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_RESET_OFFSET UNITYSDK_OFFSET(0x7A2900)
#define STATETREECORE_STATETREERANDOMTIMEDURATION_SET_OFFSET UNITYSDK_OFFSET(0x8ECA90)
#define STATETREECORE_STATETREERANDOMTIMEDURATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BE9DA0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeRandomTimeDuration_TypeDefinitionIndex = 26989;

	struct alignas(2) StateTreeRandomTimeDuration
	{
		static ::StateTreeCore::StateTreeRandomTimeDuration* StaticGet_Empty()
		{
			return (::StateTreeCore::StateTreeRandomTimeDuration*)Il2CppClass::FromTypeDefinitionIndex(StateTreeRandomTimeDuration_TypeDefinitionIndex)->GetStaticField(0x4A90);
		}
		// static const ::System::Single Scale; // 0x0
		::System::UInt16 _duration; // 0x10
		::System::UInt16 _randomVariance; // 0x12

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION__CCTOR_OFFSET))();
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_GET_DURATION_OFFSET))(this);
		}

		::System::Single get_RandomVariance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_GET_RANDOMVARIANCE_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_RESET_OFFSET))(this);
		}

		static ::System::UInt16 Quantize(::System::Single value)
		{
			return ((::System::UInt16(*)(::System::Single))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_QUANTIZE_OFFSET))(value);
		}

		::System::Void Set(::System::Single duration, ::System::Single randomVariance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_SET_OFFSET))(this, duration, randomVariance);
		}

		::System::Single GetRandomDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREERANDOMTIMEDURATION_GETRANDOMDURATION_OFFSET))(this);
		}
	};
}
