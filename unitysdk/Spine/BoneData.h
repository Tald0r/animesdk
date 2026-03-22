#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/TransformMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_BONEDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1B040B10)
#define SPINE_BONEDATA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B040B40)
#define SPINE_BONEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B040B20)
#define SPINE_BONEDATA_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1B040B30)
#define SPINE_BONEDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B040BA0)
#define SPINE_BONEDATA_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1B040BC0)
#define SPINE_BONEDATA_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1B040BE0)
#define SPINE_BONEDATA_GET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1B040C00)
#define SPINE_BONEDATA_GET_SHEARY_OFFSET UNITYSDK_OFFSET(0x1B040C20)
#define SPINE_BONEDATA_GET_SKINREQUIRED_OFFSET UNITYSDK_OFFSET(0x1B040C60)
#define SPINE_BONEDATA_GET_TRANSFORMMODE_OFFSET UNITYSDK_OFFSET(0x1B040C40)
#define SPINE_BONEDATA_GET_X_OFFSET UNITYSDK_OFFSET(0x1B040B60)
#define SPINE_BONEDATA_GET_Y_OFFSET UNITYSDK_OFFSET(0x1B040B80)
#define SPINE_BONEDATA_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B040B50)
#define SPINE_BONEDATA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B040BB0)
#define SPINE_BONEDATA_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1B040BD0)
#define SPINE_BONEDATA_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1B040BF0)
#define SPINE_BONEDATA_SET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1B040C10)
#define SPINE_BONEDATA_SET_SHEARY_OFFSET UNITYSDK_OFFSET(0x1B040C30)
#define SPINE_BONEDATA_SET_SKINREQUIRED_OFFSET UNITYSDK_OFFSET(0x1B040C70)
#define SPINE_BONEDATA_SET_TRANSFORMMODE_OFFSET UNITYSDK_OFFSET(0x1B040C50)
#define SPINE_BONEDATA_SET_X_OFFSET UNITYSDK_OFFSET(0x1B040B70)
#define SPINE_BONEDATA_SET_Y_OFFSET UNITYSDK_OFFSET(0x1B040B90)
#define SPINE_BONEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B040D60)
#define SPINE_BONEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B040C80)

namespace Spine
{
	inline static constexpr unsigned int BoneData_TypeDefinitionIndex = 29837;

	class BoneData : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Spine::BoneData* parent; // 0x18
		::System::Int32 index; // 0x20
		::System::Single length; // 0x24
		::System::Single rotation; // 0x28
		::Spine::TransformMode transformMode; // 0x2C
		::System::Single y; // 0x30
		::System::Single scaleX; // 0x34
		::System::Single shearY; // 0x38
		::System::Single shearX; // 0x3C
		::System::Single scaleY; // 0x40
		::System::Single x; // 0x44
		::System::Boolean skinRequired; // 0x48

		::System::Void _ctor(::System::Int32 index, ::System::String* name, ::Spine::BoneData* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_BONEDATA__CTOR_OFFSET))(this, index, name, parent);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_INDEX_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_NAME_OFFSET))(this);
		}

		::Spine::BoneData* get_Parent()
		{
			return ((::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_PARENT_OFFSET))(this);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_LENGTH_OFFSET))(this, value);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_X_OFFSET))(this, value);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_Y_OFFSET))(this, value);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Single get_ScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SCALEX_OFFSET))(this);
		}

		::System::Void set_ScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SCALEX_OFFSET))(this, value);
		}

		::System::Single get_ScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SCALEY_OFFSET))(this);
		}

		::System::Void set_ScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SCALEY_OFFSET))(this, value);
		}

		::System::Single get_ShearX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SHEARX_OFFSET))(this);
		}

		::System::Void set_ShearX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SHEARX_OFFSET))(this, value);
		}

		::System::Single get_ShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SHEARY_OFFSET))(this);
		}

		::System::Void set_ShearY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SHEARY_OFFSET))(this, value);
		}

		::Spine::TransformMode get_TransformMode()
		{
			return ((::Spine::TransformMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_TRANSFORMMODE_OFFSET))(this);
		}

		::System::Void set_TransformMode(::Spine::TransformMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TransformMode))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_TRANSFORMMODE_OFFSET))(this, value);
		}

		::System::Boolean get_SkinRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SKINREQUIRED_OFFSET))(this);
		}

		::System::Void set_SkinRequired(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SKINREQUIRED_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_TOSTRING_OFFSET))(this);
		}
	};
}
