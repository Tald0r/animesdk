#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_CONTAINER_NATIVEHASHSETELEMENTID_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x5F21B0)
#define FOUNDATION_CONTAINER_NATIVEHASHSETELEMENTID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB2E9C0)
#define FOUNDATION_CONTAINER_NATIVEHASHSETELEMENTID__CTOR_OFFSET UNITYSDK_OFFSET(0x2C3980)

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeHashSetElementId_TypeDefinitionIndex = 9111;

	struct alignas(8) NativeHashSetElementId
	{
		static ::Foundation::Container::NativeHashSetElementId* StaticGet_Null()
		{
			return (::Foundation::Container::NativeHashSetElementId*)Il2CppClass::FromTypeDefinitionIndex(NativeHashSetElementId_TypeDefinitionIndex)->GetStaticField(0x3F00);
		}
		::System::Int64 Index; // 0x10

		::System::Void _ctor(::System::Int64 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_NATIVEHASHSETELEMENTID__CTOR_OFFSET))(this, index);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_NATIVEHASHSETELEMENTID__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_NATIVEHASHSETELEMENTID_GET_ISNULL_OFFSET))(this);
		}
	};
}
