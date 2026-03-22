#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ABS_OFFSET UNITYSDK_OFFSET(0x93B0C00)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ADD_OFFSET UNITYSDK_OFFSET(0x361B30)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_AVG_OFFSET UNITYSDK_OFFSET(0x93B0B80)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_DELTA_OFFSET UNITYSDK_OFFSET(0x361A90)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_DIV_OFFSET UNITYSDK_OFFSET(0x361CD0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_END_OFFSET UNITYSDK_OFFSET(0x93B06D0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x361E20)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x361D70)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x361E30)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISENDEQUALTHAN_OFFSET UNITYSDK_OFFSET(0x3618C0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISENDTHAN_OFFSET UNITYSDK_OFFSET(0x361830)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISSTARTEQUALTHAN_OFFSET UNITYSDK_OFFSET(0x3617A0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISSTARTTHAN_OFFSET UNITYSDK_OFFSET(0x361710)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x93B0A20)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_LERP_OFFSET UNITYSDK_OFFSET(0x93B0840)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_MUL_OFFSET UNITYSDK_OFFSET(0x361C40)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x93B1540)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x93B09C0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x93B1650)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_SIGN_OFFSET UNITYSDK_OFFSET(0x361D60)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_START_OFFSET UNITYSDK_OFFSET(0x93B0560)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_SUB_OFFSET UNITYSDK_OFFSET(0x361BB0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_TOEND_OFFSET UNITYSDK_OFFSET(0x3619F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_TOSTART_OFFSET UNITYSDK_OFFSET(0x361950)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x361680)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x361660)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x361EC0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x361F20)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x361F80)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollFloat_TypeDefinitionIndex = 74729;

	struct alignas(4) ScrollFloat
	{
		::System::Single value; // 0x10
		::System::Boolean _vertical; // 0x14

		::System::Void _ctor(::System::Single value, ::System::Boolean vertical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT__CTOR_OFFSET))(this, value, vertical);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_TOSTRING_OFFSET))(this);
		}

		static ::NAPScrollView::DataStruct::ScrollFloat Start(::NAPScrollView::DataStruct::ScrollFloat a, ::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_START_OFFSET))(a, b);
		}

		static ::NAPScrollView::DataStruct::ScrollFloat End(::NAPScrollView::DataStruct::ScrollFloat a, ::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_END_OFFSET))(a, b);
		}

		static ::NAPScrollView::DataStruct::ScrollFloat Lerp(::NAPScrollView::DataStruct::ScrollFloat a, ::NAPScrollView::DataStruct::ScrollFloat b, ::System::Single t)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_LERP_OFFSET))(a, b, t);
		}

		static ::NAPScrollView::DataStruct::ScrollFloat LerpUnclamped(::NAPScrollView::DataStruct::ScrollFloat a, ::NAPScrollView::DataStruct::ScrollFloat b, ::System::Single t)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::NAPScrollView::DataStruct::ScrollFloat Avg(::NAPScrollView::DataStruct::ScrollFloat a, ::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_AVG_OFFSET))(a, b);
		}

		static ::NAPScrollView::DataStruct::ScrollFloat Abs(::NAPScrollView::DataStruct::ScrollFloat a)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ABS_OFFSET))(a);
		}

		::System::Boolean IsStartThan(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISSTARTTHAN_OFFSET))(this, b);
		}

		::System::Boolean IsStartEqualThan(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISSTARTEQUALTHAN_OFFSET))(this, b);
		}

		::System::Boolean IsEndThan(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISENDTHAN_OFFSET))(this, b);
		}

		::System::Boolean IsEndEqualThan(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISENDEQUALTHAN_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat ToStart(::System::Single delta)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_TOSTART_OFFSET))(this, delta);
		}

		::NAPScrollView::DataStruct::ScrollFloat ToEnd(::System::Single delta)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_TOEND_OFFSET))(this, delta);
		}

		::NAPScrollView::DataStruct::ScrollFloat Delta(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_DELTA_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat Add(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ADD_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat Sub(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_SUB_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat Mul(::System::Single b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_MUL_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat Div(::System::Single b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_DIV_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat Sign()
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_SIGN_OFFSET))(this);
		}

		static ::System::Single op_Implicit(::NAPScrollView::DataStruct::ScrollFloat scrollFloat)
		{
			return ((::System::Single(*)(::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_OP_IMPLICIT_OFFSET))(scrollFloat);
		}

		::System::Boolean Equals(::NAPScrollView::DataStruct::ScrollFloat other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::NAPScrollView::DataStruct::ScrollFloat left, ::NAPScrollView::DataStruct::ScrollFloat right)
		{
			return ((::System::Boolean(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::NAPScrollView::DataStruct::ScrollFloat left, ::NAPScrollView::DataStruct::ScrollFloat right)
		{
			return ((::System::Boolean(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
