#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeArrayView_1.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8EAED0)
#define STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3A30C0)
#define STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x389110)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeActiveStates_Enumerator_TypeDefinitionIndex = 26936;

	struct alignas(8) StateTreeActiveStates_Enumerator
	{
		::NativeTypes::NativeArrayView_1<::StateTreeCore::StateTreeStateHandle> _states; // 0x10
		::System::Int32 _index; // 0x20

		::System::Void _ctor(::NativeTypes::NativeArrayView_1<::StateTreeCore::StateTreeStateHandle>& states)
		{
			return ((::System::Void(*)(::PVOID, ::NativeTypes::NativeArrayView_1<::StateTreeCore::StateTreeStateHandle>&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR__CTOR_OFFSET))(this, states);
		}

		::StateTreeCore::StateTreeStateHandle get_Current()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}
	};
}
