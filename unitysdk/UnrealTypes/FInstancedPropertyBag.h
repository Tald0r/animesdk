#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FInstancedStruct.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define UNREALTYPES_FINSTANCEDPROPERTYBAG_CLONE_OFFSET UNITYSDK_OFFSET(0x972F00)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EA300)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GETMUTABLEVALUE_OFFSET UNITYSDK_OFFSET(0x972F30)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x8EB380)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_PROPERTYBAGSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C6230)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x972FB0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x972F50)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x1AFC3C90)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_RESET_OFFSET UNITYSDK_OFFSET(0x972E90)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFC3D10)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA260)

namespace UnrealTypes
{
	inline static constexpr unsigned int FInstancedPropertyBag_TypeDefinitionIndex = 23994;

	struct alignas(8) FInstancedPropertyBag
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FInstancedPropertyBag_TypeDefinitionIndex)->GetStaticField(0x4730);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FInstancedPropertyBag_TypeDefinitionIndex)->GetStaticField(0x4734);
		}
		::UnrealTypes::FInstancedStruct _value; // 0x10

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG__CTOR_OFFSET))(this, allocator);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_ISVALID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_PropertyBagStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_PROPERTYBAGSTRUCT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_RESET_OFFSET))(this);
		}

		::UnrealTypes::FInstancedPropertyBag Clone()
		{
			return ((::UnrealTypes::FInstancedPropertyBag(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_CLONE_OFFSET))(this);
		}

		/*
		::UnrealTypes::FStructView GetMutableValue()
		{
			return ((::UnrealTypes::FStructView(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GETMUTABLEVALUE_OFFSET))(this);
		}
		*/

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_REGISTERTYPE_OFFSET))();
		}
	};
}
