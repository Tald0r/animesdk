#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeStaticArray_1.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define STATETREECORE_STATETREEACTIVESTATES_CLEAR_OFFSET UNITYSDK_OFFSET(0x8EACC0)
#define STATETREECORE_STATETREEACTIVESTATES_CLONE_OFFSET UNITYSDK_OFFSET(0x8EAE50)
#define STATETREECORE_STATETREEACTIVESTATES_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x8EABC0)
#define STATETREECORE_STATETREEACTIVESTATES_CONTAINS_OFFSET UNITYSDK_OFFSET(0x8EAAB0)
#define STATETREECORE_STATETREEACTIVESTATES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x75EA00)
#define STATETREECORE_STATETREEACTIVESTATES_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8EADD0)
#define STATETREECORE_STATETREEACTIVESTATES_GETSTATESAFE_OFFSET UNITYSDK_OFFSET(0x8EA8B0)
#define STATETREECORE_STATETREEACTIVESTATES_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x35D950)
#define STATETREECORE_STATETREEACTIVESTATES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8EA770)
#define STATETREECORE_STATETREEACTIVESTATES_INDEXOFREVERSE_OFFSET UNITYSDK_OFFSET(0x8EACD0)
#define STATETREECORE_STATETREEACTIVESTATES_ISVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x8EA7E0)
#define STATETREECORE_STATETREEACTIVESTATES_LAST_OFFSET UNITYSDK_OFFSET(0x8EA800)
#define STATETREECORE_STATETREEACTIVESTATES_POP_OFFSET UNITYSDK_OFFSET(0x8EA9F0)
#define STATETREECORE_STATETREEACTIVESTATES_PUSH_OFFSET UNITYSDK_OFFSET(0x8EA970)
#define STATETREECORE_STATETREEACTIVESTATES__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA730)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeActiveStates_TypeDefinitionIndex = 26935;

	struct alignas(8) StateTreeActiveStates
	{
		// static const ::System::Int32 MaxStates = 0x8; // 0x0
		::NativeTypes::NativeStaticArray_1<::StateTreeCore::StateTreeStateHandle> _states; // 0x10
		::System::Byte _numStates; // 0x28

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES__CTOR_OFFSET))(this, allocator);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_GET_COUNT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_DISPOSE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeStateHandle get_Item(::System::Int32 index)
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_GET_ITEM_OFFSET))(this, index);
		}

		::System::Boolean IsValidIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_ISVALIDINDEX_OFFSET))(this, index);
		}

		::StateTreeCore::StateTreeStateHandle Last()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_LAST_OFFSET))(this);
		}

		::StateTreeCore::StateTreeStateHandle GetStateSafe(::System::Int32 index)
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_GETSTATESAFE_OFFSET))(this, index);
		}

		::System::Boolean Push(::StateTreeCore::StateTreeStateHandle stateHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_PUSH_OFFSET))(this, stateHandle);
		}

		::StateTreeCore::StateTreeStateHandle Pop()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_POP_OFFSET))(this);
		}

		::System::Boolean Contains(::StateTreeCore::StateTreeStateHandle state)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_CONTAINS_OFFSET))(this, state);
		}

		::System::Boolean Contains_1(::StateTreeCore::StateTreeStateHandle stateHandle, ::System::Byte maxNumStatesToCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle, ::System::Byte))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_CONTAINS_1_OFFSET))(this, stateHandle, maxNumStatesToCheck);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_CLEAR_OFFSET))(this);
		}

		::System::Int32 IndexOfReverse(::StateTreeCore::StateTreeStateHandle stateHandle)
		{
			return ((::System::Int32(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_INDEXOFREVERSE_OFFSET))(this, stateHandle);
		}

		/*
		::StateTreeCore::StateTreeActiveStates_Enumerator GetEnumerator()
		{
			return ((::StateTreeCore::StateTreeActiveStates_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_GETENUMERATOR_OFFSET))(this);
		}
		*/

		::StateTreeCore::StateTreeActiveStates Clone()
		{
			return ((::StateTreeCore::StateTreeActiveStates(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_CLONE_OFFSET))(this);
		}
	};
}
