#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_CONSTRAINTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B074770)
#define SPINE_CONSTRAINTDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B074780)
#define SPINE_CONSTRAINTDATA_GET_SKINREQUIRED_OFFSET UNITYSDK_OFFSET(0x1B0747A0)
#define SPINE_CONSTRAINTDATA_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B074790)
#define SPINE_CONSTRAINTDATA_SET_SKINREQUIRED_OFFSET UNITYSDK_OFFSET(0x1B0747B0)
#define SPINE_CONSTRAINTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B0747C0)
#define SPINE_CONSTRAINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B074700)

namespace Spine
{
	inline static constexpr unsigned int ConstraintData_TypeDefinitionIndex = 29839;

	class ConstraintData : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 order; // 0x18
		::System::Boolean skinRequired; // 0x1C

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_CONSTRAINTDATA__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CONSTRAINTDATA_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CONSTRAINTDATA_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_CONSTRAINTDATA_SET_ORDER_OFFSET))(this, value);
		}

		::System::Boolean get_SkinRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CONSTRAINTDATA_GET_SKINREQUIRED_OFFSET))(this);
		}

		::System::Void set_SkinRequired(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_CONSTRAINTDATA_SET_SKINREQUIRED_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CONSTRAINTDATA_TOSTRING_OFFSET))(this);
		}
	};
}
