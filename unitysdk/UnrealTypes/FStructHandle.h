#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class Type; }

#define UNREALTYPES_FSTRUCTHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3275B0)
#define UNREALTYPES_FSTRUCTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x973580)
#define UNREALTYPES_FSTRUCTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define UNREALTYPES_FSTRUCTHANDLE_GET_ALIGNEDSIZE_OFFSET UNITYSDK_OFFSET(0x973450)
#define UNREALTYPES_FSTRUCTHANDLE_GET_BASESTRUCT_OFFSET UNITYSDK_OFFSET(0x973530)
#define UNREALTYPES_FSTRUCTHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x3B0960)
#define UNREALTYPES_FSTRUCTHANDLE_GET_MINALIGNMENT_OFFSET UNITYSDK_OFFSET(0x973460)
#define UNREALTYPES_FSTRUCTHANDLE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x973550)
#define UNREALTYPES_FSTRUCTHANDLE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x973540)
#define UNREALTYPES_FSTRUCTHANDLE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x973560)
#define UNREALTYPES_FSTRUCTHANDLE_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x973570)
#define UNREALTYPES_FSTRUCTHANDLE_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0x9735E0)
#define UNREALTYPES_FSTRUCTHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AFC5700)
#define UNREALTYPES_FSTRUCTHANDLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1AFC4070)
#define UNREALTYPES_FSTRUCTHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AFC5710)
#define UNREALTYPES_FSTRUCTHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFC58A0)
#define UNREALTYPES_FSTRUCTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x2D3600)

namespace UnrealTypes
{
	inline static constexpr unsigned int FStructHandle_TypeDefinitionIndex = 23980;

	struct alignas(4) FStructHandle
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Invalid()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FStructHandle_TypeDefinitionIndex)->GetStaticField(0x4740);
		}
		::System::Int32 _typeIndex; // 0x10

		::System::Void _ctor(::System::Int32 typeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE__CTOR_OFFSET))(this, typeIndex);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_BaseStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_GET_BASESTRUCT_OFFSET))(this);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_GET_TYPEID_OFFSET))(this);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_GET_SIZE_OFFSET))(this);
		}

		::System::Int32 get_MinAlignment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_GET_MINALIGNMENT_OFFSET))(this);
		}

		::System::Int32 get_AlignedSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_GET_ALIGNEDSIZE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_GET_TYPE_OFFSET))(this);
		}

		::System::Object* get_VirtualProxy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::UnrealTypes::FStructHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::UnrealTypes::FStructHandle lhs, ::UnrealTypes::FStructHandle rhs)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FStructHandle, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnrealTypes::FStructHandle lhs, ::UnrealTypes::FStructHandle rhs)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FStructHandle, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		static ::UnrealTypes::FStructHandle op_Explicit(::System::UInt32 typeId)
		{
			return ((::UnrealTypes::FStructHandle(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_OP_EXPLICIT_OFFSET))(typeId);
		}

		::System::Boolean IsChildOf(::UnrealTypes::FStructHandle someBase)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTHANDLE_ISCHILDOF_OFFSET))(this, someBase);
		}
	};
}
