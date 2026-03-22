#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FNAMEENTRYHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x96DE50)
#define FOUNDATION_UNREAL_FNAMEENTRYHANDLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1AF49020)
#define FOUNDATION_UNREAL_FNAMEENTRYHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AF49010)
#define FOUNDATION_UNREAL_FNAMEENTRYHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF49030)
#define FOUNDATION_UNREAL_FNAMEENTRYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x2D3730)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNameEntryHandle_TypeDefinitionIndex = 8834;

	struct alignas(4) FNameEntryHandle
	{
		static ::Foundation::Unreal::FNameEntryHandle* StaticGet_None()
		{
			return (::Foundation::Unreal::FNameEntryHandle*)Il2CppClass::FromTypeDefinitionIndex(FNameEntryHandle_TypeDefinitionIndex)->GetStaticField(0x3D20);
		}
		static ::Foundation::Unreal::FNameEntryHandle* StaticGet_Invalid()
		{
			return (::Foundation::Unreal::FNameEntryHandle*)Il2CppClass::FromTypeDefinitionIndex(FNameEntryHandle_TypeDefinitionIndex)->GetStaticField(0x3D28);
		}
		::System::UInt32 Block; // 0x10
		::System::UInt32 Offset; // 0x14

		::System::Void _ctor(::System::UInt32 block, ::System::UInt32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYHANDLE__CTOR_OFFSET))(this, block, offset);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYHANDLE_GET_ISVALID_OFFSET))(this);
		}

		/*
		static ::Foundation::Unreal::FNameEntryHandle op_Implicit(::Foundation::Unreal::FNameEntryId entryId)
		{
			return ((::Foundation::Unreal::FNameEntryHandle(*)(::Foundation::Unreal::FNameEntryId))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYHANDLE_OP_IMPLICIT_OFFSET))(entryId);
		}
		*/

		/*
		static ::Foundation::Unreal::FNameEntryId op_Implicit_1(::Foundation::Unreal::FNameEntryHandle handle)
		{
			return ((::Foundation::Unreal::FNameEntryId(*)(::Foundation::Unreal::FNameEntryHandle))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYHANDLE_OP_IMPLICIT_1_OFFSET))(handle);
		}
		*/
	};
}
