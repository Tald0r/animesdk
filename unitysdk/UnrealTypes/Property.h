#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/UnrealTypes/FPropertyHandle.h"
#include "unitysdk/UnrealTypes/Field.h"
#include "unitysdk/UnrealTypes/PropertyFlags.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class PropertyParamsBase; }

#define UNREALTYPES_PROPERTY_CONTAINERPTRTOVALUEPTRINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A20C9D0)
#define UNREALTYPES_PROPERTY_CONTAINERPTRTOVALUEPTR_1_OFFSET UNITYSDK_OFFSET(0x1A20C9F0)
#define UNREALTYPES_PROPERTY_CONTAINERPTRTOVALUEPTR_OFFSET UNITYSDK_OFFSET(0x1A204E30)
#define UNREALTYPES_PROPERTY_COPYCOMPLETEVALUEINCONTAINER_OFFSET UNITYSDK_OFFSET(0x1A20C970)
#define UNREALTYPES_PROPERTY_COPYCOMPLETEVALUE_OFFSET UNITYSDK_OFFSET(0x1A20C8A0)
#define UNREALTYPES_PROPERTY_COPYVALUESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A20C900)
#define UNREALTYPES_PROPERTY_GET_MINALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A20C680)
#define UNREALTYPES_PROPERTY_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A20C690)
#define UNREALTYPES_PROPERTY_INIT_OFFSET UNITYSDK_OFFSET(0x1A20C6A0)
#define UNREALTYPES_PROPERTY_ISSAMETYPE_OFFSET UNITYSDK_OFFSET(0x1A20C860)
#define UNREALTYPES_PROPERTY_LINKWITHOUTCHANGINGOFFSET_OFFSET UNITYSDK_OFFSET(0x1A20C840)
#define UNREALTYPES_PROPERTY_LINK_OFFSET UNITYSDK_OFFSET(0x1A202830)
#define UNREALTYPES_PROPERTY_SETUPOFFSET_OFFSET UNITYSDK_OFFSET(0x1A20C780)
#define UNREALTYPES_PROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A202730)
#define UNREALTYPES_PROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A204C50)

namespace UnrealTypes
{
	inline static constexpr unsigned int Property_TypeDefinitionIndex = 24758;

	class Property : public ::UnrealTypes::Field
	{
	public:
		::UnrealTypes::Property* PropertyLinkNext; // 0x38
		::UnrealTypes::PropertyFlags PropertyFlags; // 0x40
		::System::Int32 ArrayDim; // 0x44
		::System::Int32 OffsetInternal; // 0x48
		::UnrealTypes::FPropertyHandle PropertyHandle; // 0x4C
		::System::Int32 ElementSize; // 0x50

		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::PropertyParamsBase* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::PropertyParamsBase*))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}

		::System::Int32 get_MinAlignment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_GET_MINALIGNMENT_OFFSET))(this);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_GET_SIZE_OFFSET))(this);
		}

		::System::Int32 SetupOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_SETUPOFFSET_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_INIT_OFFSET))(this);
		}

		::System::Void LinkWithoutChangingOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_LINKWITHOUTCHANGINGOFFSET_OFFSET))(this);
		}

		::System::Int32 Link()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_LINK_OFFSET))(this);
		}

		::System::Boolean IsSameType(::UnrealTypes::Property* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_ISSAMETYPE_OFFSET))(this, other);
		}

		::System::Void CopyCompleteValue(::System::Void* dest, ::System::Void* src)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_COPYCOMPLETEVALUE_OFFSET))(this, dest, src);
		}

		::System::Void CopyValuesInternal(::System::Void* dest, ::System::Void* src, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_COPYVALUESINTERNAL_OFFSET))(this, dest, src, count);
		}

		::System::Void CopyCompleteValueInContainer(::System::Void* dest, ::System::Void* src)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_COPYCOMPLETEVALUEINCONTAINER_OFFSET))(this, dest, src);
		}

		::System::Void* ContainerPtrToValuePtr(::System::Void* container, ::System::Int32 arrayIndex)
		{
			return ((::System::Void*(*)(::PVOID, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_CONTAINERPTRTOVALUEPTR_OFFSET))(this, container, arrayIndex);
		}

		::System::IntPtr ContainerPtrToValuePtr_1(::System::IntPtr container, ::System::Int32 arrayIndex)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_CONTAINERPTRTOVALUEPTR_1_OFFSET))(this, container, arrayIndex);
		}

		::System::Void* ContainerPtrToValuePtrInternal(::System::Void* container, ::System::Int32 arrayIndex)
		{
			return ((::System::Void*(*)(::PVOID, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_CONTAINERPTRTOVALUEPTRINTERNAL_OFFSET))(this, container, arrayIndex);
		}
	};
}
