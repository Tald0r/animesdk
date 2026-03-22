#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define UNREALTYPES_FSTRUCTVIEW_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x8EB380)
#define UNREALTYPES_FSTRUCTVIEW_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define UNREALTYPES_FSTRUCTVIEW_GET_POINTER_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define UNREALTYPES_FSTRUCTVIEW_GET_SCRIPTSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C6230)
#define UNREALTYPES_FSTRUCTVIEW_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AFC3BB0)
#define UNREALTYPES_FSTRUCTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x973490)

namespace UnrealTypes
{
	inline static constexpr unsigned int FStructView_TypeDefinitionIndex = 23995;

	struct alignas(8) FStructView
	{
		::System::Void* _structMemory; // 0x10
		::UnrealTypes::FStructHandle _scriptStruct; // 0x18

		::System::Void _ctor(::UnrealTypes::FStructHandle& scriptStruct, ::System::Void* structMemory)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle&, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTVIEW__CTOR_OFFSET))(this, scriptStruct, structMemory);
		}

		::System::Void* get_Memory()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTVIEW_GET_MEMORY_OFFSET))(this);
		}

		::System::IntPtr get_Pointer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTVIEW_GET_POINTER_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_ScriptStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTVIEW_GET_SCRIPTSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTVIEW_GET_ISVALID_OFFSET))(this);
		}

		/*
		static ::UnrealTypes::FStructView op_Implicit(::UnrealTypes::FInstancedStruct& instancedStruct)
		{
			return ((::UnrealTypes::FStructView(*)(::UnrealTypes::FInstancedStruct&))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTVIEW_OP_IMPLICIT_OFFSET))(instancedStruct);
		}
		*/
	};
}
