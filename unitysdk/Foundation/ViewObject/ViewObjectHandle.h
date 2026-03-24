#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Container/SparseElementHandle_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject { class ViewObject; }
namespace System { class Object; }
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B2A80)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B29B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B2A90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_GET_EMPTYHANDLE_OFFSET UNITYSDK_OFFSET(0xB7F9520)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_GET_ID_OFFSET UNITYSDK_OFFSET(0x3B2960)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x2F1F70)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x3B2970)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB7F9960)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB7F9A90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B2950)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x2EC7B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B2B20)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B2B90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B2BF0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectHandle_TypeDefinitionIndex = 44389;

	struct alignas(8) ViewObjectHandle
	{
		::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*> Handle; // 0x10

		::System::Void _ctor(::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*> handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*>))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE__CTOR_OFFSET))(this, handle);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_TOSTRING_OFFSET))(this);
		}

		static ::Foundation::ViewObject::ViewObjectHandle get_EmptyHandle()
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_GET_EMPTYHANDLE_OFFSET))();
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_GET_INDEX_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean Equals(::Foundation::ViewObject::ViewObjectHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::Foundation::ViewObject::ViewObjectHandle left, ::Foundation::ViewObject::ViewObjectHandle right)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::Foundation::ViewObject::ViewObjectHandle left, ::Foundation::ViewObject::ViewObjectHandle right)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTHANDLE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
