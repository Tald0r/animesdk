#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define STATETREECORE_STATETREEDATAVIEW_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x8EB380)
#define STATETREECORE_STATETREEDATAVIEW_GET_STRUCT_OFFSET UNITYSDK_OFFSET(0x2C6230)
#define STATETREECORE_STATETREEDATAVIEW_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x19BD8D50)
#define STATETREECORE_STATETREEDATAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x2FB050)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeDataView_TypeDefinitionIndex = 26986;

	struct alignas(8) StateTreeDataView
	{
		::UnrealTypes::FStructView _view; // 0x10

		::System::Void _ctor(::UnrealTypes::FStructView& structView)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructView&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW__CTOR_OFFSET))(this, structView);
		}

		/*
		::UnrealTypes::FStructHandle get_Struct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW_GET_STRUCT_OFFSET))(this);
		}
		*/

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW_GET_ISVALID_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeDataView op_Implicit(::UnrealTypes::FStructView& structView)
		{
			return ((::StateTreeCore::StateTreeDataView(*)(::UnrealTypes::FStructView&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW_OP_IMPLICIT_OFFSET))(structView);
		}
	};
}
