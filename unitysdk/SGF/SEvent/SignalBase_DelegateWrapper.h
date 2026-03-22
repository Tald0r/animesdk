#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Delegate; }
namespace System { class Object; }

#define SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9619C0)
#define SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_EQUALS_OFFSET UNITYSDK_OFFSET(0x961910)
#define SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9619D0)
#define SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AD380D0)
#define SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1AD37E00)
#define SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AD37DA0)
#define SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AD381D0)
#define SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x961A60)
#define SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x961AC0)

namespace SGF::SEvent
{
	inline static constexpr unsigned int SignalBase_DelegateWrapper_TypeDefinitionIndex = 7914;

	struct alignas(8) SignalBase_DelegateWrapper
	{
		::System::Delegate* Delegate; // 0x10

		static ::System::Delegate* op_Implicit(::SGF::SEvent::SignalBase_DelegateWrapper wrapper)
		{
			return ((::System::Delegate*(*)(::SGF::SEvent::SignalBase_DelegateWrapper))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_OP_IMPLICIT_OFFSET))(wrapper);
		}

		static ::SGF::SEvent::SignalBase_DelegateWrapper op_Implicit_1(::System::Delegate* value)
		{
			return ((::SGF::SEvent::SignalBase_DelegateWrapper(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_OP_IMPLICIT_1_OFFSET))(value);
		}

		::System::Boolean Equals(::SGF::SEvent::SignalBase_DelegateWrapper other)
		{
			return ((::System::Boolean(*)(::PVOID, ::SGF::SEvent::SignalBase_DelegateWrapper))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::SGF::SEvent::SignalBase_DelegateWrapper left, ::SGF::SEvent::SignalBase_DelegateWrapper right)
		{
			return ((::System::Boolean(*)(::SGF::SEvent::SignalBase_DelegateWrapper, ::SGF::SEvent::SignalBase_DelegateWrapper))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::SGF::SEvent::SignalBase_DelegateWrapper left, ::SGF::SEvent::SignalBase_DelegateWrapper right)
		{
			return ((::System::Boolean(*)(::SGF::SEvent::SignalBase_DelegateWrapper, ::SGF::SEvent::SignalBase_DelegateWrapper))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_DELEGATEWRAPPER___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
