#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B60F0A00B4DBE12A_Class_1_618A19C96A416850.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"

namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_8B4851E3D6B103B5_CLASS_2_21454738431618A8_METHOD_2_9F8864631434A8C7_OFFSET UNITYSDK_OFFSET(0x90ABD60)
#define CLASS_4_8B4851E3D6B103B5_CLASS_2_21454738431618A8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x90ABDE0)
#define CLASS_4_8B4851E3D6B103B5_CLASS_2_21454738431618A8__CTOR_OFFSET UNITYSDK_OFFSET(0x90ABD50)

inline static constexpr unsigned int Class_4_8B4851E3D6B103B5_Class_2_21454738431618A8_TypeDefinitionIndex = 39685;

class Class_4_8B4851E3D6B103B5_Class_2_21454738431618A8 : public ::Class_3_B60F0A00B4DBE12A_Class_1_618A19C96A416850
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x58
	::System::Single Field_2_5; // 0x60
	::System::Int32 Field_2_2; // 0x64
	::Enum_3_205B03D40B9BD873 Field_2_7; // 0x68
	::System::Single Field_2_6; // 0x6C
	::System::Int32 Field_2_1; // 0x70
	::System::Boolean Field_2_3; // 0x74
	::System::Int32 Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8B4851E3D6B103B5_CLASS_2_21454738431618A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9F8864631434A8C7(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_8B4851E3D6B103B5_CLASS_2_21454738431618A8_METHOD_2_9F8864631434A8C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8B4851E3D6B103B5_CLASS_2_21454738431618A8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
