#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataSourceType.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_STATETREEDATAHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8EB2D0)
#define STATETREECORE_STATETREEDATAHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8EB340)
#define STATETREECORE_STATETREEDATAHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x315EF0)
#define STATETREECORE_STATETREEDATAHANDLE_ISVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x19BD8CA0)
#define STATETREECORE_STATETREEDATAHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19BD8BC0)
#define STATETREECORE_STATETREEDATAHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19BD8C30)
#define STATETREECORE_STATETREEDATAHANDLE_RESET_OFFSET UNITYSDK_OFFSET(0x8EB270)
#define STATETREECORE_STATETREEDATAHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BD8CB0)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8EB180)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x8EB1F0)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x8EB200)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x8EB1F0)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB110)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeDataHandle_TypeDefinitionIndex = 26985;

	struct alignas(4) StateTreeDataHandle
	{
		static ::StateTreeCore::StateTreeDataHandle* StaticGet_Invalid()
		{
			return (::StateTreeCore::StateTreeDataHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x4A80);
		}
		// static const ::System::UInt16 InvalidIndex = 0xFFFF; // 0x0
		::StateTreeCore::StateTreeDataSourceType Source; // 0x10
		::System::UInt16 Index; // 0x14
		::StateTreeCore::StateTreeStateHandle StateHandle; // 0x16

		::System::Void _ctor(::StateTreeCore::StateTreeDataSourceType source)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataSourceType))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE__CTOR_OFFSET))(this, source);
		}

		::System::Void _ctor_1(::StateTreeCore::StateTreeDataSourceType source, ::System::UInt16 index)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataSourceType, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE__CTOR_1_OFFSET))(this, source, index);
		}

		::System::Void _ctor_2(::StateTreeCore::StateTreeDataSourceType source, ::System::UInt16 index, ::StateTreeCore::StateTreeStateHandle stateHandle)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataSourceType, ::System::UInt16, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE__CTOR_2_OFFSET))(this, source, index, stateHandle);
		}

		::System::Void _ctor_3(::StateTreeCore::StateTreeDataSourceType source, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataSourceType, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE__CTOR_3_OFFSET))(this, source, index);
		}

		::System::Void _ctor_4(::StateTreeCore::StateTreeDataSourceType source, ::System::Int32 index, ::StateTreeCore::StateTreeStateHandle stateHandle)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataSourceType, ::System::Int32, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE__CTOR_4_OFFSET))(this, source, index, stateHandle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_RESET_OFFSET))(this);
		}

		::System::Boolean Equals(::StateTreeCore::StateTreeDataHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::StateTreeCore::StateTreeDataHandle lhs, ::StateTreeCore::StateTreeDataHandle rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeDataHandle, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::StateTreeCore::StateTreeDataHandle lhs, ::StateTreeCore::StateTreeDataHandle rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeDataHandle, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean IsValidIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_ISVALIDINDEX_OFFSET))(index);
		}
	};
}
