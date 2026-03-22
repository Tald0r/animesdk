#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_398;
namespace System { class String; }

#define CLASS_4_43920C759BB558D0_CLASS_1_4A0EA615041C0C46_METHOD_1_1693DEE43536AC26_OFFSET UNITYSDK_OFFSET(0x99F1BA0)
#define CLASS_4_43920C759BB558D0_CLASS_1_4A0EA615041C0C46__CTOR_OFFSET UNITYSDK_OFFSET(0x99F1B90)

inline static constexpr unsigned int Class_4_43920C759BB558D0_Class_1_4A0EA615041C0C46_TypeDefinitionIndex = 40061;

class Class_4_43920C759BB558D0_Class_1_4A0EA615041C0C46 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_1; // 0x18
	::System::String* Field_1_3; // 0x48
	::Struct_2_FE9BD044832BC9C3 Field_1_6; // 0x50
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x80
	::System::UInt32 Field_1_4; // 0x90
	::System::Int32 Field_1_5; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_43920C759BB558D0_CLASS_1_4A0EA615041C0C46__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1693DEE43536AC26(::System::Boolean a1, ::Class_3_025FF4981524A424_398* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_398*))((::PBYTE)hIl2Cpp + CLASS_4_43920C759BB558D0_CLASS_1_4A0EA615041C0C46_METHOD_1_1693DEE43536AC26_OFFSET))(this, a1, a2);
	}
};
