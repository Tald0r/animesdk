#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define UNREALTYPES_FINSTANCEDSTRUCT_CLONE_OFFSET UNITYSDK_OFFSET(0x973080)
#define UNREALTYPES_FINSTANCEDSTRUCT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EA300)
#define UNREALTYPES_FINSTANCEDSTRUCT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x8EB380)
#define UNREALTYPES_FINSTANCEDSTRUCT_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define UNREALTYPES_FINSTANCEDSTRUCT_GET_POINTER_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define UNREALTYPES_FINSTANCEDSTRUCT_GET_SCRIPTSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C6230)
#define UNREALTYPES_FINSTANCEDSTRUCT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9731B0)
#define UNREALTYPES_FINSTANCEDSTRUCT_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x973150)
#define UNREALTYPES_FINSTANCEDSTRUCT_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x1AFC4190)
#define UNREALTYPES_FINSTANCEDSTRUCT_RESET_OFFSET UNITYSDK_OFFSET(0x972E90)
#define UNREALTYPES_FINSTANCEDSTRUCT_SETSTRUCTDATA_OFFSET UNITYSDK_OFFSET(0x9730A0)
#define UNREALTYPES_FINSTANCEDSTRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFC4210)
#define UNREALTYPES_FINSTANCEDSTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x973010)

namespace UnrealTypes
{
	inline static constexpr unsigned int FInstancedStruct_TypeDefinitionIndex = 23987;

	struct alignas(8) FInstancedStruct
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FInstancedStruct_TypeDefinitionIndex)->GetStaticField(0x4750);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FInstancedStruct_TypeDefinitionIndex)->GetStaticField(0x4754);
		}
		::System::Void* _structMemory; // 0x10
		::UnrealTypes::FStructHandle _scriptStruct; // 0x18
		::Unity::Collections::Allocator _allocator; // 0x1C

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT__CTOR_OFFSET))(this, allocator);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_GET_ISVALID_OFFSET))(this);
		}

		::System::Void* get_Memory()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_GET_MEMORY_OFFSET))(this);
		}

		::System::IntPtr get_Pointer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_GET_POINTER_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_ScriptStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_GET_SCRIPTSTRUCT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_RESET_OFFSET))(this);
		}

		::UnrealTypes::FInstancedStruct Clone()
		{
			return ((::UnrealTypes::FInstancedStruct(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_CLONE_OFFSET))(this);
		}

		::System::Void SetStructData(::System::UInt32 typeId, ::System::Void* memory)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_SETSTRUCTDATA_OFFSET))(this, typeId, memory);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_REGISTERTYPE_OFFSET))();
		}
	};
}
