#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define UNREALTYPES_FREADONLYSTRUCTVIEW_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define UNREALTYPES_FREADONLYSTRUCTVIEW_GET_SCRIPTSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C6230)
#define UNREALTYPES_FREADONLYSTRUCTVIEW_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1AFC4F50)
#define UNREALTYPES_FREADONLYSTRUCTVIEW_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AFC51D0)
#define UNREALTYPES_FREADONLYSTRUCTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x973490)

namespace UnrealTypes
{
	inline static constexpr unsigned int FReadonlyStructView_TypeDefinitionIndex = 23996;

	struct alignas(8) FReadonlyStructView
	{
		::System::Void* _structMemory; // 0x10
		::UnrealTypes::FStructHandle _scriptStruct; // 0x18

		::System::Void _ctor(::UnrealTypes::FStructHandle& scriptStruct, ::System::Void* structMemory)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle&, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW__CTOR_OFFSET))(this, scriptStruct, structMemory);
		}

		::System::Void* get_Memory()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW_GET_MEMORY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_ScriptStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW_GET_SCRIPTSTRUCT_OFFSET))(this);
		}

		/*
		static ::UnrealTypes::FReadonlyStructView op_Implicit(::UnrealTypes::FStructView& structView)
		{
			return ((::UnrealTypes::FReadonlyStructView(*)(::UnrealTypes::FStructView&))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW_OP_IMPLICIT_OFFSET))(structView);
		}
		*/

		/*
		static ::UnrealTypes::FReadonlyStructView op_Implicit_1(::UnrealTypes::FInstancedStruct& instancedStruct)
		{
			return ((::UnrealTypes::FReadonlyStructView(*)(::UnrealTypes::FInstancedStruct&))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW_OP_IMPLICIT_1_OFFSET))(instancedStruct);
		}
		*/
	};
}
