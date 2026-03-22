#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_E21759A7CF728BC5_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xDDF5890)
#define CLASS_3_E21759A7CF728BC5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDDF6630)
#define CLASS_3_E21759A7CF728BC5_METHOD_3_FB81EBE81ABB70A0_OFFSET UNITYSDK_OFFSET(0xDDF5C80)
#define CLASS_3_E21759A7CF728BC5__CTOR_OFFSET UNITYSDK_OFFSET(0xDDF6340)

inline static constexpr unsigned int Class_3_E21759A7CF728BC5_TypeDefinitionIndex = 79117;

class Class_3_E21759A7CF728BC5 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_AF61EEC11F34483C<::System::Int32>* Field_3_3; // 0x18
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x20
	::Class_3_B537A0AA78803363* Field_3_6; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_1; // 0x38
	::Class_3_B537A0AA78803363* Field_3_4; // 0x40
	::Class_3_B537A0AA78803363* Field_3_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E21759A7CF728BC5__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E21759A7CF728BC5_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_FB81EBE81ABB70A0(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_E21759A7CF728BC5_METHOD_3_FB81EBE81ABB70A0_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E21759A7CF728BC5_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
