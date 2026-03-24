#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/StateMachine/ConditionType.h"
#include "unitysdk/Foundation/StateMachine/Parameter.h"
#include "unitysdk/Foundation/StateMachine/ParameterType.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_STATEMACHINE_CONDITION_CHECKBOOL_OFFSET UNITYSDK_OFFSET(0x1AD77750)
#define FOUNDATION_STATEMACHINE_CONDITION_CHECKFLOAT_OFFSET UNITYSDK_OFFSET(0x1AD77670)
#define FOUNDATION_STATEMACHINE_CONDITION_CHECKINT_OFFSET UNITYSDK_OFFSET(0x1AD776E0)
#define FOUNDATION_STATEMACHINE_CONDITION_CHECKTRIGGER_OFFSET UNITYSDK_OFFSET(0x1AD77770)
#define FOUNDATION_STATEMACHINE_CONDITION_CHECK_1_OFFSET UNITYSDK_OFFSET(0x1AD77780)
#define FOUNDATION_STATEMACHINE_CONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x96F6E0)
#define FOUNDATION_STATEMACHINE_CONDITION_EQUALS_OFFSET UNITYSDK_OFFSET(0x96F6C0)
#define FOUNDATION_STATEMACHINE_CONDITION_GET_PARAMINDEX_OFFSET UNITYSDK_OFFSET(0x306AA0)
#define FOUNDATION_STATEMACHINE_CONDITION_GET_PARAMTYPE_OFFSET UNITYSDK_OFFSET(0x96F6A0)
#define FOUNDATION_STATEMACHINE_CONDITION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96F6B0)

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int Condition_TypeDefinitionIndex = 8792;

	struct alignas(4) Condition
	{
		::System::UInt16 _data; // 0x10
		::Foundation::StateMachine::Parameter _threshold; // 0x14

		::System::Int32 get_ParamIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_CONDITION_GET_PARAMINDEX_OFFSET))(this);
		}

		::Foundation::StateMachine::ParameterType get_ParamType()
		{
			return ((::Foundation::StateMachine::ParameterType(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_CONDITION_GET_PARAMTYPE_OFFSET))(this);
		}

		::Foundation::StateMachine::ConditionType get_Type()
		{
			return ((::Foundation::StateMachine::ConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_CONDITION_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::Foundation::StateMachine::Condition other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::StateMachine::Condition))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_CONDITION_EQUALS_OFFSET))(this, other);
		}

		/*
		::System::Boolean Check(::System::ReadOnlySpan_1<::Foundation::StateMachine::Parameter> params)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1<::Foundation::StateMachine::Parameter>))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_CONDITION_CHECK_OFFSET))(this, params);
		}
		*/

		/*
		static ::Foundation::BitSet256 Check_1(::System::ReadOnlySpan_1<::Foundation::StateMachine::Parameter> params, ::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Condition> conditions)
		{
			return ((::Foundation::BitSet256(*)(::System::ReadOnlySpan_1<::Foundation::StateMachine::Parameter>, ::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Condition>))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_CONDITION_CHECK_1_OFFSET))(params, conditions);
		}
		*/

		static ::System::Boolean CheckFloat(::System::Single param, ::Foundation::StateMachine::ConditionType mode, ::Foundation::StateMachine::Parameter threshold)
		{
			return ((::System::Boolean(*)(::System::Single, ::Foundation::StateMachine::ConditionType, ::Foundation::StateMachine::Parameter))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_CONDITION_CHECKFLOAT_OFFSET))(param, mode, threshold);
		}

		static ::System::Boolean CheckBool(::System::Boolean param, ::Foundation::StateMachine::ConditionType mode)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::Foundation::StateMachine::ConditionType))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_CONDITION_CHECKBOOL_OFFSET))(param, mode);
		}

		static ::System::Boolean CheckInt(::System::Int32 param, ::Foundation::StateMachine::ConditionType mode, ::Foundation::StateMachine::Parameter threshold)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Foundation::StateMachine::ConditionType, ::Foundation::StateMachine::Parameter))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_CONDITION_CHECKINT_OFFSET))(param, mode, threshold);
		}

		static ::System::Boolean CheckTrigger(::System::Boolean param, ::Foundation::StateMachine::ConditionType mode)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::Foundation::StateMachine::ConditionType))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_CONDITION_CHECKTRIGGER_OFFSET))(param, mode);
		}
	};
}
