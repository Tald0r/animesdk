#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_ABD124B5F6AA3EA8_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x627ADB0)
#define CLASS_3_ABD124B5F6AA3EA8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x627B2B0)
#define CLASS_3_ABD124B5F6AA3EA8_METHOD_3_F289A5A170401D6B_OFFSET UNITYSDK_OFFSET(0x627B010)
#define CLASS_3_ABD124B5F6AA3EA8__CTOR_OFFSET UNITYSDK_OFFSET(0x627B0E0)

inline static constexpr unsigned int Class_3_ABD124B5F6AA3EA8_TypeDefinitionIndex = 41061;

class Class_3_ABD124B5F6AA3EA8 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_3_B537A0AA78803363* Field_3_3; // 0x20
	::Class_3_B537A0AA78803363* Field_3_2; // 0x28
	::Class_4_AF61EEC11F34483C<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABD124B5F6AA3EA8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABD124B5F6AA3EA8_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_F289A5A170401D6B(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_ABD124B5F6AA3EA8_METHOD_3_F289A5A170401D6B_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABD124B5F6AA3EA8_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
